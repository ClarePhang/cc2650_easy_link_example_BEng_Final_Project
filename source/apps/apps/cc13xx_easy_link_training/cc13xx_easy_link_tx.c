//******************************************************************************
//! @file       cc13xx_easy_link_tx.c
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
//#include "cc13xx_init_lib.h"

// Chip specific
#include "prcm.h"
#include "cpu.h"
#include "interrupt.h"
#include "pwr_ctrl.h"
#include "rfc.h"

// IOC
#include "gpio.h"
#include "ioc.h"

//For entering STANDBY
#include "aon_wuc.h"
#include "aon_event.h"
#include "aux_wuc.h"
#include "hw_aon_sysctl.h"
#include "hw_ddi_0_osc.h"
#include "hw_aon_wuc.h"
#include "hw_aon_event.h"
#include "osc.h"

// RF Core
#include "cc26xx_pg2/common_cmd_pg2.h"
//#include "cc26xx_pg2/prop_cmd_pg2.h"
//#include "cc26xx_pg2/prop_mailbox.h"
#include "cc26xx_pg2/ieee_cmd.h"
#include "cc26xx_pg2/ieee_mailbox.h"
#include "hw_rfc_dbell.h"
#include "hw_rfc_pwr.h"
#include "radio_par.h"

// RF Core Patches
#define SYS_PATCH_TYPE static uint32_t
#include "phy_prop_genfsk\pg1\cc13xx\apply_patch.h"
//#include "phy_ieee802154\pg1\cc26xx\apply_patch.h"
//#include "phy_ble\pg1\cc26xx\apply_patch.h"

#include "phy_ieee802154\pg1\cc26xx\apply_zigbee_mce_patch.h"
#include "phy_ieee802154\pg1\cc26xx\apply_zigbee_rfe_patch.h"

//#include "phy_ble\pg1\cc26xx\apply_ble_mce_patch.h"
//#include "phy_ble\pg1\cc26xx\apply_ble_rfe_patch.h"

#include "phy_prop_genfsk\pg1\cc13xx\apply_genfsk_rfe_patch.h"
#include "phy_prop_genfsk\pg1\cc13xx\apply_genfsk_mce_patch.h"


//Backdoor
//#include "backdoor.h"

#define EB_SW_ONE_PIN           GPIO_PIN_13
#define EB_SW_ONE_IOID          IOID_13
#define EB_SW_TWO_PIN           GPIO_PIN_14
#define EB_SW_TWO_IOID          IOID_14


// Pin/IO to setup as backdoor.

#define EB_BACKDOOR_PIN         EB_SW_TWO_PIN   
#define EB_BACKDOOR_IOID        EB_SW_TWO_IOID


/*******************************************************************************
* LOCAL FUNCTION PROTOTYPES
*/
static void appError(void);
static void appDcdcOn(uint8_t on);

void GPIOIntHandler(void);
static void applyPatches(void);

void Init_Backdoor(void);
static void init_RFC_MCU(void);
static void setup_radio(void);
static void setup_synthesizer(void);
static void setup_tx(void);
static void enable_int_IO(void);
static void enter_standby(void);


/*******************************************************************************
* DEFINES
*/
#define NUMBER_OF_PACKETS       100
#define PAYLOAD_LENGTH          24


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
 * 4. Configure DCDC, power down settings and enable interrupt
 ***************************************************************************/

/* 0.1. Declare the RF specific variables. */
/* 0.1.1. All RF Core command structures have to be 4 byte aligned */

//#pragma data_alignment = 4
//static rfc_CMD_PROP_RADIO_SETUP_t propSetupCommand;

