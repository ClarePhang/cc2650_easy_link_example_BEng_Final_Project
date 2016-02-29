//******************************************************************************
//! @file       cc13xx_easy_link_rx.c
//! @brief      
//!
//! Revised     $Date:
//! Revision    $Revision:
//
//  Copyright (C) 2013 Texas Instruments Incorporated - http://www.ti.com/
//
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions
//  are met:
//
//    Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
//
//    Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
//    Neither the name of Texas Instruments Incorporated nor the names of
//    its contributors may be used to endorse or promote products derived
//    from this software without specific prior written permission.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
//  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
//  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
//  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
//  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
//  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
//  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
//  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
//  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//*****************************************************************************/


/*******************************************************************************
* INCLUDES
*/
#include "stdlib.h"

// Synth calibration fix
#include "cc13xx_init_lib.h"

// BSP
#include "bsp.h"
#include "bsp_key.h"
#include "bsp_led.h"

// LCD
#include "lcd_dogm128_6.h"

// Chip specific
#include "prcm.h"
#include "cpu.h"
#include "interrupt.h"
#include "hw_ints.h"
#include "pwr_ctrl.h"
#include "rfc.h"

// RF Core
#include "common_cmd.h"
#include "prop_cmd.h"
#include "prop_mailbox.h"
#include "hw_rfc_dbell.h"
#include "hw_rfc_pwr.h"
#include "hw_adi_0_rf.h"
#include "radio_par.h"

// RF Core Patches
#define SYS_PATCH_TYPE static uint32_t
#include "apply_patch.h"
#include "apply_genfsk_rfe_patch.h"
#include "apply_genfsk_mce_patch.h"

// RF dataqueue headers
#include "data_entry.h"


/*******************************************************************************
* LOCAL FUNCTION PROTOTYPES
*/
static void appError(void);
static void appRfDataQueueAndAbortIsr(void);
static void appDisplayWelcomeScreen(void);
static void appInitializeLcd(void);
static void appUpdateRxScreen(uint32_t packetReceived);
static void appDcdcOn(uint8_t on);
static void applyPatches(void);


/*******************************************************************************
* DEFINES
*/
#define DATA_ENTRY_HEADER_SIZE 8 // Contant header size of a Generic Data Entry
#define MAX_LENGTH            20 // Max length byte the radio will accept 
                                             
#define DATA_ENTRY_DATA_SIZE (MAX_LENGTH + 2) // The Data Entries data field will contain:
                                              //   - the length indicator (optional)
                                              //   - the payload  
                                              //   - the appended meta-data, rssi etc. (optional)                        

/* Low power LCD mode configuration.
 *   This mode will not initialize the LCD until it has received a configurable amount of packets 
 *   with CRC valid. This will significantly lower the power consumption numbers when searching
 *   for sync and when receiving packets, up until the LCD is turned on. */
#define LOW_POWER_LCD_MODE 0
#define LOW_POWER_LCD_MODE_LCD_ON_PACKETS 500


