/******************************************************************************
*  Filename:       aux_ctrl.c
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Driver for the AUX Controller
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

#include "aux_ctrl.h"

//*****************************************************************************
//
//! Load AUX controller Firmware into dedicated RAM
//
//*****************************************************************************
void
AUXCTRLImageLoad(uint16_t *pui16Image, uint32_t ui32StartAddr,
                 uint32_t ui32Size)
{
    uint16_t* pui16Src16;
    uint16_t* pui16Dst16;
    uint32_t ui32WordCnt;

    //
    // Check the arguments.
    //
    ASSERT(ui32StartAddr < 512);
    ASSERT(ui32Size <= 1024);
    ASSERT((ui32Size / 2 + ui32StartAddr) <= 512);

    //
    // Copy image to AUX RAM.
    //
    ui32WordCnt = (ui32Size >> 1);
    pui16Src16 = pui16Image;
    pui16Dst16 = (uint16_t*)(AUX_RAM_BASE + (ui32StartAddr << 1));

    while(ui32WordCnt--)
    {
        *pui16Dst16++ = *pui16Src16++;
    }
}
