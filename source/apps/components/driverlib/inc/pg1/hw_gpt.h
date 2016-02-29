
/******************************************************************************
*  Filename:       hw_gpt.h
*  Revised:        $Date: 2014-03-04 14:05:57 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40297 $
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
#ifndef __HW_GPT_H__
#define __HW_GPT_H__

//*****************************************************************************
//
// The following are defines for the GPT register offsets.
//
//*****************************************************************************
#define GPT_O_CFG               0x00000000  // GPTM Configuration 
#define GPT_O_TAMR              0x00000004  // GPTM Timer A Mode (GPTMTAMR), 
                                            // Offset 0x004 
#define GPT_O_TBMR              0x00000008  // GPTM Timer B Mode (GPTMTBMR) 
#define GPT_O_CTL               0x0000000C  // GPTM Control (GPTMCTL) 
#define GPT_O_SYNC              0x00000010  // GPTM Synch Register (GPTMSYNC), 
#define GPT_O_IMR               0x00000018  // GPTM Interrupt Mask (GPTMIMR) 
#define GPT_O_RIS               0x0000001C  // GPTM Raw Interrupt Status 
                                            // (GPTMRIS) 
#define GPT_O_MIS               0x00000020  // GPTM Masked Interrupt Status 
                                            // (GPTMMIS), 
#define GPT_O_ICLR              0x00000024  // GPT Interrupt Clear - Used to 
                                            // clear status bits in the MRIS 
                                            // and MMSI registers 
#define GPT_O_TAILR             0x00000028  // GPTM Timer A Interval Load 
                                            // Register 
#define GPT_O_TBILR             0x0000002C  // GPTM Timer B Interval Load 
                                            // Register 
#define GPT_O_TAMATCHR          0x00000030  // GPTM TimerA Match Register 
#define GPT_O_TBMATCHR          0x00000034  // GPTM TimerB Match Register 
#define GPT_O_TAPR              0x00000038  // GPTM Timer A Pre-scale (TAPR) 
                                            // This register allows software to 
                                            // extend the range of the timers 
                                            // when used individually. In 
                                            // one-shot or periodic down-count 
                                            // modes, this register acts as a 
                                            // prescaler. In all other modes 
                                            // individual/split modes, this 
                                            // register is linear extension of 
                                            // the upper range of the timer 
                                            // counter. 
#define GPT_O_TBPR              0x0000003C  // GPTM Timer B Pre-scale (TBPR) 
                                            // This register allows software to 
                                            // extend the range of the timers 
                                            // when used individually. In 
                                            // one-shot or periodic down-count 
                                            // modes, this register acts as a 
                                            // prescaler. In all other modes 
                                            // individual/split modes, this 
                                            // register is linear extension of 
                                            // the upper range of the timer 
                                            // counter. 
#define GPT_O_TAPMR             0x00000040  // GPTM Timer A Pre-scale Match 
                                            // (TAPMR) This register allows 
                                            // software to extend the range of 
                                            // the TAMATCHR when used 
                                            // individually. 
#define GPT_O_TBPMR             0x00000044  // GPTM Timer B Pre-scale Match 
                                            // (TBPMR) This register allows 
                                            // software to extend the range of 
                                            // the TBMATCHR when used 
                                            // individually. 
#define GPT_O_TAR               0x00000048  // GPTM Timer A This register 
                                            // shows the current value of 
                                            // 16-bit Timer A except for 
                                            // Edge-Event Time and Count modes. 
                                            // In the Input Edge Count mode 
#define GPT_O_TBR               0x0000004C  // GPTM Timer B This register 
                                            // shows the current value of 
                                            // 16-bit Timer B except for 
                                            // Edge-Event Time and Count modes. 
                                            // In the Input Edge Count mode 
#define GPT_O_TAV               0x00000050  // GPTM Timer A Value This 
                                            // register shows the current value 
                                            // of the free running 16-bit Timer 
                                            // A. In the 32-bit mode 
#define GPT_O_TBV               0x00000054  // GPTM Timer B Value This 
                                            // register shows the current value 
                                            // of the free running 16-bit Timer 
                                            // B. Note: When the alternate 
                                            // timer clock (TIMCLK) is enabled; 
                                            // a read of a timer value will 
                                            // return the current count 1. 
#define GPT_O_RTCPD             0x00000058  // GPTM RTC Pre-divide Value This 
                                            // register shows the current value 
                                            // of the RTC pre-divider in RTC 
                                            // mode. Note: When the alternate 
                                            // timer clock (TIMCLK) is enabled; 
                                            // a read of a timer value will 
                                            // return the current count -1. 
#define GPT_O_TAPS              0x0000005C  // GPTM Timer A Pre-scale 
                                            // Snap-shot This register shows 
                                            // the current value of the Timer A 
                                            // pre-scaler in the 16-bit mode. 
                                            // Note: When the alternate timer 
                                            // clock (TIMCLK) is enabled; a 
                                            // read of a timer value will 
                                            // return the current count -1. 
#define GPT_O_TBPS              0x00000060  // GPTM Timer A Pre-scale 
                                            // Snap-shot This register shows 
                                            // the current value of the Timer B 
                                            // pre-scaler in the 16-bit mode. 
                                            // Note: When the alternate timer 
                                            // clock (TIMCLK) is enabled; a 
                                            // read of a timer value will 
                                            // return the current count -1. 
#define GPT_O_TAPV              0x00000064  // GPTM Timer A Pre-scale Value 
                                            // This register shows the current 
                                            // value of the Timer A free 
                                            // running pre-scaler in the 16-bit 
                                            // mode. Note: When the alternate 
                                            // timer clock (TIMCLK) is enabled; 
                                            // a read of a timer value will 
                                            // return the current count 1. 
#define GPT_O_TBPV              0x00000068  // GPTM Timer B Pre-scale Value 
                                            // This register shows the current 
                                            // value of the Timer B free 
                                            // running pre-scaler in the 16-bit 
                                            // mode. Note: When the alternate 
                                            // timer clock (TIMCLK) is enabled; 
                                            // a read of a timer value will 
                                            // return the current count-1. 
#define GPT_O_DMAEV             0x0000006C  // GPTM DMA Event This register 
                                            // allows software to 
                                            // enable/disable GPTM DMA trigger 
                                            // events. 
#define GPT_O_ADCEV             0x00000070  // GPTM DMA Event This register 
                                            // allows software to 
                                            // enable/disable GPTM ADC trigger 
                                            // events. 
#define GPT_O_VERSION           0x00000FB0  // GPTM Peripheral Version - This 
                                            // register provides information 
                                            // regarding the GPTM version 
#define GPT_O_ANDCPP            0x00000FB4  // This register is used to 
                                            // logically AND PWM output pairs 
                                            // for each timer 


//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_CFG register.
//
//*****************************************************************************
#define GPT_CFG_CFG_M           0x00000007  // GPTM Configuration - The CFG 
                                            // field 
#define GPT_CFG_CFG_S           0
#define GPT_CFG_CFG_32BIT_TIMER 0x00000000  // 32-bit timer configuration 
#define GPT_CFG_CFG_REALTIME_CLOCK \
                                0x00000001  // 32-bit real-time clock 
#define GPT_CFG_CFG_16BIT_TIMER 0x00000004  // 16-bit timer configuration. 
                                            // Configure for two 16-bit timers. 
                                            // Also see TAMR.TAMR and 
                                            // TBMR.TBMR. 
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TAMR register.
//
//*****************************************************************************
#define GPT_TAMR_TCACT_M        0x0000E000  // Timer Compare Action Select 
#define GPT_TAMR_TCACT_S        13
#define GPT_TAMR_TCACT_DISABLE_CMP \
                                0x00000000  // Disable compare operations 
#define GPT_TAMR_TCACT_TOG_ON_TO \
                                0x00002000  // Toggle State on Time-Out 
#define GPT_TAMR_TCACT_CLR_ON_TO \
                                0x00004000  // Clear CCP on Time-Out 
#define GPT_TAMR_TCACT_SET_ON_TO \
                                0x00006000  // Set CCP on Time-Out 
#define GPT_TAMR_TCACT_SETTOG_ON_TO \
                                0x00008000  // Set CCP immediately and toggle 
                                            // on Time-Out 
#define GPT_TAMR_TCACT_CLRTOG_ON_TO \
                                0x0000A000  // Clear CCP immediately and 
                                            // toggle on Time-Out 
#define GPT_TAMR_TCACT_SETCLR_ON_TO \
                                0x0000C000  // Set CCP immediately and clear 
                                            // on Time-Out 
#define GPT_TAMR_TCACT_CLRSET_ON_TO \
                                0x0000E000  // Clear CCP immediately and set 
                                            // on Time-Out 
#define GPT_TAMR_TACINTD        0x00001000  // One-Shot/Periodic Interrupt 
                                            // Mode 0: Normal Time-Out 
                                            // Interrupt 1: Mask Time-Out 
                                            // Interrupt 
#define GPT_TAMR_TACINTD_M      0x00001000
#define GPT_TAMR_TACINTD_S      12
#define GPT_TAMR_TACINTD_EN_TO_INTR \
                                0x00000000  // Normal Time-Out Interrupt 
#define GPT_TAMR_TACINTD_DIS_TO_INTR \
                                0x00001000  // Mask Time-Out Interrupt 
#define GPT_TAMR_TAPLO          0x00000800  // Legacy PWM operation 0: Legacy 
                                            // operation 1: CCP is set to 1 on 
                                            // time-out 
#define GPT_TAMR_TAPLO_M        0x00000800
#define GPT_TAMR_TAPLO_S        11
#define GPT_TAMR_TAPLO_LEGACY   0x00000000  // Legacy operation 
#define GPT_TAMR_TAPLO_CCP_ON_TO \
                                0x00000800  // CCP is set to 1 on time-out 
#define GPT_TAMR_TAMRSU         0x00000400  // Timer A Match Register Update 
                                            // mode 0: Update the TAMATCHR and 
                                            // the GPTMAPR, if used on the next 
                                            // cycle. 1: Update the TAMATCHR 
                                            // and the GPTMAPR, if used on the 
                                            // next time-out. If the timer is 
                                            // disabled (TAEN is clear) when 
                                            // this bit is set, TAMATCHR and 
                                            // TAPR are updated when the timer 
                                            // is enabled. If the timer is 
                                            // stalled (TASTALL is set), 
                                            // TAMATCHR and TAPR are updated 
                                            // according to the configuration 
                                            // of this bit. 
#define GPT_TAMR_TAMRSU_M       0x00000400
#define GPT_TAMR_TAMRSU_S       10
#define GPT_TAMR_TAMRSU_CYCLEUPDATE \
                                0x00000000  // Cycle update 
#define GPT_TAMR_TAMRSU_TOUPDATE \
                                0x00000400  // Timout update 
#define GPT_TAMR_TAPWMIE        0x00000200  // GPTM Timer A PWM Interrupt 
                                            // Enable This bit enables 
                                            // interrupts in PWM mode on 
                                            // rising, falling, or both edges 
                                            // of the CCP output 0: Interrupt 
                                            // is disabled. 1: Interrupt is 
                                            // enabled. This bit is only valid 
                                            // in PWM mode. 
#define GPT_TAMR_TAPWMIE_M      0x00000200
#define GPT_TAMR_TAPWMIE_S      9
#define GPT_TAMR_TAPWMIE_DIS    0x00000000  // Disable 
#define GPT_TAMR_TAPWMIE_EN     0x00000200  // Enable 
#define GPT_TAMR_TAILD          0x00000100  // GPTM Timer A PWM Interval Load 
                                            // Write 0: Update the TAR register 
                                            // with the value in the TAILR 
                                            // register on the next clock 
                                            // cycle. If the pre-scaler is 
                                            // used, update the TAPS register 
                                            // with the value in the TAPR 
                                            // register on the next clock 
                                            // cycle. 1: Update the TAR 
                                            // register with the value in the 
                                            // TAILR register on the next 
                                            // timeout. If the prescaler is 
                                            // used, update the TAPS register 
                                            // with the value in the TAPR 
                                            // register on the next timeout. 
#define GPT_TAMR_TAILD_M        0x00000100
#define GPT_TAMR_TAILD_S        8
#define GPT_TAMR_TAILD_CYCLEUPDATE \
                                0x00000000  // Cycle update 
#define GPT_TAMR_TAILD_TOUPDATE 0x00000100  // Timout update 
#define GPT_TAMR_TASNAPS        0x00000080  // GPTM Timer A Snap-Shot Mode 0: 
                                            // Snap-shot mode is disabled. 1: 
                                            // If Timer A is configured in the 
                                            // periodic mode, the actual 
                                            // free-running value of Timer A is 
                                            // loaded at the time-out event 
                                            // into the GPTM Timer A (TAR) 
                                            // register. 
#define GPT_TAMR_TASNAPS_M      0x00000080
#define GPT_TAMR_TASNAPS_S      7
#define GPT_TAMR_TASNAPS_DIS    0x00000000  // Disable 
#define GPT_TAMR_TASNAPS_EN     0x00000080  // Enable 
#define GPT_TAMR_TAWOT          0x00000040  // GPTM Timer A Wait-On-Trigger 0: 
                                            // Timer A begins counting as soon 
                                            // as it is enabled. 1: If Timer A 
                                            // is enabled (TAEN is set in the 
                                            // CTL register), Timer A does not 
                                            // begin counting until it receives 
                                            // a trigger from the timer in the 
                                            // previous position in the daisy 
                                            // chain. This bit must be clear 
                                            // for GP Timer Module 0, Timer A 
#define GPT_TAMR_TAWOT_M        0x00000040
#define GPT_TAMR_TAWOT_S        6
#define GPT_TAMR_TAWOT_NOWAIT   0x00000000  // Count immediately 
#define GPT_TAMR_TAWOT_WAIT     0x00000040  // Wait for trigger to count 
#define GPT_TAMR_TAMIE          0x00000020  // GPTM Timer A Match Interrupt 
                                            // Enable 0: The match interrupt is 
                                            // disabled. 1: An interrupt is 
                                            // generated when the match value 
                                            // in the TAMATCHR register is 
                                            // reached in the one-shot and 
                                            // periodic modes. 
#define GPT_TAMR_TAMIE_M        0x00000020
#define GPT_TAMR_TAMIE_S        5
#define GPT_TAMR_TAMIE_DIS      0x00000000  // Disable 
#define GPT_TAMR_TAMIE_EN       0x00000020  // Enable 
#define GPT_TAMR_TACDIR         0x00000010  // GPTM Timer A Count Direction 0: 
                                            // The timer counts down. 1: The 
                                            // timer counts up. When counting 
                                            // up, the timer starts from a 
                                            // value of 0x0. 
#define GPT_TAMR_TACDIR_M       0x00000010
#define GPT_TAMR_TACDIR_S       4
#define GPT_TAMR_TACDIR_CPOUNTDOWN \
                                0x00000000  // Count Down 
#define GPT_TAMR_TACDIR_COUNTUP 0x00000010  // Count Up 
#define GPT_TAMR_TAAMS          0x00000008  // GPTM Timer A Alternate Mode 0: 
                                            // Capture/Compare mode is enabled. 
                                            // 1: PWM mode is enabled. Note: To 
                                            // enable PWM mode, you must also 
                                            // clear the TACM bit and configure 
                                            // the TAMR field to 0x2. 
#define GPT_TAMR_TAAMS_M        0x00000008
#define GPT_TAMR_TAAMS_S        3
#define GPT_TAMR_TAAMS_CAP_COMP 0x00000000  // Capture/Compare mode is 
                                            // enabled. 
#define GPT_TAMR_TAAMS_PWM      0x00000008  // PWM mode is enabled 
#define GPT_TAMR_TACM           0x00000004  // GPTM Timer A Capture Mode 0: 
                                            // Edge-Count mode 1: Edge-Time 
                                            // mode 
#define GPT_TAMR_TACM_M         0x00000004
#define GPT_TAMR_TACM_S         2
#define GPT_TAMR_TACM_EDGCNT    0x00000000  // Edge-Count mode 
#define GPT_TAMR_TACM_EDGTIME   0x00000004  // Edge-Time mode 
#define GPT_TAMR_TAMR_M         0x00000003  // GPTM Timer A Mode The Timer 
                                            // mode is based on the timer 
                                            // configuration defined by bits 
                                            // 2:0 in the GPTMCFG register 
#define GPT_TAMR_TAMR_S         0
#define GPT_TAMR_TAMR_ONE_SHOT  0x00000001  // One-Shot Timer mode 
#define GPT_TAMR_TAMR_PERIODIC  0x00000002  // Periodic Timer mode 
#define GPT_TAMR_TAMR_CAPTURE   0x00000003  // Capture mode 
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TBMR register.
//
//*****************************************************************************
#define GPT_TBMR_TCACT_M        0x0000E000  // Timer Compare Action Select 
#define GPT_TBMR_TCACT_S        13
#define GPT_TBMR_TCACT_DIS_CMP  0x00000000  // Disable compare operations 
#define GPT_TBMR_TCACT_TOG_ON_TO \
                                0x00002000  // Toggle State on Time-Out 
#define GPT_TBMR_TCACT_CLR_ON_TO \
                                0x00004000  // Clear CCP on Time-Out 
#define GPT_TBMR_TCACT_SET_ON_TO \
                                0x00006000  // Set CCP on Time-Out 
#define GPT_TBMR_TCACT_SETTOG_ON_TO \
                                0x00008000  // Set CCP immediately and toggle 
                                            // on Time-Out 
#define GPT_TBMR_TCACT_CLRTOG_ON_TO \
                                0x0000A000  // Clear CCP immediately and 
                                            // toggle on Time-Out 
#define GPT_TBMR_TCACT_SETCLR_ON_TO \
                                0x0000C000  // Set CCP immediately and clear 
                                            // on Time-Out 
#define GPT_TBMR_TCACT_CLRSET_ON_TO \
                                0x0000E000  // Clear CCP immediately and set 
                                            // on Time-Out 
#define GPT_TBMR_TBCINTD        0x00001000  // One-Shot/Periodic Interrupt 
                                            // Mode 0: Normal Time-Out 
                                            // Interrupt 1: Mask Time-Out 
                                            // Interrupt 
#define GPT_TBMR_TBCINTD_M      0x00001000
#define GPT_TBMR_TBCINTD_S      12
#define GPT_TBMR_TBCINTD_EN_TO_INTR \
                                0x00000000  // Normal Time-Out Interrupt 
#define GPT_TBMR_TBCINTD_DIS_TO_INTR \
                                0x00001000  // Mask Time-Out Interrupt 
#define GPT_TBMR_TBPLO          0x00000800  // Legacy PWM operation 0: Legacy 
                                            // operation 1: CCP is set to 1 on 
                                            // time-out 
#define GPT_TBMR_TBPLO_M        0x00000800
#define GPT_TBMR_TBPLO_S        11
#define GPT_TBMR_TBPLO_LEGACY   0x00000000  // Legacy operation 
#define GPT_TBMR_TBPLO_CCP_ON_TO \
                                0x00000800  // CCP is set to 1 on time-out 
#define GPT_TBMR_TBMRSU         0x00000400  // Timer B Match Register Update 
                                            // mode 0: Update the TBMATCHR and 
                                            // the TBPR, if used on the next 
                                            // cycle. 1: Update the TBMATCHR 
                                            // and the TBPR, if used on the 
                                            // next time-out. If the timer is 
                                            // disabled (TAEN is clear) when 
                                            // this bit is set, TBMATCHR and 
                                            // TBPR are updated when the timer 
                                            // is enabled. If the timer is 
                                            // stalled (TASTALL is set), 
                                            // TBMATCHR and TBPR are updated 
                                            // according to the configuration 
                                            // of this bit. 
#define GPT_TBMR_TBMRSU_M       0x00000400
#define GPT_TBMR_TBMRSU_S       10
#define GPT_TBMR_TBMRSU_CYCLEUPDATE \
                                0x00000000  // Cycle update 
#define GPT_TBMR_TBMRSU_TOUPDATE \
                                0x00000400  // Timout update 
#define GPT_TBMR_TBPWMIE        0x00000200  // GPTM Timer B PWM Interrupt 
                                            // Enable This bit enables 
                                            // interrupts in PWM mode on 
                                            // rising, falling, or both edges 
                                            // of the CCP output 0: Interrupt 
                                            // is disabled. 1: Interrupt is 
                                            // enabled. This bit is only valid 
                                            // in PWM mode. 
#define GPT_TBMR_TBPWMIE_M      0x00000200
#define GPT_TBMR_TBPWMIE_S      9
#define GPT_TBMR_TBPWMIE_DIS    0x00000000  // Disable 
#define GPT_TBMR_TBPWMIE_EN     0x00000200  // Enable 
#define GPT_TBMR_TBILD          0x00000100  // GPTM Timer B PWM Interval Load 
                                            // Write 0: Update the TBR register 
                                            // with the value in the TBILR 
                                            // register on the next clock 
                                            // cycle. If the pre-scaler is 
                                            // used, update the TBPS register 
                                            // with the value in the TBPR 
                                            // register on the next clock 
                                            // cycle. 1: Update the TBR 
                                            // register with the value in the 
                                            // TBILR register on the next 
                                            // timeout. If the prescaler is 
                                            // used, update the TBPS register 
                                            // with the value in the TBPR 
                                            // register on the next timeout. 
#define GPT_TBMR_TBILD_M        0x00000100
#define GPT_TBMR_TBILD_S        8
#define GPT_TBMR_TBILD_CYCLEUPDATE \
                                0x00000000  // Cycle update 
#define GPT_TBMR_TBILD_TOUPDATE 0x00000100  // Timout update 
#define GPT_TBMR_TBSNAPS        0x00000080  // GPTM Timer B Snap-Shot Mode 0: 
                                            // Snap-shot mode is disabled. 1: 
                                            // If Timer B is configured in the 
                                            // periodic mode 
#define GPT_TBMR_TBSNAPS_M      0x00000080
#define GPT_TBMR_TBSNAPS_S      7
#define GPT_TBMR_TBSNAPS_DIS    0x00000000  // Disable 
#define GPT_TBMR_TBSNAPS_EN     0x00000080  // Enable 
#define GPT_TBMR_TBWOT          0x00000040  // GPTM Timer B Wait-On-Trigger 0: 
                                            // Timer B begins counting as soon 
                                            // as it is enabled. 1: If Timer B 
                                            // is enabled (TBEN is set in the 
                                            // GPTMCTL register) 
#define GPT_TBMR_TBWOT_M        0x00000040
#define GPT_TBMR_TBWOT_S        6
#define GPT_TBMR_TBWOT_NOWAIT   0x00000000  // Count immediately 
#define GPT_TBMR_TBWOT_WAIT     0x00000040  // Wait for trigger to count 
#define GPT_TBMR_TBMIE          0x00000020  // GPTM Timer B Match Interrupt 
                                            // Enable 0: The match interrupt is 
                                            // disabled. 1: An interrupt is 
                                            // generated when the match value 
                                            // in the TBMATCHR register is 
                                            // reached in the one-shot and 
                                            // periodic modes. 
#define GPT_TBMR_TBMIE_M        0x00000020
#define GPT_TBMR_TBMIE_S        5
#define GPT_TBMR_TBMIE_DIS      0x00000000  // Disable 
#define GPT_TBMR_TBMIE_EN       0x00000020  // Enable 
#define GPT_TBMR_TBCDIR         0x00000010  // GPTM Timer B Count Direction 0: 
                                            // The timer counts down. 1: The 
                                            // timer counts up. When counting 
                                            // up 
#define GPT_TBMR_TBCDIR_M       0x00000010
#define GPT_TBMR_TBCDIR_S       4
#define GPT_TBMR_TBCDIR_DOWN    0x00000000  // Count Down 
#define GPT_TBMR_TBCDIR_UP      0x00000010  // Count Up 
#define GPT_TBMR_TBAMS          0x00000008  // GPTM Timer B Alternate Mode 0: 
                                            // Capture/Compare mode is enabled. 
                                            // 1: PWM mode is enabled. Note: To 
                                            // enable PWM mode, you must also 
                                            // clear the TACM bit and configure 
                                            // the TAMR field to 0x2. 
#define GPT_TBMR_TBAMS_M        0x00000008
#define GPT_TBMR_TBAMS_S        3
#define GPT_TBMR_TBAMS_CAP_COMP 0x00000000  // Capture/Compare mode is 
                                            // enabled. 
#define GPT_TBMR_TBAMS_PWM      0x00000008  // PWM mode is enabled 
#define GPT_TBMR_TBCM           0x00000004  // GPTM Timer B Capture Mode 0: 
                                            // Edge-Count mode GPTM1632S 
                                            // Specification version 0.5 Page 
                                            // 21 TI Confidential NDA 
                                            // Restrictions 1: Edge-Time mode 
#define GPT_TBMR_TBCM_M         0x00000004
#define GPT_TBMR_TBCM_S         2
#define GPT_TBMR_TBCM_EDGCNT    0x00000000  // Edge-Count mode 
#define GPT_TBMR_TBCM_EDGTIME   0x00000004  // Edge-Time mode 
#define GPT_TBMR_TBMR_M         0x00000003  // GPTM Timer B Mode The Timer 
                                            // mode is based on the timer 
                                            // configuration defined by bits 
                                            // 2:0 in the CFG register 
#define GPT_TBMR_TBMR_S         0
#define GPT_TBMR_TBMR_ONE_SHOT  0x00000001  // One-Shot Timer mode 
#define GPT_TBMR_TBMR_PERIODIC  0x00000002  // Periodic Timer mode 
#define GPT_TBMR_TBMR_CAPTURE   0x00000003  // Capture mode 
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_CTL register.
//
//*****************************************************************************
#define GPT_CTL_TBPWML          0x00004000  // GPTM Timer B PWM Output Level 
                                            // 0: Output is unaffected. 1: 
                                            // Output is inverted. 
#define GPT_CTL_TBPWML_M        0x00004000
#define GPT_CTL_TBPWML_S        14
#define GPT_CTL_TBPWML_NORMAL   0x00000000  // Not inverted 
#define GPT_CTL_TBPWML_INVERTED 0x00004000  // Inverted 
#define GPT_CTL_TBOTE           0x00002000  // GPTM Timer B Output Trigger 
                                            // Enable 0: The output Timer B ADC 
                                            // trigger is disabled. 1: The 
                                            // output Timer B ADC trigger is 
                                            // enabled. 
#define GPT_CTL_TBOTE_M         0x00002000
#define GPT_CTL_TBOTE_S         13
#define GPT_CTL_TBOTE_DIS       0x00000000  // Disable 
#define GPT_CTL_TBOTE_EN        0x00002000  // Enable 
#define GPT_CTL_TBEVENT_M       0x00000C00  // GPTM Timer B Event Mode 
#define GPT_CTL_TBEVENT_S       10
#define GPT_CTL_TBEVENT_POS     0x00000000  // Positive edge 
#define GPT_CTL_TBEVENT_NEG     0x00000400  // Negative edge 
#define GPT_CTL_TBEVENT_BOTH    0x00000C00  // Both edges 
#define GPT_CTL_TBSTALL         0x00000200  // GPTM Timer B Stall Enable 0: 
                                            // Timer B continues counting while 
                                            // the processor is halted by the 
                                            // debugger. 1: Timer B freezes 
                                            // counting while the processor is 
                                            // halted by the debugger. 
#define GPT_CTL_TBSTALL_M       0x00000200
#define GPT_CTL_TBSTALL_S       9
#define GPT_CTL_TBSTALL_DIS     0x00000000  // STALL Disable 
#define GPT_CTL_TBSTALL_EN      0x00000200  // STALL Enable 
#define GPT_CTL_TBEN            0x00000100  // GPTM Timer B Enable 0: Timer B 
                                            // is disabled. 1: Timer B is 
                                            // enabled and begins counting or 
                                            // the capture logic is enabled 
                                            // based on the CFG register. 
#define GPT_CTL_TBEN_M          0x00000100
#define GPT_CTL_TBEN_S          8
#define GPT_CTL_TBEN_DIS        0x00000000  // Disable 
#define GPT_CTL_TBEN_EN         0x00000100  // Enable 
#define GPT_CTL_TAPWML          0x00000040  // GPTM Timer A PWM Output Level 
                                            // 0: Output is unaffected. 1: 
                                            // Output is inverted. 
#define GPT_CTL_TAPWML_M        0x00000040
#define GPT_CTL_TAPWML_S        6
#define GPT_CTL_TAPWML_NORMAL   0x00000000  // Not inverted 
#define GPT_CTL_TAPWML_INVERTED 0x00000040  // Inverted 
#define GPT_CTL_TAOTE           0x00000020  // GPTM Timer A Output Trigger 
                                            // Enable 0: The output Timer A ADC 
                                            // trigger is disabled. 1: The 
                                            // output Timer A ADC trigger is 
                                            // enabled. 
#define GPT_CTL_TAOTE_M         0x00000020
#define GPT_CTL_TAOTE_S         5
#define GPT_CTL_TAOTE_DIS       0x00000000  // Disable 
#define GPT_CTL_TAOTE_EN        0x00000020  // Enable 
#define GPT_CTL_RTCEN           0x00000010  // GPTM RTC Enable 0: RTC counting 
                                            // is disabled. 1: RTC counting is 
                                            // enabled. 
#define GPT_CTL_RTCEN_M         0x00000010
#define GPT_CTL_RTCEN_S         4
#define GPT_CTL_RTCEN_DIS       0x00000000  // Disable 
#define GPT_CTL_RTCEN_EN        0x00000010  // Enable 
#define GPT_CTL_TAEVENT_M       0x0000000C  // GPTM Timer A Event Mode 
#define GPT_CTL_TAEVENT_S       2
#define GPT_CTL_TAEVENT_POS     0x00000000  // Positive edge 
#define GPT_CTL_TAEVENT_NEG     0x00000004  // Negative edge 
#define GPT_CTL_TAEVENT_BOTH    0x0000000C  // Both edges 
#define GPT_CTL_TASTALL         0x00000002  // GPTM Timer A Stall Enable 0: 
                                            // Timer A continues counting while 
                                            // the processor is halted by the 
                                            // debugger. 1: Timer A freezes 
                                            // counting while the processor is 
                                            // halted by the debugger. 
#define GPT_CTL_TASTALL_M       0x00000002
#define GPT_CTL_TASTALL_S       1
#define GPT_CTL_TASTALL_DIS     0x00000000  // STALL Disable 
#define GPT_CTL_TASTALL_EN      0x00000002  // STALL Enable 
#define GPT_CTL_TAEN            0x00000001  // GPTM Timer A Enable 0: Timer A 
                                            // is disabled. 1: Timer A is 
                                            // enabled and begins counting or 
                                            // the capture logic is enabled 
                                            // based on the CFG register. 
#define GPT_CTL_TAEN_M          0x00000001
#define GPT_CTL_TAEN_S          0
#define GPT_CTL_TAEN_DIS        0x00000000  // Disable 
#define GPT_CTL_TAEN_EN         0x00000001  // Enable 
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_SYNC register.
//
//*****************************************************************************
#define GPT_SYNC_SYNC3_M        0x000000C0  // Synchronize GPTM Timer 3 0x0: 
                                            // GPTM3 is not affected. 0x1: A 
                                            // timeout event for Timer A of 
                                            // GPTM3 is triggered. 0x2: A 
                                            // timeout event for Timer B of 
                                            // GPTM3 is triggered. 0x3: A 
                                            // timeout event for both Timer A 
                                            // and Timer B of GPTM3 is 
                                            // triggered. 
#define GPT_SYNC_SYNC3_S        6
#define GPT_SYNC_SYNC3_NOSYNC   0x00000000  // No Sync 
#define GPT_SYNC_SYNC3_TIMERA   0x00000040  // A timeout event for Timer A of 
                                            // GPTM3 is triggered 
#define GPT_SYNC_SYNC3_TIMERB   0x00000080  // A timeout event for Timer B of 
                                            // GPTM3 is triggered 
#define GPT_SYNC_SYNC3_BOTH     0x000000C0  // A timeout event for both Timer 
                                            // A and Timer B of GPTM3 is 
                                            // triggered 
#define GPT_SYNC_SYNC2_M        0x00000030  // Synchronize GPTM Timer 2 0x0: 
                                            // GPTM2 is not affected. 0x1: A 
                                            // timeout event for Timer A of 
                                            // GPTM2 is triggered. 0x2: A 
                                            // timeout event for Timer B of 
                                            // GPTM2 is triggered. 0x3: A 
                                            // timeout event for both Timer A 
                                            // and Timer B of GPTM2 is 
                                            // triggered. 
#define GPT_SYNC_SYNC2_S        4
#define GPT_SYNC_SYNC2_NOSYNC   0x00000000  // No Sync 
#define GPT_SYNC_SYNC2_TIMERA   0x00000010  // A timeout event for Timer A of 
                                            // GPTM2 is triggered 
#define GPT_SYNC_SYNC2_TIMERB   0x00000020  // A timeout event for Timer B of 
                                            // GPTM2 is triggered 
#define GPT_SYNC_SYNC2_BOTH     0x00000030  // A timeout event for both Timer 
                                            // A and Timer B of GPTM2 is 
                                            // triggered 
#define GPT_SYNC_SYNC1_M        0x0000000C  // Synchronize GPTM Timer 1 0x0: 
                                            // GPTM1 is not affected. 0x1: A 
                                            // timeout event for Timer A of 
                                            // GPTM1 is triggered. 0x2: A 
                                            // timeout event for Timer B of 
                                            // GPTM1 is triggered. 0x3: A 
                                            // timeout event for both Timer A 
                                            // and Timer B of GPTM1 is 
                                            // triggered. 
#define GPT_SYNC_SYNC1_S        2
#define GPT_SYNC_SYNC1_NOSYNC   0x00000000  // No Sync 
#define GPT_SYNC_SYNC1_TIMERA   0x00000004  // A timeout event for Timer A of 
                                            // GPTM1 is triggered 
#define GPT_SYNC_SYNC1_TIMERB   0x00000008  // A timeout event for Timer B of 
                                            // GPTM1 is triggered 
#define GPT_SYNC_SYNC1_BOTH     0x0000000C  // A timeout event for both Timer 
                                            // A and Timer B of GPTM1 is 
                                            // triggered 
#define GPT_SYNC_SYNC0_M        0x00000003  // Synchronize GPTM Timer 0 0x0: 
                                            // GPTM0 is not affected. 0x1: A 
                                            // timeout event for Timer A of 
                                            // GPTM0 is triggered. 0x2: A 
                                            // timeout event for Timer B of 
                                            // GPTM0 is triggered. 0x3: A 
                                            // timeout event for both Timer A 
                                            // and Timer B of GPTM0 is 
                                            // triggered. 
#define GPT_SYNC_SYNC0_S        0
#define GPT_SYNC_SYNC0_NOSYNC   0x00000000  // No Sync 
#define GPT_SYNC_SYNC0_TIMERA   0x00000001  // A timeout event for Timer A of 
                                            // GPTM0 is triggered 
#define GPT_SYNC_SYNC0_TIMERB   0x00000002  // A timeout event for Timer B of 
                                            // GPTM0 is triggered 
#define GPT_SYNC_SYNC0_BOTH     0x00000003  // A timeout event for both Timer 
                                            // A and Timer B of GPTM0 is 
                                            // triggered 
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_IMR register.
//
//*****************************************************************************
#define GPT_IMR_WUMIS           0x00010000  // GPTM Write Update Error 
                                            // Interrupt Mask 0: Interrupt is 
                                            // disabled. 1: Interrupt is 
                                            // enabled. 
#define GPT_IMR_WUMIS_M         0x00010000
#define GPT_IMR_WUMIS_S         16
#define GPT_IMR_WUMIS_DIS       0x00000000  // Disable Interrupt 
#define GPT_IMR_WUMIS_EN        0x00010000  // Enable Interrupt 
#define GPT_IMR_DMABIM          0x00002000  // GPTM Timer B DMA DONE Interrupt 
                                            // Mask 0: Interrupt is disabled. 
                                            // 1: Interrupt is enabled. 
#define GPT_IMR_DMABIM_M        0x00002000
#define GPT_IMR_DMABIM_S        13
#define GPT_IMR_DMABIM_DIS      0x00000000  // Disable Interrupt 
#define GPT_IMR_DMABIM_EN       0x00002000  // Enable Interrupt 
#define GPT_IMR_TBMIM           0x00000800  // GPTM Timer B Match Interrupt 
                                            // Mask 0: Interrupt is disabled. 
                                            // 1: Interrupt is enabled. 
#define GPT_IMR_TBMIM_M         0x00000800
#define GPT_IMR_TBMIM_S         11
#define GPT_IMR_TBMIM_DIS       0x00000000  // Disable Interrupt 
#define GPT_IMR_TBMIM_EN        0x00000800  // Enable Interrupt 
#define GPT_IMR_CBEIM           0x00000400  // GPTM Timer B Capture Event 
                                            // Interrupt Mask 0: Interrupt is 
                                            // disabled. 1: Interrupt is 
                                            // enabled. 
#define GPT_IMR_CBEIM_M         0x00000400
#define GPT_IMR_CBEIM_S         10
#define GPT_IMR_CBEIM_DIS       0x00000000  // Disable Interrupt 
#define GPT_IMR_CBEIM_EN        0x00000400  // Enable Interrupt 
#define GPT_IMR_CBMIM           0x00000200  // GPTM Timer B Capture Match 
                                            // Interrupt Mask 0: Interrupt is 
                                            // disabled. 1: Interrupt is 
                                            // enabled. 
#define GPT_IMR_CBMIM_M         0x00000200
#define GPT_IMR_CBMIM_S         9
#define GPT_IMR_CBMIM_DIS       0x00000000  // Disable Interrupt 
#define GPT_IMR_CBMIM_EN        0x00000200  // Enable Interrupt 
#define GPT_IMR_TBTOIM          0x00000100  // GPTM Timer B Time-out Interrupt 
                                            // Mask 0: Interrupt is disabled. 
                                            // 1: Interrupt is enabled. 
#define GPT_IMR_TBTOIM_M        0x00000100
#define GPT_IMR_TBTOIM_S        8
#define GPT_IMR_TBTOIM_DIS      0x00000000  // Disable Interrupt 
#define GPT_IMR_TBTOIM_EN       0x00000100  // Enable Interrupt 
#define GPT_IMR_DMAAIM          0x00000020  // GPTM Timer A DMA DONE Interrupt 
                                            // Mask 0: Interrupt is disabled. 
                                            // 1: Interrupt is enabled. 
#define GPT_IMR_DMAAIM_M        0x00000020
#define GPT_IMR_DMAAIM_S        5
#define GPT_IMR_DMAAIM_DIS      0x00000000  // Disable Interrupt 
#define GPT_IMR_DMAAIM_EN       0x00000020  // Enable Interrupt 
#define GPT_IMR_TAMIM           0x00000010  // GPTM Timer A Match Interrupt 
                                            // Mask 0: Interrupt is disabled. 
                                            // 1: Interrupt is enabled. 
#define GPT_IMR_TAMIM_M         0x00000010
#define GPT_IMR_TAMIM_S         4
#define GPT_IMR_TAMIM_DIS       0x00000000  // Disable Interrupt 
#define GPT_IMR_TAMIM_EN        0x00000010  // Enable Interrupt 
#define GPT_IMR_RTCIM           0x00000008  // GPTM RTC Interrupt Mask 0: 
                                            // Interrupt is disabled. 1: 
                                            // Interrupt is enabled 
#define GPT_IMR_RTCIM_M         0x00000008
#define GPT_IMR_RTCIM_S         3
#define GPT_IMR_RTCIM_DIS       0x00000000  // Disable Interrupt 
#define GPT_IMR_RTCIM_EN        0x00000008  // Enable Interrupt 
#define GPT_IMR_CAEIM           0x00000004  // GPTM Timer A Capture Event 
                                            // Interrupt Mask 0: Interrupt is 
                                            // disabled. 1: Interrupt is 
                                            // enabled. 
#define GPT_IMR_CAEIM_M         0x00000004
#define GPT_IMR_CAEIM_S         2
#define GPT_IMR_CAEIM_DIS       0x00000000  // Disable Interrupt 
#define GPT_IMR_CAEIM_EN        0x00000004  // Enable Interrupt 
#define GPT_IMR_CAMIM           0x00000002  // GPTM Timer A Capture Match 
                                            // Interrupt Mask 0: Interrupt is 
                                            // disabled. 1: Interrupt is 
                                            // enabled. 
#define GPT_IMR_CAMIM_M         0x00000002
#define GPT_IMR_CAMIM_S         1
#define GPT_IMR_CAMIM_DIS       0x00000000  // Disable Interrupt 
#define GPT_IMR_CAMIM_EN        0x00000002  // Enable Interrupt 
#define GPT_IMR_TATOIM          0x00000001  // GPTM Timer A Time-out Interrupt 
                                            // Mask 0: Interrupt is disabled. 
                                            // 1: Interrupt is enabled. 
#define GPT_IMR_TATOIM_M        0x00000001
#define GPT_IMR_TATOIM_S        0
#define GPT_IMR_TATOIM_DIS      0x00000000  // Disable Interrupt 
#define GPT_IMR_TATOIM_EN       0x00000001  // Enable Interrupt 
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_RIS register.
//
//*****************************************************************************
#define GPT_RIS_WURIS           0x00010000  // GPTM Write Update Error Raw 
                                            // Interrupt 0: No error. 1: Either 
                                            // Timer A or B was written twice 
                                            // in a Row or Timer A was written 
                                            // before the corresponding Timer B 
                                            // was written. 
#define GPT_RIS_WURIS_M         0x00010000
#define GPT_RIS_WURIS_S         16
#define GPT_RIS_DMABRIS         0x00002000  // GPTM Timer B DMA Done Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_RIS_DMABRIS_M       0x00002000
#define GPT_RIS_DMABRIS_S       13
#define GPT_RIS_TBMRIS          0x00000800  // GPTM Timer B Match Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_RIS_TBMRIS_M        0x00000800
#define GPT_RIS_TBMRIS_S        11
#define GPT_RIS_CBERIS          0x00000400  // GPTM Timer B Capture Event Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_RIS_CBERIS_M        0x00000400
#define GPT_RIS_CBERIS_S        10
#define GPT_RIS_CBMRIS          0x00000200  // GPTM Timer B Capture Match Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_RIS_CBMRIS_M        0x00000200
#define GPT_RIS_CBMRIS_S        9
#define GPT_RIS_TBTORIS         0x00000100  // GPTM Timer B Time-out Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_RIS_TBTORIS_M       0x00000100
#define GPT_RIS_TBTORIS_S       8
#define GPT_RIS_DMAARIS         0x00000020  // GPTM Timer A DMA DONE Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_RIS_DMAARIS_M       0x00000020
#define GPT_RIS_DMAARIS_S       5
#define GPT_RIS_TAMRIS          0x00000010  // GPTM Timer A Match Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_RIS_TAMRIS_M        0x00000010
#define GPT_RIS_TAMRIS_S        4
#define GPT_RIS_RTCRIS          0x00000008  // GPTM RTC Raw Interrupt 0: 
                                            // Interrupt Occurred 1: Interrupt 
                                            // Occurred 
#define GPT_RIS_RTCRIS_M        0x00000008
#define GPT_RIS_RTCRIS_S        3
#define GPT_RIS_CAERIS          0x00000004  // GPTM Timer A Capture Event Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_RIS_CAERIS_M        0x00000004
#define GPT_RIS_CAERIS_S        2
#define GPT_RIS_CAMRIS          0x00000002  // GPTM Timer A Capture Match Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_RIS_CAMRIS_M        0x00000002
#define GPT_RIS_CAMRIS_S        1
#define GPT_RIS_TATORIS         0x00000001  // GPTM Timer A Time-out Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_RIS_TATORIS_M       0x00000001
#define GPT_RIS_TATORIS_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_MIS register.
//
//*****************************************************************************
#define GPT_MIS_WUEMIS          0x00010000  // GPTM Write Update Error Masked 
                                            // Interrupt 0: No error. 1: Either 
                                            // Timer A or B was written twice 
                                            // in a Row or Timer A was written 
                                            // before the corresponding Timer B 
                                            // was written. 
#define GPT_MIS_WUEMIS_M        0x00010000
#define GPT_MIS_WUEMIS_S        16
#define GPT_MIS_DMABMIS         0x00002000  // GPTM Timer B DMA DONE Masked 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_MIS_DMABMIS_M       0x00002000
#define GPT_MIS_DMABMIS_S       13
#define GPT_MIS_TBMMIS          0x00000800  // GPTM Timer B Match Masked 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_MIS_TBMMIS_M        0x00000800
#define GPT_MIS_TBMMIS_S        11
#define GPT_MIS_CBEMIS          0x00000400  // GPTM Timer B Capture Event 
                                            // Masked Interrupt 0: Interrupt 
                                            // Occurred 1: Interrupt Occurred 
#define GPT_MIS_CBEMIS_M        0x00000400
#define GPT_MIS_CBEMIS_S        10
#define GPT_MIS_CBMMIS          0x00000200  // GPTM Timer B Capture Match 
                                            // Masked Interrupt 0: Interrupt 
                                            // Occurred 1: Interrupt Occurred 
#define GPT_MIS_CBMMIS_M        0x00000200
#define GPT_MIS_CBMMIS_S        9
#define GPT_MIS_TBTOMIS         0x00000100  // GPTM Timer B Time-out Masked 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_MIS_TBTOMIS_M       0x00000100
#define GPT_MIS_TBTOMIS_S       8
#define GPT_MIS_DMAAMIS         0x00000020  // GPTM Timer A DMA DONE Masked 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_MIS_DMAAMIS_M       0x00000020
#define GPT_MIS_DMAAMIS_S       5
#define GPT_MIS_TAMRIS          0x00000010  // GPTM Timer A Match Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_MIS_TAMRIS_M        0x00000010
#define GPT_MIS_TAMRIS_S        4
#define GPT_MIS_RTCMIS          0x00000008  // GPTM RTC Masked Interrupt 0: 
                                            // Interrupt Occurred 1: Interrupt 
                                            // Occurred 
#define GPT_MIS_RTCMIS_M        0x00000008
#define GPT_MIS_RTCMIS_S        3
#define GPT_MIS_CAEMIS          0x00000004  // GPTM Timer A Capture Event Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_MIS_CAEMIS_M        0x00000004
#define GPT_MIS_CAEMIS_S        2
#define GPT_MIS_CAMMIS          0x00000002  // GPTM Timer A Capture Match Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_MIS_CAMMIS_M        0x00000002
#define GPT_MIS_CAMMIS_S        1
#define GPT_MIS_TATOMIS         0x00000001  // GPTM Timer A Time-out Raw 
                                            // Interrupt 0: Interrupt Occurred 
                                            // 1: Interrupt Occurred 
#define GPT_MIS_TATOMIS_M       0x00000001
#define GPT_MIS_TATOMIS_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_ICLR register.
//
//*****************************************************************************
#define GPT_ICLR_WUECINT        0x00010000  // GPTM Write Update Error 
                                            // Interrupt Clear 0: does nothing 
                                            // 1: Clear Interrupt 
#define GPT_ICLR_WUECINT_M      0x00010000
#define GPT_ICLR_WUECINT_S      16
#define GPT_ICLR_DMABINT        0x00002000  // GPTM Timer B DMA DONE Interrupt 
                                            // Clear 0: does nothing 1: Clear 
                                            // Interrupt 
#define GPT_ICLR_DMABINT_M      0x00002000
#define GPT_ICLR_DMABINT_S      13
#define GPT_ICLR_TBMCINT        0x00000800  // GPTM Timer B Match Interrupt 
                                            // Clear 0: does nothing 1: Clear 
                                            // Interrupt 
#define GPT_ICLR_TBMCINT_M      0x00000800
#define GPT_ICLR_TBMCINT_S      11
#define GPT_ICLR_CBECINT        0x00000400  // GPTM Timer B Capture Event 
                                            // Interrupt Clear 0: does nothing 
                                            // 1: Clear Interrupt 
#define GPT_ICLR_CBECINT_M      0x00000400
#define GPT_ICLR_CBECINT_S      10
#define GPT_ICLR_CBMCINT        0x00000200  // GPTM Timer B Capture Match 
                                            // Interrupt Clear 0: does nothing 
                                            // 1: Clear Interrupt 
#define GPT_ICLR_CBMCINT_M      0x00000200
#define GPT_ICLR_CBMCINT_S      9
#define GPT_ICLR_TBTOCINT       0x00000100  // GPTM Timer B Time-out Interrupt 
                                            // Clear 0: does nothing 1: Clear 
                                            // Interrupt 
#define GPT_ICLR_TBTOCINT_M     0x00000100
#define GPT_ICLR_TBTOCINT_S     8
#define GPT_ICLR_DMAAINT        0x00000020  // GPTM Timer A DMA DONE Interrupt 
                                            // Clear 0: does nothing 1: Clear 
                                            // Interrupt 
#define GPT_ICLR_DMAAINT_M      0x00000020
#define GPT_ICLR_DMAAINT_S      5
#define GPT_ICLR_TAMCINT        0x00000010  // GPTM Timer A Match Interrupt 
                                            // Clear 0: does nothing 1: Clear 
                                            // Interrupt 
#define GPT_ICLR_TAMCINT_M      0x00000010
#define GPT_ICLR_TAMCINT_S      4
#define GPT_ICLR_RTCCINT        0x00000008  // GPTM RTC Interrupt Clear 0: 
                                            // does nothing 1: Clear Interrupt 
#define GPT_ICLR_RTCCINT_M      0x00000008
#define GPT_ICLR_RTCCINT_S      3
#define GPT_ICLR_CAECINT        0x00000004  // GPTM Timer A Capture Event 
                                            // Interrupt Clear 0: does nothing 
                                            // 1: Clear Interrupt 
#define GPT_ICLR_CAECINT_M      0x00000004
#define GPT_ICLR_CAECINT_S      2
#define GPT_ICLR_CAMCINT        0x00000002  // GPTM Timer A Capture Match 
                                            // Interrupt Clear 0: does nothing 
                                            // 1: Clear Interrupt 
#define GPT_ICLR_CAMCINT_M      0x00000002
#define GPT_ICLR_CAMCINT_S      1
#define GPT_ICLR_TATOCINT       0x00000001  // GPTM Timer A Time-out Interrupt 
                                            // Clear 0: does nothing 1: Clear 
                                            // Interrupt 
#define GPT_ICLR_TATOCINT_M     0x00000001
#define GPT_ICLR_TATOCINT_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TAILR register.
//
//*****************************************************************************
#define GPT_TAILR_TAILR_M       0xFFFFFFFF  // GPTM Timer A Interval Load 
                                            // Register (TAILR) 
#define GPT_TAILR_TAILR_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TBILR register.
//
//*****************************************************************************
#define GPT_TBILR_TBILR_M       0xFFFFFFFF  // GPTM Timer B Interval Load 
                                            // Register (TBILR) 
#define GPT_TBILR_TBILR_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TAMATCHR register.
//
//*****************************************************************************
#define GPT_TAMATCHR_TAMATCHR_M 0xFFFFFFFF  // GPTM TimerA Match Register 
#define GPT_TAMATCHR_TAMATCHR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TBMATCHR register.
//
//*****************************************************************************
#define GPT_TBMATCHR_TBMATCHR_M 0xFFFFFFFF  // GPTM TimerB Match Register 
#define GPT_TBMATCHR_TBMATCHR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TAPR register.
//
//*****************************************************************************
#define GPT_TAPR_TAPSR_M        0x000000FF  // GPTM Timer A Pre-scale. In 16 
                                            // bit modes this field holds bits 
                                            // 23:16. 
#define GPT_TAPR_TAPSR_S        0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TBPR register.
//
//*****************************************************************************
#define GPT_TBPR_TBPSR_M        0x000000FF  // GPTM Timer B Match Pre-scale. 
                                            // In 16 bit modes this field holds 
                                            // bits 23:16. 
#define GPT_TBPR_TBPSR_S        0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TAPMR register.
//
//*****************************************************************************
#define GPT_TAPMR_TAPSMR_M      0x000000FF  // GPTM Timer A Pre-scale Match. 
                                            // Holds bits 26:16 in the 16-bit 
                                            // mode. 
#define GPT_TAPMR_TAPSMR_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TBPMR register.
//
//*****************************************************************************
#define GPT_TBPMR_TBPSMR_M      0x000000FF  // GPTM Timer B Pre-scale Match 
                                            // Register. Holds bits 26:16 in 
                                            // the 16-bit mode. 
#define GPT_TBPMR_TBPSMR_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TAR register.
//
//*****************************************************************************
#define GPT_TAR_TAR_M           0xFFFFFFFF  // GPTM Timer A Register 
#define GPT_TAR_TAR_S           0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TBR register.
//
//*****************************************************************************
#define GPT_TBR_TBR_M           0xFFFFFFFF  // GPTM Timer B Register 
#define GPT_TBR_TBR_S           0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TAV register.
//
//*****************************************************************************
#define GPT_TAV_TAV_M           0xFFFFFFFF  // GPTM Timer A Register 
#define GPT_TAV_TAV_S           0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TBV register.
//
//*****************************************************************************
#define GPT_TBV_TBV_M           0xFFFFFFFF  // GPTM Timer B Register 
#define GPT_TBV_TBV_S           0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_RTCPD register.
//
//*****************************************************************************
#define GPT_RTCPD_RTCPD_M       0x0000FFFF  // GPTM RTC Pre-divider 
#define GPT_RTCPD_RTCPD_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TAPS register.
//
//*****************************************************************************
#define GPT_TAPS_PSS_M          0x0000FFFF  // GPTM Timer A Pre-scaler 
#define GPT_TAPS_PSS_S          0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TBPS register.
//
//*****************************************************************************
#define GPT_TBPS_PSS_M          0x0000FFFF  // GPTM Timer B Pre-scaler 
#define GPT_TBPS_PSS_S          0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TAPV register.
//
//*****************************************************************************
#define GPT_TAPV_PSV_M          0x0000FFFF  // GPTM Timer A Pre-scaler Value 
#define GPT_TAPV_PSV_S          0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_TBPV register.
//
//*****************************************************************************
#define GPT_TBPV_PSV_M          0x0000FFFF  // GPTM Timer B Pre-scaler Value 
#define GPT_TBPV_PSV_S          0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_DMAEV register.
//
//*****************************************************************************
#define GPT_DMAEV_TBMDMAEN      0x00000800  // GPTM Timer B Match DMA Trigger 
                                            // Enable 
#define GPT_DMAEV_TBMDMAEN_M    0x00000800
#define GPT_DMAEV_TBMDMAEN_S    11
#define GPT_DMAEV_CBEDMAEN      0x00000400  // GPTM Timer B Capture Event DMA 
                                            // Trigger Enable 
#define GPT_DMAEV_CBEDMAEN_M    0x00000400
#define GPT_DMAEV_CBEDMAEN_S    10
#define GPT_DMAEV_CBMDMAEN      0x00000200  // GPTM Timer B Capture Match DMA 
                                            // Trigger Enable 
#define GPT_DMAEV_CBMDMAEN_M    0x00000200
#define GPT_DMAEV_CBMDMAEN_S    9
#define GPT_DMAEV_TBTODMAEN     0x00000100  // GPTM Timer B Time-Out DMA 
                                            // Trigger Enable 
#define GPT_DMAEV_TBTODMAEN_M   0x00000100
#define GPT_DMAEV_TBTODMAEN_S   8
#define GPT_DMAEV_TAMDMAEN      0x00000010  // GPTM Timer A Match DMA Trigger 
                                            // Enable 
#define GPT_DMAEV_TAMDMAEN_M    0x00000010
#define GPT_DMAEV_TAMDMAEN_S    4
#define GPT_DMAEV_RTCDMAEN      0x00000008  // GPTM RTC Match DMA Trigger 
                                            // Enable 
#define GPT_DMAEV_RTCDMAEN_M    0x00000008
#define GPT_DMAEV_RTCDMAEN_S    3
#define GPT_DMAEV_CAEDMAEN      0x00000004  // GPTM Timer A Capture Event DMA 
                                            // Trigger Enable 
#define GPT_DMAEV_CAEDMAEN_M    0x00000004
#define GPT_DMAEV_CAEDMAEN_S    2
#define GPT_DMAEV_CAMDMAEN      0x00000002  // GPTM Timer A Capture Match DMA 
                                            // Trigger Enable 
#define GPT_DMAEV_CAMDMAEN_M    0x00000002
#define GPT_DMAEV_CAMDMAEN_S    1
#define GPT_DMAEV_TATODMAEN     0x00000001  // GPTM Timer A Time-Out DMA 
                                            // Trigger Enable 
#define GPT_DMAEV_TATODMAEN_M   0x00000001
#define GPT_DMAEV_TATODMAEN_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_ADCEV register.
//
//*****************************************************************************
#define GPT_ADCEV_TBMADCEN      0x00000800  // GPTM Timer B Match ADC Trigger 
                                            // Enable 
#define GPT_ADCEV_TBMADCEN_M    0x00000800
#define GPT_ADCEV_TBMADCEN_S    11
#define GPT_ADCEV_CBEADCEN      0x00000400  // GPTM Timer B Capture Event ADC 
                                            // Trigger Enable 
#define GPT_ADCEV_CBEADCEN_M    0x00000400
#define GPT_ADCEV_CBEADCEN_S    10
#define GPT_ADCEV_CBMADCEN      0x00000200  // GPTM Timer B Capture Match ADC 
                                            // Trigger Enable 
#define GPT_ADCEV_CBMADCEN_M    0x00000200
#define GPT_ADCEV_CBMADCEN_S    9
#define GPT_ADCEV_TBTOADCEN     0x00000100  // GPTM Timer B Time-Out ADC 
                                            // Trigger Enable 
#define GPT_ADCEV_TBTOADCEN_M   0x00000100
#define GPT_ADCEV_TBTOADCEN_S   8
#define GPT_ADCEV_TAMADCEN      0x00000010  // GPTM Timer A Match ADC Trigger 
                                            // Enable 
#define GPT_ADCEV_TAMADCEN_M    0x00000010
#define GPT_ADCEV_TAMADCEN_S    4
#define GPT_ADCEV_RTCADCEN      0x00000008  // GPTM RTC Match ADC Trigger 
                                            // Enable 
#define GPT_ADCEV_RTCADCEN_M    0x00000008
#define GPT_ADCEV_RTCADCEN_S    3
#define GPT_ADCEV_CAEADCEN      0x00000004  // GPTM Timer A Capture Event ADC 
                                            // Trigger Enable 
#define GPT_ADCEV_CAEADCEN_M    0x00000004
#define GPT_ADCEV_CAEADCEN_S    2
#define GPT_ADCEV_CAMADCEN      0x00000002  // GPTM Timer A Capture Match ADC 
                                            // Trigger Enable 
#define GPT_ADCEV_CAMADCEN_M    0x00000002
#define GPT_ADCEV_CAMADCEN_S    1
#define GPT_ADCEV_TATOADCEN     0x00000001  // GPTM Timer A Time-Out ADC 
                                            // Trigger Enable 
#define GPT_ADCEV_TATOADCEN_M   0x00000001
#define GPT_ADCEV_TATOADCEN_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_VERSION register.
//
//*****************************************************************************
#define GPT_VERSION_VERSION_M   0xFFFFFFFF  // Timer Revision. 
#define GPT_VERSION_VERSION_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPT_O_ANDCPP register.
//
//*****************************************************************************
#define GPT_ANDCPP_CPP_AND_EN   0x00000001  // Bit 0 enables anding of the CPP 
                                            // outputs for timers A and B 
#define GPT_ANDCPP_CPP_AND_EN_M 0x00000001
#define GPT_ANDCPP_CPP_AND_EN_S 0


#endif // __HW_GPT_H__