#pragma data_alignment = 4
static rfc_CMD_TX_t txCommand;
#pragma data_alignment = 4
static rfc_CMD_RADIO_SETUP_t radioSetupCommand;
#pragma data_alignment = 4
static rfc_CMD_TX_TEST_t txTestCommand;
#pragma data_alignment = 4
static rfc_CMD_FS_t fsCommand;
#pragma data_alignment = 4
static rfc_CMD_WRITE_RFREG_t writeRfRegCommand;
#pragma data_alignment = 4
static rfc_CMD_READ_FS_CAL_t fsReadCalCommand;
#pragma data_alignment = 4
static rfc_CMD_IEEE_TX_t txIeeeCommand;

//#pragma data_alignment = 4
//static rfc_CMD_READ_ADI1REG_t readAdi1RegCommand;
//#pragma data_alignment = 4
//static rfc_CMD_READ_ADI0REG_t readAdi0RegCommand;
//#pragma data_alignment = 4
//static rfc_CMD_WRITE_ADI1REG_t writeAdi1RegCommand;

/* 0.1.2. Non-aligned RF specific variables */
static uint8_t packet[PAYLOAD_LENGTH];

/* 0.2. Declare application specific variables. */
//LH: still not sure if I will actually need these; maybe turn them into ISR flags
static volatile bool GPIOIntSemaphore = false;

static uint32_t packetSent;
static uint32_t packetCounter;

/*****************************************************************************
*
* The interrupt handler for the GPIO interrupt.
*
* LH: GPIOIntHandler definition also exists in backdoor code; Add this there at some point
* Also- other definition could be used for reference on how to set up wake-up
*******************************************************************************/
void
GPIOIntHandler(void)
{

    // Set an interrupt flag to indicate an interrupt has occurred.
    GPIOIntSemaphore = true;

    // Clear the interrupt
    IOCIntClear(IOID_2);
}


/*******************************************************************************
* LH: Messy way of including the Init_Backdoor() function
* It initializes the GPIO pins and their interrupts for the backdoor routine
*******************************************************************************/

/*
void Init_Backdoor(void)
{
  // Initalizes a GPIO pin to function as backdoor.
  // Use to allow the debugger access to the chip to erase any faulty code.
  // ----------------------------------------------------------------------  
  
  //Turn on GPIO, and wait until on.
  PRCMPowerDomainOn(PRCM_DOMAIN_PERIPH);
  while(PRCMPowerDomainStatus(PRCM_DOMAIN_PERIPH) != PRCM_DOMAIN_POWER_ON) {}
  
  // Configure the backdoor for polled mode.
  // Uses (pull-down) CC26EB switch SW2.
  // ---------------------------------------
  BackdoorInit(EB_BACKDOOR_PIN, 0, BACKDOOR_POLLED);
}*/


