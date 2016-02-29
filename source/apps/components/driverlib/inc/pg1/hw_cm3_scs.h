
/******************************************************************************
*  Filename:       hw_cm3_scs.h
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
#ifndef __HW_CM3_SCS_H__
#define __HW_CM3_SCS_H__

//*****************************************************************************
//
// The following are defines for the CM3_SCS register offsets.
//
//*****************************************************************************
#define CM3_SCS_O_ICTR          0x00000004  // Interrupt Control Type 
                                            // Register. Read the Interrupt 
                                            // Controller Type Register to see 
                                            // the number of interrupt lines 
                                            // that the NVIC supports. 
#define CM3_SCS_O_ACTLR         0x00000008  // Auxiliary Control Register. Use 
                                            // the Auxiliary Control Register 
                                            // to disable certain aspects of 
                                            // functionality within the 
                                            // processor 
#define CM3_SCS_O_STCSR         0x00000010  // SysTick Control and Status 
                                            // Register. Use the SysTick 
                                            // Control and Status Register to 
                                            // enable the SysTick features. 
#define CM3_SCS_O_STRVR         0x00000014  // SysTick Reload Value Register. 
                                            // Use the SysTick Reload Value 
                                            // Register to specify the start 
                                            // value to load into the current 
                                            // value register when the counter 
                                            // reaches 0. It can be any value 
                                            // between 1 and 0x00FFFFFF. A 
                                            // start value of 0 is possible, 
                                            // but has no effect because the 
                                            // SysTick interrupt and COUNTFLAG 
                                            // are activated when counting from 
                                            // 1 to 0. 
#define CM3_SCS_O_STCVR         0x00000018  // SysTick Current Value Register. 
                                            // Use the SysTick Current Value 
                                            // Register to find the current 
                                            // value in the register. 
#define CM3_SCS_O_STCR          0x0000001C  // SysTick Calibration Value 
                                            // Register. Use the SysTick 
                                            // Calibration Value Register to 
                                            // enable software to scale to any 
                                            // required speed using divide and 
                                            // multiply. 
#define CM3_SCS_O_NVIC_ISER0    0x00000100  // Irq 0 to 31 Set Enable 
                                            // Register. Use the Interrupt 
                                            // Set-Enable Registers to enable 
                                            // interrupts and determine which 
                                            // interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ISER1    0x00000104  // Irq 32 to 63 Set Enable 
                                            // Register. Use the Interrupt 
                                            // Set-Enable Registers to enable 
                                            // interrupts and determine which 
                                            // interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ISER2    0x00000108  // Irq 64 to 95 Set Enable 
                                            // Register. Use the Interrupt 
                                            // Set-Enable Registers to enable 
                                            // interrupts and determine which 
                                            // interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ISER3    0x0000010C  // Irq 96 to 127 Set Enable 
                                            // Register. Use the Interrupt 
                                            // Set-Enable Registers to enable 
                                            // interrupts and determine which 
                                            // interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ISER4    0x00000110  // Irq 128 to 159 Set Enable 
                                            // Register. Use the Interrupt 
                                            // Set-Enable Registers to enable 
                                            // interrupts and determine which 
                                            // interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ISER5    0x00000114  // Irq 160 to 191 Set Enable 
                                            // Register. Use the Interrupt 
                                            // Set-Enable Registers to enable 
                                            // interrupts and determine which 
                                            // interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ISER6    0x00000118  // Irq 192 to 223 Set Enable 
                                            // Register. Use the Interrupt 
                                            // Set-Enable Registers to enable 
                                            // interrupts and determine which 
                                            // interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ISER7    0x0000011C  // Irq 224 to 239 Set Enable 
                                            // Register. Use the Interrupt 
                                            // Set-Enable Registers to enable 
                                            // interrupts and determine which 
                                            // interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ICER0    0x00000180  // Irq 0 to 31 Clear Enable 
                                            // Register. Use the Interrupt 
                                            // Clear-Enable Registers to 
                                            // disable interrupts and determine 
                                            // which interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ICER1    0x00000184  // Irq 32 to 63 Clear Enable 
                                            // Register. Use the Interrupt 
                                            // Clear-Enable Registers to 
                                            // disable interrupts and determine 
                                            // which interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ICER2    0x00000188  // Irq 64 to 95 Clear Enable 
                                            // Register. Use the Interrupt 
                                            // Clear-Enable Registers to 
                                            // disable interrupts and determine 
                                            // which interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ICER3    0x0000018C  // Irq 96 to 127 Clear Enable 
                                            // Register. Use the Interrupt 
                                            // Clear-Enable Registers to 
                                            // disable interrupts and determine 
                                            // which interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ICER4    0x00000190  // Irq 128 to 159 Clear Enable 
                                            // Register. Use the Interrupt 
                                            // Clear-Enable Registers to 
                                            // disable interrupts and determine 
                                            // which interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ICER5    0x00000194  // Irq 160 to 191 Clear Enable 
                                            // Register. Use the Interrupt 
                                            // Clear-Enable Registers to 
                                            // disable interrupts and determine 
                                            // which interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ICER6    0x00000198  // Irq 192 to 223 Clear Enable 
                                            // Register. Use the Interrupt 
                                            // Clear-Enable Registers to 
                                            // disable interrupts and determine 
                                            // which interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ICER7    0x0000019C  // Irq 224 to 239 Clear Enable 
                                            // Register. Use the Interrupt 
                                            // Clear-Enable Registers to 
                                            // disable interrupts and determine 
                                            // which interrupts are currently 
                                            // enabled. 
#define CM3_SCS_O_NVIC_ISPR0    0x00000200  // Irq 0 to 31 Set Pending 
                                            // Register. Use the Interrupt 
                                            // Set-Pending Registers to force 
                                            // interrupts into the pending 
                                            // state and determine which 
                                            // interrupts are currently pending 
#define CM3_SCS_O_NVIC_ISPR1    0x00000204  // Irq 32 to 63 Set Pending 
                                            // Register. Use the Interrupt 
                                            // Set-Pending Registers to force 
                                            // interrupts into the pending 
                                            // state and determine which 
                                            // interrupts are currently pending 
#define CM3_SCS_O_NVIC_ISPR2    0x00000208  // Irq 64 to 95 Set Pending 
                                            // Register. Use the Interrupt 
                                            // Set-Pending Registers to force 
                                            // interrupts into the pending 
                                            // state and determine which 
                                            // interrupts are currently pending 
#define CM3_SCS_O_NVIC_ISPR3    0x0000020C  // Irq 96 to 127 Set Pending 
                                            // Register. Use the Interrupt 
                                            // Set-Pending Registers to force 
                                            // interrupts into the pending 
                                            // state and determine which 
                                            // interrupts are currently pending 
#define CM3_SCS_O_NVIC_ISPR4    0x00000210  // Irq 128 to 159 Set Pending 
                                            // Register. Use the Interrupt 
                                            // Set-Pending Registers to force 
                                            // interrupts into the pending 
                                            // state and determine which 
                                            // interrupts are currently pending 
#define CM3_SCS_O_NVIC_ISPR5    0x00000214  // Irq 160 to 191 Set Pending 
                                            // Register. Use the Interrupt 
                                            // Set-Pending Registers to force 
                                            // interrupts into the pending 
                                            // state and determine which 
                                            // interrupts are currently pending 
#define CM3_SCS_O_NVIC_ISPR6    0x00000218  // Irq 192 to 223 Set Pending 
                                            // Register. Use the Interrupt 
                                            // Set-Pending Registers to force 
                                            // interrupts into the pending 
                                            // state and determine which 
                                            // interrupts are currently pending 
#define CM3_SCS_O_NVIC_ISPR7    0x0000021C  // Irq 224 to 239 Set Pending 
                                            // Register. Use the Interrupt 
                                            // Set-Pending Registers to force 
                                            // interrupts into the pending 
                                            // state and determine which 
                                            // interrupts are currently pending 
#define CM3_SCS_O_NVIC_ICPR0    0x00000280  // Irq 0 to 31 Clear Pending 
                                            // Register. Use the Interrupt 
                                            // Clear-Pending Registers to clear 
                                            // pending interrupts and determine 
                                            // which interrupts are currently 
                                            // pending. 
#define CM3_SCS_O_NVIC_ICPR1    0x00000284  // Irq 32 to 63 Clear Pending 
                                            // Register. Use the Interrupt 
                                            // Clear-Pending Registers to clear 
                                            // pending interrupts and determine 
                                            // which interrupts are currently 
                                            // pending. 
#define CM3_SCS_O_NVIC_ICPR2    0x00000288  // Irq 64 to 95 Clear Pending 
                                            // Register. Use the Interrupt 
                                            // Clear-Pending Registers to clear 
                                            // pending interrupts and determine 
                                            // which interrupts are currently 
                                            // pending. 
#define CM3_SCS_O_NVIC_ICPR3    0x0000028C  // Irq 96 to 127 Clear Pending 
                                            // Register. Use the Interrupt 
                                            // Clear-Pending Registers to clear 
                                            // pending interrupts and determine 
                                            // which interrupts are currently 
                                            // pending. 
#define CM3_SCS_O_NVIC_ICPR4    0x00000290  // Irq 128 to 159 Clear Pending 
                                            // Register. Use the Interrupt 
                                            // Clear-Pending Registers to clear 
                                            // pending interrupts and determine 
                                            // which interrupts are currently 
                                            // pending. 
#define CM3_SCS_O_NVIC_ICPR5    0x00000294  // Irq 160 to 191 Clear Pending 
                                            // Register. Use the Interrupt 
                                            // Clear-Pending Registers to clear 
                                            // pending interrupts and determine 
                                            // which interrupts are currently 
                                            // pending. 
#define CM3_SCS_O_NVIC_ICPR6    0x00000298  // Irq 192 to 223 Clear Pending 
                                            // Register. Use the Interrupt 
                                            // Clear-Pending Registers to clear 
                                            // pending interrupts and determine 
                                            // which interrupts are currently 
                                            // pending. 
#define CM3_SCS_O_NVIC_ICPR7    0x0000029C  // Irq 224 to 239 Clear Pending 
                                            // Register. Use the Interrupt 
                                            // Clear-Pending Registers to clear 
                                            // pending interrupts and determine 
                                            // which interrupts are currently 
                                            // pending. 
#define CM3_SCS_O_NVIC_IABR0    0x00000300  // Irq 0 to 31 Active Bit 
                                            // Register. Read the Active Bit 
                                            // Registers to determine which 
                                            // interrupts are active. Each flag 
                                            // in the register corresponds to 
                                            // one interrupt. 
#define CM3_SCS_O_NVIC_IABR1    0x00000304  // Irq 32 to 63 Active Bit 
                                            // Register. Read the Active Bit 
                                            // Registers to determine which 
                                            // interrupts are active. Each flag 
                                            // in the register corresponds to 
                                            // one interrupt. 
#define CM3_SCS_O_NVIC_IABR2    0x00000308  // Irq 64 to 95 Active Bit 
                                            // Register. Read the Active Bit 
                                            // Registers to determine which 
                                            // interrupts are active. Each flag 
                                            // in the register corresponds to 
                                            // one interrupt. 
#define CM3_SCS_O_NVIC_IABR3    0x0000030C  // Irq 96 to 127 Active Bit 
                                            // Register. Read the Active Bit 
                                            // Registers to determine which 
                                            // interrupts are active. Each flag 
                                            // in the register corresponds to 
                                            // one interrupt. 
#define CM3_SCS_O_NVIC_IABR4    0x00000310  // Irq 128 to 159 Active Bit 
                                            // Register. Read the Active Bit 
                                            // Registers to determine which 
                                            // interrupts are active. Each flag 
                                            // in the register corresponds to 
                                            // one interrupt. 
#define CM3_SCS_O_NVIC_IABR5    0x00000314  // Irq 160 to 191 Active Bit 
                                            // Register. Read the Active Bit 
                                            // Registers to determine which 
                                            // interrupts are active. Each flag 
                                            // in the register corresponds to 
                                            // one interrupt. 
#define CM3_SCS_O_NVIC_IABR6    0x00000318  // Irq 192 to 223 Active Bit 
                                            // Register. Read the Active Bit 
                                            // Registers to determine which 
                                            // interrupts are active. Each flag 
                                            // in the register corresponds to 
                                            // one interrupt. 
#define CM3_SCS_O_NVIC_IABR7    0x0000031C  // Irq 224 to 239 Active Bit 
                                            // Register. Read the Active Bit 
                                            // Registers to determine which 
                                            // interrupts are active. Each flag 
                                            // in the register corresponds to 
                                            // one interrupt. 
#define CM3_SCS_O_NVIC_IPR0     0x00000400  // Irq 0 to 3 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR1     0x00000404  // Irq 4 to 7 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR2     0x00000408  // Irq 8 to 11 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR3     0x0000040C  // Irq 12 to 15 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR4     0x00000410  // Irq 16 to 19 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR5     0x00000414  // Irq 20 to 23 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR6     0x00000418  // Irq 24 to 27 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR7     0x0000041C  // Irq 28 to 31 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR8     0x00000420  // Irq 32 to 35 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR9     0x00000424  // Irq 36 to 39 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR10    0x00000428  // Irq 40 to 43 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR11    0x0000042C  // Irq 44 to 47 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR12    0x00000430  // Irq 48 to 51 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR13    0x00000434  // Irq 52 to 55 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR14    0x00000438  // Irq 56 to 59 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR15    0x0000043C  // Irq 60 to 63 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR16    0x00000440  // Irq 64 to 67 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR17    0x00000444  // Irq 68 to 71 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR18    0x00000448  // Irq 72 to 75 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR19    0x0000044C  // Irq 76 to 79 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR20    0x00000450  // Irq 80 to 83 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR21    0x00000454  // Irq 84 to 87 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR22    0x00000458  // Irq 88 to 91 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR23    0x0000045C  // Irq 92 to 95 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR24    0x00000460  // Irq 96 to 99 Priority Register. 
                                            // Use the Interrupt Priority 
                                            // Registers to assign a priority 
                                            // from 0 to 255 to each of the 
                                            // available interrupts. 0 is the 
                                            // highest priority, and 255 is the 
                                            // lowest. 
#define CM3_SCS_O_NVIC_IPR25    0x00000464  // Irq 100 to 103 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR26    0x00000468  // Irq 104 to 107 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR27    0x0000046C  // Irq 108 to 111 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR28    0x00000470  // Irq 112 to 115 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR29    0x00000474  // Irq 116 to 119 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR30    0x00000478  // Irq 120 to 123 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR31    0x0000047C  // Irq 124 to 127 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR32    0x00000480  // Irq 128 to 131 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR33    0x00000484  // Irq 132 to 135 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR34    0x00000488  // Irq 136 to 139 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR35    0x0000048C  // Irq 140 to 143 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR36    0x00000490  // Irq 144 to 147 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR37    0x00000494  // Irq 148 to 151 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR38    0x00000498  // Irq 152 to 155 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR39    0x0000049C  // Irq 156 to 159 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR40    0x000004A0  // Irq 160 to 163 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR41    0x000004A4  // Irq 164 to 167 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR42    0x000004A8  // Irq 168 to 171 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR43    0x000004AC  // Irq 172 to 175 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR44    0x000004B0  // Irq 176 to 179 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR45    0x000004B4  // Irq 180 to 183 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR46    0x000004B8  // Irq 184 to 187 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR47    0x000004BC  // Irq 188 to 191 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR48    0x000004C0  // Irq 192 to 195 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR49    0x000004C4  // Irq 196 to 199 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR50    0x000004C8  // Irq 200 to 203 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR51    0x000004CC  // Irq 204 to 207 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR52    0x000004D0  // Irq 208 to 211 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR53    0x000004D4  // Irq 212 to 215 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR54    0x000004D8  // Irq 216 to 219 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR55    0x000004DC  // Irq 220 to 223 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR56    0x000004E0  // Irq 224 to 227 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR57    0x000004E4  // Irq 228 to 231 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR58    0x000004E8  // Irq 232 to 235 Priority 
                                            // Register. Use the Interrupt 
                                            // Prioity Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_NVIC_IPR59    0x000004EC  // Irq 236 to 239 Priority 
                                            // Register. Use the Interrupt 
                                            // Priority Registers to assign a 
                                            // priority from 0 to 255 to each 
                                            // of the available interrupts. 0 
                                            // is the highest priority, and 255 
                                            // is the lowest. 
#define CM3_SCS_O_CPUID         0x00000D00  // CPUID Base Register. Read the 
                                            // CPU ID Base Register to 
                                            // determine: the ID number of the 
                                            // processor core, the version 
                                            // number of the processor core, 
                                            // the implementation details of 
                                            // the processor core. 
#define CM3_SCS_O_ICSR          0x00000D04  // Interrupt Control State 
                                            // Register. Use the Interrupt 
                                            // Control State Register to set a 
                                            // pending Non-Maskable Interrupt 
                                            // (NMI), set or clear a pending 
                                            // SVC, set or clear a pending 
                                            // SysTick, check for pending 
                                            // exceptions, check the vector 
                                            // number of the highest priority 
                                            // pended exception, check the 
                                            // vector number of the active 
                                            // exception. 
#define CM3_SCS_O_VTOR          0x00000D08  // Vector Table Offset Register. 
                                            // Use the Vector Table Offset 
                                            // Register to determine: if the 
                                            // vector table is in RAM or code 
                                            // memory, the vector table offset. 
#define CM3_SCS_O_AIRCR         0x00000D0C  // Application Interrupt/Reset 
                                            // Control Register. Use the 
                                            // Application Interrupt and Reset 
                                            // Control Register to: determine 
                                            // data endianness, clear all 
                                            // active state information for 
                                            // debug or to recover from a hard 
                                            // failure, execute a system reset, 
                                            // alter the priority grouping 
                                            // position (binary point). 
#define CM3_SCS_O_SCR           0x00000D10  // System Control Register. Use 
                                            // the System Control Register for 
                                            // power-management functions: 
                                            // signal to the system when the 
                                            // processor can enter a low power 
                                            // state, control how the processor 
                                            // enters and exits low power 
                                            // states. 
#define CM3_SCS_O_CCR           0x00000D14  // Configuration Control Register. 
                                            // Use the Configuration Control 
                                            // Register to: enable NMI, 
                                            // HardFault and FAULTMASK to 
                                            // ignore bus fault, trap divide by 
                                            // zero and unaligned accesses, 
                                            // enable user access to the 
                                            // Software Trigger Exception 
                                            // Register, control entry to 
                                            // Thread Mode. 
#define CM3_SCS_O_SHPR1         0x00000D18  // System Handlers 4-7 Priority 
                                            // Register. Use the three System 
                                            // Handler Priority Registers to 
                                            // prioritize the following system 
                                            // handlers: memory manage, bus 
                                            // fault, usage fault, debug 
                                            // monitor, SVC, SysTick, PendSV. 
                                            // System Handlers are a special 
                                            // class of exception handler that 
                                            // can have their priority set to 
                                            // any of the priority levels. Most 
                                            // can be masked on (enabled) or 
                                            // off (disabled). When disabled, 
                                            // the fault is always treated as a 
                                            // Hard Fault. 
#define CM3_SCS_O_SHPR2         0x00000D1C  // System Handlers 8-11 Priority 
                                            // Register. Use the three System 
                                            // Handler Priority Registers to 
                                            // prioritize the following system 
                                            // handlers: memory manage, bus 
                                            // fault, usage fault, debug 
                                            // monitor, SVC, SysTick, PendSV. 
                                            // System Handlers are a special 
                                            // class of exception handler that 
                                            // can have their priority set to 
                                            // any of the priority levels. Most 
                                            // can be masked on (enabled) or 
                                            // off (disabled). When disabled, 
                                            // the fault is always treated as a 
                                            // Hard Fault. 
#define CM3_SCS_O_SHPR3         0x00000D20  // System Handlers 12-15 Priority 
                                            // Register. Use the three System 
                                            // Handler Priority Registers to 
                                            // prioritize the following system 
                                            // handlers: memory manage, bus 
                                            // fault, usage fault, debug 
                                            // monitor, SVC, SysTick, PendSV. 
                                            // System Handlers are a special 
                                            // class of exception handler that 
                                            // can have their priority set to 
                                            // any of the priority levels. Most 
                                            // can be masked on (enabled) or 
                                            // off (disabled). When disabled, 
                                            // the fault is always treated as a 
                                            // Hard Fault. 
#define CM3_SCS_O_SHCSR         0x00000D24  // System Handler Control and 
                                            // State Register. Use the System 
                                            // Handler Control and State 
                                            // Register to: enable or disable 
                                            // the system handlers, determine 
                                            // the pending status of bus fault, 
                                            // mem manage fault, and SVC, 
                                            // determine the active status of 
                                            // the system handlers. If a fault 
                                            // condition occurs while its fault 
                                            // handler is disabled, the fault 
                                            // escalates to a Hard Fault. 
#define CM3_SCS_O_CFSR          0x00000D28  // Configurable Fault Status 
                                            // Registers. Use the three 
                                            // Configurable Fault Status 
                                            // Registers to obtain information 
                                            // about local faults. These 
                                            // registers include: Memory Manage 
                                            // Fault Status Register 
                                            // (0xE000ED28), Bus Fault Status 
                                            // Register (0xE000ED29), Usage 
                                            // Fault Status Register 
                                            // (0xE000ED2A). The fl gs in these 
                                            // registers indicate the causes of 
                                            // local faults. Multiple flags can 
                                            // be set if more than one fault 
                                            // occurs. These register are 
                                            // read/write-clear. This means 
                                            // that they can be read normally, 
                                            // but writi g a 1 to any bit 
                                            // clears that bit. 
#define CM3_SCS_O_HFSR          0x00000D2C  // Hard Fault Status Register. Use 
                                            // the Hard Fault Status Register 
                                            // (HFSR) to obtain information 
                                            // about events that activate the 
                                            // Hard Fault handler. The HFSR is 
                                            // a write-clear register. This 
                                            // means that writing a 1 to a bit 
                                            // clears that bit 
#define CM3_SCS_O_DFSR          0x00000D30  // Debug Fault Status Register. 
                                            // Use the Debug Fault Status 
                                            // Register to monitor: external 
                                            // debug requests, vector catches, 
                                            // data watchpoint match, BKPT 
                                            // instruction execution, halt 
                                            // requests. Multiple flags in the 
                                            // Debug Fault Status Register can 
                                            // be set when multiple fault 
                                            // conditions occur. The register 
                                            // is read/write clear. This means 
                                            // that it can be read normally. 
                                            // Writing a 1 to a bit clears that 
                                            // bit. Note that these bits are 
                                            // not set unless the event is 
                                            // caught. This means that it 
                                            // causes a stop of some sort. If 
                                            // halting debug is enabled, these 
                                            // events stop the processor into 
                                            // debug. If debug is disabled and 
                                            // the debug monitor is enabled, 
                                            // then this becomes a debug 
                                            // monitor handler call, if 
                                            // priority permits. If debug and 
                                            // the monitor are both disabled, 
                                            // some of these events are Hard 
                                            // Faults, and the DBGEVT bit is 
                                            // set in the Hard Fault status 
                                            // register, and some are ignored. 
#define CM3_SCS_O_MMFAR         0x00000D34  // Mem Manage Fault Address 
                                            // Register. Use the Memory Manage 
                                            // Fault Address Register to read 
                                            // the address of the location that 
                                            // caused a Memory Manage Fault. 
#define CM3_SCS_O_BFAR          0x00000D38  // Bus Fault Address Register. Use 
                                            // the Bus Fault Address Register 
                                            // to read the address of the 
                                            // location that generated a Bus 
                                            // Fault. 
#define CM3_SCS_O_AFSR          0x00000D3C  // Auxiliary Fault Status 
                                            // Register. Use the Auxiliary 
                                            // Fault Status Register (AFSR) to 
                                            // determine additional system 
                                            // fault information to software. 
                                            // The AFSR flags map directly onto 
                                            // the AUXFAULT inputs of the 
                                            // processor, and a single-cycle 
                                            // high level on an external pin 
                                            // causes the corresponding AFSR 
                                            // bit to become latched as one. 
                                            // The bit can only be cleared by 
                                            // writing a one to the 
                                            // corresponding AFSR bit. When an 
                                            // AFSR bit is written or latched 
                                            // as one, an exception does not 
                                            // occur. If you require an 
                                            // exception, you must use an 
                                            // interrupt. 
#define CM3_SCS_O_ID_PFR0       0x00000D40  // Processor Feature register0. 
                                            // Processor Feature register0 
#define CM3_SCS_O_ID_PFR1       0x00000D44  // Processor Feature register1. 
                                            // Processor Feature register1 
#define CM3_SCS_O_ID_DFR0       0x00000D48  // Debug Feature register0. This 
                                            // register provides a high level 
                                            // view of the debug system. 
                                            // Further details are provided in 
                                            // the debug infrastructure itself. 
#define CM3_SCS_O_ID_AFR0       0x00000D4C  // Auxiliary Feature register0. 
                                            // This register provides some 
                                            // freedom for IMPLEMENTATION 
                                            // DEFINED features to be 
                                            // registered against the CPUID. 
                                            // Not used in Cortex-M3. 
#define CM3_SCS_O_ID_MMFR0      0x00000D50  // Memory Model Feature register0. 
                                            // General information on the 
                                            // memory model and memory 
                                            // management support. 
#define CM3_SCS_O_ID_MMFR1      0x00000D54  // Memory Model Feature register1. 
                                            // General information on the 
                                            // memory model and memory 
                                            // management support. 
#define CM3_SCS_O_ID_MMFR2      0x00000D58  // Memory Model Feature register2. 
                                            // General information on the 
                                            // memory model and memory 
                                            // management support. 
#define CM3_SCS_O_ID_MMFR3      0x00000D5C  // Memory Model Feature register3. 
                                            // General information on the 
                                            // memory model and memory 
                                            // management support. 
#define CM3_SCS_O_ID_ISAR0      0x00000D60  // ISA Feature register0. 
                                            // Information on the instruction 
                                            // set attributes register 
#define CM3_SCS_O_ID_ISAR1      0x00000D64  // ISA Feature register1. 
                                            // Information on the instruction 
                                            // set attributes register 
#define CM3_SCS_O_ID_ISAR2      0x00000D68  // ISA Feature register2. 
                                            // Information on the instruction 
                                            // set attributes register 
#define CM3_SCS_O_ID_ISAR3      0x00000D6C  // ISA Feature register3. 
                                            // Information on the instruction 
                                            // set attributes register 
#define CM3_SCS_O_ID_ISAR4      0x00000D70  // ISA Feature register4. 
                                            // Information on the instruction 
                                            // set attributes register 
#define CM3_SCS_O_CPACR         0x00000D88  // Coprocessor Access Control 
                                            // Register. The Coprocessor Access 
                                            // Control Register (CPACR) 
                                            // specifies the access privileges 
                                            // for coprocessors. 
#define CM3_SCS_O_MPU_TYPE      0x00000D90  // MPU Type Register. Use the MPU 
                                            // Type Register to see how many 
                                            // regions the MPU supports. Read 
                                            // bits [15:8] to determine if an 
                                            // MPU is present. 
#define CM3_SCS_O_MPU_CTRL      0x00000D94  // MPU Control Register. Use the 
                                            // MPU Control Register to enable 
                                            // the MPU, enable the default 
                                            // memory map (background region), 
                                            // and enable the MPU when in Hard 
                                            // Fault, Non-maskable Interrupt 
                                            // (NMI), and FAULTMASK escalated 
                                            // handlers. When the MPU is 
                                            // enabled, at least one region of 
                                            // the memory map must be enabled 
                                            // for the MPU to function unless 
                                            // the PRIVDEFENA bit is set. If 
                                            // the PRIVDEFENA bit is set and no 
                                            // regions are enabled, then only 
                                            // privileged code can operate. 
                                            // When the MPU is disabled, the 
                                            // default address map is used, as 
                                            // if no MPU is present. When the 
                                            // MPU is enabled, only the system 
                                            // partition and vector table loads 
                                            // are always accessible. Other 
                                            // areas are accessible based on 
                                            // regions and whether PRIVDEFENA 
                                            // is enabled. Unless HFNMIENA is 
                                            // set, the MPU is not enabled when 
                                            // the exception priority is -1 or 
                                            // -2. These priorities are only 
                                            // possible when in Hard fault, 
                                            // NMI, or when FAULTMASK is 
                                            // enabled. The HFNMIENA bit 
                                            // enables the MPU when operating 
                                            // with these two priorities. 
#define CM3_SCS_O_MPU_RNR       0x00000D98  // MPU Region Number Register. Use 
                                            // the MPU Region Number Register 
                                            // to select which protection 
                                            // region is accessed. Then write 
                                            // to the MPU Region Base Address 
                                            // Register or the MPU Attributes 
                                            // and Size Register to configure 
                                            // the characteristics of the 
                                            // protection region. 
#define CM3_SCS_O_MPU_RBAR      0x00000D9C  // MPU Region Base Address 
                                            // Register. Use the MPU Region 
                                            // Base Address Register to write 
                                            // the base address of a region. 
                                            // The Region Base Address Register 
                                            // also contains a REGION field 
                                            // that you can use to override the 
                                            // REGION field in the MPU Region 
                                            // Number Register, if the VALID 
                                            // bit is set. The Region Base 
                                            // Address register sets the base 
                                            // for the region. It is aligned by 
                                            // the size. So, a 64-KB sized 
                                            // region must be aligned on a 
                                            // multiple of 64KB, for example, 
                                            // 0x00010000 or 0x00020000. The 
                                            // region always reads back as the 
                                            // current MPU region number. VALID 
                                            // always reads back as 0. Writing 
                                            // with VALID = 1 and REGION = n 
                                            // changes the region number to n. 
                                            // This is a short-hand way to 
                                            // write the MPU Region Number 
                                            // Register. This register is 
                                            // Unpredictable if accessed other 
                                            // than as a word. 
#define CM3_SCS_O_MPU_RASR      0x00000DA0  // MPU Region Attribute and Size 
                                            // Register. Use the MPU Region 
                                            // Attribute and Size Register to 
                                            // control the MPU access 
                                            // permissions. The register is 
                                            // made up of two part registers, 
                                            // each of halfword size. These can 
                                            // be accessed using the individual 
                                            // size, or they can both be 
                                            // simultaneously accessed using a 
                                            // word operation. The sub-region 
                                            // disable bits are not supported 
                                            // for region sizes of 32 bytes, 64 
                                            // bytes, and 128 bytes. When these 
                                            // region sizes are used, the 
                                            // subregion disable bits must be 
                                            // programmed as 0. 
#define CM3_SCS_O_MPU_RBAR_A1   0x00000DA4  // MPU Alias 1 Region Base Address 
                                            // register. Alias of 0xE000ED9C. 
#define CM3_SCS_O_MPU_RASR_A1   0x00000DA8  // MPU Alias 1 Region Attribute 
                                            // and Size register. Alias of 
                                            // 0xE000EDA0. 
#define CM3_SCS_O_MPU_RBAR_A2   0x00000DAC  // MPU Alias 2 Region Base Address 
                                            // register. Alias of 0xE000ED9C. 
#define CM3_SCS_O_MPU_RASR_A2   0x00000DB0  // MPU Alias 2 Region Attribute 
                                            // and Size register. Alias of 
                                            // 0xE000EDA0. 
#define CM3_SCS_O_MPU_RBAR_A3   0x00000DB4  // MPU Alias 3 Region Base Address 
                                            // register. Alias of 0xE000ED9C. 
#define CM3_SCS_O_MPU_RASR_A3   0x00000DB8  // MPU Alias 3 Region Attribute 
                                            // and Size register. Alias of 
                                            // 0xE000EDA0. 
#define CM3_SCS_O_DHCSR         0x00000DF0  // Debug Halting Control and 
                                            // Status Register. The purpose of 
                                            // the Debug Halting Control and 
                                            // Status Register (DHCSR) is to 
                                            // provide status information about 
                                            // the state of the processor, 
                                            // enable core debug, halt and step 
                                            // the processor. For writes, 
                                            // 0xA05F must be written to bits 
                                            // [31:16], otherwise the write 
                                            // operation is ignored and no bits 
                                            // are written into the register. 
                                            // If not enabled for Halting mode, 
                                            // C_DEBUGEN = 1, all other fields 
                                            // are disabled. This register is 
                                            // not reset on a system reset. It 
                                            // is reset by a power-on reset. 
                                            // However, the C_HALT bit always 
                                            // clears on a system reset. To 
                                            // halt on a reset, the following 
                                            // bits must be enabled: bit [0], 
                                            // VC_CORERESET, of the Debug 
                                            // Exception and Monitor Control 
                                            // Register and bit [0],C_DEBUGEN, 
                                            // of the Debug Halting Control and 
                                            // Status Register. Note that 
                                            // writes to this register in any 
                                            // size other than word are 
                                            // Unpredictable. It is acceptable 
                                            // to read in any size, and you can 
                                            // use it to avoid or intentionally 
                                            // change a sticky bit. Bit 16 of 
                                            // DHCSR is Unpredictable on reset. 
#define CM3_SCS_O_DCRSR         0x00000DF4  // Deubg Core Register Selector 
                                            // Register. The purpose of the 
                                            // Debug Core Register Selector 
                                            // Register (DCRSR) is to select 
                                            // the processor register to 
                                            // transfer data to or from. This 
                                            // write-only register generates a 
                                            // handshake to the core to 
                                            // transfer data to or from Debug 
                                            // Core Register Data Register and 
                                            // the selected register. Until 
                                            // this core transaction is 
                                            // complete, bit [16], S_REGRDY, of 
                                            // the DHCSR is 0. Note that writes 
                                            // to this register in any size but 
                                            // word are Unpredictable. Note 
                                            // that PSR registers are fully 
                                            // accessible this way, whereas 
                                            // some read as 0 when using MRS 
                                            // instructions. Note that all bits 
                                            // can be written, but some 
                                            // combinations cause a fault when 
                                            // execution is resumed. Note that 
                                            // IT might be written and behaves 
                                            // as though in an IT block. 
#define CM3_SCS_O_DCRDR         0x00000DF8  // Debug Core Register Data 
                                            // Register. The purpose of the 
                                            // Debug Core Register Data 
                                            // Register (DCRDR) is to hold data 
                                            // for reading and writing 
                                            // registers to and from the 
                                            // processor. This is the data 
                                            // value written to the register 
                                            // selected by the Debug Register 
                                            // Selector Register. When the 
                                            // processor receives a request 
                                            // from the Debug Core Register 
                                            // Selector, this register is read 
                                            // or written by the processor 
                                            // using a normal load-store unit 
                                            // operation. If core register 
                                            // transfers are not being 
                                            // performed, software-based debug 
                                            // monitors can use this register 
                                            // for communication in non-halting 
                                            // debug. For example, OS RSD and 
                                            // Real View Monitor. This enables 
                                            // flags and bits to acknowledge 
                                            // state and indicate if commands 
                                            // have been accepted to, replied 
                                            // to, or accepted and replied to. 
#define CM3_SCS_O_DEMCR         0x00000DFC  // Debug Exception and Monitor 
                                            // Control Register. The purpose of 
                                            // the Debug Exception and Monitor 
                                            // Control Register (DEMCR) is 
                                            // Vector catching and Debug 
                                            // monitor control. This register 
                                            // manages exception behavior under 
                                            // debug. Vector catching is only 
                                            // available to halting debug. The 
                                            // upper halfword is for monitor 
                                            // controls and the lower halfword 
                                            // is for halting exception 
                                            // support. This register is not 
                                            // reset on a system reset. This 
                                            // register is reset by a power-on 
                                            // reset. Bits [19:16] are always 
                                            // cleared on a core reset. The 
                                            // debug monitor is enabled by 
                                            // software in the reset handler or 
                                            // later, or by the AHB-AP port. 
                                            // Vector catching is 
                                            // semi-synchronous. When a 
                                            // matching event is seen, a Halt 
                                            // is requested. Because the 
                                            // processor can only halt on an 
                                            // instruction boundary, it must 
                                            // wait until the next instruction 
                                            // boundary. As a result, it stops 
                                            // on the first instruction of the 
                                            // exception handler. However, two 
                                            // special cases exist when a 
                                            // vector catch has triggered: 1. 
                                            // If a fault is taken during a 
                                            // vector read or stack push error 
                                            // the halt occurs on the 
                                            // corresponding fault handler for 
                                            // the vector error or stack push. 
                                            // 2. If a late arriving interrupt 
                                            // detected during a vector read or 
                                            // stack push error it is not 
                                            // taken. That is, an 
                                            // implementation that supports the 
                                            // late arrival optimization must 
                                            // suppress it in this case. 
#define CM3_SCS_O_STIR          0x00000F00  // Software Trigger Interrupt 
                                            // Register. Use the Software 
                                            // Trigger Interrupt Register to 
                                            // pend an interrupt to trigger. 
#define CM3_SCS_O_PID4          0x00000FD0  // Peripheral identification 
                                            // register (PID4). 
#define CM3_SCS_O_PID5          0x00000FD4  // Peripheral identification 
                                            // register (PID5). 
#define CM3_SCS_O_PID6          0x00000FD8  // Peripheral identification 
                                            // register (PID6). 
#define CM3_SCS_O_PID7          0x00000FDC  // Peripheral identification 
                                            // register (PID7). 
#define CM3_SCS_O_PID0          0x00000FE0  // Peripheral identification 
                                            // register Bits 7:0 (PID0). 
#define CM3_SCS_O_PID1          0x00000FE4  // Peripheral identification 
                                            // register Bits 15:8 (PID1). 
#define CM3_SCS_O_PID2          0x00000FE8  // Peripheral identification 
                                            // register Bits 23:16 (PID2). 
#define CM3_SCS_O_PID3          0x00000FEC  // Peripheral identification 
                                            // register Bits 31:24 (PID3). 
#define CM3_SCS_O_CID0          0x00000FF0  // Component identification 
                                            // register Bits 7:0 (CID0). 
#define CM3_SCS_O_CID1          0x00000FF4  // Component identification 
                                            // register Bits 15:8 (CID1). 
#define CM3_SCS_O_CID2          0x00000FF8  // Component identification 
                                            // register Bits 23:16 (CID2). 
#define CM3_SCS_O_CID3          0x00000FFC  // Component identification 
                                            // register Bits 31:24 (CID3). 


//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_ICTR register.
//
//*****************************************************************************
#define CM3_SCS_ICTR_INTLINESNUM_M \
                                0x0000001F  // Total number of interrupt lines 
                                            // in groups of 32. 

#define CM3_SCS_ICTR_INTLINESNUM_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ACTLR register.
//
//*****************************************************************************
#define CM3_SCS_ACTLR_DISFOLD   0x00000004  // Disables IT folding. 
#define CM3_SCS_ACTLR_DISFOLD_M 0x00000004
#define CM3_SCS_ACTLR_DISFOLD_S 2
#define CM3_SCS_ACTLR_DISDEFWBUF \
                                0x00000002  // Disables write buffer us during 
                                            // default memorty map accesses. 
                                            // This causes all bus faults to be 
                                            // precise bus faults but decreases 
                                            // the performance of the processor 
                                            // because the stores to memory 
                                            // have to complete before the next 
                                            // instruction can be executed. 

#define CM3_SCS_ACTLR_DISDEFWBUF_M \
                                0x00000002
#define CM3_SCS_ACTLR_DISDEFWBUF_S 1
#define CM3_SCS_ACTLR_DISMCYCINT \
                                0x00000001  // Disables interruption of 
                                            // multi-cycle instructions. This 
                                            // increases the interrupt latency 
                                            // of the processor becuase LDM/STM 
                                            // completes before interrupt 
                                            // stacking occurs. 

#define CM3_SCS_ACTLR_DISMCYCINT_M \
                                0x00000001
#define CM3_SCS_ACTLR_DISMCYCINT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_STCSR register.
//
//*****************************************************************************
#define CM3_SCS_STCSR_COUNTFLAG 0x00010000  // Returns 1 if timer counted to 0 
                                            // since last time this was read. 
                                            // Clears on read by application of 
                                            // any part of the SysTick Control 
                                            // and Status Register. If read by 
                                            // the debugger using the DAP, this 
                                            // bit is cleared on read-only if 
                                            // the MasterType bit in the AHB-AP 
                                            // Control Register is set to 0. 
                                            // Otherwise, the COUNTFLAG bit is 
                                            // not changed by the debugger 
                                            // read. 
#define CM3_SCS_STCSR_COUNTFLAG_M \
                                0x00010000
#define CM3_SCS_STCSR_COUNTFLAG_S 16
#define CM3_SCS_STCSR_CLKSOURCE 0x00000004  // Clock source. If no reference 
                                            // clock is provided, it is held at 
                                            // 1 and so gives the same time as 
                                            // the core clock. The core clock 
                                            // must be at least 2.5 times 
                                            // faster than the reference clock. 
                                            // If it is not, the count values 
                                            // are Unpredictable. 0x0: External 
                                            // reference clock. 0x1: Core 
                                            // clock. 
#define CM3_SCS_STCSR_CLKSOURCE_M \
                                0x00000004
#define CM3_SCS_STCSR_CLKSOURCE_S 2
#define CM3_SCS_STCSR_TICKINT   0x00000002  // 0x0: Counting down to zero does 
                                            // not pend the SysTick handler. 
                                            // Software can use COUNTFLAG to 
                                            // determine if the SysTick handler 
                                            // has ever counted to zero. 0x1: 
                                            // Counting down to zero pends the 
                                            // SysTick handler. 
#define CM3_SCS_STCSR_TICKINT_M 0x00000002
#define CM3_SCS_STCSR_TICKINT_S 1
#define CM3_SCS_STCSR_ENABLE    0x00000001  // Enable SysTick counter 0x0: 
                                            // Counter disabled 0x1: Counter 
                                            // operates in a multi-shot way. 
                                            // That is, counter loads with the 
                                            // Reload value and then begins 
                                            // counting down. On reaching 0, it 
                                            // sets the COUNTFLAG to 1 and 
                                            // optionally pends the SysTick 
                                            // handler, based on TICKINT. It 
                                            // then loads the Reload value 
                                            // again, and begins counting. 
#define CM3_SCS_STCSR_ENABLE_M  0x00000001
#define CM3_SCS_STCSR_ENABLE_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_STRVR register.
//
//*****************************************************************************
#define CM3_SCS_STRVR_RELOAD_M  0x00FFFFFF  // Value to load into the SysTick 
                                            // Current Value Register when the 
                                            // counter reaches 0. 
#define CM3_SCS_STRVR_RELOAD_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_STCVR register.
//
//*****************************************************************************
#define CM3_SCS_STCVR_CURRENT_M 0x00FFFFFF  // Current value at the time the 
                                            // register is accessed. No 
                                            // read-modify-write protection is 
                                            // provided, so change with care. 
                                            // Writing to it with any value 
                                            // clears the register to 0. 
                                            // Clearing this register also 
                                            // clears the COUNTFLAG bit of the 
                                            // SysTick Control and Status 
                                            // Register. 
#define CM3_SCS_STCVR_CURRENT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_STCR register.
//
//*****************************************************************************
#define CM3_SCS_STCR_NOREF      0x80000000  // Reads as one. Indicates that no 
                                            // separate reference clock is 
                                            // provided. 
#define CM3_SCS_STCR_NOREF_M    0x80000000
#define CM3_SCS_STCR_NOREF_S    31
#define CM3_SCS_STCR_SKEW       0x40000000  // Reads as one. The calibration 
                                            // value is not exactly 10ms 
                                            // because of clock frequency. This 
                                            // could affect its suitability as 
                                            // a software real time clock. 
#define CM3_SCS_STCR_SKEW_M     0x40000000
#define CM3_SCS_STCR_SKEW_S     30
#define CM3_SCS_STCR_TENMS_M    0x00FFFFFF  // Reads as zero. Indicates 
                                            // calibration value is not known. 
#define CM3_SCS_STCR_TENMS_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISER0 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISER0_SETENA_M \
                                0xFFFFFFFF  // Writing 0 to a SETENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // enables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the SETENA 
                                            // fields. 

#define CM3_SCS_NVIC_ISER0_SETENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISER1 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISER1_SETENA_M \
                                0xFFFFFFFF  // Writing 0 to a SETENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // enables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the SETENA 
                                            // fields. 

#define CM3_SCS_NVIC_ISER1_SETENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISER2 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISER2_SETENA_M \
                                0xFFFFFFFF  // Writing 0 to a SETENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // enables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the SETENA 
                                            // fields. 

#define CM3_SCS_NVIC_ISER2_SETENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISER3 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISER3_SETENA_M \
                                0xFFFFFFFF  // Writing 0 to a SETENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // enables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the SETENA 
                                            // fields. 

#define CM3_SCS_NVIC_ISER3_SETENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISER4 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISER4_SETENA_M \
                                0xFFFFFFFF  // Writing 0 to a SETENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // enables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the SETENA 
                                            // fields. 

#define CM3_SCS_NVIC_ISER4_SETENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISER5 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISER5_SETENA_M \
                                0xFFFFFFFF  // Writing 0 to a SETENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // enables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the SETENA 
                                            // fields. 

#define CM3_SCS_NVIC_ISER5_SETENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISER6 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISER6_SETENA_M \
                                0xFFFFFFFF  // Writing 0 to a SETENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // enables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the SETENA 
                                            // fields. 

#define CM3_SCS_NVIC_ISER6_SETENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISER7 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISER7_SETENA_M \
                                0xFFFFFFFF  // Writing 0 to a SETENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // enables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the SETENA 
                                            // fields. 

#define CM3_SCS_NVIC_ISER7_SETENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICER0 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICER0_CLRENA_M \
                                0xFFFFFFFF  // Writing 0 to a CLRENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // disables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the CLRENA 
                                            // field. 

#define CM3_SCS_NVIC_ICER0_CLRENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICER1 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICER1_CLRENA_M \
                                0xFFFFFFFF  // Writing 0 to a CLRENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // disables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the CLRENA 
                                            // field. 

#define CM3_SCS_NVIC_ICER1_CLRENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICER2 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICER2_CLRENA_M \
                                0xFFFFFFFF  // Writing 0 to a CLRENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // disables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the CLRENA 
                                            // field. 

#define CM3_SCS_NVIC_ICER2_CLRENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICER3 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICER3_CLRENA_M \
                                0xFFFFFFFF  // Writing 0 to a CLRENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // disables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the CLRENA 
                                            // field. 

#define CM3_SCS_NVIC_ICER3_CLRENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICER4 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICER4_CLRENA_M \
                                0xFFFFFFFF  // Writing 0 to a CLRENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // disables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the CLRENA 
                                            // field. 

#define CM3_SCS_NVIC_ICER4_CLRENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICER5 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICER5_CLRENA_M \
                                0xFFFFFFFF  // Writing 0 to a CLRENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // disables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the CLRENA 
                                            // field. 

#define CM3_SCS_NVIC_ICER5_CLRENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICER6 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICER6_CLRENA_M \
                                0xFFFFFFFF  // Writing 0 to a CLRENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // disables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the CLRENA 
                                            // field. 

#define CM3_SCS_NVIC_ICER6_CLRENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICER7 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICER7_CLRENA_M \
                                0xFFFFFFFF  // Writing 0 to a CLRENA bit has 
                                            // no effect, writing 1 to a bit 
                                            // disables the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current enable 
                                            // state. Reset clears the CLRENA 
                                            // field. 

#define CM3_SCS_NVIC_ICER7_CLRENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISPR0 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISPR0_SETPEND_M \
                                0xFFFFFFFF  // Writing 0 to a SETPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // pends the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ISPR0_SETPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISPR1 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISPR1_SETPEND_M \
                                0xFFFFFFFF  // Writing 0 to a SETPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // pends the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ISPR1_SETPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISPR2 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISPR2_SETPEND_M \
                                0xFFFFFFFF  // Writing 0 to a SETPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // pends the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ISPR2_SETPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISPR3 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISPR3_SETPEND_M \
                                0xFFFFFFFF  // Writing 0 to a SETPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // pends the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ISPR3_SETPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISPR4 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISPR4_SETPEND_M \
                                0xFFFFFFFF  // Writing 0 to a SETPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // pends the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ISPR4_SETPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISPR5 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISPR5_SETPEND_M \
                                0xFFFFFFFF  // Writing 0 to a SETPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // pends the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ISPR5_SETPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISPR6 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISPR6_SETPEND_M \
                                0xFFFFFFFF  // Writing 0 to a SETPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // pends the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ISPR6_SETPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ISPR7 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ISPR7_SETPEND_M \
                                0xFFFFFFFF  // Writing 0 to a SETPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // pends the corresponding 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ISPR7_SETPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICPR0 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICPR0_CLRPEND_M \
                                0xFFFFFFFF  // Writing 0 to a CLRPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // clears the corresponding pending 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ICPR0_CLRPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICPR1 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICPR1_CLRPEND_M \
                                0xFFFFFFFF  // Writing 0 to a CLRPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // clears the corresponding pending 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ICPR1_CLRPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICPR2 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICPR2_CLRPEND_M \
                                0xFFFFFFFF  // Writing 0 to a CLRPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // clears the corresponding pending 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ICPR2_CLRPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICPR3 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICPR3_CLRPEND_M \
                                0xFFFFFFFF  // Writing 0 to a CLRPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // clears the corresponding pending 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ICPR3_CLRPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICPR4 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICPR4_CLRPEND_M \
                                0xFFFFFFFF  // Writing 0 to a CLRPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // clears the corresponding pending 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ICPR4_CLRPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICPR5 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICPR5_CLRPEND_M \
                                0xFFFFFFFF  // Writing 0 to a CLRPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // clears the corresponding pending 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ICPR5_CLRPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICPR6 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICPR6_CLRPEND_M \
                                0xFFFFFFFF  // Writing 0 to a CLRPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // clears the corresponding pending 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ICPR6_CLRPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_ICPR7 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_ICPR7_CLRPEND_M \
                                0xFFFFFFFF  // Writing 0 to a CLRPEND bit has 
                                            // no effect, writing 1 to a bit 
                                            // clears the corresponding pending 
                                            // interrupt. Reading the bit 
                                            // returns its current state. 

#define CM3_SCS_NVIC_ICPR7_CLRPEND_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IABR0 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IABR0_ACTIVE_M \
                                0xFFFFFFFF  // Interrupt active flags. Reading 
                                            // 0 implies the interrupt is not 
                                            // active or stacked. Reading 1 
                                            // implies the interrupt is active 
                                            // or pre-empted and stacked. 

#define CM3_SCS_NVIC_IABR0_ACTIVE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IABR1 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IABR1_ACTIVE_M \
                                0xFFFFFFFF  // Interrupt active flags. Reading 
                                            // 0 implies the interrupt is not 
                                            // active or stacked. Reading 1 
                                            // implies the interrupt is active 
                                            // or pre-empted and stacked. 

#define CM3_SCS_NVIC_IABR1_ACTIVE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IABR2 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IABR2_ACTIVE_M \
                                0xFFFFFFFF  // Interrupt active flags. Reading 
                                            // 0 implies the interrupt is not 
                                            // active or stacked. Reading 1 
                                            // implies the interrupt is active 
                                            // or pre-empted and stacked. 

#define CM3_SCS_NVIC_IABR2_ACTIVE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IABR3 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IABR3_ACTIVE_M \
                                0xFFFFFFFF  // Interrupt active flags. Reading 
                                            // 0 implies the interrupt is not 
                                            // active or stacked. Reading 1 
                                            // implies the interrupt is active 
                                            // or pre-empted and stacked. 

#define CM3_SCS_NVIC_IABR3_ACTIVE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IABR4 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IABR4_ACTIVE_M \
                                0xFFFFFFFF  // Interrupt active flags. Reading 
                                            // 0 implies the interrupt is not 
                                            // active or stacked. Reading 1 
                                            // implies the interrupt is active 
                                            // or pre-empted and stacked. 

#define CM3_SCS_NVIC_IABR4_ACTIVE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IABR5 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IABR5_ACTIVE_M \
                                0xFFFFFFFF  // Interrupt active flags. Reading 
                                            // 0 implies the interrupt is not 
                                            // active or stacked. Reading 1 
                                            // implies the interrupt is active 
                                            // or pre-empted and stacked. 

#define CM3_SCS_NVIC_IABR5_ACTIVE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IABR6 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IABR6_ACTIVE_M \
                                0xFFFFFFFF  // Interrupt active flags. Reading 
                                            // 0 implies the interrupt is not 
                                            // active or stacked. Reading 1 
                                            // implies the interrupt is active 
                                            // or pre-empted and stacked. 

#define CM3_SCS_NVIC_IABR6_ACTIVE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IABR7 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IABR7_ACTIVE_M \
                                0xFFFFFFFF  // Interrupt active flags. Reading 
                                            // 0 implies the interrupt is not 
                                            // active or stacked. Reading 1 
                                            // implies the interrupt is active 
                                            // or pre-empted and stacked. 

#define CM3_SCS_NVIC_IABR7_ACTIVE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR0 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR0_PRI_3_M \
                                0xFF000000  // Priority of interrupt 3 

#define CM3_SCS_NVIC_IPR0_PRI_3_S 24
#define CM3_SCS_NVIC_IPR0_PRI_2_M \
                                0x00FF0000  // Priority of interrupt 2 

#define CM3_SCS_NVIC_IPR0_PRI_2_S 16
#define CM3_SCS_NVIC_IPR0_PRI_1_M \
                                0x0000FF00  // Priority of interrupt 1 

#define CM3_SCS_NVIC_IPR0_PRI_1_S 8
#define CM3_SCS_NVIC_IPR0_PRI_0_M \
                                0x000000FF  // Priority of interrupt 0 

#define CM3_SCS_NVIC_IPR0_PRI_0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR1 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR1_PRI_7_M \
                                0xFF000000  // Priority of interrupt 7 

#define CM3_SCS_NVIC_IPR1_PRI_7_S 24
#define CM3_SCS_NVIC_IPR1_PRI_6_M \
                                0x00FF0000  // Priority of interrupt 6 

#define CM3_SCS_NVIC_IPR1_PRI_6_S 16
#define CM3_SCS_NVIC_IPR1_PRI_5_M \
                                0x0000FF00  // Priority of interrupt 5 

#define CM3_SCS_NVIC_IPR1_PRI_5_S 8
#define CM3_SCS_NVIC_IPR1_PRI_4_M \
                                0x000000FF  // Priority of interrupt 4 

#define CM3_SCS_NVIC_IPR1_PRI_4_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR2 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR2_PRI_11_M \
                                0xFF000000  // Priority of interrupt 11 

#define CM3_SCS_NVIC_IPR2_PRI_11_S 24
#define CM3_SCS_NVIC_IPR2_PRI_10_M \
                                0x00FF0000  // Priority of interrupt 10 

#define CM3_SCS_NVIC_IPR2_PRI_10_S 16
#define CM3_SCS_NVIC_IPR2_PRI_9_M \
                                0x0000FF00  // Priority of interrupt 9 

#define CM3_SCS_NVIC_IPR2_PRI_9_S 8
#define CM3_SCS_NVIC_IPR2_PRI_8_M \
                                0x000000FF  // Priority of interrupt 8 

#define CM3_SCS_NVIC_IPR2_PRI_8_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR3 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR3_PRI_15_M \
                                0xFF000000  // Priority of interrupt 15 

#define CM3_SCS_NVIC_IPR3_PRI_15_S 24
#define CM3_SCS_NVIC_IPR3_PRI_14_M \
                                0x00FF0000  // Priority of interrupt 14 

#define CM3_SCS_NVIC_IPR3_PRI_14_S 16
#define CM3_SCS_NVIC_IPR3_PRI_13_M \
                                0x0000FF00  // Priority of interrupt 13 

#define CM3_SCS_NVIC_IPR3_PRI_13_S 8
#define CM3_SCS_NVIC_IPR3_PRI_12_M \
                                0x000000FF  // Priority of interrupt 12 

#define CM3_SCS_NVIC_IPR3_PRI_12_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR4 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR4_PRI_19_M \
                                0xFF000000  // Priority of interrupt 19 

#define CM3_SCS_NVIC_IPR4_PRI_19_S 24
#define CM3_SCS_NVIC_IPR4_PRI_18_M \
                                0x00FF0000  // Priority of interrupt 18 

#define CM3_SCS_NVIC_IPR4_PRI_18_S 16
#define CM3_SCS_NVIC_IPR4_PRI_17_M \
                                0x0000FF00  // Priority of interrupt 17 

#define CM3_SCS_NVIC_IPR4_PRI_17_S 8
#define CM3_SCS_NVIC_IPR4_PRI_16_M \
                                0x000000FF  // Priority of interrupt 16 

#define CM3_SCS_NVIC_IPR4_PRI_16_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR5 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR5_PRI_23_M \
                                0xFF000000  // Priority of interrupt 23 

#define CM3_SCS_NVIC_IPR5_PRI_23_S 24
#define CM3_SCS_NVIC_IPR5_PRI_22_M \
                                0x00FF0000  // Priority of interrupt 22 

#define CM3_SCS_NVIC_IPR5_PRI_22_S 16
#define CM3_SCS_NVIC_IPR5_PRI_21_M \
                                0x0000FF00  // Priority of interrupt 21 

#define CM3_SCS_NVIC_IPR5_PRI_21_S 8
#define CM3_SCS_NVIC_IPR5_PRI_20_M \
                                0x000000FF  // Priority of interrupt 20 

#define CM3_SCS_NVIC_IPR5_PRI_20_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR6 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR6_PRI_27_M \
                                0xFF000000  // Priority of interrupt 27 

#define CM3_SCS_NVIC_IPR6_PRI_27_S 24
#define CM3_SCS_NVIC_IPR6_PRI_26_M \
                                0x00FF0000  // Priority of interrupt 26 

#define CM3_SCS_NVIC_IPR6_PRI_26_S 16
#define CM3_SCS_NVIC_IPR6_PRI_25_M \
                                0x0000FF00  // Priority of interrupt 25 

#define CM3_SCS_NVIC_IPR6_PRI_25_S 8
#define CM3_SCS_NVIC_IPR6_PRI_24_M \
                                0x000000FF  // Priority of interrupt 24 

#define CM3_SCS_NVIC_IPR6_PRI_24_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR7 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR7_PRI_31_M \
                                0xFF000000  // Priority of interrupt 31 

#define CM3_SCS_NVIC_IPR7_PRI_31_S 24
#define CM3_SCS_NVIC_IPR7_PRI_30_M \
                                0x00FF0000  // Priority of interrupt 30 

#define CM3_SCS_NVIC_IPR7_PRI_30_S 16
#define CM3_SCS_NVIC_IPR7_PRI_29_M \
                                0x0000FF00  // Priority of interrupt 29 

#define CM3_SCS_NVIC_IPR7_PRI_29_S 8
#define CM3_SCS_NVIC_IPR7_PRI_28_M \
                                0x000000FF  // Priority of interrupt 28 

#define CM3_SCS_NVIC_IPR7_PRI_28_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR8 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR8_PRI_35_M \
                                0xFF000000  // Priority of interrupt 35 

#define CM3_SCS_NVIC_IPR8_PRI_35_S 24
#define CM3_SCS_NVIC_IPR8_PRI_34_M \
                                0x00FF0000  // Priority of interrupt 34 

#define CM3_SCS_NVIC_IPR8_PRI_34_S 16
#define CM3_SCS_NVIC_IPR8_PRI_33_M \
                                0x0000FF00  // Priority of interrupt 33 

#define CM3_SCS_NVIC_IPR8_PRI_33_S 8
#define CM3_SCS_NVIC_IPR8_PRI_32_M \
                                0x000000FF  // Priority of interrupt 32 

#define CM3_SCS_NVIC_IPR8_PRI_32_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR9 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR9_PRI_39_M \
                                0xFF000000  // Priority of interrupt 39 

#define CM3_SCS_NVIC_IPR9_PRI_39_S 24
#define CM3_SCS_NVIC_IPR9_PRI_38_M \
                                0x00FF0000  // Priority of interrupt 38 

#define CM3_SCS_NVIC_IPR9_PRI_38_S 16
#define CM3_SCS_NVIC_IPR9_PRI_37_M \
                                0x0000FF00  // Priority of interrupt 37 

#define CM3_SCS_NVIC_IPR9_PRI_37_S 8
#define CM3_SCS_NVIC_IPR9_PRI_36_M \
                                0x000000FF  // Priority of interrupt 36 

#define CM3_SCS_NVIC_IPR9_PRI_36_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR10 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR10_PRI_43_M \
                                0xFF000000  // Priority of interrupt 43 

#define CM3_SCS_NVIC_IPR10_PRI_43_S 24
#define CM3_SCS_NVIC_IPR10_PRI_42_M \
                                0x00FF0000  // Priority of interrupt 42 

#define CM3_SCS_NVIC_IPR10_PRI_42_S 16
#define CM3_SCS_NVIC_IPR10_PRI_41_M \
                                0x0000FF00  // Priority of interrupt 41 

#define CM3_SCS_NVIC_IPR10_PRI_41_S 8
#define CM3_SCS_NVIC_IPR10_PRI_40_M \
                                0x000000FF  // Priority of interrupt 40 

#define CM3_SCS_NVIC_IPR10_PRI_40_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR11 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR11_PRI_47_M \
                                0xFF000000  // Priority of interrupt 47 

#define CM3_SCS_NVIC_IPR11_PRI_47_S 24
#define CM3_SCS_NVIC_IPR11_PRI_46_M \
                                0x00FF0000  // Priority of interrupt 46 

#define CM3_SCS_NVIC_IPR11_PRI_46_S 16
#define CM3_SCS_NVIC_IPR11_PRI_45_M \
                                0x0000FF00  // Priority of interrupt 45 

#define CM3_SCS_NVIC_IPR11_PRI_45_S 8
#define CM3_SCS_NVIC_IPR11_PRI_44_M \
                                0x000000FF  // Priority of interrupt 44 

#define CM3_SCS_NVIC_IPR11_PRI_44_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR12 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR12_PRI_51_M \
                                0xFF000000  // Priority of interrupt 51 

#define CM3_SCS_NVIC_IPR12_PRI_51_S 24
#define CM3_SCS_NVIC_IPR12_PRI_50_M \
                                0x00FF0000  // Priority of interrupt 50 

#define CM3_SCS_NVIC_IPR12_PRI_50_S 16
#define CM3_SCS_NVIC_IPR12_PRI_49_M \
                                0x0000FF00  // Priority of interrupt 49 

#define CM3_SCS_NVIC_IPR12_PRI_49_S 8
#define CM3_SCS_NVIC_IPR12_PRI_48_M \
                                0x000000FF  // Priority of interrupt 48 

#define CM3_SCS_NVIC_IPR12_PRI_48_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR13 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR13_PRI_55_M \
                                0xFF000000  // Priority of interrupt 55 

#define CM3_SCS_NVIC_IPR13_PRI_55_S 24
#define CM3_SCS_NVIC_IPR13_PRI_54_M \
                                0x00FF0000  // Priority of interrupt 54 

#define CM3_SCS_NVIC_IPR13_PRI_54_S 16
#define CM3_SCS_NVIC_IPR13_PRI_53_M \
                                0x0000FF00  // Priority of interrupt 53 

#define CM3_SCS_NVIC_IPR13_PRI_53_S 8
#define CM3_SCS_NVIC_IPR13_PRI_52_M \
                                0x000000FF  // Priority of interrupt 52 

#define CM3_SCS_NVIC_IPR13_PRI_52_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR14 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR14_PRI_59_M \
                                0xFF000000  // Priority of interrupt 59 

#define CM3_SCS_NVIC_IPR14_PRI_59_S 24
#define CM3_SCS_NVIC_IPR14_PRI_58_M \
                                0x00FF0000  // Priority of interrupt 58 

#define CM3_SCS_NVIC_IPR14_PRI_58_S 16
#define CM3_SCS_NVIC_IPR14_PRI_57_M \
                                0x0000FF00  // Priority of interrupt 57 

#define CM3_SCS_NVIC_IPR14_PRI_57_S 8
#define CM3_SCS_NVIC_IPR14_PRI_56_M \
                                0x000000FF  // Priority of interrupt 56 

#define CM3_SCS_NVIC_IPR14_PRI_56_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR15 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR15_PRI_63_M \
                                0xFF000000  // Priority of interrupt 63 

#define CM3_SCS_NVIC_IPR15_PRI_63_S 24
#define CM3_SCS_NVIC_IPR15_PRI_62_M \
                                0x00FF0000  // Priority of interrupt 62 

#define CM3_SCS_NVIC_IPR15_PRI_62_S 16
#define CM3_SCS_NVIC_IPR15_PRI_61_M \
                                0x0000FF00  // Priority of interrupt 61 

#define CM3_SCS_NVIC_IPR15_PRI_61_S 8
#define CM3_SCS_NVIC_IPR15_PRI_60_M \
                                0x000000FF  // Priority of interrupt 60 

#define CM3_SCS_NVIC_IPR15_PRI_60_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR16 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR16_PRI_67_M \
                                0xFF000000  // Priority of interrupt 67 

#define CM3_SCS_NVIC_IPR16_PRI_67_S 24
#define CM3_SCS_NVIC_IPR16_PRI_66_M \
                                0x00FF0000  // Priority of interrupt 66 

#define CM3_SCS_NVIC_IPR16_PRI_66_S 16
#define CM3_SCS_NVIC_IPR16_PRI_65_M \
                                0x0000FF00  // Priority of interrupt 65 

#define CM3_SCS_NVIC_IPR16_PRI_65_S 8
#define CM3_SCS_NVIC_IPR16_PRI_64_M \
                                0x000000FF  // Priority of interrupt 64 

#define CM3_SCS_NVIC_IPR16_PRI_64_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR17 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR17_PRI_71_M \
                                0xFF000000  // Priority of interrupt 71 

#define CM3_SCS_NVIC_IPR17_PRI_71_S 24
#define CM3_SCS_NVIC_IPR17_PRI_70_M \
                                0x00FF0000  // Priority of interrupt 70 

#define CM3_SCS_NVIC_IPR17_PRI_70_S 16
#define CM3_SCS_NVIC_IPR17_PRI_69_M \
                                0x0000FF00  // Priority of interrupt 69 

#define CM3_SCS_NVIC_IPR17_PRI_69_S 8
#define CM3_SCS_NVIC_IPR17_PRI_68_M \
                                0x000000FF  // Priority of interrupt 68 

#define CM3_SCS_NVIC_IPR17_PRI_68_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR18 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR18_PRI_75_M \
                                0xFF000000  // Priority of interrupt 75 

#define CM3_SCS_NVIC_IPR18_PRI_75_S 24
#define CM3_SCS_NVIC_IPR18_PRI_74_M \
                                0x00FF0000  // Priority of interrupt 74 

#define CM3_SCS_NVIC_IPR18_PRI_74_S 16
#define CM3_SCS_NVIC_IPR18_PRI_73_M \
                                0x0000FF00  // Priority of interrupt 73 

#define CM3_SCS_NVIC_IPR18_PRI_73_S 8
#define CM3_SCS_NVIC_IPR18_PRI_72_M \
                                0x000000FF  // Priority of interrupt 72 

#define CM3_SCS_NVIC_IPR18_PRI_72_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR19 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR19_PRI_79_M \
                                0xFF000000  // Priority of interrupt 79 

#define CM3_SCS_NVIC_IPR19_PRI_79_S 24
#define CM3_SCS_NVIC_IPR19_PRI_78_M \
                                0x00FF0000  // Priority of interrupt 78 

#define CM3_SCS_NVIC_IPR19_PRI_78_S 16
#define CM3_SCS_NVIC_IPR19_PRI_77_M \
                                0x0000FF00  // Priority of interrupt 77 

#define CM3_SCS_NVIC_IPR19_PRI_77_S 8
#define CM3_SCS_NVIC_IPR19_PRI_76_M \
                                0x000000FF  // Priority of interrupt 76 

#define CM3_SCS_NVIC_IPR19_PRI_76_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR20 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR20_PRI_83_M \
                                0xFF000000  // Priority of interrupt 83 

#define CM3_SCS_NVIC_IPR20_PRI_83_S 24
#define CM3_SCS_NVIC_IPR20_PRI_82_M \
                                0x00FF0000  // Priority of interrupt 82 

#define CM3_SCS_NVIC_IPR20_PRI_82_S 16
#define CM3_SCS_NVIC_IPR20_PRI_81_M \
                                0x0000FF00  // Priority of interrupt 81 

#define CM3_SCS_NVIC_IPR20_PRI_81_S 8
#define CM3_SCS_NVIC_IPR20_PRI_80_M \
                                0x000000FF  // Priority of interrupt 80 

#define CM3_SCS_NVIC_IPR20_PRI_80_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR21 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR21_PRI_87_M \
                                0xFF000000  // Priority of interrupt 87 

#define CM3_SCS_NVIC_IPR21_PRI_87_S 24
#define CM3_SCS_NVIC_IPR21_PRI_86_M \
                                0x00FF0000  // Priority of interrupt 86 

#define CM3_SCS_NVIC_IPR21_PRI_86_S 16
#define CM3_SCS_NVIC_IPR21_PRI_85_M \
                                0x0000FF00  // Priority of interrupt 85 

#define CM3_SCS_NVIC_IPR21_PRI_85_S 8
#define CM3_SCS_NVIC_IPR21_PRI_84_M \
                                0x000000FF  // Priority of interrupt 84 

#define CM3_SCS_NVIC_IPR21_PRI_84_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR22 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR22_PRI_91_M \
                                0xFF000000  // Priority of interrupt 91 

#define CM3_SCS_NVIC_IPR22_PRI_91_S 24
#define CM3_SCS_NVIC_IPR22_PRI_90_M \
                                0x00FF0000  // Priority of interrupt 90 

#define CM3_SCS_NVIC_IPR22_PRI_90_S 16
#define CM3_SCS_NVIC_IPR22_PRI_89_M \
                                0x0000FF00  // Priority of interrupt 89 

#define CM3_SCS_NVIC_IPR22_PRI_89_S 8
#define CM3_SCS_NVIC_IPR22_PRI_88_M \
                                0x000000FF  // Priority of interrupt 88 

#define CM3_SCS_NVIC_IPR22_PRI_88_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR23 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR23_PRI_95_M \
                                0xFF000000  // Priority of interrupt 95 

#define CM3_SCS_NVIC_IPR23_PRI_95_S 24
#define CM3_SCS_NVIC_IPR23_PRI_94_M \
                                0x00FF0000  // Priority of interrupt 94 

#define CM3_SCS_NVIC_IPR23_PRI_94_S 16
#define CM3_SCS_NVIC_IPR23_PRI_93_M \
                                0x0000FF00  // Priority of interrupt 93 

#define CM3_SCS_NVIC_IPR23_PRI_93_S 8
#define CM3_SCS_NVIC_IPR23_PRI_92_M \
                                0x000000FF  // Priority of interrupt 92 

#define CM3_SCS_NVIC_IPR23_PRI_92_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR24 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR24_PRI_99_M \
                                0xFF000000  // Priority of interrupt 99 

#define CM3_SCS_NVIC_IPR24_PRI_99_S 24
#define CM3_SCS_NVIC_IPR24_PRI_98_M \
                                0x00FF0000  // Priority of interrupt 98 

#define CM3_SCS_NVIC_IPR24_PRI_98_S 16
#define CM3_SCS_NVIC_IPR24_PRI_97_M \
                                0x0000FF00  // Priority of interrupt 97 

#define CM3_SCS_NVIC_IPR24_PRI_97_S 8
#define CM3_SCS_NVIC_IPR24_PRI_96_M \
                                0x000000FF  // Priority of interrupt 96 

#define CM3_SCS_NVIC_IPR24_PRI_96_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR25 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR25_PRI_103_M \
                                0xFF000000  // Priority of interrupt 103 

#define CM3_SCS_NVIC_IPR25_PRI_103_S 24
#define CM3_SCS_NVIC_IPR25_PRI_102_M \
                                0x00FF0000  // Priority of interrupt 102 

#define CM3_SCS_NVIC_IPR25_PRI_102_S 16
#define CM3_SCS_NVIC_IPR25_PRI_101_M \
                                0x0000FF00  // Priority of interrupt 101 

#define CM3_SCS_NVIC_IPR25_PRI_101_S 8
#define CM3_SCS_NVIC_IPR25_PRI_100_M \
                                0x000000FF  // Priority of interrupt 100 

#define CM3_SCS_NVIC_IPR25_PRI_100_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR26 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR26_PRI_107_M \
                                0xFF000000  // Priority of interrupt 107 

#define CM3_SCS_NVIC_IPR26_PRI_107_S 24
#define CM3_SCS_NVIC_IPR26_PRI_106_M \
                                0x00FF0000  // Priority of interrupt 106 

#define CM3_SCS_NVIC_IPR26_PRI_106_S 16
#define CM3_SCS_NVIC_IPR26_PRI_105_M \
                                0x0000FF00  // Priority of interrupt 105 

#define CM3_SCS_NVIC_IPR26_PRI_105_S 8
#define CM3_SCS_NVIC_IPR26_PRI_104_M \
                                0x000000FF  // Priority of interrupt 104 

#define CM3_SCS_NVIC_IPR26_PRI_104_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR27 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR27_PRI_111_M \
                                0xFF000000  // Priority of interrupt 111 

#define CM3_SCS_NVIC_IPR27_PRI_111_S 24
#define CM3_SCS_NVIC_IPR27_PRI_110_M \
                                0x00FF0000  // Priority of interrupt 110 

#define CM3_SCS_NVIC_IPR27_PRI_110_S 16
#define CM3_SCS_NVIC_IPR27_PRI_109_M \
                                0x0000FF00  // Priority of interrupt 109 

#define CM3_SCS_NVIC_IPR27_PRI_109_S 8
#define CM3_SCS_NVIC_IPR27_PRI_108_M \
                                0x000000FF  // Priority of interrupt 108 

#define CM3_SCS_NVIC_IPR27_PRI_108_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR28 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR28_PRI_115_M \
                                0xFF000000  // Priority of interrupt 115 

#define CM3_SCS_NVIC_IPR28_PRI_115_S 24
#define CM3_SCS_NVIC_IPR28_PRI_114_M \
                                0x00FF0000  // Priority of interrupt 114 

#define CM3_SCS_NVIC_IPR28_PRI_114_S 16
#define CM3_SCS_NVIC_IPR28_PRI_113_M \
                                0x0000FF00  // Priority of interrupt 113 

#define CM3_SCS_NVIC_IPR28_PRI_113_S 8
#define CM3_SCS_NVIC_IPR28_PRI_112_M \
                                0x000000FF  // Priority of interrupt 112 

#define CM3_SCS_NVIC_IPR28_PRI_112_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR29 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR29_PRI_119_M \
                                0xFF000000  // Priority of interrupt 119 

#define CM3_SCS_NVIC_IPR29_PRI_119_S 24
#define CM3_SCS_NVIC_IPR29_PRI_118_M \
                                0x00FF0000  // Priority of interrupt 118 

#define CM3_SCS_NVIC_IPR29_PRI_118_S 16
#define CM3_SCS_NVIC_IPR29_PRI_117_M \
                                0x0000FF00  // Priority of interrupt 117 

#define CM3_SCS_NVIC_IPR29_PRI_117_S 8
#define CM3_SCS_NVIC_IPR29_PRI_116_M \
                                0x000000FF  // Priority of interrupt 116 

#define CM3_SCS_NVIC_IPR29_PRI_116_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR30 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR30_PRI_123_M \
                                0xFF000000  // Priority of interrupt 123 

#define CM3_SCS_NVIC_IPR30_PRI_123_S 24
#define CM3_SCS_NVIC_IPR30_PRI_122_M \
                                0x00FF0000  // Priority of interrupt 122 

#define CM3_SCS_NVIC_IPR30_PRI_122_S 16
#define CM3_SCS_NVIC_IPR30_PRI_121_M \
                                0x0000FF00  // Priority of interrupt 121 

#define CM3_SCS_NVIC_IPR30_PRI_121_S 8
#define CM3_SCS_NVIC_IPR30_PRI_120_M \
                                0x000000FF  // Priority of interrupt 120 

#define CM3_SCS_NVIC_IPR30_PRI_120_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR31 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR31_PRI_127_M \
                                0xFF000000  // Priority of interrupt 127 

#define CM3_SCS_NVIC_IPR31_PRI_127_S 24
#define CM3_SCS_NVIC_IPR31_PRI_126_M \
                                0x00FF0000  // Priority of interrupt 126 

#define CM3_SCS_NVIC_IPR31_PRI_126_S 16
#define CM3_SCS_NVIC_IPR31_PRI_125_M \
                                0x0000FF00  // Priority of interrupt 125 

#define CM3_SCS_NVIC_IPR31_PRI_125_S 8
#define CM3_SCS_NVIC_IPR31_PRI_124_M \
                                0x000000FF  // Priority of interrupt 124 

#define CM3_SCS_NVIC_IPR31_PRI_124_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR32 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR32_PRI_131_M \
                                0xFF000000  // Priority of interrupt 131 

#define CM3_SCS_NVIC_IPR32_PRI_131_S 24
#define CM3_SCS_NVIC_IPR32_PRI_130_M \
                                0x00FF0000  // Priority of interrupt 130 

#define CM3_SCS_NVIC_IPR32_PRI_130_S 16
#define CM3_SCS_NVIC_IPR32_PRI_129_M \
                                0x0000FF00  // Priority of interrupt 129 

#define CM3_SCS_NVIC_IPR32_PRI_129_S 8
#define CM3_SCS_NVIC_IPR32_PRI_128_M \
                                0x000000FF  // Priority of interrupt 128 

#define CM3_SCS_NVIC_IPR32_PRI_128_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR33 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR33_PRI_135_M \
                                0xFF000000  // Priority of interrupt 135 

#define CM3_SCS_NVIC_IPR33_PRI_135_S 24
#define CM3_SCS_NVIC_IPR33_PRI_134_M \
                                0x00FF0000  // Priority of interrupt 134 

#define CM3_SCS_NVIC_IPR33_PRI_134_S 16
#define CM3_SCS_NVIC_IPR33_PRI_133_M \
                                0x0000FF00  // Priority of interrupt 133 

#define CM3_SCS_NVIC_IPR33_PRI_133_S 8
#define CM3_SCS_NVIC_IPR33_PRI_132_M \
                                0x000000FF  // Priority of interrupt 132 

#define CM3_SCS_NVIC_IPR33_PRI_132_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR34 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR34_PRI_139_M \
                                0xFF000000  // Priority of interrupt 139 

#define CM3_SCS_NVIC_IPR34_PRI_139_S 24
#define CM3_SCS_NVIC_IPR34_PRI_138_M \
                                0x00FF0000  // Priority of interrupt 138 

#define CM3_SCS_NVIC_IPR34_PRI_138_S 16
#define CM3_SCS_NVIC_IPR34_PRI_137_M \
                                0x0000FF00  // Priority of interrupt 137 

#define CM3_SCS_NVIC_IPR34_PRI_137_S 8
#define CM3_SCS_NVIC_IPR34_PRI_136_M \
                                0x000000FF  // Priority of interrupt 136 

#define CM3_SCS_NVIC_IPR34_PRI_136_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR35 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR35_PRI_143_M \
                                0xFF000000  // Priority of interrupt 143 

#define CM3_SCS_NVIC_IPR35_PRI_143_S 24
#define CM3_SCS_NVIC_IPR35_PRI_142_M \
                                0x00FF0000  // Priority of interrupt 142 

#define CM3_SCS_NVIC_IPR35_PRI_142_S 16
#define CM3_SCS_NVIC_IPR35_PRI_141_M \
                                0x0000FF00  // Priority of interrupt 141 

#define CM3_SCS_NVIC_IPR35_PRI_141_S 8
#define CM3_SCS_NVIC_IPR35_PRI_140_M \
                                0x000000FF  // Priority of interrupt 140 

#define CM3_SCS_NVIC_IPR35_PRI_140_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR36 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR36_PRI_147_M \
                                0xFF000000  // Priority of interrupt 147 

#define CM3_SCS_NVIC_IPR36_PRI_147_S 24
#define CM3_SCS_NVIC_IPR36_PRI_146_M \
                                0x00FF0000  // Priority of interrupt 146 

#define CM3_SCS_NVIC_IPR36_PRI_146_S 16
#define CM3_SCS_NVIC_IPR36_PRI_145_M \
                                0x0000FF00  // Priority of interrupt 145 

#define CM3_SCS_NVIC_IPR36_PRI_145_S 8
#define CM3_SCS_NVIC_IPR36_PRI_144_M \
                                0x000000FF  // Priority of interrupt 144 

#define CM3_SCS_NVIC_IPR36_PRI_144_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR37 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR37_PRI_151_M \
                                0xFF000000  // Priority of interrupt 151 

#define CM3_SCS_NVIC_IPR37_PRI_151_S 24
#define CM3_SCS_NVIC_IPR37_PRI_150_M \
                                0x00FF0000  // Priority of interrupt 150 

#define CM3_SCS_NVIC_IPR37_PRI_150_S 16
#define CM3_SCS_NVIC_IPR37_PRI_149_M \
                                0x0000FF00  // Priority of interrupt 149 

#define CM3_SCS_NVIC_IPR37_PRI_149_S 8
#define CM3_SCS_NVIC_IPR37_PRI_148_M \
                                0x000000FF  // Priority of interrupt 148 

#define CM3_SCS_NVIC_IPR37_PRI_148_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR38 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR38_PRI_155_M \
                                0xFF000000  // Priority of interrupt 155 

#define CM3_SCS_NVIC_IPR38_PRI_155_S 24
#define CM3_SCS_NVIC_IPR38_PRI_154_M \
                                0x00FF0000  // Priority of interrupt 154 

#define CM3_SCS_NVIC_IPR38_PRI_154_S 16
#define CM3_SCS_NVIC_IPR38_PRI_153_M \
                                0x0000FF00  // Priority of interrupt 153 

#define CM3_SCS_NVIC_IPR38_PRI_153_S 8
#define CM3_SCS_NVIC_IPR38_PRI_152_M \
                                0x000000FF  // Priority of interrupt 152 

#define CM3_SCS_NVIC_IPR38_PRI_152_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR39 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR39_PRI_159_M \
                                0xFF000000  // Priority of interrupt 159 

#define CM3_SCS_NVIC_IPR39_PRI_159_S 24
#define CM3_SCS_NVIC_IPR39_PRI_158_M \
                                0x00FF0000  // Priority of interrupt 158 

#define CM3_SCS_NVIC_IPR39_PRI_158_S 16
#define CM3_SCS_NVIC_IPR39_PRI_157_M \
                                0x0000FF00  // Priority of interrupt 157 

#define CM3_SCS_NVIC_IPR39_PRI_157_S 8
#define CM3_SCS_NVIC_IPR39_PRI_156_M \
                                0x000000FF  // Priority of interrupt 156 

#define CM3_SCS_NVIC_IPR39_PRI_156_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR40 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR40_PRI_163_M \
                                0xFF000000  // Priority of interrupt 163 

#define CM3_SCS_NVIC_IPR40_PRI_163_S 24
#define CM3_SCS_NVIC_IPR40_PRI_162_M \
                                0x00FF0000  // Priority of interrupt 162 

#define CM3_SCS_NVIC_IPR40_PRI_162_S 16
#define CM3_SCS_NVIC_IPR40_PRI_161_M \
                                0x0000FF00  // Priority of interrupt 161 

#define CM3_SCS_NVIC_IPR40_PRI_161_S 8
#define CM3_SCS_NVIC_IPR40_PRI_160_M \
                                0x000000FF  // Priority of interrupt 160 

#define CM3_SCS_NVIC_IPR40_PRI_160_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR41 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR41_PRI_167_M \
                                0xFF000000  // Priority of interrupt 167 

#define CM3_SCS_NVIC_IPR41_PRI_167_S 24
#define CM3_SCS_NVIC_IPR41_PRI_166_M \
                                0x00FF0000  // Priority of interrupt 166 

#define CM3_SCS_NVIC_IPR41_PRI_166_S 16
#define CM3_SCS_NVIC_IPR41_PRI_165_M \
                                0x0000FF00  // Priority of interrupt 165 

#define CM3_SCS_NVIC_IPR41_PRI_165_S 8
#define CM3_SCS_NVIC_IPR41_PRI_164_M \
                                0x000000FF  // Priority of interrupt 164 

#define CM3_SCS_NVIC_IPR41_PRI_164_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR42 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR42_PRI_171_M \
                                0xFF000000  // Priority of interrupt 171 

#define CM3_SCS_NVIC_IPR42_PRI_171_S 24
#define CM3_SCS_NVIC_IPR42_PRI_170_M \
                                0x00FF0000  // Priority of interrupt 170 

#define CM3_SCS_NVIC_IPR42_PRI_170_S 16
#define CM3_SCS_NVIC_IPR42_PRI_169_M \
                                0x0000FF00  // Priority of interrupt 169 

#define CM3_SCS_NVIC_IPR42_PRI_169_S 8
#define CM3_SCS_NVIC_IPR42_PRI_168_M \
                                0x000000FF  // Priority of interrupt 168 

#define CM3_SCS_NVIC_IPR42_PRI_168_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR43 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR43_PRI_175_M \
                                0xFF000000  // Priority of interrupt 175 

#define CM3_SCS_NVIC_IPR43_PRI_175_S 24
#define CM3_SCS_NVIC_IPR43_PRI_174_M \
                                0x00FF0000  // Priority of interrupt 174 

#define CM3_SCS_NVIC_IPR43_PRI_174_S 16
#define CM3_SCS_NVIC_IPR43_PRI_173_M \
                                0x0000FF00  // Priority of interrupt 173 

#define CM3_SCS_NVIC_IPR43_PRI_173_S 8
#define CM3_SCS_NVIC_IPR43_PRI_172_M \
                                0x000000FF  // Priority of interrupt 172 

#define CM3_SCS_NVIC_IPR43_PRI_172_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR44 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR44_PRI_179_M \
                                0xFF000000  // Priority of interrupt 179 

#define CM3_SCS_NVIC_IPR44_PRI_179_S 24
#define CM3_SCS_NVIC_IPR44_PRI_178_M \
                                0x00FF0000  // Priority of interrupt 178 

#define CM3_SCS_NVIC_IPR44_PRI_178_S 16
#define CM3_SCS_NVIC_IPR44_PRI_177_M \
                                0x0000FF00  // Priority of interrupt 177 

#define CM3_SCS_NVIC_IPR44_PRI_177_S 8
#define CM3_SCS_NVIC_IPR44_PRI_176_M \
                                0x000000FF  // Priority of interrupt 176 

#define CM3_SCS_NVIC_IPR44_PRI_176_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR45 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR45_PRI_183_M \
                                0xFF000000  // Priority of interrupt 183 

#define CM3_SCS_NVIC_IPR45_PRI_183_S 24
#define CM3_SCS_NVIC_IPR45_PRI_182_M \
                                0x00FF0000  // Priority of interrupt 182 

#define CM3_SCS_NVIC_IPR45_PRI_182_S 16
#define CM3_SCS_NVIC_IPR45_PRI_181_M \
                                0x0000FF00  // Priority of interrupt 181 

#define CM3_SCS_NVIC_IPR45_PRI_181_S 8
#define CM3_SCS_NVIC_IPR45_PRI_180_M \
                                0x000000FF  // Priority of interrupt 180 

#define CM3_SCS_NVIC_IPR45_PRI_180_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR46 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR46_PRI_187_M \
                                0xFF000000  // Priority of interrupt 187 

#define CM3_SCS_NVIC_IPR46_PRI_187_S 24
#define CM3_SCS_NVIC_IPR46_PRI_186_M \
                                0x00FF0000  // Priority of interrupt 186 

#define CM3_SCS_NVIC_IPR46_PRI_186_S 16
#define CM3_SCS_NVIC_IPR46_PRI_185_M \
                                0x0000FF00  // Priority of interrupt 185 

#define CM3_SCS_NVIC_IPR46_PRI_185_S 8
#define CM3_SCS_NVIC_IPR46_PRI_184_M \
                                0x000000FF  // Priority of interrupt 184 

#define CM3_SCS_NVIC_IPR46_PRI_184_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR47 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR47_PRI_191_M \
                                0xFF000000  // Priority of interrupt 191 

#define CM3_SCS_NVIC_IPR47_PRI_191_S 24
#define CM3_SCS_NVIC_IPR47_PRI_190_M \
                                0x00FF0000  // Priority of interrupt 190 

#define CM3_SCS_NVIC_IPR47_PRI_190_S 16
#define CM3_SCS_NVIC_IPR47_PRI_189_M \
                                0x0000FF00  // Priority of interrupt 189 

#define CM3_SCS_NVIC_IPR47_PRI_189_S 8
#define CM3_SCS_NVIC_IPR47_PRI_188_M \
                                0x000000FF  // Priority of interrupt 188 

#define CM3_SCS_NVIC_IPR47_PRI_188_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR48 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR48_PRI_195_M \
                                0xFF000000  // Priority of interrupt 195 

#define CM3_SCS_NVIC_IPR48_PRI_195_S 24
#define CM3_SCS_NVIC_IPR48_PRI_194_M \
                                0x00FF0000  // Priority of interrupt 194 

#define CM3_SCS_NVIC_IPR48_PRI_194_S 16
#define CM3_SCS_NVIC_IPR48_PRI_193_M \
                                0x0000FF00  // Priority of interrupt 193 

#define CM3_SCS_NVIC_IPR48_PRI_193_S 8
#define CM3_SCS_NVIC_IPR48_PRI_192_M \
                                0x000000FF  // Priority of interrupt 192 

#define CM3_SCS_NVIC_IPR48_PRI_192_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR49 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR49_PRI_199_M \
                                0xFF000000  // Priority of interrupt 199 

#define CM3_SCS_NVIC_IPR49_PRI_199_S 24
#define CM3_SCS_NVIC_IPR49_PRI_198_M \
                                0x00FF0000  // Priority of interrupt 198 

#define CM3_SCS_NVIC_IPR49_PRI_198_S 16
#define CM3_SCS_NVIC_IPR49_PRI_197_M \
                                0x0000FF00  // Priority of interrupt 197 

#define CM3_SCS_NVIC_IPR49_PRI_197_S 8
#define CM3_SCS_NVIC_IPR49_PRI_196_M \
                                0x000000FF  // Priority of interrupt 196 

#define CM3_SCS_NVIC_IPR49_PRI_196_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR50 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR50_PRI_203_M \
                                0xFF000000  // Priority of interrupt 203 

#define CM3_SCS_NVIC_IPR50_PRI_203_S 24
#define CM3_SCS_NVIC_IPR50_PRI_202_M \
                                0x00FF0000  // Priority of interrupt 202 

#define CM3_SCS_NVIC_IPR50_PRI_202_S 16
#define CM3_SCS_NVIC_IPR50_PRI_201_M \
                                0x0000FF00  // Priority of interrupt 201 

#define CM3_SCS_NVIC_IPR50_PRI_201_S 8
#define CM3_SCS_NVIC_IPR50_PRI_200_M \
                                0x000000FF  // Priority of interrupt 200 

#define CM3_SCS_NVIC_IPR50_PRI_200_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR51 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR51_PRI_207_M \
                                0xFF000000  // Priority of interrupt 207 

#define CM3_SCS_NVIC_IPR51_PRI_207_S 24
#define CM3_SCS_NVIC_IPR51_PRI_206_M \
                                0x00FF0000  // Priority of interrupt 206 

#define CM3_SCS_NVIC_IPR51_PRI_206_S 16
#define CM3_SCS_NVIC_IPR51_PRI_205_M \
                                0x0000FF00  // Priority of interrupt 205 

#define CM3_SCS_NVIC_IPR51_PRI_205_S 8
#define CM3_SCS_NVIC_IPR51_PRI_204_M \
                                0x000000FF  // Priority of interrupt 204 

#define CM3_SCS_NVIC_IPR51_PRI_204_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR52 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR52_PRI_211_M \
                                0xFF000000  // Priority of interrupt 211 

#define CM3_SCS_NVIC_IPR52_PRI_211_S 24
#define CM3_SCS_NVIC_IPR52_PRI_210_M \
                                0x00FF0000  // Priority of interrupt 210 

#define CM3_SCS_NVIC_IPR52_PRI_210_S 16
#define CM3_SCS_NVIC_IPR52_PRI_209_M \
                                0x0000FF00  // Priority of interrupt 209 

#define CM3_SCS_NVIC_IPR52_PRI_209_S 8
#define CM3_SCS_NVIC_IPR52_PRI_208_M \
                                0x000000FF  // Priority of interrupt 208 

#define CM3_SCS_NVIC_IPR52_PRI_208_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR53 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR53_PRI_215_M \
                                0xFF000000  // Priority of interrupt 215 

#define CM3_SCS_NVIC_IPR53_PRI_215_S 24
#define CM3_SCS_NVIC_IPR53_PRI_214_M \
                                0x00FF0000  // Priority of interrupt 214 

#define CM3_SCS_NVIC_IPR53_PRI_214_S 16
#define CM3_SCS_NVIC_IPR53_PRI_213_M \
                                0x0000FF00  // Priority of interrupt 213 

#define CM3_SCS_NVIC_IPR53_PRI_213_S 8
#define CM3_SCS_NVIC_IPR53_PRI_212_M \
                                0x000000FF  // Priority of interrupt 212 

#define CM3_SCS_NVIC_IPR53_PRI_212_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR54 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR54_PRI_219_M \
                                0xFF000000  // Priority of interrupt 219 

#define CM3_SCS_NVIC_IPR54_PRI_219_S 24
#define CM3_SCS_NVIC_IPR54_PRI_218_M \
                                0x00FF0000  // Priority of interrupt 218 

#define CM3_SCS_NVIC_IPR54_PRI_218_S 16
#define CM3_SCS_NVIC_IPR54_PRI_217_M \
                                0x0000FF00  // Priority of interrupt 217 

#define CM3_SCS_NVIC_IPR54_PRI_217_S 8
#define CM3_SCS_NVIC_IPR54_PRI_216_M \
                                0x000000FF  // Priority of interrupt 216 

#define CM3_SCS_NVIC_IPR54_PRI_216_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR55 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR55_PRI_223_M \
                                0xFF000000  // Priority of interrupt 223 

#define CM3_SCS_NVIC_IPR55_PRI_223_S 24
#define CM3_SCS_NVIC_IPR55_PRI_222_M \
                                0x00FF0000  // Priority of interrupt 222 

#define CM3_SCS_NVIC_IPR55_PRI_222_S 16
#define CM3_SCS_NVIC_IPR55_PRI_221_M \
                                0x0000FF00  // Priority of interrupt 221 

#define CM3_SCS_NVIC_IPR55_PRI_221_S 8
#define CM3_SCS_NVIC_IPR55_PRI_220_M \
                                0x000000FF  // Priority of interrupt 220 

#define CM3_SCS_NVIC_IPR55_PRI_220_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR56 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR56_PRI_227_M \
                                0xFF000000  // Priority of interrupt 227 

#define CM3_SCS_NVIC_IPR56_PRI_227_S 24
#define CM3_SCS_NVIC_IPR56_PRI_226_M \
                                0x00FF0000  // Priority of interrupt 226 

#define CM3_SCS_NVIC_IPR56_PRI_226_S 16
#define CM3_SCS_NVIC_IPR56_PRI_225_M \
                                0x0000FF00  // Priority of interrupt 225 

#define CM3_SCS_NVIC_IPR56_PRI_225_S 8
#define CM3_SCS_NVIC_IPR56_PRI_224_M \
                                0x000000FF  // Priority of interrupt 224 

#define CM3_SCS_NVIC_IPR56_PRI_224_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR57 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR57_PRI_231_M \
                                0xFF000000  // Priority of interrupt 231 

#define CM3_SCS_NVIC_IPR57_PRI_231_S 24
#define CM3_SCS_NVIC_IPR57_PRI_230_M \
                                0x00FF0000  // Priority of interrupt 230 

#define CM3_SCS_NVIC_IPR57_PRI_230_S 16
#define CM3_SCS_NVIC_IPR57_PRI_229_M \
                                0x0000FF00  // Priority of interrupt 229 

#define CM3_SCS_NVIC_IPR57_PRI_229_S 8
#define CM3_SCS_NVIC_IPR57_PRI_228_M \
                                0x000000FF  // Priority of interrupt 228 

#define CM3_SCS_NVIC_IPR57_PRI_228_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR58 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR58_PRI_235_M \
                                0xFF000000  // Priority of interrupt 235 

#define CM3_SCS_NVIC_IPR58_PRI_235_S 24
#define CM3_SCS_NVIC_IPR58_PRI_234_M \
                                0x00FF0000  // Priority of interrupt 234 

#define CM3_SCS_NVIC_IPR58_PRI_234_S 16
#define CM3_SCS_NVIC_IPR58_PRI_233_M \
                                0x0000FF00  // Priority of interrupt 233 

#define CM3_SCS_NVIC_IPR58_PRI_233_S 8
#define CM3_SCS_NVIC_IPR58_PRI_232_M \
                                0x000000FF  // Priority of interrupt 232 

#define CM3_SCS_NVIC_IPR58_PRI_232_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_NVIC_IPR59 register.
//
//*****************************************************************************
#define CM3_SCS_NVIC_IPR59_PRI_239_M \
                                0xFF000000  // Priority of interrupt 239 

#define CM3_SCS_NVIC_IPR59_PRI_239_S 24
#define CM3_SCS_NVIC_IPR59_PRI_238_M \
                                0x00FF0000  // Priority of interrupt 238 

#define CM3_SCS_NVIC_IPR59_PRI_238_S 16
#define CM3_SCS_NVIC_IPR59_PRI_237_M \
                                0x0000FF00  // Priority of interrupt 237 

#define CM3_SCS_NVIC_IPR59_PRI_237_S 8
#define CM3_SCS_NVIC_IPR59_PRI_236_M \
                                0x000000FF  // Priority of interrupt 236 

#define CM3_SCS_NVIC_IPR59_PRI_236_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_CPUID register.
//
//*****************************************************************************
#define CM3_SCS_CPUID_IMPLEMENTER_M \
                                0xFF000000  // Implementor code. 

#define CM3_SCS_CPUID_IMPLEMENTER_S 24
#define CM3_SCS_CPUID_VARIANT_M 0x00F00000  // Implementation defined variant 
                                            // number. 
#define CM3_SCS_CPUID_VARIANT_S 20
#define CM3_SCS_CPUID_CONSTANT_M \
                                0x000F0000  // Reads as 0xC 

#define CM3_SCS_CPUID_CONSTANT_S 16
#define CM3_SCS_CPUID_PARTNO_M  0x0000FFF0  // Number of processor within 
                                            // family. 
#define CM3_SCS_CPUID_PARTNO_S  4
#define CM3_SCS_CPUID_REVISION_M \
                                0x0000000F  // Implementation defined revision 
                                            // number. 

#define CM3_SCS_CPUID_REVISION_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_ICSR register.
//
//*****************************************************************************
#define CM3_SCS_ICSR_NMIPENDSET 0x80000000  // Set pending NMI bit. NMIPENDSET 
                                            // pends and activates an NMI. 
                                            // Because NMI is the 
                                            // highest-priority interrupt, it 
                                            // takes effect as soon as it 
                                            // registers. 0x0: Do not set 
                                            // pending NMI 0x1: Set pending NMI 
#define CM3_SCS_ICSR_NMIPENDSET_M \
                                0x80000000
#define CM3_SCS_ICSR_NMIPENDSET_S 31
#define CM3_SCS_ICSR_PENDSVSET  0x10000000  // Set pending pendSV bit. 0x0: Do 
                                            // not set pending pendSV 0x1: Set 
                                            // pending PendSV 
#define CM3_SCS_ICSR_PENDSVSET_M \
                                0x10000000
#define CM3_SCS_ICSR_PENDSVSET_S 28
#define CM3_SCS_ICSR_PENDSVCLR  0x08000000  // Clear pending pendSV bit 0x0: 
                                            // Do not clear pending pendSV 0x1: 
                                            // Clear pending pendSV 
#define CM3_SCS_ICSR_PENDSVCLR_M \
                                0x08000000
#define CM3_SCS_ICSR_PENDSVCLR_S 27
#define CM3_SCS_ICSR_PENDSTSET  0x04000000  // Set a pending SysTick bit. 0x0: 
                                            // Do not set pending SysTick 0x1: 
                                            // Set pending SysTick 
#define CM3_SCS_ICSR_PENDSTSET_M \
                                0x04000000
#define CM3_SCS_ICSR_PENDSTSET_S 26
#define CM3_SCS_ICSR_PENDSTCLR  0x02000000  // Clear pending SysTick bit 0x0: 
                                            // Do not clear pending SysTick 
                                            // 0x1: Clear pending SysTick 
#define CM3_SCS_ICSR_PENDSTCLR_M \
                                0x02000000
#define CM3_SCS_ICSR_PENDSTCLR_S 25
#define CM3_SCS_ICSR_ISRPREEMPT 0x00800000  // You must only use this at debug 
                                            // time. It indicates that a 
                                            // pending interrupt is to be taken 
                                            // in the next running cycle. If 
                                            // C_MASKINTS is clear in the Debug 
                                            // Halting Control and Status 
                                            // Register, the interrupt is 
                                            // serviced. 0x0: A pending 
                                            // exception is not serviced. 0x1: 
                                            // A pending exception is serviced 
                                            // on exit from the debug halt 
                                            // state 
#define CM3_SCS_ICSR_ISRPREEMPT_M \
                                0x00800000
#define CM3_SCS_ICSR_ISRPREEMPT_S 23
#define CM3_SCS_ICSR_ISRPENDING 0x00400000  // Interrupt pending flag. 
                                            // Excludes NMI and faults. 0x0: 
                                            // Interrupt not pending 0x1: 
                                            // Interrupt pending 
#define CM3_SCS_ICSR_ISRPENDING_M \
                                0x00400000
#define CM3_SCS_ICSR_ISRPENDING_S 22
#define CM3_SCS_ICSR_VECTPENDING_M \
                                0x0003F000  // Pending ISR number field. 
                                            // VECTPENDING contains the 
                                            // interrupt number of the highest 
                                            // priority pending ISR. 

#define CM3_SCS_ICSR_VECTPENDING_S 12
#define CM3_SCS_ICSR_RETTOBASE  0x00000800  // This bit is 1 when the set of 
                                            // all active exceptions minus the 
                                            // IPSR_current_exception yields 
                                            // the empty set. 
#define CM3_SCS_ICSR_RETTOBASE_M \
                                0x00000800
#define CM3_SCS_ICSR_RETTOBASE_S 11
#define CM3_SCS_ICSR_VECTACTIVE_M \
                                0x000001FF  // Active ISR number field. Reset 
                                            // clears the VECTACTIVE field. 

#define CM3_SCS_ICSR_VECTACTIVE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_VTOR register.
//
//*****************************************************************************
#define CM3_SCS_VTOR_TBLBASE    0x20000000  // Table base is in Code (0) or 
                                            // RAM (1). 
#define CM3_SCS_VTOR_TBLBASE_M  0x20000000
#define CM3_SCS_VTOR_TBLBASE_S  29
#define CM3_SCS_VTOR_TBLOFF_M   0x1FFFFF80  // Vector table base offset field. 
                                            // Contains the offset of the table 
                                            // base from the bottom of the SRAM 
                                            // or CODE space. 
#define CM3_SCS_VTOR_TBLOFF_S   7
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_AIRCR register.
//
//*****************************************************************************
#define CM3_SCS_AIRCR_VECTKEY_M 0xFFFF0000  // Register key. Writing to this 
                                            // register requires 0x05FA in the 
                                            // VECTKEY field. Otherwise the 
                                            // write value is ignored. Read 
                                            // always returns 0xFA05. 
#define CM3_SCS_AIRCR_VECTKEY_S 16
#define CM3_SCS_AIRCR_ENDIANESS 0x00008000  // Data endianness bit. ENDIANNESS 
                                            // is sampled from the BIGEND input 
                                            // port during reset. You cannot 
                                            // change ENDIANNESS outside of 
                                            // reset. 0x0: Little endian 0x1: 
                                            // Big endian 
#define CM3_SCS_AIRCR_ENDIANESS_M \
                                0x00008000
#define CM3_SCS_AIRCR_ENDIANESS_S 15
#define CM3_SCS_AIRCR_PRIGROUP_M \
                                0x00000700  // Interrupt priority grouping 
                                            // field. The PRIGROUP field is a 
                                            // binary point position indicator 
                                            // for creating subpriorities for 
                                            // exceptions that share the same 
                                            // pre-emption level. It divides 
                                            // the PRI_n field in the Interrupt 
                                            // Priority Register into a 
                                            // pre-emption level and a 
                                            // subpriority level. The binary 
                                            // point is a left-of value. This 
                                            // means that the PRIGROUP value 
                                            // represents a point starting at 
                                            // the left of the Least 
                                            // Significant Bit (LSB). This is 
                                            // bit [0] of 7:0. The lowest value 
                                            // might not be 0 depending on the 
                                            // number of bits allocated for 
                                            // priorities, and implementation 
                                            // choices 

#define CM3_SCS_AIRCR_PRIGROUP_S 8
#define CM3_SCS_AIRCR_SYSRESETREQ \
                                0x00000004  // Causes a signal to be asserted 
                                            // to the outer system that 
                                            // indicates a reset is requested. 
                                            // Intended to force a large system 
                                            // reset of all major components 
                                            // except for debug. Setting this 
                                            // bit does not prevent Halting 
                                            // Debug from running. 

#define CM3_SCS_AIRCR_SYSRESETREQ_M \
                                0x00000004
#define CM3_SCS_AIRCR_SYSRESETREQ_S 2
#define CM3_SCS_AIRCR_VECTCLRACTIVE \
                                0x00000002  // Clears all active state 
                                            // information for active NMI, 
                                            // fault, and interrupts. It is the 
                                            // responsibility of the 
                                            // application to reinitialize the 
                                            // stack. The VECTCLRACTIVE bit is 
                                            // for returning to a known state 
                                            // during debug. The VECTCLRACTIVE 
                                            // bit self-clears. IPSR is not 
                                            // cleared by this operation. So, 
                                            // if used by an application, it 
                                            // must only be used at the base 
                                            // level of activation, or within a 
                                            // system handler whose active bit 
                                            // can be set. 

#define CM3_SCS_AIRCR_VECTCLRACTIVE_M \
                                0x00000002
#define CM3_SCS_AIRCR_VECTCLRACTIVE_S 1
#define CM3_SCS_AIRCR_VECTRESET 0x00000001  // System Reset bit. Resets the 
                                            // system, with the exception of 
                                            // debug components. The VECTRESET 
                                            // bit self-clears. Reset clears 
                                            // the VECTRESET bit. For 
                                            // debugging, only write this bit 
                                            // when the core is halted. 
#define CM3_SCS_AIRCR_VECTRESET_M \
                                0x00000001
#define CM3_SCS_AIRCR_VECTRESET_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_SCR register.
//
//*****************************************************************************
#define CM3_SCS_SCR_SEVONPEND   0x00000010  // When enabled, this causes WFE 
                                            // to wake up when an interrupt 
                                            // moves from inactive to pended. 
                                            // Otherwise, WFE only wakes up 
                                            // from an event signal, external 
                                            // and SEV instruction generated. 
                                            // The event input, RXEV, is 
                                            // registered even when not waiting 
                                            // for an event, and so effects the 
                                            // next WFE. 
#define CM3_SCS_SCR_SEVONPEND_M 0x00000010
#define CM3_SCS_SCR_SEVONPEND_S 4
#define CM3_SCS_SCR_SLEEPDEEP   0x00000004  // Sleep deep bit. 0x0: Not OK to 
                                            // turn off system clock 0x1: 
                                            // Indicates to the system that 
                                            // Cortex-M3 clock can be stopped. 
                                            // Setting this bit causes the 
                                            // SLEEPDEEP port to be asserted 
                                            // when the processor can be 
                                            // stopped. 
#define CM3_SCS_SCR_SLEEPDEEP_M 0x00000004
#define CM3_SCS_SCR_SLEEPDEEP_S 2
#define CM3_SCS_SCR_SLEEPONEXIT 0x00000002  // Sleep on exit when returning 
                                            // from Handler mode to Thread 
                                            // mode. Enables interrupt driven 
                                            // applications to avoid returning 
                                            // to empty main application. 0x0: 
                                            // Do not sleep when returning to 
                                            // thread mode 0x1: Sleep on ISR 
                                            // exit 
#define CM3_SCS_SCR_SLEEPONEXIT_M \
                                0x00000002
#define CM3_SCS_SCR_SLEEPONEXIT_S 1
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_CCR register.
//
//*****************************************************************************
#define CM3_SCS_CCR_STKALIGN    0x00000200  // Stack alignment bit. 0x0: Only 
                                            // 4-byte alignment is guaranteed 
                                            // for the SP used prior to the 
                                            // exception on exception entry. 
                                            // 0x1: On exception entry, the SP 
                                            // used prior to the exception is 
                                            // adjusted to be 8-byte aligned 
                                            // and the context to restore it is 
                                            // saved. The SP is restored on the 
                                            // associated exception return. 
#define CM3_SCS_CCR_STKALIGN_M  0x00000200
#define CM3_SCS_CCR_STKALIGN_S  9
#define CM3_SCS_CCR_BFHFNMIGN   0x00000100  // When enabled, this causes 
                                            // handlers running at priority -1 
                                            // and -2 (Hard Fault, NMI, and 
                                            // FAULTMASK escalated handlers) to 
                                            // ignore Data Bus faults caused by 
                                            // load and store instructions. 
                                            // When disabled, these bus faults 
                                            // cause a lock-up. You must only 
                                            // use this enable with extreme 
                                            // caution. All data bus faults are 
                                            // ignored therefore you must only 
                                            // use it when the handler and its 
                                            // data are in absolutely safe 
                                            // memory. Its normal use is to 
                                            // probe system devices and bridges 
                                            // to detect control path problems 
                                            // and fix them. 
#define CM3_SCS_CCR_BFHFNMIGN_M 0x00000100
#define CM3_SCS_CCR_BFHFNMIGN_S 8
#define CM3_SCS_CCR_DIV_0_TRP   0x00000010  // Trap on Divide by 0. This 
                                            // enables faulting/halting when an 
                                            // attempt is made to divide by 0. 
                                            // The relevant Usage Fault Status 
                                            // Register bit is DIVBYZERO. 
#define CM3_SCS_CCR_DIV_0_TRP_M 0x00000010
#define CM3_SCS_CCR_DIV_0_TRP_S 4
#define CM3_SCS_CCR_UNALIGN_TRP 0x00000008  // Trap for unaligned access. This 
                                            // enables faulting/halting on any 
                                            // unaligned half or full word 
                                            // access. Unaligned load-store 
                                            // multiples always fault. The 
                                            // relevant Usage Fault Status 
                                            // Register bit is UNALIGNED. 
#define CM3_SCS_CCR_UNALIGN_TRP_M \
                                0x00000008
#define CM3_SCS_CCR_UNALIGN_TRP_S 3
#define CM3_SCS_CCR_USERSETMPEND \
                                0x00000002  // If written as 1, enables user 
                                            // code to write the Software 
                                            // Trigger Interrupt register to 
                                            // trigger (pend) a Main exception, 
                                            // which is one associated with the 
                                            // Main stack pointer. 

#define CM3_SCS_CCR_USERSETMPEND_M \
                                0x00000002
#define CM3_SCS_CCR_USERSETMPEND_S 1
#define CM3_SCS_CCR_NONBASETHREDENA \
                                0x00000001  // When 0, default, It is only 
                                            // possible to enter Thread mode 
                                            // when returning from the last 
                                            // exception. When set to 1, Thread 
                                            // mode can be entered from any 
                                            // level in Handler mode by 
                                            // controlled return value. 

#define CM3_SCS_CCR_NONBASETHREDENA_M \
                                0x00000001
#define CM3_SCS_CCR_NONBASETHREDENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_SHPR1 register.
//
//*****************************************************************************
#define CM3_SCS_SHPR1_PRI_7_M   0xFF000000  // Priority of system handler 7. 
#define CM3_SCS_SHPR1_PRI_7_S   24
#define CM3_SCS_SHPR1_PRI_6_M   0x00FF0000  // Priority of system handler 6. 
#define CM3_SCS_SHPR1_PRI_6_S   16
#define CM3_SCS_SHPR1_PRI_5_M   0x0000FF00  // Priority of system handler 5. 
#define CM3_SCS_SHPR1_PRI_5_S   8
#define CM3_SCS_SHPR1_PRI_4_M   0x000000FF  // Priority of system handler 4. 
#define CM3_SCS_SHPR1_PRI_4_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_SHPR2 register.
//
//*****************************************************************************
#define CM3_SCS_SHPR2_PRI_11_M  0xFF000000  // Priority of system handler 11. 
#define CM3_SCS_SHPR2_PRI_11_S  24
#define CM3_SCS_SHPR2_PRI_10_M  0x00FF0000  // Priority of system handler 10. 
#define CM3_SCS_SHPR2_PRI_10_S  16
#define CM3_SCS_SHPR2_PRI_9_M   0x0000FF00  // Priority of system handler 9. 
#define CM3_SCS_SHPR2_PRI_9_S   8
#define CM3_SCS_SHPR2_PRI_8_M   0x000000FF  // Priority of system handler 8. 
#define CM3_SCS_SHPR2_PRI_8_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_SHPR3 register.
//
//*****************************************************************************
#define CM3_SCS_SHPR3_PRI_15_M  0xFF000000  // Priority of system handler 15. 
#define CM3_SCS_SHPR3_PRI_15_S  24
#define CM3_SCS_SHPR3_PRI_14_M  0x00FF0000  // Priority of system handler 14. 
#define CM3_SCS_SHPR3_PRI_14_S  16
#define CM3_SCS_SHPR3_PRI_13_M  0x0000FF00  // Priority of system handler 13. 
#define CM3_SCS_SHPR3_PRI_13_S  8
#define CM3_SCS_SHPR3_PRI_12_M  0x000000FF  // Priority of system handler 12. 
#define CM3_SCS_SHPR3_PRI_12_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_SHCSR register.
//
//*****************************************************************************
#define CM3_SCS_SHCSR_USGFAULTENA \
                                0x00040000  // Usage fault system handler 
                                            // enable 0x0: Disabled 0x1: 
                                            // Enabled 

#define CM3_SCS_SHCSR_USGFAULTENA_M \
                                0x00040000
#define CM3_SCS_SHCSR_USGFAULTENA_S 18
#define CM3_SCS_SHCSR_BUSFAULTENA \
                                0x00020000  // Bus fault system handler enable 
                                            // 0x0: Disabled 0x1: Enabled 

#define CM3_SCS_SHCSR_BUSFAULTENA_M \
                                0x00020000
#define CM3_SCS_SHCSR_BUSFAULTENA_S 17
#define CM3_SCS_SHCSR_MEMFAULTENA \
                                0x00010000  // MemManage fault system handler 
                                            // enable 0x0: Disabled 0x1: 
                                            // Enabled 

#define CM3_SCS_SHCSR_MEMFAULTENA_M \
                                0x00010000
#define CM3_SCS_SHCSR_MEMFAULTENA_S 16
#define CM3_SCS_SHCSR_SVCALLPENDED \
                                0x00008000  // SVCall pended flag. 0x0: Not 
                                            // pended 0x1: Pended 

#define CM3_SCS_SHCSR_SVCALLPENDED_M \
                                0x00008000
#define CM3_SCS_SHCSR_SVCALLPENDED_S 15
#define CM3_SCS_SHCSR_BUSFAULTPENDED \
                                0x00004000  // BusFault pended flag. 0x0: Not 
                                            // pended 0x1: Pended 

#define CM3_SCS_SHCSR_BUSFAULTPENDED_M \
                                0x00004000
#define CM3_SCS_SHCSR_BUSFAULTPENDED_S 14
#define CM3_SCS_SHCSR_MEMFAULTPENDED \
                                0x00002000  // MemManage pended flag. 0x0: Not 
                                            // pended 0x1: Pended 

#define CM3_SCS_SHCSR_MEMFAULTPENDED_M \
                                0x00002000
#define CM3_SCS_SHCSR_MEMFAULTPENDED_S 13
#define CM3_SCS_SHCSR_USGFAULTPENDED \
                                0x00001000  // usage fault pended flag. 0x0: 
                                            // Not pended 0x1: Pended 

#define CM3_SCS_SHCSR_USGFAULTPENDED_M \
                                0x00001000
#define CM3_SCS_SHCSR_USGFAULTPENDED_S 12
#define CM3_SCS_SHCSR_SYSTICKACT \
                                0x00000800  // SysTick active flag. 0x0: Not 
                                            // active 0x1: Active 

#define CM3_SCS_SHCSR_SYSTICKACT_M \
                                0x00000800
#define CM3_SCS_SHCSR_SYSTICKACT_S 11
#define CM3_SCS_SHCSR_PENDSVACT 0x00000400  // PendSV active flag. 0x0: Not 
                                            // active 0x1: Active 
#define CM3_SCS_SHCSR_PENDSVACT_M \
                                0x00000400
#define CM3_SCS_SHCSR_PENDSVACT_S 10
#define CM3_SCS_SHCSR_MONITORACT \
                                0x00000100  // the Monitor active flag. 0x0: 
                                            // Not active 0x1: Active 

#define CM3_SCS_SHCSR_MONITORACT_M \
                                0x00000100
#define CM3_SCS_SHCSR_MONITORACT_S 8
#define CM3_SCS_SHCSR_SVCALLACT 0x00000080  // SVCall active flag. 0x0: Not 
                                            // active 0x1: Active 
#define CM3_SCS_SHCSR_SVCALLACT_M \
                                0x00000080
#define CM3_SCS_SHCSR_SVCALLACT_S 7
#define CM3_SCS_SHCSR_USGFAULTACT \
                                0x00000008  // UsageFault active flag. 0x0: 
                                            // Not active 0x1: Active 

#define CM3_SCS_SHCSR_USGFAULTACT_M \
                                0x00000008
#define CM3_SCS_SHCSR_USGFAULTACT_S 3
#define CM3_SCS_SHCSR_BUSFAULTACT \
                                0x00000002  // BusFault active flag. 0x0: Not 
                                            // active 0x1: Active 

#define CM3_SCS_SHCSR_BUSFAULTACT_M \
                                0x00000002
#define CM3_SCS_SHCSR_BUSFAULTACT_S 1
#define CM3_SCS_SHCSR_MEMFAULTACT \
                                0x00000001  // MemManage active flag. 0x0: Not 
                                            // active 0x1: Active 

#define CM3_SCS_SHCSR_MEMFAULTACT_M \
                                0x00000001
#define CM3_SCS_SHCSR_MEMFAULTACT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_CFSR register.
//
//*****************************************************************************
#define CM3_SCS_CFSR_DIVBYZERO  0x02000000  // When DIV_0_TRP (see 
                                            // Configuration Control Register 
                                            // on page 8-26) is enabled and an 
                                            // SDIV or UDIV instruction is used 
                                            // with a divisor of 0, this fault 
                                            // occurs The instruction is 
                                            // executed and the return PC 
                                            // points to it. If DIV_0_TRP is 
                                            // not set, then the divide returns 
                                            // a quotient of 0. 
#define CM3_SCS_CFSR_DIVBYZERO_M \
                                0x02000000
#define CM3_SCS_CFSR_DIVBYZERO_S 25
#define CM3_SCS_CFSR_UNALIGNED  0x01000000  // When UNALIGN_TRP is enabled 
                                            // (see Configuration Control 
                                            // Register on page 8-26), and 
                                            // there is an attempt to make an 
                                            // unaligned memory access, then 
                                            // this fault occurs. Unaligned 
                                            // LDM/STM/LDRD/STRD instructions 
                                            // always fault irrespective of the 
                                            // setting of UNALIGN_TRP. 
#define CM3_SCS_CFSR_UNALIGNED_M \
                                0x01000000
#define CM3_SCS_CFSR_UNALIGNED_S 24
#define CM3_SCS_CFSR_NOCP       0x00080000  // Attempt to use a coprocessor 
                                            // instruction. The processor does 
                                            // not support coprocessor 
                                            // instructions. 
#define CM3_SCS_CFSR_NOCP_M     0x00080000
#define CM3_SCS_CFSR_NOCP_S     19
#define CM3_SCS_CFSR_INVPC      0x00040000  // Attempt to load EXC_RETURN into 
                                            // PC illegally. Invalid 
                                            // instruction, invalid context, 
                                            // invalid value. The return PC 
                                            // points to the instruction that 
                                            // tried to set the PC. 
#define CM3_SCS_CFSR_INVPC_M    0x00040000
#define CM3_SCS_CFSR_INVPC_S    18
#define CM3_SCS_CFSR_INVSTATE   0x00020000  // Invalid combination of EPSR and 
                                            // instruction, for reasons other 
                                            // than UNDEFINED instruction. 
                                            // Return PC points to faulting 
                                            // instruction, with the invalid 
                                            // state. 
#define CM3_SCS_CFSR_INVSTATE_M 0x00020000
#define CM3_SCS_CFSR_INVSTATE_S 17
#define CM3_SCS_CFSR_UNDEFINSTR 0x00010000  // The UNDEFINSTR flag is set when 
                                            // the processor attempts to 
                                            // execute an undefined 
                                            // instruction. This is an 
                                            // instruction that the processor 
                                            // cannot decode. The return PC 
                                            // points to the undefined 
                                            // instruction. 
#define CM3_SCS_CFSR_UNDEFINSTR_M \
                                0x00010000
#define CM3_SCS_CFSR_UNDEFINSTR_S 16
#define CM3_SCS_CFSR_BFARVALID  0x00008000  // This bit is set if the Bus 
                                            // Fault Address Register (BFAR) 
                                            // contains a valid address. This 
                                            // is true after a bus fault where 
                                            // the address is known. Other 
                                            // faults can clear this bit, such 
                                            // as a Mem Manage fault occurring 
                                            // later. If a Bus fault occurs 
                                            // that is escalated to a Hard 
                                            // Fault because of priority, the 
                                            // Hard Fault handler must clear 
                                            // this bit. This prevents problems 
                                            // if returning to a stacked active 
                                            // Bus fault handler whose BFAR 
                                            // value has been overwritten. 
#define CM3_SCS_CFSR_BFARVALID_M \
                                0x00008000
#define CM3_SCS_CFSR_BFARVALID_S 15
#define CM3_SCS_CFSR_STKERR     0x00001000  // Stacking from exception has 
                                            // caused one or more bus faults. 
                                            // The SP is still adjusted and the 
                                            // values in the context area on 
                                            // the stack might be incorrect. 
                                            // The BFAR is not written. 
#define CM3_SCS_CFSR_STKERR_M   0x00001000
#define CM3_SCS_CFSR_STKERR_S   12
#define CM3_SCS_CFSR_UNSTKERR   0x00000800  // Unstack from exception return 
                                            // has caused one or more bus 
                                            // faults. This is chained to the 
                                            // handler, so that the original 
                                            // return stack is still present. 
                                            // SP is not adjusted from failing 
                                            // return and new save is not 
                                            // performed. The BFAR is not 
                                            // written. 
#define CM3_SCS_CFSR_UNSTKERR_M 0x00000800
#define CM3_SCS_CFSR_UNSTKERR_S 11
#define CM3_SCS_CFSR_IMPRECISERR \
                                0x00000400  // Imprecise data bus error. It is 
                                            // a BusFault, but the Return PC is 
                                            // not related to the causing 
                                            // instruction. This is not a 
                                            // synchronous fault. So, if 
                                            // detected when the priority of 
                                            // the current activation is higher 
                                            // than the Bus Fault, it only 
                                            // pends. Bus fault activates when 
                                            // returning to a lower priority 
                                            // activation. If a precise fault 
                                            // occurs before returning to a 
                                            // lower priority exception, the 
                                            // handler detects both IMPRECISERR 
                                            // set and one of the precise fault 
                                            // status bits set at the same 
                                            // time. The BFAR is not written. 

#define CM3_SCS_CFSR_IMPRECISERR_M \
                                0x00000400
#define CM3_SCS_CFSR_IMPRECISERR_S 10
#define CM3_SCS_CFSR_PRECISERR  0x00000200  // Precise data bus error return. 
#define CM3_SCS_CFSR_PRECISERR_M \
                                0x00000200
#define CM3_SCS_CFSR_PRECISERR_S 9
#define CM3_SCS_CFSR_IBUSERR    0x00000100  // Instruction bus error flag. The 
                                            // IBUSERR flag is set by a 
                                            // prefetch error. The fault stops 
                                            // on the instruction, so if the 
                                            // error occurs under a branch 
                                            // shadow, no fault occurs. The 
                                            // BFAR is not written. 
#define CM3_SCS_CFSR_IBUSERR_M  0x00000100
#define CM3_SCS_CFSR_IBUSERR_S  8
#define CM3_SCS_CFSR_MMARVALID  0x00000080  // Memory Manage Address Register 
                                            // (MMAR) address valid flag. A 
                                            // later-arriving fault, such as a 
                                            // bus fault, can clear a memory 
                                            // manage fault.. If a MemManage 
                                            // fault occurs that is escalated 
                                            // to a Hard Fault because of 
                                            // priority, the Hard Fault handler 
                                            // must clear this bit. This 
                                            // prevents problems on return to a 
                                            // stacked active MemManage handler 
                                            // whose MMAR value has been 
                                            // overwritten. 
#define CM3_SCS_CFSR_MMARVALID_M \
                                0x00000080
#define CM3_SCS_CFSR_MMARVALID_S 7
#define CM3_SCS_CFSR_MSTKERR    0x00000010  // Stacking from exception has 
                                            // caused one or more access 
                                            // violations. The SP is still 
                                            // adjusted and the values in the 
                                            // context area on the stack might 
                                            // be incorrect. The MMAR is not 
                                            // written. 
#define CM3_SCS_CFSR_MSTKERR_M  0x00000010
#define CM3_SCS_CFSR_MSTKERR_S  4
#define CM3_SCS_CFSR_MUNSTKERR  0x00000008  // Unstack from exception return 
                                            // has caused one or more access 
                                            // violations. This is chained to 
                                            // the handler, so that the 
                                            // original return stack is still 
                                            // present. SP is not adjusted from 
                                            // failing return and new save is 
                                            // not performed. The MMAR is not 
                                            // written. 
#define CM3_SCS_CFSR_MUNSTKERR_M \
                                0x00000008
#define CM3_SCS_CFSR_MUNSTKERR_S 3
#define CM3_SCS_CFSR_DACCVIOL   0x00000002  // Data access violation flag. 
                                            // Attempting to load or store at a 
                                            // location that does not permit 
                                            // the operation sets the DACCVIOL 
                                            // flag. The return PC points to 
                                            // the faulting instruction. This 
                                            // error loads MMAR with the 
                                            // address of the attempted access. 
#define CM3_SCS_CFSR_DACCVIOL_M 0x00000002
#define CM3_SCS_CFSR_DACCVIOL_S 1
#define CM3_SCS_CFSR_IACCVIOL   0x00000001  // Instruction access violation 
                                            // flag. Attempting to fetch an 
                                            // instruction from a location that 
                                            // does not permit execution sets 
                                            // the IACCVIOL flag. This occurs 
                                            // on any access to an XN region, 
                                            // even when the MPU is disabled or 
                                            // not present. The return PC 
                                            // points to the faulting 
                                            // instruction. The MMAR is not 
                                            // written. 
#define CM3_SCS_CFSR_IACCVIOL_M 0x00000001
#define CM3_SCS_CFSR_IACCVIOL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_HFSR register.
//
//*****************************************************************************
#define CM3_SCS_HFSR_DEBUGEVT   0x80000000  // This bit is set if there is a 
                                            // fault related to debug. This is 
                                            // only possible when halting debug 
                                            // is not enabled. For monitor 
                                            // enabled debug, it only happens 
                                            // for BKPT when the current 
                                            // priority is higher than the 
                                            // monitor. When both halting and 
                                            // monitor debug are disabled, it 
                                            // only happens for debug events 
                                            // that are not ignored (minimally, 
                                            // BKPT). The Debug Fault Status 
                                            // Register is updated. 
#define CM3_SCS_HFSR_DEBUGEVT_M 0x80000000
#define CM3_SCS_HFSR_DEBUGEVT_S 31
#define CM3_SCS_HFSR_FORCED     0x40000000  // Hard Fault activated because a 
                                            // Configurable Fault was received 
                                            // and cannot activate because of 
                                            // priority or because the 
                                            // Configurable Fault is disabled. 
                                            // The Hard Fault handler then has 
                                            // to read the other fault status 
                                            // registers to determine cause. 
#define CM3_SCS_HFSR_FORCED_M   0x40000000
#define CM3_SCS_HFSR_FORCED_S   30
#define CM3_SCS_HFSR_VECTTBL    0x00000002  // This bit is set if there is a 
                                            // fault because of vector table 
                                            // read on exception processing 
                                            // (Bus Fault). This case is always 
                                            // a Hard Fault. The return PC 
                                            // points to the pre-empted 
                                            // instruction. 
#define CM3_SCS_HFSR_VECTTBL_M  0x00000002
#define CM3_SCS_HFSR_VECTTBL_S  1
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_DFSR register.
//
//*****************************************************************************
#define CM3_SCS_DFSR_EXTERNAL   0x00000010  // External debug request flag. 
                                            // The processor stops on next 
                                            // instruction boundary. 0x0: 
                                            // EDBGRQ signal not asserted 0x1: 
                                            // EDBGRQ signal asserted 
#define CM3_SCS_DFSR_EXTERNAL_M 0x00000010
#define CM3_SCS_DFSR_EXTERNAL_S 4
#define CM3_SCS_DFSR_VCATCH     0x00000008  // Vector catch flag. When the 
                                            // VCATCH flag is set, a flag in 
                                            // one of the local fault status 
                                            // registers is also set to 
                                            // indicate the type of fault. 0x0: 
                                            // No vector catch occurred 0x1: 
                                            // Vector catch occurred 
#define CM3_SCS_DFSR_VCATCH_M   0x00000008
#define CM3_SCS_DFSR_VCATCH_S   3
#define CM3_SCS_DFSR_DWTTRAP    0x00000004  // Data Watchpoint and Trace (DWT) 
                                            // flag. The processor stops at the 
                                            // current instruction or at the 
                                            // next instruction. 0x0: No DWT 
                                            // match 0x1: DWT match 
#define CM3_SCS_DFSR_DWTTRAP_M  0x00000004
#define CM3_SCS_DFSR_DWTTRAP_S  2
#define CM3_SCS_DFSR_BKPT       0x00000002  // BKPT flag. The BKPT flag is set 
                                            // by a BKPT instruction in flash 
                                            // patch code, and also by normal 
                                            // code. Return PC points to 
                                            // breakpoint containing 
                                            // instruction. 0x0: No BKPT 
                                            // instruction execution 0x1: BKPT 
                                            // instruction execution 
#define CM3_SCS_DFSR_BKPT_M     0x00000002
#define CM3_SCS_DFSR_BKPT_S     1
#define CM3_SCS_DFSR_HALTED     0x00000001  // Halt request flag. The 
                                            // processor is halted on the next 
                                            // instruction. 0x0: No halt 
                                            // request 0x1: Halt requested by 
                                            // NVIC, including step 
#define CM3_SCS_DFSR_HALTED_M   0x00000001
#define CM3_SCS_DFSR_HALTED_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_MMFAR register.
//
//*****************************************************************************
#define CM3_SCS_MMFAR_ADDRESS_M 0xFFFFFFFF  // Mem Manage fault address field. 
                                            // ADDRESS is the data address of a 
                                            // faulted load or store attempt. 
                                            // When an unaligned access faults, 
                                            // the address is the actual 
                                            // address that faulted. Because an 
                                            // access can be split into 
                                            // multiple parts, each aligned, 
                                            // this address can be any offset 
                                            // in the range of the requested 
                                            // size. Flags in the Memory Manage 
                                            // Fault Status Register indicate 
                                            // the cause of the fault 
#define CM3_SCS_MMFAR_ADDRESS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_BFAR register.
//
//*****************************************************************************
#define CM3_SCS_BFAR_ADDRESS_M  0xFFFFFFFF  // Bus fault address field. 
                                            // ADDRESS is the data address of a 
                                            // faulted load or store attempt. 
                                            // When an unaligned access faults, 
                                            // the address is the address 
                                            // requested by the instruction, 
                                            // even if that is not the address 
                                            // that faulted. Flags in the Bus 
                                            // Fault Status Register indicate 
                                            // the cause of the fault 
#define CM3_SCS_BFAR_ADDRESS_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_AFSR register.
//
//*****************************************************************************
#define CM3_SCS_AFSR_IMPDEF_M   0xFFFFFFFF  // Implementation defined. The 
                                            // bits map directly onto the 
                                            // signal assignment to the 
                                            // AUXFAULT inputs. 
#define CM3_SCS_AFSR_IMPDEF_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ID_PFR0 register.
//
//*****************************************************************************
#define CM3_SCS_ID_PFR0_STATE1_M \
                                0x000000F0  // State1 (T-bit == 1) 0x0: N/A 
                                            // 0x1: N/A 0x2: Thumb-2 encoding 
                                            // with the 16-bit basic 
                                            // instructions plus 32-bit 
                                            // Buncond/BL but no other 32-bit 
                                            // basic instructions (Note 
                                            // non-basic 32-bit instructions 
                                            // can be added using the 
                                            // appropriate instruction 
                                            // attribute, but other 32-bit 
                                            // basic instructions cannot.) 0x3: 
                                            // Thumb-2 encoding with all 
                                            // Thumb-2 basic instructions 

#define CM3_SCS_ID_PFR0_STATE1_S 4
#define CM3_SCS_ID_PFR0_STATE0_M \
                                0x0000000F  // State0 (T-bit == 0) 0x0: No ARM 
                                            // encoding 0x1: N/A 

#define CM3_SCS_ID_PFR0_STATE0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ID_PFR1 register.
//
//*****************************************************************************
#define CM3_SCS_ID_PFR1_MICROCONTROLLER_PROGRAMMERS_MODEL_M \
                                0x00000F00  // Microcontroller programmer's 
                                            // model 0x0: Not supported 0x2: 
                                            // Two-stack support 

#define CM3_SCS_ID_PFR1_MICROCONTROLLER_PROGRAMMERS_MODEL_S 8
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ID_DFR0 register.
//
//*****************************************************************************
#define CM3_SCS_ID_DFR0_MICROCONTROLLER_DEBUG_MODEL_M \
                                0x00F00000  // Microcontroller Debug Model - 
                                            // memory mapped 0x0: Not supported 
                                            // 0x1: Microcontroller debug v1 
                                            // (ITMv1, DWTv1, optional ETM) 

#define CM3_SCS_ID_DFR0_MICROCONTROLLER_DEBUG_MODEL_S 20
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ID_AFR0 register.
//
//*****************************************************************************
#define CM3_SCS_ID_AFR0_ID_AFR0_M \
                                0xFFFFFFFF  // Auxiliary Feature register0. 
                                            // This register provides some 
                                            // freedom for IMPLEMENTATION 
                                            // DEFINED features to be 
                                            // registered against the CPUID. 
                                            // Not used in Cortex-M3. 

#define CM3_SCS_ID_AFR0_ID_AFR0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ID_MMFR0 register.
//
//*****************************************************************************
#define CM3_SCS_ID_MMFR0_AUXILIARY_REGISTER_SUPPORT_M \
                                0x00F00000  // Auxiliary register support 0x0: 
                                            // Not supported 0x1: Auxiliary 
                                            // control register 

#define CM3_SCS_ID_MMFR0_AUXILIARY_REGISTER_SUPPORT_S 20
#define CM3_SCS_ID_MMFR0_OUTER_NON_SHARABLE_SUPPORT_M \
                                0x0000F000  // Outer non-sharable support 0x0: 
                                            // Outer non-sharable not supported 
                                            // 0x1: Outer sharable supported 

#define CM3_SCS_ID_MMFR0_OUTER_NON_SHARABLE_SUPPORT_S 12
#define CM3_SCS_ID_MMFR0_CACHE_COHERENCE_SUPPORT_M \
                                0x00000F00  // Cache coherence support 0x0: No 
                                            // shared support 0x1: 
                                            // Partial-inner-shared coherency 
                                            // (coherency amongst some - but 
                                            // not all - of the entities within 
                                            // an inner-coherent domain) 0x2: 
                                            // Full-inner-shared coherency 
                                            // (coherency amongst all of the 
                                            // entities within an 
                                            // inner-coherent domain) 0x3: Full 
                                            // coherency (coherency amongst all 
                                            // of the entities) 

#define CM3_SCS_ID_MMFR0_CACHE_COHERENCE_SUPPORT_S 8
#define CM3_SCS_ID_MMFR0_PMSA_SUPPORT_M \
                                0x000000F0  // PMSA support 0x0: Not supported 
                                            // 0x1: IMPLEMENTATION DEFINED 
                                            // (N/A) 0x2: PMSA base (features 
                                            // as defined for ARMv6) (N/A) 0x3: 
                                            // PMSAv7 (base plus subregion 
                                            // support) 

#define CM3_SCS_ID_MMFR0_PMSA_SUPPORT_S 4
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ID_MMFR1 register.
//
//*****************************************************************************
#define CM3_SCS_ID_MMFR1_ID_MMFR1_M \
                                0xFFFFFFFF  // Memory Model Feature register1. 
                                            // General information on the 
                                            // memory model and memory 
                                            // management support. 

#define CM3_SCS_ID_MMFR1_ID_MMFR1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ID_MMFR2 register.
//
//*****************************************************************************
#define CM3_SCS_ID_MMFR2_WAIT_FOR_INTERRUPT_STALLING_M \
                                0x0F000000  // wait for interrupt stalling 
                                            // 0x0: Not supported 0x1: Wait for 
                                            // interrupt supported 

#define CM3_SCS_ID_MMFR2_WAIT_FOR_INTERRUPT_STALLING_S 24
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ID_MMFR3 register.
//
//*****************************************************************************
#define CM3_SCS_ID_MMFR3_ID_MMFR3_M \
                                0xFFFFFFFF  // Memory Model Feature register3. 
                                            // General information on the 
                                            // memory model and memory 
                                            // management support. 

#define CM3_SCS_ID_MMFR3_ID_MMFR3_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ID_ISAR0 register.
//
//*****************************************************************************
#define CM3_SCS_ID_ISAR0_DIVIDE_INSTRS_M \
                                0x0F000000  // Divide instructions 0x0: No 
                                            // divide instructions present 0x1: 
                                            // Adds SDIV, UDIV (v1 - quotient 
                                            // only result) 

#define CM3_SCS_ID_ISAR0_DIVIDE_INSTRS_S 24
#define CM3_SCS_ID_ISAR0_DEBUG_INSTRS_M \
                                0x00F00000  // Debug instructions 0x0: No 
                                            // debug instructions present 0x1: 
                                            // Adds BKPT 

#define CM3_SCS_ID_ISAR0_DEBUG_INSTRS_S 20
#define CM3_SCS_ID_ISAR0_COPROC_INSTRS_M \
                                0x000F0000  // Coprocessor instructions 0x0: 
                                            // No coprocessor support, other 
                                            // than for separately attributed 
                                            // architectures such as CP15 or 
                                            // VFP 0x1: Adds generic CDP, LDC, 
                                            // MCR, MRC, STC 0x2: Adds generic 
                                            // CDP2, LDC2, MCR2, MRC2, STC2 
                                            // 0x3: Adds generic MCRR, MRRC 
                                            // 0x4: Adds generic MCRR2, MRRC2 

#define CM3_SCS_ID_ISAR0_COPROC_INSTRS_S 16
#define CM3_SCS_ID_ISAR0_CMPBRANCH_INSTRS_M \
                                0x0000F000  // CmpBranch instructions 0x0: No 
                                            // combined compare-and-branch 
                                            // instructions present 0x1: Adds 
                                            // CB{N}Z 

#define CM3_SCS_ID_ISAR0_CMPBRANCH_INSTRS_S 12
#define CM3_SCS_ID_ISAR0_BITFIELD_INSTRS_M \
                                0x00000F00  // BitField instructions 0x0: No 
                                            // bitfield instructions present 
                                            // 0x1: Adds BFC, BFI, SBFX, UBFX 

#define CM3_SCS_ID_ISAR0_BITFIELD_INSTRS_S 8
#define CM3_SCS_ID_ISAR0_BITCOUNT_INSTRS_M \
                                0x000000F0  // BitCount instructions 0x0: No 
                                            // bit-counting instructions 
                                            // present 0x1: Adds CLZ 

#define CM3_SCS_ID_ISAR0_BITCOUNT_INSTRS_S 4
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ID_ISAR1 register.
//
//*****************************************************************************
#define CM3_SCS_ID_ISAR1_INTERWORK_INSTRS_M \
                                0x0F000000  // Interwork instructions 0x0: No 
                                            // interworking instructions 
                                            // supported 0x1: Adds BX (and T 
                                            // bit in PSRs) 0x2: Adds BLX, and 
                                            // PC loads have BX-like behavior 
                                            // 0x3: N/A 

#define CM3_SCS_ID_ISAR1_INTERWORK_INSTRS_S 24
#define CM3_SCS_ID_ISAR1_IMMEDIATE_INSTRS_M \
                                0x00F00000  // Immediate instructions 0x0: No 
                                            // special immediate-generating 
                                            // instructions present 0x1: Adds 
                                            // ADDW, MOVW, MOVT, SUBW 

#define CM3_SCS_ID_ISAR1_IMMEDIATE_INSTRS_S 20
#define CM3_SCS_ID_ISAR1_IFTHEN_INSTRS_M \
                                0x000F0000  // IfThen instructions 0x0: IT 
                                            // instructions not present 0x1: 
                                            // Adds IT instructions (and IT 
                                            // bits in PSRs) 

#define CM3_SCS_ID_ISAR1_IFTHEN_INSTRS_S 16
#define CM3_SCS_ID_ISAR1_EXTEND_INSRS_M \
                                0x0000F000  // Extend instructions. Note that 
                                            // the shift options on these 
                                            // instructions are also controlled 
                                            // by the WithShifts_instrs 
                                            // attribute. 0x0: No scalar (i.e. 
                                            // non-SIMD) sign/zero-extend 
                                            // instructions present 0x1: Adds 
                                            // SXTB, SXTH, UXTB, UXTH 0x2: N/A 

#define CM3_SCS_ID_ISAR1_EXTEND_INSRS_S 12
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ID_ISAR2 register.
//
//*****************************************************************************
#define CM3_SCS_ID_ISAR2_REVERSAL_INSTRS_M \
                                0xF0000000  // Reversal instructions 0x0: No 
                                            // reversal instructions present 
                                            // 0x1: Adds REV, REV16, REVSH 0x2: 
                                            // Adds RBIT 

#define CM3_SCS_ID_ISAR2_REVERSAL_INSTRS_S 28
#define CM3_SCS_ID_ISAR2_MULTU_INSTRS_M \
                                0x00F00000  // Multiply instructions 
                                            // (advanced, unsigned) 0x0: No 
                                            // unsigned multiply instructions 
                                            // present 0x1: Adds UMULL, UMLAL 
                                            // 0x2: N/A 

#define CM3_SCS_ID_ISAR2_MULTU_INSTRS_S 20
#define CM3_SCS_ID_ISAR2_MULTS_INSTRS_M \
                                0x000F0000  // Multiply instructions 
                                            // (advanced, signed) 0x0: No 
                                            // signed multiply instructions 
                                            // present 0x1: Adds SMULL, SMLAL 
                                            // 0x2: N/A 0x3: N/A 

#define CM3_SCS_ID_ISAR2_MULTS_INSTRS_S 16
#define CM3_SCS_ID_ISAR2_MULT_INSTRS_M \
                                0x0000F000  // Multiply instructions 0x0: Only 
                                            // MUL present 0x1: Adds MLA 0x2: 
                                            // Adds MLS 

#define CM3_SCS_ID_ISAR2_MULT_INSTRS_S 12
#define CM3_SCS_ID_ISAR2_MULTIACCESSINT_INSTRS_M \
                                0x00000F00  // Multi-Access interruptible 
                                            // instructions 0x0: The (LDM/STM) 
                                            // instructions are 
                                            // non-interruptible 0x1: The 
                                            // (LDM/STM) instructions are 
                                            // restartable 0x2: The (LDM/STM) 
                                            // instructions are continuable 

#define CM3_SCS_ID_ISAR2_MULTIACCESSINT_INSTRS_S 8
#define CM3_SCS_ID_ISAR2_MEMHINT_INSTRS_M \
                                0x000000F0  // MemoryHint instructions 0x0: No 
                                            // memory hint instructions presen 
                                            // 0x1: Adds PLD 0x2: Adds PLD (ie 
                                            // a repeat on value 1) 0x3: Adds 
                                            // PLI 

#define CM3_SCS_ID_ISAR2_MEMHINT_INSTRS_S 4
#define CM3_SCS_ID_ISAR2_LOADSTORE_INSTRS_M \
                                0x0000000F  // LoadStore instructions 0x0: No 
                                            // additional normal load/store 
                                            // instructions present 0x1: Adds 
                                            // LDRD/STRD 

#define CM3_SCS_ID_ISAR2_LOADSTORE_INSTRS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ID_ISAR3 register.
//
//*****************************************************************************
#define CM3_SCS_ID_ISAR3_TRUENOP_INSTRS_M \
                                0x0F000000  // TrueNOP instructions 0x0: True 
                                            // NOP instructions not present - 
                                            // that is, NOP instructions with 
                                            // no register dependencies 0x1: 
                                            // Adds "true NOP", and the 
                                            // capability of additional "NOP 
                                            // compatible hints" 

#define CM3_SCS_ID_ISAR3_TRUENOP_INSTRS_S 24
#define CM3_SCS_ID_ISAR3_THUMBCOPY_INSTRS_M \
                                0x00F00000  // ThumbCopy instructions 0x0: 
                                            // Thumb MOV(register) instruction 
                                            // does not allow low reg -> low 
                                            // reg 0x1: Adds Thumb 
                                            // MOV(register) low reg -> low reg 
                                            // and the CPY alias 

#define CM3_SCS_ID_ISAR3_THUMBCOPY_INSTRS_S 20
#define CM3_SCS_ID_ISAR3_TABBRANCH_INSTRS_M \
                                0x000F0000  // TableBranch instructions 0x0: 
                                            // No table-branch instructions 
                                            // present 0x1: Adds TBB, TBH 

#define CM3_SCS_ID_ISAR3_TABBRANCH_INSTRS_S 16
#define CM3_SCS_ID_ISAR3_SYNCPRIM_INSTRS_M \
                                0x0000F000  // SyncPrim instructions. Note 
                                            // there are no LDREXD or STREXD in 
                                            // ARMv7-M. This attribute is used 
                                            // in conjunction with the 
                                            // SyncPrim_instrs_frac attribute 
                                            // in ID_ISAR4[23:20]. 0x0: No 
                                            // synchronization primitives 
                                            // present 0x1: Adds LDREX, STREX 
                                            // 0x2: Adds LDREXB, LDREXH, 
                                            // LDREXD, STREXB, STREXH, STREXD, 
                                            // CLREX(N/A) 

#define CM3_SCS_ID_ISAR3_SYNCPRIM_INSTRS_S 12
#define CM3_SCS_ID_ISAR3_SVC_INSTRS_M \
                                0x00000F00  // SVC instructions 0x0: No SVC 
                                            // (SWI) instructions present 0x1: 
                                            // Adds SVC (SWI) 

#define CM3_SCS_ID_ISAR3_SVC_INSTRS_S 8
#define CM3_SCS_ID_ISAR3_SIMD_INSTRS_M \
                                0x000000F0  // SIMD instructions 0x0: No SIMD 
                                            // instructions present 0x1: Adds 
                                            // SSAT, USAT (and the Q flag in 
                                            // the PSRs) 0x3: N/A 

#define CM3_SCS_ID_ISAR3_SIMD_INSTRS_S 4
#define CM3_SCS_ID_ISAR3_SATRUATE_INSTRS_M \
                                0x0000000F  // Saturate instructions 0x0: No 
                                            // non-SIMD saturate instructions 
                                            // present 0x1: N/A 

#define CM3_SCS_ID_ISAR3_SATRUATE_INSTRS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_ID_ISAR4 register.
//
//*****************************************************************************
#define CM3_SCS_ID_ISAR4_PSR_M_INSTRS_M \
                                0x0F000000  // PSR_M_instrs 0x0: Instructions 
                                            // not present 0x1: Adds CPS, MRS, 
                                            // and MSR instructions (M-profile 
                                            // forms) 

#define CM3_SCS_ID_ISAR4_PSR_M_INSTRS_S 24
#define CM3_SCS_ID_ISAR4_SYNCPRIM_INSTRS_FRAC_M \
                                0x00F00000  // SyncPrim_instrs_frac 0x0: No 
                                            // additional support 0x3: Adds 
                                            // CLREX, LDREXB, STREXB, LDREXH, 
                                            // STREXH 

#define CM3_SCS_ID_ISAR4_SYNCPRIM_INSTRS_FRAC_S 20
#define CM3_SCS_ID_ISAR4_BARRIER_INSTRS_M \
                                0x000F0000  // Barrier instructions 0x0: No 
                                            // barrier instructions supported 
                                            // 0x1: Adds DMB, DSB, ISB barrier 
                                            // instructions 

#define CM3_SCS_ID_ISAR4_BARRIER_INSTRS_S 16
#define CM3_SCS_ID_ISAR4_WRITEBACK_INSTRS_M \
                                0x00000F00  // Writeback instructions 0x0: 
                                            // Only non-writeback addressing 
                                            // modes present, except that 
                                            // LDMIA/STMDB/PUSH/POP 
                                            // instructions support writeback 
                                            // addressing. 0x1: Adds all 
                                            // currently-defined writeback 
                                            // addressing modes (ARMv7, 
                                            // Thumb-2) 

#define CM3_SCS_ID_ISAR4_WRITEBACK_INSTRS_S 8
#define CM3_SCS_ID_ISAR4_WITHSHIFTS_INSTRS_M \
                                0x000000F0  // WithShift instructions. Note 
                                            // that all additions only apply in 
                                            // cases where the encoding 
                                            // supports them - e.g. there is no 
                                            // difference between levels 3 and 
                                            // 4 in the Thumb-2 instruction 
                                            // set. Also note that MOV 
                                            // instructions with shift options 
                                            // should instead be treated as 
                                            // ASR, LSL, LSR, ROR or RRX 
                                            // instructions. 0x0: Non-zero 
                                            // shifts only support MOV and 
                                            // shift instructions (see notes) 
                                            // 0x1: Shifts of loads/stores over 
                                            // the range LSL 0-3 0x3: Adds 
                                            // other constant shift options. 
                                            // 0x4: Adds register-controlled 
                                            // shift options. 

#define CM3_SCS_ID_ISAR4_WITHSHIFTS_INSTRS_S 4
#define CM3_SCS_ID_ISAR4_UNPRIV_INSTRS_M \
                                0x0000000F  // Unprivileged instructions 0x0: 
                                            // No "T variant" instructions 
                                            // exist 0x1: Adds LDRBT, LDRT, 
                                            // STRBT, STRT 0x2: Adds LDRHT, 
                                            // LDRSBT, LDRSHT, STRHT 

#define CM3_SCS_ID_ISAR4_UNPRIV_INSTRS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_CPACR register.
//
//*****************************************************************************
#define CM3_SCS_CPACR_CP11_M    0x00C00000  // Access privileges for 
                                            // coprocessor 11. The possible 
                                            // values of each field are: 0b00 = 
                                            // Access denied. Any attempted 
                                            // access generates a NOCP 
                                            // UsageFault. 0b01 = Privileged 
                                            // access only. An unprivileged 
                                            // access generates a NOCP 
                                            // UsageFault. 0b10 = Reserved. 
                                            // 0b11 = Full access. Used in 
                                            // conjunction with the control for 
                                            // CP10, this controls access to 
                                            // the Floating Point Coprocessor. 
#define CM3_SCS_CPACR_CP11_S    22
#define CM3_SCS_CPACR_CP10_M    0x00300000  // Access privileges for 
                                            // coprocessor 10. The possible 
                                            // values of each field are: 0b00 = 
                                            // Access denied. Any attempted 
                                            // access generates a NOCP 
                                            // UsageFault. 0b01 = Privileged 
                                            // access only. An unprivileged 
                                            // access generates a NOCP 
                                            // UsageFault. 0b10 = Reserved. 
                                            // 0b11 = Full access. Used in 
                                            // conjunction with the control for 
                                            // CP11, this controls access to 
                                            // the Floating Point Coprocessor. 
#define CM3_SCS_CPACR_CP10_S    20
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_MPU_TYPE register.
//
//*****************************************************************************
#define CM3_SCS_MPU_TYPE_IREGION_M \
                                0x00FF0000  // Because the processor core uses 
                                            // only a unified MPU, IREGION 
                                            // always contains 0x00. 

#define CM3_SCS_MPU_TYPE_IREGION_S 16
#define CM3_SCS_MPU_TYPE_DREGION_M \
                                0x0000FF00  // Number of supported MPU regions 
                                            // field. DREGION contains 0x08 if 
                                            // the implementation contains an 
                                            // MPU indicating eight MPU 
                                            // regions, otherwise it contains 
                                            // 0x00. 

#define CM3_SCS_MPU_TYPE_DREGION_S 8
#define CM3_SCS_MPU_TYPE_SEPARATE \
                                0x00000001  // Because the processor core uses 
                                            // only a unified MPU, SEPARATE is 
                                            // always 0. 

#define CM3_SCS_MPU_TYPE_SEPARATE_M \
                                0x00000001
#define CM3_SCS_MPU_TYPE_SEPARATE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_MPU_CTRL register.
//
//*****************************************************************************
#define CM3_SCS_MPU_CTRL_PRIVDEFENA \
                                0x00000004  // This bit enables the default 
                                            // memory map for privileged 
                                            // access, as a background region, 
                                            // when the MPU is enabled. The 
                                            // background region acts as if it 
                                            // was region number 1 before any 
                                            // settable regions. Any region 
                                            // that is set up overlays this 
                                            // default map, and overrides it. 
                                            // If this bit = 0, the default 
                                            // memory map is disabled, and 
                                            // memory not covered by a region 
                                            // faults. This applies to memory 
                                            // type, Execute Never (XN), cache 
                                            // and shareable rules. However, 
                                            // this only applies to privileged 
                                            // mode (fetch and data access). 
                                            // User mode code faults unless a 
                                            // region has been set up for its 
                                            // code and data. When the MPU is 
                                            // disabled, the default map acts 
                                            // on both privileged and user mode 
                                            // code. XN and SO rules always 
                                            // apply to the System partition 
                                            // whether this enable is set or 
                                            // not. If the MPU is disabled, 
                                            // this bit is ignored. Reset 
                                            // clears the PRIVDEFENA bit. 

#define CM3_SCS_MPU_CTRL_PRIVDEFENA_M \
                                0x00000004
#define CM3_SCS_MPU_CTRL_PRIVDEFENA_S 2
#define CM3_SCS_MPU_CTRL_HFNMIENA \
                                0x00000002  // This bit enables the MPU when 
                                            // in Hard Fault, NMI, and 
                                            // FAULTMASK escalated handlers. If 
                                            // this bit = 1 and the ENABLE bit 
                                            // = 1, the MPU is enabled when in 
                                            // these handlers. If this bit = 0, 
                                            // the MPU is disabled when in 
                                            // these handlers, regardless of 
                                            // the value of ENABLE. If this bit 
                                            // =1 and ENABLE = 0, behavior is 
                                            // Unpredictable. Reset clears the 
                                            // HFNMIENA bit. 

#define CM3_SCS_MPU_CTRL_HFNMIENA_M \
                                0x00000002
#define CM3_SCS_MPU_CTRL_HFNMIENA_S 1
#define CM3_SCS_MPU_CTRL_ENABLE 0x00000001  // MPU enable bit. Reset clears 
                                            // the ENABLE bit. 0x0: Disable MPU 
                                            // 0x1: Enable MPU 
#define CM3_SCS_MPU_CTRL_ENABLE_M \
                                0x00000001
#define CM3_SCS_MPU_CTRL_ENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_MPU_RNR register.
//
//*****************************************************************************
#define CM3_SCS_MPU_RNR_REGION_M \
                                0x000000FF  // Region select field. Selects 
                                            // the region to operate on when 
                                            // using the Region Attribute and 
                                            // Size Register and the Region 
                                            // Base Address Register. It must 
                                            // be written first except when the 
                                            // address VALID + REGION fields 
                                            // are written, which overwrites 
                                            // this. 

#define CM3_SCS_MPU_RNR_REGION_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_MPU_RBAR register.
//
//*****************************************************************************
#define CM3_SCS_MPU_RBAR_ADDR_M 0xFFFFFFE0  // Region base address field. The 
                                            // position of the LSB depends on 
                                            // the region size, so that the 
                                            // base address is aligned 
                                            // according to an even multiple of 
                                            // size. The power of 2 size 
                                            // specified by the SZENABLE field 
                                            // of the MPU Region Attribute and 
                                            // Size Register defines how many 
                                            // bits of base address are used. 
#define CM3_SCS_MPU_RBAR_ADDR_S 5
#define CM3_SCS_MPU_RBAR_VALID  0x00000010  // MPU Region Number valid bit. 
                                            // 0x0: MPU Region Number Register 
                                            // remains unchanged and is 
                                            // interpreted. 0x1: MPU Region 
                                            // Number Register is overwritten 
                                            // by bits 3:0 (the REGION value). 
#define CM3_SCS_MPU_RBAR_VALID_M \
                                0x00000010
#define CM3_SCS_MPU_RBAR_VALID_S 4
#define CM3_SCS_MPU_RBAR_REGION_M \
                                0x0000000F  // MPU region override field. 

#define CM3_SCS_MPU_RBAR_REGION_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_MPU_RASR register.
//
//*****************************************************************************
#define CM3_SCS_MPU_RASR_XN     0x10000000  // Instruction access disable bit 
                                            // 0x0: Enable instruction fetches 
                                            // 0x1: Disable instruction fetches 
#define CM3_SCS_MPU_RASR_XN_M   0x10000000
#define CM3_SCS_MPU_RASR_XN_S   28
#define CM3_SCS_MPU_RASR_AP_M   0x07000000  // Data access permission field 
                                            // 0x0: Priviliged permissions: No 
                                            // access. User permissions: No 
                                            // access. 0x1: Priviliged 
                                            // permissions: Read-write. User 
                                            // permissions: No access. 0x2: 
                                            // Priviliged permissions: 
                                            // Read-write. User permissions: 
                                            // Read-only. 0x3: Priviliged 
                                            // permissions: Read-write. User 
                                            // permissions: Read-write. 0x5: 
                                            // Priviliged permissions: 
                                            // Read-only. User permissions: No 
                                            // access. 0x6: Priviliged 
                                            // permissions: Read-only. User 
                                            // permissions: Read-only. 0x7: 
                                            // Priviliged permissions: 
                                            // Read-only. User permissions: 
                                            // Read-only. 
#define CM3_SCS_MPU_RASR_AP_S   24
#define CM3_SCS_MPU_RASR_TEX_M  0x00380000  // Type extension field 
#define CM3_SCS_MPU_RASR_TEX_S  19
#define CM3_SCS_MPU_RASR_S      0x00040000  // Shareable bit 0x0: Not 
                                            // shareable 0x1: Shareable 
#define CM3_SCS_MPU_RASR_S_M    0x00040000
#define CM3_SCS_MPU_RASR_S_S    18
#define CM3_SCS_MPU_RASR_C      0x00020000  // Cacheable bit 0x0: Not 
                                            // cacheable 0x1: Cacheable 
#define CM3_SCS_MPU_RASR_C_M    0x00020000
#define CM3_SCS_MPU_RASR_C_S    17
#define CM3_SCS_MPU_RASR_B      0x00010000  // Bufferable bit 0x0: Not 
                                            // bufferable 0x1: Bufferable 
#define CM3_SCS_MPU_RASR_B_M    0x00010000
#define CM3_SCS_MPU_RASR_B_S    16
#define CM3_SCS_MPU_RASR_SRD_M  0x0000FF00  // Sub-Region Disable (SRD) field. 
                                            // Setting an SRD bit disables the 
                                            // corresponding sub-region. 
                                            // Regions are split into eight 
                                            // equal-sized sub-regions. 
                                            // Sub-regions are not supported 
                                            // for region sizes of 128 bytes 
                                            // and less. 
#define CM3_SCS_MPU_RASR_SRD_S  8
#define CM3_SCS_MPU_RASR_SIZE_M 0x0000003E  // MPU Protection Region Size 
                                            // Field. 0x04: 32B 0x04: 64B 0x06: 
                                            // 128B 0x07: 256B 0x08: 512B 0x09: 
                                            // 1KB 0x0A: 2KB 0x0B: 4KB 0x0C: 
                                            // 8KB 0x0D: 16KB 0x0E: 32KB 0x0F: 
                                            // 64KB 0x10: 128KB 0x11: 256KB 
                                            // 0x12: 512KB 0x13: 1MB 0x14: 2MB 
                                            // 0x15: 4MB 0x16: 8MB 0x17: 16MB 
                                            // 0x18: 32MB 0x19: 64MB 0x1A: 
                                            // 128MB 0x1B: 256MB 0x1C: 512MB 
                                            // 0x1D: 1GB 0x1E: 2GB 0x1F: 4GB 
#define CM3_SCS_MPU_RASR_SIZE_S 1
#define CM3_SCS_MPU_RASR_ENABLE 0x00000001  // Region enable bit. 
#define CM3_SCS_MPU_RASR_ENABLE_M \
                                0x00000001
#define CM3_SCS_MPU_RASR_ENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_MPU_RBAR_A1 register.
//
//*****************************************************************************
#define CM3_SCS_MPU_RBAR_A1_MPU_RBAR_A1_M \
                                0xFFFFFFFF  // MPU Alias 1 Region Base Address 
                                            // register. Alias of 0xE000ED9C. 

#define CM3_SCS_MPU_RBAR_A1_MPU_RBAR_A1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_MPU_RASR_A1 register.
//
//*****************************************************************************
#define CM3_SCS_MPU_RASR_A1_MPU_RASR_A1_M \
                                0xFFFFFFFF  // MPU Alias 1 Region Attribute 
                                            // and Size register. Alias of 
                                            // 0xE000EDA0. 

#define CM3_SCS_MPU_RASR_A1_MPU_RASR_A1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_MPU_RBAR_A2 register.
//
//*****************************************************************************
#define CM3_SCS_MPU_RBAR_A2_MPU_RBAR_A2_M \
                                0xFFFFFFFF  // MPU Alias 2 Region Base Address 
                                            // register. Alias of 0xE000ED9C. 

#define CM3_SCS_MPU_RBAR_A2_MPU_RBAR_A2_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_MPU_RASR_A2 register.
//
//*****************************************************************************
#define CM3_SCS_MPU_RASR_A2_MPU_RASR_A2_M \
                                0xFFFFFFFF  // MPU Alias 2 Region Attribute 
                                            // and Size register. Alias of 
                                            // 0xE000EDA0. 

#define CM3_SCS_MPU_RASR_A2_MPU_RASR_A2_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_MPU_RBAR_A3 register.
//
//*****************************************************************************
#define CM3_SCS_MPU_RBAR_A3_MPU_RBAR_A3_M \
                                0xFFFFFFFF  // MPU Alias 3 Region Base Address 
                                            // register. Alias of 0xE000ED9C. 

#define CM3_SCS_MPU_RBAR_A3_MPU_RBAR_A3_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_MPU_RASR_A3 register.
//
//*****************************************************************************
#define CM3_SCS_MPU_RASR_A3_MPU_RASR_A3_M \
                                0xFFFFFFFF  // MPU Alias 3 Region Attribute 
                                            // and Size register. Alias of 
                                            // 0xE000EDA0. 

#define CM3_SCS_MPU_RASR_A3_MPU_RASR_A3_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_DHCSR register.
//
//*****************************************************************************
#define CM3_SCS_DHCSR_S_RESET_ST \
                                0x02000000  // Indicates that the core has 
                                            // been reset, or is now being 
                                            // reset, since the last time this 
                                            // bit was read. This a sticky bit 
                                            // that clears on read. So, reading 
                                            // twice and getting 1 then 0 means 
                                            // it was reset in the past. 
                                            // Reading twice and getting 1 both 
                                            // times means that it is being 
                                            // reset now (held in reset still). 

#define CM3_SCS_DHCSR_S_RESET_ST_M \
                                0x02000000
#define CM3_SCS_DHCSR_S_RESET_ST_S 25
#define CM3_SCS_DHCSR_S_RETIRE_ST \
                                0x01000000  // Indicates that an instruction 
                                            // has completed since last read. 
                                            // This is a sticky bit that clears 
                                            // on read. This determines if the 
                                            // core is stalled on a load/store 
                                            // or fetch. 

#define CM3_SCS_DHCSR_S_RETIRE_ST_M \
                                0x01000000
#define CM3_SCS_DHCSR_S_RETIRE_ST_S 24
#define CM3_SCS_DHCSR_S_LOCKUP  0x00080000  // Reads as one if the core is 
                                            // running (not halted) and a 
                                            // lockup condition is present. 
#define CM3_SCS_DHCSR_S_LOCKUP_M \
                                0x00080000
#define CM3_SCS_DHCSR_S_LOCKUP_S 19
#define CM3_SCS_DHCSR_S_SLEEP   0x00040000  // Indicates that the core is 
                                            // sleeping (WFI, WFE, or 
                                            // SLEEP-ON-EXIT). Must use C_HALT 
                                            // to gain control or wait for 
                                            // interrupt to wake-up. 
#define CM3_SCS_DHCSR_S_SLEEP_M 0x00040000
#define CM3_SCS_DHCSR_S_SLEEP_S 18
#define CM3_SCS_DHCSR_S_HALT    0x00020000  // The core is in debug state when 
                                            // S_HALT is set. 
#define CM3_SCS_DHCSR_S_HALT_M  0x00020000
#define CM3_SCS_DHCSR_S_HALT_S  17
#define CM3_SCS_DHCSR_S_REGRDY  0x00010000  // Register Read/Write on the 
                                            // Debug Core Register Selector 
                                            // register is available. Last 
                                            // transfer is complete. 
#define CM3_SCS_DHCSR_S_REGRDY_M \
                                0x00010000
#define CM3_SCS_DHCSR_S_REGRDY_S 16
#define CM3_SCS_DHCSR_C_SNAPSTALL \
                                0x00000020  // If the core is stalled on a 
                                            // load/store operation the stall 
                                            // ceases and the instruction is 
                                            // forced to complete. This enables 
                                            // Halting debug to gain control of 
                                            // the core. It can only be set if: 
                                            // C_DEBUGEN = 1 and C_HALT = 1. 
                                            // The core reads S_RETIRE_ST as 0. 
                                            // This indicates that no 
                                            // instruction has advanced. This 
                                            // prevents misuse. The bus state 
                                            // is Unpredictable when this is 
                                            // used. S_RETIRE can detect core 
                                            // stalls on load/store operations. 

#define CM3_SCS_DHCSR_C_SNAPSTALL_M \
                                0x00000020
#define CM3_SCS_DHCSR_C_SNAPSTALL_S 5
#define CM3_SCS_DHCSR_C_MASKINTS \
                                0x00000008  // Mask interrupts when stepping 
                                            // or running in halted debug. Does 
                                            // not affect NMI, which is not 
                                            // maskable. Must only be modified 
                                            // when the processor is halted 
                                            // (S_HALT == 1). Also does not 
                                            // affect fault exceptions and SVC 
                                            // caused by execution of the 
                                            // instructions. CMASKINTS must be 
                                            // set or cleared before halt is 
                                            // released. This means that the 
                                            // writes to set or clear 
                                            // C_MASKINTS and to set or clear 
                                            // C_HALT must be separate. 

#define CM3_SCS_DHCSR_C_MASKINTS_M \
                                0x00000008
#define CM3_SCS_DHCSR_C_MASKINTS_S 3
#define CM3_SCS_DHCSR_C_STEP    0x00000004  // Steps the core in halted debug. 
                                            // When C_DEBUGEN = 0, this bit has 
                                            // no effect. Must only be modified 
                                            // when the processor is halted 
                                            // (S_HALT == 1). 
#define CM3_SCS_DHCSR_C_STEP_M  0x00000004
#define CM3_SCS_DHCSR_C_STEP_S  2
#define CM3_SCS_DHCSR_C_HALT    0x00000002  // Halts the core. This bit is set 
                                            // automatically when the core 
                                            // Halts. For example Breakpoint. 
                                            // This bit clears on core reset. 
                                            // This bit can only be written if 
                                            // C_DEBUGEN is 1, otherwise it is 
                                            // ignored. When setting this bit 
                                            // to 1, C_DEBUGEN must also be 
                                            // written to 1 in the same value 
                                            // (value[1:0] is 2'b11). The core 
                                            // can halt itself, but only if 
                                            // C_DEBUGEN is already 1 and only 
                                            // if it writes with b11). 
#define CM3_SCS_DHCSR_C_HALT_M  0x00000002
#define CM3_SCS_DHCSR_C_HALT_S  1
#define CM3_SCS_DHCSR_C_DEBUGEN 0x00000001  // Enables debug. This can only be 
                                            // written by AHB-AP and not by the 
                                            // core. It is ignored when written 
                                            // by the core, which cannot set or 
                                            // clear it. The core must write a 
                                            // 1 to it when writing C_HALT to 
                                            // halt itself. 
#define CM3_SCS_DHCSR_C_DEBUGEN_M \
                                0x00000001
#define CM3_SCS_DHCSR_C_DEBUGEN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_DCRSR register.
//
//*****************************************************************************
#define CM3_SCS_DCRSR_REGWNR    0x00010000  // Write = 1, Read = 0 
#define CM3_SCS_DCRSR_REGWNR_M  0x00010000
#define CM3_SCS_DCRSR_REGWNR_S  16
#define CM3_SCS_DCRSR_REGSEL_M  0x0000001F  // Register select 0x00: R0 0x01: 
                                            // R1 0x02: R2 0x03: R3 0x04: R4 
                                            // 0x05: R5 0x06: R6 0x07: R7 0x08: 
                                            // R8 0x09: R9 0x0A: R10 0x0B: R11 
                                            // 0x0C: R12 0x0D: Current SP 0x0E: 
                                            // LR 0x0F: DebugReturnAddress 
                                            // 0x10: XPSR/flags, execution 
                                            // state information, and exception 
                                            // number 0x11: MSP (Main SP) 0x12: 
                                            // PSP (Process SP) 0x14: CONTROL 
                                            // bits [31:24], FAULTMASK bits 
                                            // [23:16], BASEPRI bits [15:8], 
                                            // PRIMASK bits [7:0] 
#define CM3_SCS_DCRSR_REGSEL_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_DCRDR register.
//
//*****************************************************************************
#define CM3_SCS_DCRDR_DCRDR_M   0xFFFFFFFF  // Debug Core Register Data 
                                            // Register. The purpose of the 
                                            // Debug Core Register Data 
                                            // Register (DCRDR) is to hold data 
                                            // for reading and writing 
                                            // registers to and from the 
                                            // processor. This is the data 
                                            // value written to the register 
                                            // selected by the Debug Register 
                                            // Selector Register. When the 
                                            // processor receives a request 
                                            // from the Debug Core Register 
                                            // Selector, this register is read 
                                            // or written by the processor 
                                            // using a normal load-store unit 
                                            // operation. If core register 
                                            // transfers are not being 
                                            // performed, software-based debug 
                                            // monitors can use this register 
                                            // for communication in non-halting 
                                            // debug. For example, OS RSD and 
                                            // Real View Monitor. This enables 
                                            // flags and bits to acknowledge 
                                            // state and indicate if commands 
                                            // have been accepted to, replied 
                                            // to, or accepted and replied to. 
#define CM3_SCS_DCRDR_DCRDR_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_SCS_O_DEMCR register.
//
//*****************************************************************************
#define CM3_SCS_DEMCR_TRCENA    0x01000000  // This bit must be set to 1 to 
                                            // enable use of the trace and 
                                            // debug blocks: Data Watchpoint 
                                            // and Trace (DWT), Instrumentation 
                                            // Trace Macrocell (ITM), Embedded 
                                            // Trace Macrocell (ETM), Trace 
                                            // Port Interface Unit (TPIU). This 
                                            // enables control of power usage 
                                            // unless tracing is required. The 
                                            // application can enable this, for 
                                            // ITM use, or use by a debugger. 
                                            // Note that if no debug or trace 
                                            // components are present in the 
                                            // implementation then it is not 
                                            // possible to set TRCENA. 
#define CM3_SCS_DEMCR_TRCENA_M  0x01000000
#define CM3_SCS_DEMCR_TRCENA_S  24
#define CM3_SCS_DEMCR_MON_REQ   0x00080000  // This enables the monitor to 
                                            // identify how it wakes up. This 
                                            // bit clears on a Core Reset. 0x0: 
                                            // Woken up by debug exception. 
                                            // 0x1: Woken up by MON_PEND 
#define CM3_SCS_DEMCR_MON_REQ_M 0x00080000
#define CM3_SCS_DEMCR_MON_REQ_S 19
#define CM3_SCS_DEMCR_MON_STEP  0x00040000  // When MON_EN = 1, this steps the 
                                            // core. When MON_EN = 0, this bit 
                                            // is ignored. This is the 
                                            // equivalent to C_STEP. Interrupts 
                                            // are only stepped according to 
                                            // the priority of the monitor and 
                                            // settings of PRIMASK, FAULTMASK, 
                                            // or BASEPRI. 
#define CM3_SCS_DEMCR_MON_STEP_M \
                                0x00040000
#define CM3_SCS_DEMCR_MON_STEP_S 18
#define CM3_SCS_DEMCR_MON_PEND  0x00020000  // Pend the monitor to activate 
                                            // when priority permits. This can 
                                            // wake up the monitor through the 
                                            // AHB-AP port. It is the 
                                            // equivalent to C_HALT for Monitor 
                                            // debug. This register does not 
                                            // reset on a system reset. It is 
                                            // only reset by a power-on reset. 
                                            // Software in the reset handler or 
                                            // later, or by the DAP must enable 
                                            // the debug monitor. 
#define CM3_SCS_DEMCR_MON_PEND_M \
                                0x00020000
#define CM3_SCS_DEMCR_MON_PEND_S 17
#define CM3_SCS_DEMCR_MON_EN    0x00010000  // Enable the debug monitor. When 
                                            // enabled, the System handler 
                                            // priority register controls its 
                                            // priority level. If disabled, 
                                            // then all debug events go to Hard 
                                            // fault. C_DEBUGEN in the Debug 
                                            // Halting Control and Statue 
                                            // register overrides this bit. 
                                            // Vector catching is 
                                            // semi-synchronous. When a 
                                            // matching event is seen, a Halt 
                                            // is requested. Because the 
                                            // processor can only halt on an 
                                            // instruction boundary, it must 
                                            // wait until the next instruction 
                                            // boundary. As a result, it stops 
                                            // on the first instruction of the 
                                            // exception handler. However, two 
                                            // special cases exist when a 
                                            // vector catch has triggered: 1. 
                                            // If a fault is taken during 
                                            // vectoring, vector read or stack 
                                            // push error, the halt occurs on 
                                            // the corresponding fault handler, 
                                            // for the vector error or stack 
                                            // push. 2. If a late arriving 
                                            // interrupt comes in during 
                                            // vectoring, it is not taken. That 
                                            // is, an implementation that 
                                            // supports the late arrival 
                                            // optimization must suppress it in 
                                            // this case. 
#define CM3_SCS_DEMCR_MON_EN_M  0x00010000
#define CM3_SCS_DEMCR_MON_EN_S  16
#define CM3_SCS_DEMCR_VC_HARDERR \
                                0x00000400  // Debug trap on Hard Fault. 

#define CM3_SCS_DEMCR_VC_HARDERR_M \
                                0x00000400
#define CM3_SCS_DEMCR_VC_HARDERR_S 10
#define CM3_SCS_DEMCR_VC_INTERR 0x00000200  // Debug Trap on 
                                            // interrupt/exception service 
                                            // errors. These are a subset of 
                                            // other faults and catches before 
                                            // BUSERR or HARDERR. 
#define CM3_SCS_DEMCR_VC_INTERR_M \
                                0x00000200
#define CM3_SCS_DEMCR_VC_INTERR_S 9
#define CM3_SCS_DEMCR_VC_BUSERR 0x00000100  // Debug Trap on normal Bus error. 
#define CM3_SCS_DEMCR_VC_BUSERR_M \
                                0x00000100
#define CM3_SCS_DEMCR_VC_BUSERR_S 8
#define CM3_SCS_DEMCR_VC_STATERR \
                                0x00000080  // Debug trap on Usage Fault state 
                                            // errors. 

#define CM3_SCS_DEMCR_VC_STATERR_M \
                                0x00000080
#define CM3_SCS_DEMCR_VC_STATERR_S 7
#define CM3_SCS_DEMCR_VC_CHKERR 0x00000040  // Debug trap on Usage Fault 
                                            // enabled checking errors. 
#define CM3_SCS_DEMCR_VC_CHKERR_M \
                                0x00000040
#define CM3_SCS_DEMCR_VC_CHKERR_S 6
#define CM3_SCS_DEMCR_VC_NOCPERR \
                                0x00000020  // Debug trap on Usage Fault 
                                            // access to Coprocessor that is 
                                            // not present or marked as not 
                                            // present in CAR register. 

#define CM3_SCS_DEMCR_VC_NOCPERR_M \
                                0x00000020
#define CM3_SCS_DEMCR_VC_NOCPERR_S 5
#define CM3_SCS_DEMCR_VC_MMERR  0x00000010  // Debug trap on Memory Management 
                                            // faults. 
#define CM3_SCS_DEMCR_VC_MMERR_M \
                                0x00000010
#define CM3_SCS_DEMCR_VC_MMERR_S 4
#define CM3_SCS_DEMCR_VC_CORERESET \
                                0x00000001  // Reset Vector Catch. Halt 
                                            // running system if Core reset 
                                            // occurs. 

#define CM3_SCS_DEMCR_VC_CORERESET_M \
                                0x00000001
#define CM3_SCS_DEMCR_VC_CORERESET_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_STIR register.
//
//*****************************************************************************
#define CM3_SCS_STIR_INTID_M    0x000001FF  // Interrupt ID field. Writing a 
                                            // value to the INTID field is the 
                                            // same as manually pending an 
                                            // interrupt by setting the 
                                            // corresponding interrupt bit in 
                                            // an Interrupt Set Pending 
                                            // Register. 
#define CM3_SCS_STIR_INTID_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_PID4 register.
//
//*****************************************************************************
#define CM3_SCS_PID4_PID4_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID4). 
#define CM3_SCS_PID4_PID4_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_PID5 register.
//
//*****************************************************************************
#define CM3_SCS_PID5_PID5_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID5). 
#define CM3_SCS_PID5_PID5_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_PID6 register.
//
//*****************************************************************************
#define CM3_SCS_PID6_PID6_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID6). 
#define CM3_SCS_PID6_PID6_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_PID7 register.
//
//*****************************************************************************
#define CM3_SCS_PID7_PID7_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID7). 
#define CM3_SCS_PID7_PID7_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_PID0 register.
//
//*****************************************************************************
#define CM3_SCS_PID0_PID0_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 7:0 (PID0). 
#define CM3_SCS_PID0_PID0_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_PID1 register.
//
//*****************************************************************************
#define CM3_SCS_PID1_PID1_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 15:8 (PID1). 
#define CM3_SCS_PID1_PID1_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_PID2 register.
//
//*****************************************************************************
#define CM3_SCS_PID2_PID2_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 23:16 (PID2). 
#define CM3_SCS_PID2_PID2_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_PID3 register.
//
//*****************************************************************************
#define CM3_SCS_PID3_PID3_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 31:24 (PID3). 
#define CM3_SCS_PID3_PID3_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_CID0 register.
//
//*****************************************************************************
#define CM3_SCS_CID0_CID0_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 7:0 (CID0). 
#define CM3_SCS_CID0_CID0_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_CID1 register.
//
//*****************************************************************************
#define CM3_SCS_CID1_CID1_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 15:8 (CID1). 
#define CM3_SCS_CID1_CID1_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_CID2 register.
//
//*****************************************************************************
#define CM3_SCS_CID2_CID2_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 23:16 (CID2). 
#define CM3_SCS_CID2_CID2_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_SCS_O_CID3 register.
//
//*****************************************************************************
#define CM3_SCS_CID3_CID3_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 31:24 (CID3). 
#define CM3_SCS_CID3_CID3_S     0


#endif // __HW_CM3_SCS_H__

