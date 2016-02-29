/******************************************************************************
*  Filename:       hw_ints.h
*  Revised:        $Date: 2014-03-04 15:45:48 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40301 $
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

#ifndef __HW_INTS_H__
#define __HW_INTS_H__

//*****************************************************************************
//
// The following are defines for the fault assignments.
//
//*****************************************************************************
#define FAULT_NMI               2           // NMI fault
#define FAULT_HARD              3           // Hard fault
#define FAULT_MPU               4           // MPU fault
#define FAULT_BUS               5           // Bus fault
#define FAULT_USAGE             6           // Usage fault
#define FAULT_SVCALL            11          // SVCall
#define FAULT_DEBUG             12          // Debug monitor
#define FAULT_PENDSV            14          // PendSV
#define FAULT_SYSTICK           15          // System Tick

//*****************************************************************************
//
// The following are defines for the interrupt assignments.
//
//*****************************************************************************
#define INT_EDGE_DETECT         16          // AON edge detect
#define INT_I2C                 17          // I2C
#define INT_RF_CPE1             18          // RF Core Packet Error 1
#define INT_SPIS                19          // AON SpiSplave Rx, Tx and CS
#define INT_AON_RTC             20          // AON RTC
#define INT_UART0               21          // UART0 Rx and Tx
#define INT_UART1               22          // UART1 Rx and Tx
#define INT_SSI0                23          // SSI0 Rx and Tx
#define INT_SSI1                24          // SSI1 Rx and Tx
#define INT_RF_CPE0             25          // RF Core Packet Error 0
#define INT_RF_HW               26          // RF Core Hardware
#define INT_RF_CMD_ACK          27          // RF Core Command Acknowledge
#define INT_I2S                 28          // I2S
#define INT_RESERVED            29          // Unassigned
#define INT_WATCHDOG            30          // Watchdog timer
#define INT_TIMER0A             31          // Timer 0 subtimer A
#define INT_TIMER0B             32          // Timer 0 subtimer B
#define INT_TIMER1A             33          // Timer 1 subtimer A
#define INT_TIMER1B             34          // Timer 1 subtimer B
#define INT_TIMER2A             35          // Timer 2 subtimer A
#define INT_TIMER2B             36          // Timer 2 subtimer B
#define INT_TIMER3A             37          // Timer 3 subtimer A
#define INT_TIMER3B             38          // Timer 3 subtimer B
#define INT_CRYPTO              39          // Crypto Core Result available
#define INT_UDMA                40          // uDMA Software
#define INT_UDMAERR             41          // uDMA Error
#define INT_FLASH               42          // Flash controller
#define INT_SW0                 43          // Software Event 0
#define INT_MCU_COMBO           44          // MCU combined event
#define INT_AON_PRG0            45          // AON programmable 0
#define INT_PROG                46          // Dynamic Programmable interrupt
                                            // source (Default: PRCM)
#define INT_AUX_COMPA           47          // AUX Comparator A
#define INT_AUX_ADC             48          // AUX ADC IRQ
#define INT_TRNG                49          // TRNG event

//*****************************************************************************
//
// The following are defines for the total number of interrupts.
// TBD: The specific number of interrupts is still changing
//*****************************************************************************
#define NUM_INTERRUPTS          51

//*****************************************************************************
//
// The following are defines for the total number of priority levels.
//
//*****************************************************************************
#define NUM_PRIORITY            8
#define NUM_PRIORITY_BITS       3

#endif // __HW_INTS_H__
