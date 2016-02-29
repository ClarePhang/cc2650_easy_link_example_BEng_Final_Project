/******************************************************************************
*  Filename:       flash.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Defines and prototypes for the Flash driver.
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
//! \addtogroup flash_api
//! @{
//
//*****************************************************************************

#ifndef __FLASH_H__
#define __FLASH_H__

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
#include "hw_flash.h"
#include "hw_memmap.h"
#include "hw_ints.h"
#include "hw_factory_cfg.h"
#include "interrupt.h"
#include "debug.h"

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
// Values passed to FlashIntEnable(), FlashIntDisable() and FlashIntClear() and
// returned from FlashIntStatus().
//
//*****************************************************************************
#define FLASH_INT_FSM_DONE      0x00400000  // FSM Done Interrupt Mask
#define FLASH_INT_RV            0x00010000  // Read Verify error Interrupt Mask

//*****************************************************************************
//
// Values passed to FlashSetPowerMode() and returned from FlashGetPowerMode().
//
//*****************************************************************************
#define FLASH_PWR_ACTIVE_MODE   0x00000000
#define FLASH_PWR_OFF_MODE      0x00000001
#define FLASH_PWR_DEEP_STDBY_MODE \
                                0x00000002

//*****************************************************************************
//
// Values passed to FlashSetProtection() and returned from FlashGetProtection().
//
//*****************************************************************************
#define FLASH_NO_PROTECT        0x00000000 // Sector not protected
#define FLASH_WRITE_PROTECT     0x00000001 // Sector erase and program 
                                           // protected

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************

// extern uint32_t FlashSizeGet(void);
// extern uint32_t FlashSectorSizeGet(void);
// extern void FlashPowerModeSet(uint32_t ui32PowerMode,
//                               uint32_t ui32BankGracePeriode,
//                               uint32_t ui32PumpGracePeriode);
// uint32_t FlashPowerModeGet(void);
// 
// void FlashProtectionSet(uint32_t ui32SectorAddress,
//                         uint32_t ui32ProtectMode);
// uint32_t FlashProtectionGet(uint32_t ui32SectorAddress);
// uint32_t FlashProtectionSave(uint32_t ui32SectorAddress);
// 
// uint32_t FlashSectorErase(uint32_t ui32SectorAddress);
// uint32_t FlashProgram(uint8_t *pui8DataBuffer, uint32_t ui32Address,
//                       uint32_t ui32Count);
// uint32_t FlashProgramNowait(uint32_t ui32StartAddress,
//                             uint8_t *pui8DataBuffer,
//                             uint8_t ui8NoOfBytes);
// 
// bool FlashEfuseReadRow(uint32_t *pui32EfuseData,
//                        uint32_t ui32RowAddress);
// 
// void FlashDisableSectorsForWrite(void);
// uint32_t FlashCheckFsmForReady(void);
// uint32_t FlashCheckFsmForError(void);
// void FlashIntRegister(void (*pfnHandler)(void));
// void FlashIntUnregister(void);
// void FlashIntEnable(uint32_t ui32IntFlags);
// void FlashIntDisable(uint32_t ui32IntFlags);
// uint32_t FlashIntStatus(void);
// void FlashIntClear(uint32_t ui32IntFlags);

//*****************************************************************************
//
// Define used by the flash programming and erase functions
//
//*****************************************************************************
#define ADDR_OFFSET            (0x1F800000 - FLASHMEM_BASE)

//*****************************************************************************
//
// Define used for access to factory configuration area.
//
//*****************************************************************************
#define FCFG1_OFFSET           0x1000

//*****************************************************************************
//
// Define for the clock frequencey input to the flash module in number of MHz
//
//*****************************************************************************
#define FLASH_MODULE_CLK_FREQ  48

//*****************************************************************************
//
// Defined values for Flash State Machine commands
//
//*****************************************************************************
typedef enum
{
    FAPI_PROGRAM_DATA    = 0x0002,
    FAPI_ERASE_SECTOR    = 0x0006,
    FAPI_ERASE_BANK      = 0x0008,
    FAPI_VALIDATE_SECTOR = 0x000E,
    FAPI_CLEAR_STATUS    = 0x0010,
    FAPI_PROGRAM_RESUME  = 0x0014,
    FAPI_ERASE_RESUME    = 0x0016,
    FAPI_CLEAR_MORE      = 0x0018,
    FAPI_PROGRAM_SECTOR  = 0x0020,
    FAPI_ERASE_OTP       = 0x0030
} tFlashStateCommandsType;

//*****************************************************************************
//
// Defines for values written to the FLASH_O_FSM_WR_ENA register
//
//*****************************************************************************
#define FSM_REG_WRT_ENABLE     5
#define FSM_REG_WRT_DISABLE    2

//*****************************************************************************
//
// Defines for the bank power mode field the FLASH_O_FBFALLBACK register
//
//*****************************************************************************
#define FBFALLBACK_SLEEP       0
#define FBFALLBACK_DEEP_STDBY  1
#define FBFALLBACK_ACTIVE      3

//*****************************************************************************
//
// Defines for the bank grace periode and pump grace periode
//
//*****************************************************************************
#define FLASH_BAGP             0x14
#define FLASH_PAGP             0x14

//*****************************************************************************
//
// Defines used by the FlashProgramPattern() function
//
//*****************************************************************************
#define PATTERN_BITS           0x20  // No of bits in data pattern to program

//*****************************************************************************
//
// Defines for the FW flag bits in the FLASH_O_FWFLAG register
//
//*****************************************************************************
#define FW_WRT_TRIMMED         0x00000001

//*****************************************************************************
//
// Defines used by the flash programming functions
//
//*****************************************************************************
typedef volatile uint8_t tFwpWriteByte;
#define FWPWRITE_BYTE_ADDRESS ((tFwpWriteByte *)((FLASH_BASE + FLASH_O_FWPWRITE0)))

//*****************************************************************************
//
// Define for efuse instruction
//
//*****************************************************************************
#define DUMPWORD_INSTR         0x04

//*****************************************************************************
//
// Define for FSM command execution
//
//*****************************************************************************
#define FLASH_CMD_EXEC         0x15

//*****************************************************************************
//
// Defines for accesses to the customer configuration area in flash top sector
//
//*****************************************************************************
#define CCFG_OFFSET_SECURITY   0x00000FD8
#define CCFG_OFFSET_SECT_PROT  0x00000FF0
#define CCFG_SIZE_SECURITY     0x00000014
#define CCFG_SIZE_SECT_PROT    0x00000004

//*****************************************************************************
//
// Defines for input values to the IdleReadingPwrModeSet function
//
//*****************************************************************************
#define DISABLED_MODE          0x00000000
#define CONFIGURED_MODE        0x00000001

//*****************************************************************************
//
// Function prototypes for static functions
//
//*****************************************************************************
static void SectorEraseNowait(uint32_t ui32SectorAddress);
static void IdleReadingPwrModeSet(uint32_t ui32Mode);
static void IssueFsmCommand(tFlashStateCommandsType eCommand);
static void EnableSectorsForWrite(void);
static uint32_t ScaleCycleValues(uint32_t ui32SpecifiedTiming,
                                 uint32_t ui32ScaleValue);
static void TrimForWrite(void);
//*****************************************************************************
//
//! Get size of a flash sector in no of bytes
//!
//! This function will return the size of a flash sector in number of bytes.
//!
//! \return Returns size of a flash sector in number of bytes
//
//*****************************************************************************
__STATIC_INLINE uint32_t
FlashSectorSizeGet(void)
{
    uint32_t ui32SectorSizeInKbyte;

    ui32SectorSizeInKbyte = (HWREG(FLASH_BASE + FLASH_O_FCFG_B0_SSIZE0) &
                             FLASH_FCFG_B0_SSIZE0_B0_SECT_SIZE_M) >>
                            FLASH_FCFG_B0_SSIZE0_B0_SECT_SIZE_S;

    //
    // Return flash sector size in number of bytes.
    //
    return(ui32SectorSizeInKbyte * 1024);
}

//*****************************************************************************
//
//! Get the size of the flash
//!
//! This function returns the size of the flash main bank in number of bytes.
//!
//! \return Returns the flash size in number of bytes
//
//*****************************************************************************
__STATIC_INLINE uint32_t
FlashSizeGet(void)
{
    uint32_t ui32NoOfSectors;

    //
    // Get number of flash sectors
    //
    ui32NoOfSectors = (HWREG(FLASH_BASE + FLASH_O_FLASH_SIZE) &
                       FLASH_FLASH_SIZE_SECTORS_M) >>
                      FLASH_FLASH_SIZE_SECTORS_S;

    //
    // Return flash size in number of bytes
    //
    return(ui32NoOfSectors * FlashSectorSizeGet());
}

//*****************************************************************************
//
//! Set power mode
//!
//! \param ui32PowerMode is the wanted power mode.
//! \param ui32BankGracePeriode is the starting count value for the bank grace
//! periode down counter.
//! \param ui32PumpGracePeriode is the starting count value for the pump grace
//! periode down counter.
//!
//! This function will set the specified power mode.
//! Any access to the bank causes a reload of the specified bank grace periode
//! input value into the bank down counter. After the last access to the
//! flash bank, the down counter delays from 0 to 255 prescaled HCLK clock
//! cycles before putting the bank into one of the fallback power modes as
//! determined by ui32PowerMode. This value must be greater than 1 when the
//! fallback mode is not FLASH_PWR_ACTIVE_MODE.
//! Note: The prescaled clock used for the down counter is a clock divided by
//! 16 from input HCLK. The ui32BankGracePeriode parameter is ignored if
//! ui32PowerMode is equal to FLASH_PWR_ACTIVE_MODE.
//! Any access to flash memory causes the pump grace periode down counter to
//! reload with value of ui32PumpGracePeriode. After the bank has gone to sleep,
//! the down counter delays this number of prescaled HCLK clock cycles before
//! entering one of the charge pump fallback power modes as determined by
//! ui32PowerMode. The prescaled clock used for the pump grace periode down
//! counter is a clock divided by 16 from input HCLK. This parameter is ignored
//! if ui32PowerMode is equal to FLASH_PWR_ACTIVE_MODE.
//!
//! In current flash module design the SW application has to call the
//! FlashPowerModeSet funtion with the FLASH_PWR_ACTIVE_MODE input parameter
//! value if the flash modules comes out of any of the two low power modes, in
//! in order to reestablish the factory configured idle reading power reduction
//! mode.
//!
//! Changing the power mode of the falsh module must be a part within a
//! device power mode transition requiring configuration of multiple modules.
//! Refer to documents describing the device power modes.
//!
//! The defined power modes are
//!
//! -\b FLASH_PWR_ACTIVE_MODE
//! -\b FLASH_PWR_OFF_MODE
//! -\b FLASH_PWR_DEEP_STDBY_MODE
//!
//! \return None
//
//*****************************************************************************
extern void FlashPowerModeSet(uint32_t ui32PowerMode,
                              uint32_t ui32BankGracePeriode,
                              uint32_t ui32PumpGracePeriode);

//*****************************************************************************
//
//! Get current configured power mode
//!
//! This function will return the current configured power mode.
//! The defined power modes are
//!
//! -\b FLASH_PWR_ACTIVE_MODE
//! -\b FLASH_PWR_OFF_MODE
//! -\b FLASH_PWR_DEEP_STDBY_MODE
//!
//! \return Returns the current configured power mode
//
//*****************************************************************************
extern uint32_t FlashPowerModeGet(void);

//*****************************************************************************
//
//! Set sector protection
//!
//! \param ui32SectorAddress is the start address of the sector to protect.
//! \param ui32ProtectMode is the enumerated sector protection mode.
//!
//! This function will set the specified protection on specified flash bank
//! sector. A sector can either have no protection or have write protection
//! which guards for both program and erase of that sector.
//! Sector protection can only be changed from FLASH_NO_PROTECT to
//! FLASH_WRITE_PROTECT! After write protecting a sector this sector can
//! only be set back to unprotected by a device reset.
//!
//! The defined sector protection modes are
//!
//! -\b FLASH_NO_PROTECT
//! -\b FLASH_WRITE_PROTECT
//!
//! \return None
//
//*****************************************************************************
extern void FlashProtectionSet(uint32_t ui32SectorAddress,
                               uint32_t ui32ProtectMode);

//*****************************************************************************
//
//! Get sector protection
//!
//! \param ui32SectorAddress is the start address of the desired sector.
//!
//! This return the protection mode for the specified flash bank sector.
//! The defined sector protection are
//!
//! -\b FLASH_NO_PROTECT
//! -\b FLASH_WRITE_PROTECT
//!
//! \return Returns the sector protection
//
//*****************************************************************************
extern uint32_t FlashProtectionGet(uint32_t ui32SectorAddress);

//*****************************************************************************
//
//! Save sector protection to make it permanent
//!
//! \param ui32SectorAddress is the start address of the sector to be protected.
//!
//! This function will save the the current protection mode for the specified
//! flash bank sector. A write protected sector will become permanent write
//! protected!! A device reset will not change the write protection!
//!
//! \return Returns \b FAPI_STATUS_SUCCESS on success, or
//! \b FAPI_STATUS_FSM_ERROR if a erase error is encountered
//
//*****************************************************************************
extern uint32_t FlashProtectionSave(uint32_t ui32SectorAddress);

//*****************************************************************************
//
//! Checks if the Flash state machine has detected an error
//!
//! This function returns the status of the Flash State Machine indicating if
//! an error is detected or not. Primary use is to check if an Erase or
//! Program operation has failed.
//!
//! \return Returns either \b FAPI_STATUS_FSM_ERROR or \b FAPI_STATUS_SUCCESS
//
//*****************************************************************************
__STATIC_INLINE uint32_t
FlashCheckFsmForError(void)
{
    if(HWREG(FLASH_BASE + FLASH_O_FMSTAT) & FLASH_FMSTAT_CSTAT)
    {
        return(FAPI_STATUS_FSM_ERROR);
    }
    else
    {
        return(FAPI_STATUS_SUCCESS);
    }
}

//*****************************************************************************
//
//! Checks if the Flash state machine is ready
//!
//! This function returns the status of the Flash State Machine indicating if
//! it is ready to accept a new command or not. Primary use is to check if an
//! Erase or Program operation has finished.
//!
//! \return Returns either \b FAPI_STATUS_FSM_READY or \b FAPI_STATUS_FSM_BUSY
//
//*****************************************************************************
__STATIC_INLINE uint32_t
FlashCheckFsmForReady(void)
{
    if(HWREG(FLASH_BASE + FLASH_O_STAT) & FLASH_STAT_BUSY)
    {
        return(FAPI_STATUS_FSM_BUSY);
    }
    else
    {
        return(FAPI_STATUS_FSM_READY);
    }
}

//*****************************************************************************
//
//! Registers an interrupt handler for the flash interrupt.
//!
//! \param pfnHandler is a pointer to the function to be called when the flash
//! interrupt occurs.
//!
//! This function does the actual registering of the interrupt handler. This
//! function enables the global interrupt in the interrupt controller; specific
//! FLASH interrupts must be enabled via FlashIntEnable(). It is the interrupt
//! handler's responsibility to clear the interrupt source.
//!
//! \sa IntRegister() for important information about registering interrupt
//! handlers.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
FlashIntRegister(void (*pfnHandler)(void))
{
    //
    // Register the interrupt handler.
    //
    IntRegister(INT_FLASH, pfnHandler);

    //
    // Enable the flash interrupt.
    //
    IntEnable(INT_FLASH);
}

//*****************************************************************************
//
//! Unregisters the interrupt handler for the flash interrupt.
//!
//! This function does the actual unregistering of the interrupt handler. It
//! clears the handler to be called when a FLASH interrupt occurs. This
//! function also masks off the interrupt in the interrupt controller so that
//! the interrupt handler no longer is called.
//!
//! \sa IntRegister() for important information about registering interrupt
//! handlers.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
FlashIntUnregister(void)
{
    //
    // Disable the interrupts.
    //
    IntDisable(INT_FLASH);

    //
    // Unregister the interrupt handler.
    //
    IntUnregister(INT_FLASH);
}

//*****************************************************************************
//
//! Enables flash controller interrupt sources.
//!
//! \param ui32IntFlags is the bit mask of the interrupt sources to be enabled.
//!
//! This function enables the flash controller interrupt sources.
//!
//! The \e ui32IntFlags parameter is the logical OR of any of the following
//!
//! - \b FLASH_INT_FSM_DONE - FSM Done interrupt
//! - \b FLASH_INT_RV       - Read verify error interrupt
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
FlashIntEnable(uint32_t ui32IntFlags)
{
    HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_ENABLE;
    HWREG(FLASH_BASE + FLASH_O_FSM_ST_MACHINE) |= ui32IntFlags;
    HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_DISABLE;
}

//*****************************************************************************
//
//! Disables individual flash controller interrupt sources.
//!
//! \param ui32IntFlags is the bit mask of the interrupt sources to be disabled.
//!
//! This function disables the flash controller interrupt sources.
//!
//! The \e ui32IntFlags parameter is the logical OR of any of the following
//!
//! - \b FLASH_INT_FSM_DONE - FSM Done interrupt
//! - \b FLASH_INT_RV       - Read verify error interrupt
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
FlashIntDisable(uint32_t ui32IntFlags)
{
    HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_ENABLE;
    HWREG(FLASH_BASE + FLASH_O_FSM_ST_MACHINE) &= ~ui32IntFlags;
    HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_DISABLE;
}

//*****************************************************************************
//
//! Gets the current interrupt status
//!
//! This function returns the interrupt status for the Flash.
//!
//! \return Returns the current interrupt status as values described in
//! FlashIntEnable().
//
//*****************************************************************************
__STATIC_INLINE uint32_t
FlashIntStatus(void)
{
    uint32_t ui32IntFlags;

    ui32IntFlags = 0;

    //
    // Check if FSM_DONE interrupt status is set.
    //
    if(HWREG(FLASH_BASE + FLASH_O_FEDACSTAT) & FLASH_FEDACSTAT_FSM_DONE)
    {
        ui32IntFlags = FLASH_INT_FSM_DONE;
    }

    //
    // Check if RVF_INT interrupt status is set.
    //
    if(HWREG(FLASH_BASE + FLASH_O_FEDACSTAT) & FLASH_FEDACSTAT_RVF_INT)
    {
        ui32IntFlags |= FLASH_INT_RV;
    }

    return(ui32IntFlags);
}

//*****************************************************************************
//
//! Clears flash controller interrupt source
//!
//! \param ui32IntFlags is the bit mask of the interrupt sources to be cleared.
//! Can be any of the \b FLASH_INT_FSM_DONE or \b FLASH_INT_RV values.
//!
//! The flash controller interrupt source is cleared, so that it no longer
//! assert. This must be done in the interrupt handler to keep it from being
//! called again immediately upon exit.
//!
//! \note Because there is a write buffer in the Cortex-M3 processor, it may
//! take several clock cycles before the interrupt source is actually cleared.
//! Therefore, it is recommended that the interrupt source be cleared early in
//! the interrupt handler (as opposed to the very last action) to avoid
//! returning from the interrupt handler before the interrupt source is
//! actually cleared. Failure to do so may result in the interrupt handler
//! being immediately reentered (because the interrupt controller still sees
//! the interrupt source asserted).
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
FlashIntClear(uint32_t ui32IntFlags)
{
    uint32_t ui32TempVal;

    ui32TempVal = 0;

    if(ui32IntFlags & FLASH_INT_FSM_DONE)
    {
        ui32TempVal = FLASH_FEDACSTAT_FSM_DONE;
    }

    if(ui32IntFlags & FLASH_INT_RV)
    {
        ui32TempVal |= FLASH_FEDACSTAT_RVF_INT;
    }

    //
    // Clear the flash interrupt source.
    //
    HWREG(FLASH_BASE + FLASH_O_FEDACSTAT) = ui32TempVal;
}

//*****************************************************************************
//
//! Erase a flash sector
//!
//! \param ui32SectorAddress is the starting address in flash of the sector to be
//! erased.
//!
//! This function will erase the specified flash sector. The function will
//! not return until the flash sector has been erased or an error condition
//! occurred. If flash top sector is erased the function will program the
//! the device security data bytes with default values. The device security
//! data located in the customer configuration area of the flash top sector,
//! must have valid values at all times. These values affects the configuration
//! of the device during boot.
//!
//! \return Returns \b FAPI_STATUS_SUCCESS on success, or
//! \b FAPI_STATUS_FSM_ERROR if a programming error is encountered
//
//*****************************************************************************
extern uint32_t FlashSectorErase(uint32_t ui32SectorAddress);


//*****************************************************************************
//
//! Programs unprotected main bank flash sectors
//!
//! \param pui8DataBuffer is a pointer to the data to be programmed.
//! \param ui32Address is the starting address in flash to be programmed.
//! \param ui32Count is the number of bytes to be programmed.
//!
//! This function will program a sequence of bytes into the on-chip flash.
//! Programming each location consists of the result of an AND operation
//! of the new data and the existing data; in other words bits that contain
//! 1 can remain 1 or be changed to 0, but bits that are 0 cannot be changed
//! to 1.  Therefore, a byte can be programmed multiple times as long as these
//! rules are followed; if a program operation attempts to change a 0 bit to
//! a 1 bit, that bit will not have its value changed.
//!
//! This function will not return until the data has been programmed or an
//! programming error has occurred.
//!
//! \return Returns \b FAPI_STATUS_SUCCESS on success, or
//! \b FAPI_STATUS_FSM_ERROR if a programming error is encountered
//
//*****************************************************************************
extern uint32_t FlashProgram(uint8_t *pui8DataBuffer,
                             uint32_t ui32Address, uint32_t ui32Count);

//*****************************************************************************
//
//! Starts programming within unprotected main bank flash sector and returns
//!
//! \param ui32StartAddress is the start address in flash to program.
//! \param pui8DataBuffer is a pointer to the data to be programmed.
//! \param ui8NoOfBytes is the number of bytes to program.
//!
//! This function starts flash programming and returns before the programming
//! has finished. It sets up the programming registers of the Flash State
//! Machine based on the supplied parameters. It handles multiple bank widths
//! automatically.
//! The programming mode used is FAPI_PROGRAM_DATA. This mode will only
//! program the data portion in Flash at the address specified. It can
//! program from 1 byte up to the bank width (8,16,32) bytes based on the bank
//! architecture. The supplied starting address to program at plus the data
//! buffer length cannot exceed the bank data width. (Ex. Programming 6
//! bytes on a 8 byte wide bank starting at address 0x4 is not allowed.)
//! The cc26xx bank data width is 8.
//! The function does not wait for the programming command to finish. It is up
//! to the caller of this function to check when the programming command is
//! finished and the status of the command. The caller can choose between
//! polling and interrupt in order to detect the termination of the programming
//! command. Interrupt can be used by enabling the \b FLASH_INT_FSM_DONE
//! interrupt. The function FlashCheckFsmForReady() can be called for checking
//! if the programming command is finished. After the programming command has
//! finished the function FlashCheckFsmForError() can be called for checking
//! if any errors were detected during the programming command.
//! After all desired programming has been performed the function
//! FlashDisableSectorsForWrite() should be called in order to protect
//! sectors from unintended program and erase operation due to accidental
//! register writes.
//!
//! \return Returns \b FAPI_STATUS_SUCCESS or
//! \b FAPI_STATUS_INCORRECT_DATABUFFER_LENGTH if too many bytes were requested
//
//*****************************************************************************
extern uint32_t FlashProgramNowait(uint32_t ui32StartAddress,
                                   uint8_t *pui8DataBuffer,
                                   uint8_t ui8NoOfBytes);

//*****************************************************************************
//
//! Reads efuse data from specified row
//!
//! \param pui32EfuseData is pointer to variable to be updated with efuse data.
//! \param ui32RowAddress is the efuse row number to be read. First row is row
//! number 0.
//!
//! This function will read one efuse row.
//! It is assumed that any previous efuse operation is finished.
//!
//! \return Returns the status of the efuse read operation. 0 - ok status.
//! 1 - error status
//
//*****************************************************************************
extern bool FlashEfuseReadRow(uint32_t *pui32EfuseData,
                              uint32_t ui32RowAddress);

//*****************************************************************************
//
//! Disables all sectors for erase and programming on the active bank
//!
//! This function disables all sectors for erase and programming on the active
//! bank and enables the Idle Reading Power reduction mode if no low power
//! power mode is configured. In addition an addition level of protection from
//! erase is enabled.
//!
//! This function should be called after use of the FlashProgramNowait()
//! function in order to reenable the idle reading power reduction mode if
//! required and to disable all bank sectors from unintended programming or
//! erase.
//!
//! \return None
//
//*****************************************************************************
extern void FlashDisableSectorsForWrite(void);


//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif // __FLASH_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
