
/******************************************************************************
*  Filename:       hw_spis.h
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
#ifndef __HW_SPIS_H__
#define __HW_SPIS_H__

//*****************************************************************************
//
// The following are defines for the SPIS register offsets.
//
//*****************************************************************************
#define SPIS_O_GPFLAGS          0x00000000  // This register contains some 
                                            // general purpose SPI related 
                                            // flags. All flag bits herein are 
                                            // set ('1') by the peripheral when 
                                            // the respective event occurs. If 
                                            // an event occurs while the MCU 
                                            // domain is off, the event flag 
                                            // will be set when the MCU domain 
                                            // is powered on. This allows the 
                                            // MCU software to notice and take 
                                            // action on events that have 
                                            // occurred while the MCU domain 
                                            // has been off. Flags are sticky 
                                            // '1' until cleared by software by 
                                            // writing '0' to the respective 
                                            // bit field. Writing '1' to bit 
                                            // fields does not set the 
                                            // respective flag. 
#define SPIS_O_GPFLAGSSET       0x00000004  // This register is intended for 
                                            // debug access only. The bit 
                                            // fields are aligned equally as 
                                            // the GP_FLAGS register. The bit 
                                            // fields are only settable, and 
                                            // are not readable. A read attempt 
                                            // will only result in 0x00. The 
                                            // main purpose of this register is 
                                            // to use it in combination with 
                                            // respective event signals for 
                                            // interrupt debugging. 
#define SPIS_O_GPFLAGSMASK      0x00000008  // The flag event signal is a 
                                            // combination of all flag 
                                            // associated bit fields that is 
                                            // defined for the peripheral. One 
                                            // or more flags can be enabled as 
                                            // event triggers - and may be 
                                            // polled in SW in order to 
                                            // determine the event source. This 
                                            // register defines a mask for 
                                            // which of the flags defined in 
                                            // the GP_FLAGS register that are 
                                            // to be enabled as flag event 
                                            // sources. 
#define SPIS_O_CFG              0x0000000C  // This register is used to define 
                                            // the SPI clock polarity, 
                                            // configuration of first bit MOSI 
                                            // and MISO LSB/MSB SPI data and 
                                            // selection of whether to use the 
                                            // single request or request to the 
                                            // DMA controller. Both the TX FIFO 
                                            // and RX FIFO have their own 
                                            // unique DMA channel. The 
                                            // ?X_FIFO_STATUS_EVENT_SEL 
                                            // registers are used to select the 
                                            // source that will trigger the 
                                            // DMA. 
#define SPIS_O_TXFFLAGSCLRN     0x00000010  // All flag bits herein are set 
                                            // ('1') by the peripheral when the 
                                            // respective condition is met. 
                                            // Flags are sticky '1' until 
                                            // cleared by software by writing 
                                            // '0' to the respective bit field. 
                                            // Writing '1' to bit fields does 
                                            // not set the respective flag. If 
                                            // software attempts to clear a 
                                            // flag that still is in condition 
                                            // to be set, the peripheral takes 
                                            // precedence and the flag remains 
                                            // set. 
#define SPIS_O_TXFFLAGSSET      0x00000014  // This register is intended for 
                                            // debug access only. The bit 
                                            // fields are aligned equally as 
                                            // the TX_FIFO_FLAGS register. The 
                                            // bit fields are only settable, 
                                            // and are not readable. A read 
                                            // attempt will only result in 
                                            // 0x00. The main purpose of this 
                                            // register is to use it in 
                                            // combination with respective 
                                            // event signals for interrupt 
                                            // debugging. Neither the FIFO 
                                            // conditions nor the status 
                                            // register are modified due to 
                                            // actions performed on this 
                                            // register. 
#define SPIS_O_TXFFLAGSMASK     0x00000018  // The flag event signal is a 
                                            // combination of all flag 
                                            // associated bit fields that is 
                                            // defined for the peripheral. One 
                                            // or more flags can be enabled as 
                                            // event triggers - and may be 
                                            // polled in SW in order to 
                                            // determine the event source. This 
                                            // register defines a mask for 
                                            // which of the flags defined in 
                                            // the TX_FIFO_FLAGS register that 
                                            // are to be enabled as flag event 
                                            // sources. 
#define SPIS_O_TXFSTAT          0x0000001C  // This register reflects the 
                                            // current status of the TX FIFO. 
#define SPIS_O_TXFEVSRC         0x00000020  // This register is used to select 
                                            // one of the status bit fields in 
                                            // the TX_FIFO_STATUS register as 
                                            // source for an event output - 
                                            // typically to be used together 
                                            // with a DMA controller. 
#define SPIS_O_TXFWATMRK        0x00000024  // This register defines the water 
                                            // mark threshold level of the TX 
                                            // FIFO. When a water mark 
                                            // threshold is defined, it may be 
                                            // used in conjunction with the 
                                            // respective water mark related 
                                            // bit fields in both the status 
                                            // register and flag register. An 
                                            // appropriate water mark flag can 
                                            // be enabled as an interrupt 
                                            // source in order for SW to act on 
                                            // the FIFO. Likewise, a suitable 
                                            // water mark status bit field can 
                                            // be selected as a DMA event 
                                            // source in order for the DMA 
                                            // controller to act on the FIFO 
                                            // and offload the MCU. 
#define SPIS_O_TXFPUSH          0x00000028  // This register is used to push 
                                            // data into the TX FIFO. 
#define SPIS_O_TXFFLUSH         0x0000002C  // This register is used to flush 
                                            // the contents of the TX FIFO. 
                                            // Related status fields will 
                                            // update accordingly. Related flag 
                                            // fields are not cleared by 
                                            // flushing the FIFO. Some related 
                                            // flag fields may be set due to 
                                            // that the FIFO becomes empty. 
#define SPIS_O_TXFMEMRDPOS      0x00000040  // This register returns the TX 
                                            // FIFO read pointer. The FIFO is 
                                            // circular. The read pointer 
                                            // points to the location of the 
                                            // FIFO element which is the next 
                                            // byte that is to be popped/read 
                                            // out of the FIFO. 
#define SPIS_O_TXFMEMWRPOS      0x00000044  // This register returns the TX 
                                            // FIFO write pointer. The FIFO is 
                                            // circular. The write pointer 
                                            // points to the location in the 
                                            // FIFO where the next element that 
                                            // is to be pushed/written will be 
                                            // stored. 
#define SPIS_O_TXFCNT           0x00000048  // This register returns the 
                                            // number of bytes that resides 
                                            // inside the FIFO. 
#define SPIS_O_RXFFLAGSCLRN     0x0000004C  // All flag bits herein are set 
                                            // ('1') by the peripheral when the 
                                            // respective condition is met. 
                                            // Flags are sticky '1' until 
                                            // cleared by software by writing 
                                            // '0' to the respective bit field. 
                                            // Writing '1' to bit fields does 
                                            // not set the respective flag. If 
                                            // software attempts to clear a 
                                            // flag that still is in condition 
                                            // to be set, the peripheral takes 
                                            // precedence and the flag remains 
                                            // set. 
#define SPIS_O_RXFFLAGSSET      0x00000050  // This register is intended for 
                                            // debug access only. The bit 
                                            // fields are aligned equally as 
                                            // the RX_FIFO_FLAGS register. The 
                                            // bit fields are only settable, 
                                            // and are not readable. A read 
                                            // attempt will only result in 
                                            // 0x00. The main purpose of this 
                                            // register is to use it in 
                                            // combination with respective 
                                            // event signals for interrupt 
                                            // debugging. Neither the FIFO 
                                            // conditions nor the status 
                                            // register are modified due to 
                                            // actions performed on this 
                                            // register. 
#define SPIS_O_RXFFLAGSMASK     0x00000054  // The flag event signal is a 
                                            // combination of all flag 
                                            // associated bit fields that is 
                                            // defined for the peripheral. One 
                                            // or more flags can be enabled as 
                                            // event triggers - and may be 
                                            // polled in SW in order to 
                                            // determine the event source. This 
                                            // register defines a mask for 
                                            // which of the flags defined in 
                                            // the RX_FIFO_FLAGS register that 
                                            // are to be enabled as flag event 
                                            // sources. 
#define SPIS_O_RXFSTAT          0x00000058  // This register reflects the 
                                            // current status of the RX FIFO. 
#define SPIS_O_RXFEVSRC         0x0000005C  // This register is used to select 
                                            // one of the status bit fields in 
                                            // the RX_FIFO_STATUS register as 
                                            // source for an event output - 
                                            // typically to be used together 
                                            // with a DMA controller. 
#define SPIS_O_RXFWATMRK        0x00000060  // This register defines the water 
                                            // mark threshold level of the RX 
                                            // FIFO. When a water mark 
                                            // threshold is defined, it may be 
                                            // used in conjunction with the 
                                            // respective water mark related 
                                            // bit fields in both the status 
                                            // register and flag register. An 
                                            // appropriate water mark flag can 
                                            // be enabled as an interrupt 
                                            // source in order for SW to act on 
                                            // the FIFO. Likewise, a suitable 
                                            // water mark status bit field can 
                                            // be selected as a DMA event 
                                            // source in order for the DMA 
                                            // controller to act on the FIFO 
                                            // and offload the MCU. 
#define SPIS_O_RXFPOP           0x00000064  // This register is used to pop 
                                            // data from the RX FIFO. Access to 
                                            // an empty RX FIFO returns a read 
                                            // value of 0x00 - while also 
                                            // causing an underflow condition. 
#define SPIS_O_RXFFLUSH         0x00000068  // This register is used to flush 
                                            // the contents of the RX FIFO. 
                                            // Related status fields will 
                                            // update accordingly. Related flag 
                                            // fields are not cleared by 
                                            // flushing the FIFO. Some related 
                                            // flag fields may be set due to 
                                            // that the FIFO becomes empty. 
#define SPIS_O_RXFMEMRDPOS      0x00000080  // This register returns the RX 
                                            // FIFO read pointer. The FIFO is 
                                            // circular. The read pointer 
                                            // points to the location of the 
                                            // FIFO element which is the next 
                                            // byte that is to be popped/read 
                                            // out of the FIFO. 
#define SPIS_O_RXFMEMWRPOS      0x00000084  // This register returns the RX 
                                            // FIFO write pointer. The FIFO is 
                                            // circular. The write pointer 
                                            // points to the location in the 
                                            // FIFO where the next element that 
                                            // is to be pushed/written will be 
                                            // stored. 
#define SPIS_O_RXFCNT           0x00000088  // This register returns the 
                                            // number of bytes that resides 
                                            // inside the FIFO. 
#define SPIS_O_TXFMEM0          0x00000400  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM1          0x00000404  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM2          0x00000408  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM3          0x0000040C  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM4          0x00000410  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM5          0x00000414  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM6          0x00000418  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM7          0x0000041C  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM8          0x00000420  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM9          0x00000424  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM10         0x00000428  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM11         0x0000042C  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM12         0x00000430  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM13         0x00000434  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM14         0x00000438  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_TXFMEM15         0x0000043C  // The contents of the TX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM0          0x00000800  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM1          0x00000804  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM2          0x00000808  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM3          0x0000080C  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM4          0x00000810  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM5          0x00000814  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM6          0x00000818  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM7          0x0000081C  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM8          0x00000820  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM9          0x00000824  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM10         0x00000828  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM11         0x0000082C  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM12         0x00000830  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM13         0x00000834  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM14         0x00000838  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 
#define SPIS_O_RXFMEM15         0x0000083C  // The contents of the RX FIFO can 
                                            // be read through direct access of 
                                            // the internal memory elements 
                                            // without intervention to the FIFO 
                                            // controller logic. The FIFO works 
                                            // as a ring buffer. There are 16 
                                            // memory elements, each eight bits 
                                            // wide. 


//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_GPFLAGS register.
//
//*****************************************************************************
#define SPIS_GPFLAGS_BYTE_DONE  0x00000008  // A complete byte transfer event. 
                                            // The event is cleared by 
                                            // accessing this register bit 
                                            // field. 0: No byte done event 
                                            // detected since last cleared by 
                                            // SW. 1: A complete byte transfer 
                                            // (TX/RX) has taken place. 
#define SPIS_GPFLAGS_BYTE_DONE_M \
                                0x00000008
#define SPIS_GPFLAGS_BYTE_DONE_S 3
#define SPIS_GPFLAGS_BYTE_RX_OVF \
                                0x00000004  // SPI-Core Parallel RX data 
                                            // overflow event. 0: No overflow 
                                            // condition is detected since last 
                                            // cleared by SW. 1: An overflow 
                                            // condition of sampled SI-pin data 
                                            // is detected in the SPI-Core due 
                                            // to that the MCU-SPI module has 
                                            // not been able to sample the PRX 
                                            // data bus. The SPI Core is able 
                                            // to buffer one byte of data 
                                            // sampled on the SI-pin. This 
                                            // event is eventually to occur 
                                            // during SPI traffic when the MCU 
                                            // domain is in power-down. Later, 
                                            // when the MCU wakes up, the 
                                            // overflow condition is registered 
                                            // - and this flag is set. 

#define SPIS_GPFLAGS_BYTE_RX_OVF_M \
                                0x00000004
#define SPIS_GPFLAGS_BYTE_RX_OVF_S 2
#define SPIS_GPFLAGS_BYTE_ABORT 0x00000002  // Incomplete SPI transaction 
                                            // event. 0: No SPI incomplete 
                                            // event detected since last 
                                            // cleared by SW. 1: Chip select 
                                            // has been de-asserted during an 
                                            // ongoing incomplete byte 
                                            // transfer. 
#define SPIS_GPFLAGS_BYTE_ABORT_M \
                                0x00000002
#define SPIS_GPFLAGS_BYTE_ABORT_S 1
#define SPIS_GPFLAGS_CS         0x00000001  // Chip select event. 0: Chip 
                                            // select has not been asserted 
                                            // since last cleared by SW. 1: 
                                            // Chip select assertion is 
                                            // detected. 
#define SPIS_GPFLAGS_CS_M       0x00000001
#define SPIS_GPFLAGS_CS_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_GPFLAGSSET register.
//
//*****************************************************************************
#define SPIS_GPFLAGSSET_BYTE_DONE \
                                0x00000008  // 0: No effect. 1: Drive Byte 
                                            // Done event high 

#define SPIS_GPFLAGSSET_BYTE_DONE_M \
                                0x00000008
#define SPIS_GPFLAGSSET_BYTE_DONE_S 3
#define SPIS_GPFLAGSSET_BYTE_RX_OVF \
                                0x00000004  // 0: No effect. 1: Drive Overflow 
                                            // event high 

#define SPIS_GPFLAGSSET_BYTE_RX_OVF_M \
                                0x00000004
#define SPIS_GPFLAGSSET_BYTE_RX_OVF_S 2
#define SPIS_GPFLAGSSET_BYTE_ABORT \
                                0x00000002  // 0: No effect. 1: Drive 
                                            // Incomplete event high 

#define SPIS_GPFLAGSSET_BYTE_ABORT_M \
                                0x00000002
#define SPIS_GPFLAGSSET_BYTE_ABORT_S 1
#define SPIS_GPFLAGSSET_CS      0x00000001  // 0: No effect. 1: Drive Chip 
                                            // Select high 
#define SPIS_GPFLAGSSET_CS_M    0x00000001
#define SPIS_GPFLAGSSET_CS_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_GPFLAGSMASK register.
//
//*****************************************************************************
#define SPIS_GPFLAGSMASK_RX_DMA_DONE \
                                0x00000020  // Enable bit for DMA-done RX 
                                            // FIFO-channel. 0: Flag is not an 
                                            // event source. 1: Flag is enabled 
                                            // as an event source. 

#define SPIS_GPFLAGSMASK_RX_DMA_DONE_M \
                                0x00000020
#define SPIS_GPFLAGSMASK_RX_DMA_DONE_S 5
#define SPIS_GPFLAGSMASK_TX_DMA_DONE \
                                0x00000010  // Enable bit for DMA-done TX 
                                            // FIFO-channel. 0: Flag is not an 
                                            // event source. 1: Flag is enabled 
                                            // as an event source. 

#define SPIS_GPFLAGSMASK_TX_DMA_DONE_M \
                                0x00000010
#define SPIS_GPFLAGSMASK_TX_DMA_DONE_S 4
#define SPIS_GPFLAGSMASK_BYTE_DONE \
                                0x00000008  // Enable bit for 
                                            // GP_FLAGS.BYTE_DONE_EV as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 

#define SPIS_GPFLAGSMASK_BYTE_DONE_M \
                                0x00000008
#define SPIS_GPFLAGSMASK_BYTE_DONE_S 3
#define SPIS_GPFLAGSMASK_BYTE_RX_OVF \
                                0x00000004  // Enable bit for 
                                            // GP_FLAGS.PRX_OF_EV as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 

#define SPIS_GPFLAGSMASK_BYTE_RX_OVF_M \
                                0x00000004
#define SPIS_GPFLAGSMASK_BYTE_RX_OVF_S 2
#define SPIS_GPFLAGSMASK_BYTE_ABORT \
                                0x00000002  // Enable bit for 
                                            // GP_FLAGS.INCOM_EV as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 

#define SPIS_GPFLAGSMASK_BYTE_ABORT_M \
                                0x00000002
#define SPIS_GPFLAGSMASK_BYTE_ABORT_S 1
#define SPIS_GPFLAGSMASK_CS     0x00000001  // Enable bit for GP_FLAGS.CS_EV 
                                            // as event signal. 0: Flag is not 
                                            // an event source. 1: Flag is 
                                            // enabled as an event source. 
#define SPIS_GPFLAGSMASK_CS_M   0x00000001
#define SPIS_GPFLAGSMASK_CS_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_CFG register.
//
//*****************************************************************************
#define SPIS_CFG_TR_DMA_REQ_TYPE \
                                0x00000010  // RX DMA request type select. 0: 
                                            // Request is chosen (single 
                                            // request output is set to '0'). 
                                            // 1: Single request is chosen 
                                            // (request output is set to '0'). 

#define SPIS_CFG_TR_DMA_REQ_TYPE_M \
                                0x00000010
#define SPIS_CFG_TR_DMA_REQ_TYPE_S 4
#define SPIS_CFG_TX_DMA_REQ_TYPE \
                                0x00000008  // TX DMA request type select. 0: 
                                            // Request is chosen (single 
                                            // request output is set to '0'). 
                                            // 1: Single request is chosen 
                                            // (request output is set to '0'). 

#define SPIS_CFG_TX_DMA_REQ_TYPE_M \
                                0x00000008
#define SPIS_CFG_TX_DMA_REQ_TYPE_S 3
#define SPIS_CFG_RX_BIT_ORDER   0x00000004  // MOSI first bit configuration. 
                                            // 0: First bit is LSB. 1: First 
                                            // bit is MSB. 
#define SPIS_CFG_RX_BIT_ORDER_M 0x00000004
#define SPIS_CFG_RX_BIT_ORDER_S 2
#define SPIS_CFG_TX_BIT_ORDER   0x00000002  // MISO first bit configuration. 
                                            // 0: First bit is LSB. 1: First 
                                            // bit is MSB. 
#define SPIS_CFG_TX_BIT_ORDER_M 0x00000002
#define SPIS_CFG_TX_BIT_ORDER_S 1
#define SPIS_CFG_POL            0x00000001  // SPI clock polarity. A copy of 
                                            // the polarity value is latched in 
                                            // the AON SPI-Core module. 
                                            // Consequently, if the MCU domain 
                                            // is powered down, the polarity 
                                            // value is withheld and this bit 
                                            // field is updated once MCU powers 
                                            // up. 0: CPOL=0 CPHA=0 1: CPOL=1 
                                            // CPHA=0 
#define SPIS_CFG_POL_M          0x00000001
#define SPIS_CFG_POL_S          0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFFLAGSCLRN register.
//
//*****************************************************************************
#define SPIS_TXFFLAGSCLRN_OVF   0x00000040  // TX FIFO overflow flag. 0: The 
                                            // TX FIFO has not experienced 
                                            // overflow since last cleared by 
                                            // SW. 1: The TX FIFO has 
                                            // experienced overflow due to that 
                                            // the MCU has attempted to write 
                                            // data into an already full TX 
                                            // FIFO (sticky high until cleared 
                                            // by SW). 
#define SPIS_TXFFLAGSCLRN_OVF_M 0x00000040
#define SPIS_TXFFLAGSCLRN_OVF_S 6
#define SPIS_TXFFLAGSCLRN_UNF   0x00000020  // TX FIFO underflow flag. 0: The 
                                            // TX FIFO has not experienced 
                                            // underflow since last cleared by 
                                            // SW. 1: The TX FIFO has 
                                            // experienced underflow due to 
                                            // data request from the SPI Slave 
                                            // Core while TX FIFO is empty 
                                            // (sticky high until cleared by 
                                            // SW). Default 'empty' data sent 
                                            // out from the TX FIFO is 0x00. 
#define SPIS_TXFFLAGSCLRN_UNF_M 0x00000020
#define SPIS_TXFFLAGSCLRN_UNF_S 5
#define SPIS_TXFFLAGSCLRN_NOT_EMPTY \
                                0x00000010  // TX FIFO has one or more bytes 
                                            // flag. 0: Number of bytes in TX 
                                            // FIFO has not become greater than 
                                            // zero (i.e. is empty) since last 
                                            // cleared by SW. 1: Number of 
                                            // bytes in TX FIFO has become 
                                            // greater than zero (not empty) 
                                            // (sticky high until cleared by 
                                            // SW). If SW attempts to clear the 
                                            // flag while the TX FIFO has data 
                                            // (not empty), the flag remains 
                                            // set. 

#define SPIS_TXFFLAGSCLRN_NOT_EMPTY_M \
                                0x00000010
#define SPIS_TXFFLAGSCLRN_NOT_EMPTY_S 4
#define SPIS_TXFFLAGSCLRN_LE_WATMRK \
                                0x00000008  // TX FIFO less than or equal to 
                                            // TX FIFO water mark level flag. 
                                            // 0: Number of bytes in TX FIFO 
                                            // has not become equal to or less 
                                            // than the TX FIFO water mark 
                                            // level since last cleared by SW. 
                                            // 1: Number of bytes in TX FIFO 
                                            // has become equal to or less than 
                                            // TX FIFO water mark level (sticky 
                                            // high until cleared by SW). If SW 
                                            // attempts to clear the flag while 
                                            // number of bytes in TX FIFO is 
                                            // equal to or less than TX FIFO 
                                            // water mark level, the flag 
                                            // remains set. 

#define SPIS_TXFFLAGSCLRN_LE_WATMRK_M \
                                0x00000008
#define SPIS_TXFFLAGSCLRN_LE_WATMRK_S 3
#define SPIS_TXFFLAGSCLRN_GE_WATMRK \
                                0x00000004  // TX FIFO greater than or equal 
                                            // to TX FIFO water mark level 
                                            // flag. 0: Number of bytes in TX 
                                            // FIFO has not become equal to or 
                                            // greater than the TX FIFO water 
                                            // mark level since last cleared by 
                                            // SW. 1: Number of bytes in TX 
                                            // FIFO has become equal to or 
                                            // greater than TX FIFO water mark 
                                            // level (sticky high until cleared 
                                            // by SW). If SW attempts to clear 
                                            // the flag while number of bytes 
                                            // in TX FIFO is equal to or 
                                            // greater than TX FIFO water mark 
                                            // level, the flag remains set. 

#define SPIS_TXFFLAGSCLRN_GE_WATMRK_M \
                                0x00000004
#define SPIS_TXFFLAGSCLRN_GE_WATMRK_S 2
#define SPIS_TXFFLAGSCLRN_EMPTY 0x00000002  // TX FIFO empty flag. 0: TX FIFO 
                                            // has not become empty since last 
                                            // cleared by SW. 1: TX FIFO has 
                                            // become empty or is empty (sticky 
                                            // high until cleared by SW). If SW 
                                            // attempts to clear the flag while 
                                            // the TX FIFO is empty, the flag 
                                            // remains set. 
#define SPIS_TXFFLAGSCLRN_EMPTY_M \
                                0x00000002
#define SPIS_TXFFLAGSCLRN_EMPTY_S 1
#define SPIS_TXFFLAGSCLRN_FULL  0x00000001  // TX FIFO full flag. 0: TX FIFO 
                                            // has not become full since last 
                                            // cleared by SW. 1: TX FIFO has 
                                            // become full or is full (sticky 
                                            // high until cleared by SW). If SW 
                                            // attempts to clear the flag while 
                                            // the TX FIFO is full, the flag 
                                            // remains set. 
#define SPIS_TXFFLAGSCLRN_FULL_M \
                                0x00000001
#define SPIS_TXFFLAGSCLRN_FULL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFFLAGSSET register.
//
//*****************************************************************************
#define SPIS_TXFFLAGSSET_OVF    0x00000040  // TX FIFO overflow flag. 1: TX 
                                            // FIFO overflow event is forced to 
                                            // 1 
#define SPIS_TXFFLAGSSET_OVF_M  0x00000040
#define SPIS_TXFFLAGSSET_OVF_S  6
#define SPIS_TXFFLAGSSET_UNF    0x00000020  // TX FIFO underflow flag. 1: TX 
                                            // FIFO underflow event is forced 
                                            // to 1 
#define SPIS_TXFFLAGSSET_UNF_M  0x00000020
#define SPIS_TXFFLAGSSET_UNF_S  5
#define SPIS_TXFFLAGSSET_NOT_EMPTY \
                                0x00000010  // TX FIFO has data flag. 1: TX 
                                            // FIFO has data event is forced to 
                                            // 1 

#define SPIS_TXFFLAGSSET_NOT_EMPTY_M \
                                0x00000010
#define SPIS_TXFFLAGSSET_NOT_EMPTY_S 4
#define SPIS_TXFFLAGSSET_LE_WATMRK \
                                0x00000008  // TX FIFO water mark level event. 
                                            // 1: TX FIFO lower than water mark 
                                            // event is forced to 1 

#define SPIS_TXFFLAGSSET_LE_WATMRK_M \
                                0x00000008
#define SPIS_TXFFLAGSSET_LE_WATMRK_S 3
#define SPIS_TXFFLAGSSET_GE_WATMRK \
                                0x00000004  // TX FIFO GE water mark level 
                                            // event. 1: TX FIFO greater than 
                                            // or equal event is forced to 1 

#define SPIS_TXFFLAGSSET_GE_WATMRK_M \
                                0x00000004
#define SPIS_TXFFLAGSSET_GE_WATMRK_S 2
#define SPIS_TXFFLAGSSET_EMPTY  0x00000002  // TX FIFO empty event. 1: TX FIFO 
                                            // empty event is forced to 1 
#define SPIS_TXFFLAGSSET_EMPTY_M \
                                0x00000002
#define SPIS_TXFFLAGSSET_EMPTY_S 1
#define SPIS_TXFFLAGSSET_FULL   0x00000001  // TX FIFO full event. 1: TX FIFO 
                                            // full event is forced to 1 
#define SPIS_TXFFLAGSSET_FULL_M 0x00000001
#define SPIS_TXFFLAGSSET_FULL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFFLAGSMASK register.
//
//*****************************************************************************
#define SPIS_TXFFLAGSMASK_OVF   0x00000040  // Enable bit for 
                                            // TX_FIFO_FLAGS.O_FLOW as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 
#define SPIS_TXFFLAGSMASK_OVF_M 0x00000040
#define SPIS_TXFFLAGSMASK_OVF_S 6
#define SPIS_TXFFLAGSMASK_UNF   0x00000020  // Enable bit for 
                                            // TX_FIFO_FLAGS.U_FLOW as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 
#define SPIS_TXFFLAGSMASK_UNF_M 0x00000020
#define SPIS_TXFFLAGSMASK_UNF_S 5
#define SPIS_TXFFLAGSMASK_NOT_EMPTY \
                                0x00000010  // Enable bit for 
                                            // TX_FIFO_FLAGS.HAS_DATA as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 

#define SPIS_TXFFLAGSMASK_NOT_EMPTY_M \
                                0x00000010
#define SPIS_TXFFLAGSMASK_NOT_EMPTY_S 4
#define SPIS_TXFFLAGSMASK_LE_WATMRK \
                                0x00000008  // Enable bit for 
                                            // TX_FIFO_FLAGS.LE_WM as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 

#define SPIS_TXFFLAGSMASK_LE_WATMRK_M \
                                0x00000008
#define SPIS_TXFFLAGSMASK_LE_WATMRK_S 3
#define SPIS_TXFFLAGSMASK_GE_WATMRK \
                                0x00000004  // Enable bit for 
                                            // TX_FIFO_FLAGS.GE_WM as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 

#define SPIS_TXFFLAGSMASK_GE_WATMRK_M \
                                0x00000004
#define SPIS_TXFFLAGSMASK_GE_WATMRK_S 2
#define SPIS_TXFFLAGSMASK_EMPTY 0x00000002  // Enable bit for 
                                            // TX_FIFO_FLAGS.EMPTY as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 
#define SPIS_TXFFLAGSMASK_EMPTY_M \
                                0x00000002
#define SPIS_TXFFLAGSMASK_EMPTY_S 1
#define SPIS_TXFFLAGSMASK_FULL  0x00000001  // Enable bit for 
                                            // TX_FIFO_FLAGS.FULL as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 
#define SPIS_TXFFLAGSMASK_FULL_M \
                                0x00000001
#define SPIS_TXFFLAGSMASK_FULL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_TXFSTAT register.
//
//*****************************************************************************
#define SPIS_TXFSTAT_NOT_EMPTY  0x00000010  // TX FIFO has one or more bytes 
                                            // status. 0: Number of bytes in TX 
                                            // FIFO is zero (empty). 1: Number 
                                            // of bytes in TX FIFO is greater 
                                            // than zero (not empty). 
#define SPIS_TXFSTAT_NOT_EMPTY_M \
                                0x00000010
#define SPIS_TXFSTAT_NOT_EMPTY_S 4
#define SPIS_TXFSTAT_LE_WATMRK  0x00000008  // TX FIFO less than or equal to 
                                            // TX FIFO water mark level status. 
                                            // 0: Number of bytes in TX FIFO is 
                                            // greater than TX FIFO water mark 
                                            // level. 1: Number of bytes in TX 
                                            // FIFO is equal to or less than TX 
                                            // FIFO water mark level. 
#define SPIS_TXFSTAT_LE_WATMRK_M \
                                0x00000008
#define SPIS_TXFSTAT_LE_WATMRK_S 3
#define SPIS_TXFSTAT_GE_WATMRK  0x00000004  // TX FIFO greater than or equal 
                                            // to TX FIFO water mark level 
                                            // status. 0: Number of bytes in TX 
                                            // FIFO is less than TX FIFO water 
                                            // mark level. 1: Number of bytes 
                                            // in TX FIFO is equal to or 
                                            // greater than TX FIFO water mark 
                                            // level. 
#define SPIS_TXFSTAT_GE_WATMRK_M \
                                0x00000004
#define SPIS_TXFSTAT_GE_WATMRK_S 2
#define SPIS_TXFSTAT_EMPTY      0x00000002  // TX FIFO empty status. 0: TX 
                                            // FIFO is not empty. 1: TX FIFO is 
                                            // empty. 
#define SPIS_TXFSTAT_EMPTY_M    0x00000002
#define SPIS_TXFSTAT_EMPTY_S    1
#define SPIS_TXFSTAT_FULL       0x00000001  // TX FIFO full status. 0: TX FIFO 
                                            // is not full. 1: TX FIFO is full. 
#define SPIS_TXFSTAT_FULL_M     0x00000001
#define SPIS_TXFSTAT_FULL_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFEVSRC register.
//
//*****************************************************************************
#define SPIS_TXFEVSRC_SEL_M     0x00000007  // TX FIFO Status source select 
#define SPIS_TXFEVSRC_SEL_S     0
#define SPIS_TXFEVSRC_SEL_FULL  0x00000000  // 1: FIFO is full 
#define SPIS_TXFEVSRC_SEL_EMPTY 0x00000001  // 1: FIFO is empty 
#define SPIS_TXFEVSRC_SEL_GE_WATMRK \
                                0x00000002  // 1: FIFO has more data than 
                                            // water mark 
#define SPIS_TXFEVSRC_SEL_LE_WATMRK \
                                0x00000003  // 1: FIFO has less data than 
                                            // water mark 
#define SPIS_TXFEVSRC_SEL_NOT_EMPTY \
                                0x00000004  // 1: FIFO has some data 
#define SPIS_TXFEVSRC_SEL_ONE   0x00000005  // Static '1'. 
#define SPIS_TXFEVSRC_SEL_RESERVED \
                                0x00000006  // Static '1'. 
#define SPIS_TXFEVSRC_SEL_ZERO  0x00000007  // Static '0' 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFWATMRK register.
//
//*****************************************************************************
#define SPIS_TXFWATMRK_CNT_M    0x0000000F  // THRESHOLD: 0x0: 0 bytes 0x1: 1 
                                            // bytes 0x2: 2 bytes ... 0xE: 14 
                                            // bytes 0xF: 15 bytes 
#define SPIS_TXFWATMRK_CNT_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_TXFPUSH register.
//
//*****************************************************************************
#define SPIS_TXFPUSH_DATA_M     0x000000FF  // Data to be pushed into TX FIFO. 
#define SPIS_TXFPUSH_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFFLUSH register.
//
//*****************************************************************************
#define SPIS_TXFFLUSH_FLUSH     0x00000001  // Execute TX FIFO flush command. 
                                            // 0: TX FIFO is not flushed 
                                            // (untouched). 1: TX FIFO is 
                                            // flushed. 
#define SPIS_TXFFLUSH_FLUSH_M   0x00000001
#define SPIS_TXFFLUSH_FLUSH_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFMEMRDPOS register.
//
//*****************************************************************************
#define SPIS_TXFMEMRDPOS_POS_M  0x0000000F  // 0x0: Read Pointer at FIFO 
                                            // element #0 0x1: Read Pointer at 
                                            // FIFO element #1 ... 0xE: Read 
                                            // Pointer at FIFO element #14 0xF: 
                                            // Read Pointer at FIFO element #15 
#define SPIS_TXFMEMRDPOS_POS_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFMEMWRPOS register.
//
//*****************************************************************************
#define SPIS_TXFMEMWRPOS_POS_M  0x0000000F  // 0x0: Write Pointer at FIFO 
                                            // element #0 0x1: Write Pointer at 
                                            // FIFO element #1 ... 0xE: Write 
                                            // Pointer at FIFO element #14 0xF: 
                                            // Write Pointer at FIFO element 
                                            // #15 
#define SPIS_TXFMEMWRPOS_POS_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_TXFCNT register.
//
//*****************************************************************************
#define SPIS_TXFCNT_CNT_M       0x0000001F  // 0x00: 0 bytes in FIFO 0x01: 1 
                                            // bytes in FIFO ... 0x0E: 14 bytes 
                                            // in FIFO 0x0F: 15 bytes in FIFO 
                                            // 0x10: 16 bytes in FIFO 0x11 to 
                                            // 0x1F: Unreachable values 
#define SPIS_TXFCNT_CNT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFFLAGSCLRN register.
//
//*****************************************************************************
#define SPIS_RXFFLAGSCLRN_OVF   0x00000040  // RX FIFO overflow flag. 0: The 
                                            // RX FIFO has not experienced 
                                            // overflow since last cleared by 
                                            // SW. 1: The RX FIFO has 
                                            // experienced overflow due to that 
                                            // the MCU has attempted to write 
                                            // data into an already full RX 
                                            // FIFO (sticky high until cleared 
                                            // by SW). 
#define SPIS_RXFFLAGSCLRN_OVF_M 0x00000040
#define SPIS_RXFFLAGSCLRN_OVF_S 6
#define SPIS_RXFFLAGSCLRN_UNF   0x00000020  // RX FIFO underflow flag. 0: The 
                                            // RX FIFO has not experienced 
                                            // underflow since last cleared by 
                                            // SW. 1: The RX FIFO has 
                                            // experienced underflow due to 
                                            // data request from the SPI Slave 
                                            // Core while RX FIFO is empty 
                                            // (sticky high until cleared by 
                                            // SW). Default 'empty' data sent 
                                            // out from the RX FIFO is 0x00. 
#define SPIS_RXFFLAGSCLRN_UNF_M 0x00000020
#define SPIS_RXFFLAGSCLRN_UNF_S 5
#define SPIS_RXFFLAGSCLRN_NOT_EMPTY \
                                0x00000010  // RX FIFO has one or more bytes 
                                            // flag. 1: Number of bytes in RX 
                                            // FIFO has become greater than 
                                            // zero (not empty) (sticky high 
                                            // until cleared by SW). If SW 
                                            // attempts to clear the flag while 
                                            // the RX FIFO has data (not 
                                            // empty), the flag remains set. 0: 
                                            // Number of bytes in RX FIFO has 
                                            // not become greater than zero 
                                            // (i.e. is empty) since last 
                                            // cleared by SW. 

#define SPIS_RXFFLAGSCLRN_NOT_EMPTY_M \
                                0x00000010
#define SPIS_RXFFLAGSCLRN_NOT_EMPTY_S 4
#define SPIS_RXFFLAGSCLRN_LE_WATMRK \
                                0x00000008  // RX FIFO less than or equal to 
                                            // RX FIFO water mark level flag. 
                                            // 0: Number of bytes in RX FIFO 
                                            // has not become equal to or less 
                                            // than the RX FIFO water mark 
                                            // level since last cleared by SW. 
                                            // 1: Number of bytes in RX FIFO 
                                            // has become equal to or less than 
                                            // RX FIFO water mark level (sticky 
                                            // high until cleared by SW). If SW 
                                            // attempts to clear the flag while 
                                            // number of bytes in RX FIFO is 
                                            // equal to or less than RX FIFO 
                                            // water mark level, the flag 
                                            // remains set. 

#define SPIS_RXFFLAGSCLRN_LE_WATMRK_M \
                                0x00000008
#define SPIS_RXFFLAGSCLRN_LE_WATMRK_S 3
#define SPIS_RXFFLAGSCLRN_GE_WATMRK \
                                0x00000004  // RX FIFO greater than or equal 
                                            // to RX FIFO water mark level 
                                            // flag. 0: Number of bytes in RX 
                                            // FIFO has not become equal to or 
                                            // greater than the RX FIFO water 
                                            // mark level since last cleared by 
                                            // SW. 1: Number of bytes in RX 
                                            // FIFO has become equal to or 
                                            // greater than RX FIFO water mark 
                                            // level (sticky high until cleared 
                                            // by SW). If SW attempts to clear 
                                            // the flag while number of bytes 
                                            // in RX FIFO is equal to or 
                                            // greater than RX FIFO water mark 
                                            // level, the flag remains set. 

#define SPIS_RXFFLAGSCLRN_GE_WATMRK_M \
                                0x00000004
#define SPIS_RXFFLAGSCLRN_GE_WATMRK_S 2
#define SPIS_RXFFLAGSCLRN_EMPTY 0x00000002  // RX FIFO empty flag. 0: RX FIFO 
                                            // has not become empty since last 
                                            // cleared by SW. 1: RX FIFO has 
                                            // become empty or is empty (sticky 
                                            // high until cleared by SW). If SW 
                                            // attempts to clear the flag while 
                                            // the RX FIFO is empty, the flag 
                                            // remains set. 
#define SPIS_RXFFLAGSCLRN_EMPTY_M \
                                0x00000002
#define SPIS_RXFFLAGSCLRN_EMPTY_S 1
#define SPIS_RXFFLAGSCLRN_FULL  0x00000001  // RX FIFO full flag. 0: RX FIFO 
                                            // has not become full since last 
                                            // cleared by SW. 1: RX FIFO has 
                                            // become full or is full (sticky 
                                            // high until cleared by SW). If SW 
                                            // attempts to clear the flag while 
                                            // the RX FIFO is full, the flag 
                                            // remains set. 
#define SPIS_RXFFLAGSCLRN_FULL_M \
                                0x00000001
#define SPIS_RXFFLAGSCLRN_FULL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFFLAGSSET register.
//
//*****************************************************************************
#define SPIS_RXFFLAGSSET_OVF    0x00000040  // RX FIFO overflow flag. 1: RX 
                                            // FIFO overflow event is forced to 
                                            // 1 
#define SPIS_RXFFLAGSSET_OVF_M  0x00000040
#define SPIS_RXFFLAGSSET_OVF_S  6
#define SPIS_RXFFLAGSSET_UNF    0x00000020  // RX FIFO underflow flag. 1: RX 
                                            // FIFO underflow event is forced 
                                            // to 1 
#define SPIS_RXFFLAGSSET_UNF_M  0x00000020
#define SPIS_RXFFLAGSSET_UNF_S  5
#define SPIS_RXFFLAGSSET_NOT_EMPTY \
                                0x00000010  // RX FIFO has data flag. 1: RX 
                                            // FIFO has data event is forced to 
                                            // 1 

#define SPIS_RXFFLAGSSET_NOT_EMPTY_M \
                                0x00000010
#define SPIS_RXFFLAGSSET_NOT_EMPTY_S 4
#define SPIS_RXFFLAGSSET_LE_WATMRK \
                                0x00000008  // RX FIFO water mark level event. 
                                            // 1: RX FIFO lower than water mark 
                                            // event is forced to 1 

#define SPIS_RXFFLAGSSET_LE_WATMRK_M \
                                0x00000008
#define SPIS_RXFFLAGSSET_LE_WATMRK_S 3
#define SPIS_RXFFLAGSSET_GE_WATMRK \
                                0x00000004  // RX FIFO GE water mark level 
                                            // event. 1: RX FIFO greater than 
                                            // or equal event is forced to 1 

#define SPIS_RXFFLAGSSET_GE_WATMRK_M \
                                0x00000004
#define SPIS_RXFFLAGSSET_GE_WATMRK_S 2
#define SPIS_RXFFLAGSSET_EMPTY  0x00000002  // RX FIFO empty event. 1: RX FIFO 
                                            // empty event is forced to 1 
#define SPIS_RXFFLAGSSET_EMPTY_M \
                                0x00000002
#define SPIS_RXFFLAGSSET_EMPTY_S 1
#define SPIS_RXFFLAGSSET_FULL   0x00000001  // RX FIFO full event. 1: RX FIFO 
                                            // full event is forced to 1 
#define SPIS_RXFFLAGSSET_FULL_M 0x00000001
#define SPIS_RXFFLAGSSET_FULL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFFLAGSMASK register.
//
//*****************************************************************************
#define SPIS_RXFFLAGSMASK_OVF   0x00000040  // Enable bit for 
                                            // RX_FIFO_FLAGS.O_FLOW as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 
#define SPIS_RXFFLAGSMASK_OVF_M 0x00000040
#define SPIS_RXFFLAGSMASK_OVF_S 6
#define SPIS_RXFFLAGSMASK_UNF   0x00000020  // Enable bit for 
                                            // RX_FIFO_FLAGS.U_FLOW as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 
#define SPIS_RXFFLAGSMASK_UNF_M 0x00000020
#define SPIS_RXFFLAGSMASK_UNF_S 5
#define SPIS_RXFFLAGSMASK_NOT_EMPTY \
                                0x00000010  // Enable bit for 
                                            // RX_FIFO_FLAGS.HAS_DATA as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 

#define SPIS_RXFFLAGSMASK_NOT_EMPTY_M \
                                0x00000010
#define SPIS_RXFFLAGSMASK_NOT_EMPTY_S 4
#define SPIS_RXFFLAGSMASK_LE_WATMRK \
                                0x00000008  // Enable bit for 
                                            // RX_FIFO_FLAGS.LE_WM as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 

#define SPIS_RXFFLAGSMASK_LE_WATMRK_M \
                                0x00000008
#define SPIS_RXFFLAGSMASK_LE_WATMRK_S 3
#define SPIS_RXFFLAGSMASK_GE_WATMRK \
                                0x00000004  // Enable bit for 
                                            // RX_FIFO_FLAGS.GE_WM as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 

#define SPIS_RXFFLAGSMASK_GE_WATMRK_M \
                                0x00000004
#define SPIS_RXFFLAGSMASK_GE_WATMRK_S 2
#define SPIS_RXFFLAGSMASK_EMPTY 0x00000002  // Enable bit for 
                                            // RX_FIFO_FLAGS.EMPTY as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 
#define SPIS_RXFFLAGSMASK_EMPTY_M \
                                0x00000002
#define SPIS_RXFFLAGSMASK_EMPTY_S 1
#define SPIS_RXFFLAGSMASK_FULL  0x00000001  // Enable bit for 
                                            // RX_FIFO_FLAGS.FULL as event 
                                            // signal. 0: Flag is not an event 
                                            // source. 1: Flag is enabled as an 
                                            // event source. 
#define SPIS_RXFFLAGSMASK_FULL_M \
                                0x00000001
#define SPIS_RXFFLAGSMASK_FULL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_RXFSTAT register.
//
//*****************************************************************************
#define SPIS_RXFSTAT_NOT_EMPTY  0x00000010  // RX FIFO has one or more bytes 
                                            // status. 0: Number of bytes in RX 
                                            // FIFO is zero (empty). 1: Number 
                                            // of bytes in RX FIFO is greater 
                                            // than zero (not empty). 
#define SPIS_RXFSTAT_NOT_EMPTY_M \
                                0x00000010
#define SPIS_RXFSTAT_NOT_EMPTY_S 4
#define SPIS_RXFSTAT_LE_WATMRK  0x00000008  // RX FIFO less than or equal to 
                                            // RX FIFO water mark level status. 
                                            // 0: Number of bytes in RX FIFO is 
                                            // greater than RX FIFO water mark 
                                            // level. 1: Number of bytes in RX 
                                            // FIFO is equal to or less than RX 
                                            // FIFO water mark level. 
#define SPIS_RXFSTAT_LE_WATMRK_M \
                                0x00000008
#define SPIS_RXFSTAT_LE_WATMRK_S 3
#define SPIS_RXFSTAT_GE_WATMRK  0x00000004  // RX FIFO greater than or equal 
                                            // to RX FIFO water mark level 
                                            // status. 0: Number of bytes in RX 
                                            // FIFO is less than RX FIFO water 
                                            // mark level. 1: Number of bytes 
                                            // in RX FIFO is equal to or 
                                            // greater than RX FIFO water mark 
                                            // level. 
#define SPIS_RXFSTAT_GE_WATMRK_M \
                                0x00000004
#define SPIS_RXFSTAT_GE_WATMRK_S 2
#define SPIS_RXFSTAT_EMPTY      0x00000002  // RX FIFO empty status. 0: RX 
                                            // FIFO is not empty. 1: RX FIFO is 
                                            // empty. 
#define SPIS_RXFSTAT_EMPTY_M    0x00000002
#define SPIS_RXFSTAT_EMPTY_S    1
#define SPIS_RXFSTAT_FULL       0x00000001  // RX FIFO full status. 0: RX FIFO 
                                            // is not full. 1: RX FIFO is full. 
#define SPIS_RXFSTAT_FULL_M     0x00000001
#define SPIS_RXFSTAT_FULL_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFEVSRC register.
//
//*****************************************************************************
#define SPIS_RXFEVSRC_SEL_M     0x00000007  // RX FIFO Status source select 
#define SPIS_RXFEVSRC_SEL_S     0
#define SPIS_RXFEVSRC_SEL_FULL  0x00000000  // 1: FIFO is full 
#define SPIS_RXFEVSRC_SEL_EMPTY 0x00000001  // 1: FIFO is empty 
#define SPIS_RXFEVSRC_SEL_GE_WATMRK \
                                0x00000002  // 1: FIFO has more data than 
                                            // water mark 
#define SPIS_RXFEVSRC_SEL_LE_WATMRK \
                                0x00000003  // 1: FIFO has less data than 
                                            // water mark 
#define SPIS_RXFEVSRC_SEL_NOT_EMPTY \
                                0x00000004  // 1: FIFO has some data 
#define SPIS_RXFEVSRC_SEL_ONE   0x00000005  // Static '1'. 
#define SPIS_RXFEVSRC_SEL_RESERVED \
                                0x00000006  // Static '1'. 
#define SPIS_RXFEVSRC_SEL_ZERO  0x00000007  // Static '0' 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFWATMRK register.
//
//*****************************************************************************
#define SPIS_RXFWATMRK_FIFO_CNT_M \
                                0x0000000F  // THRESHOLD: 0x0: 0 bytes 0x1: 1 
                                            // bytes 0x2: 2 bytes ... 0xE: 14 
                                            // bytes 0xF: 15 bytes 

#define SPIS_RXFWATMRK_FIFO_CNT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_RXFPOP register.
//
//*****************************************************************************
#define SPIS_RXFPOP_DATA_M      0x000000FF  // Data popped from RX FIFO. 
#define SPIS_RXFPOP_DATA_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFFLUSH register.
//
//*****************************************************************************
#define SPIS_RXFFLUSH_FLUSH     0x00000001  // Execute RX FIFO flush command. 
                                            // 0: RX FIFO is not flushed 
                                            // (untouched). 1: RX FIFO is 
                                            // flushed. 
#define SPIS_RXFFLUSH_FLUSH_M   0x00000001
#define SPIS_RXFFLUSH_FLUSH_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFMEMRDPOS register.
//
//*****************************************************************************
#define SPIS_RXFMEMRDPOS_POS_M  0x0000000F  // 0x0: Read Pointer at FIFO 
                                            // element #0 0x1: Read Pointer at 
                                            // FIFO element #1 ... 0xE: Read 
                                            // Pointer at FIFO element #14 0xF: 
                                            // Read Pointer at FIFO element #15 
#define SPIS_RXFMEMRDPOS_POS_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFMEMWRPOS register.
//
//*****************************************************************************
#define SPIS_RXFMEMWRPOS_POS_M  0x0000000F  // 0x0: Write Pointer at FIFO 
                                            // element #0 0x1: Write Pointer at 
                                            // FIFO element #1 ... 0xE: Write 
                                            // Pointer at FIFO element #14 0xF: 
                                            // Write Pointer at FIFO element 
                                            // #15 
#define SPIS_RXFMEMWRPOS_POS_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_RXFCNT register.
//
//*****************************************************************************
#define SPIS_RXFCNT_CNT_M       0x0000001F  // NB<4:0> Number of bytes in FIFO 
                                            // 0x00: 0 bytes in FIFO 0x01: 1 
                                            // bytes in FIFO ... 0x0E: 14 bytes 
                                            // in FIFO 0x0F: 15 bytes in FIFO 
                                            // 0x10: 16 bytes in FIFO 0x11 to 
                                            // 0x1F: Unreachable values 
#define SPIS_RXFCNT_CNT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_TXFMEM0 register.
//
//*****************************************************************************
#define SPIS_TXFMEM0_DATA_M     0x000000FF  // FIFO element 
#define SPIS_TXFMEM0_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_TXFMEM1 register.
//
//*****************************************************************************
#define SPIS_TXFMEM1_DATA_M     0x000000FF  // FIFO element 
#define SPIS_TXFMEM1_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_TXFMEM2 register.
//
//*****************************************************************************
#define SPIS_TXFMEM2_DATA_M     0x000000FF  // FIFO element 
#define SPIS_TXFMEM2_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_TXFMEM3 register.
//
//*****************************************************************************
#define SPIS_TXFMEM3_DATA_M     0x000000FF  // FIFO element 
#define SPIS_TXFMEM3_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_TXFMEM4 register.
//
//*****************************************************************************
#define SPIS_TXFMEM4_DATA_M     0x000000FF  // FIFO element 
#define SPIS_TXFMEM4_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_TXFMEM5 register.
//
//*****************************************************************************
#define SPIS_TXFMEM5_DATA_M     0x000000FF  // FIFO element 
#define SPIS_TXFMEM5_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_TXFMEM6 register.
//
//*****************************************************************************
#define SPIS_TXFMEM6_DATA_M     0x000000FF  // FIFO element 
#define SPIS_TXFMEM6_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_TXFMEM7 register.
//
//*****************************************************************************
#define SPIS_TXFMEM7_DATA_M     0x000000FF  // FIFO element 
#define SPIS_TXFMEM7_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_TXFMEM8 register.
//
//*****************************************************************************
#define SPIS_TXFMEM8_DATA_M     0x000000FF  // FIFO element 
#define SPIS_TXFMEM8_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_TXFMEM9 register.
//
//*****************************************************************************
#define SPIS_TXFMEM9_DATA_M     0x000000FF  // FIFO element 
#define SPIS_TXFMEM9_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFMEM10 register.
//
//*****************************************************************************
#define SPIS_TXFMEM10_DATA_M    0x000000FF  // FIFO element 
#define SPIS_TXFMEM10_DATA_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFMEM11 register.
//
//*****************************************************************************
#define SPIS_TXFMEM11_DATA_M    0x000000FF  // FIFO element 
#define SPIS_TXFMEM11_DATA_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFMEM12 register.
//
//*****************************************************************************
#define SPIS_TXFMEM12_DATA_M    0x000000FF  // FIFO element 
#define SPIS_TXFMEM12_DATA_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFMEM13 register.
//
//*****************************************************************************
#define SPIS_TXFMEM13_DATA_M    0x000000FF  // FIFO element 
#define SPIS_TXFMEM13_DATA_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFMEM14 register.
//
//*****************************************************************************
#define SPIS_TXFMEM14_DATA_M    0x000000FF  // FIFO element 
#define SPIS_TXFMEM14_DATA_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_TXFMEM15 register.
//
//*****************************************************************************
#define SPIS_TXFMEM15_DATA_M    0x000000FF  // FIFO element 
#define SPIS_TXFMEM15_DATA_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_RXFMEM0 register.
//
//*****************************************************************************
#define SPIS_RXFMEM0_DATA_M     0x000000FF  // FIFO element 
#define SPIS_RXFMEM0_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_RXFMEM1 register.
//
//*****************************************************************************
#define SPIS_RXFMEM1_DATA_M     0x000000FF  // FIFO element 
#define SPIS_RXFMEM1_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_RXFMEM2 register.
//
//*****************************************************************************
#define SPIS_RXFMEM2_DATA_M     0x000000FF  // FIFO element 
#define SPIS_RXFMEM2_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_RXFMEM3 register.
//
//*****************************************************************************
#define SPIS_RXFMEM3_DATA_M     0x000000FF  // FIFO element 
#define SPIS_RXFMEM3_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_RXFMEM4 register.
//
//*****************************************************************************
#define SPIS_RXFMEM4_DATA_M     0x000000FF  // FIFO element 
#define SPIS_RXFMEM4_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_RXFMEM5 register.
//
//*****************************************************************************
#define SPIS_RXFMEM5_DATA_M     0x000000FF  // FIFO element 
#define SPIS_RXFMEM5_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_RXFMEM6 register.
//
//*****************************************************************************
#define SPIS_RXFMEM6_DATA_M     0x000000FF  // FIFO element 
#define SPIS_RXFMEM6_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_RXFMEM7 register.
//
//*****************************************************************************
#define SPIS_RXFMEM7_DATA_M     0x000000FF  // FIFO element 
#define SPIS_RXFMEM7_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_RXFMEM8 register.
//
//*****************************************************************************
#define SPIS_RXFMEM8_DATA_M     0x000000FF  // FIFO element 
#define SPIS_RXFMEM8_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the SPIS_O_RXFMEM9 register.
//
//*****************************************************************************
#define SPIS_RXFMEM9_DATA_M     0x000000FF  // FIFO element 
#define SPIS_RXFMEM9_DATA_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFMEM10 register.
//
//*****************************************************************************
#define SPIS_RXFMEM10_DATA_M    0x000000FF  // FIFO element 
#define SPIS_RXFMEM10_DATA_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFMEM11 register.
//
//*****************************************************************************
#define SPIS_RXFMEM11_DATA_M    0x000000FF  // FIFO element 
#define SPIS_RXFMEM11_DATA_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFMEM12 register.
//
//*****************************************************************************
#define SPIS_RXFMEM12_DATA_M    0x000000FF  // FIFO element 
#define SPIS_RXFMEM12_DATA_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFMEM13 register.
//
//*****************************************************************************
#define SPIS_RXFMEM13_DATA_M    0x000000FF  // FIFO element 
#define SPIS_RXFMEM13_DATA_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFMEM14 register.
//
//*****************************************************************************
#define SPIS_RXFMEM14_DATA_M    0x000000FF  // FIFO element 
#define SPIS_RXFMEM14_DATA_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SPIS_O_RXFMEM15 register.
//
//*****************************************************************************
#define SPIS_RXFMEM15_DATA_M    0x000000FF  // FIFO element 
#define SPIS_RXFMEM15_DATA_S    0


#endif // __HW_SPIS_H__

