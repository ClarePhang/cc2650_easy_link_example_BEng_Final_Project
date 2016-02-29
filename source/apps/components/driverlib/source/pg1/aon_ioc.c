/******************************************************************************
*  Filename:       aon_ioc.c
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Driver for the AON IO Controller
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

#include "aon_ioc.h"

//*****************************************************************************
//
//! Setup the drive strength for all IOs on the chip
//
//*****************************************************************************
void
AONIOCDriveStrengthSet(uint32_t ui32LowDrvStr, uint32_t ui32MedDrvStr,
                       uint32_t ui32MaxDrvStr)
{
    ASSERT((ui32LowDrvStr == AONIOC_DRV_STR5_7_14) ||
           (ui32LowDrvStr == AONIOC_DRV_STR5_10_20) ||
           (ui32LowDrvStr == AONIOC_DRV_STR7_14_28) ||
           (ui32LowDrvStr == AONIOC_DRV_STR10_20_40) ||
           (ui32LowDrvStr == AONIOC_DRV_STR14_28_56) ||
           (ui32LowDrvStr == AONIOC_DRV_STR20_40_80) ||
           (ui32LowDrvStr == AONIOC_DRV_STR28_56_112) ||
           (ui32LowDrvStr == AONIOC_DRV_STR40_80_112));
    ASSERT((ui32MedDrvStr == AONIOC_DRV_STR5_7_14) ||
           (ui32MedDrvStr == AONIOC_DRV_STR5_10_20) ||
           (ui32MedDrvStr == AONIOC_DRV_STR7_14_28) ||
           (ui32MedDrvStr == AONIOC_DRV_STR10_20_40) ||
           (ui32MedDrvStr == AONIOC_DRV_STR14_28_56) ||
           (ui32MedDrvStr == AONIOC_DRV_STR20_40_80) ||
           (ui32MedDrvStr == AONIOC_DRV_STR28_56_112) ||
           (ui32MedDrvStr == AONIOC_DRV_STR40_80_112));
    ASSERT((ui32MaxDrvStr == AONIOC_DRV_STR5_7_14) ||
           (ui32MaxDrvStr == AONIOC_DRV_STR5_10_20) ||
           (ui32MaxDrvStr == AONIOC_DRV_STR7_14_28) ||
           (ui32MaxDrvStr == AONIOC_DRV_STR10_20_40) ||
           (ui32MaxDrvStr == AONIOC_DRV_STR14_28_56) ||
           (ui32MaxDrvStr == AONIOC_DRV_STR20_40_80) ||
           (ui32MaxDrvStr == AONIOC_DRV_STR28_56_112) ||
           (ui32MaxDrvStr == AONIOC_DRV_STR40_80_112));

    //
    // Set the minimum drive strength.
    //
    HWREG(AON_IOC_BASE + AON_IOC_O_IOSTRMIN) = ui32LowDrvStr &
                                               AON_IOC_IOSTRMIN_GRAY_CODE_M;
    //
    // Set the medium drive strength.
    //
    HWREG(AON_IOC_BASE + AON_IOC_O_IOSTRMED) = ui32MedDrvStr &
                                               AON_IOC_IOSTRMED_GRAY_CODE_M;
    //
    // Set the maximum drive strength.
    //
    HWREG(AON_IOC_BASE + AON_IOC_O_IOSTRMAX) = ui32MaxDrvStr &
                                               AON_IOC_IOSTRMAX_GRAY_CODE_M;

}

//*****************************************************************************
//
//! Get a specific drive level setting for all IOs
//
//*****************************************************************************
uint32_t
AONIOCDriveStrengthGet(uint32_t ui32DriveLevel)
{
    uint32_t ui32DrvStr;

    //
    // Check the arguments.
    //
    ASSERT((ui32DriveLevel == AONIOC_MAX_DRIVE) ||
           (ui32DriveLevel == AONIOC_MED_DRIVE) ||
           (ui32DriveLevel == AONIOC_MIN_DRIVE));

    //
    // Get the specified drive strength level.
    //
    if(ui32DriveLevel == AONIOC_MAX_DRIVE)
    {
        ui32DrvStr = HWREG(AON_IOC_BASE + AON_IOC_O_IOSTRMAX);
    }
    else if(ui32DriveLevel == AONIOC_MED_DRIVE)
    {
        ui32DrvStr = HWREG(AON_IOC_BASE + AON_IOC_O_IOSTRMED);
    }
    else
    {
        ui32DrvStr = HWREG(AON_IOC_BASE + AON_IOC_O_IOSTRMIN);
    }

    //
    // Return the drive strength value.
    //
    return(ui32DrvStr);
}

