
/******************************************************************************
*  Filename:       hw_aon_wuc.h
*  Revised:        $Date: 2014-03-13 14:29:16 +0100 (to, 13 mar 2014) $
*  Revision:       $Revision: 40389 $
*
*  Description:    Template file for driverlib headers.
*
*  Copyright (C) 2014 Texas Instruments Incorporated - http://www.ti.com/
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
#ifndef __HW_AON_WUC_H__
#define __HW_AON_WUC_H__

//*****************************************************************************
//
// The following are defines for the AON_WUC register offsets.
//
//*****************************************************************************
#define AON_WUC_O_MCUCLK        0x00000000  // MCU Clock Management 
#define AON_WUC_O_AUXCLK        0x00000004  // AUX Clock Management 
#define AON_WUC_O_MCUCFG        0x00000008  // MCU Configuration 
#define AON_WUC_O_AUXCFG        0x0000000C  // AUX Configuration 
#define AON_WUC_O_AUXCTL        0x00000010  // AUX Event Management 
#define AON_WUC_O_PWRSTAT       0x00000014  // Power Status 
#define AON_WUC_O_SHUTDOWN      0x00000018  // Shutdown Control 
#define AON_WUC_O_CTL0          0x00000020  // General Configuration 
#define AON_WUC_O_CTL1          0x00000024  // General Status 
#define AON_WUC_O_RECHARGECFG   0x00000030  // Recharge Controller 
                                            // Configuration 
#define AON_WUC_O_RECHARGESTAT  0x00000034  // Recharge Controller Status 
#define AON_WUC_O_OSCCFG        0x00000038  // Oscillator Configuration 
#define AON_WUC_O_JTAGCFG       0x00000040  // JTAG Configuration 
#define AON_WUC_O_JTAGUSERCODE  0x00000044  // JTAG USERCODE 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_WUC_O_MCUCLK register.
//
//*****************************************************************************
#define AON_WUC_MCUCLK_RCOSC_HF_CAL_DONE \
                                0x00000004  // MCU bootcode will set this bit 
                                            // when RCOSC_HF is calibrated. The 
                                            // FLASH can not be used until this 
                                            // bit is set. 1: RCOSC_HF is 
                                            // calibrated to 48 Mhz, allowing 
                                            // flash to power up. 0: Flash must 
                                            // not assume that the sclk_hf is 
                                            // safe 

#define AON_WUC_MCUCLK_RCOSC_HF_CAL_DONE_M \
                                0x00000004
#define AON_WUC_MCUCLK_RCOSC_HF_CAL_DONE_S 2
#define AON_WUC_MCUCLK_PWR_DWN_SRC_M \
                                0x00000003  // When MCU requests powerdown 
                                            // with sclk_hf as source, then WUC 
                                            // will switch over to this clock 
                                            // source during powerdown, and 
                                            // automatically switch back to 
                                            // sclk_hf when MCU is no longer 
                                            // requesting powerdown and system 
                                            // is back in active mode. 

#define AON_WUC_MCUCLK_PWR_DWN_SRC_S 0
#define AON_WUC_MCUCLK_PWR_DWN_SRC_NONE \
                                0x00000000  // No clock in Powerdown 
#define AON_WUC_MCUCLK_PWR_DWN_SRC_SCLK_LF \
                                0x00000001  // Use SCLK_LF in Powerdown 
#define AON_WUC_MCUCLK_PWR_DWN_SRC_SCLK_MF \
                                0x00000002  // Use SCLK_MF in Powerdown 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_WUC_O_AUXCLK register.
//
//*****************************************************************************
#define AON_WUC_AUXCLK_PWR_DWN_SRC_M \
                                0x00001800  // When AUX requests powerdown 
                                            // with sclk_hf as source, then WUC 
                                            // will switch over to this clock 
                                            // source during powerdown, and 
                                            // automatically switch back to 
                                            // sclk_hf when AUX system is back 
                                            // in active mode 

#define AON_WUC_AUXCLK_PWR_DWN_SRC_S 11
#define AON_WUC_AUXCLK_PWR_DWN_SRC_NONE \
                                0x00000000  // No clock in Powerdown 
#define AON_WUC_AUXCLK_PWR_DWN_SRC_SCLK_LF \
                                0x00000800  // Use SCLK_LF in Powerdown 
#define AON_WUC_AUXCLK_PWR_DWN_SRC_SCLK_MF \
                                0x00001000  // Use SCLK_MF in Powerdown 
#define AON_WUC_AUXCLK_SCLK_HF_DIV_M \
                                0x00000700  // Select the AUX clock divider 
                                            // for sclk_hf NB: It is not 
                                            // supported to change the aux 
                                            // clock divider while sclk_hf is 
                                            // active source for AUX 

#define AON_WUC_AUXCLK_SCLK_HF_DIV_S 8
#define AON_WUC_AUXCLK_SCLK_HF_DIV_DIV2 \
                                0x00000000  // Divide by 2 
#define AON_WUC_AUXCLK_SCLK_HF_DIV_DIV4 \
                                0x00000100  // Divide by 4 
#define AON_WUC_AUXCLK_SCLK_HF_DIV_DIV8 \
                                0x00000200  // Divide by 8 
#define AON_WUC_AUXCLK_SCLK_HF_DIV_DIV16 \
                                0x00000300  // Divide by 16 
#define AON_WUC_AUXCLK_SCLK_HF_DIV_DIV32 \
                                0x00000400  // Divide by 32 
#define AON_WUC_AUXCLK_SCLK_HF_DIV_DIV64 \
                                0x00000500  // Divide by 64 
#define AON_WUC_AUXCLK_SCLK_HF_DIV_DIV128 \
                                0x00000600  // Divide by 128 
#define AON_WUC_AUXCLK_SCLK_HF_DIV_DIV256 \
                                0x00000700  // Divide by 256 
#define AON_WUC_AUXCLK_SRC_M    0x00000007  // Selects the clock source for 
                                            // AUX: NB: Switching the clock 
                                            // source is guaranteed to be 
                                            // glitchless 
#define AON_WUC_AUXCLK_SRC_S    0
#define AON_WUC_AUXCLK_SRC_SCLK_HF \
                                0x00000001  // HF Clock 
#define AON_WUC_AUXCLK_SRC_SCLK_MF \
                                0x00000002  // MF Clock 
#define AON_WUC_AUXCLK_SRC_SCLK_LF \
                                0x00000004  // LF Clock 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_WUC_O_MCUCFG register.
//
//*****************************************************************************
#define AON_WUC_MCUCFG_VIRT_OFF 0x00020000  // Controls action taken when 
                                            // receiving a request to power-off 
                                            // MCU: 0: Power-off MCU 1: Assert 
                                            // reset and stop clock, but keep 
                                            // MCU powered (virtual power-off) 
#define AON_WUC_MCUCFG_VIRT_OFF_M \
                                0x00020000
#define AON_WUC_MCUCFG_VIRT_OFF_S 17
#define AON_WUC_MCUCFG_FIXED_WU_EN \
                                0x00010000  // Controls timing of MCU-wakeup: 
                                            // 0: MCU wake-up is immediately 
                                            // following triggering event 1: 
                                            // MCU wake-up is forced to happen 
                                            // a fixed number of 32 KHz clocks 
                                            // following the triggering event. 
                                            // The number of 32 Khz clock 
                                            // cycles is configured in 
                                            // CONFIG.FIXEDWUPERIOD register 
                                            // This bit is used to ensure that 
                                            // the MCU is always woken up an 
                                            // exact number of clocks following 
                                            // the triggering event by 
                                            // compensating for any variable 
                                            // delays caused by other 
                                            // activities going on at the time 
                                            // of wakeup (such as a recharge 
                                            // event etc.) 

#define AON_WUC_MCUCFG_FIXED_WU_EN_M \
                                0x00010000
#define AON_WUC_MCUCFG_FIXED_WU_EN_S 16
#define AON_WUC_MCUCFG_SRAM_RET_EN_M \
                                0x0000000F  // MCU RAM is partitioned into 4 
                                            // banks of 1Kx32 each. Bit #n 
                                            // controls retention mode for RAM 
                                            // bank #n: 0: Retention disabled 
                                            // 1: Retention enabled 

#define AON_WUC_MCUCFG_SRAM_RET_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_WUC_O_AUXCFG register.
//
//*****************************************************************************
#define AON_WUC_AUXCFG_VIRT_OFF 0x00020000  // Controls action taken when 
                                            // receiving a request to power-off 
                                            // AUX: 0: Power-off AUX 1: Assert 
                                            // reset and stop clock, but keep 
                                            // AUX powered (virtual power-off) 
#define AON_WUC_AUXCFG_VIRT_OFF_M \
                                0x00020000
#define AON_WUC_AUXCFG_VIRT_OFF_S 17
#define AON_WUC_AUXCFG_FIXED_WU_EN \
                                0x00010000  // Controls timing of AUX-wakeup: 
                                            // 0: AUX wake-up is immediately 
                                            // following triggering event 1: 
                                            // AUX wake-up is forced to happen 
                                            // a fixed number of 32 KHz clocks 
                                            // following the triggering event. 
                                            // The number of 32KHz clock cycles 
                                            // is configured in 
                                            // CONFIG.FIXEDWUPERIOD register. 
                                            // This bit is used to ensure that 
                                            // the AUX is always woken up an 
                                            // exact number of clocks following 
                                            // the triggering event by 
                                            // compensating for any variable 
                                            // delays caused by other 
                                            // activities going on at the time 
                                            // of wakeup (such as a recharge 
                                            // event etc.) NB: Waking up AUX by 
                                            // FORCEON and SWEVENT is not 
                                            // affected by this bit 

#define AON_WUC_AUXCFG_FIXED_WU_EN_M \
                                0x00010000
#define AON_WUC_AUXCFG_FIXED_WU_EN_S 16
#define AON_WUC_AUXCFG_SRAM_RET_EN \
                                0x00000001  // AUX RAM is a single 512x16 
                                            // instance. This bit controls 
                                            // retention mode for the RAM: 0: 
                                            // Retention is disabled 1: 
                                            // Retention is enabled NB: If 
                                            // retention is disabled, the RAM 
                                            // will be powered off when it 
                                            // would otherwise be put in 
                                            // retention mode 

#define AON_WUC_AUXCFG_SRAM_RET_EN_M \
                                0x00000001
#define AON_WUC_AUXCFG_SRAM_RET_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_WUC_O_AUXCTL register.
//
//*****************************************************************************
#define AON_WUC_AUXCTL_RESET_REQ \
                                0x80000000  // Reset request for AUX 1: AUX 
                                            // reset pin is asserted 0: AUX 
                                            // reset pin is deasserted 

#define AON_WUC_AUXCTL_RESET_REQ_M \
                                0x80000000
#define AON_WUC_AUXCTL_RESET_REQ_S 31
#define AON_WUC_AUXCTL_SCE_RUN_EN \
                                0x00000004  // Tells AUX that it has a valid 
                                            // image in the memory 1: AUX will 
                                            // start executing the program in 
                                            // AUXRAM when it wakes up 0: AUX 
                                            // may wake up, but controller will 
                                            // remain in idle since memory 
                                            // image can not be trusted. 

#define AON_WUC_AUXCTL_SCE_RUN_EN_M \
                                0x00000004
#define AON_WUC_AUXCTL_SCE_RUN_EN_S 2
#define AON_WUC_AUXCTL_SWEV     0x00000002  // Forces AUX to be powered on, 
                                            // and a SW event to be sent to the 
                                            // AUX controller: 0: No action 1: 
                                            // Force AUX to be powered on, and 
                                            // generate SW event to AUX 
#define AON_WUC_AUXCTL_SWEV_M   0x00000002
#define AON_WUC_AUXCTL_SWEV_S   1
#define AON_WUC_AUXCTL_AUX_FORCE_ON \
                                0x00000001  // Forces AUX to be powered on and 
                                            // held on until forceon is 
                                            // released again. MCU will use 
                                            // this bit to ensure that AUX 
                                            // peripherals remain on even if 
                                            // AUX requests to get powered of. 
                                            // 1: AUX can not request power off 
                                            // or disconnect 0: AUX will get 
                                            // powered of when it requests it. 

#define AON_WUC_AUXCTL_AUX_FORCE_ON_M \
                                0x00000001
#define AON_WUC_AUXCTL_AUX_FORCE_ON_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_WUC_O_PWRSTAT register.
//
//*****************************************************************************
#define AON_WUC_PWRSTAT_OSC_GBIAS \
                                0x00400000  // Indicates OSC GBIAS state: 0: 
                                            // OSC is not requesting GBIAS 1: 
                                            // OSC is requesting GBIAS 

#define AON_WUC_PWRSTAT_OSC_GBIAS_M \
                                0x00400000
#define AON_WUC_PWRSTAT_OSC_GBIAS_S 22
#define AON_WUC_PWRSTAT_AUX_GBIAS \
                                0x00200000  // Indicates AUX GBIAS state: 0: 
                                            // AUX is not requesting GBIAS 1: 
                                            // AUX is requesting GBIAS 

#define AON_WUC_PWRSTAT_AUX_GBIAS_M \
                                0x00200000
#define AON_WUC_PWRSTAT_AUX_GBIAS_S 21
#define AON_WUC_PWRSTAT_MCU_GBIAS \
                                0x00100000  // Indicates MCU GBIAS state: 0: 
                                            // MCU is not requesting GBIAS 1: 
                                            // MCU is requesting GBIAS 

#define AON_WUC_PWRSTAT_MCU_GBIAS_M \
                                0x00100000
#define AON_WUC_PWRSTAT_MCU_GBIAS_S 20
#define AON_WUC_PWRSTAT_OSC_BGAP \
                                0x00040000  // Indicates OSC BGAP state: 0: 
                                            // OSC is not requesting BGAP 1: 
                                            // OSC is requesting BGAP 

#define AON_WUC_PWRSTAT_OSC_BGAP_M \
                                0x00040000
#define AON_WUC_PWRSTAT_OSC_BGAP_S 18
#define AON_WUC_PWRSTAT_AUX_BGAP \
                                0x00020000  // Indicates AUX BGAP state: 0: 
                                            // AUX is not requesting BGAP 1: 
                                            // AUX is requesting BGAP 

#define AON_WUC_PWRSTAT_AUX_BGAP_M \
                                0x00020000
#define AON_WUC_PWRSTAT_AUX_BGAP_S 17
#define AON_WUC_PWRSTAT_MCU_BGAP \
                                0x00010000  // Indicates MCU BGAP state: 0: 
                                            // MCU is not requesting BGAP 1: 
                                            // MCU is requesting BGAP 

#define AON_WUC_PWRSTAT_MCU_BGAP_M \
                                0x00010000
#define AON_WUC_PWRSTAT_MCU_BGAP_S 16
#define AON_WUC_PWRSTAT_GBIAS_ON99 \
                                0x00004000  // Indicates GBIAS state: 0: GBIAS 
                                            // is powered off 1: GBIAS is 
                                            // powered on and steady within 99% 

#define AON_WUC_PWRSTAT_GBIAS_ON99_M \
                                0x00004000
#define AON_WUC_PWRSTAT_GBIAS_ON99_S 14
#define AON_WUC_PWRSTAT_GBIAS_ON \
                                0x00002000  // Indicates GBIAS state: 0: GBIAS 
                                            // is powered off 1: GBIAS is 
                                            // powered on and steady within 95% 

#define AON_WUC_PWRSTAT_GBIAS_ON_M \
                                0x00002000
#define AON_WUC_PWRSTAT_GBIAS_ON_S 13
#define AON_WUC_PWRSTAT_BGAP_ON 0x00001000  // Indicates BGAP state: 0: BGAP 
                                            // is powered off 1: BGAP is 
                                            // powered on 
#define AON_WUC_PWRSTAT_BGAP_ON_M \
                                0x00001000
#define AON_WUC_PWRSTAT_BGAP_ON_S 12
#define AON_WUC_PWRSTAT_AUX_PWR_DWN \
                                0x00000200  // Indicates state of power supply 
                                            // as seen by AUX: 0: Active mode 
                                            // 1: Powerdown mode 

#define AON_WUC_PWRSTAT_AUX_PWR_DWN_M \
                                0x00000200
#define AON_WUC_PWRSTAT_AUX_PWR_DWN_S 9
#define AON_WUC_PWRSTAT_MCU_PWR_DWN \
                                0x00000100  // Indicates state of power supply 
                                            // as seen by MCU: 0: Active mode 
                                            // 1: Powerdown mode 

#define AON_WUC_PWRSTAT_MCU_PWR_DWN_M \
                                0x00000100
#define AON_WUC_PWRSTAT_MCU_PWR_DWN_S 8
#define AON_WUC_PWRSTAT_JTAG_PD_ON \
                                0x00000040  // Indicates JTAG power state: 0: 
                                            // JTAG is powered off 1: JTAG is 
                                            // powered on 

#define AON_WUC_PWRSTAT_JTAG_PD_ON_M \
                                0x00000040
#define AON_WUC_PWRSTAT_JTAG_PD_ON_S 6
#define AON_WUC_PWRSTAT_AUX_PD_ON \
                                0x00000020  // Indicates AUX power state: 0: 
                                            // AUX is powered off 1: AUX is 
                                            // powered on, connected to bus and 
                                            // ready for use, 

#define AON_WUC_PWRSTAT_AUX_PD_ON_M \
                                0x00000020
#define AON_WUC_PWRSTAT_AUX_PD_ON_S 5
#define AON_WUC_PWRSTAT_MCU_PD_ON \
                                0x00000010  // Indicates MCU power state: 0: 
                                            // MCU Power sequencing is not yet 
                                            // finalized and AONIF registers 
                                            // may not be reliable 1: MCU Power 
                                            // sequencing is finalized and all 
                                            // AONIF registers are reliable 

#define AON_WUC_PWRSTAT_MCU_PD_ON_M \
                                0x00000010
#define AON_WUC_PWRSTAT_MCU_PD_ON_S 4
#define AON_WUC_PWRSTAT_AUX_BUS_RESET_DONE \
                                0x00000008  // Indicates Reset Done from AUX 
                                            // Bus: 0: AUX Bus is being reset 
                                            // 1: AUX Bus reset is released 

#define AON_WUC_PWRSTAT_AUX_BUS_RESET_DONE_M \
                                0x00000008
#define AON_WUC_PWRSTAT_AUX_BUS_RESET_DONE_S 3
#define AON_WUC_PWRSTAT_AUX_BUS_CONNECTED \
                                0x00000004  // Indicates that AUX Bus is 
                                            // connected: 0: AUX bus is not 
                                            // connected 1: AUX bus is 
                                            // connected ( idle_ack = 0 ) 

#define AON_WUC_PWRSTAT_AUX_BUS_CONNECTED_M \
                                0x00000004
#define AON_WUC_PWRSTAT_AUX_BUS_CONNECTED_S 2
#define AON_WUC_PWRSTAT_AUX_RESET_DONE \
                                0x00000002  // Indicates Reset Done from AUX: 
                                            // 0: AUX is being reset 1: AUX 
                                            // reset is released 

#define AON_WUC_PWRSTAT_AUX_RESET_DONE_M \
                                0x00000002
#define AON_WUC_PWRSTAT_AUX_RESET_DONE_S 1
#define AON_WUC_PWRSTAT_PWR_DWN 0x00000001  // Indicates state of power 
                                            // supply: 0: Active mode 1: 
                                            // Powerdown mode (limited current 
                                            // supply) 
#define AON_WUC_PWRSTAT_PWR_DWN_M \
                                0x00000001
#define AON_WUC_PWRSTAT_PWR_DWN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_WUC_O_SHUTDOWN register.
//
//*****************************************************************************
#define AON_WUC_SHUTDOWN_JTAG_OVR \
                                0x00000002  // This register is ignored. 
                                            // Shutdown requests can be 
                                            // overriden directly from WUCTAP 

#define AON_WUC_SHUTDOWN_JTAG_OVR_M \
                                0x00000002
#define AON_WUC_SHUTDOWN_JTAG_OVR_S 1
#define AON_WUC_SHUTDOWN_EN     0x00000001  // Writing a 1 to this bit force 
                                            // all I/O values to be latched - 
                                            // possibly enabling I/O wakeup - 
                                            // then all internal power supplies 
                                            // are turned off, effectively 
                                            // putting the device into Shutdown 
                                            // mode. Note: The shutdown request 
                                            // does not take effect until next 
                                            // time system enters powerdown. 
                                            // I/O latching will take immediate 
                                            // effect. 
#define AON_WUC_SHUTDOWN_EN_M   0x00000001
#define AON_WUC_SHUTDOWN_EN_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the AON_WUC_O_CTL0 register.
//
//*****************************************************************************
#define AON_WUC_CTL0_PWR_DWN_DIS \
                                0x00000100  // Controls whether MCU and AUX 
                                            // requesting to be powered off 
                                            // will enable a transition to 
                                            // powerdown: 0: Enabled 1: 
                                            // Disabled 

#define AON_WUC_CTL0_PWR_DWN_DIS_M \
                                0x00000100
#define AON_WUC_CTL0_PWR_DWN_DIS_S 8
#define AON_WUC_CTL0_FIXED_WU_PER_M \
                                0x000000F0  // Select a wakeup period for AUX 
                                            // and MCU wakeup. Wakeup time will 
                                            // take at least the number of 
                                            // lf_clk cycles specified in this 
                                            // register, when enabed by FIXEDWU 
                                            // field in MCUCFG and AUXCFG. 

#define AON_WUC_CTL0_FIXED_WU_PER_S 4
//*****************************************************************************
//
// The following are defines for the bit fields in the AON_WUC_O_CTL1 register.
//
//*****************************************************************************
#define AON_WUC_CTL1_TAP_SECURITY_CTL_M \
                                0x00FF0000  // Readback of security ctrl word 
                                            // of WUC_TAP Bit 0: 
                                            // t2c_wuc_sec_chiperase Bit 1: 
                                            // Reserved Bit 2: 
                                            // t2c_wuc_sec_bddat Bit 3: 
                                            // t2c_wuc_sec_bdrdy Bit 4: 
                                            // :t2c_wuc_sec_aux_reset_req Bit 
                                            // 5: t2c_wuc_sec_mcu_reset_req Bit 
                                            // 6: t2c_wuc_sec_res6 Bit 7: 
                                            // t2c_wuc_sec_res7 

#define AON_WUC_CTL1_TAP_SECURITY_CTL_S 16
#define AON_WUC_CTL1_CHIP_ERASE 0x00000100  // Request set by WUC TAP to 
                                            // request ROM FW to perform a chip 
                                            // erase 0: No action 1: Perform 
                                            // full Chip erase This bit can 
                                            // only be cleared by writing a 1 
                                            // to it 
#define AON_WUC_CTL1_CHIP_ERASE_M \
                                0x00000100
#define AON_WUC_CTL1_CHIP_ERASE_S 8
#define AON_WUC_CTL1_MCU_RESET_SRC \
                                0x00000002  // Indicates source of last MCU VD 
                                            // warm reset: 0: MCU SW reset 1: 
                                            // JTAG reset This bit can only be 
                                            // cleared by writing a 1 to it 

#define AON_WUC_CTL1_MCU_RESET_SRC_M \
                                0x00000002
#define AON_WUC_CTL1_MCU_RESET_SRC_S 1
#define AON_WUC_CTL1_MCU_WARM_RESET \
                                0x00000001  // Indicates type of last MCU VD 
                                            // reset: 0: Last MCU reset was not 
                                            // a warm reset 1: Last MCU reset 
                                            // was a warm reset This bit can 
                                            // only be cleared by writing a 1 
                                            // to it 

#define AON_WUC_CTL1_MCU_WARM_RESET_M \
                                0x00000001
#define AON_WUC_CTL1_MCU_WARM_RESET_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_WUC_O_RECHARGECFG register.
//
//*****************************************************************************
#define AON_WUC_RECHARGECFG_ADAPTIVE_EN \
                                0x80000000  // Enable adaptive recharge 

#define AON_WUC_RECHARGECFG_ADAPTIVE_EN_M \
                                0x80000000
#define AON_WUC_RECHARGECFG_ADAPTIVE_EN_S 31
#define AON_WUC_RECHARGECFG_C2_M \
                                0x00F00000  // Gain factor for adaptive 
                                            // recharge algorithm 
                                            // period_new=period * ( 
                                            // 1+/-(2^-C1+2^-C2) ) Valid values 
                                            // for C2 is 2 to 10 

#define AON_WUC_RECHARGECFG_C2_S 20
#define AON_WUC_RECHARGECFG_C1_M \
                                0x000F0000  // Gain factor for adaptive 
                                            // recharge algorithm 
                                            // period_new=period * ( 
                                            // 1+/-(2^-C1+2^-C2) ) Valid values 
                                            // for C1 is 1 to 10 

#define AON_WUC_RECHARGECFG_C1_S 16
#define AON_WUC_RECHARGECFG_MAX_PER_M_M \
                                0x0000F800  // This register defines the Max 
                                            // period that the recharge 
                                            // algorithm can take, i.e. it 
                                            // defines the maximum number of 
                                            // cycles between 2 recharges. The 
                                            // maximum number of cycles is 
                                            // specified with a 5 bit mantissa 
                                            // and 3 bit exponent: 
                                            // MAXCYCLES=(MAXPERIOD_M*16+15)*2^MAXPERIOD_E 
                                            // This field sets the mantissa of 
                                            // the MAXPERIOD 

#define AON_WUC_RECHARGECFG_MAX_PER_M_S 11
#define AON_WUC_RECHARGECFG_MAX_PER_E_M \
                                0x00000700  // This register defines the Max 
                                            // period that the recharge 
                                            // algorithm can take, i.e. it 
                                            // defines the maximum number of 
                                            // cycles between 2 recharges. The 
                                            // maximum number of cycles is 
                                            // specified with a 5 bit mantissa 
                                            // and 3 bit exponent: 
                                            // MAXCYCLES=(MAXPERIOD_M*16+15)*2^MAXPERIOD_E 
                                            // This field sets the exponent of 
                                            // the MAXPERIOD 

#define AON_WUC_RECHARGECFG_MAX_PER_E_S 8
#define AON_WUC_RECHARGECFG_PER_M_M \
                                0x000000F8  // Number of 32 KHz clocks between 
                                            // activation of recharge 
                                            // controller For recharge 
                                            // algorithm, PERIOD is the initial 
                                            // period when entering powerdown 
                                            // mode. The adaptive recharge 
                                            // algorithm will not change this 
                                            // register PERIOD will effectively 
                                            // be a 16 bit value coded in a 5 
                                            // bit mantissa and 3 bit exponent: 
                                            // This field sets the Mantissa of 
                                            // the Period. 
                                            // PERIOD=(PERIOD_M*16+15)*2^PERIOD_E 

#define AON_WUC_RECHARGECFG_PER_M_S 3
#define AON_WUC_RECHARGECFG_PER_E_M \
                                0x00000007  // Number of 32 KHz clocks between 
                                            // activation of recharge 
                                            // controller For recharge 
                                            // algorithm, PERIOD is the initial 
                                            // period when entering powerdown 
                                            // mode. The adaptive recharge 
                                            // algorithm will not change this 
                                            // register PERIOD will effectively 
                                            // be a 16 bit value coded in a 5 
                                            // bit mantissa and 3 bit exponent: 
                                            // This field sets the Exponent of 
                                            // the Period. 
                                            // PERIOD=(PERIOD_M*16+15)*2^PERIOD_E 

#define AON_WUC_RECHARGECFG_PER_E_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_WUC_O_RECHARGESTAT register.
//
//*****************************************************************************
#define AON_WUC_RECHARGESTAT_VDDR_SMPLS_M \
                                0x000F0000  // The last 4 VDDR samples, bit 0 
                                            // being the newest 

#define AON_WUC_RECHARGESTAT_VDDR_SMPLS_S 16
#define AON_WUC_RECHARGESTAT_MAX_USED_PER_M \
                                0x0000FFFF  // The maximum value of recharge 
                                            // period seen with VDDR>threshold 

#define AON_WUC_RECHARGESTAT_MAX_USED_PER_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_WUC_O_OSCCFG register.
//
//*****************************************************************************
#define AON_WUC_OSCCFG_PER_M_M  0x000000F8  // Number of 32 KHz clocks between 
                                            // oscillator amplitude 
                                            // calibrations. When this counter 
                                            // expires, an oscillator amplitude 
                                            // calibration is triggered 
                                            // immediately in Active mode. When 
                                            // this counter expires in 
                                            // Powerdown mode an internal flag 
                                            // is set that causes GBIAS to turn 
                                            // on together with BGAP when the 
                                            // next recharge occurs, at the 
                                            // same time triggering the 
                                            // oscillator amplitude calibration 
                                            // as well as a recharge of the 
                                            // uLDO reference voltage. The 
                                            // Period will effectively be a 16 
                                            // bit value coded in a 5 bit 
                                            // mantissa and 3 bit exponent 
                                            // PERIOD=(PERIOD_M*16+15)*2^PERIOD_E 
                                            // This field sets the mantissa 
                                            // Note: Oscillator amplitude 
                                            // calibration is turned of when 
                                            // both OSCCFG.PERIOD_M and 
                                            // OSCCFG.PERIOD_E are set to 0 
#define AON_WUC_OSCCFG_PER_M_S  3
#define AON_WUC_OSCCFG_PER_E_M  0x00000007  // Number of 32 KHz clocks between 
                                            // oscillator amplitude 
                                            // calibrations. When this counter 
                                            // expires, an oscillator amplitude 
                                            // calibration is triggered 
                                            // immediately in Active mode. When 
                                            // this counter expires in 
                                            // Powerdown mode an internal flag 
                                            // is set that causes GBIAS to turn 
                                            // on together with BGAP when the 
                                            // next recharge occurs, at the 
                                            // same time triggering the 
                                            // oscillator amplitude calibration 
                                            // as well as a recharge of the 
                                            // uLDO reference voltage. The 
                                            // Period will effectively be a 16 
                                            // bit value coded in a 5 bit 
                                            // mantissa and 3 bit exponent 
                                            // PERIOD=(PERIOD_M*16+15)*2^PERIOD_E 
                                            // This field sets the exponent 
                                            // Note: Oscillator amplitude 
                                            // calibration is turned of when 
                                            // both OSCCFG.PERIOD_M and 
                                            // OSCCFG.PERIOD_E are set to 0 
#define AON_WUC_OSCCFG_PER_E_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_WUC_O_JTAGCFG register.
//
//*****************************************************************************
#define AON_WUC_JTAGCFG_JTAG_PD_FORCE_ON \
                                0x00000100  // Controls JTAG PowerDomain power 
                                            // state: 0: Controlled exclusively 
                                            // by icemelter/icepick. (JTAG 
                                            // Powerdomain will be powered off 
                                            // unless a debugger is attached) 
                                            // 1: JTAG PD is forced on, 
                                            // independent of icemelter/icepick 
                                            // NB: The reset value causes JTAG 
                                            // PD to be powered on by default. 
                                            // SW must clear this bit to turn 
                                            // off the JTAG PD 

#define AON_WUC_JTAGCFG_JTAG_PD_FORCE_ON_M \
                                0x00000100
#define AON_WUC_JTAGCFG_JTAG_PD_FORCE_ON_S 8
#define AON_WUC_JTAGCFG_PBIST2_TAP \
                                0x00000040  // PBIST2 TAP access control: 0: 
                                            // Disabled 1: Enabled NB: This bit 
                                            // can be locked 

#define AON_WUC_JTAGCFG_PBIST2_TAP_M \
                                0x00000040
#define AON_WUC_JTAGCFG_PBIST2_TAP_S 6
#define AON_WUC_JTAGCFG_PBIST1_TAP \
                                0x00000020  // PBIST1 TAP access control: 0: 
                                            // Disabled 1: Enabled NB: This bit 
                                            // can be locked 

#define AON_WUC_JTAGCFG_PBIST1_TAP_M \
                                0x00000020
#define AON_WUC_JTAGCFG_PBIST1_TAP_S 5
#define AON_WUC_JTAGCFG_TEST_TAP \
                                0x00000008  // Test TAP access control: 0: 
                                            // Disabled 1: Enabled NB: This bit 
                                            // can be locked 

#define AON_WUC_JTAGCFG_TEST_TAP_M \
                                0x00000008
#define AON_WUC_JTAGCFG_TEST_TAP_S 3
#define AON_WUC_JTAGCFG_WUC_TAP 0x00000004  // WUC TAP debug access control: 
                                            // 0: Disabled 1: Enabled Note that 
                                            // the basic security related WUC 
                                            // TAP functions described here are 
                                            // always open NB: This bit can be 
                                            // locked 
#define AON_WUC_JTAGCFG_WUC_TAP_M \
                                0x00000004
#define AON_WUC_JTAGCFG_WUC_TAP_S 2
#define AON_WUC_JTAGCFG_PRCM_TAP \
                                0x00000002  // PRCM access control: 0: 
                                            // Disabled 1: Enabled NB: This bit 
                                            // can be locked 

#define AON_WUC_JTAGCFG_PRCM_TAP_M \
                                0x00000002
#define AON_WUC_JTAGCFG_PRCM_TAP_S 1
#define AON_WUC_JTAGCFG_CPU_DAP 0x00000001  // Main CPU DAP access control: 0: 
                                            // Disabled 1: Enabled NB: This bit 
                                            // can be locked 
#define AON_WUC_JTAGCFG_CPU_DAP_M \
                                0x00000001
#define AON_WUC_JTAGCFG_CPU_DAP_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_WUC_O_JTAGUSERCODE register.
//
//*****************************************************************************
#define AON_WUC_JTAGUSERCODE_USER_CODE_M \
                                0xFFFFFFFF  // 32-bit JTAG USERCODE register 
                                            // feeding main JTAG TAP NB: This 
                                            // field can be locked 

#define AON_WUC_JTAGUSERCODE_USER_CODE_S 0


#endif // __HW_AON_WUC_H__

