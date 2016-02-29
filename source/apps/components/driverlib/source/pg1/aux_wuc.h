/******************************************************************************
*  Filename:       aon_wuc.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the AUX Wakeup Controller
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
//! \addtogroup auxwuc_api
//! @{
//
//****************************************************************************

#ifndef __AUX_WUC_H__
#define __AUX_WUC_H__

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
#include "hw_aux_wuc.h"
#include "debug.h"

//*****************************************************************************
//
// Defines for the AUX power control.
//
//*****************************************************************************
#define AUX_WUC_POWER_OFF       0x00000001
#define AUX_WUC_POWER_DOWN      0x00000002
#define AUX_WUC_POWER_ACTIVE    0x00000004

//*****************************************************************************
//
// Defines for the AUX peripherals clock control.
//
//*****************************************************************************
#define AUX_WUC_SMPH_CLOCK      0x00000001
#define AUX_WUC_AIODIO0_CLOCK   0x00000002
#define AUX_WUC_AIODIO1_CLOCK   0x00000004
#define AUX_WUC_TIMER_CLOCK     0x00000008
#define AUX_WUC_SOC_CLOCK       0x00000010
#define AUX_WUC_TDCIF_CLOCK     0x00000020
#define AUX_WUC_OSCCTRL_CLOCK   0x00000040
#define AUX_WUC_ADI_CLOCK       0x00000080
#define AUX_WUC_MODCLK_MASK     0x000000FF

#define AUX_WUC_TDC_CLOCK       0x00000100
#define AUX_WUC_ADC_CLOCK       0x00000200
#define AUX_WUC_REF_CLOCK       0x00000400

#define AUX_WUC_CLOCK_OFF       0x00000000
#define AUX_WUC_CLOCK_UNSTABLE  0x00000001
#define AUX_WUC_CLOCK_READY     0x00000011

#define AUX_WUC_CLOCK_HIFREQ    0x00000000
#define AUX_WUC_CLOCK_LOFREQ    0x00000001

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// void AUXWUCClockEnable(uint32_t ui32Clock);
// void AUXWUCClockDisable(uint32_t ui32Clock);
// uint32_t AUXWUCClockStatus(uint32_t ui32Clock);
// void AUXWUCClockFreqReq(uint32_t ui32Clock);
// void AUXWUCPowerCtrl(uint32_t ui32PowerMode);
// void AUXWUCFreezeEnable(void);
// void AUXWUCFreezeDisable(void);

//***************************************************************************** 
//
// API Functions and prototypes
//
//***************************************************************************** 

//****************************************************************************
//
//! Enable clocks for peripherals in the AUX domain
//!
//! \param ui32Clocks is a bitmap of clocks to enable.
//!
//! Use this function to enable specific clocks in the AUX domain. The
//! argument \b ui32Clocks must be a bitwise OR combination of the values
//! \b AUX_WUC_ADI_CLOCK, \b AUX_WUC_OSCCTRL_CLOCK, \b AUX_WUC_TDCIF_CLOCK,
//! \b AUX_WUC_SOC_CLOCK, \b AUX_WUC_TIMER_CLOCK, \b AUX_WUC_AIODIO0_CLOCK,
//! \b AUX_WUC_AIODIO1_CLOCK, \b AUX_WUC_SMPH_CLOCK, \b AUX_WUC_TDC_CLOCK,
//! \b AUX_WUC_ADC_CLOCK and \b AUX_WUC_REF_CLOCK.
//!
//! \return None
//
//****************************************************************************
extern void AUXWUCClockEnable(uint32_t ui32Clocks);

//****************************************************************************
//
//! Disable clocks for peripherals in the AUX domain
//!
//! \param ui32Clocks a bitmap of clocks to disable.
//!
//! Use this function to enable specific clocks in the AUX domain. The
//! argument \b ui32Clocks must be a bitwise OR combination of the values:
//! \b AUX_WUC_ADI_CLOCK, \b AUX_WUC_OSCCTRL_CLOCK, \b AUX_WUC_TDCIF_CLOCK,
//! \b AUX_WUC_SOC_CLOCK, \b AUX_WUC_TIMER_CLOCK, \b AUX_WUC_AIODIO0_CLOCK,
//! \b AUX_WUC_AIODIO1_CLOCK, \b AUX_WUC_SMPH_CLOCK, \b AUX_WUC_TDC_CLOCK,
//! \b AUX_WUC_ADC_CLOCK and \b AUX_WUC_REF_CLOCK.
//!
//! \return None
//
//****************************************************************************
extern void AUXWUCClockDisable(uint32_t ui32Clocks);

//****************************************************************************
//
//! Get the status of a clock
//!
//! \param ui32Clocks is the clock for which to return status.
//!
//! Use this function to poll the status of a specific clock in the AUX
//! domain. The argument \b ui32Clocks must be one of the values:
//! \b AUX_WUC_ADI_CLOCK, \b AUX_WUC_OSCCTRL_CLOCK, \b AUX_WUC_TDCIF_CLOCK,
//! \b AUX_WUC_SOC_CLOCK, \b AUX_WUC_TIMER_CLOCK, \b AUX_WUC_AIODIO0_CLOCK,
//! \b AUX_WUC_AIODIO1_CLOCK, \b AUX_WUC_SMPH_CLOCK, \b AUX_WUC_TDC_CLOCK,
//! \b AUX_WUC_ADC_CLOCK and \b AUX_WUC_REF_CLOCK.
//!
//! This function will return the status of a clock. A clock in the AUX
//! domain can have 2 different states.
//!
//! - \b AUX_WUC_CLOCK_OFF
//! - \b AUX_WUC_CLOCK_READY
//!
//! \return Returns the status of the clock
//
//****************************************************************************
extern uint32_t AUXWUCClockStatus(uint32_t ui32Clocks);

//****************************************************************************
//
//! Request a high or low frequency clock source
//!
//! \param ui32ClockFreq determines the clock source frequency.
//!
//! Using this function it is possible to make a request to the System
//! Control to use a high or low frequency clock as clock source for the AUX
//! domain.
//!
//! \note A low freqency clock is always 32 kHz, while a high frequency clock
//! is really a large span of frequencies determined by the clock source (High
//! Frequency or Medium Frequency) and the setting for the clock divider for
//! the AUX domain in the System Control.
//!
//! \return
//
//****************************************************************************
__STATIC_INLINE void
AUXWUCClockFreqReq(uint32_t ui32ClockFreq)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32ClockFreq == AUX_WUC_CLOCK_HIFREQ) ||
           (ui32ClockFreq == AUX_WUC_CLOCK_LOFREQ));

    //
    // Set the request
    //
    HWREG(AUX_WUC_BASE + AUX_WUC_O_CLKLFREQ) = ui32ClockFreq;
}

//****************************************************************************
//
//! Control the power to the AUX domain
//!
//! \param ui32PowerMode control the desired power mode for the AUX domain.
//!
//! Use this function to set the power mode of the entire AUX domain. The
//! domain have three different power modes.
//! \b AUX_WUC_POWER_OFF, \b AUX_WUC_POWER_DOWN or \b AUX_WUC_POWER_ACTIVE.
//!
//! \return None
//
//****************************************************************************
extern void AUXWUCPowerCtrl(uint32_t ui32PowerMode);

//*****************************************************************************
//
//! Freeze the AUX IOs
//!
//! To retain the values of the output IOs during a powerdown of the AUX domain
//! all IOs latches in the AUX domain should be frozen in their current state.
//! This ensures that software can regain control of the IOs after a powerdown
//! without the IOs first falling back to the default values (ie. input and
//! pull-up).
//!
//! \sa AUXWUCFreezeDisable()
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AUXWUCFreezeEnable(void)
{
    //
    // Set the AUX WUC latches as static.
    //
    HWREG(AUX_WUC_BASE + AUX_WUC_O_AUXIOLATCH) = 0x0;
}

//*****************************************************************************
//
//! Unfreeze the AUX IOs
//!
//! When restarting the AUX domain after it has entered powerdown mode, the
//! s oftware can regain control of the IOs by setting the IO latches as
//! transparent.  The IOs should not be unfrozen before software has restored
//! the functionality of the IO.
//!
//! \sa AUXWUCFreezeEnable()
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AUXWUCFreezeDisable(void)
{
    //
    // Set the AUX WUC latches as transparent.
    //
    HWREG(AUX_WUC_BASE + AUX_WUC_O_AUXIOLATCH) = AUX_WUC_AUXIOLATCH_EN;
}

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif //  __AUX_WUC_H__

//****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//****************************************************************************
