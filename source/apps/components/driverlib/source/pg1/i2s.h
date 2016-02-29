/******************************************************************************
*  Filename:       i2s.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the I2S.
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

//****************************************************************************
//
//! \addtogroup i2s_api
//! @{
//
//****************************************************************************

#ifndef __I2S_H__
#define __I2S_H__

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
#include "hw_memmap.h"
#include "hw_ints.h"
#include "hw_i2s.h"
#include "debug.h"
#include "interrupt.h"

//*****************************************************************************
//
// A structure that defines an audio control table. These fields are used by
// the I2S and normally it is not necessary for software to directly read or
// write fields in the table.
//
//*****************************************************************************
typedef struct 
{
    uint16_t ui16DMABufSize;        // Size of DMA buffer
    uint16_t ui16ChBufSize;         // Size of Channel buffer
    uint8_t ui8InChan;              //
    uint8_t ui8OutChan;             //
    uint16_t ui16MemLen;            //
    uint32_t ui32InBase;            // Base address of the input buffer
    uint32_t ui32InOffset;          // Value of the current input pointer 
                                    // offset
    uint32_t ui32OutBase;           // Base address of the output buffer
    uint32_t ui32OutOffset;         // Value of the current output pointer 
                                    // offset
} I2SControlTable;

//*****************************************************************************
//
// Defines for the I2S DMA buffer sizes
//
//*****************************************************************************
#define I2S_DMA_BUF_SIZE_64     0x00000040
#define I2S_DMA_BUF_SIZE_128    0x00000080
#define I2S_DMA_BUF_SIZE_256    0x00000100

//*****************************************************************************
//
// Defines for the I2S audio clock configuration
//
//*****************************************************************************
#define I2S_EXT_WCLK            0x00000001
#define I2S_INT_WCLK            0x00000002
#define I2S_INVERT_WCLK         0x00000004
#define I2S_NORMAL_WCLK         0x00000000

//*****************************************************************************
//
// Defines for the audio data line input/output configuration
//
//*****************************************************************************
#define I2S_LINE_UNUSED         0x00000000
#define I2S_LINE_INPUT          0x00000001
#define I2S_LINE_OUTPUT         0x00000002
#define I2S_LINE_MASK           0x00000003

//*****************************************************************************
//
// Defines for activating an audio channel.
//
//*****************************************************************************
#define I2S_CHAN0_ACT           0x00000100
#define I2S_CHAN1_ACT           0x00000200
#define I2S_CHAN2_ACT           0x00000400
#define I2S_CHAN3_ACT           0x00000800
#define I2S_CHAN4_ACT           0x00001000
#define I2S_CHAN5_ACT           0x00002000
#define I2S_CHAN6_ACT           0x00004000
#define I2S_CHAN7_ACT           0x00008000
#define I2S_MONO_MODE           0x00000100
#define I2S_STEREO_MODE         0x00000300
#define I2S_CHAN_CFG_MASK       0x0000FF00

//*****************************************************************************
//
// Defines for the audio format configuration
//
//*****************************************************************************
#define I2S_FORMAT_I2S          0x00000100  // Standard I2S format
#define I2S_FORMAT_LEFT_JUST    0x00000000  // Left justified format
#define I2S_FORMAT_RIGHT_JUST   0x00000200  // Right justified format
#define I2S_FORMAT_DSP          0x00000100  // DSP format
#define I2S_MEM_LENGTH_16       0x00000000  // 16 bit size of word in memory
#define I2S_MEM_LENGTH_24       0x00000080  // 24 bit size of word in memory
#define I2S_POS_EDGE            0x00000040  // Sample on positive edge
#define I2S_NEG_EDGE            0x00000000  // Sample on negative edge
#define I2S_DUAL_PHASE_FMT      0x00000020  // Dual Phased audio format
#define I2S_SINGLE_PHASE_FMT    0x00000000  // Single Phased audio format
#define I2S_WORD_LENGTH_8       0x00000008  // Word length is 8 bits
#define I2S_WORD_LENGTH_16      0x00000010  // Word length is 16 bits
#define I2S_WORD_LENGTH_24      0x00000018  // Word length is 24 bits

//*****************************************************************************
//
// Defines for the sample stamp counters
//
//*****************************************************************************
#define I2S_STMP0               0x00000001  // Sample stamp counter channel 0
#define I2S_STMP1               0x00000002  // Sample stamp counter channel 1
#define I2S_STMP_SATURATION     0x0000FFFF  // The saturation value used when
                                            // calculating the sample stamp

//*****************************************************************************
//
// Defines for the interrupt
//
//*****************************************************************************
#define I2S_INT_DMA_IN          0x00000020  // DMA output buffer full interrupt
#define I2S_INT_DMA_OUT         0x00000010  // DMA input buffer empty interrupt
#define I2S_INT_TIMEOUT         0x00000008  // Word Clock Timeout
#define I2S_INT_BUS_ERR         0x00000004  // DMA Bus error 
#define I2S_INT_WCLK_ERR        0x00000002  // Word Clock error
#define I2S_INT_PTR_ERR         0x00000001  // Data pointer error (DMA data 
                                            // was not update in time).

//***************************************************************************** 
//
// API Overview
//
//***************************************************************************** 
// void I2SEnable(uint32_t ui32Base);
// void I2SDisable(uint32_t ui32Base);
// void I2SAudioFormatConfigure(uint32_t ui32Base, uint32_t ui32FmtCfg,
//                              uint32_t ui32BitClkDelay);
// void I2SChannelConfigure(uint32_t ui32Base, uint32_t ui32Chan0Cfg,
//                          uint32_t ui32Chan1Cfg, uint32_t ui32Chan2Cfg);
// void I2SClockConfigure(uint32_t ui32Base, uint32_t ui32ClkConfig);
// void I2SBufferConfig(uint32_t ui32Base, uint32_t ui32InBufBase,
//                      uint32_t ui32OutBufBase, uint16_t ui16DMABufSize,
//                      uint16_t ui16ChanBufSize);
// void I2SPointerUpdate(uint32_t ui32Base, bool tInput);
//
// void I2SIntRegister(uint32_t ui32Base, void (*pfnHandler)(void));
// void I2SIntUnregister(uint32_t ui32Base);
// void I2SIntEnable(uint32_t ui32Base, uint32_t ui32IntFlags);
// void I2SIntDisable(uint32_t ui32Base, uint32_t ui32IntFlags);
// uint32_t I2SIntStatus(uint32_t ui32Base, bool bMasked);
// void I2SIntClear(uint32_t ui32Base, uint32_t ui32IntFlags);
//
// void I2SSampleStampEnable(uint32_t ui32Base);
// void I2SSampleStampDisable(uint32_t ui32Base);
// void I2SSampleStampConfigure(uint32_t ui32Base, bool bInput, bool bOutput);
// uint32_t I2SSampleStampGet(uint32_t ui32Base, uint32_t ui32Channel);

//***************************************************************************** 
//
// API Functions and prototypes
//
//***************************************************************************** 

//*****************************************************************************
//
//! \internal
//! Checks a I2S base address
//!
//! \param ui32Base is the base address of the I2S port.
//!
//! This function determines if a I2S port base address is valid.
//!
//! \return Returns \b true if the base address is valid and \b false
//! otherwise.
//
//*****************************************************************************
#ifdef DEBUG
static bool
I2SBaseValid(uint32_t ui32Base)
{
    return(ui32Base == I2S0_BASE);
}
#endif

//*****************************************************************************
//
//! Enables the I2S module for operation
//!
//! \param ui32Base is the I2S module base address.
//!
//! \note The module should only be enabled after configuration. When the
//! module is disabled, no data or clocks will be generated on the I2S signals.
//!
//! \note \e Immediately after enabling the module the programmer should update
//! the DMA data pointer registers using \b I2SPointerUpdate() to ensure a new
//! pointer is written before the DMA transfer completes. Failure to update
//! the pointer in time will result in an \b I2S_PTR_ERR.
//!
//! \return None
//
//*****************************************************************************
extern void I2SEnable(uint32_t ui32Base);

//*****************************************************************************
//
//! Disables the I2S module for operation
//!
//! \param ui32Base is the I2S module base address.
//!
//! \note This function will immediately disable the I2S module. To ensure that
//! all buffer operations are completed before shutting down, the correct
//! procedure is:
//!
//! 1. Do not update the data pointers using \b I2SInputPtr() / \b I2SOutputPtr
//! 2. Await next interrupt resulting in I2S_PTR_ERR
//! 3. Disable the I2S using I2SDisable() and clear the pointer error using
//!    I2SIntClear()
//! 4. Disable bit clock source (done externally)
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2SDisable(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));

    //
    // Disable the I2S module.
    //
    HWREG(ui32Base + I2S_O_AIFDMACFG) = 0x0;
}

//*****************************************************************************
//
//! Configures the I2S module
//!
//! \param ui32Base is the I2S module base address.
//! \param ui32FmtCfg is the logical OR of the format configuration options.
//! \param ui32BitClkDelay defines the bit clock delay.
//!
//! The parameter \e ui32FmtCfg is a logical OR of several values defining. One
//! parameter is the audio format consisting of \b I2S_FORMAT_I2S,
//! \b I2S_FORMAT_LEFT_JUST, \b I2S_FORMAT_RIGHT_JUST or \b I2S_FORMAT_DSP.
//!
//! The sample size is determined by either \b I2S_MEM_LENGTH_16 or
//! \b I2S_MEM_LENGTH_24.
//!
//! The clock edge sampling is set by \b I2S_POS_EDGE or \b I2S_NEG_EDGE.
//!
//! The word length defines the size of the word transmitted on the data
//! lines. For single phased formats \e I2S_WORD_LENGTH_x is the exact number
//! of bits per word. In dual phased format this is the maximum number of bits
//! per word. The size is set using \b I2S_WORD_LENGTH_8,
//! \b I2S_WORD_LENGTH_16 or \b I2S_WORD_LENGTH_24.
//!
//! The \e ui32BitClkDelay is the number of bit clock periods between the
//! positive word clock edge and the MSB of the first word in a phase. The bit
//! clock delay is determined by the ratio between the bit clock and the frame
//! clock and the chosen audio format. The bit clock delay must be configured
//! depending on the chosen audio format.
//!
//! - 0 - Left Justified Format (LJF)
//! - 1 - I2S and DSP format
//! - 2-255 - Right Justified format (RJF)
//!
//! It is only necessary to set the parameter \b ui32BitClkDelay if using
//! \b I2S_FORMAT_RIGHT_JUST. In any other case the bit clock delay will be set
//! as described above.
//!
//! \return None
//
//*****************************************************************************
extern void I2SAudioFormatConfigure(uint32_t ui32Base, uint32_t ui32FmtCfg,
                                    uint32_t ui32BitClkDelay);

//****************************************************************************
//
//! Setup the audio channel configuration
//!
//! \param ui32Base is base address of the I2S module.
//! \param ui32Chan0Cfg defines the channel configuration for data line 0.
//! \param ui32Chan1Cfg defines the channel configuration for data line 1.
//! \param ui32Chan2Cfg defines the channel configuration for data line 2.
//!
//! The channel configuration is a bitwise OR of the input/output mode of each
//! data line and the active audio channels within a specific audio frame. For
//! setting up the input/output mode use on of \b I2S_LINE_UNUSED,
//! \b I2S_LINE_INPUT or \b I2S_LINE_OUTPUT.
//!
//! For dual phased audio (LJF,RJF,I2S) only mono and stereo mode is allowed.
//! For single phased audio format (DSP) up to 8 active channels is allowed
//! on a single data line. For setting up the active channels in a frame use
//! a bitwise OR'ed combination of \b I2S_CHAN0_ACT, \b I2S_CHAN1_ACT,
//! \b I2S_CHAN2_ACT, \b I2S_CHAN3_ACT, \b I2S_CHAN4_ACT, \b I2S_CHAN5_ACT
//! \b I2S_CHAN6_ACT and \b I2S_CHAN7_ACT.
//!
//! For settings mono or stereo mode use instead one of the mutual exclusive
//! \b I2S_MONO_MODE and \b I2S_STEREO_MODE.
//!
//! \note The audio format and the clock configuration should be set using
//! \b I2SAudioFormatConfigure()
//!
//! \return None
//
//****************************************************************************
extern void I2SChannelConfigure(uint32_t ui32Base, uint32_t ui32Chan0Cfg,
                                uint32_t ui32Chan1Cfg, uint32_t ui32Chan2Cfg);

//****************************************************************************
//
//! Configure the I2S frame clock
//!
//! \param ui32Base is the base address of the I2S module.
//! \param ui32ClkConfig is the clock configuration parameter.
//!
//! The parameter \e ui32ClkCfg is used to define the clock settings. It must
//! consist of a bitwised OR'ed combination of the values
//! \b I2S_EXT_CLK or \b I2S_INT_CLK to select whether the I2S transmitter
//!uses an internally or externally generated clock, and
//! \b I2S_NORMAL_CLK or \b I2S_INV_CLK to determine wether to use a normal
//! or interveted frame clock.
//!
//! \note The bit clock configuration is done externally, but the internal/
//! external setting must match what is chosen internally in the I2S module
//! for the frame clock.
//!
//! \return None
//
//****************************************************************************
__STATIC_INLINE void
I2SClockConfigure(uint32_t ui32Base, uint32_t ui32ClkConfig)
{
    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));

    //
    // Setup register WCLK Source.
    //
    HWREG(I2S0_BASE + I2S_O_AIFWCLKSRC) = ui32ClkConfig &
                                         (I2S_AIFWCLKSRC_WCLK_INV_M |
                                          I2S_AIFWCLKSRC_WCLK_SRC_M);
}

//****************************************************************************
//
//! Set the input buffer pointers
//!
//! \param ui32Base is the base address of the I2S module.
//! \param ui32InBufBase is the address of the input buffer.
//! \param ui32OutBufBase is the address of the output  buffer.
//! \param ui16DMABufSize is the size of the DMA buffers.
//! \param ui16ChanBufSize is the size of the channel buffers.
//!
//! TBD - Consider using a fifth argument which is the channel delay size,
//!       and then calculate the address of the next pointer.
//!
//! The next pointer should always be written while the DMA is using the
//! previous written pointer. If not written in time a I2S_INT_PTR_ERR will
//! occure and all outputs will be disabled.
//!
//! \note The \b ui32BufferSize parameter must be the same size for both input
//! and output. At startup the next data pointer (ie. pui32InBuf1) should be
//! written just before and just after calling the \b I2SEnable().
//!
//! \sa I2SInputBufferSet().
//!
//! \return None
//
//****************************************************************************
extern void I2SBufferConfig(uint32_t ui32Base, uint32_t ui32InBufBase,
                            uint32_t ui32OutBufBase, uint16_t ui16DMABufSize,
                            uint16_t ui16ChanBufSize);

//****************************************************************************
//
//! Update the buffer pointers
//!
//! \param ui32Base is the base address of the I2S module.
//! \param bInput determines whether to update input or output pointers.
//!
//! \note The next pointer should always be written while the DMA is using the
//! previous written pointer. If not written in time a I2S_PTR_ERR will occure
//! and all outputs will be disabled. Nothing is preventing the pointers from
//! being identical, but this function relies on both pointers (input or
//! output pointers) are pointing to a valid address.
//! It is recommended that the pointer update is done in an interrupt context
//! to ensure that the update is performed before the buffer is full.
//!
//! \return None
//
//****************************************************************************
extern void I2SPointerUpdate(uint32_t ui32Base, bool bInput);

//*****************************************************************************
//
//! Registers an interrupt handler for a I2S interrupt.
//!
//! \param ui32Base is the base address of the I2S port.
//! \param pfnHandler is a pointer to the function to be called when the
//! I2S interrupt occurs.
//!
//! This function does the actual registering of the interrupt handler. This
//! function enables the global interrupt in the interrupt controller; specific
//! I2S interrupts must be enabled via I2SIntEnable(). It is the interrupt
//! handler's responsibility to clear the interrupt source.
//!
//! \sa IntRegister() for important information about registering interrupt
//! handlers.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2SIntRegister(uint32_t ui32Base, void (*pfnHandler)(void))
{
    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));

    //
    // Register the interrupt handler.
    //
    IntRegister(INT_I2S, pfnHandler);

    //
    // Enable the I2S interrupt.
    //
    IntEnable(INT_I2S);
}

//*****************************************************************************
//
//! Unregisters an interrupt handler for a I2S interrupt
//!
//! \param ui32Base is the base address of the I2S port.
//!
//! This function does the actual unregistering of the interrupt handler.  It
//! clears the handler to be called when a I2S interrupt occurs.  This
//! function also masks off the interrupt in the interrupt controller so that
//! the interrupt handler no longer is called.
//!
//! \sa IntRegister() for important information about registering interrupt
//! handlers.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2SIntUnregister(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));

    //
    // Disable the interrupt.
    //
    IntDisable(INT_I2S);

    //
    // Unregister the interrupt handler.
    //
    IntUnregister(INT_I2S);
}

//*****************************************************************************
//
//! Enables individual I2S interrupt sources.
//!
//! \param ui32Base is the base address of the I2S port.
//! \param ui32IntFlags is the bit mask of the interrupt sources to be enabled.
//!
//! This function enables the indicated I2S interrupt sources. Only the
//! sources that are enabled can be reflected to the processor interrupt;
//! disabled sources have no effect on the processor.
//!
//! The \e ui32IntFlags parameter is the logical OR of any of the following:
//! \b I2S_INT_DMA_IN, \b I2S_INT_DMA_OUT, \b I2S_INT_TIMEOUT,
//! \b I2S_INT_BUS_ERR, \b I2S_INT_WCLK_ERR and \b I2S_INT_PTR_ERR.
//!
//! \return None.
//
//*****************************************************************************
__STATIC_INLINE void
I2SIntEnable(uint32_t ui32Base, uint32_t ui32IntFlags)
{
    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));

    //
    // Enable the specified interrupts.
    //
    HWREG(ui32Base + I2S_O_IRQMASK) |= ui32IntFlags;
}

//*****************************************************************************
//
//! Disables individual I2S interrupt sources.
//!
//! \param ui32Base is the base address of the I2S port.
//! \param ui32IntFlags is the bit mask of the interrupt sources to be disabled.
//!
//! This function disables the indicated I2S interrupt sources. Only the
//! sources that are enabled can be reflected to the processor interrupt;
//! disabled sources have no effect on the processor.
//!
//! The \e ui32IntFlags parameter is the logical OR of any of the following:
//! \b I2S_INT_DMA_IN, \b I2S_INT_DMA_OUT, \b I2S_INT_TIMEOUT,
//! \b I2S_INT_BUS_ERR, \b I2S_INT_WCLK_ERR and \b I2S_INT_PTR_ERR.
//!
//! \return None.
//
//*****************************************************************************
__STATIC_INLINE void
I2SIntDisable(uint32_t ui32Base, uint32_t ui32IntFlags)
{
    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));

    //
    // Disable the specified interrupts.
    //
    HWREG(ui32Base + I2S_O_IRQMASK) &= ~ui32IntFlags;
}

//*****************************************************************************
//
//! Gets the current interrupt status.
//!
//! \param ui32Base is the base address of the I2S port
//! \param bMasked is \b false if the raw interrupt status is required and
//! \b true if the masked interrupt status is required
//!
//! This function returns the interrupt status for the specified I2S. Either
//! the raw interrupt status or the status of interrupts that are allowed to
//! reflect to the processor can be returned.
//!
//! \return Returns the current interrupt status, enumerated as a bit field of
//! values described as defined in I2SIntEnable().
//
//*****************************************************************************
__STATIC_INLINE uint32_t
I2SIntStatus(uint32_t ui32Base, bool bMasked)
{
    uint32_t ui32Mask;

    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));

    //
    // Return either the interrupt status or the raw interrupt status as
    // requested.
    //
    if(bMasked)
    {
        ui32Mask = HWREG(ui32Base + I2S_O_IRQFLAGS);
        return(ui32Mask & HWREG(ui32Base + I2S_O_IRQMASK));
    }
    else
    {
        return(HWREG(ui32Base + I2S_O_IRQFLAGS));
    }
}

//*****************************************************************************
//
//! Clears I2S interrupt sources
//!
//! \param ui32Base is the base address of the I2S port.
//! \param ui32IntFlags is a bit mask of the interrupt sources to be cleared.
//!
//! The specified I2S interrupt sources are cleared, so that they no longer
//! assert. This function must be called in the interrupt handler to keep the
//! interrupt from being recognized again immediately upon exit.
//!
//! The \e ui32IntFlags parameter has the same definition as the \e ui32IntFlags
//! parameter to I2SIntEnable().
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
I2SIntClear(uint32_t ui32Base, uint32_t ui32IntFlags)
{
    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));

    //
    // Clear the requested interrupt sources.
    //
    HWREG(ui32Base + I2S_O_IRQCLR) = ui32IntFlags;
}

//*****************************************************************************
//
//! Enable the Sample Stamp generator
//!
//! Use this function to enable the sample stamp generators.
//!
//! \note It is the user responsibility to ensure that the sample stamp
//! generator is properly configured before it is enabled. It is the setting
//! of the Input and Output triggers configured using I2SSampleStampConfigure()
//! that triggers the start point of the audio streams.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2SSampleStampEnable(uint32_t ui32Base)
{
    //
    // Set the enable bit.
    //
    HWREG(ui32Base + I2S_O_STMPCTL) = I2S_STMPCTL_STMP_EN;
}

//*****************************************************************************
//
//! Disable the Sample Stamp generator
//!
//! Use this function to disable the sample stamp generators. When the sample
//! stamp generator is disabled, the clock counsters are automatically cleared.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
I2SSampleStampDisable(uint32_t ui32Base)
{
    //
    // Clear the enable bit.
    //
    HWREG(ui32Base + I2S_O_STMPCTL) = 0;

}

//*****************************************************************************
//
//! Configure the sample stamp generator
//!
//! \param ui32Base is the base address of the I2S module.
//! \param bInput enables triggering of the sample stamp generator on input.
//! \param bOutput enables triggering of the sample stamp generator on output.
//!
//! Use this function to configure the sample stamp generator.
//!
//! TBD - Expand function, not quite sure how this audio interface should be
//!       implemented.
//!
//! \return None
//
//*****************************************************************************
extern void I2SSampleStampConfigure(uint32_t ui32Base, bool bInput,
                                    bool bOutput);

//*****************************************************************************
//
//! Get the current value of a sample stamp counter
//!
//! \param ui32Base is the base address of the I2S module.
//! \param ui32Channel is the sample stamp counter to sample
//!
//!
//!
//! \return Returns the current value of the selected sample stamp channel.
//
//*****************************************************************************
extern uint32_t I2SSampleStampGet(uint32_t ui32Base, uint32_t ui32Channel);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif //  __I2S_H__

//****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//****************************************************************************
