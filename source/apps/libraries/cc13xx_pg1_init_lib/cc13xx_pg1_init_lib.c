/******************************************************************************
*  Filename:       cc13xx_pg1_init_lib.c
*  Revised:        
*  Revision:       
*
*  Description:    Initialization and configuration library for PG1 of CC13xx
*
*  Copyright (C) 2013 Texas Instruments Incorporated - http://www.ti.com/
*
*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*    Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the
*    documentation and/or other materials provided with the distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
******************************************************************************/

/**************************************************************************//**
* @addtogroup per_test
* @{
******************************************************************************/

/******************************************************************************
* INCLUDES
*/
#include "stdlib.h"
#include "stdint.h"
#include "string.h" // memset
#include "stdbool.h"

#include "cc13xx_init_lib.h"

#include "synthcal_lib.h"

#include "hw_aon_rtc.h"
#include "hw_aux_wuc.h"
#include "hw_aon_wuc.h"
//#include "hw_aon_sysctrl12.h"
#include "hw_ints.h"
#include "hw_prcm.h"
#include "hw_types.h"
#include "hw_nvic.h"
#include "hw_memmap.h"
#include "hw_types.h"
#include "hw_ioc.h"
#include "hw_adi.h"
#include "hw_ddi.h"
#include "hw_adi_2_refsys.h"
#include "hw_adi_3_refsys.h"
#include "hw_adi_4_aux.h"
#include "hw_fcfg1.h"
//#include "hw_factory_cfg.h"
//#include "hw_rf24_dbell.h"
//#include "hw_rf24_pwr.h"
#include "hw_rfc_dbell.h"
#include "hw_rfc_pwr.h"
#include "hw_adi_0_rf.h"
#include "inc/hw_adi_1_synth.h"
#include "inc/pg1/hw_osc_dig.h"
#include "hw_aon_batmon.h"
//#include "hw_rf24_fsca.h"
//#include "hw_rf24_mdm.h"

#include "prcm.h"
#include "gpio.h"
#include "cpu.h"
#include "osc.h"
#include "aux_wuc.h"
#include "aon_wuc.h"
#include "aon_event.h"
#include "interrupt.h"
#include "aon_rtc.h"
#include "pwr_ctrl.h"
#include "ddi.h"
#include "adi.h"
#include "ioc.h"

//#include "common_cmd.h"
#include "cc26xx_pg2/common_cmd_pg2.h"
#include "radio_par.h"

/******************************************************************************
* CONSTANTS AND DEFINES
*/

/* If using GPRAM as RAM then the command structures needs to be placed in a
 * special memory area reserved in SRAM (as ROM) for special variables. The
 * reason for this is that otherwise the CPE will reject the command with an
 * 'invalid pointer' exception, since it does not support command structs in
 * GPRAM. */
#if defined(RUN_FROM_RAM)
  #pragma message("Saving RF commands in RF_CMD_MEM_LOCATION instead of RAM.")
  #define RF_CMD_MEM_LOCATION     @ "SRAM_VAR_AREA"
#else
  #define RF_CMD_MEM_LOCATION
#endif

/* If ROM is GPRAM this is needed to fit the code */
#if defined(RUN_FROM_RAM)
  #define SECONDARY_CODE_AREA "RAM_CODE_AREA"
#endif

// 'Magic' trim value
#define FINAL_TRIM_DONE               0xC5

/******************************************************************************
* LOCAL VARIABLES
*/

static uint8_t pllCorrectionDone = 0;

/******************************************************************************
* GLOBAL VARIABLES
*/

/******************************************************************************
* LOCAL FUNCTION PROTOTYPES
*/
static void manualBootTrim(void);
static uint32_t getCorrectPllFrequency(uint32_t frequency, enum InitLibSynthMode synthMode, enum InitLibRadioMode radioMode);
static void runFractionalResamplerBugFix(uint8_t divider);
static uint_fast8_t RfSendCommandOk( uint32_t CMDR_val, uint32_t * pCMDSTA_val );


//The original file can be found in the cc13xx_app_ex_rev_1_2_1 project
//The functions below have been adapted for use with the CC26xx

