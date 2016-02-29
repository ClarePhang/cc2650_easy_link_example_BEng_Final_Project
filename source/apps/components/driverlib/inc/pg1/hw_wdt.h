
/******************************************************************************
*  Filename:       hw_wdt.h
*  Revised:        $Date: 2014-03-04 14:05:57 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40297 $
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
#ifndef __HW_WDT_H__
#define __HW_WDT_H__

//*****************************************************************************
//
// The following are defines for the WDT register offsets.
//
//*****************************************************************************
#define WDT_O_LOAD              0x00000000  // WDT Configuration 
#define WDT_O_VALUE             0x00000004  // Watchdog Value 
#define WDT_O_CTL               0x00000008  // WDT Control 
#define WDT_O_ICR               0x0000000C  // WDT Interrupt Clear (WDTICR), 
#define WDT_O_RIS               0x00000010  // WDT Raw Interrupt Status 
#define WDT_O_MIS               0x00000014  // WDT Maksed Interrupt Status 
#define WDT_O_TEST              0x00000418  // WDT Test This register provides 
                                            // user-enabled stalling when the 
                                            // microcontroller asserts the CPU 
                                            // halt flag during debug. 
#define WDT_O_INT_CAUS          0x0000041C  // WDT Test This register provides 
                                            // user-enabled stalling when the 
                                            // microcontroller asserts the CPU 
                                            // halt flag during debug. 
#define WDT_O_LOCK              0x00000C00  // WDT Lock (WDTLOCK) Writing 
                                            // 0x1ACC.E551 to the WDTLOCK 
                                            // register enables write access to 
                                            // all other registers. Writing any 
                                            // other value to the WDTLOCK 
                                            // register re-enables the locked 
                                            // state for register writes to all 
                                            // the other registers. Reading the 
                                            // WDTLOCK register returns the 
                                            // lock status rather than the 
                                            // 32-bit value written. Therefore, 
                                            // when write accesses are 
                                            // disabled, reading the WDTLOCK 
                                            // register returns 0x0000.0001 
                                            // (when locked; otherwise, the 
                                            // returned value is 0x0000.0000 
                                            // (unlocked)). 
#define WDT_O_PERIPHID4         0x00000FD0  // The WDTPeriphIDn registers are 
                                            // hard-coded and the fields within 
                                            // the register determine the reset 
                                            // value. 
#define WDT_O_PERIPHID5         0x00000FD4  // The WDTPeriphIDn registers are 
                                            // hard-coded and the fields within 
                                            // the register determine the reset 
                                            // value. 
#define WDT_O_PERIPHID6         0x00000FD8  // The WDTPeriphIDn registers are 
                                            // hard-coded and the fields within 
                                            // the register determine the reset 
                                            // value. 
#define WDT_O_PERIPHID7         0x00000FDC  // The WDTPeriphIDn registers are 
                                            // hard-coded and the fields within 
                                            // the register determine the reset 
                                            // value. 
#define WDT_O_PERIPHID0         0x00000FE0  // The WDTPeriphIDn registers are 
                                            // hard-coded and the fields within 
                                            // the register determine the reset 
                                            // value. 
#define WDT_O_PERIPHID1         0x00000FE4  // The WDTPeriphIDn registers are 
                                            // hard-coded and the fields within 
                                            // the register determine the reset 
                                            // value. 
#define WDT_O_PERIPHID2         0x00000FE8  // The WDTPeriphIDn registers are 
                                            // hard-coded and the fields within 
                                            // the register determine the reset 
                                            // value. 
#define WDT_O_PERIPHID3         0x00000FEC  // The WDTPeriphIDn registers are 
                                            // hard-coded and the fields within 
                                            // the register determine the reset 
                                            // value. 
#define WDT_O_PCELLD0           0x00000FF0  // The WDT PcellDn registers are 
                                            // hard-coded and the fields within 
                                            // the register determine the reset 
                                            // value. 
#define WDT_O_PCELLD1           0x00000FF4  // The WDT PcellDn registers are 
                                            // hard-coded and the fields within 
                                            // the register determine the reset 
                                            // value. 
#define WDT_O_PCELLD2           0x00000FF8  // The WDT PcellDn registers are 
                                            // hard-coded and the fields within 
                                            // the register determine the reset 
                                            // value. 
#define WDT_O_PCELLD3           0x00000FFC  // The WDT PcellDn registers are 
                                            // hard-coded and the fields within 
                                            // the register determine the reset 
                                            // value. 


//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_LOAD register.
//
//*****************************************************************************
#define WDT_LOAD_WDTLOAD_M      0xFFFFFFFF  // This register is the 32-bit 
                                            // interval value used by the 
                                            // 32-bit counter. When this 
                                            // register is written, the value 
                                            // is immediately loaded and the 
                                            // counter restarts counting down 
                                            // from the new value. If the 
                                            // WDTLOAD register is loaded with 
                                            // 0x0000.0000, an interrupt is 
                                            // immediately generated. 
#define WDT_LOAD_WDTLOAD_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_VALUE register.
//
//*****************************************************************************
#define WDT_VALUE_WDTVALUE_M    0xFFFFFFFF  // This register contains the 
                                            // current count value of the 
                                            // timer. 
#define WDT_VALUE_WDTVALUE_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_CTL register.
//
//*****************************************************************************
#define WDT_CTL_INTTYPE         0x00000004  // Watchdog Interrupt Type 
                                            // Watchdog Interrupt Type The 
                                            // INTTYPE values are defined as 
                                            // follows: 0: Watchdog interrupt 
                                            // is a standard interrupt. 1: 
                                            // Watchdog interrupt is a 
                                            // non-maskable interrupt. 
#define WDT_CTL_INTTYPE_M       0x00000004
#define WDT_CTL_INTTYPE_S       2
#define WDT_CTL_INTTYPE_MASKABLE \
                                0x00000000  // Maskable interrupt 
#define WDT_CTL_INTTYPE_NONMASKABLE \
                                0x00000004  // Non-maskable interrupt 
#define WDT_CTL_RESEN           0x00000002  // Watchdog Reset Enable The RESEN 
                                            // values are defined as follows: 
                                            // 0: Disabled. 1: Enable the 
                                            // Watchdog module reset output. 
#define WDT_CTL_RESEN_M         0x00000002
#define WDT_CTL_RESEN_S         1
#define WDT_CTL_RESEN_DIS       0x00000000  // Reset output Disabled 
#define WDT_CTL_RESEN_EN        0x00000002  // Reset output Enabled 
#define WDT_CTL_INTEN           0x00000001  // Watchdog Interrupt Enable The 
                                            // INTEN values are defined as 
                                            // follows: 0: Interrupt event 
                                            // disabled (once this bit is set, 
                                            // it can only be cleared by a 
                                            // hardware reset). 1: Interrupt 
                                            // event enabled. Once enabled, all 
                                            // writes are ignored. 
#define WDT_CTL_INTEN_M         0x00000001
#define WDT_CTL_INTEN_S         0
#define WDT_CTL_INTEN_DIS       0x00000000  // Interrupt Disabled 
#define WDT_CTL_INTEN_EN        0x00000001  // Interrupt Enabled 
//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_ICR register.
//
//*****************************************************************************
#define WDT_ICR_WDTICR_M        0xFFFFFFFF  // This register is the interrupt 
                                            // clear register. A write of any 
                                            // value to this register clears 
                                            // the Watchdog interrupt and 
                                            // reloads the 32-bit counter from 
                                            // the WDTLOAD register. Value for 
                                            // a read or reset is 
                                            // indeterminate. 
#define WDT_ICR_WDTICR_S        0
//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_RIS register.
//
//*****************************************************************************
#define WDT_RIS_WDTRIS          0x00000001  // This register is the raw 
                                            // interrupt status register. 
                                            // Watchdog interrupt events can be 
                                            // monitored via this register if 
                                            // the controller interrupt is 
                                            // masked. Value Description 0: The 
                                            // watchdog has not timed out. 1: A 
                                            // watchdog time-out event has 
                                            // occurred. 
#define WDT_RIS_WDTRIS_M        0x00000001
#define WDT_RIS_WDTRIS_S        0
//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_MIS register.
//
//*****************************************************************************
#define WDT_MIS_WDTMIS          0x00000001  // This register is the masked 
                                            // interrupt status register. The 
                                            // value of this register is the 
                                            // logical AND of the raw interrupt 
                                            // bit and the WDT interrupt enable 
                                            // bit. See bit [0] of the CTL 
                                            // register. Value Description 0: 
                                            // The watchdog has not timed out 
                                            // or is masked. 1: An unmasked 
                                            // watchdog time-out event has 
                                            // occurred. 
#define WDT_MIS_WDTMIS_M        0x00000001
#define WDT_MIS_WDTMIS_S        0
//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_TEST register.
//
//*****************************************************************************
#define WDT_TEST_STALL          0x00000100  // Watchdog Stall Enable, 0: The 
                                            // watchdog timer continues 
                                            // counting if the microcontroller 
                                            // is stopped with a debugger. 1: 
                                            // If the microcontroller is 
                                            // stopped with a debugger, the 
                                            // watchdog timer stops counting. 
                                            // Once the microcontroller is 
                                            // restarted, the watchdog timer 
                                            // resumes counting. 
#define WDT_TEST_STALL_M        0x00000100
#define WDT_TEST_STALL_S        8
#define WDT_TEST_STALL_DIS      0x00000000  // Disable STALL 
#define WDT_TEST_STALL_EN       0x00000100  // Enable STALL 
#define WDT_TEST_TEST_EN        0x00000001  // The test_enable bit 0: Enable 
                                            // external reset 1: disables the 
                                            // generation of an external reset. 
                                            // Instead bit 1 of the WDTINT_CAUS 
                                            // register is set and an interrupt 
                                            // is generated 
#define WDT_TEST_TEST_EN_M      0x00000001
#define WDT_TEST_TEST_EN_S      0
#define WDT_TEST_TEST_EN_DIS    0x00000000  // Test mode Disabled 
#define WDT_TEST_TEST_EN_EN     0x00000001  // Test mode Enabled 
//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_INT_CAUS register.
//
//*****************************************************************************
#define WDT_INT_CAUS_CAUSE_RESET \
                                0x00000002  // Only possible when 
                                            // WDTTEST.TEST_EN (reg 0x418 bit 
                                            // 0) is set. Indicates that the 
                                            // cause of an interrupt was a 
                                            // reset generated but blocked due 
                                            // to test_en 

#define WDT_INT_CAUS_CAUSE_RESET_M \
                                0x00000002
#define WDT_INT_CAUS_CAUSE_RESET_S 1
#define WDT_INT_CAUS_CAUSE_INTR 0x00000001  // indicates a normal interrupt 
                                            // was generated 
#define WDT_INT_CAUS_CAUSE_INTR_M \
                                0x00000001
#define WDT_INT_CAUS_CAUSE_INTR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_LOCK register.
//
//*****************************************************************************
#define WDT_LOCK_WDTLOCK_M      0xFFFFFFFF  // Watchdog Lock: A write of the 
                                            // value 0x1ACC.E551 unlocks the 
                                            // watchdog registers for write 
                                            // access. A write of any other 
                                            // value reapplies the lock, 
                                            // preventing any register updates 
                                            // (NOTE: WDTTEST.TEST_EN bit is 
                                            // not lockable). A read of this 
                                            // register returns the following 
                                            // values: 0x0000.0000: Unlocked 
                                            // 0x0000.0001: Locked 
#define WDT_LOCK_WDTLOCK_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// WDT_O_PERIPHID4 register.
//
//*****************************************************************************
#define WDT_PERIPHID4_PID4_M    0x000000FF  // WDT Peripheral ID Register 
                                            // [7:0] 
#define WDT_PERIPHID4_PID4_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// WDT_O_PERIPHID5 register.
//
//*****************************************************************************
#define WDT_PERIPHID5_PID5_M    0x000000FF  // WDT Peripheral ID Register 
                                            // [15:0] 
#define WDT_PERIPHID5_PID5_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// WDT_O_PERIPHID6 register.
//
//*****************************************************************************
#define WDT_PERIPHID6_PID6_M    0x000000FF  // WDT Peripheral ID Register 
                                            // [23:16] 
#define WDT_PERIPHID6_PID6_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// WDT_O_PERIPHID7 register.
//
//*****************************************************************************
#define WDT_PERIPHID7_PID7_M    0x000000FF  // WDT Peripheral ID Register 
                                            // [31:24] 
#define WDT_PERIPHID7_PID7_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// WDT_O_PERIPHID0 register.
//
//*****************************************************************************
#define WDT_PERIPHID0_PID0_M    0x000000FF  // WDT Peripheral ID Register 
                                            // [7:0] 
#define WDT_PERIPHID0_PID0_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// WDT_O_PERIPHID1 register.
//
//*****************************************************************************
#define WDT_PERIPHID1_PID1_M    0x000000FF  // WDT Peripheral ID Register 
                                            // [15:8] 
#define WDT_PERIPHID1_PID1_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// WDT_O_PERIPHID2 register.
//
//*****************************************************************************
#define WDT_PERIPHID2_PID2_M    0x000000FF  // WDT Peripheral ID Register 
                                            // [23:16] 
#define WDT_PERIPHID2_PID2_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// WDT_O_PERIPHID3 register.
//
//*****************************************************************************
#define WDT_PERIPHID3_PID1_M    0x000000FF  // WDT Peripheral ID Register 
                                            // [31:24] 
#define WDT_PERIPHID3_PID1_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_PCELLD0 register.
//
//*****************************************************************************
#define WDT_PCELLD0_CID0_M      0x000000FF  // WDT PrimeCell ID Register [7:0] 
#define WDT_PCELLD0_CID0_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_PCELLD1 register.
//
//*****************************************************************************
#define WDT_PCELLD1_CID1_M      0x000000FF  // WDT PrimeCell ID Register 
                                            // [15:8] 
#define WDT_PCELLD1_CID1_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_PCELLD2 register.
//
//*****************************************************************************
#define WDT_PCELLD2_CID2_M      0x000000FF  // WDT PrimeCell ID Register 
                                            // [23:16] 
#define WDT_PCELLD2_CID2_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the WDT_O_PCELLD3 register.
//
//*****************************************************************************
#define WDT_PCELLD3_CID3_M      0x000000FF  // WDT PrimeCell ID Register 
                                            // [31:24] 
#define WDT_PCELLD3_CID3_S      0


#endif // __HW_WDT_H__

