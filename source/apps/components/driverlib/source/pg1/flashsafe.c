/******************************************************************************
*  Filename:       flash.c
*  Revised:        $Date$
*  Revision:       $Revision$
*
*  Description:    Thread Safe Driver for the Flash.
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
//! \addtogroup flashsafe_api
//! @{
//
//*****************************************************************************
#include <stdbool.h>
#include <stdint.h>
#include "hw_types.h"
#include "hw_flash.h"
#include "hw_memmap.h"
#include "hw_ints.h"
#include "hw_factory_cfg.h"
#include "interrupt.h"
#include "debug.h"
#include "flashsafe.h"
#include "rom.h"
#include "smph.h"



//*****************************************************************************
//
// Defines for values written to the FLASH_O_FSM_WR_ENA register
//
//*****************************************************************************
#define FSM_REG_WRT_ENABLE     5
#define FSM_REG_WRT_DISABLE    2


//*****************************************************************************
//
// Semapahore wrapper functions
//
//*****************************************************************************
static inline bool
FlashsafeSMPHTryAcquire(void)
{
    return(SMPHTryAcquire(SMPH_ALLOC_FLASH));
}

static inline void
FlashsafeSMPHRelease(void)
{
    SMPHRelease(SMPH_ALLOC_FLASH);
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
uint32_t
FlashsafeSizeGet(void)
{
    return(ROM_FlashSizeGet());
}

//*****************************************************************************
//
//! Get size of a flash sector in no of bytes
//!
//! This function will return the size of a flash sector in number of bytes.
//!
//! \return Returns size of a flash sector in number of bytes
//
//*****************************************************************************
uint32_t
FlashsafeSectorSizeGet(void)
{
    return(ROM_FlashSectorSizeGet());
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
//! FlashsafePowerModeSet funtion with the FLASH_PWR_ACTIVE_MODE input parameter
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
//! \return FLASHSAFE_ACCESS_DENIED if flash is used by another thread, else
//!         FLASHSAFE_ACCESS_OK.
//
//*****************************************************************************
uint32_t
FlashsafePowerModeSet(uint32_t ui32PowerMode, uint32_t ui32BankGracePeriode,
                      uint32_t ui32PumpGracePeriode)
{
    //
    // Check the arguments.
    //
    ASSERT(ui32PowerMode == FLASH_PWR_ACTIVE_MODE ||
           ui32PowerMode == FLASH_PWR_OFF_MODE    ||
           ui32PowerMode == FLASH_PWR_DEEP_STDBY_MODE);
    ASSERT(ui32BankGracePeriode <= 0xFF);
    ASSERT(ui32PumpGracePeriode <= 0xFFFF);

    if(FlashsafeSMPHTryAcquire())
    {
        ROM_FlashPowerModeSet(ui32PowerMode, ui32BankGracePeriode,
                              ui32PumpGracePeriode);
        FlashsafeSMPHRelease();
        return(FLASHSAFE_ACCESS_OK);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);
}

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
//! \return Returns FLASHSAFE_ACCESS_DENIED if flash is blocked by another 
//!         thread, otherwise the current configured power mode.
//
//*****************************************************************************
uint32_t
FlashsafePowerModeGet(void)
{
    uint32_t ui32PowerMode;
    
    if(FlashsafeSMPHTryAcquire())
    {
        ui32PowerMode = ROM_FlashPowerModeGet();
        FlashsafeSMPHRelease();
        return(ui32PowerMode);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);
}

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
//! \return FLASHSAFE_ACCESS_DENIED if flash is used by another thread, else
//!         FLASHSAFE_ACCESS_OK.
//
//*****************************************************************************
uint32_t
FlashsafeProtectionSet(uint32_t ui32SectorAddress, uint32_t ui32ProtectMode)
{
    //
    // Check the arguments.
    //
    ASSERT(ui32SectorAddress <= (FLASHMEM_BASE + FlashsafeSizeGet() -
                                 FlashsafeSectorSizeGet()));
    ASSERT((ui32SectorAddress & (FlashsafeSectorSizeGet() - 1)) == 00);
    
    if(FlashsafeSMPHTryAcquire())
    {
        ROM_FlashProtectionSet(ui32SectorAddress, ui32ProtectMode);
        FlashsafeSMPHRelease();
        return(FLASHSAFE_ACCESS_OK);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);    
}

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
//! \return Returns FLASHSAFE_ACCESS_DENIED if flash is used by another thread, 
//!         else the sector protection
//
//*****************************************************************************
uint32_t
FlashsafeProtectionGet(uint32_t ui32SectorAddress)
{
    uint32_t ui32SectorProtect;

    //
    // Check the arguments.
    //
    ASSERT(ui32SectorAddress <= (FLASHMEM_BASE + FlashsafeSizeGet() -
                                 FlashsafeSectorSizeGet()));
    ASSERT((ui32SectorAddress & (FlashsafeSectorSizeGet() - 1)) == 00);
   
    if(FlashsafeSMPHTryAcquire())
    {
        ui32SectorProtect = ROM_FlashProtectionGet(ui32SectorAddress);
        FlashsafeSMPHRelease();
        return(ui32SectorProtect);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);
}

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
//! \return Returns FLASHSAFE_ACCESS_DENIED if flash is used by another thread,
//!         else \b FAPI_STATUS_SUCCESS on success, or \b FAPI_STATUS_FSM_ERROR
//!         if a erase error is encountered
//
//*****************************************************************************
uint32_t
FlashsafeProtectionSave(uint32_t ui32SectorAddress)
{
    uint32_t ui32ErrorReturn;

    //
    // Check the arguments.
    //
    ASSERT(ui32SectorAddress <= (FLASHMEM_BASE + FlashsafeSizeGet() -
                                 FlashsafeSectorSizeGet()));
    ASSERT((ui32SectorAddress & (FlashsafeSectorSizeGet() - 1)) == 00);

    if(FlashsafeSMPHTryAcquire())
    {
        ui32ErrorReturn = ROM_FlashProtectionSave(ui32SectorAddress);
        FlashsafeSMPHRelease();
        return(ui32ErrorReturn);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);
}

//*****************************************************************************
//
//! Checks if the Flashsafe state machine has detected an error
//!
//! This function returns the status of the Flashsafe State Machine indicating if
//! an error is detected or not. Primary use is to check if an Erase or
//! Program operation has failed.
//!
//! \return Returns either \b FAPI_STATUS_FSM_ERROR or \b FAPI_STATUS_SUCCESS
//
//*****************************************************************************
uint32_t
FlashsafeCheckFsmForError(void)
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
uint32_t
FlashsafeCheckFsmForReady(void)
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
//! FLASH interrupts must be enabled via FlashsafeIntEnable(). It is the interrupt
//! handler's responsibility to clear the interrupt source.
//!
//! \sa IntRegister() for important information about registering interrupt
//! handlers.
//!
//! \return FLASHSAFE_ACCESS_DENIED if flash is used by another thread, else
//!         FLASHSAFE_ACCESS_OK.
//
//*****************************************************************************
uint32_t
FlashsafeIntRegister(void (*pfnHandler)(void))
{
    if(FlashsafeSMPHTryAcquire())
    {
        //
        // Register the interrupt handler.
        //
        IntRegister(INT_FLASH, pfnHandler);

        //
        // Enable the flash interrupt.
        //
        IntEnable(INT_FLASH);
        
        FlashsafeSMPHRelease();
        return(FLASHSAFE_ACCESS_OK);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);
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
//! \return FLASHSAFE_ACCESS_DENIED if flash is used by another thread, else
//!         FLASHSAFE_ACCESS_OK.
//
//*****************************************************************************
uint32_t
FlashsafeIntUnregister(void)
{
    if(FlashsafeSMPHTryAcquire())
    {
        //
        // Disable the interrupts.
        //
        IntDisable(INT_FLASH);

        //
        // Unregister the interrupt handler.
        //
        IntUnregister(INT_FLASH);
        
        FlashsafeSMPHRelease();
        return(FLASHSAFE_ACCESS_OK);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);
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
//! \return FLASHSAFE_ACCESS_DENIED if flash is used by another thread, else
//!         FLASHSAFE_ACCESS_OK.
//
//*****************************************************************************
uint32_t
FlashsafeIntEnable(uint32_t ui32IntFlags)
{
    if(FlashsafeSMPHTryAcquire())
    {
        HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_ENABLE;
        HWREG(FLASH_BASE + FLASH_O_FSM_ST_MACHINE) |= ui32IntFlags;
        HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_DISABLE;
        
        FlashsafeSMPHRelease();
        return(FLASHSAFE_ACCESS_OK);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);
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
//! \return FLASHSAFE_ACCESS_DENIED if flash is used by another thread, else
//!         FLASHSAFE_ACCESS_OK.
//
//*****************************************************************************
uint32_t
FlashsafeIntDisable(uint32_t ui32IntFlags)
{
    if(FlashsafeSMPHTryAcquire())
    {
        HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_ENABLE;
        HWREG(FLASH_BASE + FLASH_O_FSM_ST_MACHINE) &= ~ui32IntFlags;
        HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_DISABLE;
        FlashsafeSMPHRelease();
        return(FLASHSAFE_ACCESS_OK);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);
}

//*****************************************************************************
//
//! Gets the current interrupt status
//!
//! This function returns the interrupt status for the Flash.
//!
//! \return Returns the current interrupt status as values described in 
//!         FlashsafeIntEnable().
//
//*****************************************************************************
uint32_t
FlashsafeIntStatus(void)
{
    return(ROM_FlashIntStatus());
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
//! \return FLASHSAFE_ACCESS_DENIED if flash is used by another thread, else
//!         FLASHSAFE_ACCESS_OK.
//
//*****************************************************************************
uint32_t
FlashsafeIntClear(uint32_t ui32IntFlags)
{
    if(FlashsafeSMPHTryAcquire())
    {
        ROM_FlashIntClear(ui32IntFlags);
        FlashsafeSMPHRelease();
        return(FLASHSAFE_ACCESS_OK);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);
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
//! \return Returns FLASHSAFE_ACCESS_DENIED if flash is used by another thread, 
//!         else\b FAPI_STATUS_SUCCESS on success, or \b FAPI_STATUS_FSM_ERROR 
//!         if a programming error is encountered
//
//*****************************************************************************
uint32_t
FlashsafeSectorErase(uint32_t ui32SectorAddress)
{
    uint32_t ui32ErrorReturn;

    //
    // Check the arguments.
    //
    ASSERT(ui32SectorAddress <= (FLASHMEM_BASE + FlashsafeSizeGet() -
                                 FlashsafeSectorSizeGet()));
    ASSERT((ui32SectorAddress & (FlashsafeSectorSizeGet() - 1)) == 00);

    if(FlashsafeSMPHTryAcquire())
    {
        ui32ErrorReturn = ROM_FlashSectorErase(ui32SectorAddress);
        FlashsafeSMPHRelease();
        return(ui32ErrorReturn);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);
}


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
//! \return Returns FLASHSAFE_ACCESS_DENIED if flash is used by another thread, 
//!         \b FAPI_STATUS_SUCCESS on success, or \b FAPI_STATUS_FSM_ERROR if a
//!         programming error is encountered
//
//*****************************************************************************
uint32_t
FlashsafeProgram(uint8_t *pui8DataBuffer, uint32_t ui32Address, uint32_t ui32Count)
{
    uint32_t ui32ErrorReturn;

    //
    // Check the arguments.
    //
    ASSERT((ui32Address + ui32Count) <= (FLASHMEM_BASE + FlashsafeSizeGet()));

    if(FlashsafeSMPHTryAcquire())
    {
        ui32ErrorReturn = ROM_FlashProgram(pui8DataBuffer, ui32Address, ui32Count);
        FlashsafeSMPHRelease();
        return(ui32ErrorReturn);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);    
}

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
//! finished the function FlashsafeCheckFsmForError() can be called for checking
//! if any errors were detected during the programming command.
//! After all desired programming has been performed the function
//! FlashsafeDisableSectorsForWrite() should be called in order to protect
//! sectors from unintended program and erase operation due to accidental
//! register writes.
//! When the proram operation has been finsihed the function 
//! FlashsafeProgramNowaitRelease() should be called to release the flash for 
//! use by other threads. 
//!
//! \sa FlashsafeProgramNowaitRelease(), FlashCheckFsmForReady() and 
//!     FlashsafeDisableSectorsForWrite().
//! 
//! \return Returns FLASHSAFE_ACCESS_DENIED if flash is used by another thread, 
//!         else \b FAPI_STATUS_SUCCESS or \b FAPI_STATUS_INCORRECT_DATABUFFER_LENGTH
//!          if too many bytes were requested
//
//*****************************************************************************
uint32_t
FlashsafeProgramNowait(uint32_t ui32StartAddress, uint8_t *pui8DataBuffer,
                   uint8_t ui8NoOfBytes)
{
    uint32_t     ui32ErrorReturn;

    //
    // Check the arguments.
    //
    ASSERT((ui32StartAddress + ui8NoOfBytes) <= (FLASHMEM_BASE + FlashsafeSizeGet()));

    if(FlashsafeSMPHTryAcquire())
    {
        ui32ErrorReturn = ROM_FlashProgramNowait(ui32StartAddress, pui8DataBuffer, 
                                                 ui8NoOfBytes);
        
        return(ui32ErrorReturn);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);    
}

//*****************************************************************************
//
//! Release Flash for use by other thread
//!
//! This function releases the flash for use by another thread. It is to be used
//! in context with FlashsafeProgramNowait(), as this call will reserve the 
//! flash untill it is released. 
//!
//! \return None
//
//*****************************************************************************
void
FlashsafeProgramNowaitRelease(void)
{
    FlashsafeSMPHRelease();
}


//*****************************************************************************
//
//! Disables all sectors for erase and programming on the active bank
//!
//! This function disables all sectors for erase and programming on the active
//! bank and enables the Idle Reading Power reduction mode if no low power
//! power mode is configured. In addition an addition level of protection from
//! erase is enabled.
//!
//! This function should be called after use of the FlashsafeProgramNowait()
//! function in order to reenable the idle reading power reduction mode if
//! required and to disable all bank sectors from unintended programming or
//! erase.
//!
//! \return FLASHSAFE_ACCESS_DENIED if flash is used by another thread, else
//!         FLASHSAFE_ACCESS_OK.
//
//*****************************************************************************
uint32_t
FlashsafeDisableSectorsForWrite(void)
{

    if(FlashsafeSMPHTryAcquire())
    {
        ROM_FlashDisableSectorsForWrite();
        FlashsafeSMPHRelease();
        return(FLASHSAFE_ACCESS_OK);
    }
    
    return(FLASHSAFE_ACCESS_DENIED);      
}


//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
