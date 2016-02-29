/******************************************************************************
*  Filename:       osc.c
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Driver for setting up the system Oscillators
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

#include "osc.h"

//*****************************************************************************
//
//!  Configure the oscillator input to the a source clock.
//
//*****************************************************************************
void
OSCClockSourceSet(uint32_t ui32SrcClk, uint32_t ui32Osc)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32SrcClk & OSC_SRC_CLK_LF) ||
           (ui32SrcClk & OSC_SRC_CLK_MF) ||
           (ui32SrcClk & OSC_SRC_CLK_HF));
    ASSERT((ui32Osc == OSC_RCOSC_HF) ||
           (ui32Osc == OSC_RCOSC_LF) ||
           (ui32Osc == OSC_XOSC_HF) ||
           (ui32Osc == OSC_XOSC_LF));

    //
    // Request the high frequency source clock (using 24 MHz XTAL)
    //
    if(ui32SrcClk & OSC_SRC_CLK_HF)
    {      
        //
        // Enable the HF XTAL as HF clock source
        //
        DDI16BitfieldWrite(AUX_OSCDDI_BASE, OSC_DIG_O_CTL0, 
                           OSC_DIG_CTL0_SCLK_HF_SRC_SEL_M,
                           OSC_DIG_CTL0_SCLK_HF_SRC_SEL_S,
                           ui32Osc);
        
        //
        // Using 24 MHz Xtal...
        //
        DDI16BitfieldWrite(AUX_OSCDDI_BASE, OSC_DIG_O_CTL0, 
                           OSC_DIG_CTL0_XTAL_IS_24M_M,
                           OSC_DIG_CTL0_XTAL_IS_24M_S,
                           0x1);      
    }

    //
    // Configure the medium frequency source clock
    //
    if(ui32SrcClk & OSC_SRC_CLK_MF)
    {
        DDI16BitfieldWrite(AUX_OSCDDI_BASE, OSC_DIG_O_CTL0, 
                           OSC_DIG_CTL0_SCLK_MF_SRC_SEL_M,
                           OSC_DIG_CTL0_SCLK_MF_SRC_SEL_S,
                           ui32Osc);
    }

    //
    // Configure the low frequency source clock.
    //
    if(ui32SrcClk & OSC_SRC_CLK_LF)
    {
        //
        // Change the clock source.
        //
        DDI16BitfieldWrite(AUX_OSCDDI_BASE, OSC_DIG_O_CTL0,
                           OSC_DIG_CTL0_SCLK_LF_SRC_SEL_M,
                           OSC_DIG_CTL0_SCLK_LF_SRC_SEL_S,
                           ui32Osc);
    }
}

//*****************************************************************************
//
//!  Get the source clock settings
//
//*****************************************************************************
uint32_t
OSCClockSourceGet(uint32_t ui32SrcClk)
{
    uint32_t ui32ClockSource;
    
    //
    // Check the arguments.
    //
    ASSERT((ui32SrcClk & OSC_SRC_CLK_LF) ||
           (ui32SrcClk & OSC_SRC_CLK_HF));
    
    //
    // Return the source for the selected clock.
    //
    if(ui32SrcClk == OSC_SRC_CLK_LF)
    {
        ui32ClockSource = DDI16BitfieldRead(AUX_OSCDDI_BASE, OSC_DIG_O_STAT0,
                                            OSC_DIG_STAT0_SCLK_LF_SRC_M,
                                            OSC_DIG_STAT0_SCLK_LF_SRC_S);
    }
    else
    {
        ui32ClockSource = DDI16BitfieldRead(AUX_OSCDDI_BASE, OSC_DIG_O_STAT0,
                                            OSC_DIG_STAT0_SCLK_HF_SRC_M,
                                            OSC_DIG_STAT0_SCLK_HF_SRC_S);
    }
    return (ui32ClockSource);
}

//*****************************************************************************
//
//! Enable CM3 access to the OSC_DIG module
//
//*****************************************************************************
void
OSCInterfaceEnable(void)
{
    //
    // Force power on AUX to ensure CPU has access
    //
    AONWUCAuxWakeupEvent(AONWUC_AUX_WAKEUP);
    while(!(AONWUCPowerStatus() & AONWUC_AUX_POWER_ON))
    { }
       
    //
    // Enable all the AUX domain clocks and wait for them to be ready
    //
    AUXWUCClockEnable(AUX_WUC_OSCCTRL_CLOCK);
    while(AUXWUCClockStatus(AUX_WUC_OSCCTRL_CLOCK) != AUX_WUC_CLOCK_READY)
    { }
}