/*void InitLib_startUpTrimming(void)
{
    uint32_t ui32Trim;
    uint32_t ui32Reg;
    uint32_t ui32ResetEvents;

    //
    // Check if trimming is required
    //
    if(HWREGB(ADI3_BASE + ADI_3_REFSYS_O_ADI3_SPARE3) != FINAL_TRIM_DONE)
    {
        //
        // Force AUX on and enable clocks
        //
        // No need to save the current status of the power/clock registers.
        // At this point both AUX and AON should have been reset to 0x0.
        //        
        HWREG(AON_WUC_BASE + AON_WUC_O_AUXEVENT) = AON_WUC_AUXEVENT_FORCEON;
        HWREG(AUX_WUC_BASE + AUX_WUC_O_MODCLKEN) = AUX_WUC_MODCLKEN_OSCCTRL;

        // --- DCDC 1A trim ---
        // Set VDDR to 1.7V
        //
        // -- Disable reset sources while trimming
        ui32ResetEvents = HWREG(AON_SYSCTRL12_BASE + AON_SYSCTRL12_O_RESET);
        HWREG(AON_SYSCTRL12_BASE + AON_SYSCTRL12_O_RESET) = 0x00;
        // Patric Cruise: Make this staircase this because  applying large step in
        // VDDR can cause system reset
        // TBD : The final value is device dependent!!!
        ADI8SetValBit(ADI3_BASE, ADI_3_REFSYS_O_DCDC_CTRL_1,
                      ADI_3_REFSYS_DCDC_CTRL_1_VDDR_TRIM_3P3V_M,0x01);
        ADI8SetValBit(ADI3_BASE, ADI_3_REFSYS_O_DCDC_CTRL_1,
                      ADI_3_REFSYS_DCDC_CTRL_1_VDDR_TRIM_3P3V_M,0x03);
        ADI8SetValBit(ADI3_BASE, ADI_3_REFSYS_O_DCDC_CTRL_1,
                      ADI_3_REFSYS_DCDC_CTRL_1_VDDR_TRIM_3P3V_M,0x05);
        // ----- Default trim sequence end, re-enable reset sources -----
        HWREG(AON_SYSCTRL12_BASE + AON_SYSCTRL12_O_RESET) = ui32ResetEvents;

        //
        // Following sequence is required for using XTAL, if not included
        // devices crashes when trying to switch to XTAL.
        //
        ui32Reg = HWREG(FCFG1_BASE + FACTORY_CFG_O_CONFIG_OSC_TOP);

        // Ryan Smith: If this register is zero the boot process should be halted!
        // TBD - is this a likely scenario???
        if(ui32Reg == 0)
        {
            while(1);
        }
        // Sets CAP SETTINGS
        DDI32RegWrite(AUX_OSCDDI_BASE, OSC_DIG_O_ANABYPASS_VALUE1, 0x000F0FFF);

        // Sets default RCOSC_LF trim
        ui32Trim = (ui32Reg & FACTORY_CFG_CONFIG_OSC_TOP_RCOSCLF_CTUNE_TRIM_M) >>
            FACTORY_CFG_CONFIG_OSC_TOP_RCOSCLF_CTUNE_TRIM_S;
        DDI16BitfieldWrite(AUX_OSCDDI_BASE, OSC_DIG_O_XOSCLF_RCOSCLF_CTRL,
                           OSC_DIG_XOSCLF_RCOSCLF_CTRL_RCOSCLF_CTUNE_TRIM_M,
                           OSC_DIG_XOSCLF_RCOSCLF_CTRL_RCOSCLF_CTUNE_TRIM_S,
                           ui32Trim);
        // Sets XOSCHF IBIAS THERM
        DDI32RegWrite(AUX_OSCDDI_BASE, OSC_DIG_O_ANABYPASS_VALUE2, 0x000003FF);
        // Sets AMPCOMP settings for switching to XOSCHF
        DDI32RegWrite(AUX_OSCDDI_BASE, OSC_DIG_O_AMPCOMP_TH2, 0x68880000);
        // Sets AMPCOMP settings for switching to XOSCHF
        DDI32RegWrite(AUX_OSCDDI_BASE, OSC_DIG_O_AMPCOMP_TH1, 0x886876A4);
        // Sets AMPCOMP settings for switching to XOSCHF
        DDI32RegWrite(AUX_OSCDDI_BASE, OSC_DIG_O_AMPCOMP_CTRL, 0x00713F27);
        // TBD : What does this do???
        DDI32RegWrite(AUX_OSCDDI_BASE, OSC_DIG_O_RADC_EXTERNAL_CFG, 0x403F4000);

        // Disable clock for OSC_DIG and release power on AUX
        HWREG(AUX_WUC_BASE + AUX_WUC_O_MODCLKEN) = 0x0;
        HWREG(AON_WUC_BASE + AON_WUC_O_AUXEVENT) = 0x0;

        // Make sure to flag that trim has been performed
        HWREGB(ADI3_BASE + ADI_3_REFSYS_O_ADI3_SPARE3) = FINAL_TRIM_DONE;
    }
    
    //
    // Check if IREFs must be enabled to avoid kickback...
    // Should only be necessary after POR.
    //
    if(!(HWREGB(ADI3_BASE + ADI_3_REFSYS_O_DCDC_CTRL_3) & 
         ADI_3_REFSYS_DCDC_CTRL_3_EN_DMY_3P3V))
    {
        //
        // Force AUX on and enable clocks
        //
        // No need to save the current status of the power/clock registers.
        // At this point both AUX and AON should have been reset to 0x0.
        //        
        HWREG(AON_WUC_BASE + AON_WUC_O_AUXEVENT) = AON_WUC_AUXEVENT_FORCEON;
        HWREG(AUX_WUC_BASE + AUX_WUC_O_MODCLKEN) = AUX_WUC_MODCLKEN_OSCCTRL |
                                                   AUX_WUC_MODCLKEN_AUX_ADI;

        //
        // Enable IREF in the DCDC - needed to avoid kickback which will potentially
        // trick the frequency doubler in to locking to a lower harmonic.
        //
        HWREGB(ADI3_BASE + ADI_O_SET + ADI_3_REFSYS_O_DCDC_CTRL_3) = 
            ADI_3_REFSYS_DCDC_CTRL_3_EN_DMY_3P3V;

        //
        // Enable IREF in the SOC LDO - needed to avoid kickback which will
        // potentially trick the frequency doubler in to locking to a lower
        // harmonic.
        //
        HWREGB(ADI2_BASE + ADI_O_SET + ADI_2_REFSYS_O_SOCLDO_1_0) = 
            ADI_2_REFSYS_SOCLDO_1_0_EN_IPTAT;

        //
        // Enable IREF in the XOSCHF - needed to avoid kickback which will
        // potentially trick the frequency doubler in to locking to a lower
        // harmonic.
        //
        HWREGH(AUX_OSCDDI_BASE + DDI_O_SET + OSC_DIG_O_XOSCHF_CTRL) = 
            OSC_DIG_XOSCHF_CTRL_XOSCHF_HPBUFF_IREF_OVERRIDE |
                OSC_DIG_XOSCHF_CTRL_XOSCHF_PEAKDET_IPTAT_OVERRIDE;

        //
        // Enable IREF in the ADC - needed to avoid kickback which will potentially
        // trick the frequency doubler in to locking to a lower harmonic.
        //
        HWREGB(AUX_ADI_BASE + ADI_O_SET + ADI_4_AUX_O_CTL2_2_ADC_REF) = 
            ADI_4_AUX_CTL2_2_ADC_REF_REF_IVREF_EN |
                ADI_4_AUX_CTL2_2_ADC_REF_REF_IREF_EN;
        HWREGB(AUX_ADI_BASE + ADI_O_SET + ADI_4_AUX_O_CTL2_0_ADC) = 
            ADI_4_AUX_CTL2_0_ADC_IREF_EN;

        //
        // Disable clock for OSC_DIG and release power on AUX
        //
        HWREG(AUX_WUC_BASE + AUX_WUC_O_MODCLKEN) = 0x0;
        HWREG(AON_WUC_BASE + AON_WUC_O_AUXEVENT) = 0x0;
    }
    
#if defined(RUN_FROM_RAM)
#pragma message("Including initialization of moving NVIC table in RAM")
    HWREG(NVIC_VTABLE) = 0x20000000;
#endif
    
    // Manual boot trim, due to non-functioning boot ROM
#if defined(DO_MANUAL_TRIM)
#pragma message("Including manual boot trim sequence for running on stand-alone device")
    manualBootTrim();
#endif
  
}
*/