/*******************************************************************************
* @brief    main function (TX)
*
* @return   None
*******************************************************************************/
main(void)
{ 
  int status_ieee_cmdsta = 0;
  int counter = 0;
  
  init_RFC_MCU();
  enable_int_IO();
  
  //LH: With PG 2.0 this should not be needed, but it is here just in case.
  //    It is assigned using the standard GPIOIntHandler though (seen above),
  //    so it has to be changed so it handles both the backdoor and an external
  //    interrupt (e.g. sensor) if the backdoor is to be used. Alternatively
  //    the separate handler mapping function can be used to remap the external
  //    interrupt trigger to another handling function
  
  //Init_Backdoor();
  //BackdoorOpen();
  
  setup_radio();
  setup_synthesizer();
  setup_tx();
    
  /* Enter main, infinite, loop */
  while(1)
  {  

    /* Wait for interrupt */
    while (GPIOIntSemaphore == false) {}
    //Clear it immediately after finishing the sending of the CMD to the DBELL
   
    while(counter < 3)
    {
      
    /* Reset command status to idle (from done), since we are reusing the same command */
    //txIeeeCommand.status = IDLE;
    //txTestCommand.status = IDLE;
    txCommand.status = IDLE;
    
    /* 4.3. Send packet using CMD_IEEE_TX */  
    //HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = (uint32_t)&txIeeeCommand;
    //HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = (uint32_t)&txTestCommand;
    HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = (uint32_t)&txCommand;
    
    
    
    /* 4.4. Wait until command finished executing */
    /* 3.4.1 First wait until received, parsed and running on RF Core */
    while( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) == CMDSTA_Pending);
    if( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) != CMDSTA_Done )
    {
      //LH: Test command for reading error status
      for(int j = 0; j<128 ; j++){
      status_ieee_cmdsta |= (HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA));}
      appError();
    }
    
    /* 3.4.2 Wait until command is done executing */
    
    //while( (txIeeeCommand.status & 0x0F00) != IEEE_DONE_OK );
    //while( (txTestCommand.status & 0x0F00) != DONE_OK );
    
    while( (txCommand.status & 0x0F00) != DONE_OK );
    
    GPIOIntSemaphore = false;
    counter++;
    }
    
    counter = 0;
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
  int status_pwmclken_patch = 0;
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
  //enterGenfskRfePatch();
  //enterGenfskMcePatch();
  
  //enterBleMcePatch();
  //enterBleRfePatch();
  
  enterZigbeeRfePatch();
  enterZigbeeMcePatch();
  
  /* Remove force-enable of the MCE and RFE RAM clocks */
  HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = CMDR_DIR_CMD_2BYTE(CMD_FORCE_CLK_ENA, 0);
  
  /* Wait until done (because this is a direct command) */
  while( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) == CMDSTA_Pending);
  if( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) != CMDSTA_Done )
    appError();
  
  
  for (int i = 0; i<128; i++)
  status_pwmclken_patch |= HWREG(RFC_PWR_NONBUF_BASE + RFC_PWR_O_PWMCLKEN);
  
  
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


/****** Initialize MCU and RF Core Prerequisites ***************************
* 1. Switch to HF crystal
* 2. Enable RF Core power
* 3. Enable RF Core clocks
* 4. Send a Ping command to RF Core
* 5. Wait for Ping response
* 6. Enable GPIO Periph. power
* 7. Enable GPIO Periph. clocks
* 8. Set and Enable GPIO Interrupt 
***************************************************************************/

static void init_RFC_MCU(void)
{
  
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
    
  //LH: PG 2.0 enables only the default set of clocks currently (0x007); 
  //Any other specific ones are toggled on when needed using FORCE_CLK_EN
  
  //while (HWREG(RFC_PWR_NONBUF_BASE + RFC_PWR_O_PWMCLKEN) != 0x7FF);
  //while (HWREG(RFC_PWR_NONBUF_BASE + RFC_PWR_O_PWMCLKEN) != 0x487);
  while (HWREG(RFC_PWR_NONBUF_BASE + RFC_PWR_O_PWMCLKEN) != 0x007);

  /* 1.4. Ping RF Core */
  HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = CMDR_DIR_CMD(CMD_PING);
  
  /* 1.5. Wait for Ping done */
  while( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) == CMDSTA_Pending);
  if( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) != CMDSTA_Done )
    appError();  
  
  /* 1.6. Enable Peripheral Domain Power */
  PRCMPowerDomainOn(PRCM_DOMAIN_PERIPH);
  while(PRCMPowerDomainStatus(PRCM_DOMAIN_PERIPH) != PRCM_DOMAIN_POWER_ON); 
  
  /* 1.7. Enable GPIO Module and wait for it to be ready */  
  PRCMPeripheralRunEnable(PRCM_PERIPH_GPIO);
  PRCMLoadSet();
  while(!PRCMLoadGet()){}
  
}

