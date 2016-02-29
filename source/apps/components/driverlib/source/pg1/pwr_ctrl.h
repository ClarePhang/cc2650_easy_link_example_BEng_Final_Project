/******************************************************************************
*  Filename:       pwr_ctrl.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the System Power Control.
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
//! \addtogroup pwrctrl_api
//! @{
//
//*****************************************************************************

#ifndef __PWR_CTRL_H__
#define __PWR_CTRL_H__

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
#include "hw_aon_wuc.h"
#include "hw_aon_sysctl.h"
#include "hw_aon_rtc.h"
#include "hw_adi_2_refsys.h"
#include "debug.h"
#include "interrupt.h"
#include "osc.h"
#include "cpu.h"
#include "prcm.h"
#include "aon_wuc.h"
#include "aon_ioc.h"
#include "aux_wuc.h"
#include "adi.h"

//*****************************************************************************
//
// Defines for the system power states
//
//*****************************************************************************
#define PWRCTRL_ACTIVE          0x00000001
#define PWRCTRL_STANDBY         0x00000002
#define PWRCTRL_POWER_DOWN      0x00000004
#define PWRCTRL_SHUTDOWN        0x00000008

//*****************************************************************************
//
// Defines for the power configuration in the AON System Control 1.2 V
//
//*****************************************************************************
#define PWRCTRL_IOSEG3_ENABLE   0x00000800
#define PWRCTRL_IOSEG2_ENABLE   0x00000400
#define PWRCTRL_IOSEG3_DISABLE  0x00000200
#define PWRCTRL_IOSEG2_DISABLE  0x00000100
#define PWRCTRL_PWRSRC_DCDC     0x00000001
#define PWRCTRL_PWRSRC_GLDO     0x00000000
#define PWRCTRL_PWRSRC_ULDO     0x00000002

//*****************************************************************************
//
// The following are defines for the various reset source for the device.
//
//*****************************************************************************
#define PWRCTRL_RST_POWER_ON    0x00000000  // Reset by power on
#define PWRCTRL_RST_PIN         0x00000002  // Pin reset
#define PWRCTRL_RST_VDDS_BOD    0x00000004  // VDDS Brown Out Detect 
#define PWRCTRL_RST_VDD_BOD     0x00000006  // VDD Brown Out Detect  
#define PWRCTRL_RST_VDDR_BOD    0x00000008  // VDDR Brown Out Detect
#define PWRCTRL_RST_CLK_LOSS    0x0000000A  // Clock loss Reset
#define PWRCTRL_RST_SHUTDOWN    0x0000000C  // Reset after shutdown

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// void PowerCtrlStateSet(uint32_t ui32Powerstate);
// void PowerCtrlSourceSet(uint32_t ui32PowerConfig);
// uint32_t PowerCtrlSourceGet(void);
// void PowerCtrlIoConfigSet(uint32_t ui32IoConfig);
// uint32_t PowerCtrlResetSourceGet(void);
// void PowerCtrlResetSourceClear(void);
// void PowerCtrlIOFreezeEnable(void);
// void PowerCtrlIOFreezeDisable(void);

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

//*****************************************************************************
//
//! Force the system in to low power modes.
//!
//! \param ui32Powerstate defines the next power state for the system.
//!
//! The device has 4 main power states where \b PWRCTRL_ACTIVE is the default
//! state. If the CPU is running the system is considered to be in the active
//! state. The three other states are
//!
//! \b PWRCTRL_STANDBY
//! \b PWRCTRL_POWER_DOWN
//! \b PWRCTRL_SHUTDOWN
//!
//! \note This code does not guarantee free operation of the AUX controller.
//! It is only guaranteed to flip the switches to force the desired low power
//! mode on the device.
//!
//! \note It is solely the programmers responsibility to properly configure an
//! interrupt that will enable the device to wakeup before configuring the
//! power mode. If not properly implemented the behaviour is undefined.
//!
//! \return None
//
//*****************************************************************************
extern void PowerCtrlStateSet(uint32_t ui32Powerstate);

//*****************************************************************************
//
//! Set (Request) the main power source
//!
//! \param ui32PowerConfig is a bitmask indicating the target power source.
//!
//! It must be one of the values
//! \b PWRCTRL_PWRSRC_DCDC, \b PWRCTRL_PWRSRC_GLDO or \b PWRCTRL_PWRSRC_ULDO.
//!
//! \note The system will never allow a switch to the \b PWRCTRL_PWRSRC_ULDO
//! when in active mode. This is only allowed when the system is in lower power
//! mode where no code is executing and no peripherals are active.
//! Assuming that there is an external capacitor available for the 
//! \b PWRCTRL_PWRSRC_DCDC the system can dynamically switch back and forth 
//! between the two when in active mode.
//!
//! \note The system will automatically switch to the GLDO / DCDC when waking
//! up from a low power mode.
//!
//! \return None
//
//*****************************************************************************
extern void PowerCtrlSourceSet(uint32_t ui32PowerConfig);

//*****************************************************************************
//
//! Get the main power source
//!
//! Use this function to retrieve the current active power source. The returned
//! power source will be either \b PWRCTRL_PWRSRC_DCDC or 
//! \b PWRCTRL_PWRSRC_GLDO. When the CM3 is active it can never source power
//! from the uLDO as this is to weak power source.
//!
//! \note Using the DCDC power supply requires an external inductor.
//!
//! \return Returns either \b PWRCTRL_PWRSRC_DCDC or \b PWRCTRL_PWRSRC_GLDO
//
//*****************************************************************************
__STATIC_INLINE uint32_t
PowerCtrlSourceGet(void)
{
    uint32_t ui32PowerConfig;

    //
    // Return the current power source
    //
    ui32PowerConfig = HWREG(AON_SYSCTL_BASE + AON_SYSCTL_O_PWRCTL);
    if(ui32PowerConfig & AON_SYSCTL_PWRCTL_DCDC_ACTIVE)
    {
        return (PWRCTRL_PWRSRC_DCDC);
    }
    else
    {
        return (PWRCTRL_PWRSRC_GLDO);
    }
}

//*****************************************************************************
//
//! Configure the IO ring
//!
//! \param ui32IoConfig is a bitmask indicating the IO configuration.
//!
//! It must be a logical OR of the values
//! \b PWRCTRL_IOSEG3_ENABLE, \b PWRCTRL_IOSEG2_ENABLE,
//! \b PWRCTRL_IOSEG3_DISABLE, \b PWRCTRL_IOSEG2_DISABLE
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PowerCtrlIoConfigSet(uint32_t ui32IoConfig)
{
    //
    // Check the arguments.
    //
    ASSERT(((ui32IoConfig & PWRCTRL_IOSEG2_ENABLE) ^
            (ui32IoConfig & PWRCTRL_IOSEG2_DISABLE)) ||
           ((ui32IoConfig & PWRCTRL_IOSEG3_ENABLE) ^
            (ui32IoConfig & PWRCTRL_IOSEG3_DISABLE)));

    //
    // Configure the IO ring.
    //
    HWREG(AON_SYSCTL_BASE + AON_SYSCTL_O_PWRCTL) = ui32IoConfig;
}

//*****************************************************************************
//
//! Get the last known reset source of the system
//!
//! The possible reset sources are
//!
//! - \b PWRCTRL_RST_POWER_ON
//! - \b PWRCTRL_RST_PIN
//! - \b PWRCTRL_RST_VDDS_BOD
//! - \b PWRCTRL_RST_VDD_BOD
//! - \b PWRCTRL_RST_VDDR_BOD
//! - \b PWRCTRL_RST_CLK_LOSS
//! - \b PWRCTRL_RST_SHUTDOWN
//!
//! \return Returns one of the known reset values.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
PowerCtrlResetSourceGet(void)
{
    //
    //  Get the reset source.
    //
    return (HWREG(AON_SYSCTL_BASE + AON_SYSCTL_O_RESETCTL) &
            AON_SYSCTL_RESETCTL_RESET_SRC_M);
}

//*****************************************************************************
//
//! Clear the system reset source
//!
//! Use this function to clear the last known reset source of the system. The
//! default value is \b PWRCTRL_RST_POWER_ON.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PowerCtrlResetSourceClear(void)
{
    //
    //  Clear the reset source.
    //
    HWREG(AON_SYSCTL_BASE + AON_SYSCTL_O_RESETCTL) &= 0xFFFFFFFE;
}

//*****************************************************************************
//
//! Close the latches in the AON IOC interface and in padring.
//!
//! Use this function to unfreeze the current value retained on the IOs driven
//! by the device. This is required if it is desired to maintain the level of
//! any IO driven when going through a shutdown/powerdown cycle.
//!
//! \sa PowerCtrlIOFreezeDisable()
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PowerCtrlIOFreezeEnable(void)
{
    //
    // Close the IO latches at AON_IOC level and in the padring.
    //
    AONIOCFreezeEnable();
    HWREG(AON_SYSCTL_BASE + AON_SYSCTL_O_SLEEPCTL) = 0;
    HWREG(AON_RTC_BASE + AON_RTC_O_SYNC);
}

//*****************************************************************************
//
//! Open the latches in the AON IOC interface and in padring.
//!
//! Use this function to unfreeze the latches that retained on the IOs driven
//! by the device. This function should not be called before the application
//! has reinitialized the IO configuration that will drive the IOs to the 
//! desired level
//!
//! \sa PowerCtrlIOFreezeEnable()
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
PowerCtrlIOFreezeDisable(void)
{
    //
    // Open the IO latches at AON_IOC level and in the padring
    // 
    AONIOCFreezeDisable();
    HWREG(AON_SYSCTL_BASE + AON_SYSCTL_O_SLEEPCTL) = 1;
    HWREG(AON_RTC_BASE + AON_RTC_O_SYNC);
}

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __PWR_CTRL_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
