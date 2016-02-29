
/******************************************************************************
*  Filename:       hw_aux_tdc.h
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
#ifndef __HW_AUX_TDC_H__
#define __HW_AUX_TDC_H__

//*****************************************************************************
//
// The following are defines for the AUX_TDC register offsets.
//
//*****************************************************************************
#define AUX_TDC_O_CTL           0x00000000  // TDC control register 
#define AUX_TDC_O_STAT          0x00000004  // TDC status register 
#define AUX_TDC_O_RESULT        0x00000008  // TDC Result register 
#define AUX_TDC_O_SATCFG        0x0000000C  // TDC saturation control 
#define AUX_TDC_O_TRIGSRC       0x00000010  // Select start/stop trigger 
                                            // sources for TDC 
#define AUX_TDC_O_TRIGCNT       0x00000014  // Stop counter status of TDC 
#define AUX_TDC_O_TRIGCNTLOAD   0x00000018  // Stop Event Ignore field. 
                                            // Selects the number of stopevents 
                                            // that will be ignored by the TDC. 
                                            // This can be used to measure 
                                            // multiple periods of a clock 
                                            // signal. When the stopcounter is 
                                            // enabled the first #CNT-1 stop 
                                            // events is ignored after which 
                                            // the TDC will stop measurement on 
                                            // event #CNT NB! Both values 0 and 
                                            // 1 will make the TDC stop on the 
                                            // first event after the start 
                                            // event NB must not be changed if 
                                            // state is not IDLE 
#define AUX_TDC_O_TRIGCNTCFG    0x0000001C  // Stop counter enable 
#define AUX_TDC_O_PRECTL        0x00000020  // Prescaler control 


//*****************************************************************************
//
// The following are defines for the bit fields in the AUX_TDC_O_CTL register.
//
//*****************************************************************************
#define AUX_TDC_CTL_CMD_M       0x00000003  // Command for starting TDC 
                                            // measurement 
#define AUX_TDC_CTL_CMD_S       0
#define AUX_TDC_CTL_CMD_CLR_RESULT \
                                0x00000000  // Clear TDC_SAT, TDC_Done and 
                                            // results. Note: This is not 
                                            // needed as prerequisite for a 
                                            // measurement. Reliable clear is 
                                            // only guaranteed from idle mode 
#define AUX_TDC_CTL_CMD_RUN_SYNC_START \
                                0x00000001  // Wait for falling event of start 
                                            // pulse before starting 
                                            // measurement on next rising edge 
                                            // of start. This guarantees and 
                                            // edge triggered start and is 
                                            // recommended for frequency 
                                            // measurements. If the first 
                                            // falling edge is close to the 
                                            // start command it may be missed, 
                                            // but the TDC shall catch later 
                                            // falling edges and in any case 
                                            // guarantee a measurement start 
                                            // synchronous to the rising edge 
                                            // of the start event. 
#define AUX_TDC_CTL_CMD_RUN     0x00000002  // Asyncronous start and 
                                            // asyncronous stop mode TDC 
                                            // measurement may start 
                                            // immediately if start is high and 
                                            // hence it may not give preciice 
                                            // edge to edge measurements. Only 
                                            // recommended when start pulse is 
                                            // guaranteed to arrive at least 7 
                                            // clock periods after command 
#define AUX_TDC_CTL_CMD_ABORT   0x00000003  // Force TDC back to IDLE 
//*****************************************************************************
//
// The following are defines for the bit fields in the AUX_TDC_O_STAT register.
//
//*****************************************************************************
#define AUX_TDC_STAT_START_BF   0x00000200  // Internal signal for debug 
                                            // purpose 1: Start signal was 
                                            // received before falling edge of 
                                            // fast clock 0: Start signal was 
                                            // received after falling edge of 
                                            // fast clock 
#define AUX_TDC_STAT_START_BF_M 0x00000200
#define AUX_TDC_STAT_START_BF_S 9
#define AUX_TDC_STAT_STOP_AF    0x00000100  // Internal signal for debug 
                                            // purpose 1: Stop signal was 
                                            // received after falling edge of 
                                            // fast_clock 0: Stop signal was 
                                            // received before falling edge of 
                                            // fast _clock 
#define AUX_TDC_STAT_STOP_AF_M  0x00000100
#define AUX_TDC_STAT_STOP_AF_S  8
#define AUX_TDC_STAT_SAT        0x00000080  // Saturation flag for TDC 
                                            // measurement 0: Conversion has 
                                            // not seen timeout 1: Conversion 
                                            // stopped due to timeout 
#define AUX_TDC_STAT_SAT_M      0x00000080
#define AUX_TDC_STAT_SAT_S      7
#define AUX_TDC_STAT_DONE       0x00000040  // Measurement complete flag 0: 
                                            // Measurement not yet complete 1: 
                                            // Measurement complete 
#define AUX_TDC_STAT_DONE_M     0x00000040
#define AUX_TDC_STAT_DONE_S     6
#define AUX_TDC_STAT_STATE_M    0x0000003F  // Readback of TDC statemachine 
#define AUX_TDC_STAT_STATE_S    0
#define AUX_TDC_STAT_STATE_WAIT_START \
                                0x00000000  // Current state is 
                                            // TDC_STATE_WAIT_START 
#define AUX_TDC_STAT_STATE_WAIT_START_STOP_CNT_EN \
                                0x00000004  // Current state is 
                                            // TDC_STATE_WAIT_STARTSTOPCNTEN 
#define AUX_TDC_STAT_STATE_IDLE 0x00000006  // Current state is TDC_STATE_IDLE 
#define AUX_TDC_STAT_STATE_CLR_CNT \
                                0x00000007  // Current state is 
                                            // TDC_STATE_CLRCNT 
#define AUX_TDC_STAT_STATE_WAIT_STOP \
                                0x00000008  // Current state is 
                                            // TDC_STATE_WAIT_STOP 
#define AUX_TDC_STAT_STATE_WAIT_STOP_CNTDWN \
                                0x0000000C  // Current state is 
                                            // TDC_STATE_WAIT_STOPCNTDOWN 
#define AUX_TDC_STAT_STATE_GET_RESULT \
                                0x0000000E  // Current state is 
                                            // TDC_STATE_GETRESULTS 
#define AUX_TDC_STAT_STATE_POR  0x0000000F  // Current state is TDC_STATE_POR 
#define AUX_TDC_STAT_STATE_WAIT_CLR_CNT_DONE \
                                0x00000016  // Current state is 
                                            // TDC_STATE_WAIT_CLRCNT_DONE 
#define AUX_TDC_STAT_STATE_START_FALL \
                                0x0000001E  // Current state is 
                                            // TDC_WAIT_STARTFALL 
#define AUX_TDC_STAT_STATE_FORCE_STOP \
                                0x0000002E  // Current state is TDC_FORCESTOP 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_TDC_O_RESULT register.
//
//*****************************************************************************
#define AUX_TDC_RESULT_VALUE_M  0x00FFFFFF  // Result of the TDC conversion 
#define AUX_TDC_RESULT_VALUE_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_TDC_O_SATCFG register.
//
//*****************************************************************************
#define AUX_TDC_SATCFG_LIMIT_M  0x0000000F  // Select when the TDC should time 
                                            // out. 
#define AUX_TDC_SATCFG_LIMIT_S  0
#define AUX_TDC_SATCFG_LIMIT_R13 \
                                0x00000003  // Result bit 13 : TDC Times out 
                                            // after 2^13 ticks 
#define AUX_TDC_SATCFG_LIMIT_R14 \
                                0x00000004  // Result bit 14 : TDC Times out 
                                            // after 2^14 ticks 
#define AUX_TDC_SATCFG_LIMIT_R15 \
                                0x00000005  // Result bit 15 : TDC Times out 
                                            // after 2^15 ticks 
#define AUX_TDC_SATCFG_LIMIT_R16 \
                                0x00000006  // Result bit 16 : TDC Times out 
                                            // after 2^16 ticks 
#define AUX_TDC_SATCFG_LIMIT_R17 \
                                0x00000007  // Result bit 17 : TDC Times out 
                                            // after 2^17 ticks 
#define AUX_TDC_SATCFG_LIMIT_R18 \
                                0x00000008  // Result bit 18 : TDC Times out 
                                            // after 2^18 ticks 
#define AUX_TDC_SATCFG_LIMIT_R19 \
                                0x00000009  // Result bit 19 : TDC Times out 
                                            // after 2^19 ticks 
#define AUX_TDC_SATCFG_LIMIT_R20 \
                                0x0000000A  // Result bit 20 : TDC Times out 
                                            // after 2^20 ticks 
#define AUX_TDC_SATCFG_LIMIT_R21 \
                                0x0000000B  // Result bit 21 : TDC Times out 
                                            // after 2^21 ticks 
#define AUX_TDC_SATCFG_LIMIT_R22 \
                                0x0000000C  // Result bit 22 : TDC Times out 
                                            // after 2^22 ticks 
#define AUX_TDC_SATCFG_LIMIT_R23 \
                                0x0000000D  // Result bit 23 : TDC Times out 
                                            // after 2^23 ticks 
#define AUX_TDC_SATCFG_LIMIT_ROVF \
                                0x0000000F  // TDC times out when tdcres wraps 
                                            // around 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_TDC_O_TRIGSRC register.
//
//*****************************************************************************
#define AUX_TDC_TRIGSRC_STOP_POL \
                                0x00002000  // Select polarity of stop signal. 
                                            // NB must not be changed if STATE 
                                            // is not IDLE 

#define AUX_TDC_TRIGSRC_STOP_POL_M \
                                0x00002000
#define AUX_TDC_TRIGSRC_STOP_POL_S 13
#define AUX_TDC_TRIGSRC_STOP_POL_HIGH \
                                0x00000000  // TDC Stops when high level is 
                                            // detected 
#define AUX_TDC_TRIGSRC_STOP_POL_LOW \
                                0x00002000  // TDC Stops when low level is 
                                            // detected 
#define AUX_TDC_TRIGSRC_STOP_SRC_M \
                                0x00001F00  // Selects event for asyncronous 
                                            // stop NB must not be changed if 
                                            // STATE is not IDLE 

#define AUX_TDC_TRIGSRC_STOP_SRC_S 8
#define AUX_TDC_TRIGSRC_STOP_SRC_AON_WUC \
                                0x00000000  // Selects AON_WUC 
#define AUX_TDC_TRIGSRC_STOP_SRC_SOC_COMPA \
                                0x00000100  // Selects SOC_COMPA 
#define AUX_TDC_TRIGSRC_STOP_SRC_SOC_COMPB \
                                0x00000200  // Selects SOC_COMPB 
#define AUX_TDC_TRIGSRC_STOP_SRC_CS_RESET \
                                0x00000300  // Selects CS_RESET 
#define AUX_TDC_TRIGSRC_STOP_SRC_TIMER0_EVENT \
                                0x00000400  // Selects TIMER0_EVENT 
#define AUX_TDC_TRIGSRC_STOP_SRC_TIMER1_EVENT \
                                0x00000500  // Selects TIMER1_EVENT 
#define AUX_TDC_TRIGSRC_STOP_SRC_SMPH_AUTOTAKE_DONE \
                                0x00000600  // Selects SMPH_AUTOTAKE_DONE 
#define AUX_TDC_TRIGSRC_STOP_SRC_ADC_DONE \
                                0x00000700  // Selects ADC_DONE 
#define AUX_TDC_TRIGSRC_STOP_SRC_ADCFIFO_ALMOST_FULL \
                                0x00000800  // Selects ADCFIFO_ALMOST_FULL 
#define AUX_TDC_TRIGSRC_STOP_SRC_OBSMUX0 \
                                0x00000900  // Selects OBSMUX0 
#define AUX_TDC_TRIGSRC_STOP_SRC_OBSMUX1 \
                                0x00000A00  // Selects OBSMUX1 
#define AUX_TDC_TRIGSRC_STOP_SRC_OBSMUX2 \
                                0x00000B00  // Selects OBSMUX2 
#define AUX_TDC_TRIGSRC_STOP_SRC_OBSMUX3 \
                                0x00000C00  // Selects OBSMUX3 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO0 \
                                0x00000D00  // Selects AIODIO0 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO1 \
                                0x00000E00  // Selects AIODIO1 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO2 \
                                0x00000F00  // Selects AIODIO2 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO3 \
                                0x00001000  // Selects AIODIO3 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO4 \
                                0x00001100  // Selects AIODIO4 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO5 \
                                0x00001200  // Selects AIODIO5 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO6 \
                                0x00001300  // Selects AIODIO6 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO7 \
                                0x00001400  // Selects AIODIO7 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO8 \
                                0x00001500  // Selects AIODIO8 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO9 \
                                0x00001600  // Selects AIODIO9 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO10 \
                                0x00001700  // Selects AIODIO10 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO11 \
                                0x00001800  // Selects AIODIO11 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO12 \
                                0x00001900  // Selects AIODIO12 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO13 \
                                0x00001A00  // Selects AIODIO13 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO14 \
                                0x00001B00  // Selects AIODIO14 
#define AUX_TDC_TRIGSRC_STOP_SRC_AIODIO15 \
                                0x00001C00  // Selects AIODIO15 
#define AUX_TDC_TRIGSRC_STOP_SRC_ACLK_REF \
                                0x00001D00  // Selects ACLK_REF 
#define AUX_TDC_TRIGSRC_STOP_SRC_MCU_EV \
                                0x00001E00  // Selects MCU_EVENT 
#define AUX_TDC_TRIGSRC_STOP_SRC_TDC_PRE \
                                0x00001F00  // Selects TDC_PRESCALER 
#define AUX_TDC_TRIGSRC_START_POL \
                                0x00000020  // Select polarity of start 
                                            // signal. NB must not be changed 
                                            // if STATE is not IDLE 

#define AUX_TDC_TRIGSRC_START_POL_M \
                                0x00000020
#define AUX_TDC_TRIGSRC_START_POL_S 5
#define AUX_TDC_TRIGSRC_START_POL_HIGH \
                                0x00000000  // TDC Starts when high level is 
                                            // detected 
#define AUX_TDC_TRIGSRC_START_POL_LOW \
                                0x00000020  // TDC Starts when low level is 
                                            // detected 
#define AUX_TDC_TRIGSRC_START_SRC_M \
                                0x0000001F  // Selects event for asyncronous 
                                            // start NB must not be changed if 
                                            // STATE is not IDLE 

#define AUX_TDC_TRIGSRC_START_SRC_S 0
#define AUX_TDC_TRIGSRC_START_SRC_AON_WUC \
                                0x00000000  // Selects AON_WUC 
#define AUX_TDC_TRIGSRC_START_SRC_SOC_COMPA \
                                0x00000001  // Selects SOC_COMPA 
#define AUX_TDC_TRIGSRC_START_SRC_SOC_COMPB \
                                0x00000002  // Selects SOC_COMPB 
#define AUX_TDC_TRIGSRC_START_SRC_CS_RESET \
                                0x00000003  // Selects CS_RESET 
#define AUX_TDC_TRIGSRC_START_SRC_TIMER0_EV \
                                0x00000004  // Selects TIMER0_EVENT 
#define AUX_TDC_TRIGSRC_START_SRC_TIMER1_EV \
                                0x00000005  // Selects TIMER1_EVENT 
#define AUX_TDC_TRIGSRC_START_SRC_SMPH_AUTOTAKE_DONE \
                                0x00000006  // Selects SMPH_AUTOTAKE_DONE 
#define AUX_TDC_TRIGSRC_START_SRC_ADC_DONE \
                                0x00000007  // Selects ADC_DONE 
#define AUX_TDC_TRIGSRC_START_SRC_ADC_FIFO_ALMOST_FULL \
                                0x00000008  // Selects ADCFIFO_ALMOST_FULL 
#define AUX_TDC_TRIGSRC_START_SRC_OBSMUX0 \
                                0x00000009  // Selects OBSMUX0 
#define AUX_TDC_TRIGSRC_START_SRC_OBSMUX1 \
                                0x0000000A  // Selects OBSMUX1 
#define AUX_TDC_TRIGSRC_START_SRC_OBSMUX2 \
                                0x0000000B  // Selects OBSMUX2 
#define AUX_TDC_TRIGSRC_START_SRC_OBSMUX3 \
                                0x0000000C  // Selects OBSMUX3 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO0 \
                                0x0000000D  // Selects AIODIO0 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO1 \
                                0x0000000E  // Selects AIODIO1 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO2 \
                                0x0000000F  // Selects AIODIO2 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO3 \
                                0x00000010  // Selects AIODIO3 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO4 \
                                0x00000011  // Selects AIODIO4 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO5 \
                                0x00000012  // Selects AIODIO5 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO6 \
                                0x00000013  // Selects AIODIO6 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO7 \
                                0x00000014  // Selects AIODIO7 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO8 \
                                0x00000015  // Selects AIODIO8 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO9 \
                                0x00000016  // Selects AIODIO9 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO10 \
                                0x00000017  // Selects AIODIO10 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO11 \
                                0x00000018  // Selects AIODIO11 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO12 \
                                0x00000019  // Selects AIODIO12 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO13 \
                                0x0000001A  // Selects AIODIO13 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO14 \
                                0x0000001B  // Selects AIODIO14 
#define AUX_TDC_TRIGSRC_START_SRC_AIODIO15 \
                                0x0000001C  // Selects AIODIO15 
#define AUX_TDC_TRIGSRC_START_SRC_ACLK_REF \
                                0x0000001D  // Selects ACLK_REF 
#define AUX_TDC_TRIGSRC_START_SRC_MCU_EV \
                                0x0000001E  // Selects MCU_EVENT 
#define AUX_TDC_TRIGSRC_START_SRC_TDC_PRE \
                                0x0000001F  // Selects TDC_PRESCALER 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_TDC_O_TRIGCNT register.
//
//*****************************************************************************
#define AUX_TDC_TRIGCNT_CNT_M   0x000000FF  // Remaining #stop events that 
                                            // will be ignored. Writing to this 
                                            // register updates the value. NB 
                                            // must not be changed if state is 
                                            // not IDLE 
#define AUX_TDC_TRIGCNT_CNT_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_TDC_O_TRIGCNTLOAD register.
//
//*****************************************************************************
#define AUX_TDC_TRIGCNTLOAD_CNT_M \
                                0x0000FFFF  // Stop Event Ignore field. 
                                            // Selects the number of stopevents 
                                            // that will be ignored by the TDC. 
                                            // This can be used to measure 
                                            // multiple periods of a clock 
                                            // signal. When the stopcounter is 
                                            // enabled the first #SEI-1 stop 
                                            // events is ignored after which 
                                            // the TDC will stop measurement on 
                                            // event #SEI NB! Both values 0 and 
                                            // 1 will make the TDC stop on the 
                                            // first event after the start 
                                            // event NB must not be changed if 
                                            // state is not IDLE 

#define AUX_TDC_TRIGCNTLOAD_CNT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_TDC_O_TRIGCNTCFG register.
//
//*****************************************************************************
#define AUX_TDC_TRIGCNTCFG_EN   0x00000001  // Stop counter enable 0: Stop 
                                            // Counter is disabled 1: Stop 
                                            // Counter is enabled 
#define AUX_TDC_TRIGCNTCFG_EN_M 0x00000001
#define AUX_TDC_TRIGCNTCFG_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_TDC_O_PRECTL register.
//
//*****************************************************************************
#define AUX_TDC_PRECTL_RESET_N  0x00000080  // Prescaler reset control 0: 
                                            // Prescaler is held in reset 1: 
                                            // Prescaler is not held in reset 
#define AUX_TDC_PRECTL_RESET_N_M \
                                0x00000080
#define AUX_TDC_PRECTL_RESET_N_S 7
#define AUX_TDC_PRECTL_RATIO    0x00000040  // Prescaler ratio. 
#define AUX_TDC_PRECTL_RATIO_M  0x00000040
#define AUX_TDC_PRECTL_RATIO_S  6
#define AUX_TDC_PRECTL_RATIO_DIV16 \
                                0x00000000  // Prescaler divides by 16 
#define AUX_TDC_PRECTL_RATIO_DIV64 \
                                0x00000040  // Prescaler divides by 64 
#define AUX_TDC_PRECTL_SRC_M    0x0000001F  // Selects event for prescaler to 
                                            // use as input NB only change when 
                                            // prescaler is in reset 
#define AUX_TDC_PRECTL_SRC_S    0
#define AUX_TDC_PRECTL_SRC_AON_WUC \
                                0x00000000  // Selects AON_WUC 
#define AUX_TDC_PRECTL_SRC_SOC_COMPA \
                                0x00000001  // Selects SOC_COMPA 
#define AUX_TDC_PRECTL_SRC_SOC_COMPB \
                                0x00000002  // Selects SOC_COMPB 
#define AUX_TDC_PRECTL_SRC_CS_RESET \
                                0x00000003  // Selects CS_RESET 
#define AUX_TDC_PRECTL_SRC_TIMER0_EV \
                                0x00000004  // Selects TIMER0_EVENT 
#define AUX_TDC_PRECTL_SRC_TIMER1_EV \
                                0x00000005  // Selects TIMER1_EVENT 
#define AUX_TDC_PRECTL_SRC_SMPH_AUTOTAKE_DONE \
                                0x00000006  // Selects SMPH_AUTOTAKE_DONE 
#define AUX_TDC_PRECTL_SRC_ADC_DONE \
                                0x00000007  // Selects ADC_DONE 
#define AUX_TDC_PRECTL_SRC_ADC_FIFO_ALMOST_FULL \
                                0x00000008  // Selects ADCFIFO_ALMOST_FULL 
#define AUX_TDC_PRECTL_SRC_OBSMUX0 \
                                0x00000009  // Selects OBSMUX0 
#define AUX_TDC_PRECTL_SRC_OBSMUX1 \
                                0x0000000A  // Selects OBSMUX1 
#define AUX_TDC_PRECTL_SRC_OBSMUX2 \
                                0x0000000B  // Selects OBSMUX2 
#define AUX_TDC_PRECTL_SRC_OBSMUX3 \
                                0x0000000C  // Selects OBSMUX3 
#define AUX_TDC_PRECTL_SRC_AIODIO0 \
                                0x0000000D  // Selects AIODIO0 
#define AUX_TDC_PRECTL_SRC_AIODIO1 \
                                0x0000000E  // Selects AIODIO1 
#define AUX_TDC_PRECTL_SRC_AIODIO2 \
                                0x0000000F  // Selects AIODIO2 
#define AUX_TDC_PRECTL_SRC_AIODIO3 \
                                0x00000010  // Selects AIODIO3 
#define AUX_TDC_PRECTL_SRC_AIODIO4 \
                                0x00000011  // Selects AIODIO4 
#define AUX_TDC_PRECTL_SRC_AIODIO5 \
                                0x00000012  // Selects AIODIO5 
#define AUX_TDC_PRECTL_SRC_AIODIO6 \
                                0x00000013  // Selects AIODIO6 
#define AUX_TDC_PRECTL_SRC_AIODIO7 \
                                0x00000014  // Selects AIODIO7 
#define AUX_TDC_PRECTL_SRC_AIODIO8 \
                                0x00000015  // Selects AIODIO8 
#define AUX_TDC_PRECTL_SRC_AIODIO9 \
                                0x00000016  // Selects AIODIO9 
#define AUX_TDC_PRECTL_SRC_AIODIO10 \
                                0x00000017  // Selects AIODIO10 
#define AUX_TDC_PRECTL_SRC_AIODIO11 \
                                0x00000018  // Selects AIODIO11 
#define AUX_TDC_PRECTL_SRC_AIODIO12 \
                                0x00000019  // Selects AIODIO12 
#define AUX_TDC_PRECTL_SRC_AIODIO13 \
                                0x0000001A  // Selects AIODIO13 
#define AUX_TDC_PRECTL_SRC_AIODIO14 \
                                0x0000001B  // Selects AIODIO14 
#define AUX_TDC_PRECTL_SRC_AIODIO15 \
                                0x0000001C  // Selects AIODIO15 
#define AUX_TDC_PRECTL_SRC_ACLK_REF \
                                0x0000001D  // Selects ACLK_REF 
#define AUX_TDC_PRECTL_SRC_MCU_EV \
                                0x0000001E  // Selects MCU_EVENT 
#define AUX_TDC_PRECTL_SRC_ADC_IRQ \
                                0x0000001F  // Selects ADC_IRQ 


#endif // __HW_AUX_TDC_H__

