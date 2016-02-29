/******************************************************************************
*  Filename:       aon_ioc.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the AON IO Controller
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
//! \addtogroup aonioc_api
//! @{
//
//*****************************************************************************

#ifndef __AON_IOC_H__
#define __AON_IOC_H__

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
#include "hw_aon_ioc.h"
#include "debug.h"

//*****************************************************************************
//
// Defines for the drive strength
//
//*****************************************************************************
#define AONIOC_DRV_STR5_7_14    0x00000000  //
#define AONIOC_DRV_STR5_10_20   0x00000001  //
#define AONIOC_DRV_STR7_14_28   0x00000003  //
#define AONIOC_DRV_STR10_20_40  0x00000002  //
#define AONIOC_DRV_STR14_28_56  0x00000006  //
#define AONIOC_DRV_STR20_40_80  0x00000007  //
#define AONIOC_DRV_STR28_56_112 0x00000005  //
#define AONIOC_DRV_STR40_80_112 0x00000004  //
                                
#define AONIOC_MAX_DRIVE        AONIOC_DRV_STR40_80_112
#define AONIOC_MED_DRIVE        AONIOC_DRV_STR14_28_56
#define AONIOC_MIN_DRIVE        AONIOC_DRV_STR5_7_14

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// uint32_t AONIOCDriveStrengthGet(uint32_t ui32DriveLevel);
// void AONIOCDriveStrengthSet(uint32_t ui32LowDrvStr,
//                             uint32_t ui32MedDrvStr,
//                             uint32_t ui32MaxDrvStr);
// void AONIOCFreezeEnable(void);
// void AONIOCFreezeDisable(void);
// void AONIOC32kHzOutputEnable(void);
// void AONIOC32kHzOutputDisable(void);

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

//*****************************************************************************
//
//! Setup the drive strength for all IOs on the chip
//!
//! \param ui32LowDrvStr is the minimum drive strength for all IOs
//! \param ui32MedDrvStr is the medium drive strength for all IOs
//! \param ui32MaxDrvStr is the maximum drive strength for all IOs
//!
//! Use this function to define the general drive strength settings for all IOs
//! on the device. The drive strength of the individual IOs is set using the
//! IOC driver. The available drive strength settings for the IOs are
//! \b AONIOC_DRV_STR5_7_14, \b AONIOC_DRV_STR5_10_20, \b AONIOC_DRV_STR7_14_28
//! \b AONIOC_DRV_STR10_20_40, \b AONIOC_DRV_STR14_28_56,
//! \b AONIOC_DRV_STR20_40_80 \b AONIOC_DRV_STR28_56_112 or
//! \b AONIOC_DRV_STR40_80_112.
//!
//! \return None
//
//*****************************************************************************
extern void AONIOCDriveStrengthSet(uint32_t ui32LowDrvStr,
                                   uint32_t ui32MedDrvStr,
                                   uint32_t ui32MaxDrvStr);

//*****************************************************************************
//
//! Get a specific drive level setting for all IOs
//!
//! \param ui32DriveLevel is the specific drive level to get the setting for.
//!
//! Use this function to retreive the driver strengt setting for a specific
//! IO drive level. The possible drive strength settings for the IOs are
//! \b AON_IOC_DRIVE_STR0, \b AON_IOC_DRIVE_STR1, \b AON_IOC_DRIVE_STR2,
//! \b AON_IOC_DRIVE_STR3, \b AON_IOC_DRIVE_STR4, \b AON_IOC_DRIVE_STR5,
//! \b AON_IOC_DRIVE_STR6 or \b AON_IOC_DRIVE_STR7.
//!
//! \return Returns the requested drive strength level setting for all IOs.
//
//*****************************************************************************
extern uint32_t AONIOCDriveStrengthGet(uint32_t ui32DriveLevel);

//*****************************************************************************
//
//! Freeze the IOs
//!
//! To retain the values of the output IOs during a powerdown/shutdown of the
//! device all IOs latches in the AON domain should be frozen in their current
//!  state. This ensures that software can regain control of the IOs after a
//! reboot without the IOs first falling back to the default values (ie. input
//! and no pull).
//!
//! \sa AIONIOCFreezeDisable()
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONIOCFreezeEnable(void)
{
    //
    // Set the AON IO latches as static.
    //
    HWREG(AON_IOC_BASE + AON_IOC_O_IOCLATCH) = 0x0;
}

//*****************************************************************************
//
//! Unfreeze the IOs
//!
//! When rebooting the chip after a it has entered powerdown/shutdown mode, the
//!  software can regain control of the IOs by setting the IO latches as
//! transparent. The IOs should not be unfrozen before software has restored
//! the functionality of the IO.
//!
//! \sa AONIOCFreezeEnable()
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONIOCFreezeDisable(void)
{
    //
    // Set the AON IOC latches as transparent.
    //
    HWREG(AON_IOC_BASE + AON_IOC_O_IOCLATCH) = AON_IOC_IOCLATCH_EN;
}

//*****************************************************************************
//
//! Disable the 32kHz clock output
//!
//! When output a 32 kHz clock on an IO, the output enable/disable functionality
//! in the IOC is bypassed. Therefore, the programmer needs to call this
//! function to disable the clock output.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONIOC32kHzOutputDisable(void)
{
    //
    // Disable the LF clock output.
    //
    HWREG(AON_IOC_BASE + AON_IOC_O_CLK32KCTL) = AON_IOC_CLK32KCTL_OE_N;
}

//*****************************************************************************
//
//! Enable the 32kHz clock output
//!
//! When output a 32 kHz clock on an IO, the output enable/disable functionality
//! in the IOC is bypassed. Therefore, the programmer needs to call this
//! function to enable the clock output.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AONIOC32kHzOutputEnable(void)
{
    //
    // Enable the LF clock output.
    //
    HWREG(AON_IOC_BASE + AON_IOC_O_CLK32KCTL) = 0x0;
}

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif //  __AON_IOC_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
