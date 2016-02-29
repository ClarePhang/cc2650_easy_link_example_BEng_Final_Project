/******************************************************************************
*  Filename:       prcm.h
*  Revised:        $Date: 2014-03-12 13:42:36 +0100 (on, 12 mar 2014) $
*  Revision:       $Revision: 40374 $
*
*  Description:    Defines and prototypes for the PRCM
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
//! \addtogroup prcm_api
//! @{
//
//*****************************************************************************

#ifndef __PRCM_H__
#define __PRCM_H__

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
#include "hw_ints.h"
#include "hw_prcm.h"
#include "hw_nvic.h"
#include "hw_aon_rtc.h"
#include "interrupt.h"
#include "debug.h"
#include "cpu.h"

//*****************************************************************************
//
// Defines for the different Cortex M3 power modes.
//
//*****************************************************************************
#define PRCM_RUN_MODE           0x00000001
#define PRCM_SLEEP_MODE         0x00000002
#define PRCM_DEEP_SLEEP_MODE    0x00000004

//*****************************************************************************
//
// Defines used for setting the clock divison factors
//
//*****************************************************************************
#define PRCM_CLOCK_DIV_1        0x0000000
#define PRCM_CLOCK_DIV_2        0x0000001
#define PRCM_CLOCK_DIV_4        0x0000002
#define PRCM_CLOCK_DIV_8        0x0000003
#define PRCM_CLOCK_DIV_16       0x0000004
#define PRCM_CLOCK_DIV_32       0x0000005
#define PRCM_CLOCK_DIV_64       0x0000006
#define PRCM_CLOCK_DIV_128      0x0000007
#define PRCM_CLOCK_DIV_256      0x0000008

//*****************************************************************************
//
// Defines used for enabling and disabling peripheral modules in the MCU
// domain
//
//*****************************************************************************  
#define PRCM_DOMAIN_RFCORE      0x00000001  // RF Core domain ID for 
                                            // clock/power control.
#define PRCM_DOMAIN_SERIAL      0x00000002  // Serial domain ID for 
                                            // clock/power control.
#define PRCM_DOMAIN_PERIPH      0x00000004  // Peripheral domain ID for
                                            // clock/power control.
#define PRCM_DOMAIN_SYSBUS      0x00000008  // Bus domain ID for clock/power
                                            // control.
#define PRCM_DOMAIN_VIMS        0x00000010  // VIMS domain ID for clock/power 
                                            // control.
#define PRCM_DOMAIN_CPU         0x00000020  // CPU domain ID for clock/power
                                            // control.
#define PRCM_DOMAIN_TIMER       0x00000040  // GPT domain ID for clock
                                            // control.
#define PRCM_DOMAIN_CLKCTRL     0x00000080  // Clock Control domain ID for 
                                            // clock/power control.
#define PRCM_DOMAIN_MCU         0x00000100  // Reset control for entire MCU
                                            // domain.
#define PRCM_DOMAIN_POWER_OFF   0x00000002  // The domain is powered off
#define PRCM_DOMAIN_POWER_ON    0x00000001  // The domain is powered on
#define PRCM_DOMAIN_POWER_DOWN_READY                                          \
                                0x00000000  // The domain is ready to be 
                                            // powered down.
  
//*****************************************************************************
//
// Defines for setting up the audio interface in the I2S module.
//
//*****************************************************************************  
#define PRCM_WCLK_NEG_EDGE      0x00000008
#define PRCM_WCLK_POS_EDGE      0x00000000
#define PRCM_WCLK_SINGLE_PHASE  0x00000000
#define PRCM_WCLK_DUAL_PHASE    0x00000002
#define PRCM_WCLK_USER_DEF      0x00000004

#define I2S_SAMPLE_RATE_16K     0x00000001
#define I2S_SAMPLE_RATE_24K     0x00000002
#define I2S_SAMPLE_RATE_32K     0x00000004
#define I2S_SAMPLE_RATE_48K     0x00000008

//*****************************************************************************
//
// Defines used for enabling and disabling peripheral modules in the MCU
// domain
//
//*****************************************************************************
#define PRCM_PERIPH_TIMER0      0x00000000  // Peripheral ID for GPT module 0
#define PRCM_PERIPH_TIMER1      0x00000001  // Peripheral ID for GPT module 1
#define PRCM_PERIPH_TIMER2      0x00000002  // Peripheral ID for GPT module 2
#define PRCM_PERIPH_TIMER3      0x00000003  // Peripheral ID for GPT module 3
#define PRCM_PERIPH_SSI0        0x00000100  // Peripheral ID for SSI module 0
#define PRCM_PERIPH_SSI1        0x00000101  // Peripheral ID for SSI module 1
#define PRCM_PERIPH_UART0       0x00000200  // Peripheral ID for UART module 0
#define PRCM_PERIPH_UART1       0x00000201  // Peripheral ID for UART module 1
#define PRCM_PERIPH_I2C0        0x00000300  // Peripheral ID for I2C module 0
#define PRCM_PERIPH_I2C1        0x00000301  // Peripheral ID for I2C module 1
#define PRCM_PERIPH_CRYPTO      0x00000400  // Peripheral ID for CRYPTO module
#define PRCM_PERIPH_TRNG        0x00000401  // Peripheral ID for TRNG module
#define PRCM_PERIPH_UDMA        0x00000408  // Peripheral ID for UDMA module
#define PRCM_PERIPH_GPIO        0x00000500  // Peripheral ID for GPIO module
#define PRCM_PERIPH_I2S         0x00000600  // Peripheral ID for I2S module

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// void PRCMInfClockConfigureSet(uint32_t ui32ClkDiv, uint32_t ui32PowerMode);
// uint32_t PRCMInfClockConfigureGet(uint32_t ui32PowerMode);
// void PRCMMcuPowerOff(void);
// void PRCMMcuPowerOffCancel(void);
// void PRCMMcuUldoConfigure(uint32_t ui32Enable);
// void PRCMClockConfigureSet(uint32_t ui32Domain, uint32_t ui32ClkDiv);
// uint32_t PRCMClockConfigureGet(uint32_t ui32Domain);
// void PRCMAudioClockEnable(void);
// void PRCMAudioClockDisable(void);
// void PRCMAudioClockConfigSet(uint32_t ui32ClkConfig,
//                              uint32_t ui32SampleRate);
// void PRCMLoadSet(void);
// bool PRCMLoadGet(void);
// void PRCMDomainEnable(uint32_t ui32Domains);
// void PRCMDomainDisable(uint32_t ui32Domains);
// void PRCMPowerDomainOn(uint32_t ui32Domains);
// void PRCMPowerDomainOff(uint32_t ui32Domains);
// void PRCMRfPowerDownWhenIdle(void);
// void PRCMPeripheralRunEnable(uint32_t ui32Peripheral);
// void PRCMPeripheralRunDisable(uint32_t ui32Peripheral);
// void PRCMPeripheralSleepEnable(uint32_t ui32Peripheral);
// void PRCMPeripheralSleepDisable(uint32_t ui32Peripheral);
// void PRCMPeripheralDeepSleepEnable(uint32_t ui32Peripheral);
// void PRCMPeripheralDeepSleepDisable(uint32_t ui32Peripheral);
// uint32_t PRCMPowerDomainStatus(uint32_t ui32Domain);
// bool PRCMRfReady(void);
// bool PRCMWdtResetStatus(void);
// void PRCMSleep(void);
// void PRCMDeepSleep(void);
// void PRCMRetentionEnable(uint32_t ui32PowerDomain);
// void PRCMRetentionDisable(uint32_t ui32PowerDomain);

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

#ifdef DEBUG
//*****************************************************************************
//
//! Checks a peripheral identifier
//!
//! \param ui32Peripheral is the peripheral identifier.
//!
//! This function determines if a peripheral identifier is valid.
//!
//! \return Returns \b true if the peripheral identifier is valid and \b false
//! otherwise.
//
//*****************************************************************************
static bool
PRCMPeripheralValid(uint32_t ui32Peripheral)
{
    return((ui32Peripheral == PRCM_PERIPH_TIMER0)   ||
           (ui32Peripheral == PRCM_PERIPH_TIMER1)   ||
           (ui32Peripheral == PRCM_PERIPH_TIMER2)   ||
           (ui32Peripheral == PRCM_PERIPH_TIMER3)   ||
           (ui32Peripheral == PRCM_PERIPH_SSI0)     ||
           (ui32Peripheral == PRCM_PERIPH_SSI1)     ||
           (ui32Peripheral == PRCM_PERIPH_UART0)    ||
           (ui32Peripheral == PRCM_PERIPH_UART1)    ||
           (ui32Peripheral == PRCM_PERIPH_I2C0)     ||
           (ui32Peripheral == PRCM_PERIPH_I2C1)     ||
           (ui32Peripheral == PRCM_PERIPH_UDMA)     ||
           (ui32Peripheral == PRCM_PERIPH_TRNG)     ||
           (ui32Peripheral == PRCM_PERIPH_CRYPTO)   ||
           (ui32Peripheral == PRCM_PERIPH_GPIO)     ||
           (ui32Peripheral == PRCM_PERIPH_I2S));
}
#endif

//*****************************************************************************
//
//! Configure the infrastructure clock.
//!
//! \param ui32ClkDiv determines the division ratio for the infrastructure
//! clock when the device is in the specified mode.
//! \param ui32PowerMode determines the Cortex M3 operation mode for which to
//! modify the clock divison factor.
//!
//! Each CM3 power mode has its own infrastructure clock divison factor. This
//! function can be used for setting up the division factor for the
//! infrastructure clock in the available power modes for the CM3. The
//! infrastructure clock is used for all internal logic in the PRCM, and is
//! always running as long as power is on in the MCU voltage domain.
//! This can be enabled and disabled from the AON Wake Up Controller.
//!
//! Allowed division factors for all three Cortex M3 power modes are:
//! \b PRCM_CLOCK_DIV_1, \b PRCM_CLOCK_DIV_2, \b PRCM_CLOCK_DIV_8 or
//! \b PRCM_CLOCK_DIV_32
//!
//! The three allowed power modes are \b PRCM_RUN, \b PRCM_SLEEP or
//! \b PRCM_DEEP_SLEEP
//!
//! \note If source clock is 48 MHz, minimum clock divider is PRCM_CLOCK_DIV_2.
//!
//! \return None
//
//*****************************************************************************
extern void PRCMInfClockConfigureSet(uint32_t ui32ClkDiv, 
                                     uint32_t ui32PowerMode);

//*****************************************************************************
//
//! Use this function to retreive the set infrastructure clock configuration
//!
//! \param ui32PowerMode determines which Cortex M3 power mode to return the
//! infrastructure clock divison ratio for.
//!
//! The three allowed power modes are \b PRCM_RUN_MODE, \b PRCM_SLEEP_MODE or
//! \b PRCM_DEEP_SLEEP_MODE.
//!
//! The values that this function can return are \b PRCM_CLOCK_DIV_1,
//! \b PRCM_CLOCK_DIV_2, \b PRCM_CLOCK_DIV_8 or \b PRCM_CLOCK_DIV_32
//!
//! \sa PRCMInfrastructureClockSet().
//!
//! \return Returns the infrastructure clock divison factor for the specified
//! power mode.
//
//*****************************************************************************
extern uint32_t PRCMInfClockConfigureGet(uint32_t ui32PowerMode);

//*****************************************************************************
//
//! Request a power off of the MCU voltage domain
//!
//! Use this function to request a power off of the entire MCU voltage domain.
//! This request will have no affect until deepsleep mode is requested.
//!
//! \sa PRCMDeepSleep() , PRCMMcuPowerOffCancel()
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PRCMMcuPowerOff(void)
{
    //
    // Assert the power off request signal.
    //
    HWREG(PRCM_BASE + PRCM_O_VDCTL) |= PRCM_VDCTL_MCU_VD;
}

//*****************************************************************************
//
//! Cancel a request for a power off of the MCU voltage domain
//!
//! Use this function to cancel a request for power off of the entire MCU
//! voltage domain. This could be relevant if a transition to power down is
//! regretted and an applications must backtrack.
//!
//! \sa PRCMDeepSleep() , PRCMMcuPowerOff()
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PRCMMcuPowerOffCancel(void)
{
    //
    // Assert the power off request signal.
    //
    HWREG(PRCM_BASE + PRCM_O_VDCTL) &= ~PRCM_VDCTL_MCU_VD;
}

//*****************************************************************************
//
//! Assert or deassert a request for the uLDO
//!
//! Use this function to request to switch to the micro Low Voltage Dropout
//! regulator (uLDO). The uLDO has a much lower capacicty for supplying power
//! to the system. It is therefore imperative and solely the programmers
//! responsibility to ensure that a sufficient amount of peripheral modules
//! have been turned of before requesting a switch to the uLDO.
//!
//! \note Asserting this bit has now effect until:
//! 1. FLASH has accepted to be powered down
//! 2. Deepsleep must be asserted
//!
//! \sa PRCMDeepSleep()
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PRCMMcuUldoConfigure(uint32_t ui32Enable)
{
    uint32_t ui32Val;

    //
    // Enable/disable the uLDO request signal.
    //
    ui32Val = HWREG(PRCM_BASE + PRCM_O_VDCTL);
    if(ui32Enable)
    {
        ui32Val |= PRCM_VDCTL_ULDO;
    }
    else
    {
        ui32Val &= ~PRCM_VDCTL_ULDO;
    }
    HWREG(PRCM_BASE + PRCM_O_VDCTL) = ui32Val;
}

//*****************************************************************************
//
//! Setup the clock division factor for a subsystem in the MCU voltage
//! domain.
//!
//! \param ui32Domains defines the clock domains to configure the clock on.
//! \param ui32ClkDiv is the division factor to configure.
//!
//! Use this function to set up the clock division factor on a specific clock
//! domain inside the MCU voltage domain. The 5 clock domains are
//! \b PRCM_DOMAIN_SYSBUS, \b PRCM_DOMAIN_CPU, \b PRCM_DOMAIN_PERIPH ,
//! \b PRCM_DOMAIN_SERIAL and \b PRCM_DOMAIN_TIMER.
//!
//! The PRCM_DOMAIN_TIMER division rate will be constant and ungated for Run
//! / Sleep/ DeepSleep mode when it is slower than the \b PRCM_DOMAIN_PERIPH
//! setting. When set faster than \b PRCM_DOMAIN_PERIPH setting the
//! \b PRCM_DOMAIN_PERIPH will be used.
//!
//! The \b PRCM_DOMAIN_CPU can only run with 48 or 24 MHz. The only two valid
//! clock division factors are therefore 1 and 2 and it is always sourced from
//! the HF source.
//!
//! The \b PRCM_DOMAIN_SERIAL clock can run independently of the 
//! \b PRCM_DOMAIN_SYSBUS clock. This function can be used to setup the clock
//! divison factor but this is only valid when the \b PRCM_DOMAIN_SYSBUS clock
//! is disabled. When the \b PRCM_DOMAIN_SYSBUS clock is enabled, the clock
//! division ratio for this clock will follow the \b PRCM_DOMAIN_SYSBUS clock.
//!
//! The \b PRCM_DOMAIN_SERIAL clock sets the serial interface clock for SSI
//! and UART. The clock source is the MCU domain root clock.
//! The \b PRCM_DOMAIN_SERIAL clock is the only asynchronous clock in the MCU
//! Voltage
//! domain and is configured independently from all other clocks.
//! It is the programmers responsibility to ensure that the 
//! \b PRCM_DOMAIN_SERIAL clock frequency setting is slower than 5/3 of the
//! \b PRCM_DOMAIN_SYSBUS clock for UART operation and less than or equal to 
//! the \b PRCM_DOMAIN_SYSBUS clock for SSI operation. If both modules are
//! active the lowest value of the two must be selected.
//!
//! The \e ui32ClkDiv argument must be only one of the following values:
//! \b PRCM_CLOCK_DIV_1, \b PRCM_CLOCK_DIV_2 \b PRCM_CLOCK_DIV_4,
//! \b PRCM_CLOCK_DIV_8, \b PRCM_CLOCK_DIV_16, \b PRCM_CLOCK_DIV_32,
//! \b PRCM_CLOCK_DIV_64, \b PRCM_CLOCK_DIV_128 or \b PRCM_CLOCK_DIV_256.
//!
//! \note Not all sub-systems support all division factors. Please ensure
//! that a given clock domain will support the chosen division factor before
//! trying to configure it.
//!
//! \return None
//
//*****************************************************************************
extern void PRCMClockConfigureSet(uint32_t ui32Domains, uint32_t ui32ClkDiv);

//*****************************************************************************
//
//! Get the clock configuration for a specific sub system in the MCU Voltage
//! Domain.
//!
//! \param ui32Domain defines the sub system for which to return the clock
//! configuration.
//!
//! Use this function to retrieve the clock division factor on a specific clock
//! domain inside the MCU voltage domain. The 5 clock domains are
//! \b PRCM_DOMAIN_SYSBUS, \b PRCM_DOMAIN_CPU, \b PRCM_DOMAIN_PERIPH ,
//! \b PRCM_DOMAIN_SERIAL and \b PRCM_DOMAIN_TIMER.
//!
//! \return Returns the sub system clock configuration
//
//*****************************************************************************
extern uint32_t PRCMClockConfigureGet(uint32_t ui32Domain);

//*****************************************************************************
//
//! Enable the audio clock generation
//!
//! Use this function to enable the audio clock generation.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PRCMAudioClockEnable(void)
{
    //
    // Enable the audio clock generation.
    //
    HWREG(PRCM_BASE + PRCM_O_I2SCLKCTL) |= PRCM_I2SCLKCTL_EN;
}

//*****************************************************************************
//
//! Disable the audio clock generation
//!
//! Use this function to disable the audio clock generation.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PRCMAudioClockDisable(void)
{
    //
    // Disable the audio clock generation
    //
    HWREG(PRCM_BASE + PRCM_O_I2SCLKCTL) &= ~PRCM_I2SCLKCTL_EN;
}

//*****************************************************************************
//
//! Configure the audio clock generation
//!
//! \param ui32ClkConfig is the audio clock configuration
//! \param ui32SampleRate is the desired audio clock sample rate.
//!
//! The \e ui32ClkConfig parameter is bitwise OR'ed value consisting of the
//! phase, either \b PRCM_WCLK_SINGLE_PHASE or PRCM_WCLK_DUAL_PHASE and the
//! clock polarity defined as either \b PRCM_WCLK_NEG_EDGE or
//! \b PRCM_WCLK_POS_EDGE.
//!
//! Use this function to set the sample rate when using internal audio clock
//! generation for the I2S module. The supported sample rate configurations are
//! \b I2S_SAMPLE_RATE_16K, \b I2S_SAMPLE_RATE_24K, \b I2S_SAMPLE_RATE_32K or
//! \b I2S_SAMPLE_RATE_48K.
//!
//! \note While other clock are possible, the four stability of the four sample
//! rates defined here are only guaranteed if the clock input to the I2S module
//! is 48MHz. This can be configured using \e PRCMClockConfigureSet().
//!
//! \return None
//
//*****************************************************************************
extern void PRCMAudioClockConfigSet(uint32_t ui32ClkConfig,
                                    uint32_t ui32SampleRate);

//*****************************************************************************
//
//! Use this function to synchronize the load settings
//!
//! Most of the clock settings in the PRCM module should be updated
//! synchronously. This is ensure by the implementation of a load registers,
//! that, when written to, will let the previous written update values for all
//! the relevant registers propagate through to hardware.
//!
//! The functions that require a synchronization of the clock settings are:
//!
//! \b PRCMAudioClockConfigSet(), \b PRCMAudioClockEnable(),
//! \b PRCMAudioClockDisable(), \b PRCMClockConfigureSet(),
//! \b PRCMDomainEnable(), \b PRCMDomainDisable(),
//! \b PRCMPeripheralRunEnable(), \b PRCMPeripheralRunEnable()
//! \b PRCMPeripheralSleepEnable(), \b PRCMPeripheralSleepEnable()
//! \b PRCMPeripheralDeepSleepEnable(), \b PRCMPeripheralDeepSleepEnable()
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PRCMLoadSet(void)
{
    //
    // Enable the update of all load related registers.
    //
    HWREG(PRCM_NONBUF_BASE + PRCM_O_CLKLOADCTL) = PRCM_CLKLOADCTL_LOAD;
}

//*****************************************************************************
//
//! Check if any of the load sensitive register has been updated
//!
//! \sa PRCMLoadSet()
//!
//! \return Returns \b true if no registers has changed since the last load
//! and \b false if any registers has changed.
//
//*****************************************************************************
__STATIC_INLINE bool
PRCMLoadGet(void)
{
    //
    // Return the load status.
    //
    return ((HWREG(PRCM_BASE + PRCM_O_CLKLOADCTL) & PRCM_CLKLOADCTL_LOAD_DONE) ?
            true : false);
}

//*****************************************************************************
//
//! Enable clock domains in the MCU voltage domain
//!
//! \param ui32Domains is a bitmask containing the clock domains to enable.
//!
//! The independent clock domains inside the MCU voltage domain which can be
//! configured are:
//! \b PRCM_DOMAIN_RFCORE or \b PRCM_DOMAIN_VIMS.
//!
//! \note A call to this function will only setup the shadow registers in the
//! MCU domain for the PRCM module. For the changes to propagate to the system
//! controller in the AON domain a call to this function should always be
//! followed by a call to LoadSet() .
//!
//! \note Clocks will only be running if the domain is powered.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PRCMDomainEnable(uint32_t ui32Domains)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Domains & PRCM_DOMAIN_RFCORE) ||
           (ui32Domains & PRCM_DOMAIN_VIMS));

    //
    // Enable the clock domain(s).
    //
    if(ui32Domains & PRCM_DOMAIN_RFCORE)
    {
        HWREG(PRCM_BASE + PRCM_O_RFCCLKG) = PRCM_RFCCLKG_CLK_EN;
    }
    if(ui32Domains & PRCM_DOMAIN_VIMS)
    {
        HWREG(PRCM_BASE + PRCM_O_VIMSCLKG) = PRCM_VIMSCLKG_CLK_EN_M;
    }
}

//*****************************************************************************
//
//! Disable clock domains in the MCU voltage domain
//!
//! \param ui32Domains is a bitmask containing the clock domains to disable.
//!
//! The independent clock domains inside the MCU voltage domain are
//! \b PRCM_DOMAIN_RFCORE and \b PRCM_DOMAIN_VIMS
//!
//! \sa PRCMDomainEnable()
//!
//! \note A call to this function will only setup the shadow registers in the
//! MCU domain for the PRCM module. For the changes to propagate to the system
//! controller in the AON domain a call to this function should always be
//! followed by a call to LoadSet() .
//!
//! \note Clocks will only be running if the domain is powered.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PRCMDomainDisable(uint32_t ui32Domains)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32Domains & PRCM_DOMAIN_RFCORE) ||
           (ui32Domains & PRCM_DOMAIN_VIMS));

    //
    // Disable the power domains.
    //
    if(ui32Domains & PRCM_DOMAIN_RFCORE)
    {
        HWREG(PRCM_BASE + PRCM_O_RFCCLKG) = 0x0;
    }
    if(ui32Domains & PRCM_DOMAIN_VIMS)
    {
        HWREG(PRCM_BASE + PRCM_O_VIMSCLKG) = 0x0;
    }
}

//*****************************************************************************
//
//! Turn power on in power domains in the MCU domain
//!
//! \param ui32Domains determines which power domains to turn on.
//!
//! Use this function to turn on power domains inside the MCU voltage
//! domain. The domains that can be turned on/off are:
//!
//! - \b PRCM_DOMAIN_RFCORE : RF Core
//! - \b PRCM_DOMAIN_SERIAL : SSI0, UART0, I2C0
//! - \b PRCM_DOMAIN_PERIPH : TIMER0, TIMER1, TIMER2, TIMER3, GPIO, SSI1, I2S,
//!                           DMA, UART1, I2C1
//! - \b PRCM_DOMAIN_VIMS   : SRAM, FLASH, ROM
//! - \b PRCM_DOMAIN_SYSBUS
//! - \b PRCM_DOMAIN_CPU
//!
//! Power on and power off request has different implications for the
//! different power domains.
//!
//! RF Core power domain:
//! Power On : Domain is on or in the process of turning on.
//! Power Off: Domain is powered down when CM3 is in deep sleep. The third
//!            option for the RF Core is to power down when the it is idle.
//!            This can be set using \b PRCMRfPowerDownWhenIdle()
//!
//! SERIAL power domain:
//! Power on : Domain is powered on.
//! Power off : Domain is powered off.
//!
//! PERIPHERIAL power domain:
//! Power on : Domain is powered on.
//! Power off : Domain is powered off.
//!
//! VIMS power domain:
//! Power On: Domain is powered if Bus domain is powered.
//! Power Off: Domain is only powered when CPU domain is on.
//!
//! BUS power domain:
//! Power On: Domain is on.
//! Power Off: Domain is on if requested by RF Core or if CPU domian is on.
//!
//! CPU power domain:
//! Power On: Domain is on.
//! Power Off: Domain is powering down if Cortex M3 is idle. This will also
//!            initiate a power down of the SRAM and BUS power domains, unless
//!            RF Core is requesting them to be on.
//!
//! \note After a call to this function the status of the power domain should
//! be checked using either PRCMPowerDomainStatus().
//! Any write operation to a power domain which is still not operational can
//! result in unexpected behaviour.
//!
//! \return None
//
//*****************************************************************************
extern void PRCMPowerDomainOn(uint32_t ui32Domains);

//*****************************************************************************
//
//! Turn off a specific power domain
//!
//! \param ui32Domains determines which domain to request a power down for.
//!
//! Use this function to power down domains inside the MCU voltage
//! domain. The domains that can be turned on/off are:
//!
//! \b PRCM_DOMAIN_RFCORE
//!     - RF Core
//! \b PRCM_DOMAIN_SERIAL
//!     - SSI0, UART0, I2C0
//! \b PRCM_DOMAIN_PERIPH
//!     - TIMER0, TIMER1, TIMER2, TIMER3, GPIO, SSI1, I2S, DMA, UART1, I2C1
//! \b PRCM_DOMAIN_VIMS
//!     - SRAM, FLASH, ROM
//! \b PRCM_DOMAIN_SYSBUS
//! \b PRCM_DOMAIN_CPU
//!
//! \note For specifics regarding on/off configuration please see
//! \b PRCMPowerDomainOn().
//!
//! \return None
//
//*****************************************************************************
extern void PRCMPowerDomainOff(uint32_t ui32Domains);

//*****************************************************************************
//
//! Configure RF core to power down when idle
//!
//! Use this function to configure the RF core to power down when Idle. This
//! is handled automatically in hardware if the RF Core reports that it is
//! idle.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PRCMRfPowerDownWhenIdle(void)
{
    //
    // Configure the RF power domain.
    //
    HWREG(PRCM_BASE + PRCM_O_PDCTL0RFC) &=
        ~PRCM_PDCTL0RFC_ON;
}

//*****************************************************************************
//
//! Enables a peripheral in Run mode
//!
//! \param ui32Peripheral is the peripheral to enable.
//!
//! Peripherals are enabled with this function.  At power-up, some peripherals
//! are disabled; they must be enabled in order to operate or respond to
//! register reads/writes.
//!
//! The \e ui32Peripheral parameter must be one of the values:
//! \b PRCM_PERIPH_TIMER0, \b PRCM_PERIPH_TIMER1, \b PRCM_PERIPH_TIMER2,
//! \b PRCM_PERIPH_TIMER3, \b PRCM_PERIPH_SSI0, \b PRCM_PERIPH_SSI1,
//! \b PRCM_PERIPH_UART0, \b PRCM_PERIPH_UART1, \b PRCM_PERIPH_I2C0,
//! \b PRCM_PERIPH_I2C1, \b PRCM_PERIPH_UDMA, \b PRCM_PERIPH_TRNG,
//! \b PRCM_PERIPH_CRYPTO, \b PRCM_PERIPH_GPIO or \b PRCM_PERIPH_I2S.
//!
//! \note The actual enabling of the peripheral may be delayed until some
//! time after this function returns. Care should be taken to ensure that the
//! peripheral is not accessed until it is enabled.
//! When enabling Timers always make sure that the division factor for the
//! \b PERBUSCPUCLK is set. This will guarantee that the timers run at a
//! continuous rate even if the \b SYSBUSCLK is gated.
//!
//! \note A call to this function will only setup the shadow registers in the
//! MCU domain for the PRCM module. For the changes to propagate to the system
//! controller in the AON domain a call to this function should always be
//! followed by a call to \b PRCMLoadSet().
//!
//! \sa PRCMLoadSet()
//!
//! \return None
//
//*****************************************************************************
extern void PRCMPeripheralRunEnable(uint32_t ui32Peripheral);

//*****************************************************************************
//
//! Disables a peripheral in Run mode
//!
//! \param ui32Peripheral is the peripheral to disable.
//!
//! Peripherals are disabled with this function. Once disabled, they will not
//! operate or respond to register reads/writes.
//!
//! The \e ui32Peripheral parameter must be one of the values:
//! \b PRCM_PERIPH_TIMER0, \b PRCM_PERIPH_TIMER1, \b PRCM_PERIPH_TIMER2,
//! \b PRCM_PERIPH_TIMER3, \b PRCM_PERIPH_SSI0, \b PRCM_PERIPH_SSI1,
//! \b PRCM_PERIPH_UART0, \b PRCM_PERIPH_UART1, \b PRCM_PERIPH_I2C0,
//! \b PRCM_PERIPH_I2C1, \b PRCM_PERIPH_UDMA, \b PRCM_PERIPH_TRNG,
//! \b PRCM_PERIPH_CRYPTO, \b PRCM_PERIPH_GPIO or \b PRCM_PERIPH_I2S.
//!
//! \note A call to this function will only setup the shadow registers in the
//! MCU domain for the PRCM module. For the changes to propagate to the system
//! controller in the AON domain a call to this function should always be
//! followed by a call to \b PRCMLoadSet() .
//!
//! \note The actual disabling of the peripheral may be delayed until some
//! time after this function returns. Care should be taken by the user to
//! ensure that the peripheral is not accessed in this interval as this might
//! cause the system to hang.
//!
//! \sa PRCMLoadSet()
//!
//! \return None
//
//*****************************************************************************
extern void PRCMPeripheralRunDisable(uint32_t ui32Peripheral);

//*****************************************************************************
//
//! Enables a peripheral in sleep mode
//!
//! \param ui32Peripheral is the peripheral to enable in sleep mode.
//!
//! This function allows a peripheral to continue operating when the processor
//! goes into sleep mode. Since the clocking configuration of the device does
//! not change, any peripheral can safely continue operating while the
//! processor is in sleep mode, and can therefore wake the processor from sleep
//! mode.
//!
//! The \e ui32Peripheral parameter must be one of the values:
//! \b PRCM_PERIPH_TIMER0, \b PRCM_PERIPH_TIMER1, \b PRCM_PERIPH_TIMER2,
//! \b PRCM_PERIPH_TIMER3, \b PRCM_PERIPH_SSI0, \b PRCM_PERIPH_SSI1,
//! \b PRCM_PERIPH_UART0, \b PRCM_PERIPH_UART1, \b PRCM_PERIPH_I2C0,
//! \b PRCM_PERIPH_I2C1, \b PRCM_PERIPH_UDMA, \b PRCM_PERIPH_TRNG,
//! \b PRCM_PERIPH_CRYPTO, \b PRCM_PERIPH_GPIO or \b PRCM_PERIPH_I2S.
//!
//! \note A call to this function will only setup the shadow registers in the
//! MCU domain for the PRCM module. For the changes to propagate to the system
//! controller in the AON domain a call to this function should always be
//! followed by a call to \b PRCMLoadSet() .
//!
//! \sa PRCMLoadSet()
//!
//! \return None
//
//*****************************************************************************
extern void PRCMPeripheralSleepEnable(uint32_t ui32Peripheral);

//*****************************************************************************
//
//! Disables a peripheral in sleep mode
//!
//! \param ui32Peripheral is the peripheral to disable in sleep mode.
//!
//! This function causes a peripheral to stop operating when the processor goes
//! into sleep mode. Disabling peripherals while in sleep mode helps to lower
//! the current draw of the device. If enabled (via PRCMPeripheralEnable()),
//! the peripheral will automatically resume operation when the processor
//! leaves sleep mode, maintaining its entire state from before sleep mode was
//! entered.
//!
//! The \e ui32Peripheral parameter must be one of the values:
//! \b PRCM_PERIPH_TIMER0, \b PRCM_PERIPH_TIMER1, \b PRCM_PERIPH_TIMER2,
//! \b PRCM_PERIPH_TIMER3, \b PRCM_PERIPH_SSI0, \b PRCM_PERIPH_SSI1,
//! \b PRCM_PERIPH_UART0, \b PRCM_PERIPH_UART1, \b PRCM_PERIPH_I2C0,
//! \b PRCM_PERIPH_I2C1, \b PRCM_PERIPH_UDMA, \b PRCM_PERIPH_TRNG,
//! \b PRCM_PERIPH_CRYPTO, \b PRCM_PERIPH_GPIO or \b PRCM_PERIPH_I2S.
//!
//! \note A call to this function will only setup the shadow registers in the
//! MCU domain for the PRCM module. For the changes to propagate to the system
//! controller in the AON domain a call to this function should always be
//! followed by a call to \b PRCMLoadSet().
//!
//! \sa PRCMLoadSet()
//!
//! \return None
//
//*****************************************************************************
extern void PRCMPeripheralSleepDisable(uint32_t ui32Peripheral);

//*****************************************************************************
//
//! Enables a peripheral in deep-sleep mode
//!
//! \param ui32Peripheral is the peripheral to enable in deep-sleep mode.
//!
//! This function allows a peripheral to continue operating when the processor
//! goes into deep-sleep mode.  Since the clocking configuration of the device
//! may change, not all peripherals can safely continue operating while the
//! processor is in sleep mode. This in turn depends on the chosen power mode.
//! It is the responsibility of the caller to make sensible choices.
//!
//! The \e ui32Peripheral parameter must be one of the values:
//! \b PRCM_PERIPH_TIMER0, \b PRCM_PERIPH_TIMER1, \b PRCM_PERIPH_TIMER2,
//! \b PRCM_PERIPH_TIMER3, \b PRCM_PERIPH_SSI0, \b PRCM_PERIPH_SSI1,
//! \b PRCM_PERIPH_UART0, \b PRCM_PERIPH_UART1, \b PRCM_PERIPH_I2C0,
//! \b PRCM_PERIPH_I2C1, \b PRCM_PERIPH_UDMA, \b PRCM_PERIPH_TRNG,
//! \b PRCM_PERIPH_CRYPTO, \b PRCM_PERIPH_GPIO or \b PRCM_PERIPH_I2S.
//!
//! \note A call to this function will only setup the shadow registers in the
//! MCU domain for the PRCM module. For the changes to propagate to the system
//! controller in the AON domain a call to this function should always be
//! followed by a call to \b PRCMLoadSet().
//!
//! \sa PRCMLoadSet().
//!
//! \return None
//
//*****************************************************************************
extern void PRCMPeripheralDeepSleepEnable(uint32_t ui32Peripheral);

//*****************************************************************************
//
//! Disables a peripheral in deep-sleep mode
//!
//! \param ui32Peripheral is the peripheral to disable in deep-sleep mode.
//!
//! This function causes a peripheral to stop operating when the processor goes
//! into deep-sleep mode.  Disabling peripherals while in deep-sleep mode helps
//! to lower the current draw of the device, and can keep peripherals that
//! require a particular clock frequency from operating when the clock changes
//! as a result of entering deep-sleep mode.  If enabled (via
//! PRCMPeripheralEnable()), the peripheral will automatically resume
//! operation when the processor leaves deep-sleep mode, maintaining its entire
//! state from before deep-sleep mode was entered.
//!
//! The \e ui32Peripheral parameter must be one of the values:
//! \b PRCM_PERIPH_TIMER0, \b PRCM_PERIPH_TIMER1, \b PRCM_PERIPH_TIMER2,
//! \b PRCM_PERIPH_TIMER3, \b PRCM_PERIPH_SSI0, \b PRCM_PERIPH_SSI1,
//! \b PRCM_PERIPH_UART0, \b PRCM_PERIPH_UART1, \b PRCM_PERIPH_I2C0,
//! \b PRCM_PERIPH_I2C1, \b PRCM_PERIPH_UDMA, \b PRCM_PERIPH_TRNG,
//! \b PRCM_PERIPH_CRYPTO, \b PRCM_PERIPH_GPIO or \b PRCM_PERIPH_I2S.
//!
//! \note A call to this function will only setup the shadow registers in the
//! MCU domain for the PRCM module. For the changes to propagate to the system
//! controller in the AON domain a call to this function should always be
//! followed by a call to \b PRCMLoadSet().
//!
//! \sa PRCMLoadSet().
//!
//! \return None
//
//*****************************************************************************
extern void PRCMPeripheralDeepSleepDisable(uint32_t ui32Peripheral);

//*****************************************************************************
//
//! Get the status for a specific power domain
//!
//! \param ui32Domains determines which domain to get the power status for.
//!
//! Use this function to retreive the current power status of on or more
//! power domains. THe parameter \b ui32Domains must be an OR'ed combination
//! of one or several of
//!
//! \b PRCM_DOMAIN_RFCORE
//!     - RF Core
//! \b PRCM_DOMAIN_SERIAL
//!     - SSI0, UART0, I2C0
//! \b PRCM_DOMAIN_PERIPH
//!     - TIMER0, TIMER1, TIMER2, TIMER3, GPIO, SSI1, I2S, DMA, UART1, I2C1
//!
//! \return Returns \b PRCM_DOMAIN_POWER_ON if the specified domains are
//! powered up. This status is unconditional and the powered up status is
//! guaranteed. Returns \b PRCM_DOMAIN_POWER_OFF if the domains are powered
//! powered.
//
//*****************************************************************************
extern uint32_t PRCMPowerDomainStatus(uint32_t ui32Domains);

//*****************************************************************************
//
//! Return the access status of the RF Core
//!
//! Use this function to check if the RF Core is on and ready to be accessed.
//! Accessing register or memories that are not powered and clocked will
//! cause a bus fault.
//!
//! \return Returns \b true if the RF Core can be accessed and \b false if the
//! domain is not ready for access.
//
//*****************************************************************************
__STATIC_INLINE bool
PRCMRfReady(void)
{
    //
    // Return the ready status of the RF Core.
    //
    return ((HWREG(PRCM_BASE + PRCM_O_PDSTAT1RFC) &
             PRCM_PDSTAT1RFC_ON) ? true : false);
}

//*****************************************************************************
//
//! Read reset status for WatchDog Timer
//!
//! WDT reset is the only reset status available through the PRCM module.
//! This function can be used to check the whether or not a WDT reset has
//! occured since last time this bit was cleared.
//!
//! \note This function will automatically clear the WDT reset status bit
//! is asserted. If the reset bit is not asserted nothing happends.
//!
//! \return Returns \b true if a WDT reset has occured since last time the bit
//! was cleared. Returns \b false othwerwise.
//
//*****************************************************************************
__STATIC_INLINE bool
PRCMWdtResetStatus(void)
{
    //
    // Return the WDT reset status.
    //
    return ((HWREG(PRCM_BASE + PRCM_O_WARMRESET) & PRCM_WARMRESET_WDT_STAT)
            ? true : false);
}

//*****************************************************************************
//
//! Put the processor into sleep mode
//!
//! This function places the processor into sleep mode; it does not return
//! until the processor returns to run mode.  The peripherals that are enabled
//! via PRCMPeripheralSleepEnable() continue to operate and can wake up the
//! processor.
//!
//! \sa PRCMPeripheralSleepEnable()
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PRCMSleep(void)
{
    //
    // Wait for an interrupt.
    //
    CPUwfi();
}

//*****************************************************************************
//
//! Put the processor into deep-sleep mode
//!
//! This function places the processor into deep-sleep mode; it does not return
//! until the processor returns to run mode.  The peripherals that are enabled
//! via PRCMPeripheralDeepSleepEnable() continue to operate and can wake up
//! the processor.
//!
//! \sa PRCMPeripheralDeepSleepEnable()
//!
//! \return None
//
//*****************************************************************************
extern void PRCMDeepSleep(void);

//*****************************************************************************
//
//! Enable retention on specific power domains
//!
//! \param ui32PowerDomain is a bit maks of the domains in question.
//!
//! Determines if power domain should have retention enabled.
//!
//! The \e ui32PowerDomain parameter must be a bitmask OR'ed the values:
//!
//! - \b PRCM_DOMAIN_PERIPH
//! - \b PRCM_DOMAIN_CPU
//!
//! \return None
//
//*****************************************************************************
extern void PRCMRetentionEnable(uint32_t ui32PowerDomain);

//*****************************************************************************
//
//! Disable retention on power domains
//!
//! \param ui32PowerDomain is a bit maks of the domains in question.
//!
//! Determines if a power domain should have retention disabled.
//!
//! The \e ui32PowerDomain parameter must be OR'ed combination one of the
//! values:
//!
//! - \b PRCM_DOMAIN_PERIPH
//! - \b PRCM_DOMAIN_CPU
//!
//! \return None
//
//*****************************************************************************
extern void PRCMRetentionDisable(uint32_t ui32PowerDomain);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __PRCM_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