/**************************************************************************//**
* @brief    Switches the HF source to XTAL
*
*           Contains the current initialization needed to switch to XTAL. This
*           includes some workaround for stabilizing the clock doubler.
*
* @return   None
******************************************************************************/

/*
enum InitLibStatus InitLib_switchToXtal(void)
{
  static uint32_t pSetupCmd[2] RF_CMD_MEM_LOCATION;
  static uint32_t pOverrides[9] RF_CMD_MEM_LOCATION;
  int_fast8_t overrideIndex;
  uint32_t CMDSTA_val = 0;
  
  //
  //Turn on clocks for AUX ADI and OSC TOP DDI to enable or check XOSC
  //CM3 goes to FaultISR if enabling AUX WUC clocks when AUX is powered down
  //from last program run (CC26_V1_BUG00090)
  //
  //Force AUX on in case it is off from last flash upload and run
  AONWUCAuxWakeupEvent(AONWUC_AUX_WAKEUP);
  //Wait until AUX is powered on
  while(!(AONWUCPowerStatus() & AONWUC_AUX_POWER_ON));

  //Enable clocks for OSC DDI and ADI
  AUXWUCClockEnable(AUX_WUC_OSCCTRL_CLOCK|AUX_WUC_ADI_CLOCK);
  
  //Enable OSC DIG interface to change clock sources
  OSCInterfaceEnable();

  //
  //Check to not enable XOSC if already enabled since OSCHFSourceSwitch() freezes
  //in loop waiting for clock ok signal
  //0: RCOSC, 1: XOSC
  //
  if(OSCClockSourceGet(OSC_SRC_CLK_HF) != OSC_XOSC_HF)
  {

    //
    //Ugly Hack™ to remove clock doubler issue
    //

    //Enable RF Core power domain temporarily
    PRCMPowerDomainOn(PRCM_DOMAIN_RFCORE);

    while(PRCMPowerDomainStatus(PRCM_DOMAIN_RFCORE) != PRCM_DOMAIN_POWER_ON);
    // Enable clocks inside RF Core (non-buffered reg write, to make sure)
    //HWREG(RF24_PWR_NONBUF_BASE + RF24_PWR_O_PWMCLKENABLE) = 0x7FF; // all clocks
    HWREG(RFC_PWR_NONBUF_BASE + RFC_PWR_O_PWMCLKEN) = 0x7FF; // all clocks  
    
    // Make command for setting codrrect config
    memset(pSetupCmd, 0, SIZEOF_STRUCT(CMD_WRITE_FWPAR));
    GET_FIELD(pSetupCmd, command, commandNo) = CMD_WRITE_FWPAR;
    GET_FIELD(pSetupCmd, CMD_WRITE_FWPAR, address) = 0x106E;
    GET_FIELD(pSetupCmd, CMD_WRITE_FWPAR, value) = 0x0001;

    // Enable bias current in all modules to stay on even though modules are off (adds ??uA)
    // Set correct synth config value so that ADI1 can be written
    if ( ! RfSendCommandOk( (uint32_t) pSetupCmd, &CMDSTA_val )) {
      return InitLibStatus_RadioCommunicationError;
    }
    
    // Make override that configures ADI writes
    overrideIndex = 0;
    pOverrides[overrideIndex++] = 
      ADI_HALFREG_OVERRIDE(0, ADI_0_RF_O_RF_LDO_1 * 2, 
                           ADI_0_RF_RF_LDO_1_RFLDO_EN_BIAS_ONLY_M, 
                           ADI_0_RF_RF_LDO_1_RFLDO_EN_BIAS_ONLY_M);
    pOverrides[overrideIndex++] = 
      ADI_HALFREG_OVERRIDE(0, ADI_0_RF_O_IFADC11 * 2,
                            ADI_0_RF_IFADC11_ENABLE_OVERRIDE_M,
                            ADI_0_RF_IFADC11_ENABLE_OVERRIDE_M);
    pOverrides[overrideIndex++] = 
      ADI_HALFREG_OVERRIDE(0, ADI_0_RF_O_IFALDO1 * 2, 
                            ADI_0_RF_IFALDO1_IFANALDO_EN_BIAS_ONLY_M,
                            ADI_0_RF_IFALDO1_IFANALDO_EN_BIAS_ONLY_M);
    pOverrides[overrideIndex++] = 
      ADI_HALFREG_OVERRIDE(0, ADI_0_RF_O_IFDLDO1 * 2, 
                            ADI_0_RF_IFDLDO1_IFDIGLDO_EN_BIAS_ONLY_M,
                            ADI_0_RF_IFDLDO1_IFDIGLDO_EN_BIAS_ONLY_M);
    pOverrides[overrideIndex++] = 
      ADI_HALFREG_OVERRIDE(0, ADI_0_RF_O_CTL_LNA0 * 2,
                            ADI_0_RF_CTL_LNA0_EN_DMY_LNA_M,
                            ADI_0_RF_CTL_LNA0_EN_DMY_LNA_M);
    pOverrides[overrideIndex++] = 
      ADI_HALFREG_OVERRIDE(0, ADI_0_RF_O_CTL_IFAMP0 * 2,
                            ADI_0_RF_CTL_IFAMP0_EN_DMY_IFAMP_M,
                            ADI_0_RF_CTL_IFAMP0_EN_DMY_IFAMP_M);
    pOverrides[overrideIndex++] = 
      ADI_HALFREG_OVERRIDE(0, ADI_0_RF_O_CTL_PA0 * 2, 
                           ADI_0_RF_CTL_PA0_EN_DMY_M,
                           ADI_0_RF_CTL_PA0_EN_DMY_M);
    pOverrides[overrideIndex++] = 
      ADI_2HALFREG_OVERRIDE(1, ADI_1_SYNTH_O_CTL_LDOVCO_1 * 2,
                            ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN_BIAS_ONLY_M,
                            ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN_BIAS_ONLY_M,
                            ADI_1_SYNTH_O_SLDO_1 * 2,
                            ADI_1_SYNTH_SLDO_1_SLDO_EN_BIAS_ONLY_M,
                            ADI_1_SYNTH_SLDO_1_SLDO_EN_BIAS_ONLY_M);   
    pOverrides[overrideIndex++] = END_OVERRIDE;


    // Make update setup command
    memset(pSetupCmd, 0, SIZEOF_STRUCT(CMD_UPDATE_RADIO_SETUP));
    GET_FIELD(pSetupCmd, command, commandNo) = CMD_UPDATE_RADIO_SETUP;
    GET_FIELD(pSetupCmd, CMD_UPDATE_RADIO_SETUP, pRegOverride) = pOverrides;
    // Send command that writes ADI
    if ( ! RfSendCommandOk( (uint32_t) pSetupCmd, &CMDSTA_val )) {
      return InitLibStatus_RadioCommunicationError;
    }


    HWREG(RF24_PWR_NONBUF_BASE + RF24_PWR_O_PWMCLKENABLE) = 0x0;
    PRCMPowerDomainOff(PRCM_DOMAIN_RFCORE);
    while(PRCMPowerDomainStatus(PRCM_DOMAIN_RFCORE) != PRCM_DOMAIN_POWER_OFF);
     
    //
    //Ugly Hack™ end
    //
    
    // Request to switch to the crystal to enable radio operation.
    // It takes a while for the XTAL to be ready so it is possible to
    // perform other tasks while waiting.
    OSCClockSourceSet(OSC_SRC_CLK_LF | OSC_SRC_CLK_MF | OSC_SRC_CLK_HF,
                      OSC_XOSC_HF);


    //
    // Switch the HF source to XTAL - must be performed safely outside flash access to
    // avoid flash issues when switching the clock.
    //
    OSCHfSourceSwitch();
  }

  //Disable OSC DIG interface
  OSCInterfaceDisable();

  //Power off AUX
  AUXWUCPowerCtrl(AUX_WUC_POWER_OFF);

  //Wait until AUX is powered off
  while( (AONWUCPowerStatus() & AONWUC_AUX_POWER_ON) != 0);
  
  return InitLibStatus_Ok;
}
*/


