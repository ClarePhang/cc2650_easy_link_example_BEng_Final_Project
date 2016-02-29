
/******************************************************************************
*  Filename:       hw_event.h
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
#ifndef __HW_EVENT_H__
#define __HW_EVENT_H__

//*****************************************************************************
//
// The following are defines for the EVENT register offsets.
//
//*****************************************************************************
#define EVENT_O_CM3IRQSEL0      0x00000000  // Non-Programmable Output 
                                            // selection for CM3 interrupt 0 - 
                                            // AON Edge detect 
#define EVENT_O_CM3IRQSEL1      0x00000004  // Non-Programmable Output 
                                            // selection for CM3 interrupt 1 - 
                                            // I2C 
#define EVENT_O_CM3IRQSEL2      0x00000008  // Non-Programmable Output 
                                            // selection for CM3 interrupt 2 - 
                                            // RF_cpe_1 
#define EVENT_O_CM3IRQSEL3      0x0000000C  // Non-Programmable Output 
                                            // selection for CM3 interrupt 3 - 
                                            // SPIS event combo 
#define EVENT_O_CM3IRQSEL4      0x00000010  // Non-Programmable Output 
                                            // selection for CM3 interrupt 4 - 
                                            // AON RTC 
#define EVENT_O_CM3IRQSEL5      0x00000014  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 5 - 
                                            // UART0 combined 
#define EVENT_O_CM3IRQSEL6      0x00000018  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 6 - 
                                            // AUX SM 
#define EVENT_O_CM3IRQSEL7      0x0000001C  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 7 - 
                                            // SSI0 combined 
#define EVENT_O_CM3IRQSEL8      0x00000020  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 8 - 
                                            // SSI1 combined 
#define EVENT_O_CM3IRQSEL9      0x00000024  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 9 - 
                                            // RF CPE 0 
#define EVENT_O_CM3IRQSEL10     0x00000028  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 10 - 
                                            // RF HW 
#define EVENT_O_CM3IRQSEL11     0x0000002C  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 11 - 
                                            // RF Command Ack 
#define EVENT_O_CM3IRQSEL12     0x00000030  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 12 - 
                                            // I2S Interrupt 
#define EVENT_O_CM3IRQSEL13     0x00000034  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 13 - 
                                            // AUX ERR 
#define EVENT_O_CM3IRQSEL14     0x00000038  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 14 - 
                                            // WDT 
#define EVENT_O_CM3IRQSEL15     0x0000003C  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 15 - 
                                            // GPT0A 
#define EVENT_O_CM3IRQSEL16     0x00000040  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 16 - 
                                            // GPT0B 
#define EVENT_O_CM3IRQSEL17     0x00000044  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 17 - 
                                            // GPT1A 
#define EVENT_O_CM3IRQSEL18     0x00000048  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 18 - 
                                            // GPT1B 
#define EVENT_O_CM3IRQSEL19     0x0000004C  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 19 - 
                                            // GPT2A 
#define EVENT_O_CM3IRQSEL20     0x00000050  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 20 - 
                                            // GPT2B 
#define EVENT_O_CM3IRQSEL21     0x00000054  // Non-Programmable Output 
                                            // selection for CM3 Interrupt 21 - 
                                            // GPT 3A 
#define EVENT_O_CM3IRQSEL22     0x00000058  // Non-Programmable Output 
                                            // selection for CM3 interrupt 22 - 
                                            // GPT 3B 
#define EVENT_O_CM3IRQSEL23     0x0000005C  // Output selection for CM3 
                                            // interrupt 23 - Crypto result 
                                            // available 
#define EVENT_O_CM3IRQSEL24     0x00000060  // Non-Programmable Output 
                                            // selection for CM3 interrupt 24 - 
                                            // DMA software combined 
#define EVENT_O_CM3IRQSEL25     0x00000064  // Non-Programmable Output 
                                            // selection for CM3 interrupt 25 - 
                                            // DMA Error 
#define EVENT_O_CM3IRQSEL26     0x00000068  // Non-Programmable Output 
                                            // selection for CM3 interrupt 26 - 
                                            // Flash 
#define EVENT_O_CM3IRQSEL27     0x0000006C  // Non-Programmable Output 
                                            // selection for CM3 interrupt 27 - 
                                            // SW0_EV 
#define EVENT_O_CM3IRQSEL28     0x00000070  // Non-Programmable Output 
                                            // selection for CM3 interrupt 28 - 
                                            // AUX MCU_EVENT_COMB 
#define EVENT_O_CM3IRQSEL29     0x00000074  // Non-Programmable Output 
                                            // selection for CM3 interrupt 29 - 
                                            // AON programmable 0 
#define EVENT_O_CM3IRQSEL30     0x00000078  // Output selection for CM3 
                                            // interrupt 30 - Programmable 
                                            // interrupt - default: no event 
                                            // "0" 
#define EVENT_O_CM3IRQSEL31     0x0000007C  // Non-Programmable Output 
                                            // selection for CM3 interrupt 31 - 
                                            // AUX_MCU_TRIGGER[1] 
#define EVENT_O_CM3IRQSEL32     0x00000080  // Non-Programmable Output 
                                            // selection for CM3 interrupt 32 - 
                                            // AUX_MCU_TRIGGER[10] 
#define EVENT_O_CM3IRQSEL33     0x00000084  // Non-Programmable Output 
                                            // selection for CM3 interrupt 33 - 
                                            // TRNG interrupt 
#define EVENT_O_RFCSEL0         0x00000100  // Non-Programmable Output 
                                            // selection for RF_CORE event 0 
#define EVENT_O_RFCSEL1         0x00000104  // Non-Programmable Output 
                                            // selection for RF_CORE event 1 
#define EVENT_O_RFCSEL2         0x00000108  // Non-Programmable Output 
                                            // selection for RF_CORE event 2 
#define EVENT_O_RFCSEL3         0x0000010C  // Non-Programmable Output 
                                            // selection for RF_CORE event 3 
#define EVENT_O_RFCSEL4         0x00000110  // Non-Programmable Output 
                                            // selection for RF_CORE event 4 
#define EVENT_O_RFCSEL5         0x00000114  // Non-Programmable Output 
                                            // selection for RF_CORE event 5 
#define EVENT_O_RFCSEL6         0x00000118  // Non-Programmable Output 
                                            // selection for RF_CORE event 6 
#define EVENT_O_RFCSEL7         0x0000011C  // Non-Programmable Output 
                                            // selection for RF_CORE event 7 
#define EVENT_O_RFCSEL8         0x00000120  // Non-Programmable Output 
                                            // selection for RF_CORE event 8 
#define EVENT_O_RFCSEL9         0x00000124  // Programmable Output selection 
                                            // for RF_CORE event 9 
#define EVENT_O_GPT0ACAPTSEL    0x00000200  // Programmable Output selection 
                                            // for GPT0 
#define EVENT_O_GPT0BCAPTSEL    0x00000204  // Programmable Output selection 
                                            // for GPT0 
#define EVENT_O_GPT1ACAPTSEL    0x00000300  // Programmable Output selection 
                                            // for GPT1 
#define EVENT_O_GPT1BCAPTSEL    0x00000304  // Programmable Output selection 
                                            // for GPT1 
#define EVENT_O_GPT2ACAPTSEL    0x00000400  // Programmable Output selection 
                                            // for GPT2 
#define EVENT_O_GPT2BCAPTSEL    0x00000404  // Programmable Output selection 
                                            // for GPT2 
#define EVENT_O_UDMACH0SSEL     0x00000500  // Non-Programmable Output 
                                            // selection for uDMA Ch 0 sreq 
#define EVENT_O_UDMACH0BSEL     0x00000504  // Non-Programmable Output 
                                            // selection for uDMA Ch 0 req 
#define EVENT_O_UDMACH1SSEL     0x00000508  // Non-Programmable Output 
                                            // selection for uDMA Ch 1 req - 
                                            // uart0_rx_sreq 
#define EVENT_O_UDMACH1BSEL     0x0000050C  // Non-Programmable Output 
                                            // selection for uDMA Ch 1 req - 
                                            // uart0_rx_req 
#define EVENT_O_UDMACH2SSEL     0x00000510  // Non-Programmable Output 
                                            // selection for uDMA Ch 2 sreq - 
                                            // uart0_tx_sreq 
#define EVENT_O_UDMACH2BSEL     0x00000514  // Non-Programmable Output 
                                            // selection for uDMA Ch 2 req - 
                                            // uart0_tx_req 
#define EVENT_O_UDMACH3SSEL     0x00000518  // Non-Programmable Output 
                                            // selection for uDMA Ch 3 sreq - 
                                            // ssi0_rx_sreq 
#define EVENT_O_UDMACH3BSEL     0x0000051C  // Non-Programmable Output 
                                            // selection for uDMA Ch 3 req - 
                                            // ssi0_rx_req 
#define EVENT_O_UDMACH4SSEL     0x00000520  // Non-Programmable Output 
                                            // selection for uDMA Ch 4 sreq - 
                                            // ssi0_tx_sreq 
#define EVENT_O_UDMACH4BSEL     0x00000524  // Non-Programmable Output 
                                            // selection for uDMA Ch 4 req - 
                                            // ssi0_tx_req 
#define EVENT_O_UDMACH5SSEL     0x00000528  // Non-Programmable Output 
                                            // selection for uDMA Ch 5 sreq - 
                                            // spis_rx_sreq 
#define EVENT_O_UDMACH5BSEL     0x0000052C  // Non-Programmable Output 
                                            // selection for uDMA Ch 5 req - 
                                            // spis_rx_req 
#define EVENT_O_UDMACH6SSEL     0x00000530  // Non-Programmable Output 
                                            // selection for uDMA Ch 6 sreq - 
                                            // spis_tx_sreq 
#define EVENT_O_UDMACH6BSEL     0x00000534  // Non-Programmable Output 
                                            // selection for uDMA Ch 6 req - 
                                            // spis_tx_req 
#define EVENT_O_UDMACH7SSEL     0x00000538  // Non-Programmable Output 
                                            // selection for uDMA Ch 7 sreq - 
                                            // AUX_ADC 
#define EVENT_O_UDMACH7BSEL     0x0000053C  // Non-Programmable Output 
                                            // selection for uDMA Ch 7 req - 
                                            // AUX_ADC 
#define EVENT_O_UDMACH8SSEL     0x00000540  // Non-Programmable Output 
                                            // selection for uDMA Ch 8 sreq - 
                                            // AUX_SW Req 
#define EVENT_O_UDMACH8BSEL     0x00000544  // Non-Programmable Output 
                                            // selection for uDMA Ch 8 req - 
                                            // AUX_SW Req 
#define EVENT_O_UDMACH9SSEL     0x00000548  // Programmable Output selection 
                                            // for uDMA Ch 9 sreq - GPT 0A 
#define EVENT_O_UDMACH9BSEL     0x0000054C  // Programmable Output selection 
                                            // for uDMA Ch 9 req - GPT 0A 
#define EVENT_O_UDMACH10SSEL    0x00000550  // Programmable Output selection 
                                            // for uDMA Ch 10 sreq - GPT 0B 
#define EVENT_O_UDMACH10BSEL    0x00000554  // Programmable Output selection 
                                            // for uDMA Ch 10 req - GPT 0B 
#define EVENT_O_UDMACH11SSEL    0x00000558  // Programmable Output selection 
                                            // for uDMA Ch 11 sreq - GPT 1A 
#define EVENT_O_UDMACH11BSEL    0x0000055C  // Programmable Output selection 
                                            // for uDMA Ch 11 req - GPT 1A 
#define EVENT_O_UDMACH12SSEL    0x00000560  // Programmable Output selection 
                                            // for uDMA Ch 12 sreq - GPT 1B 
#define EVENT_O_UDMACH12BSEL    0x00000564  // Programmable Output selection 
                                            // for uDMA Ch 12 req - GPT 1B 
#define EVENT_O_UDMACH13SSEL    0x00000568  // Non-Programmable Output 
                                            // selection for uDMA Ch 13 sreq - 
                                            // AON Programmable 
#define EVENT_O_UDMACH13BSEL    0x0000056C  // Non-Programmable Output 
                                            // selection for uDMA Ch 13 req - 
                                            // AON Programmable 
#define EVENT_O_UDMACH14SSEL    0x00000570  // Programmable Output selection 
                                            // for uDMA Ch 14 sreq - DMA 
                                            // Programmable 
#define EVENT_O_UDMACH14BSEL    0x00000574  // Programmable Output selection 
                                            // for uDMA Ch 14 req - DMA 
                                            // Programmable 
#define EVENT_O_UDMACH15SSEL    0x00000578  // Non-Programmable Output 
                                            // selection for uDMA Ch 15 sreq - 
                                            // AON RTC 
#define EVENT_O_UDMACH15BSEL    0x0000057C  // Non-Programmable Output 
                                            // selection for uDMA Ch 15 req - 
                                            // AON RTC 
#define EVENT_O_UDMACH16SSEL    0x00000580  // Non-Programmable Output 
                                            // selection for uDMA Ch 16 sreq - 
                                            // ssi1 Rx sreq 
#define EVENT_O_UDMACH16BSEL    0x00000584  // Non-Programmable Output 
                                            // selection for uDMA Ch 16 req - 
                                            // ssi1 RX req 
#define EVENT_O_UDMACH17SSEL    0x00000588  // Non-Programmable Output 
                                            // selection for uDMA Ch 17 sreq - 
                                            // ssi1 TX Sreq 
#define EVENT_O_UDMACH17BSEL    0x0000058C  // Non-Programmable Output 
                                            // selection for uDMA Ch 17 req - 
                                            // ssi1 TX req 
#define EVENT_O_UDMACH18SSEL    0x00000590  // Non-Programmable Output 
                                            // selection for uDMA Ch 18 sreq - 
                                            // reserved for software 
#define EVENT_O_UDMACH18BSEL    0x00000594  // Non-Programmable Output 
                                            // selection for uDMA Ch 18 req - 
                                            // reserved for software 
#define EVENT_O_UDMACH19SSEL    0x00000598  // Non-Programmable Output 
                                            // selection for uDMA Ch 19 sreq - 
                                            // reserved for software 
#define EVENT_O_UDMACH19BSEL    0x0000059C  // Non-Programmable Output 
                                            // selection for uDMA Ch 19 req - 
                                            // reserved for SW 
#define EVENT_O_UDMACH20SSEL    0x000005A0  // Non-Programmable Output 
                                            // selection for uDMA Ch 20 sreq - 
                                            // reserved for SW 
#define EVENT_O_UDMACH20BSEL    0x000005A4  // Non-Programmable Output 
                                            // selection for uDMA Ch 20 req - 
                                            // reserved for SW 
#define EVENT_O_UDMACH21SSEL    0x000005A8  // Non-Programmable Output 
                                            // selection for uDMA Ch 21 sreq - 
                                            // SW_EVENT0 
#define EVENT_O_UDMACH21BSEL    0x000005AC  // Non-Programmable Output 
                                            // selection for uDMA Ch 21 req - 
                                            // SW_EVENT0 
#define EVENT_O_UDMACH22SSEL    0x000005B0  // Non-Programmable Output 
                                            // selection for uDMA Ch 22 sreq - 
                                            // SW_EVENT 1 
#define EVENT_O_UDMACH22BSEL    0x000005B4  // Non-Programmable Output 
                                            // selection for uDMA Ch 22 req - 
                                            // SW_EVENT1 
#define EVENT_O_UDMACH23SSEL    0x000005B8  // Non-Programmable Output 
                                            // selection for uDMA Ch 23 sreq - 
                                            // SW_EVENT2 
#define EVENT_O_UDMACH23BSEL    0x000005BC  // Non-Programmable Output 
                                            // selection for uDMA Ch 23 req - 
                                            // SW_EVENT2 
#define EVENT_O_UDMACH24SSEL    0x000005C0  // Non-Programmable Output 
                                            // selection for uDMA Ch 24 sreq - 
                                            // SW_EVENT3 
#define EVENT_O_UDMACH24BSEL    0x000005C4  // Non-Programmable Output 
                                            // selection for uDMA Ch 24 req - 
                                            // SW_EVENT3 
#define EVENT_O_UDMACH25SSEL    0x000005C8  // Non-Programmable Output 
                                            // selection for uDMA Ch 25 sreq - 
                                            // not mapped to hw 
#define EVENT_O_UDMACH25BSEL    0x000005CC  // Non-Programmable Output 
                                            // selection for uDMA Ch 25 req - 
                                            // not mapped to hw 
#define EVENT_O_UDMACH26SSEL    0x000005D0  // Non-Programmable Output 
                                            // selection for uDMA Ch 26 req - 
                                            // not mapped to hw 
#define EVENT_O_UDMACH26BSEL    0x000005D4  // Non-Programmable Output 
                                            // selection for uDMA Ch 26 req - 
                                            // not mapped to hw 
#define EVENT_O_UDMACH27SSEL    0x000005D8  // Non-Programmable Output 
                                            // selection for uDMA Ch 27 req - 
                                            // not mapped to hw 
#define EVENT_O_UDMACH27BSEL    0x000005DC  // Non-Programmable Output 
                                            // selection for uDMA Ch 27 req - 
                                            // not mapped to hw 
#define EVENT_O_UDMACH28SSEL    0x000005E0  // Non-Programmable Output 
                                            // selection for uDMA Ch 28 sreq - 
                                            // NO HW 
#define EVENT_O_UDMACH28BSEL    0x000005E4  // Non-Programmable Output 
                                            // selection for uDMA Ch 28 req - 
                                            // NO HW 
#define EVENT_O_UDMACH29SSEL    0x000005E8  // Non-Programmable Output 
                                            // selection for uDMA Ch 29 sreq - 
                                            // NO HW 
#define EVENT_O_UDMACH29BSEL    0x000005EC  // Non-Programmable Output 
                                            // selection for uDMA Ch 29 req - 
                                            // NO HW 
#define EVENT_O_UDMACH30SSEL    0x000005F0  // Non-Programmable Output 
                                            // selection for uDMA Ch 30 sreq - 
                                            // NO HW 
#define EVENT_O_UDMACH30BSEL    0x000005F4  // Non-Programmable Output 
                                            // selection for uDMA Ch 30 req - 
                                            // NO HW 
#define EVENT_O_UDMACH31SSEL    0x000005F8  // Non-Programmable Output 
                                            // selection for uDMA Ch 31 sreq - 
                                            // NO HW 
#define EVENT_O_UDMACH31BSEL    0x000005FC  // Non-Programmable Output 
                                            // selection for uDMA Ch 31 req - 
                                            // NO HW 
#define EVENT_O_GPT3ACAPTSEL    0x00000600  // Programmable Output selection 
                                            // for GPT3 
#define EVENT_O_GPT3BCAPTSEL    0x00000604  // Programmable Output selection 
                                            // for GPT3 
#define EVENT_O_AUXSEL0         0x00000700  // Programmable Output selection 
                                            // for AUX subscriber 
#define EVENT_O_CM3NMISEL0      0x00000800  // Non-Programmable Output 
                                            // selection for NMI subscriber 
#define EVENT_O_I2SSTMPSEL0     0x00000900  // Programmable Output selection 
                                            // for I2S subscriber 
#define EVENT_O_FRZSEL0         0x00000A00  // Programmable Output selection 
                                            // for FRZ subscriber 
#define EVENT_O_SWEV            0x00000F00  // Set or clear software events 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL0 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL0_EV_M   0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL0_EV_S   0
#define EVENT_CM3IRQSEL0_EV_AON_GPIO_EDGE \
                                0x00000004  // AON Edge detect 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL1 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL1_EV_M   0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL1_EV_S   0
#define EVENT_CM3IRQSEL1_EV_I2C_IRQ \
                                0x00000009  // I2C interrupt 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL2 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL2_EV_M   0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL2_EV_S   0
#define EVENT_CM3IRQSEL2_EV_RFC_CPE_1 \
                                0x0000001E  // RF cpe_1 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL3 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL3_EV_M   0x0000007F  // SPIS_EVENTS_COMBO 
#define EVENT_CM3IRQSEL3_EV_S   0
#define EVENT_CM3IRQSEL3_EV_SPIS_COMB \
                                0x00000038  // SPIS_EVENTS_COMBO 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL4 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL4_EV_M   0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL4_EV_S   0
#define EVENT_CM3IRQSEL4_EV_AON_RTC_COMB \
                                0x00000007  // AON RTC 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL5 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL5_EV_M   0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL5_EV_S   0
#define EVENT_CM3IRQSEL5_EV_UART0_COMB \
                                0x00000024  // UART0 combined 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL6 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL6_EV_M   0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL6_EV_S   0
#define EVENT_CM3IRQSEL6_EV_AUX_SWEV0 \
                                0x00000025  // AUX SM 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL7 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL7_EV_M   0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL7_EV_S   0
#define EVENT_CM3IRQSEL7_EV_SSI0_COMB \
                                0x00000022  // SSI0 combined 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL8 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL8_EV_M   0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL8_EV_S   0
#define EVENT_CM3IRQSEL8_EV_SSI1_COMB \
                                0x00000023  // SSI1 combined 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL9 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL9_EV_M   0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL9_EV_S   0
#define EVENT_CM3IRQSEL9_EV_RFC_CPE_0 \
                                0x0000001B  // RF cpe_0 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL10 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL10_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL10_EV_S  0
#define EVENT_CM3IRQSEL10_EV_RFC_HW_COMB \
                                0x0000001A  // RF hw 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL11 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL11_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL11_EV_S  0
#define EVENT_CM3IRQSEL11_EV_RFC_CMD_ACK \
                                0x00000019  // RF command acknowledge 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL12 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL12_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL12_EV_S  0
#define EVENT_CM3IRQSEL12_EV_I2S_IRQ \
                                0x00000008  // I2S_irq_d 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL13 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL13_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL13_EV_S  0
#define EVENT_CM3IRQSEL13_EV_AUX_SWEV1 \
                                0x0000001D  // AUX ERR 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL14 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL14_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL14_EV_S  0
#define EVENT_CM3IRQSEL14_EV_WDT_IRQ \
                                0x00000018  // Watchdog 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL15 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL15_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL15_EV_S  0
#define EVENT_CM3IRQSEL15_EV_GPT0A \
                                0x00000010  // GPTIMER 0A 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL16 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL16_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL16_EV_S  0
#define EVENT_CM3IRQSEL16_EV_GPT0B \
                                0x00000011  // GPTIMER 0B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL17 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL17_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL17_EV_S  0
#define EVENT_CM3IRQSEL17_EV_GPT1A \
                                0x00000012  // GPTIMER 1A 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL18 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL18_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL18_EV_S  0
#define EVENT_CM3IRQSEL18_EV_GPT1B \
                                0x00000013  // GPTIMER 1B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL19 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL19_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL19_EV_S  0
#define EVENT_CM3IRQSEL19_EV_GPT2A \
                                0x0000000C  // GPTIMER 2A 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL20 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL20_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL20_EV_S  0
#define EVENT_CM3IRQSEL20_EV_GPT2B \
                                0x0000000D  // GPTIMER 2B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL21 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL21_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL21_EV_S  0
#define EVENT_CM3IRQSEL21_EV_GPT3A \
                                0x0000000E  // GPTIMER 3A 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL22 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL22_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL22_EV_S  0
#define EVENT_CM3IRQSEL22_EV_GPT3B \
                                0x0000000F  // GPTIMER 3B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL23 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL23_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL23_EV_S  0
#define EVENT_CM3IRQSEL23_EV_CRYPTO_RESULT_AVAIL_IRQ \
                                0x0000005D  // crypto core result available 
                                            // interrupt 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL24 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL24_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL24_EV_S  0
#define EVENT_CM3IRQSEL24_EV_DMA_DONE_COMB \
                                0x00000027  // combined done event from DMA 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL25 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL25_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL25_EV_S  0
#define EVENT_CM3IRQSEL25_EV_DMA_ERR \
                                0x00000026  // error event from DMA 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL26 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL26_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL26_EV_S  0
#define EVENT_CM3IRQSEL26_EV_FLASH \
                                0x00000015  // Flash event 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL27 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL27_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL27_EV_S  0
#define EVENT_CM3IRQSEL27_EV_SWEV0 \
                                0x00000064  // SW EVENT 0 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL28 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL28_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL28_EV_S  0
#define EVENT_CM3IRQSEL28_EV_AUX_COMB \
                                0x0000000B  // AUX MCU_event_comb 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL29 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL29_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL29_EV_S  0
#define EVENT_CM3IRQSEL29_EV_AON_PROG0 \
                                0x00000001  // AON programmable 0 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL30 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL30_EV_M  0x0000007F  // Read/write selection value 
#define EVENT_CM3IRQSEL30_EV_S  0
#define EVENT_CM3IRQSEL30_EV_NONE \
                                0x00000000  // "0" 
#define EVENT_CM3IRQSEL30_EV_AON_PROG1 \
                                0x00000002  // AON programmable 1 
#define EVENT_CM3IRQSEL30_EV_AON_PROG2 \
                                0x00000003  // AON programmable 2 
#define EVENT_CM3IRQSEL30_EV_AON_SPIS_BYTE_DONE \
                                0x00000005  // AON SPIS RTX 
#define EVENT_CM3IRQSEL30_EV_AON_SPIS_CS \
                                0x00000006  // AON SPIS CS 
#define EVENT_CM3IRQSEL30_EV_AON_AUX_SWEV0 \
                                0x0000000A  // AON_AUX0 
#define EVENT_CM3IRQSEL30_EV_SW0_EV_DONE \
                                0x00000014  // sw0_ev_done 
#define EVENT_CM3IRQSEL30_EV_SW1_DMA_DONE \
                                0x00000016  // sw1 dma_done 
#define EVENT_CM3IRQSEL30_EV_CRYPTO_DMA_DONE_IRQ \
                                0x0000005E  // crypto core dma done interrupt 
#define EVENT_CM3IRQSEL30_EV_RFC_IN_EV0 \
                                0x0000005F  // RF Core input event 0 
#define EVENT_CM3IRQSEL30_EV_RFC_IN_EV1 \
                                0x00000060  // RF Core input event 1 
#define EVENT_CM3IRQSEL30_EV_AUX_AON_WU_EV \
                                0x00000069  // AUX_MCU_TRIGGER[0] 
#define EVENT_CM3IRQSEL30_EV_AUX_SOC_COMPA \
                                0x0000006B  // AUX_MCU_TRIGGER[2] 
#define EVENT_CM3IRQSEL30_EV_AUX_SOC_COMPB \
                                0x0000006C  // AUX_MCU_TRIGGER[3] 
#define EVENT_CM3IRQSEL30_EV_AUX_TDC_DONE \
                                0x0000006D  // AUX_MCU_TRIGGER[4] 
#define EVENT_CM3IRQSEL30_EV_AUX_TIMER0_EV \
                                0x0000006E  // AUX_MCU_TRIGGER[5] 
#define EVENT_CM3IRQSEL30_EV_AUX_TIMER1_EV \
                                0x0000006F  // AUX_MCU_TRIGGER[6] 
#define EVENT_CM3IRQSEL30_EV_AUX_SMPH_AUTOTAKE_DONE \
                                0x00000070  // AUX_MCU_TRIGGER[7] 
#define EVENT_CM3IRQSEL30_EV_AUX_ADC_DONE \
                                0x00000071  // AUX_MCU_TRIGGER[8] 
#define EVENT_CM3IRQSEL30_EV_AUX_ADC_FIFO_ALMOST_FULL \
                                0x00000072  // AUX_MCU_TRIGGER[9] 
#define EVENT_CM3IRQSEL30_EV_AUX_MCU_TRG9 \
                                0x00000077  // AON_RTC_UPD 
#define EVENT_CM3IRQSEL30_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL31 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL31_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL31_EV_S  0
#define EVENT_CM3IRQSEL31_EV_AUX_SOC_COMPA \
                                0x0000006A  // AUX_MCU_TRIGGER[1] 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL32 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL32_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL32_EV_S  0
#define EVENT_CM3IRQSEL32_EV_AUX_ADC_IRQ \
                                0x00000073  // AUX_MCU_TRIGGER[10] 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3IRQSEL33 register.
//
//*****************************************************************************
#define EVENT_CM3IRQSEL33_EV_M  0x0000007F  // Read only selection value 
#define EVENT_CM3IRQSEL33_EV_S  0
#define EVENT_CM3IRQSEL33_EV_TRNG_IRQ \
                                0x00000068  // TRNG interrupt 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_RFCSEL0 register.
//
//*****************************************************************************
#define EVENT_RFCSEL0_EV_M      0x0000007F  // Read only selection value 
#define EVENT_RFCSEL0_EV_S      0
#define EVENT_RFCSEL0_EV_GPT0A_CMP \
                                0x0000003D  // GPT0 compare A 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_RFCSEL1 register.
//
//*****************************************************************************
#define EVENT_RFCSEL1_EV_M      0x0000007F  // Read only selection value 
#define EVENT_RFCSEL1_EV_S      0
#define EVENT_RFCSEL1_EV_GPT0B_CMP \
                                0x0000003E  // GPT0 compare B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_RFCSEL2 register.
//
//*****************************************************************************
#define EVENT_RFCSEL2_EV_M      0x0000007F  // Read only selection value 
#define EVENT_RFCSEL2_EV_S      0
#define EVENT_RFCSEL2_EV_GPT1A_CMP \
                                0x0000003F  // GPT1 compare A 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_RFCSEL3 register.
//
//*****************************************************************************
#define EVENT_RFCSEL3_EV_M      0x0000007F  // Read only selection value 
#define EVENT_RFCSEL3_EV_S      0
#define EVENT_RFCSEL3_EV_GPT1B_CMP \
                                0x00000040  // GPT1 compare B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_RFCSEL4 register.
//
//*****************************************************************************
#define EVENT_RFCSEL4_EV_M      0x0000007F  // Read only selection value 
#define EVENT_RFCSEL4_EV_S      0
#define EVENT_RFCSEL4_EV_GPT2A_CMP \
                                0x00000041  // GPT2 compare A 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_RFCSEL5 register.
//
//*****************************************************************************
#define EVENT_RFCSEL5_EV_M      0x0000007F  // Read only selection value 
#define EVENT_RFCSEL5_EV_S      0
#define EVENT_RFCSEL5_EV_GPT2B_CMP \
                                0x00000042  // GPT2 compare B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_RFCSEL6 register.
//
//*****************************************************************************
#define EVENT_RFCSEL6_EV_M      0x0000007F  // Read only selection value 
#define EVENT_RFCSEL6_EV_S      0
#define EVENT_RFCSEL6_EV_GPT3A_CMP \
                                0x00000043  // GPT3 compare A 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_RFCSEL7 register.
//
//*****************************************************************************
#define EVENT_RFCSEL7_EV_M      0x0000007F  // Read only selection value 
#define EVENT_RFCSEL7_EV_S      0
#define EVENT_RFCSEL7_EV_GPT3B_CMP \
                                0x00000044  // GPT3 compare B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_RFCSEL8 register.
//
//*****************************************************************************
#define EVENT_RFCSEL8_EV_M      0x0000007F  // Read only selection value 
#define EVENT_RFCSEL8_EV_S      0
#define EVENT_RFCSEL8_EV_AON_RTC_UPD \
                                0x00000077  // AON_RTC_UPD 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_RFCSEL9 register.
//
//*****************************************************************************
#define EVENT_RFCSEL9_EV_M      0x0000007F  // Read/write selection value 
#define EVENT_RFCSEL9_EV_S      0
#define EVENT_RFCSEL9_EV_NONE   0x00000000  // "0" 
#define EVENT_RFCSEL9_EV_AON_PROG0 \
                                0x00000001  // AON programmable 0 
#define EVENT_RFCSEL9_EV_AON_PROG1 \
                                0x00000002  // AON programmable 1 
#define EVENT_RFCSEL9_EV_I2S_IRQ \
                                0x00000008  // I2S_irq_d 
#define EVENT_RFCSEL9_EV_AON_AUX_SWEV0 \
                                0x0000000A  // AON_AUX0 
#define EVENT_RFCSEL9_EV_WDT_IRQ \
                                0x00000018  // Watchdog 
#define EVENT_RFCSEL9_EV_SSI0_COMB \
                                0x00000022  // SSI0 combined 
#define EVENT_RFCSEL9_EV_SSI1_COMB \
                                0x00000023  // SSI1 combined 
#define EVENT_RFCSEL9_EV_UART0_COMB \
                                0x00000024  // UART0 combined 
#define EVENT_RFCSEL9_EV_DMA_DONE_COMB \
                                0x00000027  // combined done event from DMA 
#define EVENT_RFCSEL9_EV_CRYPTO_RESULT_AVAIL_IRQ \
                                0x0000005D  // crypto core result available 
                                            // interrupt 
#define EVENT_RFCSEL9_EV_SWEV0  0x00000064  // SW EVENT 0 
#define EVENT_RFCSEL9_EV_SWEV1  0x00000065  // SW EVENT 1 
#define EVENT_RFCSEL9_EV_AUX_AON_WU_EV \
                                0x00000069  // AUX_MCU_TRIGGER[0] 
#define EVENT_RFCSEL9_EV_AUX_SOC_COMPA \
                                0x0000006A  // AUX_MCU_TRIGGER[1] 
#define EVENT_RFCSEL9_EV_AUX_SOC_COMPB \
                                0x0000006B  // AUX_MCU_TRIGGER[2] 
#define EVENT_RFCSEL9_EV_AUX_TDC_DONE \
                                0x0000006C  // AUX_MCU_TRIGGER[3] 
#define EVENT_RFCSEL9_EV_AUX_TIMER0_EV \
                                0x0000006D  // AUX_MCU_TRIGGER[4] 
#define EVENT_RFCSEL9_EV_AUX_TIMER1_EV \
                                0x0000006E  // AUX_MCU_TRIGGER[5] 
#define EVENT_RFCSEL9_EV_AUX_SMPH_AUTOTAKE_DONE \
                                0x0000006F  // AUX_MCU_TRIGGER[6] 
#define EVENT_RFCSEL9_EV_AUX_ADC_DONE \
                                0x00000070  // AUX_MCU_TRIGGER[7] 
#define EVENT_RFCSEL9_EV_AUX_ADC_FIFO_ALMOST_FULL \
                                0x00000071  // AUX_MCU_TRIGGER[8] 
#define EVENT_RFCSEL9_EV_AUX_OBSMUX0 \
                                0x00000072  // AUX_MCU_TRIGGER[9] 
#define EVENT_RFCSEL9_EV_AUX_ADC_IRQ \
                                0x00000073  // AUX_MCU_TRIGGER[10] 
#define EVENT_RFCSEL9_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_GPT0ACAPTSEL register.
//
//*****************************************************************************
#define EVENT_GPT0ACAPTSEL_EV_M 0x0000007F  // Read/write selection value 
#define EVENT_GPT0ACAPTSEL_EV_S 0
#define EVENT_GPT0ACAPTSEL_EV_NONE \
                                0x00000000  // "0" 
#define EVENT_GPT0ACAPTSEL_EV_AON_GPIO_EDGE \
                                0x00000004  // AON Edge detect 
#define EVENT_GPT0ACAPTSEL_EV_AON_SPIS_BYTE_DONE \
                                0x00000005  // AON SPIS RTX 
#define EVENT_GPT0ACAPTSEL_EV_AON_SPIS_CS \
                                0x00000006  // AON SPIS CS 
#define EVENT_GPT0ACAPTSEL_EV_AON_RTC_COMB \
                                0x00000007  // AON RTC 
#define EVENT_GPT0ACAPTSEL_EV_I2C_IRQ \
                                0x00000009  // I2C interrupt 
#define EVENT_GPT0ACAPTSEL_EV_AUX_COMB \
                                0x0000000B  // AUX Mcu_event_comb 
#define EVENT_GPT0ACAPTSEL_EV_FLASH \
                                0x00000015  // Flash 
#define EVENT_GPT0ACAPTSEL_EV_RFC_CMD_ACK \
                                0x00000019  // RF command acknowledge 
#define EVENT_GPT0ACAPTSEL_EV_RFC_HW_COMB \
                                0x0000001A  // RF hw 
#define EVENT_GPT0ACAPTSEL_EV_RFC_CPE_0 \
                                0x0000001B  // RF cpe_0 
#define EVENT_GPT0ACAPTSEL_EV_RFC_CPE_1 \
                                0x0000001E  // RF cpe_1 
#define EVENT_GPT0ACAPTSEL_EV_SSI0_COMB \
                                0x00000022  // SSI0 combined 
#define EVENT_GPT0ACAPTSEL_EV_SSI1_COMB \
                                0x00000023  // SSI1 combined 
#define EVENT_GPT0ACAPTSEL_EV_UART0_COMB \
                                0x00000024  // UART0 combined 
#define EVENT_GPT0ACAPTSEL_EV_GPT0A_CMP \
                                0x0000003D  // GPT0 compare A 
#define EVENT_GPT0ACAPTSEL_EV_GPT0B_CMP \
                                0x0000003E  // GPT0 compare B 
#define EVENT_GPT0ACAPTSEL_EV_GPT1A_CMP \
                                0x0000003F  // GPT1 compare A 
#define EVENT_GPT0ACAPTSEL_EV_GPT1B_CMP \
                                0x00000040  // GPT1 compare B 
#define EVENT_GPT0ACAPTSEL_EV_GPT2A_CMP \
                                0x00000041  // GPT2 compare A 
#define EVENT_GPT0ACAPTSEL_EV_GPT2B_CMP \
                                0x00000042  // GPT2 compare B 
#define EVENT_GPT0ACAPTSEL_EV_GPT3A_CMP \
                                0x00000043  // GPT3 compare A 
#define EVENT_GPT0ACAPTSEL_EV_GPT3B_CMP \
                                0x00000044  // GPT3 compare B 
#define EVENT_GPT0ACAPTSEL_EV_GPT0A_CAPT_DIO \
                                0x00000055  // pad inputs for GPT subscribers 
                                            // - 0 
#define EVENT_GPT0ACAPTSEL_EV_GPT0B_CAPT_DIO \
                                0x00000056  // pad inputs for GPT subscribers 
                                            // - 1 
#define EVENT_GPT0ACAPTSEL_EV_RFC_IN_EV0 \
                                0x0000005F  // RF Core input event 0 
#define EVENT_GPT0ACAPTSEL_EV_RFC_IN_EV1 \
                                0x00000060  // RF Core input event 1 
#define EVENT_GPT0ACAPTSEL_EV_AUX_AON_WU_EV \
                                0x00000069  // AUX_MCU_TRIGGER[0] 
#define EVENT_GPT0ACAPTSEL_EV_AUX_SOC_COMPA \
                                0x0000006A  // AUX_MCU_TRIGGER[1] 
#define EVENT_GPT0ACAPTSEL_EV_AUX_SOC_COMPB \
                                0x0000006B  // AUX_MCU_TRIGGER[2] 
#define EVENT_GPT0ACAPTSEL_EV_AUX_TDC_DONE \
                                0x0000006C  // AUX_MCU_TRIGGER[3] 
#define EVENT_GPT0ACAPTSEL_EV_AUX_TIMER0_EV \
                                0x0000006D  // AUX_MCU_TRIGGER[4] 
#define EVENT_GPT0ACAPTSEL_EV_AUX_TIMER1_EV \
                                0x0000006E  // AUX_MCU_TRIGGER[5] 
#define EVENT_GPT0ACAPTSEL_EV_AUX_SMPH_AUTOTAKE_DONE \
                                0x0000006F  // AUX_MCU_TRIGGER[6] 
#define EVENT_GPT0ACAPTSEL_EV_AUX_ADC_DONE \
                                0x00000070  // AUX_MCU_TRIGGER[7] 
#define EVENT_GPT0ACAPTSEL_EV_AUX_ADC_FIFO_ALMOST_FULL \
                                0x00000071  // AUX_MCU_TRIGGER[8] 
#define EVENT_GPT0ACAPTSEL_EV_AUX_OBSMUX0 \
                                0x00000072  // AUX_MCU_TRIGGER[9] 
#define EVENT_GPT0ACAPTSEL_EV_AUX_ADC_IRQ \
                                0x00000073  // AUX_MCU_TRIGGER[10] 
#define EVENT_GPT0ACAPTSEL_EV_AON_RTC_UPD \
                                0x00000077  // AON_RTC_UPD 
#define EVENT_GPT0ACAPTSEL_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_GPT0BCAPTSEL register.
//
//*****************************************************************************
#define EVENT_GPT0BCAPTSEL_EV_M 0x0000007F  // Read/write selection value 
#define EVENT_GPT0BCAPTSEL_EV_S 0
#define EVENT_GPT0BCAPTSEL_EV_NONE \
                                0x00000000  // "0" 
#define EVENT_GPT0BCAPTSEL_EV_AON_GPIO_EDGE \
                                0x00000004  // AON Edge detect 
#define EVENT_GPT0BCAPTSEL_EV_AON_SPIS_BYTE_DONE \
                                0x00000005  // AON SPIS RTX 
#define EVENT_GPT0BCAPTSEL_EV_AON_SPIS_CS \
                                0x00000006  // AON SPIS CS 
#define EVENT_GPT0BCAPTSEL_EV_AON_RTC_COMB \
                                0x00000007  // AON RTC 
#define EVENT_GPT0BCAPTSEL_EV_I2C_IRQ \
                                0x00000009  // I2C interrupt 
#define EVENT_GPT0BCAPTSEL_EV_AUX_COMB \
                                0x0000000B  // AUX Mcu_event_comb 
#define EVENT_GPT0BCAPTSEL_EV_FLASH \
                                0x00000015  // Flash 
#define EVENT_GPT0BCAPTSEL_EV_RFC_CMD_ACK \
                                0x00000019  // RF command acknowledge 
#define EVENT_GPT0BCAPTSEL_EV_RFC_HW_COMB \
                                0x0000001A  // RF hw 
#define EVENT_GPT0BCAPTSEL_EV_RFC_CPE_0 \
                                0x0000001B  // RF cpe_0 
#define EVENT_GPT0BCAPTSEL_EV_RFC_CPE_1 \
                                0x0000001E  // RF cpe_1 
#define EVENT_GPT0BCAPTSEL_EV_SSI0_COMB \
                                0x00000022  // SSI0 combined 
#define EVENT_GPT0BCAPTSEL_EV_SSI1_COMB \
                                0x00000023  // SSI1 combined 
#define EVENT_GPT0BCAPTSEL_EV_UART0_COMB \
                                0x00000024  // UART0 combined 
#define EVENT_GPT0BCAPTSEL_EV_GPT0A_CMP \
                                0x0000003D  // GPT0 compare A 
#define EVENT_GPT0BCAPTSEL_EV_GPT0B_CMP \
                                0x0000003E  // GPT0 compare B 
#define EVENT_GPT0BCAPTSEL_EV_GPT1A_CMP \
                                0x0000003F  // GPT1 compare A 
#define EVENT_GPT0BCAPTSEL_EV_GPT1B_CMP \
                                0x00000040  // GPT1 compare B 
#define EVENT_GPT0BCAPTSEL_EV_GPT2A_CMP \
                                0x00000041  // GPT2 compare A 
#define EVENT_GPT0BCAPTSEL_EV_GPT2B_CMP \
                                0x00000042  // GPT2 compare B 
#define EVENT_GPT0BCAPTSEL_EV_GPT3A_CMP \
                                0x00000043  // GPT3 compare A 
#define EVENT_GPT0BCAPTSEL_EV_GPT3B_CMP \
                                0x00000044  // GPT3 compare B 
#define EVENT_GPT0BCAPTSEL_EV_GPT0A_CAPT_DIO \
                                0x00000055  // pad inputs for GPT subscribers 
                                            // - 0 
#define EVENT_GPT0BCAPTSEL_EV_GPT0B_CAPT_DIO \
                                0x00000056  // pad inputs for GPT subscribers 
                                            // - 1 
#define EVENT_GPT0BCAPTSEL_EV_RFC_IN_EV0 \
                                0x0000005F  // RF Core input event 0 
#define EVENT_GPT0BCAPTSEL_EV_RFC_IN_EV1 \
                                0x00000060  // RF Core input event 1 
#define EVENT_GPT0BCAPTSEL_EV_AUX_AON_WU_EV \
                                0x00000069  // AUX_MCU_TRIGGER[0] 
#define EVENT_GPT0BCAPTSEL_EV_AUX_SOC_COMPA \
                                0x0000006A  // AUX_MCU_TRIGGER[1] 
#define EVENT_GPT0BCAPTSEL_EV_AUX_SOC_COMPB \
                                0x0000006B  // AUX_MCU_TRIGGER[2] 
#define EVENT_GPT0BCAPTSEL_EV_AUX_TDC_DONE \
                                0x0000006C  // AUX_MCU_TRIGGER[3] 
#define EVENT_GPT0BCAPTSEL_EV_AUX_TIMER0_EV \
                                0x0000006D  // AUX_MCU_TRIGGER[4] 
#define EVENT_GPT0BCAPTSEL_EV_AUX_TIMER1_EV \
                                0x0000006E  // AUX_MCU_TRIGGER[5] 
#define EVENT_GPT0BCAPTSEL_EV_AUX_SMPH_AUTOTAKE_DONE \
                                0x0000006F  // AUX_MCU_TRIGGER[6] 
#define EVENT_GPT0BCAPTSEL_EV_AUX_ADC_DONE \
                                0x00000070  // AUX_MCU_TRIGGER[7] 
#define EVENT_GPT0BCAPTSEL_EV_AUX_ADC_FIFO_ALMOST_FULL \
                                0x00000071  // AUX_MCU_TRIGGER[8] 
#define EVENT_GPT0BCAPTSEL_EV_AUX_OBSMUX0 \
                                0x00000072  // AUX_MCU_TRIGGER[9] 
#define EVENT_GPT0BCAPTSEL_EV_AUX_ADC_IRQ \
                                0x00000073  // AUX_MCU_TRIGGER[10] 
#define EVENT_GPT0BCAPTSEL_EV_AON_RTC_UPD \
                                0x00000077  // AON_RTC_UPD 
#define EVENT_GPT0BCAPTSEL_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_GPT1ACAPTSEL register.
//
//*****************************************************************************
#define EVENT_GPT1ACAPTSEL_EV_M 0x0000007F  // Read/write selection value 
#define EVENT_GPT1ACAPTSEL_EV_S 0
#define EVENT_GPT1ACAPTSEL_EV_NONE \
                                0x00000000  // "0" 
#define EVENT_GPT1ACAPTSEL_EV_AON_GPIO_EDGE \
                                0x00000004  // AON Edge detect 
#define EVENT_GPT1ACAPTSEL_EV_AON_SPIS_BYTE_DONE \
                                0x00000005  // AON SPIS RTX 
#define EVENT_GPT1ACAPTSEL_EV_AON_SPIS_CS \
                                0x00000006  // AON SPIS CS 
#define EVENT_GPT1ACAPTSEL_EV_AON_RTC_COMB \
                                0x00000007  // AON RTC 
#define EVENT_GPT1ACAPTSEL_EV_I2C_IRQ \
                                0x00000009  // I2C interrupt 
#define EVENT_GPT1ACAPTSEL_EV_AUX_COMB \
                                0x0000000B  // AUX Mcu_event_comb 
#define EVENT_GPT1ACAPTSEL_EV_FLASH \
                                0x00000015  // Flash 
#define EVENT_GPT1ACAPTSEL_EV_RFC_CMD_ACK \
                                0x00000019  // RF command acknowledge 
#define EVENT_GPT1ACAPTSEL_EV_RFC_HW_COMB \
                                0x0000001A  // RF hw 
#define EVENT_GPT1ACAPTSEL_EV_RFC_CPE_0 \
                                0x0000001B  // RF cpe_0 
#define EVENT_GPT1ACAPTSEL_EV_RFC_CPE_1 \
                                0x0000001E  // RF cpe_1 
#define EVENT_GPT1ACAPTSEL_EV_SSI0_COMB \
                                0x00000022  // SSI0 combined 
#define EVENT_GPT1ACAPTSEL_EV_SSI1_COMB \
                                0x00000023  // SSI1 combined 
#define EVENT_GPT1ACAPTSEL_EV_UART0_COMB \
                                0x00000024  // UART0 combined 
#define EVENT_GPT1ACAPTSEL_EV_GPT0A_CMP \
                                0x0000003D  // GPT0 compare A 
#define EVENT_GPT1ACAPTSEL_EV_GPT0B_CMP \
                                0x0000003E  // GPT0 compare B 
#define EVENT_GPT1ACAPTSEL_EV_GPT1A_CMP \
                                0x0000003F  // GPT1 compare A 
#define EVENT_GPT1ACAPTSEL_EV_GPT1B_CMP \
                                0x00000040  // GPT1 compare B 
#define EVENT_GPT1ACAPTSEL_EV_GPT2A_CMP \
                                0x00000041  // GPT2 compare A 
#define EVENT_GPT1ACAPTSEL_EV_GPT2B_CMP \
                                0x00000042  // GPT2 compare B 
#define EVENT_GPT1ACAPTSEL_EV_GPT3A_CMP \
                                0x00000043  // GPT3 compare A 
#define EVENT_GPT1ACAPTSEL_EV_GPT3B_CMP \
                                0x00000044  // GPT3 compare B 
#define EVENT_GPT1ACAPTSEL_EV_GPT1A_CAPT_DIO \
                                0x00000057  // pad inputs for GPT subscribers 
                                            // - 2 
#define EVENT_GPT1ACAPTSEL_EV_GPT1B_CAPT_DIO \
                                0x00000058  // pad inputs for GPT subscribers 
                                            // - 3 
#define EVENT_GPT1ACAPTSEL_EV_RFC_IN_EV0 \
                                0x0000005F  // RF Core input event 0 
#define EVENT_GPT1ACAPTSEL_EV_RFC_IN_EV1 \
                                0x00000060  // RF Core input event 1 
#define EVENT_GPT1ACAPTSEL_EV_AUX_AON_WU_EV \
                                0x00000069  // AUX_MCU_TRIGGER[0] 
#define EVENT_GPT1ACAPTSEL_EV_AUX_SOC_COMPA \
                                0x0000006A  // AUX_MCU_TRIGGER[1] 
#define EVENT_GPT1ACAPTSEL_EV_AUX_SOC_COMPB \
                                0x0000006B  // AUX_MCU_TRIGGER[2] 
#define EVENT_GPT1ACAPTSEL_EV_AUX_TDC_DONE \
                                0x0000006C  // AUX_MCU_TRIGGER[3] 
#define EVENT_GPT1ACAPTSEL_EV_AUX_TIMER0_EV \
                                0x0000006D  // AUX_MCU_TRIGGER[4] 
#define EVENT_GPT1ACAPTSEL_EV_AUX_TIMER1_EV \
                                0x0000006E  // AUX_MCU_TRIGGER[5] 
#define EVENT_GPT1ACAPTSEL_EV_AUX_SMPH_AUTOTAKE_DONE \
                                0x0000006F  // AUX_MCU_TRIGGER[6] 
#define EVENT_GPT1ACAPTSEL_EV_AUX_ADC_DONE \
                                0x00000070  // AUX_MCU_TRIGGER[7] 
#define EVENT_GPT1ACAPTSEL_EV_AUX_ADC_FIFO_ALMOST_FULL \
                                0x00000071  // AUX_MCU_TRIGGER[8] 
#define EVENT_GPT1ACAPTSEL_EV_AUX_OBSMUX0 \
                                0x00000072  // AUX_MCU_TRIGGER[9] 
#define EVENT_GPT1ACAPTSEL_EV_AUX_ADC_IRQ \
                                0x00000073  // AUX_MCU_TRIGGER[10] 
#define EVENT_GPT1ACAPTSEL_EV_AON_RTC_UPD \
                                0x00000077  // AON_RTC_UPD 
#define EVENT_GPT1ACAPTSEL_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_GPT1BCAPTSEL register.
//
//*****************************************************************************
#define EVENT_GPT1BCAPTSEL_EV_M 0x0000007F  // Read/write selection value 
#define EVENT_GPT1BCAPTSEL_EV_S 0
#define EVENT_GPT1BCAPTSEL_EV_NONE \
                                0x00000000  // "0" 
#define EVENT_GPT1BCAPTSEL_EV_AON_GPIO_EDGE \
                                0x00000004  // AON Edge detect 
#define EVENT_GPT1BCAPTSEL_EV_AON_SPIS_BYTE_DONE \
                                0x00000005  // AON SPIS RTX 
#define EVENT_GPT1BCAPTSEL_EV_AON_SPIS_CS \
                                0x00000006  // AON SPIS CS 
#define EVENT_GPT1BCAPTSEL_EV_AON_RTC_COMB \
                                0x00000007  // AON RTC 
#define EVENT_GPT1BCAPTSEL_EV_I2C_IRQ \
                                0x00000009  // I2C interrupt 
#define EVENT_GPT1BCAPTSEL_EV_AUX_COMB \
                                0x0000000B  // AUX Mcu_event_comb 
#define EVENT_GPT1BCAPTSEL_EV_FLASH \
                                0x00000015  // Flash 
#define EVENT_GPT1BCAPTSEL_EV_RFC_CMD_ACK \
                                0x00000019  // RF command acknowledge 
#define EVENT_GPT1BCAPTSEL_EV_RFC_HW_COMB \
                                0x0000001A  // RF hw 
#define EVENT_GPT1BCAPTSEL_EV_RFC_CPE_0 \
                                0x0000001B  // RF cpe_0 
#define EVENT_GPT1BCAPTSEL_EV_RFC_CPE_1 \
                                0x0000001E  // RF cpe_1 
#define EVENT_GPT1BCAPTSEL_EV_SSI0_COMB \
                                0x00000022  // SSI0 combined 
#define EVENT_GPT1BCAPTSEL_EV_SSI1_COMB \
                                0x00000023  // SSI1 combined 
#define EVENT_GPT1BCAPTSEL_EV_UART0_COMB \
                                0x00000024  // UART0 combined 
#define EVENT_GPT1BCAPTSEL_EV_GPT0A_CMP \
                                0x0000003D  // GPT0 compare A 
#define EVENT_GPT1BCAPTSEL_EV_GPT0B_CMP \
                                0x0000003E  // GPT0 compare B 
#define EVENT_GPT1BCAPTSEL_EV_GPT1A_CMP \
                                0x0000003F  // GPT1 compare A 
#define EVENT_GPT1BCAPTSEL_EV_GPT1B_CMP \
                                0x00000040  // GPT1 compare B 
#define EVENT_GPT1BCAPTSEL_EV_GPT2A_CMP \
                                0x00000041  // GPT2 compare A 
#define EVENT_GPT1BCAPTSEL_EV_GPT2B_CMP \
                                0x00000042  // GPT2 compare B 
#define EVENT_GPT1BCAPTSEL_EV_GPT3A_CMP \
                                0x00000043  // GPT3 compare A 
#define EVENT_GPT1BCAPTSEL_EV_GPT3B_CMP \
                                0x00000044  // GPT3 compare B 
#define EVENT_GPT1BCAPTSEL_EV_GPT1A_CAPT_DIO \
                                0x00000057  // pad inputs for GPT subscribers 
                                            // - 2 
#define EVENT_GPT1BCAPTSEL_EV_GPT1B_CAPT_DIO \
                                0x00000058  // pad inputs for GPT subscribers 
                                            // - 3 
#define EVENT_GPT1BCAPTSEL_EV_RFC_IN_EV0 \
                                0x0000005F  // RF Core input event 0 
#define EVENT_GPT1BCAPTSEL_EV_RFC_IN_EV1 \
                                0x00000060  // RF Core input event 1 
#define EVENT_GPT1BCAPTSEL_EV_AUX_AON_WU_EV \
                                0x00000069  // AUX_MCU_TRIGGER[0] 
#define EVENT_GPT1BCAPTSEL_EV_AUX_SOC_COMPA \
                                0x0000006A  // AUX_MCU_TRIGGER[1] 
#define EVENT_GPT1BCAPTSEL_EV_AUX_SOC_COMPB \
                                0x0000006B  // AUX_MCU_TRIGGER[2] 
#define EVENT_GPT1BCAPTSEL_EV_AUX_TDC_DONE \
                                0x0000006C  // AUX_MCU_TRIGGER[3] 
#define EVENT_GPT1BCAPTSEL_EV_AUX_TIMER0_EV \
                                0x0000006D  // AUX_MCU_TRIGGER[4] 
#define EVENT_GPT1BCAPTSEL_EV_AUX_TIMER1_EV \
                                0x0000006E  // AUX_MCU_TRIGGER[5] 
#define EVENT_GPT1BCAPTSEL_EV_AUX_SMPH_AUTOTAKE_DONE \
                                0x0000006F  // AUX_MCU_TRIGGER[6] 
#define EVENT_GPT1BCAPTSEL_EV_AUX_ADC_DONE \
                                0x00000070  // AUX_MCU_TRIGGER[7] 
#define EVENT_GPT1BCAPTSEL_EV_AUX_ADC_FIFO_ALMOST_FULL \
                                0x00000071  // AUX_MCU_TRIGGER[8] 
#define EVENT_GPT1BCAPTSEL_EV_AUX_OBSMUX0 \
                                0x00000072  // AUX_MCU_TRIGGER[9] 
#define EVENT_GPT1BCAPTSEL_EV_AUX_ADC_IRQ \
                                0x00000073  // AUX_MCU_TRIGGER[10] 
#define EVENT_GPT1BCAPTSEL_EV_AON_RTC_UPD \
                                0x00000077  // AON_RTC_UPD 
#define EVENT_GPT1BCAPTSEL_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_GPT2ACAPTSEL register.
//
//*****************************************************************************
#define EVENT_GPT2ACAPTSEL_EV_M 0x0000007F  // Read/write selection value 
#define EVENT_GPT2ACAPTSEL_EV_S 0
#define EVENT_GPT2ACAPTSEL_EV_NONE \
                                0x00000000  // "0" 
#define EVENT_GPT2ACAPTSEL_EV_AON_GPIO_EDGE \
                                0x00000004  // AON Edge detect 
#define EVENT_GPT2ACAPTSEL_EV_AON_SPIS_BYTE_DONE \
                                0x00000005  // AON SPIS RTX 
#define EVENT_GPT2ACAPTSEL_EV_AON_SPIS_CS \
                                0x00000006  // AON SPIS CS 
#define EVENT_GPT2ACAPTSEL_EV_AON_RTC_COMB \
                                0x00000007  // AON RTC 
#define EVENT_GPT2ACAPTSEL_EV_I2C_IRQ \
                                0x00000009  // I2C interrupt 
#define EVENT_GPT2ACAPTSEL_EV_AUX_COMB \
                                0x0000000B  // AUX Mcu_event_comb 
#define EVENT_GPT2ACAPTSEL_EV_FLASH \
                                0x00000015  // Flash 
#define EVENT_GPT2ACAPTSEL_EV_RFC_CMD_ACK \
                                0x00000019  // RF command acknowledge 
#define EVENT_GPT2ACAPTSEL_EV_RFC_HW_COMB \
                                0x0000001A  // RF hw 
#define EVENT_GPT2ACAPTSEL_EV_RFC_CPE_0 \
                                0x0000001B  // RF cpe_0 
#define EVENT_GPT2ACAPTSEL_EV_RFC_CPE_1 \
                                0x0000001E  // RF cpe_1 
#define EVENT_GPT2ACAPTSEL_EV_SSI0_COMB \
                                0x00000022  // SSI0 combined 
#define EVENT_GPT2ACAPTSEL_EV_SSI1_COMB \
                                0x00000023  // SSI1 combined 
#define EVENT_GPT2ACAPTSEL_EV_UART0_COMB \
                                0x00000024  // UART0 combined 
#define EVENT_GPT2ACAPTSEL_EV_GPT0A_CMP \
                                0x0000003D  // GPT0 compare A 
#define EVENT_GPT2ACAPTSEL_EV_GPT0B_CMP \
                                0x0000003E  // GPT0 compare B 
#define EVENT_GPT2ACAPTSEL_EV_GPT1A_CMP \
                                0x0000003F  // GPT1 compare A 
#define EVENT_GPT2ACAPTSEL_EV_GPT1B_CMP \
                                0x00000040  // GPT1 compare B 
#define EVENT_GPT2ACAPTSEL_EV_GPT2A_CMP \
                                0x00000041  // GPT2 compare A 
#define EVENT_GPT2ACAPTSEL_EV_GPT2B_CMP \
                                0x00000042  // GPT2 compare B 
#define EVENT_GPT2ACAPTSEL_EV_GPT3A_CMP \
                                0x00000043  // GPT3 compare A 
#define EVENT_GPT2ACAPTSEL_EV_GPT3B_CMP \
                                0x00000044  // GPT3 compare B 
#define EVENT_GPT2ACAPTSEL_EV_GPT2A_CAPT_DIO \
                                0x00000059  // pad inputs for GPT subscribers 
                                            // - 4 
#define EVENT_GPT2ACAPTSEL_EV_GPT2B_CAPT_DIO \
                                0x0000005A  // pad inputs for GPT subscribers 
                                            // - 5 
#define EVENT_GPT2ACAPTSEL_EV_RFC_IN_EV2 \
                                0x00000061  // RF Core input event 2 
#define EVENT_GPT2ACAPTSEL_EV_RFC_IN_EV3 \
                                0x00000062  // RF Core input event 3 
#define EVENT_GPT2ACAPTSEL_EV_AUX_AON_WU_EV \
                                0x00000069  // AUX_MCU_TRIGGER[0] 
#define EVENT_GPT2ACAPTSEL_EV_AUX_SOC_COMPA \
                                0x0000006A  // AUX_MCU_TRIGGER[1] 
#define EVENT_GPT2ACAPTSEL_EV_AUX_SOC_COMPB \
                                0x0000006B  // AUX_MCU_TRIGGER[2] 
#define EVENT_GPT2ACAPTSEL_EV_AUX_TDC_DONE \
                                0x0000006C  // AUX_MCU_TRIGGER[3] 
#define EVENT_GPT2ACAPTSEL_EV_AUX_TIMER0_EV \
                                0x0000006D  // AUX_MCU_TRIGGER[4] 
#define EVENT_GPT2ACAPTSEL_EV_AUX_TIMER1_EV \
                                0x0000006E  // AUX_MCU_TRIGGER[5] 
#define EVENT_GPT2ACAPTSEL_EV_AUX_SMPH_AUTOTAKE_DONE \
                                0x0000006F  // AUX_MCU_TRIGGER[6] 
#define EVENT_GPT2ACAPTSEL_EV_AUX_ADC_DONE \
                                0x00000070  // AUX_MCU_TRIGGER[7] 
#define EVENT_GPT2ACAPTSEL_EV_AUX_ADC_FIFO_ALMOST_FULL \
                                0x00000071  // AUX_MCU_TRIGGER[8] 
#define EVENT_GPT2ACAPTSEL_EV_AUX_OBSMUX0 \
                                0x00000072  // AUX_MCU_TRIGGER[9] 
#define EVENT_GPT2ACAPTSEL_EV_AUX_ADC_IRQ \
                                0x00000073  // AUX_MCU_TRIGGER[10] 
#define EVENT_GPT2ACAPTSEL_EV_AON_RTC_UPD \
                                0x00000077  // AON_RTC_UPD 
#define EVENT_GPT2ACAPTSEL_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_GPT2BCAPTSEL register.
//
//*****************************************************************************
#define EVENT_GPT2BCAPTSEL_EV_M 0x0000007F  // Read/write selection value 
#define EVENT_GPT2BCAPTSEL_EV_S 0
#define EVENT_GPT2BCAPTSEL_EV_NONE \
                                0x00000000  // "0" 
#define EVENT_GPT2BCAPTSEL_EV_AON_GPIO_EDGE \
                                0x00000004  // AON Edge detect 
#define EVENT_GPT2BCAPTSEL_EV_AON_SPIS_BYTE_DONE \
                                0x00000005  // AON SPIS RTX 
#define EVENT_GPT2BCAPTSEL_EV_AON_SPIS_CS \
                                0x00000006  // AON SPIS CS 
#define EVENT_GPT2BCAPTSEL_EV_AON_RTC_COMB \
                                0x00000007  // AON RTC 
#define EVENT_GPT2BCAPTSEL_EV_I2C_IRQ \
                                0x00000009  // I2C interrupt 
#define EVENT_GPT2BCAPTSEL_EV_AUX_COMB \
                                0x0000000B  // AUX Mcu_event_comb 
#define EVENT_GPT2BCAPTSEL_EV_FLASH \
                                0x00000015  // Flash 
#define EVENT_GPT2BCAPTSEL_EV_RFC_CMD_ACK \
                                0x00000019  // RF command acknowledge 
#define EVENT_GPT2BCAPTSEL_EV_RFC_HW_COMB \
                                0x0000001A  // RF hw 
#define EVENT_GPT2BCAPTSEL_EV_RFC_CPE_0 \
                                0x0000001B  // RF cpe_0 
#define EVENT_GPT2BCAPTSEL_EV_RFC_CPE_1 \
                                0x0000001E  // RF cpe_1 
#define EVENT_GPT2BCAPTSEL_EV_SSI0_COMB \
                                0x00000022  // SSI0 combined 
#define EVENT_GPT2BCAPTSEL_EV_SSI1_COMB \
                                0x00000023  // SSI1 combined 
#define EVENT_GPT2BCAPTSEL_EV_UART0_COMB \
                                0x00000024  // UART0 combined 
#define EVENT_GPT2BCAPTSEL_EV_GPT0A_CMP \
                                0x0000003D  // GPT0 compare A 
#define EVENT_GPT2BCAPTSEL_EV_GPT0B_CMP \
                                0x0000003E  // GPT0 compare B 
#define EVENT_GPT2BCAPTSEL_EV_GPT1A_CMP \
                                0x0000003F  // GPT1 compare A 
#define EVENT_GPT2BCAPTSEL_EV_GPT1B_CMP \
                                0x00000040  // GPT1 compare B 
#define EVENT_GPT2BCAPTSEL_EV_GPT2A_CMP \
                                0x00000041  // GPT2 compare A 
#define EVENT_GPT2BCAPTSEL_EV_GPT2B_CMP \
                                0x00000042  // GPT2 compare B 
#define EVENT_GPT2BCAPTSEL_EV_GPT3A_CMP \
                                0x00000043  // GPT3 compare A 
#define EVENT_GPT2BCAPTSEL_EV_GPT3B_CMP \
                                0x00000044  // GPT3 compare B 
#define EVENT_GPT2BCAPTSEL_EV_GPT2A_CAPT_DIO \
                                0x00000059  // pad inputs for GPT subscribers 
                                            // - 4 
#define EVENT_GPT2BCAPTSEL_EV_GPT2B_CAPT_DIO \
                                0x0000005A  // pad inputs for GPT subscribers 
                                            // - 5 
#define EVENT_GPT2BCAPTSEL_EV_RFC_IN_EV2 \
                                0x00000061  // RF Core input event 2 
#define EVENT_GPT2BCAPTSEL_EV_RFC_IN_EV3 \
                                0x00000062  // RF Core input event 3 
#define EVENT_GPT2BCAPTSEL_EV_AUX_AON_WU_EV \
                                0x00000069  // AUX_MCU_TRIGGER[0] 
#define EVENT_GPT2BCAPTSEL_EV_AUX_SOC_COMPA \
                                0x0000006A  // AUX_MCU_TRIGGER[1] 
#define EVENT_GPT2BCAPTSEL_EV_AUX_SOC_COMPB \
                                0x0000006B  // AUX_MCU_TRIGGER[2] 
#define EVENT_GPT2BCAPTSEL_EV_AUX_TDC_DONE \
                                0x0000006C  // AUX_MCU_TRIGGER[3] 
#define EVENT_GPT2BCAPTSEL_EV_AUX_TIMER0_EV \
                                0x0000006D  // AUX_MCU_TRIGGER[4] 
#define EVENT_GPT2BCAPTSEL_EV_AUX_TIMER1_EV \
                                0x0000006E  // AUX_MCU_TRIGGER[5] 
#define EVENT_GPT2BCAPTSEL_EV_AUX_SMPH_AUTOTAKE_DONE \
                                0x0000006F  // AUX_MCU_TRIGGER[6] 
#define EVENT_GPT2BCAPTSEL_EV_AUX_ADC_DONE \
                                0x00000070  // AUX_MCU_TRIGGER[7] 
#define EVENT_GPT2BCAPTSEL_EV_AUX_ADC_FIFO_ALMOST_FULL \
                                0x00000071  // AUX_MCU_TRIGGER[8] 
#define EVENT_GPT2BCAPTSEL_EV_AUX_OBSMUX0 \
                                0x00000072  // AUX_MCU_TRIGGER[9] 
#define EVENT_GPT2BCAPTSEL_EV_AUX_ADC_IRQ \
                                0x00000073  // AUX_MCU_TRIGGER[10] 
#define EVENT_GPT2BCAPTSEL_EV_AON_RTC_UPD \
                                0x00000077  // AON_RTC_UPD 
#define EVENT_GPT2BCAPTSEL_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH0SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH0SSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH0SSEL_EV_S  0
#define EVENT_UDMACH0SSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH0BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH0BSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH0BSEL_EV_S  0
#define EVENT_UDMACH0BSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH1SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH1SSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH1SSEL_EV_S  0
#define EVENT_UDMACH1SSEL_EV_UART0_RX_DMASREQ \
                                0x00000031  // UART0 Rx single 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH1BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH1BSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH1BSEL_EV_S  0
#define EVENT_UDMACH1BSEL_EV_UART0_RX_DMABREQ \
                                0x00000030  // UART0 Rx burst 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH2SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH2SSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH2SSEL_EV_S  0
#define EVENT_UDMACH2SSEL_EV_UART0_TX_DMASREQ \
                                0x00000033  // UART0 Tx single 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH2BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH2BSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH2BSEL_EV_S  0
#define EVENT_UDMACH2BSEL_EV_UART0_TX_DMABREQ \
                                0x00000032  // UART0 Tx burst 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH3SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH3SSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH3SSEL_EV_S  0
#define EVENT_UDMACH3SSEL_EV_SSI0_RX_DMASREQ \
                                0x00000029  // SSI0 Rx single 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH3BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH3BSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH3BSEL_EV_S  0
#define EVENT_UDMACH3BSEL_EV_SSI0_RX_DMABREQ \
                                0x00000028  // SSI0 Rx burst 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH4SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH4SSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH4SSEL_EV_S  0
#define EVENT_UDMACH4SSEL_EV_SSI0_TX_DMASREQ \
                                0x0000002B  // SSI0 Tx single 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH4BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH4BSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH4BSEL_EV_S  0
#define EVENT_UDMACH4BSEL_EV_SSI0_TX_DMABREQ \
                                0x0000002A  // SSI0 Tx burst 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH5SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH5SSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH5SSEL_EV_S  0
#define EVENT_UDMACH5SSEL_EV_SPIS_RXF_DMASREQ \
                                0x0000003A  // AON_SPIS_RX single 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH5BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH5BSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH5BSEL_EV_S  0
#define EVENT_UDMACH5BSEL_EV_SPIS_RXF_DMABREQ \
                                0x00000039  // AON_SPIS_RX burst 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH6SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH6SSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH6SSEL_EV_S  0
#define EVENT_UDMACH6SSEL_EV_SPIS_TXF_DMASREQ \
                                0x0000003C  // AON_SPIS_TX single 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH6BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH6BSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH6BSEL_EV_S  0
#define EVENT_UDMACH6BSEL_EV_SPIS_TXF_DMABREQ \
                                0x0000003B  // AON_SPIS_TX burst 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH7SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH7SSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH7SSEL_EV_S  0
#define EVENT_UDMACH7SSEL_EV_AUX_ADC_DMASREQ \
                                0x0000003B  // AON_SPIS_TX burst 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH7BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH7BSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH7BSEL_EV_S  0
#define EVENT_UDMACH7BSEL_EV_AUX_DMABREQ \
                                0x00000076  // aux_dma_req 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH8SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH8SSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH8SSEL_EV_S  0
#define EVENT_UDMACH8SSEL_EV_AUX_SW_DMABREQ \
                                0x00000074  // aux_dma_sw_sreq 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH8BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH8BSEL_EV_M  0x0000007F  // Read only selection value 
#define EVENT_UDMACH8BSEL_EV_S  0
#define EVENT_UDMACH8BSEL_EV_AUX_SW_DMABREQ \
                                0x00000074  // aux_dma_sw_sreq 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH9SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH9SSEL_EV_M  0x0000007F  // selection value 
#define EVENT_UDMACH9SSEL_EV_S  0
#define EVENT_UDMACH9SSEL_EV_GPT0A_DMASREQ \
                                0x00000045  // GPT SREQ timer 0A 
#define EVENT_UDMACH9SSEL_EV_GPT0B_DMASREQ \
                                0x00000046  // GPT SREQ timer 0B 
#define EVENT_UDMACH9SSEL_EV_GPT1A_DMASREQ \
                                0x00000047  // GPT SREQ timer 1A 
#define EVENT_UDMACH9SSEL_EV_GPT1B_DMASREQ \
                                0x00000048  // GPT SREQ timer 1B 
#define EVENT_UDMACH9SSEL_EV_GPT2A_DMASREQ \
                                0x00000049  // GPT SREQ timer 2A 
#define EVENT_UDMACH9SSEL_EV_GPT2B_DMASREQ \
                                0x0000004A  // GPT SREQ timer 2B 
#define EVENT_UDMACH9SSEL_EV_GPT3A_DMASREQ \
                                0x0000004B  // GPT SREQ timer 3A 
#define EVENT_UDMACH9SSEL_EV_GPT3B_DMASREQ \
                                0x0000004C  // GPT SREQ timer 3B 
#define EVENT_UDMACH9SSEL_EV_GPT0A_DMABREQ \
                                0x0000004D  // GPT REQ timer 0A 
#define EVENT_UDMACH9SSEL_EV_GPT0B_DMABREQ \
                                0x0000004E  // GPT REQ timer 0B 
#define EVENT_UDMACH9SSEL_EV_GPT1A_DMABREQ \
                                0x0000004F  // GPT REQ timer 1A 
#define EVENT_UDMACH9SSEL_EV_GPT1B_DMABREQ \
                                0x00000050  // GPT REQ timer 1B 
#define EVENT_UDMACH9SSEL_EV_GPT2A_DMABREQ \
                                0x00000051  // GPT REQ timer 2A 
#define EVENT_UDMACH9SSEL_EV_GPT2B_DMABREQ \
                                0x00000052  // GPT REQ timer 2B 
#define EVENT_UDMACH9SSEL_EV_GPT3A_DMABREQ \
                                0x00000053  // GPT REQ timer 3A 
#define EVENT_UDMACH9SSEL_EV_GPT3B_DMABREQ \
                                0x00000054  // GPT REQ timer 3B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH9BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH9BSEL_EV_M  0x0000007F  // selection value 
#define EVENT_UDMACH9BSEL_EV_S  0
#define EVENT_UDMACH9BSEL_EV_GPT0A_DMASREQ \
                                0x00000045  // GPT SREQ timer 0A 
#define EVENT_UDMACH9BSEL_EV_GPT0B_DMASREQ \
                                0x00000046  // GPT SREQ timer 0B 
#define EVENT_UDMACH9BSEL_EV_GPT1A_DMASREQ \
                                0x00000047  // GPT SREQ timer 1A 
#define EVENT_UDMACH9BSEL_EV_GPT1B_DMASREQ \
                                0x00000048  // GPT SREQ timer 1B 
#define EVENT_UDMACH9BSEL_EV_GPT2A_DMASREQ \
                                0x00000049  // GPT SREQ timer 2A 
#define EVENT_UDMACH9BSEL_EV_GPT2B_DMASREQ \
                                0x0000004A  // GPT SREQ timer 2B 
#define EVENT_UDMACH9BSEL_EV_GPT3A_DMASREQ \
                                0x0000004B  // GPT SREQ timer 3A 
#define EVENT_UDMACH9BSEL_EV_GPT3B_DMASREQ \
                                0x0000004C  // GPT SREQ timer 3B 
#define EVENT_UDMACH9BSEL_EV_GPT0A_DMABREQ \
                                0x0000004D  // GPT REQ timer 0A 
#define EVENT_UDMACH9BSEL_EV_GPT0B_DMABREQ \
                                0x0000004E  // GPT REQ timer 0B 
#define EVENT_UDMACH9BSEL_EV_GPT1A_DMABREQ \
                                0x0000004F  // GPT REQ timer 1A 
#define EVENT_UDMACH9BSEL_EV_GPT1B_DMABREQ \
                                0x00000050  // GPT REQ timer 1B 
#define EVENT_UDMACH9BSEL_EV_GPT2A_DMABREQ \
                                0x00000051  // GPT REQ timer 2A 
#define EVENT_UDMACH9BSEL_EV_GPT2B_DMABREQ \
                                0x00000052  // GPT REQ timer 2B 
#define EVENT_UDMACH9BSEL_EV_GPT3A_DMABREQ \
                                0x00000053  // GPT REQ timer 3A 
#define EVENT_UDMACH9BSEL_EV_GPT3B_DMABREQ \
                                0x00000054  // GPT REQ timer 3B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH10SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH10SSEL_EV_M 0x0000007F  // selection value 
#define EVENT_UDMACH10SSEL_EV_S 0
#define EVENT_UDMACH10SSEL_EV_GPT0A_DMASREQ \
                                0x00000045  // GPT SREQ timer 0A 
#define EVENT_UDMACH10SSEL_EV_GPT0B_DMASREQ \
                                0x00000046  // GPT SREQ timer 0B 
#define EVENT_UDMACH10SSEL_EV_GPT1A_DMASREQ \
                                0x00000047  // GPT SREQ timer 1A 
#define EVENT_UDMACH10SSEL_EV_GPT1B_DMASREQ \
                                0x00000048  // GPT SREQ timer 1B 
#define EVENT_UDMACH10SSEL_EV_GPT2A_DMASREQ \
                                0x00000049  // GPT SREQ timer 2A 
#define EVENT_UDMACH10SSEL_EV_GPT2B_DMASREQ \
                                0x0000004A  // GPT SREQ timer 2B 
#define EVENT_UDMACH10SSEL_EV_GPT3A_DMASREQ \
                                0x0000004B  // GPT SREQ timer 3A 
#define EVENT_UDMACH10SSEL_EV_GPT3B_DMASREQ \
                                0x0000004C  // GPT SREQ timer 3B 
#define EVENT_UDMACH10SSEL_EV_GPT0A_DMABREQ \
                                0x0000004D  // GPT REQ timer 0A 
#define EVENT_UDMACH10SSEL_EV_GPT0B_DMABREQ \
                                0x0000004E  // GPT REQ timer 0B 
#define EVENT_UDMACH10SSEL_EV_GPT1A_DMABREQ \
                                0x0000004F  // GPT REQ timer 1A 
#define EVENT_UDMACH10SSEL_EV_GPT1B_DMABREQ \
                                0x00000050  // GPT REQ timer 1B 
#define EVENT_UDMACH10SSEL_EV_GPT2A_DMABREQ \
                                0x00000051  // GPT REQ timer 2A 
#define EVENT_UDMACH10SSEL_EV_GPT2B_DMABREQ \
                                0x00000052  // GPT REQ timer 2B 
#define EVENT_UDMACH10SSEL_EV_GPT3A_DMABREQ \
                                0x00000053  // GPT REQ timer 3A 
#define EVENT_UDMACH10SSEL_EV_GPT3B_DMABREQ \
                                0x00000054  // GPT REQ timer 3B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH10BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH10BSEL_EV_M 0x0000007F  // selection value 
#define EVENT_UDMACH10BSEL_EV_S 0
#define EVENT_UDMACH10BSEL_EV_GPT0A_DMASREQ \
                                0x00000045  // GPT SREQ timer 0A 
#define EVENT_UDMACH10BSEL_EV_GPT0B_DMASREQ \
                                0x00000046  // GPT SREQ timer 0B 
#define EVENT_UDMACH10BSEL_EV_GPT1A_DMASREQ \
                                0x00000047  // GPT SREQ timer 1A 
#define EVENT_UDMACH10BSEL_EV_GPT1B_DMASREQ \
                                0x00000048  // GPT SREQ timer 1B 
#define EVENT_UDMACH10BSEL_EV_GPT2A_DMASREQ \
                                0x00000049  // GPT SREQ timer 2A 
#define EVENT_UDMACH10BSEL_EV_GPT2B_DMASREQ \
                                0x0000004A  // GPT SREQ timer 2B 
#define EVENT_UDMACH10BSEL_EV_GPT3A_DMASREQ \
                                0x0000004B  // GPT SREQ timer 3A 
#define EVENT_UDMACH10BSEL_EV_GPT3B_DMASREQ \
                                0x0000004C  // GPT SREQ timer 3B 
#define EVENT_UDMACH10BSEL_EV_GPT0A_DMABREQ \
                                0x0000004D  // GPT REQ timer 0A 
#define EVENT_UDMACH10BSEL_EV_GPT0B_DMABREQ \
                                0x0000004E  // GPT REQ timer 0B 
#define EVENT_UDMACH10BSEL_EV_GPT1A_DMABREQ \
                                0x0000004F  // GPT REQ timer 1A 
#define EVENT_UDMACH10BSEL_EV_GPT1B_DMABREQ \
                                0x00000050  // GPT REQ timer 1B 
#define EVENT_UDMACH10BSEL_EV_GPT2A_DMABREQ \
                                0x00000051  // GPT REQ timer 2A 
#define EVENT_UDMACH10BSEL_EV_GPT2B_DMABREQ \
                                0x00000052  // GPT REQ timer 2B 
#define EVENT_UDMACH10BSEL_EV_GPT3A_DMABREQ \
                                0x00000053  // GPT REQ timer 3A 
#define EVENT_UDMACH10BSEL_EV_GPT3B_DMABREQ \
                                0x00000054  // GPT REQ timer 3B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH11SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH11SSEL_EV_M 0x0000007F  // selection value 
#define EVENT_UDMACH11SSEL_EV_S 0
#define EVENT_UDMACH11SSEL_EV_GPT0A_DMASREQ \
                                0x00000045  // GPT SREQ timer 0A 
#define EVENT_UDMACH11SSEL_EV_GPT0B_DMASREQ \
                                0x00000046  // GPT SREQ timer 0B 
#define EVENT_UDMACH11SSEL_EV_GPT1A_DMASREQ \
                                0x00000047  // GPT SREQ timer 1A 
#define EVENT_UDMACH11SSEL_EV_GPT1B_DMASREQ \
                                0x00000048  // GPT SREQ timer 1B 
#define EVENT_UDMACH11SSEL_EV_GPT2A_DMASREQ \
                                0x00000049  // GPT SREQ timer 2A 
#define EVENT_UDMACH11SSEL_EV_GPT2B_DMASREQ \
                                0x0000004A  // GPT SREQ timer 2B 
#define EVENT_UDMACH11SSEL_EV_GPT3A_DMASREQ \
                                0x0000004B  // GPT SREQ timer 3A 
#define EVENT_UDMACH11SSEL_EV_GPT3B_DMASREQ \
                                0x0000004C  // GPT SREQ timer 3B 
#define EVENT_UDMACH11SSEL_EV_GPT0A_DMABREQ \
                                0x0000004D  // GPT REQ timer 0A 
#define EVENT_UDMACH11SSEL_EV_GPT0B_DMABREQ \
                                0x0000004E  // GPT REQ timer 0B 
#define EVENT_UDMACH11SSEL_EV_GPT1A_DMABREQ \
                                0x0000004F  // GPT REQ timer 1A 
#define EVENT_UDMACH11SSEL_EV_GPT1B_DMABREQ \
                                0x00000050  // GPT REQ timer 1B 
#define EVENT_UDMACH11SSEL_EV_GPT2A_DMABREQ \
                                0x00000051  // GPT REQ timer 2A 
#define EVENT_UDMACH11SSEL_EV_GPT2B_DMABREQ \
                                0x00000052  // GPT REQ timer 2B 
#define EVENT_UDMACH11SSEL_EV_GPT3A_DMABREQ \
                                0x00000053  // GPT REQ timer 3A 
#define EVENT_UDMACH11SSEL_EV_GPT3B_DMABREQ \
                                0x00000054  // GPT REQ timer 3B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH11BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH11BSEL_EV_M 0x0000007F  // selection value 
#define EVENT_UDMACH11BSEL_EV_S 0
#define EVENT_UDMACH11BSEL_EV_GPT0A_DMASREQ \
                                0x00000045  // GPT SREQ timer 0A 
#define EVENT_UDMACH11BSEL_EV_GPT0B_DMASREQ \
                                0x00000046  // GPT SREQ timer 0B 
#define EVENT_UDMACH11BSEL_EV_GPT1A_DMASREQ \
                                0x00000047  // GPT SREQ timer 1A 
#define EVENT_UDMACH11BSEL_EV_GPT1B_DMASREQ \
                                0x00000048  // GPT SREQ timer 1B 
#define EVENT_UDMACH11BSEL_EV_GPT2A_DMASREQ \
                                0x00000049  // GPT SREQ timer 2A 
#define EVENT_UDMACH11BSEL_EV_GPT2B_DMASREQ \
                                0x0000004A  // GPT SREQ timer 2B 
#define EVENT_UDMACH11BSEL_EV_GPT3A_DMASREQ \
                                0x0000004B  // GPT SREQ timer 3A 
#define EVENT_UDMACH11BSEL_EV_GPT3B_DMASREQ \
                                0x0000004C  // GPT SREQ timer 3B 
#define EVENT_UDMACH11BSEL_EV_GPT0A_DMABREQ \
                                0x0000004D  // GPT REQ timer 0A 
#define EVENT_UDMACH11BSEL_EV_GPT0B_DMABREQ \
                                0x0000004E  // GPT REQ timer 0B 
#define EVENT_UDMACH11BSEL_EV_GPT1A_DMABREQ \
                                0x0000004F  // GPT REQ timer 1A 
#define EVENT_UDMACH11BSEL_EV_GPT1B_DMABREQ \
                                0x00000050  // GPT REQ timer 1B 
#define EVENT_UDMACH11BSEL_EV_GPT2A_DMABREQ \
                                0x00000051  // GPT REQ timer 2A 
#define EVENT_UDMACH11BSEL_EV_GPT2B_DMABREQ \
                                0x00000052  // GPT REQ timer 2B 
#define EVENT_UDMACH11BSEL_EV_GPT3A_DMABREQ \
                                0x00000053  // GPT REQ timer 3A 
#define EVENT_UDMACH11BSEL_EV_GPT3B_DMABREQ \
                                0x00000054  // GPT REQ timer 3B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH12SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH12SSEL_EV_M 0x0000007F  // selection value 
#define EVENT_UDMACH12SSEL_EV_S 0
#define EVENT_UDMACH12SSEL_EV_GPT0A_DMASREQ \
                                0x00000045  // GPT SREQ timer 0A 
#define EVENT_UDMACH12SSEL_EV_GPT0B_DMASREQ \
                                0x00000046  // GPT SREQ timer 0B 
#define EVENT_UDMACH12SSEL_EV_GPT1A_DMASREQ \
                                0x00000047  // GPT SREQ timer 1A 
#define EVENT_UDMACH12SSEL_EV_GPT1B_DMASREQ \
                                0x00000048  // GPT SREQ timer 1B 
#define EVENT_UDMACH12SSEL_EV_GPT2A_DMASREQ \
                                0x00000049  // GPT SREQ timer 2A 
#define EVENT_UDMACH12SSEL_EV_GPT2B_DMASREQ \
                                0x0000004A  // GPT SREQ timer 2B 
#define EVENT_UDMACH12SSEL_EV_GPT3A_DMASREQ \
                                0x0000004B  // GPT SREQ timer 3A 
#define EVENT_UDMACH12SSEL_EV_GPT3B_DMASREQ \
                                0x0000004C  // GPT SREQ timer 3B 
#define EVENT_UDMACH12SSEL_EV_GPT0A_DMABREQ \
                                0x0000004D  // GPT REQ timer 0A 
#define EVENT_UDMACH12SSEL_EV_GPT0B_DMABREQ \
                                0x0000004E  // GPT REQ timer 0B 
#define EVENT_UDMACH12SSEL_EV_GPT1A_DMABREQ \
                                0x0000004F  // GPT REQ timer 1A 
#define EVENT_UDMACH12SSEL_EV_GPT1B_DMABREQ \
                                0x00000050  // GPT REQ timer 1B 
#define EVENT_UDMACH12SSEL_EV_GPT2A_DMABREQ \
                                0x00000051  // GPT REQ timer 2A 
#define EVENT_UDMACH12SSEL_EV_GPT2B_DMABREQ \
                                0x00000052  // GPT REQ timer 2B 
#define EVENT_UDMACH12SSEL_EV_GPT3A_DMABREQ \
                                0x00000053  // GPT REQ timer 3A 
#define EVENT_UDMACH12SSEL_EV_GPT3B_DMABREQ \
                                0x00000054  // GPT REQ timer 3B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH12BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH12BSEL_EV_M 0x0000007F  // selection value 
#define EVENT_UDMACH12BSEL_EV_S 0
#define EVENT_UDMACH12BSEL_EV_GPT0A_DMASREQ \
                                0x00000045  // GPT SREQ timer 0A 
#define EVENT_UDMACH12BSEL_EV_GPT0B_DMASREQ \
                                0x00000046  // GPT SREQ timer 0B 
#define EVENT_UDMACH12BSEL_EV_GPT1A_DMASREQ \
                                0x00000047  // GPT SREQ timer 1A 
#define EVENT_UDMACH12BSEL_EV_GPT1B_DMASREQ \
                                0x00000048  // GPT SREQ timer 1B 
#define EVENT_UDMACH12BSEL_EV_GPT2A_DMASREQ \
                                0x00000049  // GPT SREQ timer 2A 
#define EVENT_UDMACH12BSEL_EV_GPT2B_DMASREQ \
                                0x0000004A  // GPT SREQ timer 2B 
#define EVENT_UDMACH12BSEL_EV_GPT3A_DMASREQ \
                                0x0000004B  // GPT SREQ timer 3A 
#define EVENT_UDMACH12BSEL_EV_GPT3B_DMASREQ \
                                0x0000004C  // GPT SREQ timer 3B 
#define EVENT_UDMACH12BSEL_EV_GPT0A_DMABREQ \
                                0x0000004D  // GPT REQ timer 0A 
#define EVENT_UDMACH12BSEL_EV_GPT0B_DMABREQ \
                                0x0000004E  // GPT REQ timer 0B 
#define EVENT_UDMACH12BSEL_EV_GPT1A_DMABREQ \
                                0x0000004F  // GPT REQ timer 1A 
#define EVENT_UDMACH12BSEL_EV_GPT1B_DMABREQ \
                                0x00000050  // GPT REQ timer 1B 
#define EVENT_UDMACH12BSEL_EV_GPT2A_DMABREQ \
                                0x00000051  // GPT REQ timer 2A 
#define EVENT_UDMACH12BSEL_EV_GPT2B_DMABREQ \
                                0x00000052  // GPT REQ timer 2B 
#define EVENT_UDMACH12BSEL_EV_GPT3A_DMABREQ \
                                0x00000053  // GPT REQ timer 3A 
#define EVENT_UDMACH12BSEL_EV_GPT3B_DMABREQ \
                                0x00000054  // GPT REQ timer 3B 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH13SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH13SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH13SSEL_EV_S 0
#define EVENT_UDMACH13SSEL_EV_AON_PROG2 \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH13BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH13BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH13BSEL_EV_S 0
#define EVENT_UDMACH13BSEL_EV_AON_PROG2 \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH14SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH14SSEL_EV_M 0x0000007F  // selection value 
#define EVENT_UDMACH14SSEL_EV_S 0
#define EVENT_UDMACH14SSEL_EV_NONE \
                                0x00000000  // "0" 
#define EVENT_UDMACH14SSEL_EV_AON_PROG0 \
                                0x00000001  // AON programmable 0 
#define EVENT_UDMACH14SSEL_EV_AON_PROG1 \
                                0x00000002  // AON programmable 1 
#define EVENT_UDMACH14SSEL_EV_AON_PROG2 \
                                0x00000003  // AON programmable 2 
#define EVENT_UDMACH14SSEL_EV_AON_GPIO_EDGE \
                                0x00000004  // AON Edge detect 
#define EVENT_UDMACH14SSEL_EV_AON_SPIS_BYTE_DONE \
                                0x00000005  // AON SPIS RTX 
#define EVENT_UDMACH14SSEL_EV_AON_SPIS_CS \
                                0x00000006  // AON SPIS CS 
#define EVENT_UDMACH14SSEL_EV_AON_RTC_COMB \
                                0x00000007  // AON RTC 
#define EVENT_UDMACH14SSEL_EV_I2S_IRQ \
                                0x00000008  // I2S_irq_d 
#define EVENT_UDMACH14SSEL_EV_I2C_IRQ \
                                0x00000009  // I2C interrupt 
#define EVENT_UDMACH14SSEL_EV_AON_AUX_SWEV0 \
                                0x0000000A  // AON_AUX0 
#define EVENT_UDMACH14SSEL_EV_AUX_COMB \
                                0x0000000B  // AUX Mcu_event_comb 
#define EVENT_UDMACH14SSEL_EV_GPT2A \
                                0x0000000C  // GPTIMER 2A 
#define EVENT_UDMACH14SSEL_EV_GPT2B \
                                0x0000000D  // GPTIMER 2B 
#define EVENT_UDMACH14SSEL_EV_GPT3A \
                                0x0000000E  // GPTIMER 3A 
#define EVENT_UDMACH14SSEL_EV_GPT3B \
                                0x0000000F  // GPTIMER 3B 
#define EVENT_UDMACH14SSEL_EV_GPT0A \
                                0x00000010  // GPTIMER 0A 
#define EVENT_UDMACH14SSEL_EV_GPT0B \
                                0x00000011  // GPTIMER 0B 
#define EVENT_UDMACH14SSEL_EV_GPT1A \
                                0x00000012  // GPTIMER 1A 
#define EVENT_UDMACH14SSEL_EV_GPT1B \
                                0x00000013  // GPTIMER 1B 
#define EVENT_UDMACH14SSEL_EV_SW0_EV_DONE \
                                0x00000014  // sw0_ev_done 
#define EVENT_UDMACH14SSEL_EV_FLASH \
                                0x00000015  // Flash 
#define EVENT_UDMACH14SSEL_EV_SW1_DMA_DONE \
                                0x00000016  // sw1 dma_done 
#define EVENT_UDMACH14SSEL_EV_NOT_USED \
                                0x00000017  // Not used 
#define EVENT_UDMACH14SSEL_EV_WDT_IRQ \
                                0x00000018  // Watchdog 
#define EVENT_UDMACH14SSEL_EV_RFC_CMD_ACK \
                                0x00000019  // RF command acknowledge 
#define EVENT_UDMACH14SSEL_EV_RFC_HW_COMB \
                                0x0000001A  // RF hw 
#define EVENT_UDMACH14SSEL_EV_RFC_CPE_0 \
                                0x0000001B  // RF cpe_0 
#define EVENT_UDMACH14SSEL_EV_RFC_CPE_1 \
                                0x0000001E  // RF cpe_1 
#define EVENT_UDMACH14SSEL_EV_SSI0_COMB \
                                0x00000022  // SSI0 combined 
#define EVENT_UDMACH14SSEL_EV_SSI1_COMB \
                                0x00000023  // SSI1 combined 
#define EVENT_UDMACH14SSEL_EV_UART0_COMB \
                                0x00000024  // UART0 combined 
#define EVENT_UDMACH14SSEL_EV_DMA_ERR \
                                0x00000026  // error event from DMA 
#define EVENT_UDMACH14SSEL_EV_DMA_DONE_COMB \
                                0x00000027  // combined done event from DMA 
#define EVENT_UDMACH14SSEL_EV_SSI0_RX_DMABREQ \
                                0x00000028  // SSI0 Rx burst 
#define EVENT_UDMACH14SSEL_EV_SSI0_RX_DMASREQ \
                                0x00000029  // SSI0 Rx single 
#define EVENT_UDMACH14SSEL_EV_SSI0_TX_DMABREQ \
                                0x0000002A  // SSI0 Tx burst 
#define EVENT_UDMACH14SSEL_EV_SSI0_TX_DMASREQ \
                                0x0000002B  // SSI0 Tx single 
#define EVENT_UDMACH14SSEL_EV_SSI1_RX_DMABREQ \
                                0x0000002C  // SSI1 Rx burst 
#define EVENT_UDMACH14SSEL_EV_SSI1_RX_DMASREQ \
                                0x0000002D  // SSI1 Rx single 
#define EVENT_UDMACH14SSEL_EV_SSI1_TX_DMABREQ \
                                0x0000002E  // SSI1 Tx burst 
#define EVENT_UDMACH14SSEL_EV_SSI1_TX_DMASREQ \
                                0x0000002F  // SSI1 Tx single 
#define EVENT_UDMACH14SSEL_EV_UART0_RX_DMABREQ \
                                0x00000030  // UART0 Rx burst 
#define EVENT_UDMACH14SSEL_EV_UART0_RX_DMASREQ \
                                0x00000031  // UART0 Rx single 
#define EVENT_UDMACH14SSEL_EV_UART0_TX_DMABREQ \
                                0x00000032  // UART0 Tx burst 
#define EVENT_UDMACH14SSEL_EV_UART0_TX_DMASREQ \
                                0x00000033  // UART0 Tx single 
#define EVENT_UDMACH14SSEL_EV_SPIS_COMB \
                                0x00000038  // SPIS_EVENTS_COMBO 
#define EVENT_UDMACH14SSEL_EV_SPIS_RXF_DMABREQ \
                                0x00000039  // AON_SPIS_RX burst 
#define EVENT_UDMACH14SSEL_EV_SPIS_RXF_DMASREQ \
                                0x0000003A  // AON_SPIS_RX single 
#define EVENT_UDMACH14SSEL_EV_SPIS_TXF_DMABREQ \
                                0x0000003B  // AON_SPIS_TX burst 
#define EVENT_UDMACH14SSEL_EV_SPIS_TXF_DMASREQ \
                                0x0000003C  // AON_SPIS_TX single 
#define EVENT_UDMACH14SSEL_EV_GPT0A_CMP \
                                0x0000003D  // GPT0 compare A 
#define EVENT_UDMACH14SSEL_EV_GPT0B_CMP \
                                0x0000003E  // GPT0 compare B 
#define EVENT_UDMACH14SSEL_EV_GPT1A_CMP \
                                0x0000003F  // GPT1 compare A 
#define EVENT_UDMACH14SSEL_EV_GPT1B_CMP \
                                0x00000040  // GPT1 compare B 
#define EVENT_UDMACH14SSEL_EV_GPT2A_CMP \
                                0x00000041  // GPT2 compare A 
#define EVENT_UDMACH14SSEL_EV_GPT2B_CMP \
                                0x00000042  // GPT2 compare B 
#define EVENT_UDMACH14SSEL_EV_GPT3A_CMP \
                                0x00000043  // GPT3 compare A 
#define EVENT_UDMACH14SSEL_EV_GPT3B_CMP \
                                0x00000044  // GPT3 compare B 
#define EVENT_UDMACH14SSEL_EV_GPT0A_DMASREQ \
                                0x00000045  // GPT SREQ timer 0A 
#define EVENT_UDMACH14SSEL_EV_GPT0B_DMASREQ \
                                0x00000046  // GPT SREQ timer 0B 
#define EVENT_UDMACH14SSEL_EV_GPT1A_DMASREQ \
                                0x00000047  // GPT SREQ timer 1A 
#define EVENT_UDMACH14SSEL_EV_GPT1B_DMASREQ \
                                0x00000048  // GPT SREQ timer 1B 
#define EVENT_UDMACH14SSEL_EV_GPT2A_DMASREQ \
                                0x00000049  // GPT SREQ timer 2A 
#define EVENT_UDMACH14SSEL_EV_GPT2B_DMASREQ \
                                0x0000004A  // GPT SREQ timer 2B 
#define EVENT_UDMACH14SSEL_EV_GPT3A_DMASREQ \
                                0x0000004B  // GPT SREQ timer 3A 
#define EVENT_UDMACH14SSEL_EV_GPT3B_DMASREQ \
                                0x0000004C  // GPT SREQ timer 3B 
#define EVENT_UDMACH14SSEL_EV_GPT0A_DMABREQ \
                                0x0000004D  // GPT REQ timer 0A 
#define EVENT_UDMACH14SSEL_EV_GPT0B_DMABREQ \
                                0x0000004E  // GPT REQ timer 0B 
#define EVENT_UDMACH14SSEL_EV_GPT1A_DMABREQ \
                                0x0000004F  // GPT REQ timer 1A 
#define EVENT_UDMACH14SSEL_EV_GPT1B_DMABREQ \
                                0x00000050  // GPT REQ timer 1B 
#define EVENT_UDMACH14SSEL_EV_GPT2A_DMABREQ \
                                0x00000051  // GPT REQ timer 2A 
#define EVENT_UDMACH14SSEL_EV_GPT2B_DMABREQ \
                                0x00000052  // GPT REQ timer 2B 
#define EVENT_UDMACH14SSEL_EV_GPT3A_DMABREQ \
                                0x00000053  // GPT REQ timer 3A 
#define EVENT_UDMACH14SSEL_EV_GPT3B_DMABREQ \
                                0x00000054  // GPT REQ timer 3B 
#define EVENT_UDMACH14SSEL_EV_GPT0A_CAPT_DIO \
                                0x00000055  // pad inputs for GPT subscribers 
                                            // - 0 
#define EVENT_UDMACH14SSEL_EV_GPT0B_CAPT_DIO \
                                0x00000056  // pad inputs for GPT subscribers 
                                            // - 1 
#define EVENT_UDMACH14SSEL_EV_GPT1A_CAPT_DIO \
                                0x00000057  // pad inputs for GPT subscribers 
                                            // - 2 
#define EVENT_UDMACH14SSEL_EV_GPT1B_CAPT_DIO \
                                0x00000058  // pad inputs for GPT subscribers 
                                            // - 3 
#define EVENT_UDMACH14SSEL_EV_GPT2A_CAPT_DIO \
                                0x00000059  // pad inputs for GPT subscribers 
                                            // - 4 
#define EVENT_UDMACH14SSEL_EV_GPT2B_CAPT_DIO \
                                0x0000005A  // pad inputs for GPT subscribers 
                                            // - 5 
#define EVENT_UDMACH14SSEL_EV_GPT3A_CAPT_DIO \
                                0x0000005B  // pad inputs for GPT subscribers 
                                            // - 6 
#define EVENT_UDMACH14SSEL_EV_GPT3B_CAPT_DIO \
                                0x0000005C  // pad inputs for GPT subscribers 
                                            // - 7 
#define EVENT_UDMACH14SSEL_EV_CRYPTO_RESULT_AVAIL_IRQ \
                                0x0000005D  // crypto core result available 
                                            // interrupt 
#define EVENT_UDMACH14SSEL_EV_CRYPTO_DMA_DONE_IRQ \
                                0x0000005E  // crypto core dma done interrupt 
#define EVENT_UDMACH14SSEL_EV_RFC_IN_EV0 \
                                0x0000005F  // RF Core input event 0 
#define EVENT_UDMACH14SSEL_EV_RFC_IN_EV1 \
                                0x00000060  // RF Core input event 1 
#define EVENT_UDMACH14SSEL_EV_RFC_IN_EV2 \
                                0x00000061  // RF Core input event 2 
#define EVENT_UDMACH14SSEL_EV_RFC_IN_EV3 \
                                0x00000062  // RF Core input event 3 
#define EVENT_UDMACH14SSEL_EV_WDT_NMI \
                                0x00000063  // NMI input from WDT 
#define EVENT_UDMACH14SSEL_EV_SWEV0 \
                                0x00000064  // SW EVENT 0 
#define EVENT_UDMACH14SSEL_EV_SWEV1 \
                                0x00000065  // SW EVENT 1 
#define EVENT_UDMACH14SSEL_EV_SWEV2 \
                                0x00000066  // SW EVENT 2 
#define EVENT_UDMACH14SSEL_EV_SWEV3 \
                                0x00000067  // SW EVENT 3 
#define EVENT_UDMACH14SSEL_EV_TRNG_IRQ \
                                0x00000068  // TRNG interrupt 
#define EVENT_UDMACH14SSEL_EV_AUX_AON_WU_EV \
                                0x00000069  // AUX_MCU_TRIGGER[0] 
#define EVENT_UDMACH14SSEL_EV_AUX_SOC_COMPA \
                                0x0000006A  // AUX_MCU_TRIGGER[1] 
#define EVENT_UDMACH14SSEL_EV_AUX_SOC_COMPB \
                                0x0000006B  // AUX_MCU_TRIGGER[2] 
#define EVENT_UDMACH14SSEL_EV_AUX_TDC_DONE \
                                0x0000006C  // AUX_MCU_TRIGGER[3] 
#define EVENT_UDMACH14SSEL_EV_AUX_TIMER0_EV \
                                0x0000006D  // AUX_MCU_TRIGGER[4] 
#define EVENT_UDMACH14SSEL_EV_AUX_TIMER1_EV \
                                0x0000006E  // AUX_MCU_TRIGGER[5] 
#define EVENT_UDMACH14SSEL_EV_AUX_SMPH_AUTOTAKE_DONE \
                                0x0000006F  // AUX_MCU_TRIGGER[6] 
#define EVENT_UDMACH14SSEL_EV_AUX_ADC_DONE \
                                0x00000070  // AUX_MCU_TRIGGER[7] 
#define EVENT_UDMACH14SSEL_EV_AUX_ADC_FIFO_ALMOST_FULL \
                                0x00000071  // AUX_MCU_TRIGGER[8] 
#define EVENT_UDMACH14SSEL_EV_AUX_OBSMUX0 \
                                0x00000072  // AUX_MCU_TRIGGER[9] 
#define EVENT_UDMACH14SSEL_EV_AUX_ADC_IRQ \
                                0x00000073  // AUX_MCU_TRIGGER[10] 
#define EVENT_UDMACH14SSEL_EV_AUX_SW_DMABREQ \
                                0x00000074  // aux_dma_sw_sreq 
#define EVENT_UDMACH14SSEL_EV_AUX_DMASREQ \
                                0x00000075  // aux_dma_sreq 
#define EVENT_UDMACH14SSEL_EV_AUX_DMABREQ \
                                0x00000076  // aux_dma_req 
#define EVENT_UDMACH14SSEL_EV_AON_RTC_UPD \
                                0x00000077  // AON_RTC_UPD 
#define EVENT_UDMACH14SSEL_EV_CM3_HALTED \
                                0x00000078  // Halted 
#define EVENT_UDMACH14SSEL_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH14BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH14BSEL_EV_M 0x0000007F  // Selection value - Default 
                                            // selection is "1" 
#define EVENT_UDMACH14BSEL_EV_S 0
#define EVENT_UDMACH14BSEL_EV_NONE \
                                0x00000000  // "0" 
#define EVENT_UDMACH14BSEL_EV_AON_PROG0 \
                                0x00000001  // AON programmable 0 
#define EVENT_UDMACH14BSEL_EV_AON_PROG1 \
                                0x00000002  // AON programmable 1 
#define EVENT_UDMACH14BSEL_EV_AON_PROG2 \
                                0x00000003  // AON programmable 2 
#define EVENT_UDMACH14BSEL_EV_AON_GPIO_EDGE \
                                0x00000004  // AON Edge detect 
#define EVENT_UDMACH14BSEL_EV_AON_SPIS_BYTE_DONE \
                                0x00000005  // AON SPIS RTX 
#define EVENT_UDMACH14BSEL_EV_AON_SPIS_CS \
                                0x00000006  // AON SPIS CS 
#define EVENT_UDMACH14BSEL_EV_AON_RTC_COMB \
                                0x00000007  // AON RTC 
#define EVENT_UDMACH14BSEL_EV_I2S_IRQ \
                                0x00000008  // I2S_irq_d 
#define EVENT_UDMACH14BSEL_EV_I2C_IRQ \
                                0x00000009  // I2C interrupt 
#define EVENT_UDMACH14BSEL_EV_AON_AUX_SWEV0 \
                                0x0000000A  // AON_AUX0 
#define EVENT_UDMACH14BSEL_EV_AUX_COMB \
                                0x0000000B  // AUX Mcu_event_comb 
#define EVENT_UDMACH14BSEL_EV_GPT2A \
                                0x0000000C  // GPTIMER 2A 
#define EVENT_UDMACH14BSEL_EV_GPT2B \
                                0x0000000D  // GPTIMER 2B 
#define EVENT_UDMACH14BSEL_EV_GPT3A \
                                0x0000000E  // GPTIMER 3A 
#define EVENT_UDMACH14BSEL_EV_GPT3B \
                                0x0000000F  // GPTIMER 3B 
#define EVENT_UDMACH14BSEL_EV_GPT0A \
                                0x00000010  // GPTIMER 0A 
#define EVENT_UDMACH14BSEL_EV_GPT0B \
                                0x00000011  // GPTIMER 0B 
#define EVENT_UDMACH14BSEL_EV_GPT1A \
                                0x00000012  // GPTIMER 1A 
#define EVENT_UDMACH14BSEL_EV_GPT1B \
                                0x00000013  // GPTIMER 1B 
#define EVENT_UDMACH14BSEL_EV_SW0_EV_DONE \
                                0x00000014  // sw0_ev_done 
#define EVENT_UDMACH14BSEL_EV_FLASH \
                                0x00000015  // Flash 
#define EVENT_UDMACH14BSEL_EV_SW1_DMA_DONE \
                                0x00000016  // sw1 dma_done 
#define EVENT_UDMACH14BSEL_EV_NOT_USED \
                                0x00000017  // Not used 
#define EVENT_UDMACH14BSEL_EV_WDT_IRQ \
                                0x00000018  // Watchdog 
#define EVENT_UDMACH14BSEL_EV_RFC_CMD_ACK \
                                0x00000019  // RF command acknowledge 
#define EVENT_UDMACH14BSEL_EV_RFC_HW_COMB \
                                0x0000001A  // RF hw 
#define EVENT_UDMACH14BSEL_EV_RFC_CPE_0 \
                                0x0000001B  // RF cpe_0 
#define EVENT_UDMACH14BSEL_EV_RFC_CPE_1 \
                                0x0000001E  // RF cpe_1 
#define EVENT_UDMACH14BSEL_EV_SSI0_COMB \
                                0x00000022  // SSI0 combined 
#define EVENT_UDMACH14BSEL_EV_SSI1_COMB \
                                0x00000023  // SSI1 combined 
#define EVENT_UDMACH14BSEL_EV_UART0_COMB \
                                0x00000024  // UART0 combined 
#define EVENT_UDMACH14BSEL_EV_DMA_ERR \
                                0x00000026  // error event from DMA 
#define EVENT_UDMACH14BSEL_EV_DMA_DONE_COMB \
                                0x00000027  // combined done event from DMA 
#define EVENT_UDMACH14BSEL_EV_SSI0_RX_DMABREQ \
                                0x00000028  // SSI0 Rx burst 
#define EVENT_UDMACH14BSEL_EV_SSI0_RX_DMASREQ \
                                0x00000029  // SSI0 Rx single 
#define EVENT_UDMACH14BSEL_EV_SSI0_TX_DMABREQ \
                                0x0000002A  // SSI0 Tx burst 
#define EVENT_UDMACH14BSEL_EV_SSI0_TX_DMASREQ \
                                0x0000002B  // SSI0 Tx single 
#define EVENT_UDMACH14BSEL_EV_SSI1_RX_DMABREQ \
                                0x0000002C  // SSI1 Rx burst 
#define EVENT_UDMACH14BSEL_EV_SSI1_RX_DMASREQ \
                                0x0000002D  // SSI1 Rx single 
#define EVENT_UDMACH14BSEL_EV_SSI1_TX_DMABREQ \
                                0x0000002E  // SSI1 Tx burst 
#define EVENT_UDMACH14BSEL_EV_SSI1_TX_DMASREQ \
                                0x0000002F  // SSI1 Tx single 
#define EVENT_UDMACH14BSEL_EV_UART0_RX_DMABREQ \
                                0x00000030  // UART0 Rx burst 
#define EVENT_UDMACH14BSEL_EV_UART0_RX_DMASREQ \
                                0x00000031  // UART0 Rx single 
#define EVENT_UDMACH14BSEL_EV_UART0_TX_DMABREQ \
                                0x00000032  // UART0 Tx burst 
#define EVENT_UDMACH14BSEL_EV_UART0_TX_DMASREQ \
                                0x00000033  // UART0 Tx single 
#define EVENT_UDMACH14BSEL_EV_SPIS_COMB \
                                0x00000038  // SPIS_EVENTS_COMBO 
#define EVENT_UDMACH14BSEL_EV_SPIS_RXF_DMABREQ \
                                0x00000039  // AON_SPIS_RX burst 
#define EVENT_UDMACH14BSEL_EV_SPIS_RXF_DMASREQ \
                                0x0000003A  // AON_SPIS_RX single 
#define EVENT_UDMACH14BSEL_EV_SPIS_TXF_DMABREQ \
                                0x0000003B  // AON_SPIS_TX burst 
#define EVENT_UDMACH14BSEL_EV_SPIS_TXF_DMASREQ \
                                0x0000003C  // AON_SPIS_TX single 
#define EVENT_UDMACH14BSEL_EV_GPT0A_CMP \
                                0x0000003D  // GPT0 compare A 
#define EVENT_UDMACH14BSEL_EV_GPT0B_CMP \
                                0x0000003E  // GPT0 compare B 
#define EVENT_UDMACH14BSEL_EV_GPT1A_CMP \
                                0x0000003F  // GPT1 compare A 
#define EVENT_UDMACH14BSEL_EV_GPT1B_CMP \
                                0x00000040  // GPT1 compare B 
#define EVENT_UDMACH14BSEL_EV_GPT2A_CMP \
                                0x00000041  // GPT2 compare A 
#define EVENT_UDMACH14BSEL_EV_GPT2B_CMP \
                                0x00000042  // GPT2 compare B 
#define EVENT_UDMACH14BSEL_EV_GPT3A_CMP \
                                0x00000043  // GPT3 compare A 
#define EVENT_UDMACH14BSEL_EV_GPT3B_CMP \
                                0x00000044  // GPT3 compare B 
#define EVENT_UDMACH14BSEL_EV_GPT0A_DMASREQ \
                                0x00000045  // GPT SREQ timer 0A 
#define EVENT_UDMACH14BSEL_EV_GPT0B_DMASREQ \
                                0x00000046  // GPT SREQ timer 0B 
#define EVENT_UDMACH14BSEL_EV_GPT1A_DMASREQ \
                                0x00000047  // GPT SREQ timer 1A 
#define EVENT_UDMACH14BSEL_EV_GPT1B_DMASREQ \
                                0x00000048  // GPT SREQ timer 1B 
#define EVENT_UDMACH14BSEL_EV_GPT2A_DMASREQ \
                                0x00000049  // GPT SREQ timer 2A 
#define EVENT_UDMACH14BSEL_EV_GPT2B_DMASREQ \
                                0x0000004A  // GPT SREQ timer 2B 
#define EVENT_UDMACH14BSEL_EV_GPT3A_DMASREQ \
                                0x0000004B  // GPT SREQ timer 3A 
#define EVENT_UDMACH14BSEL_EV_GPT3B_DMASREQ \
                                0x0000004C  // GPT SREQ timer 3B 
#define EVENT_UDMACH14BSEL_EV_GPT0A_DMABREQ \
                                0x0000004D  // GPT REQ timer 0A 
#define EVENT_UDMACH14BSEL_EV_GPT0B_DMABREQ \
                                0x0000004E  // GPT REQ timer 0B 
#define EVENT_UDMACH14BSEL_EV_GPT1A_DMABREQ \
                                0x0000004F  // GPT REQ timer 1A 
#define EVENT_UDMACH14BSEL_EV_GPT1B_DMABREQ \
                                0x00000050  // GPT REQ timer 1B 
#define EVENT_UDMACH14BSEL_EV_GPT2A_DMABREQ \
                                0x00000051  // GPT REQ timer 2A 
#define EVENT_UDMACH14BSEL_EV_GPT2B_DMABREQ \
                                0x00000052  // GPT REQ timer 2B 
#define EVENT_UDMACH14BSEL_EV_GPT3A_DMABREQ \
                                0x00000053  // GPT REQ timer 3A 
#define EVENT_UDMACH14BSEL_EV_GPT3B_DMABREQ \
                                0x00000054  // GPT REQ timer 3B 
#define EVENT_UDMACH14BSEL_EV_GPT0A_CAPT_DIO \
                                0x00000055  // pad inputs for GPT subscribers 
                                            // - 0 
#define EVENT_UDMACH14BSEL_EV_GPT0B_CAPT_DIO \
                                0x00000056  // pad inputs for GPT subscribers 
                                            // - 1 
#define EVENT_UDMACH14BSEL_EV_GPT1A_CAPT_DIO \
                                0x00000057  // pad inputs for GPT subscribers 
                                            // - 2 
#define EVENT_UDMACH14BSEL_EV_GPT1B_CAPT_DIO \
                                0x00000058  // pad inputs for GPT subscribers 
                                            // - 3 
#define EVENT_UDMACH14BSEL_EV_GPT2A_CAPT_DIO \
                                0x00000059  // pad inputs for GPT subscribers 
                                            // - 4 
#define EVENT_UDMACH14BSEL_EV_GPT2B_CAPT_DIO \
                                0x0000005A  // pad inputs for GPT subscribers 
                                            // - 5 
#define EVENT_UDMACH14BSEL_EV_GPT3A_CAPT_DIO \
                                0x0000005B  // pad inputs for GPT subscribers 
                                            // - 6 
#define EVENT_UDMACH14BSEL_EV_GPT3B_CAPT_DIO \
                                0x0000005C  // pad inputs for GPT subscribers 
                                            // - 7 
#define EVENT_UDMACH14BSEL_EV_CRYPTO_RESULT_AVAIL_IRQ \
                                0x0000005D  // crypto core result available 
                                            // interrupt 
#define EVENT_UDMACH14BSEL_EV_CRYPTO_DMA_DONE_IRQ \
                                0x0000005E  // crypto core dma done interrupt 
#define EVENT_UDMACH14BSEL_EV_RFC_IN_EV0 \
                                0x0000005F  // RF Core input event 0 
#define EVENT_UDMACH14BSEL_EV_RFC_IN_EV1 \
                                0x00000060  // RF Core input event 1 
#define EVENT_UDMACH14BSEL_EV_RFC_IN_EV2 \
                                0x00000061  // RF Core input event 2 
#define EVENT_UDMACH14BSEL_EV_RFC_IN_EV3 \
                                0x00000062  // RF Core input event 3 
#define EVENT_UDMACH14BSEL_EV_WDT_NMI \
                                0x00000063  // NMI input from WDT 
#define EVENT_UDMACH14BSEL_EV_SWEV0 \
                                0x00000064  // SW EVENT 0 
#define EVENT_UDMACH14BSEL_EV_SWEV1 \
                                0x00000065  // SW EVENT 1 
#define EVENT_UDMACH14BSEL_EV_SWEV2 \
                                0x00000066  // SW EVENT 2 
#define EVENT_UDMACH14BSEL_EV_SWEV3 \
                                0x00000067  // SW EVENT 3 
#define EVENT_UDMACH14BSEL_EV_TRNG_IRQ \
                                0x00000068  // TRNG interrupt 
#define EVENT_UDMACH14BSEL_EV_AUX_AON_WU_EV \
                                0x00000069  // AUX_MCU_TRIGGER[0] 
#define EVENT_UDMACH14BSEL_EV_AUX_SOC_COMPA \
                                0x0000006A  // AUX_MCU_TRIGGER[1] 
#define EVENT_UDMACH14BSEL_EV_AUX_SOC_COMPB \
                                0x0000006B  // AUX_MCU_TRIGGER[2] 
#define EVENT_UDMACH14BSEL_EV_AUX_TDC_DONE \
                                0x0000006C  // AUX_MCU_TRIGGER[3] 
#define EVENT_UDMACH14BSEL_EV_AUX_TIMER0_EV \
                                0x0000006D  // AUX_MCU_TRIGGER[4] 
#define EVENT_UDMACH14BSEL_EV_AUX_TIMER1_EV \
                                0x0000006E  // AUX_MCU_TRIGGER[5] 
#define EVENT_UDMACH14BSEL_EV_AUX_SMPH_AUTOTAKE_DONE \
                                0x0000006F  // AUX_MCU_TRIGGER[6] 
#define EVENT_UDMACH14BSEL_EV_AUX_ADC_DONE \
                                0x00000070  // AUX_MCU_TRIGGER[7] 
#define EVENT_UDMACH14BSEL_EV_AUX_ADC_FIFO_ALMOST_FULL \
                                0x00000071  // AUX_MCU_TRIGGER[8] 
#define EVENT_UDMACH14BSEL_EV_AUX_OBSMUX0 \
                                0x00000072  // AUX_MCU_TRIGGER[9] 
#define EVENT_UDMACH14BSEL_EV_AUX_ADC_IRQ \
                                0x00000073  // AUX_MCU_TRIGGER[10] 
#define EVENT_UDMACH14BSEL_EV_AUX_SW_DMABREQ \
                                0x00000074  // aux_dma_sw_sreq 
#define EVENT_UDMACH14BSEL_EV_AUX_DMASREQ \
                                0x00000075  // aux_dma_sreq 
#define EVENT_UDMACH14BSEL_EV_AUX_DMABREQ \
                                0x00000076  // aux_dma_req 
#define EVENT_UDMACH14BSEL_EV_AON_RTC_UPD \
                                0x00000077  // AON_RTC_UPD 
#define EVENT_UDMACH14BSEL_EV_CM3_HALTED \
                                0x00000078  // Halted 
#define EVENT_UDMACH14BSEL_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH15SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH15SSEL_EV_M 0x0000007F  // selection value 
#define EVENT_UDMACH15SSEL_EV_S 0
#define EVENT_UDMACH15SSEL_EV_AON_RTC_COMB \
                                0x00000007  // AON RTC 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH15BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH15BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH15BSEL_EV_S 0
#define EVENT_UDMACH15BSEL_EV_AON_RTC_COMB \
                                0x00000007  // AON RTC 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH16SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH16SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH16SSEL_EV_S 0
#define EVENT_UDMACH16SSEL_EV_SSI1_RX_DMASREQ \
                                0x0000002D  // SSI1 Rx single 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH16BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH16BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH16BSEL_EV_S 0
#define EVENT_UDMACH16BSEL_EV_SSI1_RX_DMABREQ \
                                0x0000002C  // SSI1 Rx burst 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH17SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH17SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH17SSEL_EV_S 0
#define EVENT_UDMACH17SSEL_EV_SSI1_TX_DMASREQ \
                                0x0000002F  // SSI1 Tx single 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH17BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH17BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH17BSEL_EV_S 0
#define EVENT_UDMACH17BSEL_EV_SSI1_TX_DMABREQ \
                                0x0000002E  // SSI1 Tx burst 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH18SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH18SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH18SSEL_EV_S 0
#define EVENT_UDMACH18SSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH18BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH18BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH18BSEL_EV_S 0
#define EVENT_UDMACH18BSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH19SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH19SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH19SSEL_EV_S 0
#define EVENT_UDMACH19SSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH19BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH19BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH19BSEL_EV_S 0
#define EVENT_UDMACH19BSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH20SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH20SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH20SSEL_EV_S 0
#define EVENT_UDMACH20SSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH20BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH20BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH20BSEL_EV_S 0
#define EVENT_UDMACH20BSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH21SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH21SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH21SSEL_EV_S 0
#define EVENT_UDMACH21SSEL_EV_SWEV0 \
                                0x00000064  // SW EVENT 0 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH21BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH21BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH21BSEL_EV_S 0
#define EVENT_UDMACH21BSEL_EV_SWEV0 \
                                0x00000064  // SW EVENT 0 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH22SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH22SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH22SSEL_EV_S 0
#define EVENT_UDMACH22SSEL_EV_SWEV1 \
                                0x00000065  // SW EVENT 1 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH22BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH22BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH22BSEL_EV_S 0
#define EVENT_UDMACH22BSEL_EV_SWEV1 \
                                0x00000065  // SW EVENT 1 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH23SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH23SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH23SSEL_EV_S 0
#define EVENT_UDMACH23SSEL_EV_SWEV2 \
                                0x00000066  // SW EVENT 2 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH23BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH23BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH23BSEL_EV_S 0
#define EVENT_UDMACH23BSEL_EV_SWEV2 \
                                0x00000066  // SW EVENT 2 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH24SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH24SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH24SSEL_EV_S 0
#define EVENT_UDMACH24SSEL_EV_SWEV3 \
                                0x00000067  // SW EVENT 3 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH24BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH24BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH24BSEL_EV_S 0
#define EVENT_UDMACH24BSEL_EV_SWEV3 \
                                0x00000067  // SW EVENT 3 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH25SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH25SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH25SSEL_EV_S 0
#define EVENT_UDMACH25SSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH25BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH25BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH25BSEL_EV_S 0
#define EVENT_UDMACH25BSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH26SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH26SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH26SSEL_EV_S 0
#define EVENT_UDMACH26SSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH26BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH26BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH26BSEL_EV_S 0
#define EVENT_UDMACH26BSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH27SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH27SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH27SSEL_EV_S 0
#define EVENT_UDMACH27SSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH27BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH27BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH27BSEL_EV_S 0
#define EVENT_UDMACH27BSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH28SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH28SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH28SSEL_EV_S 0
#define EVENT_UDMACH28SSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH28BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH28BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH28BSEL_EV_S 0
#define EVENT_UDMACH28BSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH29SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH29SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH29SSEL_EV_S 0
#define EVENT_UDMACH29SSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH29BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH29BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH29BSEL_EV_S 0
#define EVENT_UDMACH29BSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH30SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH30SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH30SSEL_EV_S 0
#define EVENT_UDMACH30SSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH30BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH30BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH30BSEL_EV_S 0
#define EVENT_UDMACH30BSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH31SSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH31SSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH31SSEL_EV_S 0
#define EVENT_UDMACH31SSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_UDMACH31BSEL register.
//
//*****************************************************************************
#define EVENT_UDMACH31BSEL_EV_M 0x0000007F  // Read only selection value 
#define EVENT_UDMACH31BSEL_EV_S 0
#define EVENT_UDMACH31BSEL_EV_NONE \
                                0x00000000  // "0" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_GPT3ACAPTSEL register.
//
//*****************************************************************************
#define EVENT_GPT3ACAPTSEL_EV_M 0x0000007F  // Read/write selection value 
#define EVENT_GPT3ACAPTSEL_EV_S 0
#define EVENT_GPT3ACAPTSEL_EV_NONE \
                                0x00000000  // "0" 
#define EVENT_GPT3ACAPTSEL_EV_AON_GPIO_EDGE \
                                0x00000004  // AON Edge detect 
#define EVENT_GPT3ACAPTSEL_EV_AON_SPIS_BYTE_DONE \
                                0x00000005  // AON SPIS RTX 
#define EVENT_GPT3ACAPTSEL_EV_AON_SPIS_CS \
                                0x00000006  // AON SPIS CS 
#define EVENT_GPT3ACAPTSEL_EV_AON_RTC_COMB \
                                0x00000007  // AON RTC 
#define EVENT_GPT3ACAPTSEL_EV_AUX_COMB \
                                0x0000000B  // AUX Mcu_event_comb 
#define EVENT_GPT3ACAPTSEL_EV_FLASH \
                                0x00000015  // Flash 
#define EVENT_GPT3ACAPTSEL_EV_RFC_CMD_ACK \
                                0x00000019  // RF command acknowledge 
#define EVENT_GPT3ACAPTSEL_EV_RFC_HW_COMB \
                                0x0000001A  // RF hw 
#define EVENT_GPT3ACAPTSEL_EV_RFC_CPE_0 \
                                0x0000001B  // RF cpe_0 
#define EVENT_GPT3ACAPTSEL_EV_RFC_CPE_1 \
                                0x0000001E  // RF cpe_1 
#define EVENT_GPT3ACAPTSEL_EV_SSI0_COMB \
                                0x00000022  // SSI0 combined 
#define EVENT_GPT3ACAPTSEL_EV_SSI1_COMB \
                                0x00000023  // SSI1 combined 
#define EVENT_GPT3ACAPTSEL_EV_UART0_COMB \
                                0x00000024  // UART0 combined 
#define EVENT_GPT3ACAPTSEL_EV_GPT0A_CMP \
                                0x0000003D  // GPT0 compare A 
#define EVENT_GPT3ACAPTSEL_EV_GPT0B_CMP \
                                0x0000003E  // GPT0 compare B 
#define EVENT_GPT3ACAPTSEL_EV_GPT1A_CMP \
                                0x0000003F  // GPT1 compare A 
#define EVENT_GPT3ACAPTSEL_EV_GPT1B_CMP \
                                0x00000040  // GPT1 compare B 
#define EVENT_GPT3ACAPTSEL_EV_GPT2A_CMP \
                                0x00000041  // GPT2 compare A 
#define EVENT_GPT3ACAPTSEL_EV_GPT2B_CMP \
                                0x00000042  // GPT2 compare B 
#define EVENT_GPT3ACAPTSEL_EV_GPT3A_CMP \
                                0x00000043  // GPT3 compare A 
#define EVENT_GPT3ACAPTSEL_EV_GPT3B_CMP \
                                0x00000044  // GPT3 compare B 
#define EVENT_GPT3ACAPTSEL_EV_GPT3A_CAPT_DIO \
                                0x0000005B  // pad inputs for GPT subscribers 
                                            // - 6 
#define EVENT_GPT3ACAPTSEL_EV_GPT3B_CAPT_DIO \
                                0x0000005C  // pad inputs for GPT subscribers 
                                            // - 7 
#define EVENT_GPT3ACAPTSEL_EV_RFC_IN_EV2 \
                                0x00000061  // RF Core input event 2 
#define EVENT_GPT3ACAPTSEL_EV_RFC_IN_EV3 \
                                0x00000062  // RF Core input event 3 
#define EVENT_GPT3ACAPTSEL_EV_AUX_AON_WU_EV \
                                0x00000069  // AUX_MCU_TRIGGER[0] 
#define EVENT_GPT3ACAPTSEL_EV_AUX_SOC_COMPA \
                                0x0000006A  // AUX_MCU_TRIGGER[1] 
#define EVENT_GPT3ACAPTSEL_EV_AUX_SOC_COMPB \
                                0x0000006B  // AUX_MCU_TRIGGER[2] 
#define EVENT_GPT3ACAPTSEL_EV_AUX_TDC_DONE \
                                0x0000006C  // AUX_MCU_TRIGGER[3] 
#define EVENT_GPT3ACAPTSEL_EV_AUX_TIMER0_EV \
                                0x0000006D  // AUX_MCU_TRIGGER[4] 
#define EVENT_GPT3ACAPTSEL_EV_AUX_TIMER1_EV \
                                0x0000006E  // AUX_MCU_TRIGGER[5] 
#define EVENT_GPT3ACAPTSEL_EV_AUX_SMPH_AUTOTAKE_DONE \
                                0x0000006F  // AUX_MCU_TRIGGER[6] 
#define EVENT_GPT3ACAPTSEL_EV_AUX_ADC_DONE \
                                0x00000070  // AUX_MCU_TRIGGER[7] 
#define EVENT_GPT3ACAPTSEL_EV_AUX_ADC_FIFO_ALMOST_FULL \
                                0x00000071  // AUX_MCU_TRIGGER[8] 
#define EVENT_GPT3ACAPTSEL_EV_AUX_OBSMUX0 \
                                0x00000072  // AUX_MCU_TRIGGER[9] 
#define EVENT_GPT3ACAPTSEL_EV_AUX_ADC_IRQ \
                                0x00000073  // AUX_MCU_TRIGGER[10] 
#define EVENT_GPT3ACAPTSEL_EV_AON_RTC_UPD \
                                0x00000077  // AON_RTC_UPD 
#define EVENT_GPT3ACAPTSEL_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_GPT3BCAPTSEL register.
//
//*****************************************************************************
#define EVENT_GPT3BCAPTSEL_EV_M 0x0000007F  // Read/write selection value 
#define EVENT_GPT3BCAPTSEL_EV_S 0
#define EVENT_GPT3BCAPTSEL_EV_NONE \
                                0x00000000  // "0" 
#define EVENT_GPT3BCAPTSEL_EV_AON_GPIO_EDGE \
                                0x00000004  // AON Edge detect 
#define EVENT_GPT3BCAPTSEL_EV_AON_SPIS_BYTE_DONE \
                                0x00000005  // AON SPIS RTX 
#define EVENT_GPT3BCAPTSEL_EV_AON_SPIS_CS \
                                0x00000006  // AON SPIS CS 
#define EVENT_GPT3BCAPTSEL_EV_AON_RTC_COMB \
                                0x00000007  // AON RTC 
#define EVENT_GPT3BCAPTSEL_EV_AUX_COMB \
                                0x0000000B  // AUX Mcu_event_comb 
#define EVENT_GPT3BCAPTSEL_EV_FLASH \
                                0x00000015  // Flash 
#define EVENT_GPT3BCAPTSEL_EV_RFC_CMD_ACK \
                                0x00000019  // RF command acknowledge 
#define EVENT_GPT3BCAPTSEL_EV_RFC_HW_COMB \
                                0x0000001A  // RF hw 
#define EVENT_GPT3BCAPTSEL_EV_RFC_CPE_0 \
                                0x0000001B  // RF cpe_0 
#define EVENT_GPT3BCAPTSEL_EV_RFC_CPE_1 \
                                0x0000001E  // RF cpe_1 
#define EVENT_GPT3BCAPTSEL_EV_SSI0_COMB \
                                0x00000022  // SSI0 combined 
#define EVENT_GPT3BCAPTSEL_EV_SSI1_COMB \
                                0x00000023  // SSI1 combined 
#define EVENT_GPT3BCAPTSEL_EV_UART0_COMB \
                                0x00000024  // UART0 combined 
#define EVENT_GPT3BCAPTSEL_EV_GPT0A_CMP \
                                0x0000003D  // GPT0 compare A 
#define EVENT_GPT3BCAPTSEL_EV_GPT0B_CMP \
                                0x0000003E  // GPT0 compare B 
#define EVENT_GPT3BCAPTSEL_EV_GPT1A_CMP \
                                0x0000003F  // GPT1 compare A 
#define EVENT_GPT3BCAPTSEL_EV_GPT1B_CMP \
                                0x00000040  // GPT1 compare B 
#define EVENT_GPT3BCAPTSEL_EV_GPT2A_CMP \
                                0x00000041  // GPT2 compare A 
#define EVENT_GPT3BCAPTSEL_EV_GPT2B_CMP \
                                0x00000042  // GPT2 compare B 
#define EVENT_GPT3BCAPTSEL_EV_GPT3A_CMP \
                                0x00000043  // GPT3 compare A 
#define EVENT_GPT3BCAPTSEL_EV_GPT3B_CMP \
                                0x00000044  // GPT3 compare B 
#define EVENT_GPT3BCAPTSEL_EV_GPT3A_CAPT_DIO \
                                0x0000005B  // pad inputs for GPT subscribers 
                                            // - 6 
#define EVENT_GPT3BCAPTSEL_EV_GPT3B_CAPT_DIO \
                                0x0000005C  // pad inputs for GPT subscribers 
                                            // - 7 
#define EVENT_GPT3BCAPTSEL_EV_RFC_IN_EV2 \
                                0x00000061  // RF Core input event 2 
#define EVENT_GPT3BCAPTSEL_EV_RFC_IN_EV3 \
                                0x00000062  // RF Core input event 3 
#define EVENT_GPT3BCAPTSEL_EV_AUX_AON_WU_EV \
                                0x00000069  // AUX_MCU_TRIGGER[0] 
#define EVENT_GPT3BCAPTSEL_EV_AUX_SOC_COMPA \
                                0x0000006A  // AUX_MCU_TRIGGER[1] 
#define EVENT_GPT3BCAPTSEL_EV_AUX_SOC_COMPB \
                                0x0000006B  // AUX_MCU_TRIGGER[2] 
#define EVENT_GPT3BCAPTSEL_EV_AUX_TDC_DONE \
                                0x0000006C  // AUX_MCU_TRIGGER[3] 
#define EVENT_GPT3BCAPTSEL_EV_AUX_TIMER0_EV \
                                0x0000006D  // AUX_MCU_TRIGGER[4] 
#define EVENT_GPT3BCAPTSEL_EV_AUX_TIMER1_EV \
                                0x0000006E  // AUX_MCU_TRIGGER[5] 
#define EVENT_GPT3BCAPTSEL_EV_AUX_SMPH_AUTOTAKE_DONE \
                                0x0000006F  // AUX_MCU_TRIGGER[6] 
#define EVENT_GPT3BCAPTSEL_EV_AUX_ADC_DONE \
                                0x00000070  // AUX_MCU_TRIGGER[7] 
#define EVENT_GPT3BCAPTSEL_EV_AUX_ADC_FIFO_ALMOST_FULL \
                                0x00000071  // AUX_MCU_TRIGGER[8] 
#define EVENT_GPT3BCAPTSEL_EV_AUX_OBSMUX0 \
                                0x00000072  // AUX_MCU_TRIGGER[9] 
#define EVENT_GPT3BCAPTSEL_EV_AUX_ADC_IRQ \
                                0x00000073  // AUX_MCU_TRIGGER[10] 
#define EVENT_GPT3BCAPTSEL_EV_AON_RTC_UPD \
                                0x00000077  // AON_RTC_UPD 
#define EVENT_GPT3BCAPTSEL_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_AUXSEL0 register.
//
//*****************************************************************************
#define EVENT_AUXSEL0_EV_M      0x0000007F  // Read/write selection value 
#define EVENT_AUXSEL0_EV_S      0
#define EVENT_AUXSEL0_EV_NONE   0x00000000  // "0" 
#define EVENT_AUXSEL0_EV_GPT2A  0x0000000C  // GPTIMER 2A 
#define EVENT_AUXSEL0_EV_GPT2B  0x0000000D  // GPTIMER 2B 
#define EVENT_AUXSEL0_EV_GPT3A  0x0000000E  // GPTIMER 3A 
#define EVENT_AUXSEL0_EV_GPT3B  0x0000000F  // GPTIMER 3B 
#define EVENT_AUXSEL0_EV_GPT0A  0x00000010  // GPTIMER 0A 
#define EVENT_AUXSEL0_EV_GPT0B  0x00000011  // GPTIMER 0B 
#define EVENT_AUXSEL0_EV_GPT1A  0x00000012  // GPTIMER 1A 
#define EVENT_AUXSEL0_EV_GPT1B  0x00000013  // GPTIMER 1B 
#define EVENT_AUXSEL0_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_CM3NMISEL0 register.
//
//*****************************************************************************
#define EVENT_CM3NMISEL0_EV_M   0x0000007F  // Read only selection value 
#define EVENT_CM3NMISEL0_EV_S   0
#define EVENT_CM3NMISEL0_EV_WDT_NMI \
                                0x00000063  // NMI input from WDT 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_I2SSTMPSEL0 register.
//
//*****************************************************************************
#define EVENT_I2SSTMPSEL0_EV_M  0x0000007F  // Read/write selection value 
#define EVENT_I2SSTMPSEL0_EV_S  0
#define EVENT_I2SSTMPSEL0_EV_NONE \
                                0x00000000  // "0" 
#define EVENT_I2SSTMPSEL0_EV_RFC_IN_EV0 \
                                0x0000005F  // RF Core input event 0 
#define EVENT_I2SSTMPSEL0_EV_RFC_IN_EV1 \
                                0x00000060  // RF Core input event 1 
#define EVENT_I2SSTMPSEL0_EV_RFC_IN_EV2 \
                                0x00000061  // RF Core input event 2 
#define EVENT_I2SSTMPSEL0_EV_RFC_IN_EV3 \
                                0x00000062  // RF Core input event 3 
#define EVENT_I2SSTMPSEL0_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// EVENT_O_FRZSEL0 register.
//
//*****************************************************************************
#define EVENT_FRZSEL0_EV_M      0x0000007F  // Read/write selection value 
#define EVENT_FRZSEL0_EV_S      0
#define EVENT_FRZSEL0_EV_NONE   0x00000000  // "0" 
#define EVENT_FRZSEL0_EV_CM3_HALTED \
                                0x00000078  // Halted 
#define EVENT_FRZSEL0_EV_ALWAYS_ACTIVE \
                                0x00000079  // "1" 
//*****************************************************************************
//
// The following are defines for the bit fields in the EVENT_O_SWEV register.
//
//*****************************************************************************
#define EVENT_SWEV_SWEV3        0x01000000  // Writing "1" to this bit when 
                                            // the value is "0" triggers the 
                                            // Software 3 event. Hardware 
                                            // clears the bit once it is ready 
                                            // to trigger another event. 
#define EVENT_SWEV_SWEV3_M      0x01000000
#define EVENT_SWEV_SWEV3_S      24
#define EVENT_SWEV_SWEV2        0x00010000  // Writing "1" to this bit when 
                                            // the value is "0" triggers the 
                                            // Software 2 event. Hardware 
                                            // clears the bit once it is ready 
                                            // to trigger another event. 
#define EVENT_SWEV_SWEV2_M      0x00010000
#define EVENT_SWEV_SWEV2_S      16
#define EVENT_SWEV_SWEV1        0x00000100  // Writing "1" to this bit when 
                                            // the value is "0" triggers the 
                                            // Software 1 event. Hardware 
                                            // clears the bit once it is ready 
                                            // to trigger another event. 
#define EVENT_SWEV_SWEV1_M      0x00000100
#define EVENT_SWEV_SWEV1_S      8
#define EVENT_SWEV_SWEV0        0x00000001  // Writing "1" to this bit when 
                                            // the value is "0" triggers the 
                                            // Software 0 event. Hardware 
                                            // clears the bit once it is ready 
                                            // to trigger another event. 
#define EVENT_SWEV_SWEV0_M      0x00000001
#define EVENT_SWEV_SWEV0_S      0


#endif // __HW_EVENT_H__