static void enable_int_IO(void){
  
  IOCPinTypeGpioInput(IOID_2);
  //IOCIOPortPullSet(IOID_2, IOC_IOPULL_DOWN);
  IOCIOPortPullSet(IOID_2, IOC_NO_IOPULL);
  
  //IOCIOIntSet(IOID_2, IOC_INT_ENABLE, IOC_RISING_EDGE);
  IOCIOIntSet(IOID_2, IOC_INT_ENABLE, IOC_FALLING_EDGE);
  
  //These two seem to do the same thing, but interrupt works better with both(?)
  IOCIntEnable(IOID_2);
  //Enable the interrupt for edge detect
  IntEnable(INT_EDGE_DETECT);
    
  //Enable processor interrupts
  IntMasterEnable();
}

/****** Function used for entering the STANDBY deep sleep mode ********
*
*       For a full description of all the steps involved in the process
*       Please see the chip user manual
*
**********************************************************************/

static void enter_standby(void)
{
  
    AONWUCDomainPowerDownEnable(); //Enable Powerdown
    PowerCtrlSourceSet(PWRCTRL_PWRSRC_DCDC);
    OSCInterfaceEnable();
    OSCClockSourceSet(OSC_SRC_CLK_LF,OSC_XOSC_LF);
    OSCClockSourceSet(OSC_SRC_CLK_HF,OSC_XOSC_HF);
    OSCInterfaceDisable();
    
    AONWUCRechargeCtrlConfigSet(true, 34, 2500, 5000); //Recharge config setting from the pwr_ctrl.c function
    AONEventMcuWakeUpSet(AON_EVENT_MCU_WU0, AON_EVENT_IO2);

    AONWUCMcuPowerDownConfig(AONWUC_NO_CLOCK); //Power-down MCU clock config (No clock by default)
    AONWUCAuxPowerDownConfig(AONWUC_NO_CLOCK); //Power-down AUX clock config (No clock by default)
    
    //Skipping SRAM Retention config (Retention enabled by default)
    AONWUCJtagPowerOff();
    
    //Insert GPIO interrupt config stuff here!
    
    // Power up the periph domain and wait for it to become available. 
    PRCMPowerDomainOn(PRCM_DOMAIN_PERIPH);
    while(PRCMPowerDomainStatus(PRCM_DOMAIN_PERIPH) != PRCM_DOMAIN_POWER_ON); 
    // Enable GPIO module and wait for it to be ready
    PRCMPeripheralRunEnable(PRCM_PERIPH_GPIO);
    PRCMLoadSet();
    while(!PRCMLoadGet())
    { }
    
    enable_int_IO();
    
    /*  Alternative to using the enable_int_IO function above */
    
    /*
    IntRegister(INT_EDGE_DETECT,GPIOIntHandler2);
    IOCPinTypeGpioInput(EXAMPLE_IOID_EDGE);
    IOCIOPortPullSet(EXAMPLE_IOID_EDGE, IOC_IOPULL_DOWN);
    IOCIOIntSet(EXAMPLE_IOID_EDGE, IOC_INT_ENABLE, IOC_RISING_EDGE);
    IOCIntEnable(EXAMPLE_IOID_EDGE);
    // Enable the interrupt for edge detect
    IntEnable(INT_EDGE_DETECT);
    // Enable processor interrupts
    IntMasterEnable();
    */
    
    
    AUXWUCPowerCtrl(AUX_WUC_POWER_DOWN);
    while(AONWUCPowerStatus() & AONWUC_AUX_POWER_ON);

    HWREG(AON_IOC_BASE + AON_IOC_O_IOCLATCH) |= AON_IOC_IOCLATCH_EN; //Latch I/O state;

    // Turn of all power domains in the MCU voltage domain. This is
    // necessary to conserve power before switching to the uLDO.
    PRCMPowerDomainOff(PRCM_DOMAIN_RFCORE | PRCM_DOMAIN_SERIAL |
                        PRCM_DOMAIN_PERIPH | 
                        PRCM_DOMAIN_CPU |
                        PRCM_DOMAIN_VIMS);
    
    //Request digital supply to be Micro LDO; see pwr_ctrl.c
    PowerCtrlSourceSet(PWRCTRL_PWRSRC_ULDO);
    
    //Synchronize transactions to AON domain
    HWREG(AON_RTC_BASE + AON_RTC_O_SYNC);
    
    //Set the system CPU SLEEPDEEP bit
    //Stop the system CPU to start the powerdown sequence (WFI or WFE)
    PRCMDeepSleep();
  
}


