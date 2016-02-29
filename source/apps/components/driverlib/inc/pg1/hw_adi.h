/******************************************************************************
*  Filename:       hw_adi.h
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

#ifndef __HW_ADI_H__
#define __HW_ADI_H__

//*****************************************************************************
//
// This file contains macros for controlling the ADI master and
// accessing ADI slave registers via the ADI Master.
// There are 3 categories of macros in this file:
//                 - macros that provide an offset to a register
//                   located within the DDI Master itself.
//                 - macros that define bits or bitfields
//                   within the DDI Master Registers.
//                 - macros that provide an "instruction offset"
//                   that are used when accessing a ADI Slave.
//
// The macros that that provide ADI Master register offsets and
// define bits and bitfields for those registers are the typical
// macros that appear in most hw_<module>.h header files.  In
// the following example ADI_O_SLAVECONF is a macro for a
// register offset and ADI_SLAVECONF_WAITFORACK is a macro for
// a bit in that register. This example code will set the WAITFORACK
// bit in register ADI_O_SLAVECONF of the ADI Master. (Note: this
// access the Master not the Slave).
//
//    HWREG(ADI3_BASE + ADI_O_SLAVECONF) |= ADI_SLAVECONF_WAITFORACK;
//
// The "instruction offset" macros are used to pass an instruction to
// the ADI Master when accessing ADI slave registers. These macros are
// only used when accessing ADI Slave Registers. (Remember ADI
// Master Registers are accessed normally).
//
// The instructions supported when accessing an ADI Slave Register follow:
//        - Direct Access to an ADI Slave register. I.e. read or
//          write the register.
//        - Set the specified bits in a ADI Slave register.
//        - Clear the specified bits in a ADI Slave register.
//        - Mask write of 4 bits to the a ADI Slave register.
//        - Mask write of 8 bits to the a ADI Slave register.
//        - Mask write of 16 bits to the a ADI Slave register.
//
// Note: only the "Direct Access" offset should be used when reading
// a ADI Slave register. Only 4-bit reads are supported and 8 bits write are
// supported natively. If accessing wider bitfields, the read/write operation
// will be spread out over a number of transactions. This is hidden for the
// user, but can potentially be very timeconsuming. Especially of running
// on a slow clock.
//
// The generic format of using these macros for a read follows:
//       // Read low 8-bits in ADI_SLAVE_OFF
//       myushortvar = HWREGB(ADI_MASTER_BASE + ADI_SLAVE_OFF + ADI_O_DIR);
//
//       // Read high 8-bits in ADI_SLAVE_OFF (data[31:16])
//       myushortvar = HWREGB(ADI_MASTER_BASE + ADI_SLAVE_OFF + ADI_O_DIR);
//
// Notes: In the above example:
//     - ADI_MASTER_BASE is the base address of the ADI Master defined
//       in the hw_memmap.h header file.
//     - ADI_SLAVE_OFF is the ADI Slave offset defined in the
//       hw_<adi_slave>.h header file (e.g. hw_adi_3_refsys_top.h for the refsys
//       module).
//     - ADI_O_DIR is the "instruction offset" macro defined in this
//       file that specifies the Direct Access instruction.
//
// Writes can use any of the "instruction macros".
// The following examples do a "direct write" to an ADI Slave register
// ADI_SLAVE_OFF using different size operands:
//
//     // ---------- DIRECT WRITES ----------
//     // Write 32-bits aligned
//     HWREG(ADI_MASTER_BASE + ADI_SLAVE_OFF + ADI_O_DIR) = 0x12345678;
//
//     // Write 16-bits aligned to high 16-bits then low 16-bits
//     // Add 2 to get to high 16-bits.
//     HWREGH(ADI_MASTER_BASE + ADI_SLAVE_OFF + ADI_O_DIR + 2) = 0xabcd;
//     HWREGH(ADI_MASTER_BASE + ADI_SLAVE_OFF + ADI_O_DIR) = 0xef01;
//
//     // Write each byte at ADI_SLAVE_OFF, one at a time.
//     // Add 1,2,or 3 to get to bytes 1,2, or 3.
//     HWREGB(ADI_MASTER_BASE + ADI_SLAVE_OFF + ADI_O_DIR) = 0x33;
//     HWREGB(ADI_MASTER_BASE + ADI_SLAVE_OFF + ADI_O_DIR + 1) = 0x44;
//     HWREGB(ADI_MASTER_BASE + ADI_SLAVE_OFF + ADI_O_DIR + 2) = 0x55;
//     HWREGB(ADI_MASTER_BASE + ADI_SLAVE_OFF + ADI_O_DIR + 3) = 0x66;
//
//     // ---------- SET/CLR ----------
//     The set and clear functions behave similarly to eachother. Each
//     can be performed on an 8-, 16-, or 32-bit operand.
//     Examples follow:
//     // Set all odd bits in a 32-bit words
//     HWREG(ADI_MASTER_BASE + ADI_SLAVE_OFF + ADI_O_SET) = 0xaaaaaaaa;
//
//     // Clear all bits in byte 2 (data[23:16]) using 32-bit operand
//     HWREG(DDI_MASTER_BASE + ADI_SLAVE_OFF + ADI_O_CLR) = 0x00ff0000;
//
//     // Set even bits in byte 2 (data[23:16]) using 8-bit operand
//     HWREGB(ADI_MASTER_BASE + ADI_SLAVE_OFF + 2 + ADI_O_CLR) = 0x55;
//
//     // ---------- MASKED WRITES ----------
//     The mask writes are a bit different. They operate on nibbles,
//     bytes, and 16-bit elements. Two operands are required; a 'mask'
//     and 'data'; The operands are concatenated and written to the master.
//     e.g. the mask and data are combined as follows for a 16 bit masked
//     write:
//           (mask << 16) | data;
//     Examples follow:
//
//     // Do an 4 bit masked write (Nibble) of 7 to data[3:0]).
//     // Byte write is needed.
//     HWREGB(ADI_MASTER_BASE + ADI_SLAVE_OFF + ADI_O_MASK4B01) = 0xf7;
//
//     // Do an 4 bit masked write of 4 to data[7:4]).
//     // Add 1 for next nibble
//     HWREGB(DDI_MASTER_BASE + DDI_SLAVE_OFF + ADI_O_MASK4B01 + 1) = 0xf4;
//
//*****************************************************************************

//*****************************************************************************
//
// The following are defines for the ADI master instruction offsets.
//
//*****************************************************************************
#define ADI_O_DIR             0x00000000  // Offset for the direct access
                                          // instruction
#define ADI_O_SET             0x00000010  // Offset for 'Set' instruction.
#define ADI_O_CLR             0x00000020  // Offset for 'Clear' instruction.
#define ADI_O_MASK4B          0x00000040  // Offset for 4-bit masked access.
                                          // Data bit[n] is written if mask 
                                          // bit[n] is set ('1').
                                          // Bits 7:4 are mask. Bits 3:0 are data.
                                          // Requires 'byte' write.
#define ADI_O_MASK8B          0x00000060  // Offset for 8-bit masked access.
                                          // Data bit[n] is written if mask
                                          // bit[n] is set ('1'). Bits 15:8 are
                                          // mask. Bits 7:0 are data. Requires
                                          // 'short' write.
#define ADI_O_MASK16B         0x00000080  // Offset for 16-bit masked access.
                                          // Data bit[n] is written if mask
                                          // bit[n] is set ('1'). Bits 31:16
                                          // are mask. Bits 15:0 are data.
                                          // Requires 'long' write.

//*****************************************************************************
//
// The following are defines for the ADI register offsets.
//
//*****************************************************************************
#define ADI_O_SLAVESTAT         0x00000030  // ADI Slave status register 
#define ADI_O_SLAVECONF         0x00000038  // ADI Master configuration 

//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_O_SLAVESTAT register.
//
//*****************************************************************************
#define ADI_SLAVESTAT_DI_REQ    0x00000002  // Read current value of DI_REQ 
                                            // signal. Writing 0 to this bit 
                                            // forces a sync with slave, 
                                            // ensuring that req will be 0. It 
                                            // is recommended to write 0 to 
                                            // this register before power down 
                                            // of the master. 
#define ADI_SLAVESTAT_DI_REQ_M  0x00000002
#define ADI_SLAVESTAT_DI_REQ_S  1
#define ADI_SLAVESTAT_DI_ACK    0x00000001  // Read current value of DI_ACK 
                                            // signal 
#define ADI_SLAVESTAT_DI_ACK_M  0x00000001
#define ADI_SLAVESTAT_DI_ACK_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_O_SLAVECONF register.
//
//*****************************************************************************
#define ADI_SLAVECONF_CONFLOCK  0x00000080  // This register is no longer 
                                            // accessible when this bit is set. 
                                            // (unless sticky_bit_overwrite is 
                                            // asserted on top module) 
#define ADI_SLAVECONF_CONFLOCK_M \
                                0x00000080
#define ADI_SLAVECONF_CONFLOCK_S 7
#define ADI_SLAVECONF_WAITFORACK \
                                0x00000004  // A transaction on the ADI 
                                            // interface does not end until ack 
                                            // has been received from the slave 
                                            // when this bit is set. 

#define ADI_SLAVECONF_WAITFORACK_M \
                                0x00000004
#define ADI_SLAVECONF_WAITFORACK_S 2
#define ADI_SLAVECONF_ADICLKSPEED_M \
                                0x00000003  // Sets the period of an ADI 
                                            // transactions. All transactions 
                                            // takes an even number of clock 
                                            // cycles,- ADI clock rising edge 
                                            // occurs in the middle of the 
                                            // period. Data and ctrl to slave 
                                            // is set up in beginning of cycle, 
                                            // and data from slave is read in 
                                            // after the transaction 00: An ADI 
                                            // transaction takes 2 master clock 
                                            // cyclkes 01: An ADI transaction 
                                            // takes 4 master clock cycles 10: 
                                            // And ADI Transaction takes 8 
                                            // master clock cycles 11: An ADI 
                                            // transaction takes 16 master 
                                            // clock cycles 

#define ADI_SLAVECONF_ADICLKSPEED_S 0


#endif // __HW_ADI_H__

