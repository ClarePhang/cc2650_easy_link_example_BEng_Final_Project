/******************************************************************************
*  Filename:       ddi.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the DDI master interface.
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

//*****************************************************************************
//
//! \addtogroup ddi_api
//! @{
//
//*****************************************************************************

#ifndef __DDI_H__
#define __DDI_H__

//*****************************************************************************
//
// If building with a C++ compiler, make all of the definitions in this header
// have a C binding.
//
//*****************************************************************************
#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdint.h>
#include "hw_types.h"
#include "inc/pg2/hw_memmap_pg2.h"
#include "source/pg2/hw_ddi_pg2.h"
#include "debug.h"

//LH: Similar to the definition in adi.h, the linking to the memory map header is broken for unknown reasons  
 
#define AUX_OSCDDI_BASE         0x400CA000
  
//*****************************************************************************
//
// Number of register in the DDI slave
//
//*****************************************************************************
#define DDI_SLAVE_REGS          64

//*****************************************************************************
//
// Defines that can be passed to the DDIConfigSet()
//
//*****************************************************************************
#define DDI_NO_WAIT         0x00000000
#define DDI_WAIT_FOR_ACK    0x00000004
#define DDI_SPEED_2         0x00000000
#define DDI_SPEED_4         0x00000001
#define DDI_SPEED_8         0x00000002
#define DDI_SPEED_16        0x00000003
#define DDI_CONFIG_MASK     0x00000007

//*****************************************************************************
//
// Defines that is used to control the ADI slave and master
//
//*****************************************************************************
#define DDI_PROTECT         0x00000080
#define DDI_ACK             0x00000001
#define DDI_SYNC            0x00000000

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// uint32_t DDIStatusGet(uint32_t ui32Base);
// void DDIConfigSet(uint32_t ui32Base, uint32_t ui32Config,
//                   bool bProtect);
// void DDISync(uint32_t ui32Base);
// void DDIProtect(uint32_t ui32Base);
// void DDI32RegWrite(uint32_t ui32Base, uint32_t ui32Reg,
//                    uint32_t ui32Val);
// uint32_t DDI32RegRead(uint32_t ui32Base, uint32_t ui32Reg);
// void DDI32BitsSet(uint32_t ui32Base, uint32_t ui32Reg, 
//                   uint32_t ui32Val);
// void DDI32BitsClear(uint32_t ui32Base, uint32_t ui32Reg, 
//                     uint32_t ui32Val);
// void DDI8SetValBit(uint32_t ui32Base, uint32_t ui32Reg,
//                    uint32_t ui32Byte, uint16_t ui16Mask,
//                    uint16_t ui16Val);
// void DDI16SetValBit(uint32_t ui32Base, uint32_t ui32Reg,
//                     bool bWriteHigh, uint32_t ui32Mask,
//                     uint32_t ui32Val);
// void DDI16BitWrite(uint32_t ui32Base, uint32_t ui32Offset,
//                    uint32_t ui32Mask, uint32_t ui32WrData);
// void DDI16BitfieldWrite(uint32_t ui32Base, uint32_t ui32Offset,
//                         uint32_t ui32Mask, uint32_t ui32Shift,
//                         uint16_t ui32Data);
// uint16_t DDI16BitRead(uint32_t ui32Base, uint32_t ui32Offset,
//                       uint32_t ui32Mask);
// uint16_t DDI16BitfieldRead(uint32_t ui32Base, uint32_t ui32Offset,
//                            uint32_t ui32Mask, uint32_t ui32Shift);

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

//*****************************************************************************
//
//! \internal
//! Checks an DDI base address
//!
//! \param ui32Base is the base address of the DDI port.
//!
//! This function determines if a DDI port base address is valid.
//!
//! \return Returns \b true if the base address is valid and \b false
//! otherwise.
//
//*****************************************************************************
#ifdef DEBUG
static bool
DDIBaseValid(uint32_t ui32Base)
{
    //PG 1.0
    return(ui32Base == AUX_OSCDDI_BASE);
    //PG 2.0
    //return(ui32Base == AUX_DDI0_OSC_BASE);
}
#endif

//*****************************************************************************
//
//! Get the status of the DDI
//!
//! \param ui32Base is DDI base address.
//!
//! This function will get the value of the status register. Value that can
//! be passed to this function are DDI.
//!
//! \return Returns the current value of the status register.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
DDIStatusGet(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(DDIBaseValid(ui32Base));

    //
    // Return the status value for the correct DDI Slave.
    //
    return(HWREG(ui32Base + DDI_O_SLAVESTAT));
}

//*****************************************************************************
//
//! Configure the DDI Slave
//!
//! \param ui32Base is DDI base address.
//! \param ui32Config is the configuration of the DDI slave.
//! \param bProtect decides if the register access should be protected.
//!
//! Use this function to configure the interface between the DDI master and the
//! DDI slave. The configuration values for the DDI slave is used to set the
//! speed of the DDI interface and define if the master should wait for
//! acknowledge from the slave. The speed is set using \b DDI_SPEED_2,
//! \b DDI_SPEED_4, \b DDI_SPEED_8 or DDI_SPEED_16. The acknowledge is set
//! using \b DDI_NO_WAIT or \b DDI_WAIT_FOR_ACK. The configuration value must
//! be a bitwised OR'ed combination of these two features.
//!
//! If the \b bProtect parameter is set, the register in the ADI slave are
//! locked for write.
//!
//! \note Once the PROTECT bit has been set, it is no longer possible to access
//! the configuration registers.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
DDIConfigSet(uint32_t ui32Base, uint32_t ui32Config, bool bProtect)
{
    //
    // Check the arguments.
    //
    ASSERT(DDIBaseValid(ui32Base));
    ASSERT(((ui32Config & 0x4) == DDI_NO_WAIT) ||
           ((ui32Config & 0x4) == DDI_WAIT_FOR_ACK));
    ASSERT(((ui32Config & 0x3) == DDI_SPEED_2) ||
           ((ui32Config & 0x3) == DDI_SPEED_4) ||
           ((ui32Config & 0x3) == DDI_SPEED_8) ||
           ((ui32Config & 0x3) == DDI_SPEED_16));

    //
    // Configure the DDI slave.
    //
    HWREG(ui32Base + DDI_O_SLAVECONF) = (ui32Config & 0x7) |
                                        (bProtect ? DDI_PROTECT : 0);
}

//*****************************************************************************
//
//! Synchronize an DDI slave
//!
//! \param ui32Base is DDI base address.
//!
//! This function will perform a sync on the DDI slave by issuing a NOOP
//! DDI/DDI command to the master with REQ=0. In other words, the master
//! performs a dummy write request to ensure the master and slave are
//! synchronized.
//!
//! \note It is recommended to sync with all the DDI slaves before a power down
//! of a DDI master.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
DDISync(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(DDIBaseValid(ui32Base));

    //
    // Synchronize the DDI slave to guarantee future write operations.
    //
    HWREGB(ui32Base + DDI_O_SLAVESTAT) = DDI_SYNC;
}

//*****************************************************************************
//
//! Protect an DDI slave by locking the register access
//!
//! \param ui32Base is DDI base address.
//!
//! This function will lock the register interface to the DDI.
//! \note Once locked it is no longer possible to change the register in the
//! DDI slave.
//!
//! \note This function uses read-modify-write to guarantee the integrity of
//! the configuration. This might take exceedingly long time, so if the
//! configuration is known, it is advised to use the DDIConfig() for
//! protecting the DDI slave configurition
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
DDIProtect(uint32_t ui32Base)
{
    uint32_t ui32Val;

    //
    // Check the arguments.
    //
    ASSERT(DDIBaseValid(ui32Base));

    //
    // Lock the register interface on the DDI slave.
    //
    ui32Val = HWREG(ui32Base + DDI_O_SLAVECONF);
    ui32Val |= DDI_PROTECT;
    HWREG(ui32Base + DDI_O_SLAVECONF) = ui32Val;
}

//*****************************************************************************
//
//! Write a 32 bit value to a register in the DDI slave
//!
//! \param ui32Base is DDI base address.
//! \param ui32Reg is the register to write.
//! \param ui32Val is the 32 bit value to write to the register.
//!
//! This function will write a value to a register in the analog
//! domain.
//!
//! \note This operation is write only for the specified register. No
//! conservation of the previous value of the register will be kept (ie. this
//! is NOT read-modify-write on the register).
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
DDI32RegWrite(uint32_t ui32Base, uint32_t ui32Reg,
              uint32_t ui32Val)
{
    //
    // Check the arguments.
    //
    ASSERT(DDIBaseValid(ui32Base));
    ASSERT(ui32Reg < DDI_SLAVE_REGS);

    //
    // Write the value to the register.
    //
    HWREG(ui32Base + ui32Reg) = ui32Val;
}

//*****************************************************************************
//
//! Read the value in a 32 bit register
//!
//! \param ui32Base is DDI base address.
//! \param ui32Reg is the 32 bit register to read.
//!
//! This function will read a register in the analog domain and return
//! the value as an uint32_t.
//!
//! \return Returns the 32 bit value of the analog register.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
DDI32RegRead(uint32_t ui32Base, uint32_t ui32Reg)
{
    //
    // Check the arguments.
    //
    ASSERT(DDIBaseValid(ui32Base));
    ASSERT(ui32Reg < DDI_SLAVE_REGS);

    //
    // Read the register and return the value.
    //
    return(HWREG(ui32Base + ui32Reg));
}

//*****************************************************************************
//
//! Set specific bits in a DDI slave register
//!
//! \param ui32Base is DDI base address.
//! \param ui32Reg is the base register to assert the bits in.
//! \param ui32Val is the 32 bit one-hot encoded value specifying which
//! bits to set in the register.
//!
//! This function will set bits in a register in the analog domain.
//!
//! \note This operation is write only for the specified register.
//! This function is used to set bits in specific register in the
//! DDI slave. Only bits in the selected register is affected by the
//! operation.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
DDI32BitsSet(uint32_t ui32Base, uint32_t ui32Reg, uint32_t ui32Val)
{
    uint32_t ui32RegOffset;

    //
    // Check the arguments.
    //
    ASSERT(DDIBaseValid(ui32Base));
    ASSERT(ui32Reg < DDI_SLAVE_REGS);

    //
    // Get the correct address of the first register used for setting bits
    // in the DDI slave.
    //
    ui32RegOffset = DDI_O_SET;

    //
    // Set the selected bits.
    //
    HWREG(ui32Base + ui32RegOffset + ui32Reg) = ui32Val;
}

//*****************************************************************************
//
//! Clear specific bits in a 32 bit DDI register
//!
//! \param ui32Base is DDI base address.
//! \param ui32Reg is the base registers to clear the bits in.
//! \param ui32Val is the 32 bit one-hot encoded value specifying which
//! which bits to clear in the register.
//!
//! This function will clear bits in a register in the analog domain.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
DDI32BitsClear(uint32_t ui32Base, uint32_t ui32Reg,
               uint32_t ui32Val)
{
    uint32_t ui32RegOffset;

    //
    // Check the arguments.
    //
    ASSERT(DDIBaseValid(ui32Base));
    ASSERT(ui32Reg < DDI_SLAVE_REGS);

    //
    // Get the correct address of the first register used for setting bits
    // in the DDI slave.
    //
    ui32RegOffset = DDI_O_CLR;

    //
    // Set the selected bits.
    //
    HWREG(ui32Base + ui32RegOffset + ui32Reg) = ui32Val;
}

//*****************************************************************************
//
//! Set a value on any 8 bits inside a 32 bit register in the DDI slave
//!
//! \param ui32Base is the base address of the DDI port.
//! \param ui32Reg is the Least Significant Register in the DDI slave that
//! will be affected by the write operation.
//! \param ui32Byte is the byte number to access within the 32 bit register.
//! \param ui16Mask is the mask defining which of the 8 bit that should be
//! overwritten. The mask must be defined in the lower half of the 16 bits.
//! \param ui16Val is the value to write. The value must be defined in the lower
//! half of the 16 bits.
//!
//! This function allows byte (8 bit access) to the DDI slave registers.
//!
//! Use this function to write any value in the range 0-7 bits aligned on a
//! byte boundary. Fx. for writing the value 0b101 to bits 1 and 3 the
//! \e ui16Val = 0x0A and the \e ui16Mask = 0x0E. Bits 0,5-7 will not be affected
//! by the operation, as long as the corresponding bits are not set in the
//! \e ui16Mask.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
DDI8SetValBit(uint32_t ui32Base, uint32_t ui32Reg, uint32_t ui32Byte,
              uint16_t ui16Mask, uint16_t ui16Val)
{
    uint32_t ui32RegOffset;

    //
    // Check the arguments.
    //
    ASSERT(DDIBaseValid(ui32Base));
    ASSERT(ui32Reg < DDI_SLAVE_REGS);
    ASSERT(!(ui16Val & 0xFF00));
    ASSERT(!(ui16Mask & 0xFF00));

    //
    // Get the correct address of the first register used for setting bits
    // in the DDI slave.
    //
    ui32RegOffset = DDI_O_MASK8B + (ui32Reg << 1) + (ui32Byte << 1);

    //
    // Set the selected bits.
    //
    HWREGH(ui32Base + ui32RegOffset) = (ui16Mask << 8) | ui16Val;
}

//*****************************************************************************
//
//! Set a value on any 16 bits inside an 32 bit register aligned on a
//! half-word boundary in the DDI slave.
//!
//! \param ui32Base is the base address of the DDI port.
//! \param ui32Reg is register to access.
//! \param bWriteHigh defines which part of the register to write in.
//! \param ui32Mask is the mask defining which of the 16 bit that should be
//! overwritten. The mask must be defined in the lower half of the 32 bits.
//! \param ui32Val is the value to write. The value must be defined in the lower
//! half of the 32 bits.
//!
//! This function allows byte 16 bit masked access to the DDI slave registers.
//!
//! Use this function to write any value in the range 0-15 bits aligned on a
//! half-word boundary. Fx. for writing the value 0b101 to bits 1 and 3 the
//! \e ui32Val = 0x000A and the \e ui32Mask = 0x000E. Bits 0,5-15 will not be
//! affected by the operation, as long as the corresponding bits are not set
//! in the \e ui32Mask.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
DDI16SetValBit(uint32_t ui32Base, uint32_t ui32Reg, bool bWriteHigh,
               uint32_t ui32Mask, uint32_t ui32Val)
{
    uint32_t ui32RegOffset;

    //
    // Check the arguments.
    //
    ASSERT(DDIBaseValid(ui32Base));
    ASSERT(ui32Reg < DDI_SLAVE_REGS);
    ASSERT(!(ui32Val & 0xFFFF0000));
    ASSERT(!(ui32Mask & 0xFFFF0000));

    //
    // Get the correct address of the first register used for setting bits
    // in the DDI slave.
    //
    ui32RegOffset = DDI_O_MASK16B + (ui32Reg << 1) + (bWriteHigh ? 4 : 0);

    //
    // Set the selected bits.
    //
    HWREG(ui32Base + ui32RegOffset) = (ui32Mask << 16) | ui32Val;
}

//*****************************************************************************
//
//! Write a single bit using a 16-bit maskable write
//!
//! \param ui32Base is the base address of the DDI port.
//! \param ui32Reg is register to access.
//! \param ui32Mask is the mask defining which of the 16 bit that should be
//! overwritten. The mask must be defined in the lower half of the 32 bits.
//! \param ui32WrData is the value to write. The value must be defined in the lower
//! half of the 32 bits.
//!
//! A '1' is written to the bit if 'data' is non-zero, else a '0' is written.
//!
//! \return None
//
//*****************************************************************************
extern void DDI16BitWrite(uint32_t ui32Base, uint32_t ui32Reg, 
                          uint32_t ui32Mask, uint32_t ui32WrData);


//*****************************************************************************
//
//! Write a bitfield via the DDI using 16-bit maskable write
//! Requires that bitfields not space the low/high word boundary
//!
//! \param ui32Base is the base address of the DDI port.
//! \param ui32Reg is register to access.
//! \param ui32Mask is the mask defining which of the 16 bits that should be
//! overwritten. The mask must be defined in the lower half of the 32 bits.
//! \param ui32Shift
//! \param ui32Data
//!
//!
//! TBD - expand documentation
//!
//! \return None
//
//*****************************************************************************
extern void DDI16BitfieldWrite(uint32_t ui32Base, uint32_t ui32Reg,
                               uint32_t ui32Mask, uint32_t ui32Shift,
                               uint16_t ui32Data);

//*****************************************************************************
//
//! Read a bit via the DDI using 16-bit READ.
//! Return a zero if bit selected by mask is '0'. Else returns the mask.
//!
//! \param ui32Base is the base address of the DDI module.
//! \param ui32Reg is the register to read.
//! \param ui32Mask defines the bit which should be read.
//!
//! TBD - expand documentation
//!
//! \return None
//
//*****************************************************************************
extern uint16_t DDI16BitRead(uint32_t ui32Base, uint32_t ui32Reg,
                             uint32_t ui32Mask);

//*****************************************************************************
//
//! Read a bitfield via the DDI using 16-bit READ.
//!
//! \param ui32Base is the base address of the DDI port.
//! \param ui32Reg is register to access.
//! \param ui32Mask is the mask defining which of the 16 bits that should be
//! overwritten. The mask must be defined in the lower half of the 32 bits.
//! \param ui32Shift defines the required shift of the data to align with bit 0.
//!
//! Requires that bitfields not space the low/high word boundary
//! Return data aligned to bit 0.
//!
//! TBD - expand documentation
//!
//! \return None
//
//*****************************************************************************
extern uint16_t DDI16BitfieldRead(uint32_t ui32Base, uint32_t ui32Reg,
                                  uint32_t ui32Mask, uint32_t ui32Shift);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __DDI_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
