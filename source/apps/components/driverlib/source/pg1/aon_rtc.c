/******************************************************************************
*  Filename:       aon_rtc.c
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Driver for the AON RTC.
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

#include "aon_rtc.h"

//*****************************************************************************
//
//! Check if the AON Real Time Clock is running.
//
//*****************************************************************************
uint32_t
AONRTCStatus(void)
{
    uint32_t ui32ChannelStatus;
    uint32_t ui32RtcStatus;
    
    //
    // Read out the status'
    //
    ui32ChannelStatus = HWREG(AON_RTC_BASE + AON_RTC_O_CHCTL);
    ui32RtcStatus = HWREG(AON_RTC_BASE + AON_RTC_O_CTL) & 
                    AON_RTC_CTL_EN ? AON_RTC_ACTIVE : 0;
    
    //
    // Return the status
    //
    ui32RtcStatus |= (ui32ChannelStatus & AON_RTC_CHCTL_CH2_EN ? 
                      AON_RTC_CH2 : 0) |
                     (ui32ChannelStatus & AON_RTC_CHCTL_CH1_EN ? 
                      AON_RTC_CH1 : 0) |
                     (ui32ChannelStatus & AON_RTC_CHCTL_CH0_EN ? 
                      AON_RTC_CH0 : 0);
    return ui32RtcStatus;
}

//*****************************************************************************
//
//! Clear event from a specified channel
//
//*****************************************************************************
void
AONRTCEventClear(uint32_t ui32Channel)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Channel == AON_RTC_CH0) ||
           (ui32Channel == AON_RTC_CH1) ||
           (ui32Channel == AON_RTC_CH2));

    if(ui32Channel & AON_RTC_CH0)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_EVFLAGS) |= AON_RTC_EVFLAGS_CH0;
    }
    else if(ui32Channel & AON_RTC_CH1)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_EVFLAGS) |= AON_RTC_EVFLAGS_CH1;
    }
    else if(ui32Channel & AON_RTC_CH2)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_EVFLAGS) |= AON_RTC_EVFLAGS_CH2;
    }
}

//*****************************************************************************
//
//! Get event status for a specified channel
//
//*****************************************************************************
bool
AONRTCEventGet(uint32_t ui32Channel)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Channel == AON_RTC_CH0) ||
           (ui32Channel == AON_RTC_CH1) ||
           (ui32Channel == AON_RTC_CH2));

    if(ui32Channel & AON_RTC_CH0)
    {
        return ((HWREG(AON_RTC_BASE + AON_RTC_O_EVFLAGS) & 
                 AON_RTC_EVFLAGS_CH0) ? true : false);
    }
    else if(ui32Channel & AON_RTC_CH1)
    {
        return ((HWREG(AON_RTC_BASE + AON_RTC_O_EVFLAGS) & 
                 AON_RTC_EVFLAGS_CH1) ? true : false);
    }
    else if(ui32Channel & AON_RTC_CH2)
    {
        return ((HWREG(AON_RTC_BASE + AON_RTC_O_EVFLAGS) &
                 AON_RTC_EVFLAGS_CH2) ? true : false);
    }

    return(false);
}

//*****************************************************************************
//
//! Set operational mode of channel 1
//
//*****************************************************************************
void
AONRTCModeCh1Set(uint32_t ui32Mode)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Mode == AON_RTC_MODE_CH1_CAPTURE) ||
           (ui32Mode == AON_RTC_MODE_CH1_COMPARE));

    if(ui32Mode == AON_RTC_MODE_CH1_CAPTURE)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_CHCTL) |= AON_RTC_CHCTL_CH1_CAPT_EN;
    }
    else if(ui32Mode == AON_RTC_MODE_CH1_COMPARE)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_CHCTL) &= ~(AON_RTC_CHCTL_CH1_CAPT_EN);
    }
}

//*****************************************************************************
//
//! Get operational mode of channel 1
//
//*****************************************************************************
uint32_t
AONRTCModeCh1Get(void)
{
    if(HWREG(AON_RTC_BASE + AON_RTC_O_CHCTL) & AON_RTC_CHCTL_CH1_CAPT_EN)
    {
        return(AON_RTC_MODE_CH1_CAPTURE);
    }
    else
    {
        return(AON_RTC_MODE_CH1_COMPARE);
    }
}

//*****************************************************************************
//
//! Set operational mode of channel 2
//
//*****************************************************************************
void
AONRTCModeCh2Set(uint32_t ui32Mode)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Mode == AON_RTC_MODE_CH2_CONTINUOUS) ||
           (ui32Mode == AON_RTC_MODE_CH2_NORMALCOMPARE));

    if(ui32Mode == AON_RTC_MODE_CH2_CONTINUOUS)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_CHCTL) |= AON_RTC_CHCTL_CH2_CONT_EN;
    }
    else if(ui32Mode == AON_RTC_MODE_CH2_NORMALCOMPARE)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_CHCTL) &= ~(AON_RTC_CHCTL_CH2_CONT_EN);
    }
}

//*****************************************************************************
//
//! Get operational mode of channel 2
//
//*****************************************************************************
uint32_t
AONRTCModeCh2Get(void)
{
    if(HWREG(AON_RTC_BASE + AON_RTC_O_CHCTL) & AON_RTC_CHCTL_CH2_CONT_EN)
    {
        return(AON_RTC_MODE_CH2_CONTINUOUS);
    }
    else
    {
        return(AON_RTC_MODE_CH2_NORMALCOMPARE);
    }
}

//*****************************************************************************
//
//! Enable event operation for the specified channel
//
//*****************************************************************************
void
AONRTCChannelEnable(uint32_t ui32Channel)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Channel == AON_RTC_CH0) ||
           (ui32Channel == AON_RTC_CH1) ||
           (ui32Channel == AON_RTC_CH2));

    if(ui32Channel & AON_RTC_CH0)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_CHCTL) |= AON_RTC_CHCTL_CH0_EN;
    }
    else if(ui32Channel & AON_RTC_CH1)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_CHCTL) |= AON_RTC_CHCTL_CH1_EN;
    }
    else if(ui32Channel & AON_RTC_CH2)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_CHCTL) |= AON_RTC_CHCTL_CH2_EN;
    }
}

//*****************************************************************************
//
//! Disable event operation for the specified channel
//
//*****************************************************************************
void
AONRTCChannelDisable(uint32_t ui32Channel)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Channel == AON_RTC_CH0) ||
           (ui32Channel == AON_RTC_CH1) ||
           (ui32Channel == AON_RTC_CH2));

    if(ui32Channel & AON_RTC_CH0)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_CHCTL) &= ~(AON_RTC_CHCTL_CH0_EN);
    }
    else if(ui32Channel & AON_RTC_CH1)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_CHCTL) &= ~(AON_RTC_CHCTL_CH1_EN);
    }
    else if(ui32Channel & AON_RTC_CH2)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_CHCTL) &= ~(AON_RTC_CHCTL_CH2_EN);
    }
}

//*****************************************************************************
//
//! Set the compare value for the given channel
//
//*****************************************************************************
void
AONRTCCompareValueSet(uint32_t ui32Channel, uint32_t ui32CompValue)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Channel == AON_RTC_CH0) ||
           (ui32Channel == AON_RTC_CH1) ||
           (ui32Channel == AON_RTC_CH2));

    if(ui32Channel & AON_RTC_CH0)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_CH0CMP) = ui32CompValue;
    }
    else if(ui32Channel & AON_RTC_CH1)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_CH1CMP) = ui32CompValue;
    }
    else if(ui32Channel & AON_RTC_CH2)
    {
        HWREG(AON_RTC_BASE + AON_RTC_O_CH2CMP) = ui32CompValue;
    }
}

//*****************************************************************************
//
//! Get the compare value for the given channel
//
//*****************************************************************************
uint32_t
AONRTCCompareValueGet(uint32_t ui32Channel)
{
    //
    // Check the arguments
    //
    ASSERT((ui32Channel == AON_RTC_CH0) ||
           (ui32Channel == AON_RTC_CH1) ||
           (ui32Channel == AON_RTC_CH2));

    if(ui32Channel & AON_RTC_CH0)
    {
        return(HWREG(AON_RTC_BASE + AON_RTC_O_CH0CMP));
    }
    else if(ui32Channel & AON_RTC_CH1)
    {
        return(HWREG(AON_RTC_BASE + AON_RTC_O_CH1CMP));
    }
    else if(ui32Channel & AON_RTC_CH2)
    {
        return(HWREG(AON_RTC_BASE + AON_RTC_O_CH2CMP));
    }
    //
    // Should never return from here!
    //
    return(0);
}

//*****************************************************************************
//
//! Get the current value of the RTC counter in a format compatible to the
//! compare registers.
//
//*****************************************************************************
uint32_t
AONRTCCurrentCompareValueGet(void)
{
    uint32_t ui32CurrentSec0;
    uint32_t ui32CurrentSec1;
    uint32_t ui32CurrentSubSec;

    //
    // Read the integer part of the RTC counter
    //
    ui32CurrentSec0 = HWREG( AON_RTC_BASE + AON_RTC_O_SEC );

    //
    // Read the fractional part of the RTC counter. Make sure the fractional
    // part has not rolled over and incremented the integer part.
    //
    do {
        ui32CurrentSubSec = HWREG(AON_RTC_BASE + AON_RTC_O_SUBSEC);
        ui32CurrentSec1 = ui32CurrentSec0;
        ui32CurrentSec0 = HWREG(AON_RTC_BASE + AON_RTC_O_SEC);
    } while(ui32CurrentSec0 != ui32CurrentSec1);

    //
    // Return the RTC value in the correct format
    //
    return ((ui32CurrentSec0 << 16) | (ui32CurrentSubSec >> 16));
}

