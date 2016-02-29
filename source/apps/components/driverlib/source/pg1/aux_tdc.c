/******************************************************************************
*  Filename:       aux_tdc.c
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Driver for the AUX Time to Digital Converter interface.
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

#include "aux_tdc.h"

//*****************************************************************************
//
//! Configure the operation of the AUX TDC
//
//*****************************************************************************
void
AUXTDCConfigSet(uint32_t ui32Base, uint32_t ui32StartCondition,
                uint32_t ui32StopCondition)
{
    //
    // Check the arguments.
    //
    ASSERT(AUXTDCBaseValid(ui32Base));

    //
    // Make sure the AUX TDC is in the idle state before changing the
    // configuration.
    //
    while(!((HWREG(ui32Base + AUX_TDC_O_STAT) & AUX_TDC_STAT_STATE_M) ==
            AUX_TDC_STAT_STATE_IDLE))
    {
    }

    //
    // Clear previous results.
    //
    HWREG(ui32Base + AUX_TDC_O_CTL) = 0x0;

    //
    // Change the configuration.
    //
    HWREG(ui32Base + AUX_TDC_O_STAT) = ui32StartCondition | ui32StopCondition;
}

//*****************************************************************************
//
//! Check if the AUX TDC is done measuring
//
//*****************************************************************************
uint32_t
AUXTDCMeasurementDone(uint32_t ui32Base)
{
    uint32_t ui32Reg;
    uint32_t ui32Status;

    //
    // Check the arguments.
    //
    ASSERT(AUXTDCBaseValid(ui32Base));

    //
    // Check if the AUX TDC is done measuring.
    //
    ui32Reg = HWREG(ui32Base + AUX_TDC_O_STAT);
    if(ui32Reg & AUX_TDC_STAT_DONE)
    {
        ui32Status = AUX_TDC_DONE;
    }
    else if(ui32Reg & AUX_TDC_STAT_SAT)
    {
        ui32Status = AUX_TDC_TIMEOUT;
    }
    else
    {
        ui32Status = AUX_TDC_BUSY;
    }

    //
    // Return the status.
    //
    return (ui32Status);
}