/****** STEP 0 - Application Initialization *********************************
 *
 * (Outside main function)
 *
 * 1. Declare the RF specific variables.
 *      - These are the variables needed for interracting with the RF Core.
 *
 *      Note:
 *        - All RF Core command structures have to be 4 byte aligned.
 *
 * 2. Declare application specific variables. 
 *      - These are used to control the flow of the EasyLink application. 
 *
 * (Inside main function)
 *
 * 3. Initialize the board, buttons, SPI, LCD and print to LCD.
 * 4. Configure DCDC enable interrupt
 ***************************************************************************/

  /* 0.1. Declare the RF specific variables. */
  /* 0.1.1. All RF Core command structures and Data Entries have to be 4 byte aligned */
  #pragma data_alignment = 4
  static rfc_CMD_PROP_RADIO_SETUP_t propSetupCommand;
  #pragma data_alignment = 4
  static rfc_CMD_PROP_RX_t rxCommand;
  #pragma data_alignment = 4
  static rfc_CMD_FS_t fsCommand;
  #pragma data_alignment = 4
  static rfc_CMD_WRITE_RFREG_t writeRfRegCommand;
  
  #pragma data_alignment = 4
  static uint8_t rxDataEntry0Buffer[DATA_ENTRY_HEADER_SIZE + DATA_ENTRY_DATA_SIZE];
  #pragma data_alignment = 4
  static uint8_t rxDataEntry1Buffer[DATA_ENTRY_HEADER_SIZE + DATA_ENTRY_DATA_SIZE];
 
  /* 0.1.2. Non-aligned RF specific variables */
  static uint32_t propOverridesArray[32];
  static uint32_t* propOverrides = propOverridesArray;
  static rfc_propRxOutput_t rxStatistics;
  static uint32_t scaledFreq;
  static uint16_t realFrequency;
  static uint16_t realFractFreq;
  
  /* Data Entries used in RX */
  static rfc_dataEntry_t* dataEntry0 = (rfc_dataEntry_t*)&rxDataEntry0Buffer;
  static rfc_dataEntry_t* dataEntry1 = (rfc_dataEntry_t*)&rxDataEntry1Buffer;

  /* Receive dataQueue for RF Core to fill in data */
  static dataQueue_t dataQueue;
  
  /* Receive entry pointer to keep track of read items */
  volatile static rfc_dataEntry_t* readEntry;

  /* 0.2. Declare application specific variables. */
  static uint32_t packetReceived;
  static bool received = false;
  static bool lowPowerLcdOn = false;
  static uint32_t domainsToPowerOff = PRCM_DOMAIN_VIMS   |  
                                      PRCM_DOMAIN_SYSBUS |
                                      PRCM_DOMAIN_PERIPH |
                                      PRCM_DOMAIN_SERIAL |
                                      PRCM_DOMAIN_CPU;
  static const char pLcdTiLogo[1024] =
  {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x78, 0x7E, 0x7E, 0x7E, 0x7E, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE, 0x06, 0x00, 0xE0, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x06, 0x00, 0xE0, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x8F, 0x81, 0x80, 0x80, 0x00, 0x00, 0x80, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0x1F, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF9, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x07, 0x07, 0x0F, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x03, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x00, 0xF0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x3F, 0x7F, 0x7F, 0x7F, 0x7F, 0x3F, 0x1F, 0x0F, 0x0F, 0x07, 0x0F, 0x0F, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xCF, 0x80, 0x00, 0x00, 0x03, 0x03, 0x03, 0x03, 0x03, 0x00, 0x00, 0x00, 0x03, 0x03, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x3F, 0x3F, 0x1F, 0x1F, 0x0F, 0x0F, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 0x1F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0xFE, 0x7F, 0x1F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0F, 0x1F, 0x1F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  };
  
  
