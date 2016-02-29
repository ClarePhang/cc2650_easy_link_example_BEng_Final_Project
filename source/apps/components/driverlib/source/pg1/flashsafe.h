/******************************************************************************
*  Filename:       flashsafe.h
*  Revised:        $Date$
*  Revision:       $Revision$
*
*  Description:    Defines and prototypes for the Flash driver in 
*                  Thread safe mode.
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

#ifndef __FLASHSAFE_H__
#define __FLASHSAFE_H__

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

#define FLASHSAFE_ACCESS_DENIED 0x000000ff
#define FLASHSAFE_ACCESS_OK     0x000000ee
#define SMPH_ALLOC_FLASH   1

//*****************************************************************************
//
// Values that can be returned from the API functions
//
//*****************************************************************************
#define FAPI_STATUS_SUCCESS     0x00000000  // Function completed successfully
#define FAPI_STATUS_FSM_BUSY    0x00000001  // FSM is Busy
#define FAPI_STATUS_FSM_READY   0x00000002  // FSM is Ready
#define FAPI_STATUS_INCORRECT_DATABUFFER_LENGTH \
                                0x00000003  // Incorrect parameter value
#define FAPI_STATUS_FSM_ERROR   0x00000004  // Operation failed

//*****************************************************************************
//
// Values passed to FlashsafeIntEnable(), FlashsafeIntDisable() and FlashsafeIntClear() and
// returned from FlashsafeIntStatus().
//
//*****************************************************************************
#define FLASH_INT_FSM_DONE      0x00400000  // FSM Done Interrupt Mask
#define FLASH_INT_RV            0x00010000  // Read Verify error Interrupt Mask

//*****************************************************************************
//
// Values passed to FlashsafeSetPowerMode() and returned from FlashsafeGetPowerMode().
//
//*****************************************************************************
#define FLASH_PWR_ACTIVE_MODE   0x00000000
#define FLASH_PWR_OFF_MODE      0x00000001
#define FLASH_PWR_DEEP_STDBY_MODE \
                                0x00000002

//*****************************************************************************
//
// Values passed to FlashsafeSetProtection() and returned from FlashsafeGetProtection().
//
//*****************************************************************************
#define FLASH_NO_PROTECT        0x00000000 // Sector not protected
#define FLASH_WRITE_PROTECT     0x00000001 // Sector erase and program 
                                           // protected

//*****************************************************************************
//
// Prototypes for the APIs.
//
//*****************************************************************************
extern uint32_t FlashsafeSizeGet(void);
extern uint32_t FlashsafeSectorSizeGet(void);
extern uint32_t FlashsafePowerModeSet(uint32_t ui32PowerMode,
                                      uint32_t ui32BankGracePeriode,
                                      uint32_t ui32PumpGracePeriode);
extern uint32_t FlashsafePowerModeGet(void);

extern uint32_t FlashsafeProtectionSet(uint32_t ui32SectorAddress,
                                       uint32_t ui32ProtectMode);
extern uint32_t FlashsafeProtectionGet(uint32_t ui32SectorAddress);
extern uint32_t FlashsafeProtectionSave(uint32_t ui32SectorAddress);

extern uint32_t FlashsafeSectorErase(uint32_t ui32SectorAddress);
extern uint32_t FlashsafeProgram(uint8_t *pui8DataBuffer, uint32_t ui32Address,
                                 uint32_t ui32Count);
extern uint32_t FlashsafeProgramNowait(uint32_t ui32StartAddress,
                                       uint8_t *pui8DataBuffer,
                                       uint8_t ui8NoOfBytes);

extern void     FlashsafeProgramNowaitRelease(void);
extern uint32_t FlashsafeDisableSectorsForWrite(void);
extern uint32_t FlashsafeCheckFsmForReady(void);
extern uint32_t FlashsafeCheckFsmForError(void);
extern uint32_t FlashsafeIntRegister(void (*pfnHandler)(void));
extern uint32_t FlashsafeIntUnregister(void);
extern uint32_t FlashsafeIntEnable(uint32_t ui32IntFlags);
extern uint32_t FlashsafeIntDisable(uint32_t ui32IntFlags);
extern uint32_t FlashsafeIntStatus(void);
extern uint32_t FlashsafeIntClear(uint32_t ui32IntFlags);

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __FLASHSAFE_H__
