
/******************************************************************************
*  Filename:       hw_aux_soc.h
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
#ifndef __HW_AUX_SOC_H__
#define __HW_AUX_SOC_H__

//*****************************************************************************
//
// The following are defines for the AUX_SOC register offsets.
//
//*****************************************************************************
#define AUX_SOC_O_ADCCTL        0x00000010  // SOC ADC control register 
#define AUX_SOC_O_ADCFIFOSTAT   0x00000014  // ADC fifo status register 
#define AUX_SOC_O_ADCFIFO       0x00000018  // ADC fifo register 
#define AUX_SOC_O_ADCTRIG       0x0000001C  // Trigger for ADC 
#define AUX_SOC_O_ISRCCTL       0x00000020  // Current source control register 
#define AUX_SOC_O_ADCDBG0       0x00000024  // Debug register SOC ADC 
#define AUX_SOC_O_ADCDBG1       0x00000028  // Debug register SOC ADC 
#define AUX_SOC_O_ADCDBG2       0x0000002C  // Debug register SOC ADC 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SOC_O_ADCCTL register.
//
//*****************************************************************************
#define AUX_SOC_ADCCTL_START_POL \
                                0x00002000  // Select polarity of start event. 

#define AUX_SOC_ADCCTL_START_POL_M \
                                0x00002000
#define AUX_SOC_ADCCTL_START_POL_S 13
#define AUX_SOC_ADCCTL_START_POL_RISE \
                                0x00000000  // Start on rising edge of event 
                                            // line 
#define AUX_SOC_ADCCTL_START_POL_FALL \
                                0x00002000  // Start on falling edge of event 
                                            // line 
#define AUX_SOC_ADCCTL_START_SRC_M \
                                0x00001F00  // Select source of the ADC start 
                                            // signal. 

#define AUX_SOC_ADCCTL_START_SRC_S 8
#define AUX_SOC_ADCCTL_START_SRC_AON_RTC_EV \
                                0x00000000  // Selects AON_WU_EVENT as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_SOC_COMPA \
                                0x00000100  // Selects SOC_COMPA as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_SOC_COMPB \
                                0x00000200  // Selects SOC_COMPB as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_TDC_DONE \
                                0x00000300  // Selects TDC_DONE as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_TIMER0_EV \
                                0x00000400  // Selects TIMER0_EVENT as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_TIMER1_EV \
                                0x00000500  // Selects TIMER1_EVENT as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_SMPH_AUTOTAKE_DONE \
                                0x00000600  // Selects SMPH_AUTOTAKE_DONE as 
                                            // start signal. 
#define AUX_SOC_ADCCTL_START_SRC_ADC_DONE \
                                0x00000700  // Selects ADC_DONE as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_ADC_FIFO_ALMOST_FULL \
                                0x00000800  // Selects ADCFIFO_ALMOST_FULL as 
                                            // start signal. 
#define AUX_SOC_ADCCTL_START_SRC_AON_SW \
                                0x00000B00  // Selects AON_SW as start signal. 
#define AUX_SOC_ADCCTL_START_SRC_AON_PROG_WU0 \
                                0x00000C00  // Selects AON_PRG as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO0 \
                                0x00000D00  // Selects AIODIO0 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO1 \
                                0x00000E00  // Selects AIODIO1 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO2 \
                                0x00000F00  // Selects AIODIO2 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO3 \
                                0x00001000  // Selects AIODIO3 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO4 \
                                0x00001100  // Selects AIODIO4 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO5 \
                                0x00001200  // Selects AIODIO5 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO6 \
                                0x00001300  // Selects AIODIO6 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO7 \
                                0x00001400  // Selects AIODIO7 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO8 \
                                0x00001500  // Selects AIODIO8 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO9 \
                                0x00001600  // Selects AIODIO9 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO10 \
                                0x00001700  // Selects AIODIO10 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO11 \
                                0x00001800  // Selects AIODIO11 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO12 \
                                0x00001900  // Selects AIODIO12 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO13 \
                                0x00001A00  // Selects AIODIO13 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO14 \
                                0x00001B00  // Selects AIODIO14 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_AIODIO15 \
                                0x00001C00  // Selects AIODIO15 as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_ACLK_REF \
                                0x00001D00  // Selects ACLK_REF as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_MCU_EV \
                                0x00001E00  // Selects MCU_EVENT as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_START_SRC_ADC_IRQ \
                                0x00001F00  // Selects ADC_IRQ as start 
                                            // signal. 
#define AUX_SOC_ADCCTL_CMD_M    0x00000003  // ADC Interface control register. 
#define AUX_SOC_ADCCTL_CMD_S    0
#define AUX_SOC_ADCCTL_CMD_DIS  0x00000000  // ADC Interface disabled 
#define AUX_SOC_ADCCTL_CMD_EN   0x00000001  // ADC Interface enabled 
#define AUX_SOC_ADCCTL_CMD_FLUSH \
                                0x00000003  // ADC FIFO Flush. Note that CTRL 
                                            // needs to be set to 'EN' again 
                                            // for fifo to be functional. A 
                                            // flush takes a couple of clock 
                                            // periods on the AUX clock to 
                                            // finish. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SOC_O_ADCFIFOSTAT register.
//
//*****************************************************************************
#define AUX_SOC_ADCFIFOSTAT_OVERFLOW \
                                0x00000010  // FIFO Overfow flag. 0: FIFO has 
                                            // not overflowed. 1: FIFO has 
                                            // overflowed, this flag is sticky 
                                            // until fifo is flushed. 

#define AUX_SOC_ADCFIFOSTAT_OVERFLOW_M \
                                0x00000010
#define AUX_SOC_ADCFIFOSTAT_OVERFLOW_S 4
#define AUX_SOC_ADCFIFOSTAT_UNDERFLOW \
                                0x00000008  // FIFO Underflow flag. 0: FIFO 
                                            // has not underflowed 1: FIFO has 
                                            // underflowed, this flag is sticky 
                                            // until the fifo is flushed 

#define AUX_SOC_ADCFIFOSTAT_UNDERFLOW_M \
                                0x00000008
#define AUX_SOC_ADCFIFOSTAT_UNDERFLOW_S 3
#define AUX_SOC_ADCFIFOSTAT_FULL \
                                0x00000004  // FIFO full flag. 0: FIFO is not 
                                            // full, ie there is less than 4 
                                            // elements in the FIFO. 1: FIFO is 
                                            // full,- ie there is 4 elements in 
                                            // the FIFO 

#define AUX_SOC_ADCFIFOSTAT_FULL_M \
                                0x00000004
#define AUX_SOC_ADCFIFOSTAT_FULL_S 2
#define AUX_SOC_ADCFIFOSTAT_ALMOST_FULL \
                                0x00000002  // FIFO Almost full flag. 0: There 
                                            // is less than 3 elements in the 
                                            // FIFO, or the FIFO is full in 
                                            // which case the FULL flag is 
                                            // asserted 1: There are 3 elements 
                                            // in the FIFO, ie there is room 
                                            // for one more element in the 
                                            // FIFO. 

#define AUX_SOC_ADCFIFOSTAT_ALMOST_FULL_M \
                                0x00000002
#define AUX_SOC_ADCFIFOSTAT_ALMOST_FULL_S 1
#define AUX_SOC_ADCFIFOSTAT_EMPTY \
                                0x00000001  // FIFO Empty flag. 0: There is 
                                            // data in the FIFO. 1: There are 
                                            // no data in the FIFO. 

#define AUX_SOC_ADCFIFOSTAT_EMPTY_M \
                                0x00000001
#define AUX_SOC_ADCFIFOSTAT_EMPTY_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SOC_O_ADCFIFO register.
//
//*****************************************************************************
#define AUX_SOC_ADCFIFO_DATA_M  0x00000FFF  // When read a sample is popped 
                                            // from the fifo. When written the 
                                            // written data is put in the fifo 
#define AUX_SOC_ADCFIFO_DATA_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SOC_O_ADCTRIG register.
//
//*****************************************************************************
#define AUX_SOC_ADCTRIG_START   0x00000001  // A write to this register will 
                                            // trigger an ADC conversion. If 
                                            // the corresponding event selected 
                                            // to trigger conversions in 
                                            // ADCCTRL.START_SRC and 
                                            // ADCCTRL.START_POL is active, a 
                                            // write will not generate a 
                                            // trigger. To be sure that all 
                                            // writes generate triggers one 
                                            // should set the ADCCTRL.START_SRC 
                                            // and ADCCTRL.START_POL to a 
                                            // setting that does not trigger 
                                            // conversion from the event lines. 
                                            // (E.g set it to a unused 
                                            // comparator) 
#define AUX_SOC_ADCTRIG_START_M 0x00000001
#define AUX_SOC_ADCTRIG_START_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SOC_O_ISRCCTL register.
//
//*****************************************************************************
#define AUX_SOC_ISRCCTL_RESET_N 0x00000001  // Current source control 0: 
                                            // Current source is clamped 1: 
                                            // Current source is 
                                            // active/operating 
#define AUX_SOC_ISRCCTL_RESET_N_M \
                                0x00000001
#define AUX_SOC_ISRCCTL_RESET_N_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SOC_O_ADCDBG0 register.
//
//*****************************************************************************
#define AUX_SOC_ADCDBG0_SAR_M   0x00000FFF  // Internal register. 
#define AUX_SOC_ADCDBG0_SAR_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SOC_O_ADCDBG1 register.
//
//*****************************************************************************
#define AUX_SOC_ADCDBG1_CONV    0x00000008  // Internal register. 
#define AUX_SOC_ADCDBG1_CONV_M  0x00000008
#define AUX_SOC_ADCDBG1_CONV_S  3
#define AUX_SOC_ADCDBG1_CONV_GATING \
                                0x00000004  // Internal register. 

#define AUX_SOC_ADCDBG1_CONV_GATING_M \
                                0x00000004
#define AUX_SOC_ADCDBG1_CONV_GATING_S 2
#define AUX_SOC_ADCDBG1_COMP_LATCH \
                                0x00000002  // Internal register. 

#define AUX_SOC_ADCDBG1_COMP_LATCH_M \
                                0x00000002
#define AUX_SOC_ADCDBG1_COMP_LATCH_S 1
#define AUX_SOC_ADCDBG1_COMP_RESET \
                                0x00000001  // Internal register. 

#define AUX_SOC_ADCDBG1_COMP_RESET_M \
                                0x00000001
#define AUX_SOC_ADCDBG1_COMP_RESET_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SOC_O_ADCDBG2 register.
//
//*****************************************************************************
#define AUX_SOC_ADCDBG2_COMP    0x00000001  // Internal register. 
#define AUX_SOC_ADCDBG2_COMP_M  0x00000001
#define AUX_SOC_ADCDBG2_COMP_S  0


#endif // __HW_AUX_SOC_H__