/****** Setup radio function ************************************************
* 1. Patch RF Core with latest patches
* 2. Create CMD_RADIO_SETUP command (NB: PG 2.0 and above only; PG 1 does only supports CMD_PROP_RADIO_SETUP)
*
*      Parameter configuration:
*        - Symbol Rate = rateWord*fXOSC)/(preScale*2^20)
*        - Deviation is written as: Deviation [kHz] * (4 * synthDiv/2)
*        - Preamble modes:
*          - 00: Send 0 as the first preamble bit
*          - 01: Send 1 as the first preamble bit
*          - 10: Send same first bit in preamble and sync word
*          - 11: Send different first bit in preamble and sync word
*        - Bit reversal modes:
*          - 0: Use positive deviation for 1
*          - 1: Use positive deviation for 0
*        - MSB first modes:
*          - 0: Least significant bit transmitted first
*          - 1: Most significant bit transmitted first
*        - Whitening modes:
*          - 00: No whitening
*          - 01: CC1101/CC2500 compatible whitening
*          - 10: PN9 whitening without byte reversal
*          - 11: Reserved
*
*       Overrides:
*         - Low-level overrides is used in PG1 to indicate that we want to run the 
*           radio from patch RAM and that we want to program the freq. synth. from
*           the CM3, instead of CM0.
*
* 3. Send CMD_PROP_RADIO_SETUP command & wait until done executing
***************************************************************************/


static void setup_radio(void)
{
  /* 2.1. Patch the RF Core */
  //PG 2.0 Turns out, the patches are still needed
  applyPatches();
    
  /* 2.2.1 Create CMD_RADIO_SETUP command */
  /* Command header configuration */
  radioSetupCommand.commandNo                = CMD_RADIO_SETUP;
  radioSetupCommand.status                   = IDLE;
  radioSetupCommand.pNextOp                  = NULL;
  radioSetupCommand.startTime                = 0;
  radioSetupCommand.startTrigger.triggerType = TRIG_NOW;
  radioSetupCommand.condition.rule           = COND_NEVER;
  
  /* Command specific configuration */
  radioSetupCommand.mode                     = 0x01;                //IEEE
  //radioSetupCommand.mode                     = 0x02;                //2Mbps GFSK
  
  //LH: Also known as IoDivider
  radioSetupCommand.__dummy0                 = 2;                   //2 or 0 for 2.4GHz devices                    // 5 bytes preamble
  
  //LH: The real PG2 settings start here
  //radioSetupCommand.config.frontEndMode      = 0;        //Differential Mode
  radioSetupCommand.config.frontEndMode      = 0x01;       //Single-ended mode RFP
  //radioSetupCommand.config.frontEndMode      = 0x02;     //Single-ended mode RFN
  
  radioSetupCommand.config.biasMode          = 1;          //Internal Bias
  //LH: Manual says, that the default, FCFG1 settings will be used, if bNoAdi0Setup and Trim are both 0
  radioSetupCommand.config.bNoAdi0Setup      = 0;
  radioSetupCommand.config.bNoAdi0Trim       = 0;
  radioSetupCommand.config.bNoAdi0Ovr        = 0; //LH: No overrides set, so whether or not this is on, it shouldn't matter.
  //LH: Same as with ADI0
  radioSetupCommand.config.bNoAdi1Setup      = 0;
  radioSetupCommand.config.bNoAdi1Trim       = 0;
  radioSetupCommand.config.bNoAdi1Ovr        = 0;
  radioSetupCommand.config.bNoFsPowerUp      = 0;
  
  radioSetupCommand.txPower.IB               = 10;
  radioSetupCommand.txPower.GC               = 0;
  radioSetupCommand.txPower.tempCoeff        = 0x20; //this sets the boost bit to 1, but not the temp. compensation (relevant for non-differential antenna modes)
   
  /* 2.2. Send CMD_PROP_RADIO_SETUP command to RF Core */
  HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = (uint32_t)&radioSetupCommand;
  
  /* 2.3. Wait until command finished executing */
  /* 2.3.1 First wait until received, parsed and running on RF Core */
  while( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) == CMDSTA_Pending);
  if( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) != CMDSTA_Done )
  {
    //LH: Test loop for reading the returned error status
    /*
    for(int j = 0; j<10 ; j++){
      status_prop_cmdsta |= (HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA));}
    appError();  */
  }
  
  /* 2.3.2 Wait until command is done executing */
  while( (radioSetupCommand.status & 0x0F00) != DONE_OK ); 
  
}

  
/****** Setup frequency synthesizer and RF settings**************************
* 1. Create CMD_FS command
* 2. Send CMD_FS command
* 3. Wait until command is done executing
* 4. (PG1 only) Configure freq. synth. from CM3
***************************************************************************/
  
