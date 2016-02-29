
/******************************************************************************
*  Filename:       hw_aux_evctl.h
*  Revised:        $Date$
*  Revision:       $Revision$
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
#ifndef __HW_AUX_EVCTL_H__
#define __HW_AUX_EVCTL_H__

//*****************************************************************************
//
// The following are defines for the AUX_EVCTL register offsets.
//
//*****************************************************************************
#define AUX_EVCTL_O_VECCFG0     0x00000000  // Configuration for AUX_CTRL 
                                            // event vectors 1 and 0 
#define AUX_EVCTL_O_VECCFG1     0x00000004  // Configuration for AUX_CTRL 
                                            // event vectors 3 and 2 
#define AUX_EVCTL_O_SCEWEVSEL   0x00000008  // Configuration for C3PO event 7 
#define AUX_EVCTL_O_EVTOAONFLAGS \
                                0x0000000C  // Event flags for events to AON 

#define AUX_EVCTL_O_EVTOAONPOL  0x00000010  // Polarity of the events 
                                            // generating events to AON 
#define AUX_EVCTL_O_DMACTL      0x00000014  // DMA configuration register 
#define AUX_EVCTL_O_SWEVSET     0x00000018  // SW generated events from AUX 
#define AUX_EVCTL_O_EVSTAT0     0x0000001C  // Current value of synchronized 
                                            // events 15:0 
#define AUX_EVCTL_O_EVSTAT1     0x00000020  // Current value of synchronized 
                                            // events 31:16 
#define AUX_EVCTL_O_EVTOMCUPOL  0x00000024  // Polarity of the events 
                                            // generating events to mcu 
#define AUX_EVCTL_O_EVTOMCUFLAGS \
                                0x00000028  // Event flag for AON_WU_EV to 
                                            // MCU. This event is and OR of the 
                                            // AON_RTC, AON_PRG and AON_SW 
                                            // events. The Combined WU event is 
                                            // set if any of the three events 
                                            // are set. These RAW events can be 
                                            // read in AUX_WUC:WUEVFLAGS, and 
                                            // cleared using AUX_WUC:WUEVCLR. 
                                            // After sources are cleared this 
                                            // flag can be cleared 0: Clear 1: 
                                            // No effect 

#define AUX_EVCTL_O_COMBEVTOMCUMASK \
                                0x0000002C  // Event enable for events to MCU 

#define AUX_EVCTL_O_DMASWREQ    0x00000030  // Software dma request register 
#define AUX_EVCTL_O_VECFLAGS    0x00000034  // Event flags for vectoring 
                                            // events to AUX_CTRL 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_VECCFG0 register.
//
//*****************************************************************************
#define AUX_EVCTL_VECCFG0_VEC1_POL \
                                0x00004000  // Polarity of Vector 1 event 

#define AUX_EVCTL_VECCFG0_VEC1_POL_M \
                                0x00004000
#define AUX_EVCTL_VECCFG0_VEC1_POL_S 14
#define AUX_EVCTL_VECCFG0_VEC1_POL_RISE \
                                0x00000000  // Selects rising edge 
#define AUX_EVCTL_VECCFG0_VEC1_POL_FALL \
                                0x00004000  // Selects falling edge 
#define AUX_EVCTL_VECCFG0_VEC1_EN \
                                0x00002000  // Enable detection of vector 1 
                                            // event 

#define AUX_EVCTL_VECCFG0_VEC1_EN_M \
                                0x00002000
#define AUX_EVCTL_VECCFG0_VEC1_EN_S 13
#define AUX_EVCTL_VECCFG0_VEC1_EN_DIS \
                                0x00000000  // Event detection is disabled 
#define AUX_EVCTL_VECCFG0_VEC1_EN_EN \
                                0x00002000  // An event selected by VEC1_EVENT 
                                            // with polarity from POL1 triggers 
                                            // a jump to vector # 1 when C3PO 
                                            // is in sleep 
#define AUX_EVCTL_VECCFG0_VEC1_EV_M \
                                0x00001F00  // Selection of event for vector 3 

#define AUX_EVCTL_VECCFG0_VEC1_EV_S 8
#define AUX_EVCTL_VECCFG0_VEC1_EV_AON_WUC \
                                0x00000000  // Selects AON_WUC event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_SOC_COMPA \
                                0x00000100  // Selects SOC_COMPA event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_SOC_COMPB \
                                0x00000200  // Selects SOC_COMPB event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_TDC_DONE \
                                0x00000300  // Selects TDC_DONE event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_TIMER0 \
                                0x00000400  // Selects TIMER0 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_TIMER1 \
                                0x00000500  // Selects TIMER1 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_SMPH_AUTOTAKE_DONE \
                                0x00000600  // Selects SMPH_AUTOTAKE_DONE 
                                            // event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_ADC_DONE \
                                0x00000700  // Selects ADC_DONE event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_ADC_FIFO_ALMOST_FULL \
                                0x00000800  // Selects ADCFIFO_ALMOST_FULL 
                                            // event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_OBSMUX0 \
                                0x00000900  // Selects OBSMUX0 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_OBSMUX1 \
                                0x00000A00  // Selects OBSMUX1 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_OBSMUX2 \
                                0x00000B00  // Selects OBSMUX2 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_OBSMUX3 \
                                0x00000C00  // Selects OBSMUX3 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO0 \
                                0x00000D00  // Selects AIODIO0 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO1 \
                                0x00000E00  // Selects AIODIO1 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO2 \
                                0x00000F00  // Selects AIODIO2 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO3 \
                                0x00001000  // Selects AIODIO3 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO4 \
                                0x00001100  // Selects AIODIO4 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO5 \
                                0x00001200  // Selects AIODIO5 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO6 \
                                0x00001300  // Selects AIODIO6 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO7 \
                                0x00001400  // Selects AIODIO7 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO8 \
                                0x00001500  // Selects AIODIO8 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO9 \
                                0x00001600  // Selects AIODIO9 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO10 \
                                0x00001700  // Selects AIODIO10 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO11 \
                                0x00001800  // Selects AIODIO11 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO12 \
                                0x00001900  // Selects AIODIO12 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO13 \
                                0x00001A00  // Selects AIODIO13 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO14 \
                                0x00001B00  // Selects AIODIO14 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_AIODIO15 \
                                0x00001C00  // Selects AIODIO15 event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_ACLK_REF \
                                0x00001D00  // Selects ACLK_REF event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_MCU_EV \
                                0x00001E00  // Selects MCU event 
#define AUX_EVCTL_VECCFG0_VEC1_EV_ADC_IRQ \
                                0x00001F00  // Selects ADC_IRQ event 
#define AUX_EVCTL_VECCFG0_VEC0_POL \
                                0x00000040  // Polarity of Vector 0 event 

#define AUX_EVCTL_VECCFG0_VEC0_POL_M \
                                0x00000040
#define AUX_EVCTL_VECCFG0_VEC0_POL_S 6
#define AUX_EVCTL_VECCFG0_VEC0_POL_RISE \
                                0x00000000  // Selects rising edge 
#define AUX_EVCTL_VECCFG0_VEC0_POL_FALL \
                                0x00000040  // Selects falling edge 
#define AUX_EVCTL_VECCFG0_VEC0_EN \
                                0x00000020  // Enable detection of vector 0 
                                            // event 

#define AUX_EVCTL_VECCFG0_VEC0_EN_M \
                                0x00000020
#define AUX_EVCTL_VECCFG0_VEC0_EN_S 5
#define AUX_EVCTL_VECCFG0_VEC0_EN_DIS \
                                0x00000000  // Event detection is disabled 
#define AUX_EVCTL_VECCFG0_VEC0_EN_EN \
                                0x00000020  // An event selected by VEC0_EVENT 
                                            // with polarity from POL0 triggers 
                                            // a jump to vector #0 when C3PO is 
                                            // in sleep 
#define AUX_EVCTL_VECCFG0_VEC0_EV_M \
                                0x0000001F  // Selection of event for vector 0 

#define AUX_EVCTL_VECCFG0_VEC0_EV_S 0
#define AUX_EVCTL_VECCFG0_VEC0_EV_AON_WUC \
                                0x00000000  // Selects AON_WUC event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_SOC_COMPA \
                                0x00000001  // Selects SOC_COMPA event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_SOC_COMPB \
                                0x00000002  // Selects SOC_COMPB event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_TDC_DONE \
                                0x00000003  // Selects TDC_DONE event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_TIMER0 \
                                0x00000004  // Selects TIMER0 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_TIMER1 \
                                0x00000005  // Selects TIMER1 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_SMPH_AUTOTAKE_DONE \
                                0x00000006  // Selects SMPH_AUTOTAKE_DONE 
                                            // event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_ADC_DONE \
                                0x00000007  // Selects ADC_DONE event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_ADC_FIFO_ALMOST_FULL \
                                0x00000008  // Selects ADCFIFO_ALMOST_FULL 
                                            // event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_OBSMUX0 \
                                0x00000009  // Selects OBSMUX0 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_OBSMUX1 \
                                0x0000000A  // Selects OBSMUX1 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_OBSMUX2 \
                                0x0000000B  // Selects OBSMUX2 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_OBSMUX3 \
                                0x0000000C  // Selects OBSMUX3 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO0 \
                                0x0000000D  // Selects AIODIO0 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO1 \
                                0x0000000E  // Selects AIODIO1 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO2 \
                                0x0000000F  // Selects AIODIO2 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO3 \
                                0x00000010  // Selects AIODIO3 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO4 \
                                0x00000011  // Selects AIODIO4 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO5 \
                                0x00000012  // Selects AIODIO5 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO6 \
                                0x00000013  // Selects AIODIO6 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO7 \
                                0x00000014  // Selects AIODIO7 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO8 \
                                0x00000015  // Selects AIODIO8 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO9 \
                                0x00000016  // Selects AIODIO9 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO10 \
                                0x00000017  // Selects AIODIO10 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO11 \
                                0x00000018  // Selects AIODIO11 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO12 \
                                0x00000019  // Selects AIODIO12 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO13 \
                                0x0000001A  // Selects AIODIO13 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO14 \
                                0x0000001B  // Selects AIODIO14 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_AIODIO15 \
                                0x0000001C  // Selects AIODIO15 event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_ACLK_REF \
                                0x0000001D  // Selects ACLK_REF event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_MCU_EV \
                                0x0000001E  // Selects MCU event 
#define AUX_EVCTL_VECCFG0_VEC0_EV_ADC_IRQ \
                                0x0000001F  // Selects ADC_IRQ event 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_VECCFG1 register.
//
//*****************************************************************************
#define AUX_EVCTL_VECCFG1_VEC3_POL \
                                0x00004000  // Polarity of Vector 3 event 

#define AUX_EVCTL_VECCFG1_VEC3_POL_M \
                                0x00004000
#define AUX_EVCTL_VECCFG1_VEC3_POL_S 14
#define AUX_EVCTL_VECCFG1_VEC3_POL_RISE \
                                0x00000000  // Selects rising edge 
#define AUX_EVCTL_VECCFG1_VEC3_POL_FALL \
                                0x00004000  // Selects falling edge 
#define AUX_EVCTL_VECCFG1_VEC3_EN \
                                0x00002000  // Enable detection of vector 3 
                                            // event 

#define AUX_EVCTL_VECCFG1_VEC3_EN_M \
                                0x00002000
#define AUX_EVCTL_VECCFG1_VEC3_EN_S 13
#define AUX_EVCTL_VECCFG1_VEC3_EN_DIS \
                                0x00000000  // Event detection is disabled 
#define AUX_EVCTL_VECCFG1_VEC3_EN_EN \
                                0x00002000  // An event selected by VEC3_EVENT 
                                            // with polarity from POL3 triggers 
                                            // a jump to vector # 3 when C3PO 
                                            // is in sleep 
#define AUX_EVCTL_VECCFG1_VEC3_EV_M \
                                0x00001F00  // Selection of event for vector 3 

#define AUX_EVCTL_VECCFG1_VEC3_EV_S 8
#define AUX_EVCTL_VECCFG1_VEC3_EV_AON_WUC \
                                0x00000000  // Selects AON_WUC event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_SOC_COMPA \
                                0x00000100  // Selects SOC_COMPA event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_SOC_COMPB \
                                0x00000200  // Selects SOC_COMPB event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_TDC_DONE \
                                0x00000300  // Selects TDC_DONE event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_TIMER0 \
                                0x00000400  // Selects TIMER0 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_TIMER1 \
                                0x00000500  // Selects TIMER1 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_SMPH_AUTOTAKE_DONE \
                                0x00000600  // Selects SMPH_AUTOTAKE_DONE 
                                            // event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_ADC_DONE \
                                0x00000700  // Selects ADC_DONE event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_ADC_FIFO_ALMOST_FULL \
                                0x00000800  // Selects ADCFIFO_ALMOST_FULL 
                                            // event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_OBSMUX0 \
                                0x00000900  // Selects OBSMUX0 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_OBSMUX1 \
                                0x00000A00  // Selects OBSMUX1 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_OBSMUX2 \
                                0x00000B00  // Selects OBSMUX2 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_OBSMUX3 \
                                0x00000C00  // Selects OBSMUX3 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO0 \
                                0x00000D00  // Selects AIODIO0 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO1 \
                                0x00000E00  // Selects AIODIO1 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO2 \
                                0x00000F00  // Selects AIODIO2 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO3 \
                                0x00001000  // Selects AIODIO3 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO4 \
                                0x00001100  // Selects AIODIO4 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO5 \
                                0x00001200  // Selects AIODIO5 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO6 \
                                0x00001300  // Selects AIODIO6 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO7 \
                                0x00001400  // Selects AIODIO7 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO8 \
                                0x00001500  // Selects AIODIO8 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO9 \
                                0x00001600  // Selects AIODIO9 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO10 \
                                0x00001700  // Selects AIODIO10 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO11 \
                                0x00001800  // Selects AIODIO11 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO12 \
                                0x00001900  // Selects AIODIO12 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO13 \
                                0x00001A00  // Selects AIODIO13 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO14 \
                                0x00001B00  // Selects AIODIO14 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_AIODIO15 \
                                0x00001C00  // Selects AIODIO15 event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_ACLK_REF \
                                0x00001D00  // Selects ACLK_REF event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_MCU_EV \
                                0x00001E00  // Selects MCU event 
#define AUX_EVCTL_VECCFG1_VEC3_EV_ADC_IRQ \
                                0x00001F00  // Selects ADC_IRQ event 
#define AUX_EVCTL_VECCFG1_VEC2_POL \
                                0x00000040  // Polarity of Vector 2 event 

#define AUX_EVCTL_VECCFG1_VEC2_POL_M \
                                0x00000040
#define AUX_EVCTL_VECCFG1_VEC2_POL_S 6
#define AUX_EVCTL_VECCFG1_VEC2_POL_RISE \
                                0x00000000  // Selects rising edge 
#define AUX_EVCTL_VECCFG1_VEC2_POL_FALL \
                                0x00000040  // Selects falling edge 
#define AUX_EVCTL_VECCFG1_VEC2_EN \
                                0x00000020  // Enable detection of vector 2 
                                            // event 

#define AUX_EVCTL_VECCFG1_VEC2_EN_M \
                                0x00000020
#define AUX_EVCTL_VECCFG1_VEC2_EN_S 5
#define AUX_EVCTL_VECCFG1_VEC2_EN_DIS \
                                0x00000000  // Event detection is disabled 
#define AUX_EVCTL_VECCFG1_VEC2_EN_EN \
                                0x00000020  // An event selected by VEC2_EVENT 
                                            // with polarity from POL2 triggers 
                                            // a jump to vector # 2 when C3PO 
                                            // is in sleep 
#define AUX_EVCTL_VECCFG1_VEC2_EV_M \
                                0x0000001F  // Selection of event for vector 2 

#define AUX_EVCTL_VECCFG1_VEC2_EV_S 0
#define AUX_EVCTL_VECCFG1_VEC2_EV_AON_WUC \
                                0x00000000  // Selects AON_WUC event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_SOC_COMPA \
                                0x00000001  // Selects SOC_COMPA event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_SOC_COMPB \
                                0x00000002  // Selects SOC_COMPB event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_TDC_DONE \
                                0x00000003  // Selects TDC_DONE event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_TIMER0 \
                                0x00000004  // Selects TIMER0 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_TIMER1 \
                                0x00000005  // Selects TIMER1 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_SMPH_AUTOTAKE_DONE \
                                0x00000006  // Selects SMPH_AUTOTAKE_DONE 
                                            // event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_ADC_DONE \
                                0x00000007  // Selects ADC_DONE event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_ADC_FIFO_ALMOST_FULL \
                                0x00000008  // Selects ADCFIFO_ALMOST_FULL 
                                            // event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_OBSMUX0 \
                                0x00000009  // Selects OBSMUX0 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_OBSMUX1 \
                                0x0000000A  // Selects OBSMUX1 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_OBSMUX2 \
                                0x0000000B  // Selects OBSMUX2 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_OBSMUX3 \
                                0x0000000C  // Selects OBSMUX3 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO0 \
                                0x0000000D  // Selects AIODIO0 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO1 \
                                0x0000000E  // Selects AIODIO1 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO2 \
                                0x0000000F  // Selects AIODIO2 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO3 \
                                0x00000010  // Selects AIODIO3 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO4 \
                                0x00000011  // Selects AIODIO4 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO5 \
                                0x00000012  // Selects AIODIO5 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO6 \
                                0x00000013  // Selects AIODIO6 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO7 \
                                0x00000014  // Selects AIODIO7 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO8 \
                                0x00000015  // Selects AIODIO8 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO9 \
                                0x00000016  // Selects AIODIO9 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO10 \
                                0x00000017  // Selects AIODIO10 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO11 \
                                0x00000018  // Selects AIODIO11 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO12 \
                                0x00000019  // Selects AIODIO12 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO13 \
                                0x0000001A  // Selects AIODIO13 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO14 \
                                0x0000001B  // Selects AIODIO14 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_AIODIO15 \
                                0x0000001C  // Selects AIODIO15 event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_ACLK_REF \
                                0x0000001D  // Selects ACLK_REF event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_MCU_EV \
                                0x0000001E  // Selects MCU event 
#define AUX_EVCTL_VECCFG1_VEC2_EV_ADC_IRQ \
                                0x0000001F  // Selects ADC_IRQ event 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_SCEWEVSEL register.
//
//*****************************************************************************
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_M \
                                0x0000001F  // Selects which of the 32 aux 
                                            // events shall be mapped to 
                                            // AUX_CTRL event 7 

#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_S 0
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AON_WUC \
                                0x00000000  // Selects AON_WUC event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_SOC_COMPA \
                                0x00000001  // Selects SOC_COMPA event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_SOC_COMPB \
                                0x00000002  // Selects SOC_COMPB event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_TDC_DONE \
                                0x00000003  // Selects TDC_DONE event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_TIMER0 \
                                0x00000004  // Selects TIMER0 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_TIMER1 \
                                0x00000005  // Selects TIMER1 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_SMPH_AUTOTAKE_DONE \
                                0x00000006  // Selects SMPH_AUTOTAKE_DONE 
                                            // event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_ADC_DONE \
                                0x00000007  // Selects ADC_DONE event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_ADC_FIFO_ALMOST_FULL \
                                0x00000008  // Selects ADCFIFO_ALMOST_FULL 
                                            // event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_OBSMUX0 \
                                0x00000009  // Selects OBSMUX0 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_OBSMUX1 \
                                0x0000000A  // Selects OBSMUX1 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_OBSMUX2 \
                                0x0000000B  // Selects OBSMUX2 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_OBSMUX3 \
                                0x0000000C  // Selects OBSMUX3 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO0 \
                                0x0000000D  // Selects AIODIO0 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO1 \
                                0x0000000E  // Selects AIODIO1 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO2 \
                                0x0000000F  // Selects AIODIO2 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO3 \
                                0x00000010  // Selects AIODIO3 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO4 \
                                0x00000011  // Selects AIODIO4 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO5 \
                                0x00000012  // Selects AIODIO5 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO6 \
                                0x00000013  // Selects AIODIO6 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO7 \
                                0x00000014  // Selects AIODIO7 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO8 \
                                0x00000015  // Selects AIODIO8 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO9 \
                                0x00000016  // Selects AIODIO9 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO10 \
                                0x00000017  // Selects AIODIO10 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO11 \
                                0x00000018  // Selects AIODIO11 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO12 \
                                0x00000019  // Selects AIODIO12 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO13 \
                                0x0000001A  // Selects AIODIO13 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO14 \
                                0x0000001B  // Selects AIODIO14 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_AIODIO15 \
                                0x0000001C  // Selects AIODIO15 event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_ACLK_REF \
                                0x0000001D  // Selects ACLK_REF event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_MCU_EV \
                                0x0000001E  // Selects MCU event 
#define AUX_EVCTL_SCEWEVSEL_WEV7_EV_ADC_IRQ \
                                0x0000001F  // Selects ADC_IRQ event 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_EVTOAONFLAGS register.
//
//*****************************************************************************
#define AUX_EVCTL_EVTOAONFLAGS_TIMER1_EV \
                                0x00000100  // Event flag for TIMER1_EVENT 
                                            // event. 0: Clears flag and sets 
                                            // the corresponding event line to 
                                            // AON low. 1: No effect Reading 
                                            // returns value of the flag 

#define AUX_EVCTL_EVTOAONFLAGS_TIMER1_EV_M \
                                0x00000100
#define AUX_EVCTL_EVTOAONFLAGS_TIMER1_EV_S 8
#define AUX_EVCTL_EVTOAONFLAGS_TIMER0_EV \
                                0x00000080  // Event flag for TIMER0_EVENT 
                                            // event. 0: Clears flag and sets 
                                            // the corresponding event line to 
                                            // AON low. 1: No effect Reading 
                                            // returns value of the flag 

#define AUX_EVCTL_EVTOAONFLAGS_TIMER0_EV_M \
                                0x00000080
#define AUX_EVCTL_EVTOAONFLAGS_TIMER0_EV_S 7
#define AUX_EVCTL_EVTOAONFLAGS_TDC_DONE \
                                0x00000040  // Event flag for TDC_DONE event. 
                                            // 0: Clears flag and sets the 
                                            // corresponding event line to AON 
                                            // low. 1: No effect Reading 
                                            // returns value of the flag 

#define AUX_EVCTL_EVTOAONFLAGS_TDC_DONE_M \
                                0x00000040
#define AUX_EVCTL_EVTOAONFLAGS_TDC_DONE_S 6
#define AUX_EVCTL_EVTOAONFLAGS_ADC_DONE \
                                0x00000020  // Event flag for ADC_DONE event. 
                                            // 0: Clears flag and sets the 
                                            // corresponding event line to AON 
                                            // low. 1: No effect Reading 
                                            // returns value of the flag 

#define AUX_EVCTL_EVTOAONFLAGS_ADC_DONE_M \
                                0x00000020
#define AUX_EVCTL_EVTOAONFLAGS_ADC_DONE_S 5
#define AUX_EVCTL_EVTOAONFLAGS_SOC_COMPB \
                                0x00000010  // Event flag for SOC_COMPB event. 
                                            // 0: Clears flag and sets the 
                                            // corresponding event line to AON 
                                            // low. 1: No effect Reading 
                                            // returns value of the flag 

#define AUX_EVCTL_EVTOAONFLAGS_SOC_COMPB_M \
                                0x00000010
#define AUX_EVCTL_EVTOAONFLAGS_SOC_COMPB_S 4
#define AUX_EVCTL_EVTOAONFLAGS_SOC_COMPA \
                                0x00000008  // Event flag for SOC_COMPA event. 
                                            // 0: Clears flag and sets the 
                                            // corresponding event line to AON 
                                            // low. 1: No effect Reading 
                                            // returns value of the flag 

#define AUX_EVCTL_EVTOAONFLAGS_SOC_COMPA_M \
                                0x00000008
#define AUX_EVCTL_EVTOAONFLAGS_SOC_COMPA_S 3
#define AUX_EVCTL_EVTOAONFLAGS_SWEV2 \
                                0x00000004  // Event flag for RC2CL event. 0: 
                                            // Clears flag and sets the 
                                            // corresponding event line to AON 
                                            // low. 1: No effect Reading 
                                            // returns value of the flag 

#define AUX_EVCTL_EVTOAONFLAGS_SWEV2_M \
                                0x00000004
#define AUX_EVCTL_EVTOAONFLAGS_SWEV2_S 2
#define AUX_EVCTL_EVTOAONFLAGS_SWEV1 \
                                0x00000002  // Event flag for SW error event. 
                                            // 0: Clears flag and sets the 
                                            // corresponding event line to AON 
                                            // low. 1: No effect Reading 
                                            // returns value of the flag 

#define AUX_EVCTL_EVTOAONFLAGS_SWEV1_M \
                                0x00000002
#define AUX_EVCTL_EVTOAONFLAGS_SWEV1_S 1
#define AUX_EVCTL_EVTOAONFLAGS_SWEV0 \
                                0x00000001  // Event flag for state machine 
                                            // done event. 0: Clears flag and 
                                            // sets the corresponding event 
                                            // line to AON low. 1: No effect 
                                            // Reading returns value of the 
                                            // flag 

#define AUX_EVCTL_EVTOAONFLAGS_SWEV0_M \
                                0x00000001
#define AUX_EVCTL_EVTOAONFLAGS_SWEV0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_EVTOAONPOL register.
//
//*****************************************************************************
#define AUX_EVCTL_EVTOAONPOL_TIMER1_EV \
                                0x00000100  // Polarity of Timer1 Event 

#define AUX_EVCTL_EVTOAONPOL_TIMER1_EV_M \
                                0x00000100
#define AUX_EVCTL_EVTOAONPOL_TIMER1_EV_S 8
#define AUX_EVCTL_EVTOAONPOL_TIMER1_EV_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to AON 
#define AUX_EVCTL_EVTOAONPOL_TIMER1_EV_LOW \
                                0x00000100  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to AON 
#define AUX_EVCTL_EVTOAONPOL_TIMER0_EV \
                                0x00000080  // Polarity of Timer0 Event 

#define AUX_EVCTL_EVTOAONPOL_TIMER0_EV_M \
                                0x00000080
#define AUX_EVCTL_EVTOAONPOL_TIMER0_EV_S 7
#define AUX_EVCTL_EVTOAONPOL_TIMER0_EV_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to AON 
#define AUX_EVCTL_EVTOAONPOL_TIMER0_EV_LOW \
                                0x00000080  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to AON 
#define AUX_EVCTL_EVTOAONPOL_TDC_DONE \
                                0x00000040  // Polarity of TDC_DONE Event 

#define AUX_EVCTL_EVTOAONPOL_TDC_DONE_M \
                                0x00000040
#define AUX_EVCTL_EVTOAONPOL_TDC_DONE_S 6
#define AUX_EVCTL_EVTOAONPOL_TDC_DONE_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to AON 
#define AUX_EVCTL_EVTOAONPOL_TDC_DONE_LOW \
                                0x00000040  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to AON 
#define AUX_EVCTL_EVTOAONPOL_ADC_DONE \
                                0x00000020  // Polarity of ADC_DONE Event 

#define AUX_EVCTL_EVTOAONPOL_ADC_DONE_M \
                                0x00000020
#define AUX_EVCTL_EVTOAONPOL_ADC_DONE_S 5
#define AUX_EVCTL_EVTOAONPOL_ADC_DONE_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to AON 
#define AUX_EVCTL_EVTOAONPOL_ADC_DONE_LOW \
                                0x00000020  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to AON 
#define AUX_EVCTL_EVTOAONPOL_SOC_COMPB \
                                0x00000010  // Polarity of SOC_COMPB Event 

#define AUX_EVCTL_EVTOAONPOL_SOC_COMPB_M \
                                0x00000010
#define AUX_EVCTL_EVTOAONPOL_SOC_COMPB_S 4
#define AUX_EVCTL_EVTOAONPOL_SOC_COMPB_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to AON 
#define AUX_EVCTL_EVTOAONPOL_SOC_COMPB_LOW \
                                0x00000010  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to AON 
#define AUX_EVCTL_EVTOAONPOL_SOC_COMPA \
                                0x00000008  // Polarity of SOC_COMPA Event 

#define AUX_EVCTL_EVTOAONPOL_SOC_COMPA_M \
                                0x00000008
#define AUX_EVCTL_EVTOAONPOL_SOC_COMPA_S 3
#define AUX_EVCTL_EVTOAONPOL_SOC_COMPA_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to AON 
#define AUX_EVCTL_EVTOAONPOL_SOC_COMPA_LOW \
                                0x00000008  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to AON 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_DMACTL register.
//
//*****************************************************************************
#define AUX_EVCTL_DMACTL_REQ_MODE \
                                0x00000004  // DMA Request mode 

#define AUX_EVCTL_DMACTL_REQ_MODE_M \
                                0x00000004
#define AUX_EVCTL_DMACTL_REQ_MODE_S 2
#define AUX_EVCTL_DMACTL_REQ_MODE_BURST \
                                0x00000000  // AUX generates ADC DMA events on 
                                            // DMA_REQ pin 
#define AUX_EVCTL_DMACTL_REQ_MODE_SINGLE \
                                0x00000004  // AUX generates ADC_DMA events on 
                                            // DMA_SREQ pin 
#define AUX_EVCTL_DMACTL_EN     0x00000002  // 0: DMA interface is disabled 1: 
                                            // DMA interface is enabled 
#define AUX_EVCTL_DMACTL_EN_M   0x00000002
#define AUX_EVCTL_DMACTL_EN_S   1
#define AUX_EVCTL_DMACTL_SEL    0x00000001  // Selection of FIFO watermark 
                                            // level required to trigger an ADC 
                                            // DMA transfer 
#define AUX_EVCTL_DMACTL_SEL_M  0x00000001
#define AUX_EVCTL_DMACTL_SEL_S  0
#define AUX_EVCTL_DMACTL_SEL_FIFO_NOT_EMPTY \
                                0x00000000  // ADC DMA event will be generated 
                                            // when there are valid samples in 
                                            // the ADC FIFO 
#define AUX_EVCTL_DMACTL_SEL_FIFO_ALMOST_FULL \
                                0x00000001  // ADC DMA event will be generated 
                                            // when the ADC FIFO is almost full 
                                            // (3/4 full) 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_SWEVSET register.
//
//*****************************************************************************
#define AUX_EVCTL_SWEVSET_SWEV2 0x00000004  // SWEV2 Event 0: No effect. 1: 
                                            // Sets AON event line for SWEV2 
                                            // (event line #2) To read the 
                                            // status of the event line, read 
                                            // EVTOAONFLAGS 
#define AUX_EVCTL_SWEVSET_SWEV2_M \
                                0x00000004
#define AUX_EVCTL_SWEVSET_SWEV2_S 2
#define AUX_EVCTL_SWEVSET_SWEV1 0x00000002  // SWEV1 Event 0: No effect. 1: 
                                            // Sets AON event line for SWEV1 
                                            // (event line #1) To read the 
                                            // status of the event line, read 
                                            // EVTOAONFLAGS 
#define AUX_EVCTL_SWEVSET_SWEV1_M \
                                0x00000002
#define AUX_EVCTL_SWEVSET_SWEV1_S 1
#define AUX_EVCTL_SWEVSET_SWEV0 0x00000001  // SWEV0 Event 0: No effect. 1: 
                                            // Sets AON event line for SWEV0 
                                            // (event line #0) To read the 
                                            // status of the event line, read 
                                            // EVTOAONFLAGS 
#define AUX_EVCTL_SWEVSET_SWEV0_M \
                                0x00000001
#define AUX_EVCTL_SWEVSET_SWEV0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_EVSTAT0 register.
//
//*****************************************************************************
#define AUX_EVCTL_EVSTAT0_AIODIO2 \
                                0x00008000  // Current value of AIODIO2 event 
                                            // line 

#define AUX_EVCTL_EVSTAT0_AIODIO2_M \
                                0x00008000
#define AUX_EVCTL_EVSTAT0_AIODIO2_S 15
#define AUX_EVCTL_EVSTAT0_AIODIO1 \
                                0x00004000  // Current value of AIODIO1 event 
                                            // line 

#define AUX_EVCTL_EVSTAT0_AIODIO1_M \
                                0x00004000
#define AUX_EVCTL_EVSTAT0_AIODIO1_S 14
#define AUX_EVCTL_EVSTAT0_AIODIO0 \
                                0x00002000  // Current value of AIODIO0 event 
                                            // line 

#define AUX_EVCTL_EVSTAT0_AIODIO0_M \
                                0x00002000
#define AUX_EVCTL_EVSTAT0_AIODIO0_S 13
#define AUX_EVCTL_EVSTAT0_OBSMUX3 \
                                0x00001000  // Current value of OBSMUX3 event 
                                            // line 

#define AUX_EVCTL_EVSTAT0_OBSMUX3_M \
                                0x00001000
#define AUX_EVCTL_EVSTAT0_OBSMUX3_S 12
#define AUX_EVCTL_EVSTAT0_OBSMUX2 \
                                0x00000800  // Current value of OBSMUX2 event 
                                            // line 

#define AUX_EVCTL_EVSTAT0_OBSMUX2_M \
                                0x00000800
#define AUX_EVCTL_EVSTAT0_OBSMUX2_S 11
#define AUX_EVCTL_EVSTAT0_OBSMUX1 \
                                0x00000400  // Current value of OBSMUX1 event 
                                            // line 

#define AUX_EVCTL_EVSTAT0_OBSMUX1_M \
                                0x00000400
#define AUX_EVCTL_EVSTAT0_OBSMUX1_S 10
#define AUX_EVCTL_EVSTAT0_OBSMUX0 \
                                0x00000200  // Current value of OBSMUX0 event 
                                            // line 

#define AUX_EVCTL_EVSTAT0_OBSMUX0_M \
                                0x00000200
#define AUX_EVCTL_EVSTAT0_OBSMUX0_S 9
#define AUX_EVCTL_EVSTAT0_ADC_FIFO_ALMOST_FULL \
                                0x00000100  // Current value of 
                                            // ADCFIFO_ALMOST_FULL event line 

#define AUX_EVCTL_EVSTAT0_ADC_FIFO_ALMOST_FULL_M \
                                0x00000100
#define AUX_EVCTL_EVSTAT0_ADC_FIFO_ALMOST_FULL_S 8
#define AUX_EVCTL_EVSTAT0_ADC_DONE \
                                0x00000080  // Current value of ADC_DONE event 
                                            // line 

#define AUX_EVCTL_EVSTAT0_ADC_DONE_M \
                                0x00000080
#define AUX_EVCTL_EVSTAT0_ADC_DONE_S 7
#define AUX_EVCTL_EVSTAT0_SMPH_AUTOTAKE_DONE \
                                0x00000040  // Current value of SEMAPHORE 
                                            // event line 

#define AUX_EVCTL_EVSTAT0_SMPH_AUTOTAKE_DONE_M \
                                0x00000040
#define AUX_EVCTL_EVSTAT0_SMPH_AUTOTAKE_DONE_S 6
#define AUX_EVCTL_EVSTAT0_TIMER1_EV \
                                0x00000020  // Current value of TIMER1_EVENT 
                                            // event line 

#define AUX_EVCTL_EVSTAT0_TIMER1_EV_M \
                                0x00000020
#define AUX_EVCTL_EVSTAT0_TIMER1_EV_S 5
#define AUX_EVCTL_EVSTAT0_TIMER0_EV \
                                0x00000010  // Current value of TIMER0_EVENT 
                                            // event line 

#define AUX_EVCTL_EVSTAT0_TIMER0_EV_M \
                                0x00000010
#define AUX_EVCTL_EVSTAT0_TIMER0_EV_S 4
#define AUX_EVCTL_EVSTAT0_TDC_DONE \
                                0x00000008  // Current value of TDC_DONE event 
                                            // line 

#define AUX_EVCTL_EVSTAT0_TDC_DONE_M \
                                0x00000008
#define AUX_EVCTL_EVSTAT0_TDC_DONE_S 3
#define AUX_EVCTL_EVSTAT0_SOC_COMPB \
                                0x00000004  // Current value of SOC_COMPB 
                                            // event line 

#define AUX_EVCTL_EVSTAT0_SOC_COMPB_M \
                                0x00000004
#define AUX_EVCTL_EVSTAT0_SOC_COMPB_S 2
#define AUX_EVCTL_EVSTAT0_SOC_COMPA \
                                0x00000002  // Current value of SOC_COMPA 
                                            // event line 

#define AUX_EVCTL_EVSTAT0_SOC_COMPA_M \
                                0x00000002
#define AUX_EVCTL_EVSTAT0_SOC_COMPA_S 1
#define AUX_EVCTL_EVSTAT0_AON_WUC \
                                0x00000001  // Current value of AON_WUC event 
                                            // line 

#define AUX_EVCTL_EVSTAT0_AON_WUC_M \
                                0x00000001
#define AUX_EVCTL_EVSTAT0_AON_WUC_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_EVSTAT1 register.
//
//*****************************************************************************
#define AUX_EVCTL_EVSTAT1_ADC_IRQ \
                                0x00008000  // Current value of ADC_IRQ event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_ADC_IRQ_M \
                                0x00008000
#define AUX_EVCTL_EVSTAT1_ADC_IRQ_S 15
#define AUX_EVCTL_EVSTAT1_MCU_EV \
                                0x00004000  // Current value of MCU_EVENT 
                                            // event line 

#define AUX_EVCTL_EVSTAT1_MCU_EV_M \
                                0x00004000
#define AUX_EVCTL_EVSTAT1_MCU_EV_S 14
#define AUX_EVCTL_EVSTAT1_ACLK_REF \
                                0x00002000  // Current value of ACLK_REF event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_ACLK_REF_M \
                                0x00002000
#define AUX_EVCTL_EVSTAT1_ACLK_REF_S 13
#define AUX_EVCTL_EVSTAT1_AIODIO15 \
                                0x00001000  // Current value of AIODIO15 event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_AIODIO15_M \
                                0x00001000
#define AUX_EVCTL_EVSTAT1_AIODIO15_S 12
#define AUX_EVCTL_EVSTAT1_AIODIO14 \
                                0x00000800  // Current value of AIODIO14 event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_AIODIO14_M \
                                0x00000800
#define AUX_EVCTL_EVSTAT1_AIODIO14_S 11
#define AUX_EVCTL_EVSTAT1_AIODIO13 \
                                0x00000400  // Current value of AIODIO13 event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_AIODIO13_M \
                                0x00000400
#define AUX_EVCTL_EVSTAT1_AIODIO13_S 10
#define AUX_EVCTL_EVSTAT1_AIODIO12 \
                                0x00000200  // Current value of AIODIO12 event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_AIODIO12_M \
                                0x00000200
#define AUX_EVCTL_EVSTAT1_AIODIO12_S 9
#define AUX_EVCTL_EVSTAT1_AIODIO11 \
                                0x00000100  // Current value of AIODIO11 event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_AIODIO11_M \
                                0x00000100
#define AUX_EVCTL_EVSTAT1_AIODIO11_S 8
#define AUX_EVCTL_EVSTAT1_AIODIO10 \
                                0x00000080  // Current value of AIODIO10 event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_AIODIO10_M \
                                0x00000080
#define AUX_EVCTL_EVSTAT1_AIODIO10_S 7
#define AUX_EVCTL_EVSTAT1_AIODIO9 \
                                0x00000040  // Current value of AIODIO9 event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_AIODIO9_M \
                                0x00000040
#define AUX_EVCTL_EVSTAT1_AIODIO9_S 6
#define AUX_EVCTL_EVSTAT1_AIODIO8 \
                                0x00000020  // Current value of AIODIO8 event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_AIODIO8_M \
                                0x00000020
#define AUX_EVCTL_EVSTAT1_AIODIO8_S 5
#define AUX_EVCTL_EVSTAT1_AIODIO7 \
                                0x00000010  // Current value of AIODIO7 event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_AIODIO7_M \
                                0x00000010
#define AUX_EVCTL_EVSTAT1_AIODIO7_S 4
#define AUX_EVCTL_EVSTAT1_AIODIO6 \
                                0x00000008  // Current value of AIODIO6 event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_AIODIO6_M \
                                0x00000008
#define AUX_EVCTL_EVSTAT1_AIODIO6_S 3
#define AUX_EVCTL_EVSTAT1_AIODIO5 \
                                0x00000004  // Current value of AIODIO5 event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_AIODIO5_M \
                                0x00000004
#define AUX_EVCTL_EVSTAT1_AIODIO5_S 2
#define AUX_EVCTL_EVSTAT1_AIODIO4 \
                                0x00000002  // Current value of AIODIO4 event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_AIODIO4_M \
                                0x00000002
#define AUX_EVCTL_EVSTAT1_AIODIO4_S 1
#define AUX_EVCTL_EVSTAT1_AIODIO3 \
                                0x00000001  // Current value of AIODIO3 event 
                                            // line 

#define AUX_EVCTL_EVSTAT1_AIODIO3_M \
                                0x00000001
#define AUX_EVCTL_EVSTAT1_AIODIO3_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_EVTOMCUPOL register.
//
//*****************************************************************************
#define AUX_EVCTL_EVTOMCUPOL_ADC_IRQ \
                                0x00000400  // Polarity of ADC IRQ Event 

#define AUX_EVCTL_EVTOMCUPOL_ADC_IRQ_M \
                                0x00000400
#define AUX_EVCTL_EVTOMCUPOL_ADC_IRQ_S 10
#define AUX_EVCTL_EVTOMCUPOL_ADC_IRQ_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_ADC_IRQ_LOW \
                                0x00000400  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_OBSMUX0 \
                                0x00000200  // Polarity of OBSMUX0 Event 

#define AUX_EVCTL_EVTOMCUPOL_OBSMUX0_M \
                                0x00000200
#define AUX_EVCTL_EVTOMCUPOL_OBSMUX0_S 9
#define AUX_EVCTL_EVTOMCUPOL_OBSMUX0_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_OBSMUX0_LOW \
                                0x00000200  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_ADC_FIFO_ALMOST_FULL \
                                0x00000100  // Polarity of ADCFIFO_ALMOST_FULL 
                                            // Event 

#define AUX_EVCTL_EVTOMCUPOL_ADC_FIFO_ALMOST_FULL_M \
                                0x00000100
#define AUX_EVCTL_EVTOMCUPOL_ADC_FIFO_ALMOST_FULL_S 8
#define AUX_EVCTL_EVTOMCUPOL_ADC_FIFO_ALMOST_FULL_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_ADC_FIFO_ALMOST_FULL_LOW \
                                0x00000100  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_ADC_DONE \
                                0x00000080  // Polarity of ADC_DONE Event 

#define AUX_EVCTL_EVTOMCUPOL_ADC_DONE_M \
                                0x00000080
#define AUX_EVCTL_EVTOMCUPOL_ADC_DONE_S 7
#define AUX_EVCTL_EVTOMCUPOL_ADC_DONE_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_ADC_DONE_LOW \
                                0x00000080  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_SMPH_AUTOTAKE_DONE \
                                0x00000040  // Polarity of SMPH_AUTOTAKE_DONE 
                                            // Event 

#define AUX_EVCTL_EVTOMCUPOL_SMPH_AUTOTAKE_DONE_M \
                                0x00000040
#define AUX_EVCTL_EVTOMCUPOL_SMPH_AUTOTAKE_DONE_S 6
#define AUX_EVCTL_EVTOMCUPOL_SMPH_AUTOTAKE_DONE_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_SMPH_AUTOTAKE_DONE_LOW \
                                0x00000040  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_TIMER1_EV \
                                0x00000020  // Polarity of Timer1 Event 

#define AUX_EVCTL_EVTOMCUPOL_TIMER1_EV_M \
                                0x00000020
#define AUX_EVCTL_EVTOMCUPOL_TIMER1_EV_S 5
#define AUX_EVCTL_EVTOMCUPOL_TIMER1_EV_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_TIMER1_EV_LOW \
                                0x00000020  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_TIMER0_EV \
                                0x00000010  // Polarity of Timer0 Event 

#define AUX_EVCTL_EVTOMCUPOL_TIMER0_EV_M \
                                0x00000010
#define AUX_EVCTL_EVTOMCUPOL_TIMER0_EV_S 4
#define AUX_EVCTL_EVTOMCUPOL_TIMER0_EV_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_TIMER0_EV_LOW \
                                0x00000010  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_TDC_DONE \
                                0x00000008  // Polarity of TDC_DONE Event 

#define AUX_EVCTL_EVTOMCUPOL_TDC_DONE_M \
                                0x00000008
#define AUX_EVCTL_EVTOMCUPOL_TDC_DONE_S 3
#define AUX_EVCTL_EVTOMCUPOL_TDC_DONE_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_TDC_DONE_LOW \
                                0x00000008  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_SOC_COMPB \
                                0x00000004  // Polarity of SOC_COMPB Event 

#define AUX_EVCTL_EVTOMCUPOL_SOC_COMPB_M \
                                0x00000004
#define AUX_EVCTL_EVTOMCUPOL_SOC_COMPB_S 2
#define AUX_EVCTL_EVTOMCUPOL_SOC_COMPB_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_SOC_COMPB_LOW \
                                0x00000004  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_SOC_COMPA \
                                0x00000002  // Polarity of SOC_COMPA Event 

#define AUX_EVCTL_EVTOMCUPOL_SOC_COMPA_M \
                                0x00000002
#define AUX_EVCTL_EVTOMCUPOL_SOC_COMPA_S 1
#define AUX_EVCTL_EVTOMCUPOL_SOC_COMPA_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_SOC_COMPA_LOW \
                                0x00000002  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_AON_WU_EV \
                                0x00000001  // Polarity of AON_WU Event 

#define AUX_EVCTL_EVTOMCUPOL_AON_WU_EV_M \
                                0x00000001
#define AUX_EVCTL_EVTOMCUPOL_AON_WU_EV_S 0
#define AUX_EVCTL_EVTOMCUPOL_AON_WU_EV_HIGH \
                                0x00000000  // High level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
#define AUX_EVCTL_EVTOMCUPOL_AON_WU_EV_LOW \
                                0x00000001  // Low level of event sets the 
                                            // event flag and asserts event 
                                            // line to MCU 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_EVTOMCUFLAGS register.
//
//*****************************************************************************
#define AUX_EVCTL_EVTOMCUFLAGS_ADC_IRQ \
                                0x00000400  // Event flag for ADC_IRQ event to 
                                            // MCU. 0: Clear 1: No effect 

#define AUX_EVCTL_EVTOMCUFLAGS_ADC_IRQ_M \
                                0x00000400
#define AUX_EVCTL_EVTOMCUFLAGS_ADC_IRQ_S 10
#define AUX_EVCTL_EVTOMCUFLAGS_OBSMUX0 \
                                0x00000200  // Event flag for OBSMUX0 event to 
                                            // MCU. 0: Clear 1: No effect 

#define AUX_EVCTL_EVTOMCUFLAGS_OBSMUX0_M \
                                0x00000200
#define AUX_EVCTL_EVTOMCUFLAGS_OBSMUX0_S 9
#define AUX_EVCTL_EVTOMCUFLAGS_ADC_FIFO_ALMOST_FULL \
                                0x00000100  // Event flag for 
                                            // ADCFIFO_ALMOST_FULL event to 
                                            // MCU. 0: Clear 1: No effect 

#define AUX_EVCTL_EVTOMCUFLAGS_ADC_FIFO_ALMOST_FULL_M \
                                0x00000100
#define AUX_EVCTL_EVTOMCUFLAGS_ADC_FIFO_ALMOST_FULL_S 8
#define AUX_EVCTL_EVTOMCUFLAGS_ADC_DONE \
                                0x00000080  // Event flag for ADC_DONE event 
                                            // to MCU. 0: Clear 1: No effect 

#define AUX_EVCTL_EVTOMCUFLAGS_ADC_DONE_M \
                                0x00000080
#define AUX_EVCTL_EVTOMCUFLAGS_ADC_DONE_S 7
#define AUX_EVCTL_EVTOMCUFLAGS_SMPH_AUTOTAKE_DONE \
                                0x00000040  // Event flag for 
                                            // SMPH_AUTOTAKE_DONE event to MCU. 
                                            // 0: Clear 1: No effect 

#define AUX_EVCTL_EVTOMCUFLAGS_SMPH_AUTOTAKE_DONE_M \
                                0x00000040
#define AUX_EVCTL_EVTOMCUFLAGS_SMPH_AUTOTAKE_DONE_S 6
#define AUX_EVCTL_EVTOMCUFLAGS_TIMER1_EV \
                                0x00000020  // Event flag for TIMER1_EVENT to 
                                            // MCU. 0: Clear 1: No effect 

#define AUX_EVCTL_EVTOMCUFLAGS_TIMER1_EV_M \
                                0x00000020
#define AUX_EVCTL_EVTOMCUFLAGS_TIMER1_EV_S 5
#define AUX_EVCTL_EVTOMCUFLAGS_TIMER0_EV \
                                0x00000010  // Event flag for TIMER0_EVENT to 
                                            // MCU. 0: Clear 1: No effect 

#define AUX_EVCTL_EVTOMCUFLAGS_TIMER0_EV_M \
                                0x00000010
#define AUX_EVCTL_EVTOMCUFLAGS_TIMER0_EV_S 4
#define AUX_EVCTL_EVTOMCUFLAGS_TDC_DONE \
                                0x00000008  // Event flag for TDC_DONE event 
                                            // to MCU. 0: Clear 1: No effect 

#define AUX_EVCTL_EVTOMCUFLAGS_TDC_DONE_M \
                                0x00000008
#define AUX_EVCTL_EVTOMCUFLAGS_TDC_DONE_S 3
#define AUX_EVCTL_EVTOMCUFLAGS_SOC_COMPB \
                                0x00000004  // Event flag for SOC_COMPB event 
                                            // to MCU. 0: Clear 1: No effect 

#define AUX_EVCTL_EVTOMCUFLAGS_SOC_COMPB_M \
                                0x00000004
#define AUX_EVCTL_EVTOMCUFLAGS_SOC_COMPB_S 2
#define AUX_EVCTL_EVTOMCUFLAGS_SOC_COMPA \
                                0x00000002  // Event flag for SOC_COMPA event 
                                            // to MCU. 0: Clear 1: No effect 

#define AUX_EVCTL_EVTOMCUFLAGS_SOC_COMPA_M \
                                0x00000002
#define AUX_EVCTL_EVTOMCUFLAGS_SOC_COMPA_S 1
#define AUX_EVCTL_EVTOMCUFLAGS_AON_WU_EV \
                                0x00000001  // Event flag for AON_WU_EVENT to 
                                            // MCU. This event is and OR of the 
                                            // AON_RTC, AON_PRG and AON_SW 
                                            // events. The Combined WU event is 
                                            // set if any of the three events 
                                            // are set. These RAW events can be 
                                            // read in AUX_WUC_WUEVENT, and 
                                            // cleared using 
                                            // AON_WUC_WUEVENTCLR. After 
                                            // sources are cleared this flag 
                                            // can be cleared 0: Clear 1: No 
                                            // effect 

#define AUX_EVCTL_EVTOMCUFLAGS_AON_WU_EV_M \
                                0x00000001
#define AUX_EVCTL_EVTOMCUFLAGS_AON_WU_EV_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_COMBEVTOMCUMASK register.
//
//*****************************************************************************
#define AUX_EVCTL_COMBEVTOMCUMASK_ADC_IRQ \
                                0x00000400  // 0: The ADC_IRQ_EVENT event flag 
                                            // will not contribute to an event 
                                            // on the combined output 1: The 
                                            // ADC_IRQ_EVENT event flag will 
                                            // contribute to an event on the 
                                            // combined event output 

#define AUX_EVCTL_COMBEVTOMCUMASK_ADC_IRQ_M \
                                0x00000400
#define AUX_EVCTL_COMBEVTOMCUMASK_ADC_IRQ_S 10
#define AUX_EVCTL_COMBEVTOMCUMASK_OBSMUX0 \
                                0x00000200  // 0: The OBSMUX0_EVENT event flag 
                                            // will not contribute to an event 
                                            // on the combined output 1: The 
                                            // OBSMUX0_EVENT event flag will 
                                            // contribute to an event on the 
                                            // combined event output when the 
                                            // corresponding flag is set to 1 

#define AUX_EVCTL_COMBEVTOMCUMASK_OBSMUX0_M \
                                0x00000200
#define AUX_EVCTL_COMBEVTOMCUMASK_OBSMUX0_S 9
#define AUX_EVCTL_COMBEVTOMCUMASK_ADC_FIFO_ALMOST_FULL \
                                0x00000100  // 0: The 
                                            // ADCFIFO_ALMOST_FULL_EVENT event 
                                            // flag will not contribute to an 
                                            // event on the combined output 1: 
                                            // The ADCFIFO_ALMOST_FULL_EVENT 
                                            // event flag will contribute to an 
                                            // event on the combined event 
                                            // output 

#define AUX_EVCTL_COMBEVTOMCUMASK_ADC_FIFO_ALMOST_FULL_M \
                                0x00000100
#define AUX_EVCTL_COMBEVTOMCUMASK_ADC_FIFO_ALMOST_FULL_S 8
#define AUX_EVCTL_COMBEVTOMCUMASK_ADC_DONE \
                                0x00000080  // 0: The ADC_DONE_EVENT event 
                                            // flag will not contribute to an 
                                            // event on the combined output 1: 
                                            // The ADC_DONE_EVENT event flag 
                                            // will contribute to an event on 
                                            // the combined event output 

#define AUX_EVCTL_COMBEVTOMCUMASK_ADC_DONE_M \
                                0x00000080
#define AUX_EVCTL_COMBEVTOMCUMASK_ADC_DONE_S 7
#define AUX_EVCTL_COMBEVTOMCUMASK_SMPH_AUTOTAKE_DONE \
                                0x00000040  // 0: The SEMAPHORE_EVENT event 
                                            // flag will not contribute to an 
                                            // event on the combined output 1: 
                                            // The SEMAPHORE_EVENT event flag 
                                            // will contribute to an event on 
                                            // the combined event output 

#define AUX_EVCTL_COMBEVTOMCUMASK_SMPH_AUTOTAKE_DONE_M \
                                0x00000040
#define AUX_EVCTL_COMBEVTOMCUMASK_SMPH_AUTOTAKE_DONE_S 6
#define AUX_EVCTL_COMBEVTOMCUMASK_TIMER1_EV \
                                0x00000020  // 0: The TIMER1_EVENT event flag 
                                            // will not contribute to an event 
                                            // on the combined output 1: The 
                                            // TIMER1_EVENT event flag will 
                                            // contribute to an event on the 
                                            // combined event output 

#define AUX_EVCTL_COMBEVTOMCUMASK_TIMER1_EV_M \
                                0x00000020
#define AUX_EVCTL_COMBEVTOMCUMASK_TIMER1_EV_S 5
#define AUX_EVCTL_COMBEVTOMCUMASK_TIMER0_EV \
                                0x00000010  // 0: The TIMER0_EVENT event flag 
                                            // will not contribute to an event 
                                            // on the combined output 1: The 
                                            // TIMER0_EVENT event flag will 
                                            // contribute to an event on the 
                                            // combined event output 

#define AUX_EVCTL_COMBEVTOMCUMASK_TIMER0_EV_M \
                                0x00000010
#define AUX_EVCTL_COMBEVTOMCUMASK_TIMER0_EV_S 4
#define AUX_EVCTL_COMBEVTOMCUMASK_TDC_DONE \
                                0x00000008  // 0: The TDC_DONE_EVENT event 
                                            // flag will not contribute to an 
                                            // event on the combined output 1: 
                                            // The TDC_DONE_EVENT event flag 
                                            // will contribute to an event on 
                                            // the combined event output 

#define AUX_EVCTL_COMBEVTOMCUMASK_TDC_DONE_M \
                                0x00000008
#define AUX_EVCTL_COMBEVTOMCUMASK_TDC_DONE_S 3
#define AUX_EVCTL_COMBEVTOMCUMASK_SOC_COMPB \
                                0x00000004  // 0: The SOC_COMPB_EVENT event 
                                            // flag will not contribute to an 
                                            // event on the combined output 1: 
                                            // The SOC_COMPB_EVENT event flag 
                                            // will contribute to an event on 
                                            // the combined event output 

#define AUX_EVCTL_COMBEVTOMCUMASK_SOC_COMPB_M \
                                0x00000004
#define AUX_EVCTL_COMBEVTOMCUMASK_SOC_COMPB_S 2
#define AUX_EVCTL_COMBEVTOMCUMASK_SOC_COMPA \
                                0x00000002  // 0: The SOC_COMPA_EVENT event 
                                            // flag will not contribute to an 
                                            // event on the combined output 1: 
                                            // The SOC_COMPA_EVENT event flag 
                                            // will contribute to an event on 
                                            // the combined event output 

#define AUX_EVCTL_COMBEVTOMCUMASK_SOC_COMPA_M \
                                0x00000002
#define AUX_EVCTL_COMBEVTOMCUMASK_SOC_COMPA_S 1
#define AUX_EVCTL_COMBEVTOMCUMASK_AON_WU_EV \
                                0x00000001  // 0: The AON_WU_EVENT event flag 
                                            // will not contribute to an event 
                                            // on the combined output 1: The 
                                            // AON_WU_EVENT event flag will 
                                            // contribute to an event on the 
                                            // combined event output 

#define AUX_EVCTL_COMBEVTOMCUMASK_AON_WU_EV_M \
                                0x00000001
#define AUX_EVCTL_COMBEVTOMCUMASK_AON_WU_EV_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_DMASWREQ register.
//
//*****************************************************************************
#define AUX_EVCTL_DMASWREQ_START \
                                0x00000001  // Direct connection to DMA 
                                            // controller 

#define AUX_EVCTL_DMASWREQ_START_M \
                                0x00000001
#define AUX_EVCTL_DMASWREQ_START_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_EVCTL_O_VECFLAGS register.
//
//*****************************************************************************
#define AUX_EVCTL_VECFLAGS_VEC3 0x00000008  // Event flags. VEC3 is set when 
                                            // event selected by 
                                            // VECCFG3.VEC3_EV is enabled and 
                                            // occurs. The flags are OR'ed 
                                            // together to make the wake up 
                                            // signal for the AUX_SCE. To clear 
                                            // a flag write 0 to the flag in 
                                            // question. Writing 1 has no 
                                            // effect. 
#define AUX_EVCTL_VECFLAGS_VEC3_M \
                                0x00000008
#define AUX_EVCTL_VECFLAGS_VEC3_S 3
#define AUX_EVCTL_VECFLAGS_VEC2 0x00000004  // Event flags. VEC2 is set when 
                                            // event selected by 
                                            // VECCFG2.VEC2_EV is enabled and 
                                            // occurs. The flags are OR'ed 
                                            // together to make the wake up 
                                            // signal for the AUX_SCE. To clear 
                                            // a flag write 0 to the flag in 
                                            // question. Writing 1 has no 
                                            // effect. 
#define AUX_EVCTL_VECFLAGS_VEC2_M \
                                0x00000004
#define AUX_EVCTL_VECFLAGS_VEC2_S 2
#define AUX_EVCTL_VECFLAGS_VEC1 0x00000002  // Event flags. VEC1 is set when 
                                            // event selected by 
                                            // VECCFG1.VEC1_EV is enabled and 
                                            // occurs. The flags are OR'ed 
                                            // together to make the wake up 
                                            // signal for the AUX_SCE. To clear 
                                            // a flag write 0 to the flag in 
                                            // question. Writing 1 has no 
                                            // effect. 
#define AUX_EVCTL_VECFLAGS_VEC1_M \
                                0x00000002
#define AUX_EVCTL_VECFLAGS_VEC1_S 1
#define AUX_EVCTL_VECFLAGS_VEC0 0x00000001  // Event flags. VEC0 is set when 
                                            // event selected by 
                                            // VECCFG0.VEC0_EV is enabled and 
                                            // occurs. The flags are OR'ed 
                                            // together to make the wake up 
                                            // signal for the AUX_SCE. To clear 
                                            // a flag write 0 to the flag in 
                                            // question. Writing 1 has no 
                                            // effect. 
#define AUX_EVCTL_VECFLAGS_VEC0_M \
                                0x00000001
#define AUX_EVCTL_VECFLAGS_VEC0_S 0


#endif // __HW_AUX_EVCTL_H__

