/******************************************************************************
*  Filename:       aux_ctrl.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the AUX Controller
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
//! \addtogroup auxctrl_api
//! @{
//
//*****************************************************************************

#ifndef __AUX_CTRL_H__
#define __AUX_CTRL_H__

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
#include "hw_aux_sce.h"
#include "debug.h"

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// void AUXCTRLEnable(void);
// void AUXCTRLDisable(void);
// void AUXCTRLImageLoad(uint16_t *pui16Image,
//                       uint32_t ui32StartAddr,
//                       uint32_t ui32Size);
// void AUXCTRLResetVectorSet(uint32_t  ui32Offset);
// uint32_t AUXCTRLResetVectorGet(void);
// void AUXCTRLStop(void);
// void AUXCTRLResume(void);
// void AUXCTRLRestart(void);

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

//*****************************************************************************
//
//! Enable AUX controller
//!
//! This function enables the clock for the AUX controller.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AUXCTRLEnable(void)
{
    //
    // Enable clock for AUX Ctrl.
    //
    HWREG(AUX_SCE_BASE + AUX_SCE_O_CTL) |= AUX_SCE_CTL_CLK_EN;
}

//*****************************************************************************
//
//! Disable AUX controller
//!
//! This function disables the clock for the AUX controller.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AUXCTRLDisable(void)
{

    //
    // Disable clock for AUX Ctrl.
    //
    HWREG(AUX_SCE_BASE + AUX_SCE_O_CTL) &= ~AUX_SCE_CTL_CLK_EN;
}

//*****************************************************************************
//
//! Load AUX controller Firmware into dedicated RAM
//!
//! \param pui16Image is a pointer to the program image located in Flash
//! \param ui32StartAddr is address offset within AUX Controller RAM
//! \param ui32Size is the size of the image in bytes
//!
//! This function stops the AUX controller and then loads the specified
//! firmware image into the AUX Controller RAM.
//! The \e ui32StartAddr parameter specifies the word (16 bits) address offset
//! within the AUX controller RAM. The offset must be be in the range 0,..,511.
//! The \e ui32Size parameter is the size of the firmware image in bytes. As
//! every instruction for the AUX controller is 16 bit, the size of the image
//! must be an even number in the range: 0,...,1024 .
//!
//! \note The location of the reset vector should be specified using the
//! AUXCTRLSetResetVector() call. To restart the AUX controller use the
//! AUXCTRLRestart() call.
//!
//! \sa AUXCTRLSetResetVector() and AUXCTRLRestart().
//!
//! \return None
//
//*****************************************************************************
extern void AUXCTRLImageLoad(uint16_t *pui16Image, uint32_t ui32StartAddr,
                             uint32_t ui32Size);

//*****************************************************************************
//
//! Set location of Reset Vector for AUX controller
//!
//! \param ui32Offset is location of the Reset Vector.
//!
//! When the AUX controller exits its reset sate, it starts executing from the
//! Reset Vector. This function specifies the location of the vector within
//! the dedicated AUX RAM.
//!
//! The \e ui32Offset parameter specifies the offset as a word (16 bits) address
//! of the Reset Vector. The offset must be in the range: 0,..,15
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AUXCTRLResetVectorSet(uint32_t ui32Offset)
{
    uint32_t ui32Reg;

    //
    // Check the arguments.
    //
    ASSERT(ui32Offset <= 15);

    //
    // Set location of Reset Vector.
    //
    ui32Reg = HWREG(AUX_SCE_BASE + AUX_SCE_O_CTL);
    ui32Reg &= ~AUX_SCE_CTL_RESET_VECTOR_M;
    ui32Reg |= (ui32Offset << AUX_SCE_CTL_RESET_VECTOR_S);
    HWREG(AUX_SCE_BASE + AUX_SCE_O_CTL) = ui32Reg;
}

//*****************************************************************************
//
//! Get location of Reset Vector for AUX controller
//!
//! When the AUX controller exits its reset sate, it starts executing from the
//! Reset Vector. This function returns the location of the vector within
//! the dedicated AUX RAM.
//!
//! \return Returns an offset in bytes defining the position of the current
//! reset vector. The offset is in the range: 0,..,15
//
//*****************************************************************************
__STATIC_INLINE uint32_t
AUXCTRLResetVectorGet(void)
{
    //
    // Set location of Reset Vector.
    //
    return ((HWREG(AUX_SCE_BASE + AUX_SCE_O_CTL) &
             AUX_SCE_CTL_RESET_VECTOR_M) >>
            AUX_SCE_CTL_RESET_VECTOR_S);
}

//*****************************************************************************
//
//! Stop AUX controller execution
//!
//! This function stops the AUX controller from executing.
//!
//! \note No registers will be reset, by calling this function. Execution from
//! the current Program Counter can be resumed using AUXCTRLResume() or
//! execution can be restarted using AUXCTRLRestart().
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AUXCTRLStop(void)
{
    //
    // Suspend execution.
    //
    HWREG(AUX_SCE_BASE + AUX_SCE_O_CTL) |= AUX_SCE_CTL_SUSPEND;
}

//*****************************************************************************
//
//! Resume AUX controller execution
//!
//! This function resume the AUX controller and should only be used if AUX
//! controller has been stopped by using the AUXCTRLStop() call.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AUXCTRLResume(void)
{
    //
    // Resume execution by un-suspending the controller.
    //
    HWREG(AUX_SCE_BASE + AUX_SCE_O_CTL) &= ~AUX_SCE_CTL_SUSPEND;
}

//*****************************************************************************
//
//! Restart AUX controller execution
//!
//! This function restarts the AUX controller. The AUX controller execution
//! will restart from the configured reset vector.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
AUXCTRLRestart(void)
{
    uint32_t ui32Reg;

    //
    // Restart.
    //
    ui32Reg = HWREG(AUX_SCE_BASE + AUX_SCE_O_CTL);
    ui32Reg &= ~AUX_SCE_CTL_SUSPEND;
    ui32Reg |= (AUX_SCE_CTL_RESTART | AUX_SCE_CTL_FORCE_WU_HIGH);
    HWREG(AUX_SCE_BASE + AUX_SCE_O_CTL) =  ui32Reg;
    HWREG(AUX_SCE_BASE + AUX_SCE_O_CTL) &= ~(AUX_SCE_CTL_RESTART | AUX_SCE_CTL_FORCE_WU_HIGH);
}

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __AUX_CTRL_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
