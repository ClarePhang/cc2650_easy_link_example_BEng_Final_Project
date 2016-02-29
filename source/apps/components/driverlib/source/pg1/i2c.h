/******************************************************************************
*  Filename:       i2c.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the I2C.
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
//! \addtogroup i2c_api
//! @{
//
//*****************************************************************************

#ifndef __I2C_H__
#define __I2C_H__

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
#include "hw_ints.h"
#include "hw_memmap.h"
#include "hw_i2c.h"
#include "hw_sysctl.h"
#include "debug.h"
#include "interrupt.h"

//*****************************************************************************
//
// I2C Master commands
//
//*****************************************************************************
#define I2C_MASTER_CMD_SINGLE_SEND                                            \
                                0x00000007
#define I2C_MASTER_CMD_SINGLE_RECEIVE                                         \
                                0x00000007
#define I2C_MASTER_CMD_BURST_SEND_START                                       \
                                0x00000003
#define I2C_MASTER_CMD_BURST_SEND_CONT                                        \
                                0x00000001
#define I2C_MASTER_CMD_BURST_SEND_FINISH                                      \
                                0x00000005
#define I2C_MASTER_CMD_BURST_SEND_ERROR_STOP                                  \
                                0x00000004
#define I2C_MASTER_CMD_BURST_RECEIVE_START                                    \
                                0x0000000b
#define I2C_MASTER_CMD_BURST_RECEIVE_CONT                                     \
                                0x00000009
#define I2C_MASTER_CMD_BURST_RECEIVE_FINISH                                   \
                                0x00000005
#define I2C_MASTER_CMD_BURST_RECEIVE_ERROR_STOP                               \
                                0x00000004

//*****************************************************************************
//
// I2C Master error status
//
//*****************************************************************************
#define I2C_MASTER_ERR_NONE     0
#define I2C_MASTER_ERR_ADDR_ACK 0x00000004
#define I2C_MASTER_ERR_DATA_ACK 0x00000008
#define I2C_MASTER_ERR_ARB_LOST 0x00000010

//*****************************************************************************
//
// I2C Slave action requests
//
//*****************************************************************************
#define I2C_SLAVE_ACT_NONE      0
#define I2C_SLAVE_ACT_RREQ      0x00000001  // Master has sent data
#define I2C_SLAVE_ACT_TREQ      0x00000002  // Master has requested data
#define I2C_SLAVE_ACT_RREQ_FBR  0x00000005  // Master has sent first byte

//*****************************************************************************
//
// I2C Slave interrupts
//
//*****************************************************************************
#define I2C_SLAVE_INT_STOP      0x00000004  // Stop Condition Interrupt.
#define I2C_SLAVE_INT_START     0x00000002  // Start Condition Interrupt.
#define I2C_SLAVE_INT_DATA      0x00000001  // Data Interrupt.

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// void I2CIntRegister(uint32_t ui32Base, void (*pfnHandler)(void));
// void I2CIntUnregister(uint32_t ui32Base);
// bool I2CMasterBusBusy(uint32_t ui32Base);
// bool I2CMasterBusy(uint32_t ui32Base);
// void I2CMasterControl(uint32_t ui32Base, uint32_t ui32Cmd);
// uint32_t I2CMasterDataGet(uint32_t ui32Base);
// void I2CMasterDataPut(uint32_t ui32Base, uint8_t ui8Data);
// void I2CMasterDisable(uint32_t ui32Base);
// void I2CMasterEnable(uint32_t ui32Base);
// uint32_t I2CMasterErr(uint32_t ui32Base);
// void I2CMasterInitExpClk(uint32_t ui32Base, uint32_t ui32I2CClk,
//                          bool bFast);
// void I2CMasterIntClear(uint32_t ui32Base);
// void I2CMasterIntDisable(uint32_t ui32Base);
// void I2CMasterIntEnable(uint32_t ui32Base);
// bool I2CMasterIntStatus(uint32_t ui32Base, bool bMasked);
// void I2CMasterSlaveAddrSet(uint32_t ui32Base, uint8_t ui8SlaveAddr,
//                            bool bReceive);
// uint32_t I2CSlaveDataGet(uint32_t ui32Base);
// void I2CSlaveDataPut(uint32_t ui32Base, uint8_t ui8Data);
// void I2CSlaveDisable(uint32_t ui32Base);
// void I2CSlaveEnable(uint32_t ui32Base);
// void I2CSlaveInit(uint32_t ui32Base, uint8_t ui8SlaveAddr);
// void I2CSlaveAddressSet(uint32_t ui32Base, uint8_t ui8SlaveAddr);
// void I2CSlaveIntClear(uint32_t ui32Base, uint32_t ui32IntFlags);
// void I2CSlaveIntDisable(uint32_t ui32Base, uint32_t ui32IntFlags);
// void I2CSlaveIntEnable(uint32_t ui32Base, uint32_t ui32IntFlags);
// uint32_t I2CSlaveIntStatus(uint32_t ui32Base, bool bMasked);
// uint32_t I2CSlaveStatus(uint32_t ui32Base);

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

//*****************************************************************************
//
//! \internal
//! Checks an I2C base address
//!
//! \param ui32Base is the base address of the I2C port.
//!
//! This function determines if a I2C port base address is valid.
//!
//! \return Returns \b true if the base address is valid and \b false
//! otherwise
//
//*****************************************************************************
#ifdef DEBUG
static bool
I2CBaseValid(uint32_t ui32Base)
{
    return(ui32Base == I2C0_BASE);
}
#endif

//*****************************************************************************
//
//! Initializes the I2C Master block
//!
//! \param ui32Base is the base address of the I2C module.
//! \param ui32I2CClk is the rate of the clock supplied to the I2C module.
//! \param bFast set up for fast data transfers
//!
//! This function initializes operation of the I2C Master block. Upon
//! successful initialization of the I2C block, this function will have set the
//! bus speed for the master, and will have enabled the I2C Master block.
//!
//! If the parameter \b bFast is \b true, then the master block will be set up
//! to transfer data at 400 kbps; otherwise, it will be set up to transfer data
//! at 100 kbps.
//!
//! The peripheral clock will be the same as the domain clock. This will be the
//! value returned by the SysCtrlPeriphClockGet or it can be explicitly
//! hard coded if it is constant and known (to save the code/execution
//! overhead of a call to SysCtrlPeriphClockGet()).
//!
//! \return None
//
//*****************************************************************************
extern void I2CMasterInitExpClk(uint32_t ui32Base, uint32_t ui32I2CClk,
                                bool bFast);

//*****************************************************************************
//
//! Controls the state of the I2C Master module
//!
//! \param ui32Base is the base address of the I2C module.
//! \param ui32Cmd is the command to be issued by the I2C Master module
//!
//! This function is used to control the state of the Master module send and
//! receive operations. The \b ui32Cmd parameter can be one of the following
//! values
//! \b I2C_MASTER_CMD_SINGLE_SEND, \b I2C_MASTER_CMD_SINGLE_RECEIVE,
//! \b I2C_MASTER_CMD_BURST_SEND_START, \b I2C_MASTER_CMD_BURST_SEND_CONT,
//! \b I2C_MASTER_CMD_BURST_SEND_FINISH,
//! \b I2C_MASTER_CMD_BURST_SEND_ERROR_STOP,
//! \b I2C_MASTER_CMD_BURST_RECEIVE_START,
//! \b I2C_MASTER_CMD_BURST_RECEIVE_CONT,
//! \b I2C_MASTER_CMD_BURST_RECEIVE_FINISH,
//! \b I2C_MASTER_CMD_BURST_RECEIVE_ERROR_STOP.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CMasterControl(uint32_t ui32Base, uint32_t ui32Cmd)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));
    ASSERT((ui32Cmd == I2C_MASTER_CMD_SINGLE_SEND) ||
           (ui32Cmd == I2C_MASTER_CMD_SINGLE_RECEIVE) ||
           (ui32Cmd == I2C_MASTER_CMD_BURST_SEND_START) ||
           (ui32Cmd == I2C_MASTER_CMD_BURST_SEND_CONT) ||
           (ui32Cmd == I2C_MASTER_CMD_BURST_SEND_FINISH) ||
           (ui32Cmd == I2C_MASTER_CMD_BURST_SEND_ERROR_STOP) ||
           (ui32Cmd == I2C_MASTER_CMD_BURST_RECEIVE_START) ||
           (ui32Cmd == I2C_MASTER_CMD_BURST_RECEIVE_CONT) ||
           (ui32Cmd == I2C_MASTER_CMD_BURST_RECEIVE_FINISH) ||
           (ui32Cmd == I2C_MASTER_CMD_BURST_RECEIVE_ERROR_STOP));

    //
    // Send the command.
    //
    HWREG(ui32Base + I2C_O_MCTRL) = ui32Cmd;
}

//*****************************************************************************
//
//! Sets the address that the I2C Master will place on the bus
//!
//! \param ui32Base is the base address of the I2C module.
//! \param ui8SlaveAddr is a 7-bit slave address
//! \param bReceive flag indicates the type of communication with the slave
//!
//! This function will set the address that the I2C Master will place on the
//! bus when initiating a transaction. When the \e bReceive parameter is set
//! to \b true, the address will indicate that the I2C Master is initiating a
//! read from the slave; otherwise the address will indicate that the I2C
//! Master is initiating a write to the slave.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CMasterSlaveAddrSet(uint32_t ui32Base, uint8_t ui8SlaveAddr,
                      bool bReceive)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));
    ASSERT(!(ui8SlaveAddr & 0x80));

    //
    // Set the address of the slave with which the master will communicate.
    //
    HWREG(ui32Base + I2C_O_MSA) = (ui8SlaveAddr << 1) | bReceive;
}

//*****************************************************************************
//
//! Enables the I2C Master block
//!
//! \param ui32Base is the base address of the I2C module.
//!
//! This will enable operation of the I2C Master block.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CMasterEnable(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Enable the clock for the master.
    //
    HWREG(ui32Base + I2C_O_MCR) |= I2C_MCR_MFE;

    //
    // Enable the master block.
    //
    HWREG(ui32Base + I2C_O_MCTRL) = I2C_MCTRL_RUN;
}

//*****************************************************************************
//
//! Disables the I2C master block
//!
//! \param ui32Base is the base address of the I2C module.
//!
//! This will disable operation of the I2C master block.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CMasterDisable(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Disable the master block.
    //
    HWREG(ui32Base + I2C_O_MCTRL) = 0;

    //
    // Disable the clock for the master.
    //
    HWREG(ui32Base + I2C_O_MCR) &= ~I2C_MCR_MFE;
}

//*****************************************************************************
//
//! Indicates whether or not the I2C Master is busy
//!
//! \param ui32Base is the base address of the I2C module.
//!
//! This function returns an indication of whether or not the I2C Master is
//! busy transmitting or receiving data.
//!
//! \return Returns \b true if the I2C Master is busy; otherwise, returns
//! \b false.
//
//*****************************************************************************
__STATIC_INLINE bool
I2CMasterBusy(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Return the busy status.
    //
    if(HWREG(ui32Base + I2C_O_MSTAT) & I2C_MSTAT_BUSY)
    {
        return(true);
    }
    else
    {
        return(false);
    }
}

//*****************************************************************************
//
//! Indicates whether or not the I2C bus is busy
//!
//! \param ui32Base is the base address of the I2C module.
//!
//! This function returns an indication of whether or not the I2C bus is busy.
//! This function can be used in a multi-master environment to determine if
//! another master is currently using the bus.
//!
//! \return Returns \b true if the I2C bus is busy; otherwise, returns
//! \b false.
//
//*****************************************************************************
__STATIC_INLINE bool
I2CMasterBusBusy(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Return the bus busy status.
    //
    if(HWREG(ui32Base + I2C_O_MSTAT) & I2C_MSTAT_BUSBSY)
    {
        return(true);
    }
    else
    {
        return(false);
    }
}

//*****************************************************************************
//
//! Receives a byte that has been sent to the I2C Master
//!
//! \param ui32Base is the base address of the I2C module.
//!
//! This function reads a byte of data from the I2C Master Data Register.
//!
//! \return Returns the byte received from by the I2C Master, cast as an
//! uint32_t.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
I2CMasterDataGet(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Read a byte.
    //
    return(HWREG(ui32Base + I2C_O_MDR));
}

//*****************************************************************************
//
//! Transmits a byte from the I2C Master
//!
//! \param ui32Base is the base address of the I2C module.
//! \param ui8Data is the data to be transmitted by the I2C Master
//!
//! This function will place the supplied data into I2C Master Data Register.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CMasterDataPut(uint32_t ui32Base, uint8_t ui8Data)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Write the byte.
    //
    HWREG(ui32Base + I2C_O_MDR) = ui8Data;
}

//*****************************************************************************
//
//! Gets the error status of the I2C Master module
//!
//! \param ui32Base is the base address of the I2C module.
//!
//! This function is used to obtain the error status of the Master module send
//! and receive operations.
//!
//! \return Returns the error status, as one of \b I2C_MASTER_ERR_NONE,
//! \b I2C_MASTER_ERR_ADDR_ACK, \b I2C_MASTER_ERR_DATA_ACK, or
//! \b I2C_MASTER_ERR_ARB_LOST.
//
//*****************************************************************************
extern uint32_t I2CMasterErr(uint32_t ui32Base);

//*****************************************************************************
//
//! Enables the I2C Master interrupt
//!
//! \param ui32Base is the base address of the I2C module.
//!
//! Enables the I2C Master interrupt source.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CMasterIntEnable(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Enable the master interrupt.
    //
    HWREG(ui32Base + I2C_O_MIMR) = I2C_MIMR_IM;
}

//*****************************************************************************
//
//! Disables the I2C Master interrupt
//!
//! \param ui32Base is the base address of the I2C module.
//!
//! Disables the I2C Master interrupt source.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CMasterIntDisable(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Disable the master interrupt.
    //
    HWREG(ui32Base + I2C_O_MIMR) = 0;
}

//*****************************************************************************
//
//! Clears I2C Master interrupt sources
//!
//! \param ui32Base is the base address of the I2C module.
//!
//! The I2C Master interrupt source is cleared, so that it no longer asserts.
//! This must be done in the interrupt handler to keep it from being called
//! again immediately upon exit.
//!
//! \note Because there is a write buffer in the Cortex-M3 processor, it may
//! take several clock cycles before the interrupt source is actually cleared.
//! Therefore, it is recommended that the interrupt source be cleared early in
//! the interrupt handler (as opposed to the very last action) to avoid
//! returning from the interrupt handler before the interrupt source is
//! actually cleared. Failure to do so may result in the interrupt handler
//! being immediately reentered (because the interrupt controller still sees
//! the interrupt source asserted).
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CMasterIntClear(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Clear the I2C master interrupt source.
    //
    HWREG(ui32Base + I2C_O_MICR) = I2C_MICR_IC;
}

//*****************************************************************************
//
//! Gets the current I2C Master interrupt status
//!
//! \param ui32Base is the base address of the I2C Master module.
//! \param bMasked is false if the raw interrupt status is requested and
//! true if the masked interrupt status is requested.
//!
//! This returns the interrupt status for the I2C Master module. Either the
//! raw interrupt status or the status of interrupts that are allowed to
//! reflect to the processor can be returned.
//!
//! \return The current interrupt status, returned as \b true if active
//! or \b false if not active.
//
//*****************************************************************************
__STATIC_INLINE bool
I2CMasterIntStatus(uint32_t ui32Base, bool bMasked)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Return either the interrupt status or the raw interrupt status as
    // requested.
    //
    if(bMasked)
    {
        return((HWREG(ui32Base + I2C_O_MMIS)) ? true : false);
    }
    else
    {
        return((HWREG(ui32Base + I2C_O_MRIS)) ? true : false);
    }
}

//*****************************************************************************
//
//! Enables the I2C Slave block
//!
//! \param ui32Base is the base address of the I2C Slave module.
//!
//! This will enable operation of the I2C Slave block.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CSlaveEnable(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Enable the clock to the slave block.
    //
    HWREG(ui32Base + I2C_O_MCR) |= I2C_MCR_SFE;

    //
    // Enable the slave.
    //
    HWREG(ui32Base + I2C_O_SCTL) = I2C_SCTL_DA;
}

//*****************************************************************************
//
//! Initializes the I2C Slave block
//!
//! \param ui32Base is the base address of the I2C Slave module.
//! \param ui8SlaveAddr is the 7-bit slave address
//!
//! This function initializes operation of the I2C Slave block. Upon
//! successful initialization of the I2C blocks, this function will have set
//! the slave address and have enabled the I2C Slave block.
//!
//! The parameter \e ui8SlaveAddr is the value that will be compared against the
//! slave address sent by an I2C master.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CSlaveInit(uint32_t ui32Base, uint8_t ui8SlaveAddr)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));
    ASSERT(!(ui8SlaveAddr & 0x80));

    //
    // Must enable the device before doing anything else.
    //
    I2CSlaveEnable(ui32Base);

    //
    // Set up the slave address.
    //
    HWREG(ui32Base + I2C_O_SOAR) = ui8SlaveAddr;
}

//*****************************************************************************
//
//! Sets the I2C slave address.
//!
//! \param ui32Base is the base address of the I2C Slave module.
//! \param ui8SlaveAddr is the 7-bit slave address
//!
//! This function writes the specified slave address. 
//!
//! \return None.
//
//*****************************************************************************
__STATIC_INLINE void
I2CSlaveAddressSet(uint32_t ui32Base, uint8_t ui8SlaveAddr)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));
    ASSERT(!(ui8SlaveAddr & 0x80));

    //
    // Set up the primary slave address.
    //
    HWREG(ui32Base + I2C_O_SOAR) = ui8SlaveAddr;
}

//*****************************************************************************
//
//! Disables the I2C slave block
//!
//! \param ui32Base is the base address of the I2C Slave module.
//!
//! This will disable operation of the I2C slave block.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CSlaveDisable(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Disable the slave.
    //
    HWREG(ui32Base + I2C_O_SCTL) = 0x0;

    //
    // Disable the clock to the slave block.
    //
    HWREG(ui32Base + I2C_O_MCR) &= ~I2C_MCR_SFE;
}

//*****************************************************************************
//
//! Gets the I2C Slave module status
//!
//! \param ui32Base is the base address of the I2C Slave module.
//!
//! This function will return the action requested from a master, if any.
//! Possible values are \b I2C_SLAVE_ACT_NONE, \b I2C_SLAVE_ACT_RREQ,
//! \b I2C_SLAVE_ACT_TREQ and \b I2C_SLAVE_ACT_RREQ_FBR.
//!
//! \return Returns \b I2C_SLAVE_ACT_NONE to indicate that no action has been
//! requested of the I2C Slave module, \b I2C_SLAVE_ACT_RREQ to indicate that
//! an I2C master has sent data to the I2C Slave module, \b I2C_SLAVE_ACT_TREQ
//! to indicate that an I2C master has requested that the I2C Slave module send
//! data, and \b I2C_SLAVE_ACT_RREQ_FBR to indicate that an I2C master has sent
//! data to the I2C slave and the first byte following the slave's own address
//! has been received.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
I2CSlaveStatus(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Return the slave status.
    //
    return(HWREG(ui32Base + I2C_O_SSTAT));
}

//*****************************************************************************
//
//! Receives a byte that has been sent to the I2C Slave
//!
//! \param ui32Base is the base address of the I2C Slave module.
//!
//! This function reads a byte of data from the I2C Slave Data Register.
//!
//! \return Returns the byte received from by the I2C Slave, cast as an
//! uint32_t.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
I2CSlaveDataGet(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Read a byte.
    //
    return(HWREG(ui32Base + I2C_O_SDR));
}

//*****************************************************************************
//
//! Transmits a byte from the I2C Slave
//!
//! \param ui32Base is the base address of the I2C Slave module.
//! \param ui8Data data to be transmitted from the I2C Slave
//!
//! This function will place the supplied data into I2C Slave Data Register.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CSlaveDataPut(uint32_t ui32Base, uint8_t ui8Data)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Write the byte.
    //
    HWREG(ui32Base + I2C_O_SDR) = ui8Data;
}

//*****************************************************************************
//
//! Enables individual I2C Slave interrupt sources
//!
//! \param ui32Base is the base address of the I2C module.
//! \param ui32IntFlags is the bit mask of the slave interrupt sources to be
//! enabled.
//!
//! Enables the indicated I2C Slave interrupt sources. Only the sources that
//! are enabled can be reflected to the processor interrupt; disabled sources
//! have no effect on the processor.
//!
//! The \e ui32IntFlags parameter is the logical OR of any of the following:
//! \b I2C_SLAVE_INT_STOP, \b I2C_SLAVE_INT_START and \b I2C_SLAVE_INT_DATA.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CSlaveIntEnable(uint32_t ui32Base, uint32_t ui32IntFlags)
{
    uint32_t ui32Val;

    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));
    ASSERT(ui32IntFlags & (I2C_SLAVE_INT_STOP | I2C_SLAVE_INT_START |
                           I2C_SLAVE_INT_DATA));

    //
    // Enable the slave interrupt.
    //
    ui32Val = HWREG(ui32Base + I2C_O_SIMR);
    ui32Val |= ui32IntFlags;
    HWREG(ui32Base + I2C_O_SIMR) = ui32Val;
}

//*****************************************************************************
//
//! Disables individual I2C Slave interrupt sources
//!
//! \param ui32Base is the base address of the I2C Slave module.
//! \param ui32IntFlags is the bit mask of the interrupt sources to be disabled.
//!
//! Disables the indicated I2C Slave interrupt sources. Only the sources that
//! are enabled can be reflected to the processor interrupt; disabled sources
//! have no effect on the processor.
//!
//! The \e ui32IntFlags parameter has the same definition as the \e ui32IntFlags
//! parameter to I2CSlaveIntEnable().
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CSlaveIntDisable(uint32_t ui32Base, uint32_t ui32IntFlags)
{
    uint32_t ui32Val;

    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));
    ASSERT(ui32IntFlags & (I2C_SLAVE_INT_STOP | I2C_SLAVE_INT_START |
                           I2C_SLAVE_INT_DATA));

    //
    // Disable the slave interrupt.
    //
    ui32Val = HWREG(ui32Base + I2C_O_SIMR);
    ui32Val &= ~ui32IntFlags;
    HWREG(ui32Base + I2C_O_SIMR) = ui32Val;
}

//*****************************************************************************
//
//! Clears I2C Slave interrupt sources
//!
//! \param ui32Base is the base address of the I2C module.
//! \param ui32IntFlags is a bit mask of the interrupt sources to be cleared.
//!
//! The specified I2C Slave interrupt sources are cleared, so that they no
//! longer assert. This must be done in the interrupt handler to keep it from
//! being called again immediately upon exit.
//!
//! The \e ui32IntFlags parameter has the same definition as the \e ui32IntFlags
//! parameter to I2CSlaveIntEnable().
//!
//! \note Because there is a write buffer in the Cortex-M3 processor, it may
//! take several clock cycles before the interrupt source is actually cleared.
//! Therefore, it is recommended that the interrupt source be cleared early in
//! the interrupt handler (as opposed to the very last action) to avoid
//! returning from the interrupt handler before the interrupt source is
//! actually cleared. Failure to do so may result in the interrupt handler
//! being immediately reentered (because the interrupt controller still sees
//! the interrupt source asserted).
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2CSlaveIntClear(uint32_t ui32Base, uint32_t ui32IntFlags)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Clear the I2C slave interrupt source.
    //
    HWREG(ui32Base + I2C_O_SICR) = ui32IntFlags;
}

//*****************************************************************************
//
//! Gets the current I2C Slave interrupt status
//!
//! \param ui32Base is the base address of the I2C Slave module.
//! \param bMasked is false if the raw interrupt status is requested and
//! true if the masked interrupt status is requested.
//!
//! This returns the interrupt status for the I2C Slave module. Either the raw
//! interrupt status or the status of interrupts that are allowed to reflect to
//! the processor can be returned.
//!
//! \return Returns the current interrupt status, enumerated as a bit field of
//! values described in I2CSlaveIntEnable().
//
//*****************************************************************************
__STATIC_INLINE uint32_t
I2CSlaveIntStatus(uint32_t ui32Base, bool bMasked)
{
    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Return either the interrupt status or the raw interrupt status as
    // requested.
    //
    if(bMasked)
    {
        return(HWREG(ui32Base + I2C_O_SMIS));
    }
    else
    {
        return(HWREG(ui32Base + I2C_O_SRIS));
    }
}

//*****************************************************************************
//
//! Registers an interrupt handler for the I2C module
//!
//! \param ui32Base is the base address of the I2C Master module.
//! \param pfnHandler is a pointer to the function to be called when the
//! I2C interrupt occurs.
//!
//! This sets the handler to be called when an I2C interrupt occurs. This will
//! enable the global interrupt in the interrupt controller; specific I2C
//! interrupts must be enabled via I2CMasterIntEnable() and
//! I2CSlaveIntEnable(). If necessary, it is the interrupt handler's
//! responsibility to clear the interrupt source via I2CMasterIntClear() and
//! I2CSlaveIntClear().
//!
//! \sa IntRegister() for important information about registering interrupt
//! handlers.
//!
//! \return None
//
//*****************************************************************************
extern void I2CIntRegister(uint32_t ui32Base, void (*pfnHandler)(void));

//*****************************************************************************
//
//! Unregisters an interrupt handler for the I2C module
//!
//! \param ui32Base is the base address of the I2C Master module.
//!
//! This function will clear the handler to be called when an I2C interrupt
//! occurs. This will also mask off the interrupt in the interrupt controller
//! so that the interrupt handler no longer is called.
//!
//! \sa IntRegister() for important information about registering interrupt
//! handlers.
//!
//! \return None
//
//*****************************************************************************
extern void I2CIntUnregister(uint32_t ui32Base);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __I2C_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
