/******************************************************************************
*  Filename:       aon_rtc.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the AON RTC
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
//! \addtogroup aonrtc_api
//! @{
//
//*****************************************************************************

#ifndef __AON_RTC_H__
#define __AON_RTC_H__

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
#include "hw_aon_rtc.h"
#include "debug.h"

//*****************************************************************************
//
// Values that can be passed to most of the AON_RTC APIs as the ui32Channel
// parameter.
//
//*****************************************************************************
#define AON_RTC_CH_NONE            0x0 // RTC No channel
#define AON_RTC_CH0                0x1 // RTC Channel 0
#define AON_RTC_CH1                0x2 // RTC Channel 1
#define AON_RTC_CH2                0x4 // RTC Channel 2
#define AON_RTC_ACTIVE             0x8 // RTC Active
    
//*****************************************************************************
//
// Values that can be passed to AONRTCConfigDelay as the ui32Delay parameter.
//
//*****************************************************************************
#define AON_RTC_CONFIG_DELAY_NODELAY 0 // NO DELAY
#define AON_RTC_CONFIG_DELAY_1       1 // Delay of   1 clk cycle
#define AON_RTC_CONFIG_DELAY_2       2 // Delay of   2 clk cycles
#define AON_RTC_CONFIG_DELAY_4       3 // Delay of   4 clk cycles
#define AON_RTC_CONFIG_DELAY_8       4 // Delay of   8 clk cycles
#define AON_RTC_CONFIG_DELAY_16      5 // Delay of  16 clk cycles
#define AON_RTC_CONFIG_DELAY_32      6 // Delay of  32 clk cycles
#define AON_RTC_CONFIG_DELAY_48      7 // Delay of  48 clk cycles
#define AON_RTC_CONFIG_DELAY_64      8 // Delay of  64 clk cycles
#define AON_RTC_CONFIG_DELAY_80      9 // Delay of  80 clk cycles
#define AON_RTC_CONFIG_DELAY_96     10 // Delay of  96 clk cycles
#define AON_RTC_CONFIG_DELAY_112    11 // Delay of 112 clk cycles
#define AON_RTC_CONFIG_DELAY_128    12 // Delay of 128 clk cycles
#define AON_RTC_CONFIG_DELAY_144    13 // Delay of 144 clk cycles
#define AON_RTC_CONFIG_DELAY_160    14 // Delay of 160 clk cycles
#define AON_RTC_CONFIG_DELAY_176    15 // Delay of 176 clk cycles

//*****************************************************************************
//
// Values that can be passed to AONRTCSetModeCH1 as the ui32Mode
// parameter.
//
//*****************************************************************************
#define AON_RTC_MODE_CH1_CAPTURE     1 // Capture mode
#define AON_RTC_MODE_CH1_COMPARE     0 // Compare Mode

//*****************************************************************************
//
// Values that can be passed to AONRTCSetModeCH2 as the ui32Mode
// parameter.
//
//*****************************************************************************
#define AON_RTC_MODE_CH2_CONTINUOUS    1 // Continuous mode
#define AON_RTC_MODE_CH2_NORMALCOMPARE 0 // Normal compare mode
    
//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// void AONRTCEnable(void);
// void AONRTCDisable(void);
// uint32_t AONRTCStatus(void);
// void AONRTCReset(void);
// void AONRTCDelayConfig(uint32_t ui32Delay);
// void AONRTCCombinedEventConfig(uint32_t ui32Channels);
// void AONRTCEventClear(uint32_t ui32Channel);
// bool AONRTCEventGet(uint32_t ui32Channel);
// uint32_t AONRTCSecGet(void);
// uint32_t AONRTCFractionGet(void);
// uint32_t AONRTCSubSecIncrGet(void);
// void AONRTCModeCh1Set(uint32_t ui32Mode);
// uint32_t AONRTCModeCh1Get(void);
// void AONRTCModeCh2Set(uint32_t ui32Mode);
// uint32_t AONRTCModeCh2Get(void);
// void AONRTCChannelEnable(uint32_t ui32Channel);
// void AONRTCChannelDisable(uint32_t ui32Channel);
// void AONRTCCompareValueSet(uint32_t ui32Channel, uint32_t ui32CompValue);
// uint32_t AONRTCCompareValueGet(uint32_t ui32Channel);
// uint32_t AONRTCCurrentCompareValueGet(void);
// void AONRTCIncValueCh2Set(uint32_t ui32IncValue);
// uint32_t AONRTCIncValueCh2Get(void);
// uint32_t AONRTCCaptureValueCh1Get(void);

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

//*****************************************************************************
//
//! Enable the RTC
//!
//! Enable the AON Real Time Clock
//!
//! \note Event generation for each of the three channels must also be enabled
//!  using the function AONRTCEnableChannel().
//!
//! \sa AONRTCEnableChannel().
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONRTCEnable(void)
{
    //
    // Enable RTC.
    //
    HWREG(AON_RTC_BASE + AON_RTC_O_CTL) |= AON_RTC_CTL_EN;
}

//*****************************************************************************
//
//! Disable the RTC
//!
//! Disable the AON Real Time Clock.
//!
//! \note Event generation for each of the three channels can also be disabled
//! using the function AONRTCDisableChannel().
//!
//! \sa AONRTCDisableChannel().
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONRTCDisable(void)
{
    //
    // Disable RTC
    //
    HWREG(AON_RTC_BASE + AON_RTC_O_CTL) &= ~(AON_RTC_CTL_EN);
}

//*****************************************************************************
//
//! Check if the AON Real Time Clock is running.
//!
//! Use this function to check if the RTC is enabled. This can be relevant when
//! recovering from powerdown mode. In powerdown the AON domain is still active
//! and therefore the configuration of the RTC is not lost. The application 
//! code can poll the RTC with this function to check if the RTC is active 
//! before trying to (re)configure the RTC.
//!
//! The returned value will be a bitwise OR'ed combination of the following
//! \b AON_RTC_ACTIVE, \b AON_RTC_CH0, \b AON_RTC_CH1 and \b AON_RTC_CH2.
//!
//! \note An enabled channel in the return value does not indicate that the RTC
//! is running. The AON_RTC_ACTIVE must be set as well.
//!
//! \return Returns a bitwise combination of values indicating if the the RTC 
//! is active and which channels are enabled.
//
//*****************************************************************************
extern uint32_t AONRTCStatus(void);

//*****************************************************************************
//
//! Reset the RTC
//!
//! Reset the AON Real Time Clock
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONRTCReset(void)
{
    //
    // Reset RTC.
    //
    HWREG(AON_RTC_BASE + AON_RTC_O_CTL) |= AON_RTC_CTL_RESET;
}

//*****************************************************************************
//
//! Configure Event Delay for the RTC
//!
//! \param ui32Delay specifies the delay time for delayed events.
//!
//! Each event from the three individual channels can generate a delayed
//! event. The delay time for these events is set using this function.
//! The delay is measured in clock cycles.
//!
//! The \e ui32Delay parameter must be one of the following:
//! \b AON_RTC_CONFIG_DELAY_NODELAY, \b AON_RTC_CONFIG_DELAY_1
//! \b AON_RTC_CONFIG_DELAY_2,       \b AON_RTC_CONFIG_DELAY_4,
//! \b AON_RTC_CONFIG_DELAY_8,       \b AON_RTC_CONFIG_DELAY_16
//! \b AON_RTC_CONFIG_DELAY_32,      \b AON_RTC_CONFIG_DELAY_48
//! \b AON_RTC_CONFIG_DELAY_64,      \b AON_RTC_CONFIG_DELAY_80
//! \b AON_RTC_CONFIG_DELAY_96,      \b AON_RTC_CONFIG_DELAY_112
//! \b AON_RTC_CONFIG_DELAY_128,     \b AON_RTC_CONFIG_DELAY_144
//! \b AON_RTC_CONFIG_DELAY_160  or  \b AON_RTC_CONFIG_DELAY_176
//!
//! \note There is only one delay setting shared for all three channels.
//!
//! \return None.
//
//*****************************************************************************
__STATIC_INLINE void
AONRTCDelayConfig(uint32_t ui32Delay)
{
    uint32_t ui32Cfg;

    //
    // Check the arguments.
    //
    ASSERT(ui32Delay <= AON_RTC_CONFIG_DELAY_176);


    ui32Cfg =  HWREG(AON_RTC_BASE + AON_RTC_O_CTL);
    ui32Cfg &= ~(AON_RTC_CTL_EV_DELAY_M);
    ui32Cfg |= (ui32Delay << AON_RTC_CTL_EV_DELAY_S);

    HWREG(AON_RTC_BASE + AON_RTC_O_CTL) = ui32Cfg;
}

//*****************************************************************************
//
//! Configure the source of the combined event
//!
//! \param ui32Channels specifies the channels that are to be used for
//! generating the combined event.
//!
//! A combined delayed event can be generated from a combination of the three
//! delayed events. Delayed events form the specified channels are OR'ed
//! together to generate the combined event. 
//!
//! The \e ui32Channels parameter must be one or the logical or of the following:
//! \b AON_RTC_CH0, \b AON_RTC_CH1, \b AON_RTC_CH2 or
//! \b AON_RTC_CH_NONE for none of the sources.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONRTCCombinedEventConfig(uint32_t ui32Channels)
{
    uint32_t ui32Cfg;

    //
    // Check the arguments.
    //
    ASSERT(ui32Channels & (AON_RTC_CH0 | AON_RTC_CH1 | AON_RTC_CH2));

    ui32Cfg =  HWREG(AON_RTC_BASE + AON_RTC_O_CTL);
    ui32Cfg &= ~(AON_RTC_CTL_COMB_EV_MASK_M);
    ui32Cfg |= (ui32Channels << AON_RTC_CTL_COMB_EV_MASK_S);

    HWREG(AON_RTC_BASE + AON_RTC_O_CTL) = ui32Cfg;
}

//*****************************************************************************
//
//! Clear event from a specified channel
//!
//! \param ui32Channel specifies the channel from which to clear the event.
//!
//! If case of an active event from the specified channel, the event
//! will be cleared (de-asserted).
//!
//! The \e ui32Channel parameter must be one of the following:
//! \b AON_RTC_CH0, \b AON_RTC_CH1 or \b AON_RTC_CH2
//!
//! \return None
//
//*****************************************************************************
extern void AONRTCEventClear(uint32_t ui32Channel);

//*****************************************************************************
//
//! Get event status for a specified channel
//!
//! \param ui32Channel specifies the channel from which to query the event state.
//!
//! If case of an active event from the specified channel, the event
//! this call will return true otherwise false.
//!
//! The \e ui32Channel parameter must be one of the following:
//! \b AON_RTC_CH0, \b AON_RTC_CH1 or \b AON_RTC_CH2.
//!
//! \return Returns true if an event has occurred for the given channel,
//! otherwise false.
//
//*****************************************************************************
extern bool AONRTCEventGet(uint32_t ui32Channel);

//*****************************************************************************
//
//! Get nominal seconds of RTC free-running timer
//!
//! Get the value in seconds of RTC free-running timer, i.e. the integer part.
//! The fractional part is returned from a call to AONRTCGetFraction().
//!
//! \note To read a consistent pair of integer and fractional part, the
//! AONRTCGetSec() call must be done first. Since reading the integer part
//! latches the fractional part as a side effect.
//!
//! \sa AONRTCGetFraction().
//!
//! \return Returns the integer part of RTC free running timer.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AONRTCSecGet(void)
{
    //
    // The following read gets the seconds, but also latches the fractional
    // part.
    //
    return(HWREG(AON_RTC_BASE + AON_RTC_O_SEC));
}

//*****************************************************************************
//
//! Get fractional part of RTC free-running timer
//!
//! Get the value of the fractional part of RTC free-running timer, i.e. the
//! sub-second part.
//!
//! \note To read a consistent pair of integer and fractional part, the
//! AONRTCGetSec() call must be done before this call. Since reading the
//! integer part latches the fractional part as a side effect.
//! Note however, that the fractional part could have rolled over in the mean
//! time, so the correct approach should be:
//!
//! 1. AONRTCSecGet()
//! 2. AONRTCFractionGet()
//! 3. AONRTCSecGet() and verify it machtes the first read in (1)
//!
//! \sa AONRTCSecGet()
//!
//! \return Returns the fractional part of RTC free running timer.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AONRTCFractionGet(void)
{
    //
    // Note: AONRTCSecGet() must be called before this function to get a
    //       consistent reading.
    //
    return(HWREG(AON_RTC_BASE + AON_RTC_O_SUBSEC));
}

//*****************************************************************************
//
//! Get the sub second increment of the RTC.
//!
//! Get the value of the sub-second increment which is added to the RTC
//! absolute time on every clock tick.
//!
//! \note For a precise and temperature independent LF clock (eg. an LF XTAL)
//! this value would stay the same across temperature. For temperatue 
//! dependent clock sources like and RC oscillator, this value will change
//! over time if the application includes functionality for doing temperature
//! compensation of the RTC clock source. The default value corresponds to a 
//! LF clock frequency of exactly 32.768 kHz.
//!
//! \return Returns the sub-second increment of the RTC added to the overall
//! value on every RTC clock tick.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AONRTCSubSecIncrGet(void)
{
    //
    // Note: AONRTCSecGet() must be called before this function to get a
    //       consistent reading.
    //
    return(HWREG(AON_RTC_BASE + AON_RTC_O_SUBSECINC));
}

//*****************************************************************************
//
//! Set operational mode of channel 1
//!
//! \param ui32Mode specifies the mode for channel 1.
//!
//! Set the operational mode of channel 1. It can be capture or compare mode.
//! In capture mode, an external event causes the value of the free running
//! counter to be stored, to remember the time of the event.
//!
//! The \e ui32Mode parameter must be one of the following:
//! \b AON_RTC_MODE_CH1_CAPTURE or \b AON_RTC_MODE_CH1_COMPARE
//!
//! \note The default mode is compare.
//!
//! \return None
//
//*****************************************************************************
extern void AONRTCModeCh1Set(uint32_t ui32Mode);

//*****************************************************************************
//
//! Get operational mode of channel 1
//!
//! Set the operational mode of channel 1. It can be capture or compare mode.
//! In capture mode, an external event causes the value of the free running
//! counter to be stored, to remember the time of the event.
//!
//! \return Returns the operational mode of channel 1, one of:
//! \b AON_RTC_MODE_CH1_CAPTURE or \b AON_RTC_MODE_CH1_COMPARE.
//
//*****************************************************************************
extern uint32_t AONRTCModeCh1Get(void);

//*****************************************************************************
//
//! Set operational mode of channel 2
//!
//! \param ui32Mode specifies the mode for channel 2.
//!
//! Set the operational mode of channel 2. It can be in continuous compare
//! mode or normal compare mode.
//! In continuous mode, a value is automatically incremented to the channel 2
//! compare register, upon a channel 2 compare event. This allows channel 2 to
//! generate a series of completely equidistant events.
//! The increment value is set by the AONRTCSetIncValueCH2() call.
//!
//! The \e ui32Mode parameter must be one of the following:
//! \b AON_RTC_MODE_CH2_CONTINUOUS or \b AON_RTC_MODE_CH2_NORMALCOMPARE.
//!
//! \note The default mode is normal compare.
//!
//! \sa AONRTCSetIncValueCH2() and AONRTCGetIncValueCH2().
//!
//! \return None
//
//*****************************************************************************
extern void AONRTCModeCh2Set(uint32_t ui32Mode);

//*****************************************************************************
//
//! Get operational mode of channel 2
//!
//! Get the operational mode of channel 2. It can be in continuous compare
//! mode or normal compare mode.
//! In continuous mode, a value is automatically incremented to the channel 2
//! compare register, upon a channel 2 compare event. This allows channel 2 to
//! generate a series of completely equidistant events.
//! The increment value is set by the AONRTCSetIncValueCH2() call.
//!
//! \sa AONRTCSetIncValueCH2() and AONRTCGetIncValueCH2().
//!
//! \return Returns the operational mode of channel 2, i.e. one of:
//! \b AON_RTC_MODE_CH2_CONTINUOUS or \b AON_RTC_MODE_CH2_NORMALCOMPARE.
//
//*****************************************************************************
extern uint32_t AONRTCModeCh2Get(void);

//*****************************************************************************
//
//! Enable event operation for the specified channel
//!
//! \param ui32Channel specifies the channel from which to enable events.
//!
//! Enable the event generation for the specified channel.
//!
//! The \e ui32Channel parameter must be one of the following:
//! \b AON_RTC_CH0, \b AON_RTC_CH1 or \b AON_RTC_CH2
//!
//! \note The RTC free running clock  must also be enabled globally using the
//! AONRTCEnable() call.
//!
//! \sa AONRTCEnable().
//!
//! \return None
//
//*****************************************************************************
extern void AONRTCChannelEnable(uint32_t ui32Channel);

//*****************************************************************************
//
//! Disable event operation for the specified channel
//!
//! \param ui32Channel specifies the channel from which to disable events.
//!
//! Disable the event generation for the specified channel.
//!
//! The \e ui32Channel parameter must be one of the following:
//! \b AON_RTC_CH0, \b AON_RTC_CH1 or \b AON_RTC_CH2.
//!
//! \note The RTC free running clock  can also be disabled globally using the
//! AONRTCDisable() call.
//!
//! \sa AONRTCDisable().
//!
//! \return None
//
//*****************************************************************************
extern void AONRTCChannelDisable(uint32_t ui32Channel);

//*****************************************************************************
//
//! Set the compare value for the given channel
//!
//! \param ui32Channel specifies a compare channel
//! \param ui32CompValue is the compare value to set for the specified channel.
//!
//! Set compare value for the specified channel.
//!
//! The \e ui32Channel parameter must be one of the following:
//! \b AON_RTC_CH0, \b AON_RTC_CH1 or \b AON_RTC_CH2.
//!
//! The format of the compare value is a 16 bit integer and 16 bit fractional
//! format <16 sec . 16 subsec > . The current value of the RTC counter 
//! can be retrieved in a format compatible to the compare register using
//! \b AONRTCCurrentCompareValueGet() . To 
//!
//! \return None
//
//*****************************************************************************
extern void AONRTCCompareValueSet(uint32_t ui32Channel,
                                  uint32_t ui32CompValue);

//*****************************************************************************
//
//! Get the compare value for the given channel
//!
//! \param ui32Channel specifies a channel
//!
//! Get compare value for the specified channel.
//!
//! The \e ui32Channel parameter must be one of the following:
//! \b AON_RTC_CH0, \b AON_RTC_CH1 or \b AON_RTC_CH2
//!
//! \return Returns the stored compare value for the given channel
//
//*****************************************************************************
extern uint32_t AONRTCCompareValueGet(uint32_t ui32Channel);

//*****************************************************************************
//
//! Get the current value of the RTC counter in a format compatible to the
//! compare registers.
//!
//! The compare value registers contains the 16 integer and 16 fractional bits.
//! This function will return the current value of the RTC counter in an
//! identical format.
//!
//! \return Returns the current value of the RTC counter in a <16.16>
//! fractional format.
//
//*****************************************************************************
extern uint32_t AONRTCCurrentCompareValueGet(void);

//*****************************************************************************
//
//! Set the channel2 increment value when operating in continuous mode
//!
//! \param ui32IncValue is the increment value when operating in continuous mode.
//!
//! Set the channel2 increment value when operating in continuous mode.
//! The specified value is automatically incremented to the channel 2 compare
//! register, upon a channel 2 compare event. This allows channel 2 to generate
//! a series of completely equidistant events.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONRTCIncValueCh2Set(uint32_t ui32IncValue)
{
    HWREG(AON_RTC_BASE + AON_RTC_O_CH2CMPINC) = ui32IncValue;
}

//*****************************************************************************
//
//! Get the channel2 increment value when operating in continuous mode.
//!
//! Get the channel2 increment value, when channel 2 is operating in
//! continuous mode.
//! This value is automatically incremented to the channel 2 compare
//! register, upon a channel 2 compare event. This allows channel 2 to
//! generate a series of completely equidistant events.
//!
//! \return Returns the channel 2 increment value when operating in continuous
//! mode.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AONRTCIncValueCh2Get(void)
{
    return (HWREG(AON_RTC_BASE + AON_RTC_O_CH2CMPINC));
}

//*****************************************************************************
//
//! Get the channel 1 capture value
//!
//! Get the channel 1 capture value.
//! The upper 16 bits of the returned value is the lower 16 bits of the
//! integer part of the RTC timer. The lower 16 bits of the returned part
//! is the upper 16 bits of the fractional part.
//!
//! \return Returns the channel 1 capture value
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AONRTCCaptureValueCh1Get(void)
{
    return (HWREG(AON_RTC_BASE + AON_RTC_O_CH1CAPT));
}

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif //  __AON_RTC_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
