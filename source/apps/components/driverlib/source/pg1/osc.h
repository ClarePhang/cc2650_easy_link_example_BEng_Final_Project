/******************************************************************************
*  Filename:       osc.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the system oscillator control.
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
//! \addtogroup osc_api
//! @{
//
//*****************************************************************************

#ifndef __OSC_H__
#define __OSC_H__

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
#include "hw_ddi.h"
#include "hw_osc_dig.h"
#include "aon_wuc.h"
#include "aux_wuc.h"
#include "rom.h"
#include "ddi.h"
#include "debug.h"

//*****************************************************************************
//
// Defines for the High Frequency XTAL Power mode
//
//*****************************************************************************
#define LOW_POWER_XOSC          1
#define HIGH_POWER_XOSC         0

//*****************************************************************************
//
// Defines for the High Frequency XTAL Power mode
//
//*****************************************************************************
#define OSC_SRC_CLK_HF          0x00000001
#define OSC_SRC_CLK_MF          0x00000002
#define OSC_SRC_CLK_LF          0x00000004

#define OSC_RCOSC_HF            0x00000000
#define OSC_XOSC_HF             0x00000001
#define OSC_RCOSC_LF            0x00000002
#define OSC_XOSC_LF             0x00000003

#define SCLK_HF_RCOSC_HF        0
#define SCLK_HF_XOSC_HF         1

#define SCLK_MF_RCOSC_HF        0
#define SCLK_MF_XOSC_HF         1

#define SCLK_LF_FROM_RCOSC_HF   0
#define SCLK_LF_FROM_XOSC_HF    1
#define SCLK_LF_FROM_RCOSC_LF   2
#define SCLK_LF_FROM_XOSC_LF    3

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// void OSCXHfPowerModeSet(uint32_t ui32Mode);
// void OSCClockSourceSet(uint32_t ui32SrcClk, uint32_t ui32Osc);
// uint32_t OSCClockSourceGet(uint32_t ui32SrcClk);
// bool OSCHfSourceReady(void);
// void OSCHfSourceSwitch(void);
// void OSCInterfaceEnable(void);
// void OSCInterfaceDisable(void);

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

//*****************************************************************************
//
//!  Set Power Mode for High Frequency XTAL Oscillator
//!
//! \param ui32Mode is the power mode for the HF XTAL
//!
//! The possible power modes for the HF XTAL Oscillator are
//! - \b LOW_POWER_XOSC
//! - \b HIGH_POWER_XOSC
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
OSCXHfPowerModeSet(uint32_t ui32Mode)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Mode == LOW_POWER_XOSC) ||
           (ui32Mode == HIGH_POWER_XOSC));
    
    //
    // Change the power mode.
    //
    DDI16BitWrite(AUX_OSCDDI_BASE, OSC_DIG_O_CTL0, OSC_DIG_CTL0_XOSC_HF_MODE,
                  ui32Mode);
}

//*****************************************************************************
//
//!  Configure the oscillator input to the a source clock.
//!
//! \param ui32SrcClk is the source clocks to configure.
//! \param ui32Osc is the oscillator that drives the source clock.
//!
//! Use this function to set the oscillator source for one or more of the
//! system source clocks. 
//! When selecting the high frequency clock source, this function will not do
//! the actual switch. Enabling the high frequency XTAL can take as much as 
//! 500us??? , so the actual switch is split out into a seperate function,
//! leaving CM3 free to perform other tasks as the XTAL starts up.
//!
//! The possible source clocks in the system are
//! - \b OSC_SRC_CLK_HF
//! - \b OSC_SRC_CLK_MF
//! - \b OSC_SRC_CLK_LF
//!
//! The source clocks can be driven by 4 different oscillators
//! - \b OSC_RCOSC_HF
//! - \b OSC_XOSC_HF
//! - \b OSC_RCOSC_LF
//! - \b OSC_XOSC_LF
//!
//! \note The High Frequency (\b OSC_SRC_CLK_HF) and Medium Frequency
//! (\b OSC_SRC_CLK_MF) can only be derived from the the high frequency
//! oscillator. The Low Frequency source clock (\b OSC_SRC_CLK_LF) can be
//! derived from all 4 oscillators.
//!
//! \note If enabling \b OSC_XOSC_LF it is not safe to go to
//! Powerdown/Shutdown before 7.5 ms later.
//!
//! \sa 
//!
//!
//! \return None
//
//*****************************************************************************
extern void OSCClockSourceSet(uint32_t ui32SrcClk, uint32_t ui32Osc);

//*****************************************************************************
//
//!  Get the source clock settings
//!
//! \param ui32SrcClk is the source clock to check
//!
//! Use this function to get the oscillator source for one of the system source
//! clocks. 
//!
//! The possible source clocks in the system are
//! - \b OSC_SRC_CLK_HF
//! - \b OSC_SRC_CLK_MF
//! - \b OSC_SRC_CLK_LF
//!
//! The source clocks can be driven by 4 different oscillators
//! - \b OSC_RCOSC_HF
//! - \b OSC_XOSC_HF
//! - \b OSC_RCOSC_LF
//! - \b OSC_XOSC_LF
//!
//! \note The switch of the HF clock source is not safe. For the HF clock
//! source this function will only requets the clock source and not do the
//! actual switch. To do the actual switch the programmer must call
//! \b OSCHfSourceSwitch(). 
//! The reason for this is the startup time of the XTAL which amounts to 
//! hundreds of us, and there is no reason to stall the system while it is
//! starting up.
//!
//! \note The High Frequency (\b OSC_SRC_CLK_HF) and Medium Frequency
//! (\b OSC_SRC_CLK_MF) can only be derived from the the high frequency
//! oscillator. The Low Frequency source clock (\b OSC_SRC_CLK_LF) can be
//! derived from all 4 oscillators.
//!
//! \note If enabling \b OSC_XOSC_LF it is not safe to go to
//! Powerdown/Shutdown before 7.5 ms later.
//!
//! \sa OSCHfSourceSwitch()
//!
//! TBD: How long does it take to start the XTAL
//!
//! \return None
//
//*****************************************************************************
extern uint32_t OSCClockSourceGet(uint32_t ui32SrcClk);

//*****************************************************************************
//
//! Check if the HF clock source is ready to be switched.
//!
//! If a  request to switch the HF clock source has been put in, this function
//! can be used to check, if the clock source is ready to be swithced.
//!
//! Once the HF clock source is ready, the switch can be performed by calling
//! the \b OSCHfSourceSwitch
//!
//! \return Returns \e true if the request HF clock source is ready and 
//! \ e false otherwise.
//
//*****************************************************************************
__STATIC_INLINE bool
OSCHfSourceReady(void)
{
    //
    // Return the readyness of the HF clock source
    //
    return (DDI16BitfieldRead(AUX_OSCDDI_BASE, OSC_DIG_O_STAT0,
                              OSC_DIG_STAT0_PENDINGSCLKHFSWITCHING_M,
                              OSC_DIG_STAT0_PENDINGSCLKHFSWITCHING_S)) ?
        true : false;
}

//*****************************************************************************
//
//! Switch the high frequency clock
//!
//! When switching the HF clock source the clock period might be prolonged
//! leaving the clock 'stuck-at' high or low for a few cycles. To ensure that
//! this does not coincide with a read access to the Flash potentially 
//! freezing the device, the HF clock source switch must be executed from ROM.
//!
//! \note This fuction will not return until the clock source has been
//! switched. It is left to the programmer to ensure, that there is a pending
//! request for a HF clock source switch before this function is called.
//!
//! \sa OSCClockSourceSet()
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
OSCHfSourceSwitch(void)
{
    //
    // Switch the HF clock source
    //
    HapiHFSourceSafeSwitch();
}

//*****************************************************************************
//
//! Enable CM3 access to the OSC_DIG module
//!
//! Force power on AUX and enable clocks to allow CM3 access on the OSC_DIG
//! interface.
//!
//! \note Access to the OSC_DIG interface is a shared resource between the 
//! AUX controller and the CPU, so enabling or disabling this interface must
//! be done with consideration.
//!
//! \return None
//
//*****************************************************************************
extern void OSCInterfaceEnable(void);

//*****************************************************************************
//
//! Disable CM3 access to the OSC_DIG module
//!
//! Force power on AUX and enable clocks to allow CM3 access on the OSC_DIG
//! interface.
//!
//!
//! \note Access to the OSC_DIG interface is a shared resource between the 
//! AUX controller and the CPU, so enabling or disabling this interface must
//! be done with consideration.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
OSCInterfaceDisable(void)
{
    //
    // Disable clock for OSC_DIG 
    //
    AUXWUCClockDisable(AUX_WUC_OSCCTRL_CLOCK);

    //
    // Release the 'force power' on AUX
    //
    AONWUCAuxWakeupEvent(AONWUC_AUX_ALLOW_SLEEP);
}

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif


#endif // __OSC_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