/*******************************************************************************
* @brief    PER test main function
*
* @return   None
*******************************************************************************/
main(void)
{  
  /* 0.3. Initialize the board, SPI, LCD and print to LCD.
   *        Note:
   *          - Only do this if we are not in low power LCD mode. If we are in that mode then the
   *            LCD will be initialized at a later stage. */
#if (LOW_POWER_LCD_MODE == 0)
  appInitializeLcd();
#endif
  
  /* 0.4. Configure DCDC and enable interrupt
   *        - Default is DCDC on. */
  appDcdcOn(true);
  IntMasterEnable();
  
  
 
  /****** STEP 1 - RF Core Prerequisites **************************************
   * 1. Switch to HF crystal
   * 2. Enable RF Core power
   * 3. Enable RF Core clocks
   * 4. Send a Ping command to RF Core
   * 5. Wait for Ping response
   ***************************************************************************/
  
  /* 1.1. Switch to external high-speed XTAL. */
  /* Enable OSC DIG interface to change clock sources */
  OSCInterfaceEnable();
  /* Check to not enable XOSC if already enabled */
  if(OSCClockSourceGet(OSC_SRC_CLK_HF) != OSC_XOSC_HF)
  {
    /* Request to switch to the crystal to enable radio operation. */
    OSCClockSourceSet(OSC_SRC_CLK_LF | OSC_SRC_CLK_MF | OSC_SRC_CLK_HF,
                      OSC_XOSC_HF);
    /* Switch the HF source to XTAL - Done via ROM API*/
    OSCHfSourceSwitch();
  }
  /* Disable OSC DIG interface */
  OSCInterfaceDisable();
  
  /* 1.2. Enable RF Core power domain and wait until it's on */
  PRCMPowerDomainOn(PRCM_DOMAIN_RFCORE);
  while(PRCMPowerDomainStatus(PRCM_DOMAIN_RFCORE) != PRCM_DOMAIN_POWER_ON);

  /* 1.3. Enable clocks inside RF Core */
  RFCClockEnable();
  while (HWREG(RFC_PWR_NONBUF_BASE + RFC_PWR_O_PWMCLKEN) != 0x7FF);
  
  /* 1.4. Ping RF Core */
  HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = CMDR_DIR_CMD(CMD_PING);
  
  /* 1.5. Wait for Ping done */
  while( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) == CMDSTA_Pending);
  if( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) != CMDSTA_Done )
    appError();  
  
  
  
  /****** STEP 2 - Setup radio ************************************************
   * 1. Patch RF Core with latest patches
   * 2. Create CMD_PROP_RADIO_SETUP command
   *
   *      Parameter configuration:
   *        - Please see the Proprietary Mode documentation, "cc26xx_pg1_prop_rf_fw_spec".
   *          Also see the "cc26xx_pg1_rfcore_hal" for the command header configuartion.
   *
   *      Overrides:
   *        - Low-level overrides is used in PG1 to indicate that we want to run the 
   *          radio from patch RAM and that we want to program the freq. synth. from
   *          the CM3, instead of CM0. Also configure internal bias and high-impedance 
   *          on RXTX pin.
   *
   * 3. Send CMD_PROP_RADIO_SETUP command
   * 4. Wait until command is done executing
   ***************************************************************************/
  
  /* 2.1. Patch the RF Core */
  applyPatches();
  
  /* 2.2.1 Create CMD_PROP_RADIO_SETUP command */
  /* Command header configuration */
  propSetupCommand.commandNo                = CMD_PROP_RADIO_SETUP;
  propSetupCommand.status                   = IDLE;
  propSetupCommand.pNextOp                  = NULL;
  propSetupCommand.startTime                = 0;
  propSetupCommand.startTrigger.triggerType = TRIG_NOW;
  propSetupCommand.condition.rule           = COND_NEVER;
  
  /* Command specific configuration */
  propSetupCommand.modulation.modType       = 0;                  // FSK
  propSetupCommand.modulation.deviation     = 25 * (4 * 6/2);     // 25 kHz deviation (see docs)
  propSetupCommand.symbolRate.rateWord      = 25165;              // 38.4 ksps (38.399)
  propSetupCommand.symbolRate.preScale      = 15;
  propSetupCommand.symbolRate.bNoFsPowerUp  = 0;                  // Power up freq. synth.
  propSetupCommand.rxBw                     = 2;                  // 110 kHz RX bandwidth
  propSetupCommand.preamConf.nPreamBytes    = 5;                  // 5 bytes preamble
  propSetupCommand.preamConf.preamMode      = 1;                  // Send 1 as first bit
  propSetupCommand.formatConf.nSwBits       = 32;                 // 32 bits sync word
  propSetupCommand.formatConf.bBitReversal  = 0;                  // Positive deviation for '1'
  propSetupCommand.formatConf.bMsbFirst     = 1;                  // Send MSB first
  propSetupCommand.formatConf.whitenMode    = 0;                  // No whitening
  
  /* 2.2.2 Create low-level overrides and add them to the setup command */
  *propOverrides++ = MCE_RFE_OVERRIDE(1, 0, 0, 1, 0, 0); // Run modem patches
  *propOverrides++ =                                     // (PG1 only) Control freq. synth. from CM3
    SW_REG_OVERRIDE(synthPar, config, ((1 << 7) | 1));
  
  /* Configure internal bias and high-impedance on RXTX pin */
  uint32_t lna2Val = ((1 << ADI_0_RF_LNACTL2_RXTX_PIN_S) | (0 << ADI_0_RF_LNACTL2_EXT_BIAS_S));
  *propOverrides++ = ADI_HALFREG_OVERRIDE(0, ADI_0_RF_O_LNACTL2 * 2 + 1, 0xD, (lna2Val >> 4));

  *propOverrides++ = END_OVERRIDE;
  propSetupCommand.pRegOverride = propOverridesArray;
  
  /* 2.3. Send CMD_PROP_RADIO_SETUP command to RF Core */
  HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = (uint32_t)&propSetupCommand;
  
  /* 2.4. Wait until command finished executing */
  /* 2.4.1 First wait until received, parsed and running on RF Core */
  while( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) == CMDSTA_Pending);
  if( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) != CMDSTA_Done )
    appError();  
  
  /* 2.4.2 Wait until command is done executing */
  while( (propSetupCommand.status & 0x0F00) != DONE_OK );
  
  
  
  /****** STEP 3 - Set frequency **********************************************
   * 1. Create CMD_FS command
   * 2. Send CMD_FS command
   * 3. Wait until command is done executing
   * 4. (PG1 only) Configure freq. synth. from CM3
   ***************************************************************************/
  
  /* 3.1.1 Create CMD_FS command */
  /* Command header configuration */
  fsCommand.commandNo = CMD_FS;
  fsCommand.status = IDLE;
  fsCommand.pNextOp = NULL;
  fsCommand.startTime = 0;
  fsCommand.startTrigger.triggerType = TRIG_NOW;
  fsCommand.condition.rule = COND_NEVER;
  
  /* Command specific configuration */
  fsCommand.frequency                   = 868;  // Whole frequency setting
  fsCommand.fractFreq                   = 0;    // Fractional frequency setting
  fsCommand.synthConf.divider           = 6;    // Divider depends on frequency band
  fsCommand.synthConf.bTxMode           = 0;    // Set freq. synth. in TX mode
  fsCommand.calibConf.bOverrideCalib    = 0;    // Configure no form of calibration
  fsCommand.calibConf.bSkipTdcCalib     = 0;    // (Done in CM3 in PG1)
  fsCommand.calibConf.bSkipCoarseCalib  = 0;
  fsCommand.calibConf.bSkipMidCalib     = 0;
  fsCommand.coarsePrecal                = 0;
  fsCommand.midPrecal                   = 0;
  fsCommand.tdcPrecal                   = 0;
  
  /* 3.1.2 (PG1 only) Rescale the frequency based on divider */
  realFrequency = fsCommand.frequency;
  realFractFreq = fsCommand.fractFreq;
  scaledFreq = (((fsCommand.frequency << 16) | fsCommand.fractFreq) *2/fsCommand.synthConf.divider);
  fsCommand.frequency = (scaledFreq >> 16);
  fsCommand.fractFreq = (scaledFreq & 0xFFFF);
  

  /* 3.2. Send CMD_FS command to RF Core */
  HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = (uint32_t)&fsCommand;
  
  /* 3.3. Wait until command finished executing */
  /* 3.3.1. First wait until received, parsed and running on RF Core */
  while( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) == CMDSTA_Pending);
  if( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) != CMDSTA_Done )
    appError();  
  
  /* 3.3.2. Wait until command is done executing */
  while( (fsCommand.status & 0x0F00) != DONE_OK );
  
  /* 3.4. (PG1 only) Configure freq. synth. from CM3 */
  InitLib_startAndCalibrateSynth(((realFrequency << 16) | (realFractFreq)), 
                                 fsCommand.synthConf.divider,
                                 InitLibRadioMode_GenFsk,
                                 InitLibSynthMode_RX,
                                 24);
  
  
  
  /****** STEP 3 - Prepare Data Entries ***************************************
   * 1. Create the two data entries
   * 
   *   Data Entity header: 
   *     - Status of entry:
   *       - 0: Pending
   *       - 1: Active
   *       - 2: Busy
   *       - 3: Finished
   *       - 4: Unfinished
   *
   * 2. Link the data entries togther in a circular buffer fashion
   * 3. Create Data Entry Queue and configure for circular buffer Data Entries
   * 4. Set read pointer to first entry
   ***************************************************************************/
  
  /* 3.1. Set the Data Entries common configuration */
  dataEntry0->status        = 0;                     // Pending - starting state
  dataEntry0->config.type   = 0;                     // General Data Entry
  dataEntry0->config.lenSz  = 0;                     // No length indicator byte in data
  dataEntry0->length        = DATA_ENTRY_DATA_SIZE;  // Total length of data field

  dataEntry1->status        = 0;                     // Pending - starting state
  dataEntry1->config.type   = 0;                     // General Data Entry
  dataEntry1->config.lenSz  = 0;                     // No length indicator byte in data
  dataEntry1->length        = DATA_ENTRY_DATA_SIZE;  // Total length of data field
  
  /* 3.2. Link the data entries togther in a circular buffer fashion */
  dataEntry0->pNextEntry = (uint8_t*)dataEntry1;
  dataEntry1->pNextEntry = (uint8_t*)dataEntry0;
  
  /* 3.3. Create Data Entry Queue and configure for circular buffer Data Entries */
  dataQueue.pCurrEntry = (uint8_t*)dataEntry0;
  dataQueue.pLastEntry = NULL;

  /* 3.4. Set read pointer to first entry */
  readEntry = dataEntry0;

  

  /****** STEP 4 - RX *********************************************************
   * 1. Create CMD_PROP_RX command
   * 2. Setup interrupt on RX_ENTRY_DONE
   * 3. Send CMD_PROP_RX command
   * 4. Wait until command submitted ok
   ***************************************************************************/
  
  /* 4.1. Create CMD_PROP_RX command */
  /* Command header configuration */
  rxCommand.commandNo                = CMD_PROP_RX;
  rxCommand.status                   = IDLE;
  rxCommand.pNextOp                  = NULL;
  rxCommand.startTime                = 0;
  rxCommand.startTrigger.triggerType = TRIG_NOW;
  rxCommand.condition.rule           = COND_NEVER;
  
  /* Command specific configuration */
  rxCommand.pktConf.bFsOff           = 0;           // Keep frequency synth on after RX done
  rxCommand.pktConf.bRepeat          = 1;           // Go back into RX after RX done
  rxCommand.pktConf.bUseCrc          = 1;           // Use CRC
  rxCommand.pktConf.bVarLen          = 1;           // Expect variable length
  rxCommand.syncWord                 = 0x930B51DE;  // Sync word to listen for
  rxCommand.maxPktLen                = MAX_LENGTH;  // Max packet length to receive
  rxCommand.endTrigger.triggerType   = TRIG_NEVER;  // Never leave RX
  
  rxCommand.rxConf.bIncludeHdr       = 1;           // Include the length byte
  rxCommand.rxConf.bAppendRssi       = 0;           // Do not append RSSI
  rxCommand.rxConf.bAppendStatus     = 1;           // Append status byte
  rxCommand.pQueue                   = &dataQueue;  // Set the Data Entity queue for received data
  rxCommand.pOutput                  = (uint8_t*)&rxStatistics; // Set rx statistics output struct
  
  /* 4.2. Setup interrupt on RX_ENTRY_DONE and RX_ABORTED */
  IntMasterDisable();
  
  /* Multiplex all RF Core interrupts to CPE0 IRQ and enable the following interrupts: 
   *   - IRQ_PROP_RX_ENTRY_DONE - RX queue data entry changing state to finished 
   *   - IRQ_PROP_RX_ABORTED - abort */
  HWREG( RFC_DBELL_NONBUF_BASE + RFC_DBELL_O_RFCPEISL ) = 0;
  HWREG( RFC_DBELL_NONBUF_BASE + RFC_DBELL_O_RFCPEIEN ) = IRQ_PROP_RX_ENTRY_DONE | IRQ_PROP_RX_ABORTED;
 
  /* Clear any pending interrupts, register interrupts handler and enable interrupts. */
  HWREG( RFC_DBELL_NONBUF_BASE + RFC_DBELL_O_RFCPEIFG ) = 0x0;
  IntPendClear(INT_RF_CPE0);
  IntRegister(INT_RF_CPE0, &appRfDataQueueAndAbortIsr);
  IntEnable(INT_RF_CPE0);
  IntMasterEnable();
  
  /* 4.3. Send CMD_PROP_RX command to RF Core */
  HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = (uint32_t)&rxCommand;
  
  /* 4.4. Wait until command submited ok */
  while( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) == CMDSTA_Pending);
  if( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) != CMDSTA_Done )
    appError();  
 
  /* Enter main, infinite, loop */
  while(true)
  {
    /* Power off as many power domain as possible */
    PRCMPowerDomainOff(domainsToPowerOff);
    
    /* Enter deep-sleep while waiting for packets */
    PRCMDeepSleep();
      
    /* Packet received? */
    if (received)
    {
      received = false;

      appUpdateRxScreen(packetReceived);
    }
  }
}