static void setup_synthesizer(void)
{
  /* 3.1.1 Create CMD_FS command */
  /* Command header configuration */
  fsCommand.commandNo                   = CMD_FS;
  fsCommand.status                      = IDLE;
  fsCommand.pNextOp                     = NULL;
  fsCommand.startTime                   = 0;
  fsCommand.startTrigger.triggerType    = TRIG_NOW;
  fsCommand.condition.rule              = COND_NEVER;
  
  /* Command specific configuration */
  fsCommand.frequency                   = 2405;  // Whole frequency setting
  fsCommand.fractFreq                   = 2000;//(uint16_t) (0x1450);    // Fractional frequency setting
  
  //PG 1.0; PG 2.0 has the divider setting in CMD_RADIO_SETUP and CMD_PROP_RADIO_SETUP_DIV, but the latter is only relevant for CC13xx
  //fsCommand.synthConf.divider           = 0;    // 0 for CC26xx, all else for CC13xx; Divider depends on frequency band
  fsCommand.synthConf.bTxMode           = 1;    // Set freq. synth. in TX mode
  
  //LH: The manual says this field is used for CC13xx devices
  fsCommand.synthConf.refFreq           = 0;    // Set frequency reference for Synth
  
  fsCommand.calibConf.bOverrideCalib    = 0;    // Configure no form of calibration
  fsCommand.calibConf.bSkipTdcCalib     = 0;    // (Done in CM3 in PG1)
  fsCommand.calibConf.bSkipCoarseCalib  = 0;
  fsCommand.calibConf.bSkipMidCalib     = 0;

  //LH: At default settings, the following 3 fields are ignored.
  //When bOverrideCalib and bSkip...Calib are set to 1, they are used.
  
  //Unless coarse precal is 0x07 (assuming it enables sections of the synth)
  //the command returns an ERROR_SYNTH_PROG;
  
  //The hex settings below are the default ones from FCFG1;
  //The Precal settings seem to  mostly affect phase noise and shape of output
  fsCommand.calibConf.coarsePrecal      = 0x07;
  fsCommand.midPrecal                   = 0x1C;
  fsCommand.ktPrecal                    = 0x13;
  fsCommand.tdcPrecal                   = 0x0CF6;
  
  /* 3.2. Send CMD_FS command to RF Core */
  HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDR) = (uint32_t)&fsCommand;
  
  /* 3.3. Wait until command finished executing */
  /* 3.3.1. First wait until received, parsed and running on RF Core */
  while( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) == CMDSTA_Pending);
  if( HWREG(RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA) != CMDSTA_Done )
    appError();  
  
  //LH: Similarly as above, command to read the returned status of CMD_FS, when it is not DONE
  /*
  for (int i=0;i<128;i++){
    fs_status_cmd |= (fsCommand.status & 0x0FFF);}
  */
  
  /* 3.3.2. Wait until command is done executing */
  while( (fsCommand.status & 0x0F00) != DONE_OK );  
}

