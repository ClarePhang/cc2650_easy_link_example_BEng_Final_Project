/******************************************************************************
*  Filename:       i2c.c
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Driver for the I2C module
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

#include "i2c.h"

//*****************************************************************************
//
//! Initializes the I2C Master block
//
//*****************************************************************************
void
I2CMasterInitExpClk(uint32_t ui32Base, uint32_t ui32I2CClk,
                    bool bFast)
{
    uint32_t ui32SCLFreq;
    uint32_t ui32TPR;

    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Must enable the device before doing anything else.
    //
    I2CMasterEnable(ui32Base);

    //
    // Get the desired SCL speed.
    //
    if(bFast == true)
    {
        ui32SCLFreq = 400000;
    }
    else
    {
        ui32SCLFreq = 100000;
    }

    //
    // Compute the clock divider that achieves the fastest speed less than or
    // equal to the desired speed. The numerator is biased to favor a larger
    // clock divider so that the resulting clock is always less than or equal
    // to the desired clock, never greater.
    //
    ui32TPR = ((ui32I2CClk + (2 * 10 * ui32SCLFreq) - 1) / (2 * 10 * ui32SCLFreq)) - 1;
    HWREG(ui32Base + I2C_O_MTPR) = ui32TPR;
}

//*****************************************************************************
//
//! Gets the error status of the I2C Master module
//
//*****************************************************************************
uint32_t
I2CMasterErr(uint32_t ui32Base)
{
    uint32_t ui32Err;

    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Get the raw error state.
    //
    ui32Err = HWREG(ui32Base + I2C_O_MSTAT);

    //
    // If the I2C master is busy, then all the other status bits are invalid,
    // and there is no error to report.
    //
    if(ui32Err & I2C_MSTAT_BUSY)
    {
        return(I2C_MASTER_ERR_NONE);
    }

    //
    // Check for errors.
    //
    if(ui32Err & (I2C_MSTAT_ERR | I2C_MSTAT_ARBLST))
    {
        return(ui32Err & (I2C_MSTAT_ARBLST | I2C_MSTAT_DATACK | I2C_MSTAT_ADRACK));
    }
    else
    {
        return(I2C_MASTER_ERR_NONE);
    }
}

//*****************************************************************************
//
//! Registers an interrupt handler for the I2C module
//
//*****************************************************************************
void
I2CIntRegister(uint32_t ui32Base, void (*pfnHandler)(void))
{
    uint32_t ui32Int;

    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Get the interrupt number.
    //
    ui32Int = INT_I2C;

    //
    // Register the interrupt handler, returning an error if an error occurs.
    //
    IntRegister(ui32Int, pfnHandler);

    //
    // Enable the I2C interrupt.
    //
    IntEnable(ui32Int);
}

//*****************************************************************************
//
//! Unregisters an interrupt handler for the I2C module
//
//*****************************************************************************
void
I2CIntUnregister(uint32_t ui32Base)
{
    uint32_t ui32Int;

    //
    // Check the arguments.
    //
    ASSERT(I2CBaseValid(ui32Base));

    //
    // Get the interrupt number.
    //
    ui32Int = INT_I2C;

    //
    // Disable the interrupt.
    //
    IntDisable(ui32Int);

    //
    // Unregister the interrupt handler.
    //
    IntUnregister(ui32Int);
}