enum InitLibStatus InitLib_startAndCalibrateSynth(uint32_t frequency, 
                                                  uint8_t divider,
                                                  enum InitLibRadioMode radioMode,
                                                  enum InitLibSynthMode synthMode,
                                                  uint32_t crystalFrequency)
{
  uint32_t CMDSTA_val;
  
  // Turn on clocks for FSCA MCE and RFE RAM to force enable of FSCA and RFE
  // clocks, to allow direct RFE reg access.
  if(!RfSendCommandOk(CMDR_DIR_CMD_2BYTE(
                        CMD_FORCE_CLK_ENA, 
                        //RF24_PWR_PWMCLKENABLE_FSCA | RF24_PWR_PWMCLKENABLE_RFE | RF24_PWR_PWMCLKENABLE_MDM), 
                        RFC_PWR_PWMCLKEN_FSCA | RFC_PWR_PWMCLKEN_RFE | RFC_PWR_PWMCLKEN_MDM),
                       &CMDSTA_val ))
    return InitLibStatus_Error;
  
  
  frequency = getCorrectPllFrequency(frequency, synthMode, radioMode);
  
  runFractionalResamplerBugFix(divider);
  
  //LH: Don't understand this right shifting of the freq.
  //turn_on_synth(CC13XX_MODE, frequency >> 16);
  turn_on_synth(CC26XX_MODE, frequency >> 16);
  
  /*calibrate_synth(CC13XX_MODE, 
                  (frequency >> 16), 
                  (frequency & 0xFFFF), 
                  divider, 
                  synthMode, 
                  crystalFrequency);*/
  
  calibrate_synth(CC26XX_MODE, 
                  (frequency >> 16), 
                  (frequency & 0xFFFF), 
                  divider, 
                  synthMode, 
                  crystalFrequency);
  
  
  if(pllCorrectionDone == 0)
    pllCorrectionDone = 1;
  
  return InitLibStatus_Ok;
}