/*******************************************************************************
* @brief    Patches the RF Core firmware
*
*           Patches the CPE as well as the modem and front-end.
*
*           Note: This should be done after a command has been succesfully sent to the RF Core
*                 so that it is guaranteed to happen after the radio has done its own 
*                 initialization.
* 
* @return   None
*******************************************************************************/
static void applyPatches(void)
{
  /* Apply CPE patch.
   * Note: The below line will be included in a future CPE patch. */
  *((uint32_t *)0x21000028) = 0x00000000;
  applyPatch();
  
  /* Start RAT timer */
  HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = CMDR_DIR_CMD(CMD_START_RAT);
  
  /* Wait until done (because this is a direct command) */
  while( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) == CMDSTA_Pending);
  if( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) != CMDSTA_Done )
    appError();  
  
  /* Force-enable the MCE and RFE RAM, used for patching */
  HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) 
    = CMDR_DIR_CMD_2BYTE(CMD_FORCE_CLK_ENA, RFC_PWR_PWMCLKEN_MDMRAM | 
                                            RFC_PWR_PWMCLKEN_RFERAM);
  
  /* Wait until done (because this is a direct command) */
  while( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) == CMDSTA_Pending);
  if( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) != CMDSTA_Done )
    appError();  
  
  /* Apply the RFE and MCE patch to the respective patch RAM */
  enterGenfskRfePatch();
  enterGenfskMcePatch();

  /* Remove force-enable of the MCE and RFE RAM clocks */
  HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = CMDR_DIR_CMD_2BYTE(CMD_FORCE_CLK_ENA, 0);
  
  /* Wait until done (because this is a direct command) */
  while( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) == CMDSTA_Pending);
  if( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) != CMDSTA_Done )
    appError();
  
  /* Force BUS power domain on from RF Core
   *   Note:
   *     This has to be on for the RF Core to be able to access the patches via the system bus. */
  writeRfRegCommand.commandNo = CMD_WRITE_RFREG;
  writeRfRegCommand.address   = 0x1128;
  writeRfRegCommand.value     = 2;
  
  HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = (uint32_t)&writeRfRegCommand;
  
  /* Wait until done (because this is a immediate command) */
  while( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) == CMDSTA_Pending);
  if( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) != CMDSTA_Done )
    appError();
}

