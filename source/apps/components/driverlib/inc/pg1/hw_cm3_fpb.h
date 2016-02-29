
/******************************************************************************
*  Filename:       hw_cm3_fpb.h
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
#ifndef __HW_CM3_FPB_H__
#define __HW_CM3_FPB_H__

//*****************************************************************************
//
// The following are defines for the CM3_FPB register offsets.
//
//*****************************************************************************
#define CM3_FPB_O_FP_CTRL       0x00000000  // Flash Patch Control Register. 
                                            // Use the Flash Patch Control 
                                            // Register to enable the flash 
                                            // patch block. 
#define CM3_FPB_O_FP_REMAP      0x00000004  // Flash Patch Remap Register. Use 
                                            // the Flash Patch Remap Register 
                                            // to provide the location in 
                                            // System space where a matched 
                                            // address is remapped. The REMAP 
                                            // address is 8-word aligned, with 
                                            // one word allocated to each of 
                                            // the eight FPB comparators. A 
                                            // comparison match remaps to: 
                                            // {3'b001, REMAP, COMP[2:0], 
                                            // HADDR[1:0]} where: 3'b001 
                                            // hardwires the remapped access to 
                                            // system space, REMAP is the 
                                            // 24-bit, 8-word aligned remap 
                                            // address, COMP is the matching 
                                            // comparator, HADDR[1:0] is the 
                                            // two Least Significant Bits 
                                            // (LSBs) of the original address. 
                                            // HADDR[1:0] is always 2'b00 for 
                                            // instruction fetches. 
#define CM3_FPB_O_FP_COMP0      0x00000008  // Flash Patch Comparator 
                                            // Registers. Use the Flash Patch 
                                            // Comparator Registers to store 
                                            // the values to compare with the 
                                            // PC address. 
#define CM3_FPB_O_FP_COMP1      0x0000000C  // Flash Patch Comparator 
                                            // Registers. Use the Flash Patch 
                                            // Comparator Registers to store 
                                            // the values to compare with the 
                                            // PC address. 
#define CM3_FPB_O_FP_COMP2      0x00000010  // Flash Patch Comparator 
                                            // Registers. Use the Flash Patch 
                                            // Comparator Registers to store 
                                            // the values to compare with the 
                                            // PC address. 
#define CM3_FPB_O_FP_COMP3      0x00000014  // Flash Patch Comparator 
                                            // Registers. Use the Flash Patch 
                                            // Comparator Registers to store 
                                            // the values to compare with the 
                                            // PC address. 
#define CM3_FPB_O_FP_COMP4      0x00000018  // Flash Patch Comparator 
                                            // Registers. Use the Flash Patch 
                                            // Comparator Registers to store 
                                            // the values to compare with the 
                                            // PC address. 
#define CM3_FPB_O_FP_COMP5      0x0000001C  // Flash Patch Comparator 
                                            // Registers. Use the Flash Patch 
                                            // Comparator Registers to store 
                                            // the values to compare with the 
                                            // PC address. 
#define CM3_FPB_O_FP_COMP6      0x00000020  // Flash Patch Comparator 
                                            // Registers. Use the Flash Patch 
                                            // Comparator Registers to store 
                                            // the values to compare with the 
                                            // PC address. 
#define CM3_FPB_O_FP_COMP7      0x00000024  // Flash Patch Comparator 
                                            // Registers. Use the Flash Patch 
                                            // Comparator Registers to store 
                                            // the values to compare with the 
                                            // PC address. 
#define CM3_FPB_O_PID4          0x00000FD0  // Peripheral identification 
                                            // register (PID4). 
#define CM3_FPB_O_PID5          0x00000FD4  // Peripheral identification 
                                            // register (PID5). 
#define CM3_FPB_O_PID6          0x00000FD8  // Peripheral identification 
                                            // register (PID6). 
#define CM3_FPB_O_PID7          0x00000FDC  // Peripheral identification 
                                            // register (PID7). 
#define CM3_FPB_O_PID0          0x00000FE0  // Peripheral identification 
                                            // register Bits 7:0 (PID0). 
#define CM3_FPB_O_PID1          0x00000FE4  // Peripheral identification 
                                            // register Bits 15:8 (PID1). 
#define CM3_FPB_O_PID2          0x00000FE8  // Peripheral identification 
                                            // register Bits 23:16 (PID2). 
#define CM3_FPB_O_PID3          0x00000FEC  // Peripheral identification 
                                            // register Bits 31:24 (PID3). 
#define CM3_FPB_O_CID0          0x00000FF0  // Component identification 
                                            // register Bits 7:0 (CID0). 
#define CM3_FPB_O_CID1          0x00000FF4  // Component identification 
                                            // register Bits 15:8 (CID1). 
#define CM3_FPB_O_CID2          0x00000FF8  // Component identification 
                                            // register Bits 23:16 (CID2). 
#define CM3_FPB_O_CID3          0x00000FFC  // Component identification 
                                            // register Bits 31:24 (CID3). 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_FPB_O_FP_CTRL register.
//
//*****************************************************************************
#define CM3_FPB_FP_CTRL_NUM_CODE2_M \
                                0x00003000  // Number of full banks of code 
                                            // comparators, sixteen comparators 
                                            // per bank. Where less than 
                                            // sixteen code comparators are 
                                            // provided, the bank count is 
                                            // zero, and the number present 
                                            // indicated by NUM_CODE. This read 
                                            // only field contains 3'b000 to 
                                            // indicate 0 banks for Cortex-M3 
                                            // processor. 

#define CM3_FPB_FP_CTRL_NUM_CODE2_S 12
#define CM3_FPB_FP_CTRL_NUM_LIT_M \
                                0x00000F00  // Number of literal slots field. 
                                            // 0x0: No literal slots 0x2: Two 
                                            // literal slots 

#define CM3_FPB_FP_CTRL_NUM_LIT_S 8
#define CM3_FPB_FP_CTRL_NUM_CODE1_M \
                                0x000000F0  // Number of code slots field. 
                                            // 0x0: No code slots 0x2: Two code 
                                            // slots 0x6: Six code slots 

#define CM3_FPB_FP_CTRL_NUM_CODE1_S 4
#define CM3_FPB_FP_CTRL_KEY     0x00000002  // Key field. To write to the 
                                            // Flash Patch Control Register, 
                                            // you must write a 1 to this 
                                            // write-only bit. This bit always 
                                            // reads '0'. 
#define CM3_FPB_FP_CTRL_KEY_M   0x00000002
#define CM3_FPB_FP_CTRL_KEY_S   1
#define CM3_FPB_FP_CTRL_ENABLE  0x00000001  // Flash patch unit enable bit 
                                            // 0x0: Flash patch unit disabled 
                                            // 0x1: Flash patch unit enabled 
#define CM3_FPB_FP_CTRL_ENABLE_M \
                                0x00000001
#define CM3_FPB_FP_CTRL_ENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_FPB_O_FP_REMAP register.
//
//*****************************************************************************
#define CM3_FPB_FP_REMAP_REMAP_M \
                                0x1FFFFFE0  // Remap base address field. 

#define CM3_FPB_FP_REMAP_REMAP_S 5
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_FPB_O_FP_COMP0 register.
//
//*****************************************************************************
#define CM3_FPB_FP_COMP0_REPLACE_M \
                                0xC0000000  // This selects what happens when 
                                            // the COMP address is matched. 
                                            // Settings other than b00 are only 
                                            // valid for instruction 
                                            // comparators. Literal comparators 
                                            // ignore non-b00 settings. Address 
                                            // remapping only takes place for 
                                            // the b00 setting. 0x0: Remap to 
                                            // remap address. See FP_REMAP 0x1: 
                                            // Set BKPT on lower halfword, 
                                            // upper is unaffected 0x2: Set 
                                            // BKPT on upper halfword, lower is 
                                            // unaffected 0x3: Set BKPT on both 
                                            // lower and upper halfwords. 

#define CM3_FPB_FP_COMP0_REPLACE_S 30
#define CM3_FPB_FP_COMP0_COMP_M 0x1FFFFFFC  // Comparison address. 
#define CM3_FPB_FP_COMP0_COMP_S 2
#define CM3_FPB_FP_COMP0_ENABLE 0x00000001  // Compare and remap enable for 
                                            // Flash Patch Comparator Register 
                                            // 0. The ENABLE bit of FP_CTRL 
                                            // must also be set to enable 
                                            // comparisons. Reset clears the 
                                            // ENABLE bit. 0x0: Flash Patch 
                                            // Comparator Register 0 compare 
                                            // and remap disabled 0x1: Flash 
                                            // Patch Comparator Register 0 
                                            // compare and remap enabled 
#define CM3_FPB_FP_COMP0_ENABLE_M \
                                0x00000001
#define CM3_FPB_FP_COMP0_ENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_FPB_O_FP_COMP1 register.
//
//*****************************************************************************
#define CM3_FPB_FP_COMP1_REPLACE_M \
                                0xC0000000  // This selects what happens when 
                                            // the COMP address is matched. 
                                            // Settings other than b00 are only 
                                            // valid for instruction 
                                            // comparators. Literal comparators 
                                            // ignore non-b00 settings. Address 
                                            // remapping only takes place for 
                                            // the b00 setting. 0x0: Remap to 
                                            // remap address. See FP_REMAP 0x1: 
                                            // Set BKPT on lower halfword, 
                                            // upper is unaffected 0x2: Set 
                                            // BKPT on upper halfword, lower is 
                                            // unaffected 0x3: Set BKPT on both 
                                            // lower and upper halfwords. 

#define CM3_FPB_FP_COMP1_REPLACE_S 30
#define CM3_FPB_FP_COMP1_COMP_M 0x1FFFFFFC  // Comparison address. 
#define CM3_FPB_FP_COMP1_COMP_S 2
#define CM3_FPB_FP_COMP1_ENABLE 0x00000001  // Compare and remap enable for 
                                            // Flash Patch Comparator Register 
                                            // 1. The ENABLE bit of FP_CTRL 
                                            // must also be set to enable 
                                            // comparisons. Reset clears the 
                                            // ENABLE bit. 0x0: Flash Patch 
                                            // Comparator Register 1 compare 
                                            // and remap disabled 0x1: Flash 
                                            // Patch Comparator Register 1 
                                            // compare and remap enabled 
#define CM3_FPB_FP_COMP1_ENABLE_M \
                                0x00000001
#define CM3_FPB_FP_COMP1_ENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_FPB_O_FP_COMP2 register.
//
//*****************************************************************************
#define CM3_FPB_FP_COMP2_REPLACE_M \
                                0xC0000000  // This selects what happens when 
                                            // the COMP address is matched. 
                                            // Settings other than b00 are only 
                                            // valid for instruction 
                                            // comparators. Literal comparators 
                                            // ignore non-b00 settings. Address 
                                            // remapping only takes place for 
                                            // the b00 setting. 0x0: Remap to 
                                            // remap address. See FP_REMAP 0x1: 
                                            // Set BKPT on lower halfword, 
                                            // upper is unaffected 0x2: Set 
                                            // BKPT on upper halfword, lower is 
                                            // unaffected 0x3: Set BKPT on both 
                                            // lower and upper halfwords. 

#define CM3_FPB_FP_COMP2_REPLACE_S 30
#define CM3_FPB_FP_COMP2_COMP_M 0x1FFFFFFC  // Comparison address. 
#define CM3_FPB_FP_COMP2_COMP_S 2
#define CM3_FPB_FP_COMP2_ENABLE 0x00000001  // Compare and remap enable for 
                                            // Flash Patch Comparator Register 
                                            // 2. The ENABLE bit of FP_CTRL 
                                            // must also be set to enable 
                                            // comparisons. Reset clears the 
                                            // ENABLE bit. 0x0: Flash Patch 
                                            // Comparator Register 2 compare 
                                            // and remap disabled 0x1: Flash 
                                            // Patch Comparator Register 2 
                                            // compare and remap enabled 
#define CM3_FPB_FP_COMP2_ENABLE_M \
                                0x00000001
#define CM3_FPB_FP_COMP2_ENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_FPB_O_FP_COMP3 register.
//
//*****************************************************************************
#define CM3_FPB_FP_COMP3_REPLACE_M \
                                0xC0000000  // This selects what happens when 
                                            // the COMP address is matched. 
                                            // Settings other than b00 are only 
                                            // valid for instruction 
                                            // comparators. Literal comparators 
                                            // ignore non-b00 settings. Address 
                                            // remapping only takes place for 
                                            // the b00 setting. 0x0: Remap to 
                                            // remap address. See FP_REMAP 0x1: 
                                            // Set BKPT on lower halfword, 
                                            // upper is unaffected 0x2: Set 
                                            // BKPT on upper halfword, lower is 
                                            // unaffected 0x3: Set BKPT on both 
                                            // lower and upper halfwords. 

#define CM3_FPB_FP_COMP3_REPLACE_S 30
#define CM3_FPB_FP_COMP3_COMP_M 0x1FFFFFFC  // Comparison address. 
#define CM3_FPB_FP_COMP3_COMP_S 2
#define CM3_FPB_FP_COMP3_ENABLE 0x00000001  // Compare and remap enable for 
                                            // Flash Patch Comparator Register 
                                            // 3. The ENABLE bit of FP_CTRL 
                                            // must also be set to enable 
                                            // comparisons. Reset clears the 
                                            // ENABLE bit. 0x0: Flash Patch 
                                            // Comparator Register 3 compare 
                                            // and remap disabled 0x1: Flash 
                                            // Patch Comparator Register 3 
                                            // compare and remap enabled 
#define CM3_FPB_FP_COMP3_ENABLE_M \
                                0x00000001
#define CM3_FPB_FP_COMP3_ENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_FPB_O_FP_COMP4 register.
//
//*****************************************************************************
#define CM3_FPB_FP_COMP4_REPLACE_M \
                                0xC0000000  // This selects what happens when 
                                            // the COMP address is matched. 
                                            // Settings other than b00 are only 
                                            // valid for instruction 
                                            // comparators. Literal comparators 
                                            // ignore non-b00 settings. Address 
                                            // remapping only takes place for 
                                            // the b00 setting. 0x0: Remap to 
                                            // remap address. See FP_REMAP 0x1: 
                                            // Set BKPT on lower halfword, 
                                            // upper is unaffected 0x2: Set 
                                            // BKPT on upper halfword, lower is 
                                            // unaffected 0x3: Set BKPT on both 
                                            // lower and upper halfwords. 

#define CM3_FPB_FP_COMP4_REPLACE_S 30
#define CM3_FPB_FP_COMP4_COMP_M 0x1FFFFFFC  // Comparison address. 
#define CM3_FPB_FP_COMP4_COMP_S 2
#define CM3_FPB_FP_COMP4_ENABLE 0x00000001  // Compare and remap enable for 
                                            // Flash Patch Comparator Register 
                                            // 4. The ENABLE bit of FP_CTRL 
                                            // must also be set to enable 
                                            // comparisons. Reset clears the 
                                            // ENABLE bit. 0x0: Flash Patch 
                                            // Comparator Register 4 compare 
                                            // and remap disabled 0x1: Flash 
                                            // Patch Comparator Register 4 
                                            // compare and remap enabled 
#define CM3_FPB_FP_COMP4_ENABLE_M \
                                0x00000001
#define CM3_FPB_FP_COMP4_ENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_FPB_O_FP_COMP5 register.
//
//*****************************************************************************
#define CM3_FPB_FP_COMP5_REPLACE_M \
                                0xC0000000  // This selects what happens when 
                                            // the COMP address is matched. 
                                            // Settings other than b00 are only 
                                            // valid for instruction 
                                            // comparators. Literal comparators 
                                            // ignore non-b00 settings. Address 
                                            // remapping only takes place for 
                                            // the b00 setting. 0x0: Remap to 
                                            // remap address. See FP_REMAP 0x1: 
                                            // Set BKPT on lower halfword, 
                                            // upper is unaffected 0x2: Set 
                                            // BKPT on upper halfword, lower is 
                                            // unaffected 0x3: Set BKPT on both 
                                            // lower and upper halfwords. 

#define CM3_FPB_FP_COMP5_REPLACE_S 30
#define CM3_FPB_FP_COMP5_COMP_M 0x1FFFFFFC  // Comparison address. 
#define CM3_FPB_FP_COMP5_COMP_S 2
#define CM3_FPB_FP_COMP5_ENABLE 0x00000001  // Compare and remap enable for 
                                            // Flash Patch Comparator Register 
                                            // 5. The ENABLE bit of FP_CTRL 
                                            // must also be set to enable 
                                            // comparisons. Reset clears the 
                                            // ENABLE bit. 0x0: Flash Patch 
                                            // Comparator Register 5 compare 
                                            // and remap disabled 0x1: Flash 
                                            // Patch Comparator Register 5 
                                            // compare and remap enabled 
#define CM3_FPB_FP_COMP5_ENABLE_M \
                                0x00000001
#define CM3_FPB_FP_COMP5_ENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_FPB_O_FP_COMP6 register.
//
//*****************************************************************************
#define CM3_FPB_FP_COMP6_REPLACE_M \
                                0xC0000000  // This selects what happens when 
                                            // the COMP address is matched. 
                                            // Settings other than b00 are only 
                                            // valid for instruction 
                                            // comparators. Literal comparators 
                                            // ignore non-b00 settings. Address 
                                            // remapping only takes place for 
                                            // the b00 setting. 0x0: Remap to 
                                            // remap address. See FP_REMAP 0x1: 
                                            // Set BKPT on lower halfword, 
                                            // upper is unaffected 0x2: Set 
                                            // BKPT on upper halfword, lower is 
                                            // unaffected 0x3: Set BKPT on both 
                                            // lower and upper halfwords. 

#define CM3_FPB_FP_COMP6_REPLACE_S 30
#define CM3_FPB_FP_COMP6_COMP_M 0x1FFFFFFC  // Comparison address. 
#define CM3_FPB_FP_COMP6_COMP_S 2
#define CM3_FPB_FP_COMP6_ENABLE 0x00000001  // Compare and remap enable for 
                                            // Flash Patch Comparator Register 
                                            // 6. The ENABLE bit of FP_CTRL 
                                            // must also be set to enable 
                                            // comparisons. Reset clears the 
                                            // ENABLE bit. 0x0: Flash Patch 
                                            // Comparator Register 6 compare 
                                            // and remap disabled 0x1: Flash 
                                            // Patch Comparator Register 6 
                                            // compare and remap enabled 
#define CM3_FPB_FP_COMP6_ENABLE_M \
                                0x00000001
#define CM3_FPB_FP_COMP6_ENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_FPB_O_FP_COMP7 register.
//
//*****************************************************************************
#define CM3_FPB_FP_COMP7_REPLACE_M \
                                0xC0000000  // This selects what happens when 
                                            // the COMP address is matched. 
                                            // Settings other than b00 are only 
                                            // valid for instruction 
                                            // comparators. Literal comparators 
                                            // ignore non-b00 settings. Address 
                                            // remapping only takes place for 
                                            // the b00 setting. 0x0: Remap to 
                                            // remap address. See FP_REMAP 0x1: 
                                            // Set BKPT on lower halfword, 
                                            // upper is unaffected 0x2: Set 
                                            // BKPT on upper halfword, lower is 
                                            // unaffected 0x3: Set BKPT on both 
                                            // lower and upper halfwords. 

#define CM3_FPB_FP_COMP7_REPLACE_S 30
#define CM3_FPB_FP_COMP7_COMP_M 0x1FFFFFFC  // Comparison address. 
#define CM3_FPB_FP_COMP7_COMP_S 2
#define CM3_FPB_FP_COMP7_ENABLE 0x00000001  // Compare and remap enable for 
                                            // Flash Patch Comparator Register 
                                            // 7. The ENABLE bit of FP_CTRL 
                                            // must also be set to enable 
                                            // comparisons. Reset clears the 
                                            // ENABLE bit. 0x0: Flash Patch 
                                            // Comparator Register 7 compare 
                                            // and remap disabled 0x1: Flash 
                                            // Patch Comparator Register 7 
                                            // compare and remap enabled 
#define CM3_FPB_FP_COMP7_ENABLE_M \
                                0x00000001
#define CM3_FPB_FP_COMP7_ENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_FPB_O_PID4 register.
//
//*****************************************************************************
#define CM3_FPB_PID4_PID4_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID4). 
#define CM3_FPB_PID4_PID4_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_FPB_O_PID5 register.
//
//*****************************************************************************
#define CM3_FPB_PID5_PID5_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID5). 
#define CM3_FPB_PID5_PID5_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_FPB_O_PID6 register.
//
//*****************************************************************************
#define CM3_FPB_PID6_PID6_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID6). 
#define CM3_FPB_PID6_PID6_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_FPB_O_PID7 register.
//
//*****************************************************************************
#define CM3_FPB_PID7_PID7_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID7). 
#define CM3_FPB_PID7_PID7_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_FPB_O_PID0 register.
//
//*****************************************************************************
#define CM3_FPB_PID0_PID0_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 7:0 (PID0). 
#define CM3_FPB_PID0_PID0_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_FPB_O_PID1 register.
//
//*****************************************************************************
#define CM3_FPB_PID1_PID1_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 15:8 (PID1). 
#define CM3_FPB_PID1_PID1_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_FPB_O_PID2 register.
//
//*****************************************************************************
#define CM3_FPB_PID2_PID2_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 23:16 (PID2). 
#define CM3_FPB_PID2_PID2_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_FPB_O_PID3 register.
//
//*****************************************************************************
#define CM3_FPB_PID3_PID3_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 31:24 (PID3). 
#define CM3_FPB_PID3_PID3_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_FPB_O_CID0 register.
//
//*****************************************************************************
#define CM3_FPB_CID0_CID0_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 7:0 (CID0). 
#define CM3_FPB_CID0_CID0_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_FPB_O_CID1 register.
//
//*****************************************************************************
#define CM3_FPB_CID1_CID1_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 15:8 (CID1). 
#define CM3_FPB_CID1_CID1_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_FPB_O_CID2 register.
//
//*****************************************************************************
#define CM3_FPB_CID2_CID2_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 23:16 (CID2). 
#define CM3_FPB_CID2_CID2_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_FPB_O_CID3 register.
//
//*****************************************************************************
#define CM3_FPB_CID3_CID3_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 31:24 (CID3). 
#define CM3_FPB_CID3_CID3_S     0


#endif // __HW_CM3_FPB_H__