void InitLib_shutdownSynth(void)
{
  turn_off_synth();
}

static uint32_t getCorrectPllFrequency(uint32_t frequency, enum InitLibSynthMode synthMode, enum InitLibRadioMode radioMode)
{
  uint8_t *pRadioCfg = (uint8_t *) 0x21000210; // address to CPE's internal radioCfg struct
  uint8_t test_watch = *pRadioCfg; //because cannot see the struct in the watch in its pointer form
  
  // The CMD_PROP_RADIO_SETUP should configure radio for either 0.25 MHz
  // (if narrow RX channel), 0.5 MHz or 1.0 MHz (wide RX channel filter).
  // Due to bug, the modisfcfg.txfoff setting (used in TX) is calculated
  // incorrectly, and CM3 must adjust this.
  uint32_t par_modIsfCfgVal = GET_FIELD(pRadioCfg, radioPar, modIsfCfgVal);
  
    // If MODISFCFG_TXFOFF_M is 0x000 this will always return 0?
    // If MODISFCFG_TXFOFF_M = 0xFFF, only the correct bits set to 1 would return non-zero
    if ((par_modIsfCfgVal & RF24_FSCA_MODISFCFG_TXFOFF_M) == 0) {
  
    // No TX freq offset after CMD_PROP_RADIO_SETUP. We will do no txfoff adjustment.
 } else {
  
    // Recalculate txfoff setting, based on mdmTxIntFreq, using correct Frf resolution
    uint32_t wantedTxIfFreq = GET_FIELD(pRadioCfg, radioPar, mdmTxIntFreq); // wanted IF freq, 20.12 MHz format
    uint32_t rfChannelFreq = frequency >> 4; // 20.12 MHz
    int32_t txfoff = ((wantedTxIfFreq << 19) / (rfChannelFreq >> 2)); // wantedTxIfFreq is by CPE max 1.0 MHz, so we need to avoid overflow
    
    if ((txfoff >= (1 << 11)) || (txfoff < -(1 << 11))) {
                     
      // New txfoff exceeds valid range (12bit, signed), will cause overflow. 
      // Can't support this TX IF setting, will change it to use 0 instead.
      GET_FIELD(pRadioCfg, radioPar, mdmTxIntFreq) = 0;
      txfoff = 0;
    }
    // Write back the new value
    par_modIsfCfgVal = (par_modIsfCfgVal & ~RF24_FSCA_MODISFCFG_TXFOFF_M) | ((txfoff << RF24_FSCA_MODISFCFG_TXFOFF_S) & RF24_FSCA_MODISFCFG_TXFOFF_M);
    GET_FIELD(pRadioCfg, radioPar, modIsfCfgVal) = par_modIsfCfgVal;
 }
  
  // Calculate the synth PLL frequency to use, compensated for IF setting.
  // physical freq on 16.16 MHz format
  uint32_t pllFrequency = frequency; 
  // Subtract the IF used by RFCore. This can be either 0.25, 0.5, or 1.0 MHz,
  // readable from internal mdmTxIntFreq or mdmRxIntfFreq variables in 4.12 MHz format.
  // (Typically, unless otherwise overridden, we can assume RX and TX IF are identical)
  // shift to get the IF into 16.16 format as well
  if (radioMode == InitLibRadioMode_CW) {
    // Do Nothing
  } else {
    if (synthMode == InitLibSynthMode_TX) {
      //synthesizer/modulator-related setting?
      pllFrequency -= ((uint32_t) GET_FIELD(pRadioCfg, radioPar, mdmTxIntFreq) << 4); 
    } else {
      pllFrequency -= ((uint32_t) GET_FIELD(pRadioCfg, radioPar, mdmRxIntFreq) << 4); 
    }
  }
  
  return pllFrequency;
}