/*******************************************************************************
* @brief    Update RX screen
@
@ param     packetReceived - Number of packets received       
*
* @return   None
*******************************************************************************/
static void appUpdateRxScreen(uint32_t packetReceived)
{
#if ((LOW_POWER_LCD_MODE == 1))
  if(packetReceived < LOW_POWER_LCD_MODE_LCD_ON_PACKETS || (LOW_POWER_LCD_MODE_LCD_ON_PACKETS == 0))
    return;
  else
  {
    if(!lowPowerLcdOn)
    {
      lowPowerLcdOn = true;
      appInitializeLcd();
    }
  }
#endif
  
  lcdBufferClear(0);
  lcdBufferPrintString(0, "Packets", 63, eLcdPage1);
  lcdBufferPrintString(0, "Received:", 63, eLcdPage2);
  lcdBufferPrintInt(0, packetReceived, 63, eLcdPage4);
  lcdSendBufferPart(0, 63, 127, eLcdPage1, eLcdPage6);
}

/*******************************************************************************
* @brief    Initialize LCD
@
@ param     
*
* @return   None
*******************************************************************************/
static void appInitializeLcd(void)
{
  /* Do not power off the power domains needed for the LCD */
  domainsToPowerOff &= ~(PRCM_DOMAIN_PERIPH | PRCM_DOMAIN_SERIAL);
  
  PRCMPowerDomainOn( PRCM_DOMAIN_PERIPH | PRCM_DOMAIN_SERIAL);
  while(PRCMPowerDomainStatus(PRCM_DOMAIN_PERIPH | PRCM_DOMAIN_SERIAL) == PRCM_DOMAIN_POWER_OFF);
  
  bspInit(BSP_SYS_CLK_SPD);
  bspSpiInit(BSP_SPI_CLK_SPD);
  lcdInit();
  appDisplayWelcomeScreen();
}

