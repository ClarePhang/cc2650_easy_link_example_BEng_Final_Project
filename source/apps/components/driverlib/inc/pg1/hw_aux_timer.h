
/******************************************************************************
*  Filename:       hw_aux_timer.h
*  Revised:        $Date: 2014-03-06 10:55:51 +0100 (to, 06 mar 2014) $
*  Revision:       $Revision: 40315 $
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
#ifndef __HW_AUX_TIMER_H__
#define __HW_AUX_TIMER_H__

//*****************************************************************************
//
// The following are defines for the AUX_TIMER register offsets.
//
//*****************************************************************************
#define AUX_TIMER_O_CFG0        0x00000000  // Timer 0 configuration register 
#define AUX_TIMER_O_CFG1        0x00000004  // Timer 1 configuration register 
#define AUX_TIMER_O_START       0x00000008  // Start/stop control for timers 
#define AUX_TIMER_O_T0TARGET    0x0000000C  // Target counter value timer0 
#define AUX_TIMER_O_T1TARGET    0x00000010  // Target counter value timer1 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_TIMER_O_CFG0 register.
//
//*****************************************************************************
#define AUX_TIMER_CFG0_T1PRE_M  0x0000F000  // Timer 1 prescaler setting. 
                                            // Prescaler division ratio n: 
                                            // Division ratio is 2^n. 
#define AUX_TIMER_CFG0_T1PRE_S  12
#define AUX_TIMER_CFG0_T0PRE_M  0x00000F00  // Timer 0 Prescaler setting 
                                            // Prescaler division ratio n: 
                                            // Division ratio is 2^n 
#define AUX_TIMER_CFG0_T0PRE_S  8
#define AUX_TIMER_CFG0_T1MODE   0x00000008  // Timer 1 Mode 0: Timer 1 
                                            // increments on AUX clock divided 
                                            // by T1PRE setting. 1: Timer 1 
                                            // counter increments only on edges 
                                            // of the event set by T1TICKSRC. 
                                            // The events are divided by the 
                                            // T1PRE setting. 
#define AUX_TIMER_CFG0_T1MODE_M 0x00000008
#define AUX_TIMER_CFG0_T1MODE_S 3
#define AUX_TIMER_CFG0_T1RELOAD 0x00000004  // Time 1 reload setting. 
#define AUX_TIMER_CFG0_T1RELOAD_M \
                                0x00000004
#define AUX_TIMER_CFG0_T1RELOAD_S 2
#define AUX_TIMER_CFG0_T0MODE   0x00000002  // Timer 0 Mode 0: Timer 0 
                                            // increments on AUX clock divided 
                                            // by T0PRE setting. 1: Timer 0 
                                            // counter increments only on edges 
                                            // of the event set by T0TICKSRC. 
                                            // The events are divided by the 
                                            // T0PRE setting. 
#define AUX_TIMER_CFG0_T0MODE_M 0x00000002
#define AUX_TIMER_CFG0_T0MODE_S 1
#define AUX_TIMER_CFG0_T0RELOAD 0x00000001  // Timer 0 reload setting 
#define AUX_TIMER_CFG0_T0RELOAD_M \
                                0x00000001
#define AUX_TIMER_CFG0_T0RELOAD_S 0
#define AUX_TIMER_CFG0_T0RELOAD_MAN \
                                0x00000000  // Timer has to be restarted 
                                            // manually 
#define AUX_TIMER_CFG0_T0RELOAD_CONT \
                                0x00000001  // Timer is automatically 
                                            // restarted when target is reached 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_TIMER_O_CFG1 register.
//
//*****************************************************************************
#define AUX_TIMER_CFG1_SRC_POL1 0x00002000  // Source Count Polarity for Timer 
                                            // 1 
#define AUX_TIMER_CFG1_SRC_POL1_M \
                                0x00002000
#define AUX_TIMER_CFG1_SRC_POL1_S 13
#define AUX_TIMER_CFG1_SRC_POL1_RISE \
                                0x00000000  // Count on rising edges of event 
#define AUX_TIMER_CFG1_SRC_POL1_FALL \
                                0x00002000  // Count on falling edges of event 
#define AUX_TIMER_CFG1_T1TICKSRC_M \
                                0x00001F00  // Aux timer 1 tick source. Select 
                                            // which event line shall be used 
                                            // as tick source for timer 1 

#define AUX_TIMER_CFG1_T1TICKSRC_S 8
#define AUX_TIMER_CFG1_T1TICKSRC_AON_WU_EV \
                                0x00000000  // Selects RTC_EVENT 
#define AUX_TIMER_CFG1_T1TICKSRC_SOC_COMPA \
                                0x00000100  // Selects SOC_COMPA 
#define AUX_TIMER_CFG1_T1TICKSRC_SOC_COMPB \
                                0x00000200  // Selects SOC_COMPB 
#define AUX_TIMER_CFG1_T1TICKSRC_TDC_DONE \
                                0x00000300  // Selects TDC_DONE 
#define AUX_TIMER_CFG1_T1TICKSRC_TIMER0_EV \
                                0x00000400  // Selects TIMER0_EVENT 
#define AUX_TIMER_CFG1_T1TICKSRC_TIMER1_EV \
                                0x00000500  // Selects TIMER1_EVENT 
#define AUX_TIMER_CFG1_T1TICKSRC_SMPH_AUTOTAKE_DONE \
                                0x00000600  // Selects SMPH_AUTOTAKE_DONE 
#define AUX_TIMER_CFG1_T1TICKSRC_ADC_DONE \
                                0x00000700  // Selects ADC_DONE 
#define AUX_TIMER_CFG1_T1TICKSRC_ADCFIFO_ALMOST_FULL \
                                0x00000800  // Selects RTC_8KHZ 
#define AUX_TIMER_CFG1_T1TICKSRC_OBSMUX0 \
                                0x00000900  // Selects OBSMUX0 
#define AUX_TIMER_CFG1_T1TICKSRC_OBSMUX1 \
                                0x00000A00  // Selects OBSMUX1 
#define AUX_TIMER_CFG1_T1TICKSRC_OBSMUX3 \
                                0x00000B00  // Selects AON_SW 
#define AUX_TIMER_CFG1_T1TICKSRC_OBSMUX4 \
                                0x00000C00  // Selects AON_PRG 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO0 \
                                0x00000D00  // Selects AIODIO0 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO1 \
                                0x00000E00  // Selects AIODIO1 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO2 \
                                0x00000F00  // Selects AIODIO2 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO3 \
                                0x00001000  // Selects AIODIO3 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO4 \
                                0x00001100  // Selects AIODIO4 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO5 \
                                0x00001200  // Selects AIODIO5 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO6 \
                                0x00001300  // Selects AIODIO6 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO7 \
                                0x00001400  // Selects AIODIO7 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO8 \
                                0x00001500  // Selects AIODIO8 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO9 \
                                0x00001600  // Selects AIODIO9 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO10 \
                                0x00001700  // Selects AIODIO10 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO11 \
                                0x00001800  // Selects AIODIO11 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO12 \
                                0x00001900  // Selects AIODIO12 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO13 \
                                0x00001A00  // Selects AIODIO13 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO14 \
                                0x00001B00  // Selects AIODIO14 
#define AUX_TIMER_CFG1_T1TICKSRC_AIODIO15 \
                                0x00001C00  // Selects AIODIO15 
#define AUX_TIMER_CFG1_T1TICKSRC_ACLK_REF \
                                0x00001D00  // Selects ACLK_REF 
#define AUX_TIMER_CFG1_T1TICKSRC_MCU_EVENT \
                                0x00001E00  // Selects MCU_EVENT 
#define AUX_TIMER_CFG1_T1TICKSRC_ADC_IRQ \
                                0x00001F00  // Selects ADC_IRQ 
#define AUX_TIMER_CFG1_SRC_POL0 0x00000020  // Source count polarity for Timer 
                                            // 0. See SRC_POL1 for values. 
#define AUX_TIMER_CFG1_SRC_POL0_M \
                                0x00000020
#define AUX_TIMER_CFG1_SRC_POL0_S 5
#define AUX_TIMER_CFG1_T0TICKSRC_M \
                                0x0000001F  // AUX timer 0 tick source. 
                                            // Selects which event line to use 
                                            // as tick source for timer 0. See 
                                            // T1TICKSRC for values. 

#define AUX_TIMER_CFG1_T0TICKSRC_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_TIMER_O_START register.
//
//*****************************************************************************
#define AUX_TIMER_START_STOP1   0x00000200  // Timer 1 stop. 1: Stop timer 1 
                                            // Note: START1 takes precedence 
                                            // over STOP1 
#define AUX_TIMER_START_STOP1_M 0x00000200
#define AUX_TIMER_START_STOP1_S 9
#define AUX_TIMER_START_STOP0   0x00000100  // Timer 0 stop. 1: Stop timer 0 
                                            // Note: START0 takes precedence 
                                            // over STOP0 
#define AUX_TIMER_START_STOP0_M 0x00000100
#define AUX_TIMER_START_STOP0_S 8
#define AUX_TIMER_START_START1  0x00000002  // Timer 1 Start 1: Start timer 1 
                                            // Returns 1 if Timer 1 is running 
#define AUX_TIMER_START_START1_M \
                                0x00000002
#define AUX_TIMER_START_START1_S 1
#define AUX_TIMER_START_START0  0x00000001  // Timer 0 Start 1: Start timer 0 
                                            // Returns 1 if Timer 0 is running 
#define AUX_TIMER_START_START0_M \
                                0x00000001
#define AUX_TIMER_START_START0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_TIMER_O_T0TARGET register.
//
//*****************************************************************************
#define AUX_TIMER_T0TARGET_VALUE_M \
                                0x000000FF  // Aux timer 0 counts from 0 to 
                                            // T0TARGET. Then gives an event 
                                            // and restarts if configured to do 
                                            // to so in the T0RELOAD setting. 
                                            // If T0TARGET is changed while 
                                            // timer 0 is running so that the 
                                            // count becomes higher than 
                                            // T0TARGET the timer will also 
                                            // restart if configured to do so. 
                                            // If T0MODE=0,no prescaler is 
                                            // used, and T0TARGET equals 1, the 
                                            // event line will be always set 

#define AUX_TIMER_T0TARGET_VALUE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_TIMER_O_T1TARGET register.
//
//*****************************************************************************
#define AUX_TIMER_T1TARGET_VALUE_M \
                                0x000000FF  // Aux timer 1 counts from 0 to 
                                            // T1TARGET. Then gives an event 
                                            // and restarts if configured to do 
                                            // to so in the T1RELOAD setting. 
                                            // If T1TARGET is changed while 
                                            // timer 1 is running so that the 
                                            // count becomes higher than 
                                            // T1TARGET the timer will also 
                                            // restart if configured to do so. 
                                            // If T1MODE=0,no prescaler is 
                                            // used, and T1TARGET equals 1, the 
                                            // event line will be always set 

#define AUX_TIMER_T1TARGET_VALUE_S 0


#endif // __HW_AUX_TIMER_H__