/****** Setup TX and TX Process *********************************************
* 1. Create CMD_TX command
* 2. Create packet (with increasing sequence number and random content)
* 3. Send CMD_TX command
* 4. Wait for semaphore trigger from ISR to send again
***************************************************************************/

static void setup_tx(void)
{
  
  //LH: Optional test-command used for transmitting CW and PN9

  /****************************************************************************
  *     TX TEST COMMAND
  ****************************************************************************/
  
  /* Command header configuration */
  
  txTestCommand.commandNo                = CMD_TX_TEST;
  txTestCommand.status                   = IDLE;
  txTestCommand.pNextOp                  = NULL;
  txTestCommand.startTime                = 0;
  txTestCommand.startTrigger.triggerType = TRIG_NOW;
  txTestCommand.condition.rule           = COND_NEVER;
  
  
  /* Command specific configuration */
  //LH: CW or PN9 setting
  //However, for PG 1.0, the FS fix function needs to be altered as well.
  //For PG 2.0 the CMD is enough.
  
  txTestCommand.config.bUseCw            = 1;//0;               // Send an unmodulated CW
  txTestCommand.config.bFsOff            = 0;               // Turn FS off after execution
  txTestCommand.config.whitenMode        = 0;//3;               // Disable Data Whitening
  txTestCommand.txWord                   = 0xAAAA;          // TxWord to be transmitted after Sync
  
  txTestCommand.endTrigger.triggerType   = TRIG_NEVER;      // Transmit CW indefinitely
  txTestCommand.syncWord                 = 0x930B51DE;      // Sync word to send                                   
  //txTestCommand.syncWord                 = 0xFDFDFDFD;
  
  
  /****************************************************************************
  *     IEEE TX COMMAND
  ****************************************************************************/
  
  //LH: Similarly, to any Proprietary commands, this does not get recognized by
  //the RFC_DBELL_CMDR
  
  /*
  txIeeeCommand.commandNo                = CMD_IEEE_TX;
  txIeeeCommand.status                   = IDLE;
  txIeeeCommand.pNextOp                  = NULL;
  txIeeeCommand.startTime                = 0;
  txIeeeCommand.startTrigger.triggerType = TRIG_NOW;
  txIeeeCommand.condition.rule           = COND_NEVER;
  
  txIeeeCommand.txOpt.bIncludePhyHdr     = 0; //Append PHY header automatically
  txIeeeCommand.txOpt.bIncludeCrc        = 0; //Append CRC automatically
  txIeeeCommand.txOpt.payloadLenMsb      = 0; //Set MSB of payload length. Should be 0. Non-zero generates long test packets.

  txIeeeCommand.payloadLen               = PAYLOAD_LENGTH; //Number of bytes in payload
  txIeeeCommand.pPayload                 = packet; //Pointer to payload buffer of the given size above (PayloadLen)
  */
  
  /****************************************************************************
  *     GENERAL TX COMMAND (USED FOR TESTING PRIMARILY)
  ****************************************************************************/
  
  txCommand.commandNo                = CMD_TX;
  txCommand.status                   = IDLE;
  txCommand.pNextOp                  = NULL;
  txCommand.startTime                = 0;
  txCommand.startTrigger.triggerType = TRIG_NOW;
  txCommand.condition.rule           = COND_NEVER;
  
  txCommand.pktConfig.endianness     = 1; //Big endian byte/bit arrangement
  txCommand.pktConfig.bFsOff         = 0; //Do not turn synth off after command execution
  //txCommand.syncWord                 = 0xAAAAAAAA; //Faking a preamble (?)
  txCommand.pktConfig.numHdrBits     = 16;
  txCommand.pktConfig.bUseCrc        = 0; //Append a CRC to the packet
  txCommand.pktConfig.bCrcIncHdr     = 0;
  txCommand.pktConfig.bCrcIncSw      = 0;
  txCommand.pktLen                   = PAYLOAD_LENGTH;
  txCommand.pTxPkt                   = packet;
  
  /* 4.2. Create packet payload (including ZGP NWK Header & ZGP Application Payload) */
  
  //PHY Header
  /*
  packet[0] = (uint8_t)(0xAA);
  packet[1] = (uint8_t)(0xAA);
  packet[2] = (uint8_t)(0xAA);
  packet[3] = (uint8_t)(0xAA); //4 bytes of Preamble
  */
    
  packet[3] = (uint8_t)(0xE5); //SFD

  packet[4] = (uint8_t)(20);//Length + Res. Byte (PHY Header)
   
  //MAC Header
  //packet[4] = (uint8_t)(0x20);
  packet[5] = (uint8_t)(0x80);
  packet[6] = (uint8_t)(0x20); //2 bytes Frame Control
  
  packet[7] = (uint8_t)(0x00); //1 byte Seq. Number
  
  packet[8] = (uint8_t)(0xFF);
  packet[9] = (uint8_t)(0xFF); //2 bytes Destination PAN ID
  
  //packet[10] = (uint8_t)(0x0E);
  packet[10] = (uint8_t)(0x32);
  packet[11] = (uint8_t)(0xFF); //2 bytes Destination Address
  
  //packet[13] = (uint8_t)(0xFF);
  //packet[14] = (uint8_t)(0xFF); //2 bytes Source PAN ID
  
  //packet[15] = (uint8_t)(0x1A);     
  //packet[16] = (uint8_t)(0x2A); //2 bytes Source Address
  
  //Both of these fields are not needed in the ZGP Frame
  //packet[12] = (uint8_t)(0x0B); //MAC Header/Frame Payload
  //packet[13] = (uint8_t)(0xFF);
  //packet[14] = (uint8_t)(0xFF); //2 bytes FCS
  
  //the packet array is uint8_t so all assigned values need to be recast etc.
  //uint8 is of size 256(0-255) bits/1 byte
  packet[12] = (uint8_t)(0x0E); //ZGP NWK Control Byte
  packet[13] = (uint8_t)(0x0A); //ZGP SRC ID Byte 1
  //1 byte src ID should be enough, prolonging the packet unnecesserally could increase power usage during Tx
  //Investigate if it does.
  packet[14] = (uint8_t)(0x01); //ZGP SRC ID Byte 2
  packet[15] = (uint8_t)(0x0B); //ZGP SRC ID Byte 3
  packet[16] = (uint8_t)(0x01); //ZGP SRC ID Byte 4
  
  packet[17] = (uint8_t)(0x05); //Length byte, as payload length is variable (0x01/1 should be 1 byte ?)
  
  packet[18] = (uint8_t)(0x0F); //Payload of 5 bytes showing movement has been detected
  packet[19] = (uint8_t)(0x12);
  packet[20] = (uint8_t)(0x34);
  packet[21] = (uint8_t)(0x56);
  packet[22] = (uint8_t)(0x78);
  
  //The MIC field should be related to secure packets, hence not needed here
  //packet[18] = (uint8_t)(0x0F); //MIC Field
  packet[23] = (uint8_t)(0xBB); //FCS, which should usually be calculated automatically
  packet[24] = (uint8_t)(0xBB); //2 bytes of Bs

}

  
/*******************************************************************************
* @brief    Toggles DC/DC converter on/off
*
* @return   None
*******************************************************************************/
static void appDcdcOn(uint8_t on)
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
* @brief    Error function; Enters eternal loop 
*
* @return   None
*******************************************************************************/
void appError(void)
{
  uint32_t ui32Delay = 1000000UL;

  while(true)
  {
    CPUdelay(ui32Delay);
  }
}