/*******************************************************************************
* @brief    Display welcome screen
* 
*           
*
* @return   None
*******************************************************************************/
static void appDisplayWelcomeScreen(void)
{
  lcdClear();
  lcdBufferClear(0);
  lcdSendBuffer(pLcdTiLogo);
  lcdBufferPrintString(0, "CC13xx", 63, eLcdPage2);
  lcdBufferPrintString(0, "RX Test", 63, eLcdPage3);
  lcdBufferPrintString(0, "Waiting to", 63, eLcdPage5);
  lcdBufferPrintString(0, "receive...", 63, eLcdPage6);
  lcdSendBufferPart(0, 63, 127, eLcdPage2, eLcdPage6);
}

/*******************************************************************************
* @brief    CPE0 interrupt callback, to be used with CPE interrupt 19 and 21
*           (Packet reception stopped before packet was done (19) and
*           dataEntry element status set to Finished (21))
*           
*           The function assumes the following settings:
*           genFskConfig->pktConfUseCrc   = 1
*           genFskConfig->pktConfVarLen   = 1
*           genFskConfig->rxConfIncludeHdr = 1
*           genFskConfig->rxConfAppendRssi = 0
*           genFskConfig->rxConfAppendStatus = 1
*
* @return   None
*******************************************************************************/
static void appRfDataQueueAndAbortIsr(void)
{
  //\* Start critical section */
  IntMasterDisable();
    
  if ((HWREG( RFC_DBELL_NONBUF_BASE + RFC_DBELL_O_RFCPEIFG)) & IRQ_PROP_RX_ENTRY_DONE)
  {  
    bool crcOk = 0;
    uint8_t status = 0;
    uint8_t length = 0;
    
    /* Loop through status of received packets, start at preadEntry
      Continue as long as hitting elements with Finished status */
    while(GET_FIELD_V(readEntry, dataEntry, status) == DATA_ENTRY_FINISHED)
    {
      length = readEntry->data;
      
      /* Read out package status
        (bit 7 and 6 are result)
        result	00: Packet received correctly, not ignored
               01: Packet received with CRC error
               10: Packet received correctly, but can be ignored
               11: Packet reception was aborted */
      status  = *(uint8_t*)(&readEntry->data + length + 1);
      crcOk   = (status & 0xC0) == 0x00 ? 1 : 0;

      /* Only add received package to receive buffer if CRC is OK */
      if(crcOk)
      {
        /* Set packet received flag and increment packets received */
        received = true;
        packetReceived++;
      } 
      
      /* Set status to pending */
      GET_FIELD_V(readEntry, dataEntry, status) = DATA_ENTRY_PENDING;
  
      /* Move read entry pointer to next entry */
      readEntry = (rfc_dataEntry_t*)readEntry->pNextEntry;
    }
  }
   
  /*  Clear interrupt */
  HWREG( RFC_DBELL_NONBUF_BASE + RFC_DBELL_O_RFCPEIFG ) = 0x0;

  /* End critical section */
  IntMasterEnable();
}


/*******************************************************************************
* @brief    Toggles DC/DC converter on/off
*
* @return   None
*******************************************************************************/
void appDcdcOn(uint8_t on)
{
  if(on)
  {
    PowerCtrlSourceSet(PWRCTRL_PWRSRC_DCDC);
  }
  else
  {
    PowerCtrlSourceSet(PWRCTRL_PWRSRC_GLDO);
  }
}


/*******************************************************************************
* @brief    Error function. Eternal loop that blinks all LEDs quickly.
*           Function assumes LEDs to be initialized by, for example, bspInit()
*
* @return   None
*******************************************************************************/
void appError(void)
{
  uint32_t ui32Delay = 1000000UL;
  bspLedClear(BSP_LED_ALL);

  while(true)
  {
    CPUdelay(ui32Delay);
    bspLedToggle(BSP_LED_ALL);
  }
}