static void runFractionalResamplerBugFix(uint8_t divider)
{
  // HACK: After CMD_FS, set new modem register P/Q values for fractional resampler.
  //       Seems like CM0 calculates wrong values (we must divide P/Q by factor divider/2, by multiplying Q).
  uint32_t qVal = (HWREG(RF24_MDM_BASE + RF24_MDM_O_DEMFRAC3) << 16);

  qVal |= HWREG(RF24_MDM_BASE + RF24_MDM_O_DEMFRAC2);
  qVal = (qVal * divider) >> 1;  // *(divider/2) //this sets qval to 0?
  HWREG(RF24_MDM_BASE + RF24_MDM_O_DEMFRAC2) = qVal & 0xFFFF;
  HWREG(RF24_MDM_BASE + RF24_MDM_O_DEMFRAC3) = qVal >> 16;
    
  // HACK: Override the dynamically calculated matched filter coefficients set by CM0,
  //       as they give low performance. Instead use the default values that exists in MCE patch code.
  HWREG(RF24_MDM_BASE + RF24_MDM_O_DEMMAFI0) = 0x0000; // these values are good for 50kbps/25 kHz dev (=> modulation index h=1.0)
  HWREG(RF24_MDM_BASE + RF24_MDM_O_DEMMAFI1) = 0x5014; // for 38.4/20 kHz (=> modulation index h= 1.04) these works too.
  HWREG(RF24_MDM_BASE + RF24_MDM_O_DEMMAFI2) = 0x0050;
  HWREG(RF24_MDM_BASE + RF24_MDM_O_DEMMAFI3) = 0x0000;
}

//-----------------------------------------------------------------------------
// RfSendCommandOk
//
// Returns TRUE if command finished successfully (The command is finished
//    when CMDSTA!=0 and successfully if CMDSTA[7:0]==0x01)
// Send RF-command (ref. RF core HAL specification)
//-----------------------------------------------------------------------------
static uint_fast8_t RfSendCommandOk( uint32_t CMDR_val, uint32_t * pCMDSTA_val )
{
   uint32_t timeoutCount = 0;
   //HWREG( RF24_DBELL_BASE + RF24_DBELL_O_CMDR ) = CMDR_val;
   HWREG( RFC_DBELL_BASE + RFC_DBELL_O_CMDR ) = CMDR_val;
   do {
      //*pCMDSTA_val = HWREG( RF24_DBELL_BASE + RF24_DBELL_O_CMDSTA );
      *pCMDSTA_val = HWREG( RFC_DBELL_BASE + RFC_DBELL_O_CMDSTA );
      if (++timeoutCount > 50000) {
         return 0; // Error
      }
   } while ( *pCMDSTA_val == CMDSTA_Pending );

   return (( *pCMDSTA_val & 0x80 ) == 0 );
}

