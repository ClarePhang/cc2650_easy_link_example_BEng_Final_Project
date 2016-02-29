/******************************************************************************
*  Filename:       aux_timer.c
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Driver for the AUX Timer Module
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

#include "aux_timer.h"

//*****************************************************************************
//
//! Configure AUX timer
//
//*****************************************************************************
void
AUXTimerConfigure(uint32_t ui32Timer, uint32_t ui32Config)
{
    uint32_t ui32Val;

    //
    // Check the arguments.
    //
    ASSERT((ui32Timer == AUX_TIMER_0) || (ui32Timer == AUX_TIMER_1) ||
           (ui32Timer == AUX_TIMER_BOTH));
    ASSERT(((ui32Config & 0x0000000F) == AUX_TIMER_CFG_ONE_SHOT) ||
           ((ui32Config & 0x0000000F) == AUX_TIMER_CFG_PERIODIC) ||
           ((ui32Config & 0x0000000F) == AUX_TIMER_CFG_ONE_SHOT_EDGE_COUNT) ||
           ((ui32Config & 0x0000000F) == AUX_TIMER_CFG_PERIODIC_EDGE_COUNT) ||
           ((ui32Config & 0x000000F0) == AUX_TIMER_CFG_RISING_EDGE) ||
           ((ui32Config & 0x000000F0) == AUX_TIMER_CFG_FALLING_EDGE) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AON_WU_EVENT) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_CMP_A_I) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_CMP_B_I) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_TDCDONE) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_TIMER0_EVENT) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_TIMER1_EVENT) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_SMPH_RELEASE) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_ADC_DONE) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_0) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_1) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_2) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_3) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_4) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_5) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_6) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_7) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_8) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_9) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_10) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_11) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_12) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_13) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_14) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_AIO_DAT_15) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_ACLK_REF) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_MCU_EVENT) ||
           ((ui32Config & 0x00000F00) == AUX_TIMER_CFG_TICK_SRC_ADC_IRQ));

    //
    // Configure Timer 0.
    //
    if(ui32Timer & AUX_TIMER_0)
    {
        //
        // Stop timer 0.
        //
        ui32Val = HWREG(AUX_TIMER_BASE + AUX_TIMER_O_START);
        ui32Val = (ui32Val & ~AUX_TIMER_START_START0) |
                  AUX_TIMER_START_STOP0;
        HWREG(AUX_TIMER_BASE + AUX_TIMER_O_START) = ui32Val;

        //
        // Set mode.
        //
        ui32Val = HWREG(AUX_TIMER_BASE + AUX_TIMER_O_CFG0);
        ui32Val &= ~(AUX_TIMER_CFG0_T0MODE_M | AUX_TIMER_CFG0_T0RELOAD_M);
        ui32Val |= (ui32Config & (AUX_TIMER_CFG0_T0MODE_M | AUX_TIMER_CFG0_T0RELOAD_M));
        HWREG(AUX_TIMER_BASE + AUX_TIMER_O_CFG0) = ui32Val;

        //
        // If edge counter, set rising/falling edge and tick source.
        //
        if(ui32Config & AUX_TIMER_CFG0_T0MODE)
        {
            ui32Val = HWREG(AUX_TIMER_BASE + AUX_TIMER_O_CFG1);
            ui32Val &= ~(AUX_TIMER_CFG1_SRC_POL0_M |
                         AUX_TIMER_CFG1_T0TICKSRC_M);

            //
            // set edge polarity.
            //
            if(ui32Config & AUX_TIMER_CFG_FALLING_EDGE)
            {
                ui32Val |= AUX_TIMER_CFG1_SRC_POL0;
            }

            //
            // Set tick source.
            //
            ui32Val |= ((ui32Config & 0x00000F00) >> 8) <<
                       AUX_TIMER_CFG1_T0TICKSRC_S;

            HWREG(AUX_TIMER_BASE + AUX_TIMER_O_CFG1) = ui32Val;
        }
    }

    //
    // Configure Timer 1.
    //
    if(ui32Timer & AUX_TIMER_1)
    {
        //
        // Stop timer 1.
        //
        ui32Val = HWREG(AUX_TIMER_BASE + AUX_TIMER_O_START);
        ui32Val = (ui32Val & ~AUX_TIMER_START_START1) |
                  AUX_TIMER_START_STOP1;
        HWREG(AUX_TIMER_BASE + AUX_TIMER_O_START) = ui32Val;

        //
        // Set mode.
        //
        ui32Val = HWREG(AUX_TIMER_BASE + AUX_TIMER_O_CFG0);
        ui32Val &= ~(AUX_TIMER_CFG0_T1MODE_M | AUX_TIMER_CFG0_T1RELOAD_M);
        ui32Val |= ((ui32Config << 2) & (AUX_TIMER_CFG0_T1MODE_M | AUX_TIMER_CFG0_T1RELOAD_M));
        HWREG(AUX_TIMER_BASE + AUX_TIMER_O_CFG0) = ui32Val;

        //
        // If edge counter, set rising/falling edge and tick source.
        //
        if(ui32Config & AUX_TIMER_CFG0_T1MODE)
        {
            ui32Val = HWREG(AUX_TIMER_BASE + AUX_TIMER_O_CFG1);
            ui32Val &= ~(AUX_TIMER_CFG1_SRC_POL1_M | AUX_TIMER_CFG1_T1TICKSRC_M);

            //
            // set edge polarity.
            //
            if((ui32Config & 0x000000F0) == AUX_TIMER_CFG_FALLING_EDGE)
            {
                ui32Val |= AUX_TIMER_CFG1_SRC_POL1;
            }

            //
            // Set tick source.
            //
            ui32Val |= ((ui32Config & 0x00000F00) >> 8) << AUX_TIMER_CFG1_T1TICKSRC_S;
            HWREG(AUX_TIMER_BASE + AUX_TIMER_O_CFG1) = ui32Val;
        }
    }
}

//*****************************************************************************
//
//! Start AUX timer
//
//*****************************************************************************
void
AUXTimerStart(uint32_t ui32Timer)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Timer == AUX_TIMER_0) ||
           (ui32Timer == AUX_TIMER_1) ||
           (ui32Timer == AUX_TIMER_BOTH));

    if(ui32Timer & AUX_TIMER_0)
    {
        //
        // Start timer 0.
        //
        HWREG(AUX_TIMER_BASE + AUX_TIMER_O_START) |=
            AUX_TIMER_START_START0;
    }
    if(ui32Timer & AUX_TIMER_1)
    {
        //
        // Start timer 1.
        //
        HWREG(AUX_TIMER_BASE + AUX_TIMER_O_START) |=
            AUX_TIMER_START_START1;
    }
}

//*****************************************************************************
//
//! Stop AUX timer
//
//*****************************************************************************
void
AUXTimerStop(uint32_t ui32Timer)
{
    uint32_t ui32Reg;

    //
    // Check the arguments.
    //
    ASSERT((ui32Timer == AUX_TIMER_0) ||
           (ui32Timer == AUX_TIMER_1) ||
           (ui32Timer == AUX_TIMER_BOTH));

    ui32Reg = HWREG(AUX_TIMER_BASE + AUX_TIMER_O_START);

    if(ui32Timer & AUX_TIMER_0)
    {
        //
        // Stop timer 0.
        //
        
        ui32Reg = (ui32Reg & ~AUX_TIMER_START_START0) | 
                  AUX_TIMER_START_STOP0;
    }
    if(ui32Timer & AUX_TIMER_1)
    {
        //
        // Stop timer 1.
        //
        ui32Reg = (ui32Reg & ~AUX_TIMER_START_START1) | 
                  AUX_TIMER_START_STOP1;
    }

    HWREG(AUX_TIMER_BASE + AUX_TIMER_O_START) = ui32Reg;
}

//*****************************************************************************
//
//! Set AUX timer prescale value
//
//*****************************************************************************
void
AUXTimerPrescaleSet(uint32_t ui32Timer, uint32_t ui32PrescaleDiv)
{
    uint32_t ui32Val;

    //
    // Check the arguments.
    //
    ASSERT((ui32Timer == AUX_TIMER_0) || (ui32Timer == AUX_TIMER_1) ||
           (ui32Timer == AUX_TIMER_BOTH));
    ASSERT(ui32PrescaleDiv <= AUX_TIMER_PRESCALE_DIV_32768);

    if(ui32Timer & AUX_TIMER_0)
    {
        //
        // Set timer 0 prescale value.
        //
        ui32Val = HWREG(AUX_TIMER_BASE + AUX_TIMER_O_CFG0);
        ui32Val &= ~AUX_TIMER_CFG0_T0PRE_M;
        ui32Val |=  ui32PrescaleDiv << AUX_TIMER_CFG0_T0PRE_S;
        HWREG(AUX_TIMER_BASE + AUX_TIMER_O_CFG0) = ui32Val;
    }
    if(ui32Timer & AUX_TIMER_1)
    {
        //
        // Set timer 1 prescale value.
        //
        ui32Val = HWREG(AUX_TIMER_BASE + AUX_TIMER_O_CFG0);
        ui32Val &= ~AUX_TIMER_CFG0_T1PRE_M;
        ui32Val |=  ui32PrescaleDiv << AUX_TIMER_CFG0_T1PRE_S;
        HWREG(AUX_TIMER_BASE  + AUX_TIMER_O_CFG0) = ui32Val;
    }
}

//*****************************************************************************
//
//! Get AUX timer prescale value
//
//*****************************************************************************
uint32_t
AUXTimerPrescaleGet(uint32_t ui32Timer)
{
    uint32_t ui32Val;
    uint32_t ui32PrescaleDiv;

    //
    // Check the arguments.
    //
    ASSERT((ui32Timer == AUX_TIMER_0) || (ui32Timer == AUX_TIMER_1));

    ui32Val = (HWREG(AUX_TIMER_BASE + AUX_TIMER_O_CFG0));
    if(ui32Timer & AUX_TIMER_0)
    {
        //
        // Get timer 0 prescale value.
        //
        ui32PrescaleDiv =
            (ui32Val & AUX_TIMER_CFG0_T0PRE_M) >> AUX_TIMER_CFG0_T0PRE_S;
    }
    else
    {
        //
        // Get timer 1 prescale value.
        //
        ui32PrescaleDiv =
            (ui32Val & AUX_TIMER_CFG0_T1PRE_M) >> AUX_TIMER_CFG0_T1PRE_S;
    }

    return(ui32PrescaleDiv);
}
