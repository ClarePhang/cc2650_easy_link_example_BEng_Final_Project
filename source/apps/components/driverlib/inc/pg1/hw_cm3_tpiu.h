
/******************************************************************************
*  Filename:       hw_cm3_tpiu.h
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
#ifndef __HW_CM3_TPIU_H__
#define __HW_CM3_TPIU_H__

//*****************************************************************************
//
// The following are defines for the CM3_TPIU register offsets.
//
//*****************************************************************************
#define CM3_TPIU_O_TPIU_SSPSR   0x00000000  // Supported Sync Port Sizes 
                                            // Register. This register is 
                                            // read/write. Each bit location 
                                            // represents a single port size 
                                            // that is supported on the device, 
                                            // that is, 4, 2 or 1 in bit 
                                            // locations [3:0]. If the bit is 
                                            // set then that port size is 
                                            // permitted. By default the RTL is 
                                            // designed to support all port 
                                            // sizes, set to 0x0000000B. This 
                                            // register is constrained by the 
                                            // input tie-off MAXPORTSIZE. The 
                                            // external tie-off, MAXPORTSIZE, 
                                            // must be set during finalization 
                                            // of the ASIC to reflect the 
                                            // actual number of TRACEDATA 
                                            // signals wired to physical pins. 
                                            // This is to ensure that tools do 
                                            // not attempt to select a port 
                                            // width that an attached TPA 
                                            // cannot capture. The value on 
                                            // MAXPORTSIZE causes bits within 
                                            // the Supported Port Size register 
                                            // that represent wider widths to 
                                            // be clear, that is, unsupported. 
#define CM3_TPIU_O_TPIU_CSPSR   0x00000004  // Current Sync Port Size 
                                            // Register. This register is 
                                            // read/write. The Current Sync 
                                            // Port Size Register has the same 
                                            // format as the Supported Sync 
                                            // Port Sizes Register but only one 
                                            // bit is set, and all others must 
                                            // be zero. Writing values with 
                                            // more than one bit set, or 
                                            // setting a bit that is not 
                                            // indicated as supported is not 
                                            // supported and causes 
                                            // Unpredictable behavior. It is 
                                            // more convenient to use the same 
                                            // format as the Supported Sync 
                                            // Port Sizes Register because it 
                                            // saves on having to decode the 
                                            // sizes later on in the device, 
                                            // and also maintains the format 
                                            // from the other register bank for 
                                            // checking for valid assignments. 
                                            // On reset this defaults to the 
                                            // smallest possible port size, 1 
                                            // bit, and so reads as 0x00000001. 
#define CM3_TPIU_O_TPIU_ACPR    0x00000010  // Async Clock Prescaler Register. 
                                            // Use the Async Clock Prescaler 
                                            // Register to scale the baud rate 
                                            // of the asynchronous output. 
#define CM3_TPIU_O_TPIU_SPPR    0x000000F0  // Selected Pin Protocol Register. 
                                            // Use the Selected Pin Protocol 
                                            // Register to select which 
                                            // protocol to use for trace 
                                            // output. Note: If this register 
                                            // is changed while trace data is 
                                            // being output, data corruption 
                                            // occurs. 
#define CM3_TPIU_O_TPIU_FFSR    0x00000300  // Formatter and Flush Status 
                                            // Register. Use the Formatter and 
                                            // Flush Status Register to read 
                                            // the status of TPIU formatter. 
#define CM3_TPIU_O_TPIU_FFCR    0x00000304  // Formatter and Flush Control 
                                            // Register. Bit [8] of this 
                                            // register is always set to 
                                            // indicate that triggers are 
                                            // indicated when TRIGGER is 
                                            // asserted. When one of the two 
                                            // single wire output modes is 
                                            // selected, bit [1] of this 
                                            // register enables the formatter 
                                            // to be bypassed. If the formatter 
                                            // is bypassed, only the ITM/DWT 
                                            // trace source (ATDATA2) passes 
                                            // through. The TPIU accepts and 
                                            // discards data that is presented 
                                            // on the ETM port (ATDATA1). This 
                                            // function is intended to be used 
                                            // when it is necessary to connect 
                                            // a device containing an ETM to a 
                                            // trace capture device that is 
                                            // only able to capture Serial Wire 
                                            // Output data. Enabling or 
                                            // disabling the formatter causes 
                                            // momentary data corruption. Note: 
                                            // If the selected pin protocol 
                                            // register is set to 0x00 
                                            // (TracePort mode), the Formatter 
                                            // and Flush Control Register 
                                            // always reads 0x102, because the 
                                            // formatter is automatically 
                                            // enabled. If one of the serial 
                                            // wire modes is then selected, the 
                                            // register reverts to its 
                                            // previously programmed value. 
#define CM3_TPIU_O_TPIU_FSCR    0x00000308  // Formatter Synchronization 
                                            // Counter Register. The global 
                                            // synchronization trigger is 
                                            // generated by the Program Counter 
                                            // (PC) Sampler block. This means 
                                            // that there is no synchronization 
                                            // counter in the TPIU. 
#define CM3_TPIU_O_TRIGGER      0x00000EE8  // Integration Register: TRIGGER. 
#define CM3_TPIU_O_FIFO_DATA_0  0x00000EEC  // Integration register: FIFO data 
                                            // 0. 
#define CM3_TPIU_O_ITATBCTR2    0x00000EF0  // Integration Register: 
                                            // ITATBCTR2. Use the Integration 
                                            // Test Registers to perform 
                                            // topology detection of the TPIU 
                                            // with other devices in a 
                                            // Cortex-M3 system. These 
                                            // registers enable direct control 
                                            // of outputs and the ability to 
                                            // read the value of inputs. 
#define CM3_TPIU_O_ITATBCTR0    0x00000EF8  // Integration Register: 
                                            // ITATBCTR0. Use the Integration 
                                            // Test Registers to perform 
                                            // topology detection of the TPIU 
                                            // with other devices in a 
                                            // Cortex-M3 system. These 
                                            // registers enable direct control 
                                            // of outputs and the ability to 
                                            // read the value of inputs. 
#define CM3_TPIU_O_FIFO_DATA_1  0x00000EFC  // Integration register: FIFO data 
                                            // 1. 
#define CM3_TPIU_O_ITCTRL       0x00000F00  // Integration Mode Control 
                                            // Register. The Integration Mode 
                                            // Control Register enables 
                                            // topology detection. 
#define CM3_TPIU_O_CLAIMSET     0x00000FA0  // Claim tag set register. This 
                                            // register forms one half of the 
                                            // Claim Tag value. This location 
                                            // enables individual bits to be 
                                            // cleared and returns the current 
                                            // Claim Tag value. Read: Current 
                                            // Claim Tag Value. Write: Each bit 
                                            // is considered separately. 0 = no 
                                            // effect. 1 = clear this bit in 
                                            // the claim tag. 
#define CM3_TPIU_O_CLAIMCLR     0x00000FA4  // Claim tag clear register. This 
                                            // register forms one half of the 
                                            // Claim Tag value. This location 
                                            // enables individual bits to be 
                                            // set and returns the number of 
                                            // bits that can be set. Read: Each 
                                            // bit is considered separately. 0 
                                            // = this claim tag bit is not 
                                            // implemented. 1 = this claim tag 
                                            // bit is implemented. Write: Each 
                                            // bit is considered separately. 0 
                                            // = no effect. 1 = set this bit in 
                                            // the claim tag. 
#define CM3_TPIU_O_DEVID        0x00000FC8  // Device ID register. This 
                                            // register returns: 0xCA1 if there 
                                            // is an ETM present. 0xCA0 if 
                                            // there is no ETM present. 
#define CM3_TPIU_O_PID4         0x00000FD0  // Peripheral identification 
                                            // register (PID4). 
#define CM3_TPIU_O_PID5         0x00000FD4  // Peripheral identification 
                                            // register (PID5). 
#define CM3_TPIU_O_PID6         0x00000FD8  // Peripheral identification 
                                            // register (PID6). 
#define CM3_TPIU_O_PID7         0x00000FDC  // Peripheral identification 
                                            // register (PID7). 
#define CM3_TPIU_O_PID0         0x00000FE0  // Peripheral identification 
                                            // register Bits 7:0 (PID0). 
#define CM3_TPIU_O_PID1         0x00000FE4  // Peripheral identification 
                                            // register Bits 15:8 (PID1). 
#define CM3_TPIU_O_PID2         0x00000FE8  // Peripheral identification 
                                            // register Bits 23:16 (PID2). 
#define CM3_TPIU_O_PID3         0x00000FEC  // Peripheral identification 
                                            // register Bits 31:24 (PID3). 
#define CM3_TPIU_O_CID0         0x00000FF0  // Component identification 
                                            // register Bits 7:0 (CID0). 
#define CM3_TPIU_O_CID1         0x00000FF4  // Component identification 
                                            // register Bits 15:8 (CID1). 
#define CM3_TPIU_O_CID2         0x00000FF8  // Component identification 
                                            // register Bits 23:16 (CID2). 
#define CM3_TPIU_O_CID3         0x00000FFC  // Component identification 
                                            // register Bits 31:24 (CID3). 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_TPIU_SSPSR register.
//
//*****************************************************************************
#define CM3_TPIU_TPIU_SSPSR_FOUR \
                                0x00000008  // 4-bit port size support 0x0: 
                                            // Not supported 0x1: Supported 

#define CM3_TPIU_TPIU_SSPSR_FOUR_M \
                                0x00000008
#define CM3_TPIU_TPIU_SSPSR_FOUR_S 3
#define CM3_TPIU_TPIU_SSPSR_THREE \
                                0x00000004  // 3-bit port size support 0x0: 
                                            // Not supported 0x1: Supported 

#define CM3_TPIU_TPIU_SSPSR_THREE_M \
                                0x00000004
#define CM3_TPIU_TPIU_SSPSR_THREE_S 2
#define CM3_TPIU_TPIU_SSPSR_TWO 0x00000002  // 2-bit port size support 0x0: 
                                            // Not supported 0x1: Supported 
#define CM3_TPIU_TPIU_SSPSR_TWO_M \
                                0x00000002
#define CM3_TPIU_TPIU_SSPSR_TWO_S 1
#define CM3_TPIU_TPIU_SSPSR_ONE 0x00000001  // 1-bit port size support 0x0: 
                                            // Not supported 0x1: Supported 
#define CM3_TPIU_TPIU_SSPSR_ONE_M \
                                0x00000001
#define CM3_TPIU_TPIU_SSPSR_ONE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_TPIU_CSPSR register.
//
//*****************************************************************************
#define CM3_TPIU_TPIU_CSPSR_FOUR \
                                0x00000008  // 4-bit port enable 

#define CM3_TPIU_TPIU_CSPSR_FOUR_M \
                                0x00000008
#define CM3_TPIU_TPIU_CSPSR_FOUR_S 3
#define CM3_TPIU_TPIU_CSPSR_THREE \
                                0x00000004  // 3-bit port enable 

#define CM3_TPIU_TPIU_CSPSR_THREE_M \
                                0x00000004
#define CM3_TPIU_TPIU_CSPSR_THREE_S 2
#define CM3_TPIU_TPIU_CSPSR_TWO 0x00000002  // 2-bit port enable 
#define CM3_TPIU_TPIU_CSPSR_TWO_M \
                                0x00000002
#define CM3_TPIU_TPIU_CSPSR_TWO_S 1
#define CM3_TPIU_TPIU_CSPSR_ONE 0x00000001  // 1-bit port enable 
#define CM3_TPIU_TPIU_CSPSR_ONE_M \
                                0x00000001
#define CM3_TPIU_TPIU_CSPSR_ONE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_TPIU_ACPR register.
//
//*****************************************************************************
#define CM3_TPIU_TPIU_ACPR_PRESCALER_M \
                                0x00001FFF  // Divisor for TRACECLKIN is 
                                            // Prescaler + 1. 

#define CM3_TPIU_TPIU_ACPR_PRESCALER_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_TPIU_SPPR register.
//
//*****************************************************************************
#define CM3_TPIU_TPIU_SPPR_PROTOCOL_M \
                                0x00000003  // Trace output protocol 0x0: 
                                            // TracePort mode 0x1: SerialWire 
                                            // Output (Manchester). This is the 
                                            // reset value. 0x2: SerialWire 
                                            // Output (NRZ) 

#define CM3_TPIU_TPIU_SPPR_PROTOCOL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_TPIU_FFSR register.
//
//*****************************************************************************
#define CM3_TPIU_TPIU_FFSR_FTNONSTOP \
                                0x00000008  // Formatter cannot be stopped 

#define CM3_TPIU_TPIU_FFSR_FTNONSTOP_M \
                                0x00000008
#define CM3_TPIU_TPIU_FFSR_FTNONSTOP_S 3
#define CM3_TPIU_TPIU_FFSR_TCPRESENT \
                                0x00000004  // This bit always reads as zero 

#define CM3_TPIU_TPIU_FFSR_TCPRESENT_M \
                                0x00000004
#define CM3_TPIU_TPIU_FFSR_TCPRESENT_S 2
#define CM3_TPIU_TPIU_FFSR_FTSTOPPED \
                                0x00000002  // This bit always reads as zero 

#define CM3_TPIU_TPIU_FFSR_FTSTOPPED_M \
                                0x00000002
#define CM3_TPIU_TPIU_FFSR_FTSTOPPED_S 1
#define CM3_TPIU_TPIU_FFSR_FLINPROG \
                                0x00000001  // This bit always reads as zero 

#define CM3_TPIU_TPIU_FFSR_FLINPROG_M \
                                0x00000001
#define CM3_TPIU_TPIU_FFSR_FLINPROG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_TPIU_FFCR register.
//
//*****************************************************************************
#define CM3_TPIU_TPIU_FFCR_STOPTRIG \
                                0x00002000  // Stop the formatter after a 
                                            // Trigger Event is observed. 

#define CM3_TPIU_TPIU_FFCR_STOPTRIG_M \
                                0x00002000
#define CM3_TPIU_TPIU_FFCR_STOPTRIG_S 13
#define CM3_TPIU_TPIU_FFCR_STOPFI \
                                0x00001000  // Stop the formatter after a 
                                            // flush completes. 

#define CM3_TPIU_TPIU_FFCR_STOPFI_M \
                                0x00001000
#define CM3_TPIU_TPIU_FFCR_STOPFI_S 12
#define CM3_TPIU_TPIU_FFCR_TRIGFI \
                                0x00000400  // Indicates a trigger on Flush 
                                            // completion. 

#define CM3_TPIU_TPIU_FFCR_TRIGFI_M \
                                0x00000400
#define CM3_TPIU_TPIU_FFCR_TRIGFI_S 10
#define CM3_TPIU_TPIU_FFCR_TRIGEVT \
                                0x00000200  // Indicate a trigger on a Trigger 
                                            // Event. 

#define CM3_TPIU_TPIU_FFCR_TRIGEVT_M \
                                0x00000200
#define CM3_TPIU_TPIU_FFCR_TRIGEVT_S 9
#define CM3_TPIU_TPIU_FFCR_TRIGIN \
                                0x00000100  // Indicate a trigger on TRIGIN 
                                            // being asserted. 

#define CM3_TPIU_TPIU_FFCR_TRIGIN_M \
                                0x00000100
#define CM3_TPIU_TPIU_FFCR_TRIGIN_S 8
#define CM3_TPIU_TPIU_FFCR_FONMAN \
                                0x00000040  // Manually generate a flush of 
                                            // the system. 

#define CM3_TPIU_TPIU_FFCR_FONMAN_M \
                                0x00000040
#define CM3_TPIU_TPIU_FFCR_FONMAN_S 6
#define CM3_TPIU_TPIU_FFCR_FONTRIG \
                                0x00000020  // Generate flush using Trigger 
                                            // event. 

#define CM3_TPIU_TPIU_FFCR_FONTRIG_M \
                                0x00000020
#define CM3_TPIU_TPIU_FFCR_FONTRIG_S 5
#define CM3_TPIU_TPIU_FFCR_FONFLLN \
                                0x00000010  // Generate flush using the 
                                            // FLUSHIN interface. 

#define CM3_TPIU_TPIU_FFCR_FONFLLN_M \
                                0x00000010
#define CM3_TPIU_TPIU_FFCR_FONFLLN_S 4
#define CM3_TPIU_TPIU_FFCR_ENFCONT \
                                0x00000002  // Continuous Formatting, no 
                                            // TRACECTL. This bit is set on 
                                            // reset. 

#define CM3_TPIU_TPIU_FFCR_ENFCONT_M \
                                0x00000002
#define CM3_TPIU_TPIU_FFCR_ENFCONT_S 1
#define CM3_TPIU_TPIU_FFCR_ENFTC \
                                0x00000001  // Enable Formatting. Because 
                                            // TRACECTL is never present, this 
                                            // bit reads as zero. 

#define CM3_TPIU_TPIU_FFCR_ENFTC_M \
                                0x00000001
#define CM3_TPIU_TPIU_FFCR_ENFTC_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_TPIU_FSCR register.
//
//*****************************************************************************
#define CM3_TPIU_TPIU_FSCR_TPIU_FSCR_M \
                                0xFFFFFFFF  // Formatter Synchronization 
                                            // Counter Register. The global 
                                            // synchronization trigger is 
                                            // generated by the Program Counter 
                                            // (PC) Sampler block. This means 
                                            // that there is no synchronization 
                                            // counter in the TPIU. 

#define CM3_TPIU_TPIU_FSCR_TPIU_FSCR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_TRIGGER register.
//
//*****************************************************************************
#define CM3_TPIU_TRIGGER_TRIGGER_INPUT_VALUE \
                                0x00000001  // Enables the TRIGGER input 

#define CM3_TPIU_TRIGGER_TRIGGER_INPUT_VALUE_M \
                                0x00000001
#define CM3_TPIU_TRIGGER_TRIGGER_INPUT_VALUE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_FIFO_DATA_0 register.
//
//*****************************************************************************
#define CM3_TPIU_FIFO_DATA_0_ATVALID2S \
                                0x20000000  

#define CM3_TPIU_FIFO_DATA_0_ATVALID2S_M \
                                0x20000000
#define CM3_TPIU_FIFO_DATA_0_ATVALID2S_S 29
#define CM3_TPIU_FIFO_DATA_0_WRITE_POINT_2_M \
                                0x18000000  

#define CM3_TPIU_FIFO_DATA_0_WRITE_POINT_2_S 27
#define CM3_TPIU_FIFO_DATA_0_ATVALID1S \
                                0x04000000  

#define CM3_TPIU_FIFO_DATA_0_ATVALID1S_M \
                                0x04000000
#define CM3_TPIU_FIFO_DATA_0_ATVALID1S_S 26
#define CM3_TPIU_FIFO_DATA_0_WRITE_POINT_1_M \
                                0x03000000  

#define CM3_TPIU_FIFO_DATA_0_WRITE_POINT_1_S 24
#define CM3_TPIU_FIFO_DATA_0_FIFO1_DATA_2_M \
                                0x00FF0000  

#define CM3_TPIU_FIFO_DATA_0_FIFO1_DATA_2_S 16
#define CM3_TPIU_FIFO_DATA_0_FIFO1_DATA_1_M \
                                0x0000FF00  

#define CM3_TPIU_FIFO_DATA_0_FIFO1_DATA_1_S 8
#define CM3_TPIU_FIFO_DATA_0_FIFO1_DATA_0_M \
                                0x000000FF  

#define CM3_TPIU_FIFO_DATA_0_FIFO1_DATA_0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_ITATBCTR2 register.
//
//*****************************************************************************
#define CM3_TPIU_ITATBCTR2_ATREADY1_ATREADY2 \
                                0x00000001  // This bit reads or sets the 
                                            // value of ATREADYS1 and 
                                            // ATREADYS2. 

#define CM3_TPIU_ITATBCTR2_ATREADY1_ATREADY2_M \
                                0x00000001
#define CM3_TPIU_ITATBCTR2_ATREADY1_ATREADY2_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_ITATBCTR0 register.
//
//*****************************************************************************
#define CM3_TPIU_ITATBCTR0_ATVALID1_ATVALID2 \
                                0x00000001  // This bit reads or sets the 
                                            // value of ATVALIDS1 OR-ed with 
                                            // ATVALIDS2. 

#define CM3_TPIU_ITATBCTR0_ATVALID1_ATVALID2_M \
                                0x00000001
#define CM3_TPIU_ITATBCTR0_ATVALID1_ATVALID2_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_FIFO_DATA_1 register.
//
//*****************************************************************************
#define CM3_TPIU_FIFO_DATA_1_ATVALID2S \
                                0x20000000  

#define CM3_TPIU_FIFO_DATA_1_ATVALID2S_M \
                                0x20000000
#define CM3_TPIU_FIFO_DATA_1_ATVALID2S_S 29
#define CM3_TPIU_FIFO_DATA_1_WRITE_POINT_2_M \
                                0x18000000  

#define CM3_TPIU_FIFO_DATA_1_WRITE_POINT_2_S 27
#define CM3_TPIU_FIFO_DATA_1_ATVALID1S \
                                0x04000000  

#define CM3_TPIU_FIFO_DATA_1_ATVALID1S_M \
                                0x04000000
#define CM3_TPIU_FIFO_DATA_1_ATVALID1S_S 26
#define CM3_TPIU_FIFO_DATA_1_WRITE_POINT_1_M \
                                0x03000000  

#define CM3_TPIU_FIFO_DATA_1_WRITE_POINT_1_S 24
#define CM3_TPIU_FIFO_DATA_1_FIFO2_DATA_2_M \
                                0x00FF0000  

#define CM3_TPIU_FIFO_DATA_1_FIFO2_DATA_2_S 16
#define CM3_TPIU_FIFO_DATA_1_FIFO2_DATA_1_M \
                                0x0000FF00  

#define CM3_TPIU_FIFO_DATA_1_FIFO2_DATA_1_S 8
#define CM3_TPIU_FIFO_DATA_1_FIFO2_DATA_0_M \
                                0x000000FF  

#define CM3_TPIU_FIFO_DATA_1_FIFO2_DATA_0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_ITCTRL register.
//
//*****************************************************************************
#define CM3_TPIU_ITCTRL_FIFO_TEST_MODE \
                                0x00000002  // Enables FIFO test mode 

#define CM3_TPIU_ITCTRL_FIFO_TEST_MODE_M \
                                0x00000002
#define CM3_TPIU_ITCTRL_FIFO_TEST_MODE_S 1
#define CM3_TPIU_ITCTRL_INTEGRATION_TEST_MODE \
                                0x00000001  // Enables integration test mode 

#define CM3_TPIU_ITCTRL_INTEGRATION_TEST_MODE_M \
                                0x00000001
#define CM3_TPIU_ITCTRL_INTEGRATION_TEST_MODE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_CLAIMSET register.
//
//*****************************************************************************
#define CM3_TPIU_CLAIMSET_CLAIMSET_M \
                                0xFFFFFFFF  // Claim tag set register. This 
                                            // register forms one half of the 
                                            // Claim Tag value. This location 
                                            // enables individual bits to be 
                                            // cleared and returns the current 
                                            // Claim Tag value. Read: Current 
                                            // Claim Tag Value. Write: Each bit 
                                            // is considered separately. 0 = no 
                                            // effect. 1 = clear this bit in 
                                            // the claim tag. 

#define CM3_TPIU_CLAIMSET_CLAIMSET_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_CLAIMCLR register.
//
//*****************************************************************************
#define CM3_TPIU_CLAIMCLR_CLAIMCLR_M \
                                0xFFFFFFFF  // Claim tag clear register. This 
                                            // register forms one half of the 
                                            // Claim Tag value. This location 
                                            // enables individual bits to be 
                                            // set and returns the number of 
                                            // bits that can be set. Read: Each 
                                            // bit is considered separately. 0 
                                            // = this claim tag bit is not 
                                            // implemented. 1 = this claim tag 
                                            // bit is implemented. Write: Each 
                                            // bit is considered separately. 0 
                                            // = no effect. 1 = set this bit in 
                                            // the claim tag. 

#define CM3_TPIU_CLAIMCLR_CLAIMCLR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_DEVID register.
//
//*****************************************************************************
#define CM3_TPIU_DEVID_DEVID_M  0xFFFFFFFF  // Device ID register. This 
                                            // register returns: 0xCA1 if there 
                                            // is an ETM present. 0xCA0 if 
                                            // there is no ETM present. 
#define CM3_TPIU_DEVID_DEVID_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_PID4 register.
//
//*****************************************************************************
#define CM3_TPIU_PID4_PID4_M    0xFFFFFFFF  // Peripheral identification 
                                            // register (PID4). 
#define CM3_TPIU_PID4_PID4_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_PID5 register.
//
//*****************************************************************************
#define CM3_TPIU_PID5_PID5_M    0xFFFFFFFF  // Peripheral identification 
                                            // register (PID5). 
#define CM3_TPIU_PID5_PID5_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_PID6 register.
//
//*****************************************************************************
#define CM3_TPIU_PID6_PID6_M    0xFFFFFFFF  // Peripheral identification 
                                            // register (PID6). 
#define CM3_TPIU_PID6_PID6_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_PID7 register.
//
//*****************************************************************************
#define CM3_TPIU_PID7_PID7_M    0xFFFFFFFF  // Peripheral identification 
                                            // register (PID7). 
#define CM3_TPIU_PID7_PID7_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_PID0 register.
//
//*****************************************************************************
#define CM3_TPIU_PID0_PID0_M    0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 7:0 (PID0). 
#define CM3_TPIU_PID0_PID0_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_PID1 register.
//
//*****************************************************************************
#define CM3_TPIU_PID1_PID1_M    0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 15:8 (PID1). 
#define CM3_TPIU_PID1_PID1_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_PID2 register.
//
//*****************************************************************************
#define CM3_TPIU_PID2_PID2_M    0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 23:16 (PID2). 
#define CM3_TPIU_PID2_PID2_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_PID3 register.
//
//*****************************************************************************
#define CM3_TPIU_PID3_PID3_M    0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 31:24 (PID3). 
#define CM3_TPIU_PID3_PID3_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_CID0 register.
//
//*****************************************************************************
#define CM3_TPIU_CID0_CID0_M    0xFFFFFFFF  // Component identification 
                                            // register Bits 7:0 (CID0). 
#define CM3_TPIU_CID0_CID0_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_CID1 register.
//
//*****************************************************************************
#define CM3_TPIU_CID1_CID1_M    0xFFFFFFFF  // Component identification 
                                            // register Bits 15:8 (CID1). 
#define CM3_TPIU_CID1_CID1_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_CID2 register.
//
//*****************************************************************************
#define CM3_TPIU_CID2_CID2_M    0xFFFFFFFF  // Component identification 
                                            // register Bits 23:16 (CID2). 
#define CM3_TPIU_CID2_CID2_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_TPIU_O_CID3 register.
//
//*****************************************************************************
#define CM3_TPIU_CID3_CID3_M    0xFFFFFFFF  // Component identification 
                                            // register Bits 31:24 (CID3). 
#define CM3_TPIU_CID3_CID3_S    0


#endif // __HW_CM3_TPIU_H__