/*******************************************************************************
* @fn      manualBootTrim
*
* @brief   Warning: There may be clashes with this trim and the startup trim
*
*          Do initial device configuration, i.e. configuring available
*          peripherals, and setting some default trim values. This
*          initialization should normally be done automatically by boot ROM at
*          start-up, so this function is only intended to be used on devices
*          without a functional boot ROM / trim settings.
*
*          This function assumes that AUX domain is already powered on, as
*          is default upon a boot.
*
*          This is a preliminary debug version. See NOTEs in code comments.
*
* @param   none
*
* @return  none
*******************************************************************************/
/*static void manualBootTrim(void)
{
  unsigned long ulSysctrl12Reset;
  volatile unsigned char delay;
  
  //
  // Force AUX on and enable clocks
  //
  //Force AUX on in case it is off from last flash upload and run
  AONWUCAuxWakeupEvent(AONWUC_AUX_WAKEUP);
  //Wait until AUX is powered on
  while(!(AONWUCPowerStatus() & AONWUC_AUX_POWER_ON));

  //Enable clocks for OSC DDI and ADI
  AUXWUCClockEnable(AUX_WUC_OSCCTRL_CLOCK|AUX_WUC_ADI_CLOCK);


  /* Perform device configuration normally done by boot ROM at startup */
  // Configure available peripherals, RAM size etc.
  // default reset value: CONFIG_RFC = 0x01    => RFCore enabled
  // default reset value: CONFIG_RET = 0xE7    => Retention enabled in most domains
  /*HWREG(PRCM_BASE + PRCM_O_CONFIG_SEC_DMA) = 0x0103;
  HWREG(PRCM_BASE + PRCM_O_CONFIG_GPIO) = 0x01;
  HWREG(PRCM_BASE + PRCM_O_CONFIG_GPTM) = 0x0F;
  HWREG(PRCM_BASE + PRCM_O_CONFIG_I2C) = 0x01;
  HWREG(PRCM_BASE + PRCM_O_CONFIG_UART) = 0x01;
  HWREG(PRCM_BASE + PRCM_O_CONFIG_SSI) = 0x03;
  HWREG(PRCM_BASE + PRCM_O_CONFIG_I2S) = 0x01;*/
  // default reset value: CONFIG_RAMSIZE = 0x3 => 16 kB SRAM

  // NOTE: normally, after configuration, the boot ROM will typically lock
  //       the PRCM configuration, but we will not do that here


  /* Load analog trim settings */
     
  // ----- Default trim sequence copied from here: -----
  // http://webix.norway.design.ti.com/svn/lab/Kharon/Register%20files/Characterisation%20register%20files/CC26xx/Default_trim
  // NOTE: Copied 2013-08-12 -- comment says: "this is not finished yet, missing BOD trim"
  // NOTE: Trim settings are developed for nominal devices only.
    
  // -- Disable reset sources while trimming
  /*ulSysctrl12Reset = HWREG(AON_SYSCTRL12_BASE + AON_SYSCTRL12_O_RESET);
  HWREG(AON_SYSCTRL12_BASE + AON_SYSCTRL12_O_RESET) = 0x00;
    
  // --- SOC REFSYS trim ---
  // Trim BGAP
  HWREGB(ADI3_BASE + ADI_3_REFSYS_O_CTLSOCREFSYS3) = 0x01;
  // Latch in BGAP trim
  HWREGB(ADI3_BASE + ADI_3_REFSYS_O_CTLSOCREFSYS3) = 0x81;
  // Trim 0.8V vref
  HWREGB(ADI3_BASE + ADI_3_REFSYS_O_CTLSOCREFSYS2) = 0x40;
  delay = 255; while(--delay); // small delay!
  // Trim IREF to 4 uA
  HWREGB(ADI2_BASE + ADI_2_REFSYS_O_CTLSOCREFSYS0) = 0x1C;
  // Trim VDDS BOD (TBD)
  //HWREGB(ADI3_BASE + ADI_3_REFSYS_O_CTLSOCREFSYS) = 0xTBD; // TODO?
    
  // --- BATMON trim ---
  // Enable BATMON measurement
  HWREG(AON_BATMON_BASE + AON_BATMON_O_CONFIGURATION) = 0x01;
  // Write BATMON battery trim settings
  HWREG(AON_BATMON_BASE + AON_BATMON_O_BMONP0) = 0x1D;
  HWREG(AON_BATMON_BASE + AON_BATMON_O_BMONP1) = 0x24;
  // Write BATMON temperature trim settings
  HWREG(AON_BATMON_BASE + AON_BATMON_O_TEMPP0) = 0x6D;
  HWREG(AON_BATMON_BASE + AON_BATMON_O_TEMPP1) = 0x2E;
  HWREG(AON_BATMON_BASE + AON_BATMON_O_TEMPP2) = 0x06;
  // Enable BATMON calculation
  HWREG(AON_BATMON_BASE + AON_BATMON_O_CONFIGURATION) = 0x03;

  // --- DCDC 1A trim ---
  // Set VDDR to 1.7V
  // Note: Note that the trimming of CTRL_1 is done in the startup code.
  // Set VDDR sleep trim voltage
  HWREGB(ADI3_BASE + ADI_3_REFSYS_O_DCDC_CTRL_2) = 0x19;
  // Set DC/DC driving strength to max
  HWREGB(ADI3_BASE + ADI_3_REFSYS_O_DCDC_CTRL_5) = 0x3F;
  // Set DC/DC inductor peak current
  HWREGB(ADI3_BASE + ADI_3_REFSYS_O_DCDC_CTRL_6) = 0x04;

  // --- SOC_LDO trim ---
  // Trim DIG_LDO & uLDO to 1.25V, BOD to 1.21V
  HWREGB(ADI2_BASE + ADI_2_REFSYS_O_SOCLDO_0_1) = 0xD0;
  // uLDO and BOD
  HWREGB(ADI2_BASE + ADI_2_REFSYS_O_SOCLDO_0_0) = 0x02;
  // Turn uLDO on
  // Note: Clashes with the current startup code which enables IREF
#if 0
  HWREGB(ADI2_BASE + ADI_2_REFSYS_O_SOCLDO_1_0) = 0x01;
#endif
  
  // --- OSC_TOP trim ---

  // Trim RCOSC to 48 MHz
  //HWREG(AUX_OSCDDI_BASE + OSC_DIG_O_RCOSCHF_CTRL) = 0x00009400;
  // NOTE: If we apply the above RCOSCHF trim setting, there seems to be a
  //       problem with the IAR debugger losing contact when we're doing a
  //       reset-to-main in debug mode, so a different (lower) trim value has
  //       been chosen (temporary workaround). This does *NOT* provide 48 MHz
  //       clock frequency, probably closer to 30 MHz?
  //HWREG(AUX_OSCDDI_BASE + OSC_DIG_O_RCOSCHF_CTRL) = 0x00005400;
  //Trying with the following sequence:
  if ( HWREG( AUX_OSCDDI_BASE + OSC_DIG_O_RCOSCHF_CTRL ) != 0x9400 ) {
    for ( uint32_t i = 0x5400 ; i <= 0x9400 ; i += 0x100 ) {
       HWREG( AUX_OSCDDI_BASE + OSC_DIG_O_RCOSCHF_CTRL ) = i;
       for ( volatile uint32_t j = 0 ; j < 1000 ; j++ ) {
          // Just use time :-)
       }
    }
  }

  // Trim NANOAMP_BIAS and enable it
  HWREG(AUX_OSCDDI_BASE + OSC_DIG_O_ADC_DBLR_NANOAMP_CTRL) = 0x1F000000;
  // XOSC for use with OSC_DIG HPM/LPM control
  HWREG(AUX_OSCDDI_BASE + OSC_DIG_O_RADC_EXTERNAL_CFG) = 0x403F4000;
  HWREG(AUX_OSCDDI_BASE + OSC_DIG_O_AMPCOMP_CTRL) = 0x00713F27;
  HWREG(AUX_OSCDDI_BASE + OSC_DIG_O_AMPCOMP_TH1) = 0x886876A4;
  HWREG(AUX_OSCDDI_BASE + OSC_DIG_O_AMPCOMP_TH2) = 0x68880000;
  HWREG(AUX_OSCDDI_BASE + OSC_DIG_O_ANABYPASS_VALUE1) = 0x000F0FFF;
  HWREG(AUX_OSCDDI_BASE + OSC_DIG_O_ANABYPASS_VALUE2) = 0x000003FF;
  // Trim RCOSC_LF
  // Note: Clashes with startup code
#if 0
  HWREG(AUX_OSCDDI_BASE + OSC_DIG_O_XOSCLF_RCOSCLF_CTRL) = 0x000000D8;
#endif

  // ----- Default trim sequence end, re-enable reset sources -----
  HWREG(AON_SYSCTRL12_BASE + AON_SYSCTRL12_O_RESET) = ulSysctrl12Reset;
  
  
  //Disable AUX clocks again
  AUXWUCClockDisable(AUX_WUC_OSCCTRL_CLOCK|AUX_WUC_ADI_CLOCK);
  //Relase force on AUX
  AONWUCAuxWakeupEvent(AONWUC_AUX_ALLOW_SLEEP);
  //Power off AUX
  AUXWUCPowerCtrl(AUX_WUC_POWER_OFF);

  //Wait until AUX is powered off
  //TBD: Check if this works..
  while( (AONWUCPowerStatus() & AONWUC_AUX_POWER_ON) != 0);

  return;
}*/

/**************************************************************************//**
* Close the Doxygen group.
* @}
******************************************************************************/
