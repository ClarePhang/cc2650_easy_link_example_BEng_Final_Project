/******************************************************************************
*  Filename:       i2s.c
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Driver for the I2S.
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

#include "i2s.h"

//*****************************************************************************
//
// Global pointer to the current I2S data structure
//
//*****************************************************************************
I2SControlTable *g_pControlTable;

//*****************************************************************************
//
//! Enables the I2S module for operation
//
//*****************************************************************************
void
I2SEnable(uint32_t ui32Base)
{
    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));

    //
    // Make sure the controltable pointer is setup to a memory location.
    //
    if(!(g_pControlTable))
    {
        return;
    }

    //
    // Write the address to the first input/output buffer.
    //
    HWREG(I2S0_BASE + I2S_O_AIFINPTRNEXT) = g_pControlTable->ui32InBase;
    g_pControlTable->ui32InOffset = 0;
    HWREG(I2S0_BASE + I2S_O_AIFOUTPTRNEXT) = g_pControlTable->ui32OutBase;
    g_pControlTable->ui32OutOffset = 0;

    //
    // Enable the I2S module.
    //
    HWREG(ui32Base + I2S_O_AIFDMACFG) = (uint32_t)
                                        g_pControlTable->ui16DMABufSize;
}

//*****************************************************************************
//
//! Configures the I2S module
//
//*****************************************************************************
void
I2SAudioFormatConfigure(uint32_t ui32Base, uint32_t ui32FmtCfg,
                        uint32_t ui32BitClkDelay)
{
    uint32_t ui32Cfg;

    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));
    ASSERT(ui32BitClkDelay < 255)

    //
    // Copy the audio configuration.
    //
    ui32Cfg = ui32FmtCfg;

    //
    // Configure the audio format.
    //
    ui32Cfg &= ~I2S_AIFFMTCFG_DATA_DELAY_M;

    if((ui32FmtCfg & I2S_AIFFMTCFG_DATA_DELAY_M) == I2S_FORMAT_LEFT_JUST)
    {
        // Nothing to do...
    }
    else if((ui32FmtCfg & I2S_AIFFMTCFG_DATA_DELAY_M) == I2S_FORMAT_DSP)
    {
        ui32Cfg |= (1 << I2S_AIFFMTCFG_DATA_DELAY_S);
    }
    else
    {
        ui32Cfg |= (ui32BitClkDelay << I2S_AIFFMTCFG_DATA_DELAY_S);
    }

    //
    // Save the length of the audio words stored in memory.
    //
    g_pControlTable->ui16MemLen = ui32FmtCfg & I2S_MEM_LENGTH_24 ? 24 : 16;

    //
    // Write the configuration.
    //
    HWREG(ui32Base + I2S_O_AIFFMTCFG) = ui32Cfg;
}

//****************************************************************************
//
//! Setup the audio channel configuration
//
//****************************************************************************
void
I2SChannelConfigure(uint32_t ui32Base, uint32_t ui32Chan0Cfg,
                    uint32_t ui32Chan1Cfg, uint32_t ui32Chan2Cfg)
{
    uint32_t ui32InChan;
    uint32_t ui32OutChan;
    uint32_t ui32ChanMask;

    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));
    ASSERT(ui32Chan0Cfg & (I2S_CHAN_CFG_MASK | I2S_LINE_MASK))
    ASSERT(ui32Chan1Cfg & (I2S_CHAN_CFG_MASK | I2S_LINE_MASK))
    ASSERT(ui32Chan2Cfg & (I2S_CHAN_CFG_MASK | I2S_LINE_MASK))

    ui32InChan = 0;
    ui32OutChan = 0;

    //
    // Configure input/output channels.
    //
    HWREG(ui32Base + I2S_O_AIFDIRCFG) = ((ui32Chan0Cfg << I2S_AIFDIRCFG_AD0_S)
                                         & I2S_AIFDIRCFG_AD0_M) |
                                        ((ui32Chan1Cfg << I2S_AIFDIRCFG_AD1_S)
                                         & I2S_AIFDIRCFG_AD1_M) |
                                        ((ui32Chan2Cfg << I2S_AIFDIRCFG_AD2_S)
                                         & I2S_AIFDIRCFG_AD2_M);

    //
    // Configure the valid channel mask.
    //
    HWREG(ui32Base + I2S_O_AIFWMASK0) = (ui32Chan0Cfg >> 8) & I2S_AIFWMASK0_MASK_M;
    HWREG(ui32Base + I2S_O_AIFWMASK1) = (ui32Chan1Cfg >> 8) & I2S_AIFWMASK1_MASK_M;
    HWREG(ui32Base + I2S_O_AIFWMASK2) = (ui32Chan2Cfg >> 8) & I2S_AIFWMASK2_MASK_M;

    //
    // Resolve and save the number of input and output channels.
    //
    ui32ChanMask = (ui32Chan0Cfg & I2S_CHAN_CFG_MASK) >> 8;
    if(ui32Chan0Cfg & I2S_LINE_INPUT)
    {
        while(ui32ChanMask)
        {
            if(ui32ChanMask & 0x1)
            {
                ui32InChan++;
            }
            //
            // Shift down channel mask
            //
            ui32ChanMask >>= 1;
        }
        
    }
    else if(ui32Chan0Cfg & I2S_LINE_OUTPUT)
    {
        while(ui32ChanMask)
        {
            if(ui32ChanMask & 0x1)
            {
                ui32OutChan++;
            }
            //
            // Shift down channel mask
            //
            ui32ChanMask >>= 1;
        }
    }

    ui32ChanMask = (ui32Chan1Cfg & I2S_CHAN_CFG_MASK) >> 8;
    if(ui32Chan1Cfg & I2S_LINE_INPUT)
    {
        while(ui32ChanMask)
        {
            if(ui32ChanMask & 0x1)
            {
                ui32InChan++;
            }
            //
            // Shift down channel mask
            //
            ui32ChanMask >>= 1;
        }
    }
    else if(ui32Chan1Cfg & I2S_LINE_OUTPUT)
    {
        while(ui32ChanMask)
        {
            if(ui32ChanMask & 0x1)
            {
                ui32OutChan++;
            }
            //
            // Shift down channel mask
            //
            ui32ChanMask >>= 1;
        }
    }

    ui32ChanMask = (ui32Chan2Cfg & I2S_CHAN_CFG_MASK) >> 8;
    if(ui32Chan2Cfg & I2S_LINE_INPUT)
    {
        while(ui32ChanMask)
        {
            if(ui32ChanMask & 0x1)
            {
                ui32InChan++;
            }
            //
            // Shift down channel mask
            //
            ui32ChanMask >>= 1;
        }
    }
    else if(ui32Chan2Cfg & I2S_LINE_OUTPUT)
    {
        while(ui32ChanMask)
        {
            if(ui32ChanMask & 0x1)
            {
                ui32OutChan++;
            }
            //
            // Shift down channel mask
            //
            ui32ChanMask >>= 1;
        }
    }

    g_pControlTable->ui8InChan = (uint8_t)ui32InChan;
    g_pControlTable->ui8OutChan = (uint8_t)ui32OutChan;
}

//****************************************************************************
//
//! Set the input buffer pointers
//
//****************************************************************************
void
I2SBufferConfig(uint32_t ui32Base, uint32_t ui32InBufBase,
                uint32_t ui32OutBufBase, uint16_t ui16DMABufSize,
                uint16_t ui16ChanBufSize)
{
    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));

    //
    // Setup the input data pointer and buffer sizes.
    //
    g_pControlTable->ui16DMABufSize = ui16DMABufSize;
    g_pControlTable->ui16ChBufSize = ui16ChanBufSize;
    g_pControlTable->ui32InBase = ui32InBufBase;
    g_pControlTable->ui32OutBase = ui32OutBufBase;
}

//****************************************************************************
//
//! Update the buffer pointers
//
//****************************************************************************
void
I2SPointerUpdate(uint32_t ui32Base, bool bInput)
{
    uint32_t ui32NextPtr;

    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));

    //
    // Update the next input/output pointer with the correct address.
    //
    if(bInput == true)
    {
        ui32NextPtr = (g_pControlTable->ui8InChan * 
                       (g_pControlTable->ui16MemLen >> 3)) *
                      g_pControlTable->ui16DMABufSize;
        g_pControlTable->ui32InOffset = ((g_pControlTable->ui32InOffset +
                                         ui32NextPtr) % 
                                         g_pControlTable->ui16ChBufSize);
        HWREG(ui32Base + I2S_O_AIFINPTRNEXT) = g_pControlTable->ui32InOffset +
                                               g_pControlTable->ui32InBase;
    }
    else
    {
        ui32NextPtr = (g_pControlTable->ui8OutChan * 
                       (g_pControlTable->ui16MemLen >> 3)) *
                      g_pControlTable->ui16DMABufSize;
        g_pControlTable->ui32OutOffset = ((g_pControlTable->ui32OutOffset +
                                         ui32NextPtr) % 
                                         g_pControlTable->ui16ChBufSize);
        HWREG(ui32Base + I2S_O_AIFOUTPTRNEXT) = 
                         g_pControlTable->ui32OutOffset +
                         g_pControlTable->ui32OutBase;
    }
}

//*****************************************************************************
//
//! Configure the sample stamp generator
//
//*****************************************************************************
void
I2SSampleStampConfigure(uint32_t ui32Base, bool bInput, bool bOutput)
{
    uint32_t ui32Trigger;

    //
    // Check the arguments.
    //
    ASSERT(I2SBaseValid(ui32Base));

    ui32Trigger = HWREG(I2S0_BASE + I2S_O_STMPWCNT);
    ui32Trigger = (ui32Trigger + 2) % g_pControlTable->ui16ChBufSize;

    //
    // Setup the samplestamp trigger for input streams.
    //
    if(bInput)
    {
        HWREG(I2S0_BASE + I2S_O_STMPINTRIG) = ui32Trigger;
    }

    //
    // Setup the samplestamp trigger for output streams.
    //
    if(bOutput)
    {
        HWREG(I2S0_BASE + I2S_O_STMPOUTTRIG) = ui32Trigger;
    }

}

//*****************************************************************************
//
//! Get the current value of a sample stamp counter
//
//*****************************************************************************
uint32_t
I2SSampleStampGet(uint32_t ui32Base, uint32_t ui32Channel)
{
    uint32_t ui32FrameClkCnt;
    uint32_t ui32SysClkCnt;
    uint32_t ui32PeriodSysClkCnt;
    uint32_t ui32SampleStamp;

    //
    // Get the number of Frame clock counts since last stamp.
    //
    ui32FrameClkCnt = HWREG(ui32Base + I2S_O_STMPWCNTCAPT0);

    //
    // Get the number of system clock ticks since last frame clock edge.
    //
    ui32SysClkCnt = HWREG(ui32Base + I2S_O_STMPXCNTCAPT0);

    //
    // Get the number system clock ticks in the last frame clock period.
    //
    ui32PeriodSysClkCnt = HWREG(ui32Base + I2S_O_STMPXPER);

    //
    // Calculate the sample stamp.
    //
    ui32SampleStamp = (ui32SysClkCnt << 16) / ui32PeriodSysClkCnt;
    ui32SampleStamp = (ui32SampleStamp > I2S_STMP_SATURATION) ?
                      I2S_STMP_SATURATION : ui32SampleStamp;
    ui32SampleStamp |= (ui32FrameClkCnt << 16);

    return (ui32SampleStamp);
}
