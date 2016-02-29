/******************************************************************************
*  Filename:       flash.c
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    Driver for on chip Flash.
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

#include "flash.h"

//*****************************************************************************
//
// Default values for security control in customer configuration area in flash
// top sector. TBD! It must be asured that layout corresponds with CCFG.
//
//*****************************************************************************
const uint8_t g_pui8CcfgDefaultSec[] = {0xFF, 0xFF, 0xFF, 0xC5,
                                        0xFF, 0xFF, 0xFF, 0xFF,
                                        0xC5, 0xFF, 0xFF, 0xFF,
                                        0xC5, 0xC5, 0xC5, 0xFF,
                                        0xC5, 0xC5, 0xC5, 0xFF
                                       };

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
//! Set power mode
//
//*****************************************************************************
void
FlashPowerModeSet(uint32_t ui32PowerMode, uint32_t ui32BankGracePeriode,
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

    switch(ui32PowerMode)
    {
    case FLASH_PWR_ACTIVE_MODE:
        //
        // Set bank power mode to ACTIVE.
        //
        HWREG(FLASH_BASE + FLASH_O_FBFALLBACK) &=
            (~FLASH_FBFALLBACK_BANKPWR0_M | FBFALLBACK_ACTIVE);

        //
        // Set charge pump power mode to ACTIVE mode.
        //
        HWREG(FLASH_BASE + FLASH_O_FPAC1) |= FLASH_FPAC1_PUMPPWR;

        //
        // Set mode as specified by factory configuration.
        //
        IdleReadingPwrModeSet(CONFIGURED_MODE);
        break;

    case FLASH_PWR_OFF_MODE:
        //
        // Disable Idle Reading Power Reduction mode.
        //
        IdleReadingPwrModeSet(DISABLED_MODE);

        //
        // Set bank grace periode.
        //
        HWREG(FLASH_BASE + FLASH_O_FBAC) =
            (HWREG(FLASH_BASE + FLASH_O_FBAC) & (~FLASH_FBAC_BAGP_M)) |
            ((ui32BankGracePeriode << FLASH_FBAC_BAGP_S) & FLASH_FBAC_BAGP_M);

        //
        // Set pump grace periode.
        //
        HWREG(FLASH_BASE + FLASH_O_FPAC2) =
            (HWREG(FLASH_BASE + FLASH_O_FPAC2) & (~FLASH_FPAC2_PAGP_M)) |
            ((ui32PumpGracePeriode << FLASH_FPAC2_PAGP_S) & FLASH_FPAC2_PAGP_M);

        //
        // Set bank power mode to SLEEP.
        //
        HWREG(FLASH_BASE + FLASH_O_FBFALLBACK) &=
            (~FLASH_FBFALLBACK_BANKPWR0_M | FBFALLBACK_SLEEP);

        //
        // Set charge pump power mode to SLEEP mode.
        //
        HWREG(FLASH_BASE + FLASH_O_FPAC1) &= ~FLASH_FPAC1_PUMPPWR;
        break;

    case FLASH_PWR_DEEP_STDBY_MODE:
        //
        // Disable Idle Reading Power Reduction mode.
        //
        IdleReadingPwrModeSet(DISABLED_MODE);

        //
        // Set bank grace periode.
        //
        HWREG(FLASH_BASE + FLASH_O_FBAC) =
            (HWREG(FLASH_BASE + FLASH_O_FBAC) & (~FLASH_FBAC_BAGP_M)) |
            ((ui32BankGracePeriode << FLASH_FBAC_BAGP_S) & FLASH_FBAC_BAGP_M);

        //
        // Set pump grace periode.
        //
        HWREG(FLASH_BASE + FLASH_O_FPAC2) =
            (HWREG(FLASH_BASE + FLASH_O_FPAC2) & (~FLASH_FPAC2_PAGP_M)) |
            ((ui32PumpGracePeriode << FLASH_FPAC2_PAGP_S) & FLASH_FPAC2_PAGP_M);

        //
        // Set bank power mode to DEEP STANDBY mode.
        //
        HWREG(FLASH_BASE + FLASH_O_FBFALLBACK) &=
            (~FLASH_FBFALLBACK_BANKPWR0_M | FBFALLBACK_DEEP_STDBY);

        //
        // Set charge pump power mode to SLEEP mode.
        //
        HWREG(FLASH_BASE + FLASH_O_FPAC1) &= ~FLASH_FPAC1_PUMPPWR;
        break;
    }
}

//*****************************************************************************
//
//! Get current configured power mode
//
//*****************************************************************************
uint32_t
FlashPowerModeGet(void)
{
    uint32_t ui32PowerMode;
    uint32_t ui32BankPwrMode;

    ui32BankPwrMode = HWREG(FLASH_BASE + FLASH_O_FBFALLBACK) &
                      FLASH_FBFALLBACK_BANKPWR0_M;

    if(ui32BankPwrMode == FBFALLBACK_SLEEP)
    {
        ui32PowerMode = FLASH_PWR_OFF_MODE;
    }
    else if(ui32BankPwrMode == FBFALLBACK_DEEP_STDBY)
    {
        ui32PowerMode = FLASH_PWR_DEEP_STDBY_MODE;
    }
    else
    {
        ui32PowerMode = FLASH_PWR_ACTIVE_MODE;
    }

    //
    // Return power mode.
    //
    return(ui32PowerMode);
}

//*****************************************************************************
//
//! Set sector protection
//
//*****************************************************************************
void
FlashProtectionSet(uint32_t ui32SectorAddress, uint32_t ui32ProtectMode)
{
    uint32_t ui32SectorNumber;

    //
    // Check the arguments.
    //
    ASSERT(ui32SectorAddress <= (FLASHMEM_BASE + FlashSizeGet() -
                                 FlashSectorSizeGet()));
    ASSERT((ui32SectorAddress & (FlashSectorSizeGet() - 1)) == 00);

    if(ui32ProtectMode == FLASH_WRITE_PROTECT)
    {
        ui32SectorNumber = (ui32SectorAddress - FLASHMEM_BASE) /
                           FlashSectorSizeGet();
        HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_ENABLE;

        if(ui32SectorNumber <= 31)
        {
            HWREG(FLASH_BASE + FLASH_O_FSM_BSLE0) |= (1 << ui32SectorNumber);
            HWREG(FLASH_BASE + FLASH_O_FSM_BSLP0) |= (1 << ui32SectorNumber);
        }
        else if(ui32SectorNumber <= 63)
        {
            HWREG(FLASH_BASE + FLASH_O_FSM_BSLE1) |=
                (1 << (ui32SectorNumber & 0x1F));
            HWREG(FLASH_BASE + FLASH_O_FSM_BSLP1) |=
                (1 << (ui32SectorNumber & 0x1F));
        }

        HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_DISABLE;
    }
}

//*****************************************************************************
//
//! Get sector protection
//
//*****************************************************************************
uint32_t
FlashProtectionGet(uint32_t ui32SectorAddress)
{
    uint32_t ui32SectorProtect;
    uint32_t ui32SectorNumber;

    //
    // Check the arguments.
    //
    ASSERT(ui32SectorAddress <= (FLASHMEM_BASE + FlashSizeGet() -
                                 FlashSectorSizeGet()));
    ASSERT((ui32SectorAddress & (FlashSectorSizeGet() - 1)) == 00);

    ui32SectorProtect = FLASH_NO_PROTECT;
    ui32SectorNumber = (ui32SectorAddress - FLASHMEM_BASE) / FlashSectorSizeGet();

    if(ui32SectorNumber <= 31)
    {
        if((HWREG(FLASH_BASE + FLASH_O_FSM_BSLE0) & (1 << ui32SectorNumber)) &&
                (HWREG(FLASH_BASE + FLASH_O_FSM_BSLP0) & (1 << ui32SectorNumber)))
        {
            ui32SectorProtect = FLASH_WRITE_PROTECT;
        }
    }
    else if(ui32SectorNumber <= 63)
    {
        if((HWREG(FLASH_BASE + FLASH_O_FSM_BSLE1) &
                (1 << (ui32SectorNumber & 0x1F))) &&
                (HWREG(FLASH_BASE + FLASH_O_FSM_BSLP1) &
                 (1 << (ui32SectorNumber & 0x1F))))
        {
            ui32SectorProtect = FLASH_WRITE_PROTECT;
        }
    }

    return(ui32SectorProtect);
}

//*****************************************************************************
//
//! Save sector protection to make it permanent
//
//*****************************************************************************
uint32_t
FlashProtectionSave(uint32_t ui32SectorAddress)
{
    uint32_t ui32ErrorReturn;
    uint32_t ui32SectorNumber;
    uint32_t ui32CcfgSectorAddr;
    uint8_t pui8ProgBuf[4];

    ui32ErrorReturn = FAPI_STATUS_SUCCESS;

    //
    // Check the arguments.
    //
    ASSERT(ui32SectorAddress <= (FLASHMEM_BASE + FlashSizeGet() -
                                 FlashSectorSizeGet()));
    ASSERT((ui32SectorAddress & (FlashSectorSizeGet() - 1)) == 00);

    if(FlashProtectionGet(ui32SectorAddress) == FLASH_WRITE_PROTECT)
    {
        //
        // Find sector number for specified sector.
        //
        ui32SectorNumber = (ui32SectorAddress - FLASHMEM_BASE) / FlashSectorSizeGet();
        ui32CcfgSectorAddr = FLASHMEM_BASE + FlashSizeGet() - FlashSectorSizeGet();

        //
        // Adjust CCFG address to the 32-bit CCFG word holding the
        // protect-bit for the specified sector.
        //
        ui32CcfgSectorAddr += (((ui32SectorNumber >> 5) * 4) + CCFG_OFFSET_SECT_PROT);

        //
        // Find value to program by setting the protect-bit which
        // corresponds to specified sector number, to 0.
        // Leave other protect-bits unchanged.
        //
        *(uint32_t *)pui8ProgBuf = (~(1 << (ui32SectorNumber & 0x1F))) &
                                   *(uint32_t *)ui32CcfgSectorAddr;

        ui32ErrorReturn = FlashProgram(pui8ProgBuf, ui32CcfgSectorAddr,
                                       CCFG_SIZE_SECT_PROT);
    }

    //
    // Return status.
    //
    return(ui32ErrorReturn);
}

//*****************************************************************************
//
//! Erase a flash sector
//
//*****************************************************************************
uint32_t
FlashSectorErase(uint32_t ui32SectorAddress)
{
    uint32_t ui32ErrorReturn;
    uint32_t ui32Error;

    //
    // Check the arguments.
    //
    ASSERT(ui32SectorAddress <= (FLASHMEM_BASE + FlashSizeGet() -
                                 FlashSectorSizeGet()));
    ASSERT((ui32SectorAddress & (FlashSectorSizeGet() - 1)) == 00);

    //
    // Trim flash module for program/erase operation.
    //
    TrimForWrite();

    //
    // Start erase operation.
    //
    SectorEraseNowait(ui32SectorAddress);

    //
    // Wait for erase to finish.
    //
    while(FlashCheckFsmForReady() == FAPI_STATUS_FSM_BUSY)
    {
    }

    //
    // Update status.
    //
    ui32ErrorReturn = FlashCheckFsmForError();

    //
    // Disable sectors for erase.
    //
    FlashDisableSectorsForWrite();

    //
    // Check if flash top sector was erased.
    //
    if(ui32SectorAddress == (FLASHMEM_BASE + FlashSizeGet() -
                             FlashSectorSizeGet()))
    {
        //
        // Program security data to default values in the customer configuration
        // area within the flash top sector.
        //
        ui32Error = FlashProgram((uint8_t *)g_pui8CcfgDefaultSec,
                                 (ui32SectorAddress + CCFG_OFFSET_SECURITY),
                                 CCFG_SIZE_SECURITY);

        if((ui32Error != FAPI_STATUS_SUCCESS) &&
                (ui32ErrorReturn == FAPI_STATUS_SUCCESS))
        {
            ui32ErrorReturn = ui32Error;
        }
    }

    //
    // Return status of operation.
    //
    return(ui32ErrorReturn);
}


//*****************************************************************************
//
//! Programs unprotected main bank flash sectors
//
//*****************************************************************************
uint32_t
FlashProgram(uint8_t *pui8DataBuffer, uint32_t ui32Address, uint32_t ui32Count)
{
    uint32_t ui32StartIndex;
    uint32_t ui32StopIndex;
    uint32_t ui32Index;
    uint8_t ui8BankWidth;
    uint8_t ui8NoOfBytes;
    tFwpWriteByte *oFwpWriteByte = FWPWRITE_BYTE_ADDRESS;
    uint32_t ui32ErrorReturn;

    //
    // Check the arguments.
    //
    ASSERT((ui32Address + ui32Count) <= (FLASHMEM_BASE + FlashSizeGet()));

    //
    // Set the status to indicate success.
    //
    ui32ErrorReturn = FAPI_STATUS_SUCCESS;

    //
    // Trim flash module for program/erase operation.
    //
    TrimForWrite();

    //
    // Enable sectors for programming.
    //
    EnableSectorsForWrite();

    //
    // Find flash bank width in number of bytes.
    //
    ui8BankWidth =
        (uint8_t)(((HWREG(FLASH_BASE + FLASH_O_FCFG_BANK) &
                    FLASH_FCFG_BANK_MAIN_BANK_WIDTH_M) >>
                   FLASH_FCFG_BANK_MAIN_BANK_WIDTH_S) >> 3);

    //
    // Loop over the bytes to be programmed.
    //
    while(ui32Count)
    {
        //
        // Setup the start position within the write data registers.
        //
        ui32StartIndex = ui32Address & (uint32_t)(ui8BankWidth - 1);

        //
        // Setup number of bytes to program.
        //
        ui8NoOfBytes = ui8BankWidth - ui32StartIndex;
        if(ui8NoOfBytes > ui32Count)
        {
            ui8NoOfBytes = ui32Count;
        }

        //
        // Clear the Status register.
        //
        IssueFsmCommand(FAPI_CLEAR_STATUS);

        //
        // Write address to FADDR register.
        //
        HWREG(FLASH_BASE + FLASH_O_FADDR) = ui32Address + ADDR_OFFSET;

        //
        // Setup the stop position within the write data registers.
        //
        ui32StopIndex = ui32StartIndex + (uint32_t)(ui8NoOfBytes - 1);

        //
        // Write each byte to the FWPWrite registers.
        //
        for(ui32Index = ui32StartIndex; ui32Index <= ui32StopIndex; ui32Index++)
        {
            oFwpWriteByte[ui32Index] = *(pui8DataBuffer++);
        }

        //
        // Issue the Program command to the FSM.
        //
        IssueFsmCommand(FAPI_PROGRAM_DATA);

        //
        // Wait until the word has been programmed.
        //
        while(FlashCheckFsmForReady() == FAPI_STATUS_FSM_BUSY)
        {
        }

        //
        // Exit if an access violation occurred.
        //
        ui32ErrorReturn = FlashCheckFsmForError();
        if(ui32ErrorReturn != FAPI_STATUS_SUCCESS)
        {
            break;
        }

        //
        // Prepare for next data burst.
        //
        ui32Count   -= ((ui32StopIndex - ui32StartIndex) + 1);
        ui32Address += ((ui32StopIndex - ui32StartIndex) + 1);
    }

    //
    // Disable sectors for programming.
    //
    FlashDisableSectorsForWrite();

    //
    // Return status of operation.
    //
    return(ui32ErrorReturn);
}

//*****************************************************************************
//
//! Starts programming within unprotected main bank flash sector and returns
//
//*****************************************************************************
uint32_t
FlashProgramNowait(uint32_t ui32StartAddress, uint8_t *pui8DataBuffer,
                   uint8_t ui8NoOfBytes)
{
    uint32_t     ui32StartIndex;
    uint32_t     ui32StopIndex;
    uint32_t     ui32Index;
    uint32_t     ui32BankWidth;
    uint32_t     ui32ErrorReturn;
    tFwpWriteByte    *oFwpWriteByte;

    ui32ErrorReturn  = FAPI_STATUS_SUCCESS;
    oFwpWriteByte = FWPWRITE_BYTE_ADDRESS;

    //
    // Check the arguments.
    //
    ASSERT((ui32StartAddress + ui8NoOfBytes) <= (FLASHMEM_BASE + FlashSizeGet()));

    //
    // Trim flash module for program/erase operation.
    //
    TrimForWrite();

    //
    // Enable sectors for programming.
    //
    EnableSectorsForWrite();

    //
    // Find flash bank width in number of bytes.
    //
    ui32BankWidth = (((HWREG(FLASH_BASE + FLASH_O_FCFG_BANK) &
                       FLASH_FCFG_BANK_MAIN_BANK_WIDTH_M) >>
                      FLASH_FCFG_BANK_MAIN_BANK_WIDTH_S) >> 3);

    //
    // Setup the start position within the write data registers.
    //
    ui32StartIndex = ui32StartAddress & (ui32BankWidth - 1);

    //
    // Check to see if there is more data in the buffer than the register. 
    // width.
    //
    if((ui8NoOfBytes == 0) || ((ui32StartIndex + ui8NoOfBytes) > ui32BankWidth))
    {
        ui32ErrorReturn = FAPI_STATUS_INCORRECT_DATABUFFER_LENGTH;
    }

    if(ui32ErrorReturn == FAPI_STATUS_SUCCESS)
    {
        //
        // Clear the Status register.
        //
        IssueFsmCommand(FAPI_CLEAR_STATUS);

        //
        // Write address to FADDR register.
        //
        HWREG(FLASH_BASE + FLASH_O_FADDR) = ui32StartAddress + ADDR_OFFSET;

        //
        // Setup the stop position within the write data registers.
        //
        ui32StopIndex  = ui32StartIndex + (uint32_t)(ui8NoOfBytes - 1);

        //
        // Write each byte to the FWPWrite registers.
        //
        for(ui32Index = ui32StartIndex; ui32Index <= ui32StopIndex; ui32Index++)
        {
            oFwpWriteByte[ui32Index] = *(pui8DataBuffer++);
        }

        //
        // Issue the Program command to the FSM.
        //
        IssueFsmCommand(FAPI_PROGRAM_DATA);
    }

    //
    // Return the function status.
    //
    return(ui32ErrorReturn);
}

//*****************************************************************************
//
//! Reads efuse data from specified row
//
//*****************************************************************************
bool
FlashEfuseReadRow(uint32_t *pui32EfuseData, uint32_t ui32RowAddress)
{
    bool bStatus;

    //
    // Set timing for EFUSE read operations.
    //
    HWREG(FLASH_BASE + FLASH_O_EFUSEREAD) |= ((5 << FLASH_EFUSEREAD_READCLOCK_S) &
            FLASH_EFUSEREAD_READCLOCK_M);

    //
    // Clear status register.
    //
    HWREG(FLASH_BASE + FLASH_O_EFUSEERROR) = 0;

    //
    // Select the FuseROM block 0.
    //
    HWREG(FLASH_BASE + FLASH_O_EFUSEADDR) = 0x00000000;

    //
    // Start the read operation.
    //
    HWREG(FLASH_BASE + FLASH_O_EFUSE) =
        (DUMPWORD_INSTR << FLASH_EFUSE_INSTRUCTION_S) |
        (ui32RowAddress & FLASH_EFUSE_DUMPWORD_M);

    //
    // Wait for operation to finish.
    //
    while(!(HWREG(FLASH_BASE + FLASH_O_EFUSEERROR) & FLASH_EFUSEERROR_DONE))
    {
    }

    //
    // Check if error reported.
    //
    if(HWREG(FLASH_BASE + FLASH_O_EFUSEERROR) & FLASH_EFUSEERROR_CODE_M)
    {
        //
        // Set error status.
        //
        bStatus = 1;

        //
        // Clear data.
        //
        *pui32EfuseData = 0;
    }
    else
    {
        //
        // Set ok status.
        //
        bStatus = 0;

        //
        // No error. Get data from data register.
        //
        *pui32EfuseData = HWREG(FLASH_BASE + FLASH_O_DATALOWER);
    }

    //
    // Return the data.
    //
    return(bStatus);
}


//*****************************************************************************
//
//! Disables all sectors for erase and programming on the active bank
//
//*****************************************************************************
void
FlashDisableSectorsForWrite(void)
{
    //
    // Check configured power mode.
    //
    if(HWREG(FLASH_BASE + FLASH_O_FPAC1) & FLASH_FPAC1_PUMPPWR)
    {
        // Power mode is configured to FLASH_PWR_ACTIVE_MODE. Set idle
        // reading power reduction mode as specified by factory configuration.
        IdleReadingPwrModeSet(CONFIGURED_MODE);
    }

    //
    // Disable Level 1 Protection.
    //
    HWREG(FLASH_BASE + FLASH_O_FBPROT) = FLASH_FBPROT_PROTL1DIS;

    //
    // Disable all sectors for erase and programming.
    //
    HWREG(FLASH_BASE + FLASH_O_FBSE) = 0x0000;

    //
    // Enable Level 1 Protection.
    //
    HWREG(FLASH_BASE + FLASH_O_FBPROT) = 0;

    //
    // Protect sectors from sector erase.
    //
    HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_ENABLE;
    HWREG(FLASH_BASE + FLASH_O_FSM_SECTOR1) = 0xFFFFFFFF;
    HWREG(FLASH_BASE + FLASH_O_FSM_SECTOR2) = 0xFFFFFFFF;
    HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_DISABLE;
}

//*****************************************************************************
//
//! \internal
//! Starts erasing a flash sector and returns.
//!
//! \param ui32SectorAddress is the start address of the sector to erase.
//!
//! This function issues a erase command to the Flash State Machine. The
//! function does not wait for the erase command to finish. It is up to the
//! caller of this function to check when the erase command is finished and the
//! status of the command. The caller can choose between polling and interrupt
//! in order to detect the termination of the erase command. Interrupt can be
//! used by enabling the \b FLASH_INT_FSM_DONE interrupt. The function
//! FlashCheckFsmForReady() can be called for checking if the erase command
//! is finished. After the erase command has finished the function
//! FlashCheckFsmForError() can be called for checking if any errors were
//! detected during the erase command.
//! After all desired sectors have been erased the function
//! FlashDisableSectorsForWrite() should be called in order to protect
//! sectors from unintended program and erase operation due to accidental
//! register writes.
//!
//! \return Returns None
//
//*****************************************************************************
static void
SectorEraseNowait(uint32_t ui32SectorAddress)
{
    uint32_t ui32SectorBit;
    uint32_t ui32SectorNumber;

    //
    // Check the arguments.
    //
    ASSERT(ui32SectorAddress <= (FLASHMEM_BASE + FlashSizeGet() -
                                 FlashSectorSizeGet()));
    ASSERT((ui32SectorAddress & (FlashSectorSizeGet() - 1)) == 00);

    //
    // Trim flash module for program/erase operation.
    //
    TrimForWrite();

    //
    // Enable all sectors for erase.
    //
    EnableSectorsForWrite();

    //
    // Clear the Status register.
    //
    IssueFsmCommand(FAPI_CLEAR_STATUS);

    //
    // Unprotect sector to be erased.
    //
    ui32SectorNumber = (ui32SectorAddress - FLASHMEM_BASE) / FlashSectorSizeGet();
    ui32SectorBit = 1 << (ui32SectorNumber & 0x1F);
    HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_ENABLE;
    if(ui32SectorNumber < 0x20)
    {
        HWREG(FLASH_BASE + FLASH_O_FSM_SECTOR1) = ~ui32SectorBit;
    }
    else
    {
        HWREG(FLASH_BASE + FLASH_O_FSM_SECTOR2) = ~ui32SectorBit;
    }
    HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_DISABLE;

    //
    // Write the address to the FSM.
    //
    HWREG(FLASH_BASE + FLASH_O_FADDR) = ui32SectorAddress + ADDR_OFFSET;

    //
    // Issue the sector erase command to the FSM.
    //
    IssueFsmCommand(FAPI_ERASE_SECTOR);
}

//*****************************************************************************
//
//! \internal
//! Issues a command to the Flash State Machine.
//!
//! \param eCommand specifies the FSM command.
//!
//! Issues a command to the Flash State Machine.
//!
//! \return None
//
//*****************************************************************************
static void
IssueFsmCommand(tFlashStateCommandsType eCommand)
{
    //
    // Check the arguments.
    //
    ASSERT(
        eCommand == FAPI_ERASE_SECTOR    || eCommand == FAPI_ERASE_BANK ||
        eCommand == FAPI_VALIDATE_SECTOR || eCommand == FAPI_CLEAR_STATUS ||
        eCommand == FAPI_PROGRAM_RESUME  || eCommand == FAPI_ERASE_RESUME ||
        eCommand == FAPI_CLEAR_MORE      || eCommand == FAPI_PROGRAM_SECTOR ||
        eCommand == FAPI_PROGRAM_DATA    || eCommand == FAPI_ERASE_OTP);

    //
    // Enable write to FSM register.
    //
    HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_ENABLE;

    //
    // Issue FSM command.
    //
    HWREG(FLASH_BASE + FLASH_O_FSM_CMD) = eCommand;

    //
    // Start command execute.
    //
    HWREG(FLASH_BASE + FLASH_O_FSM_EXECUTE) = FLASH_CMD_EXEC;

    //
    // Disable write to FSM register.
    //
    HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_DISABLE;
}

//*****************************************************************************
//
//! \internal
//! Enables all sectors for erase and programming on the active bank.
//!
//! This function disables the idle reading power reduction mode, selects the
//! flash bank and enables all sectors for erase and programming on the active
//! bank.
//! Sectores may be protected from programming depending on the value of the
//! FLASH_O_FSM_BSLPx registers.
//! Sectores may be protected from erase depending on the value of the
//! FLASH_O_FSM_BSLEx registers. Additional sector erase protection is set by
//! the FLASH_O_SECTOR1 register.
//!
//! \return None
//
//*****************************************************************************
static void
EnableSectorsForWrite(void)
{
    //
    // Disable Idle Reading Power Reduction. Required due to timing
    // restrictions in the sampleand hold functionality.
    //
    IdleReadingPwrModeSet(DISABLED_MODE);

    //
    // Select flash bank.
    //
    HWREG(FLASH_BASE + FLASH_O_FMAC) = 0x00;

    //
    // Disable Level 1 Protection.
    //
    HWREG(FLASH_BASE + FLASH_O_FBPROT) = FLASH_FBPROT_PROTL1DIS;

    //
    // Enable all sectors for erase and programming.
    //
    HWREG(FLASH_BASE + FLASH_O_FBSE) = 0xFFFF;

    //
    // Enable Level 1 Protection
    //
    HWREG(FLASH_BASE + FLASH_O_FBPROT) = 0;
}

//*****************************************************************************
//
//! \internal
//! Sets the flash idle reading power reduction mode.
//!
//! \param ui32Mode is the requested idle reading power reduction mode.
//!
//! This function sets the flash idle reading power reduction mode to either
//! DISABLED_MODE or CONFIGURED_MODE. It is required to set the DISABLED_MODE
//! whenever a flash program or erase operation is to be executed due to flash
//! HW restrictions. The CONFIGURED_MODE will set the idle reading power
//! reduction mode as specified by factory configuration.
//! If the mode setting forces the the sample and hold functionality in read
//! idle state to be disabled, it must be asured this functionality becomes
//! stable before further flash operations are enabled.
//!
//! \return None
//
//*****************************************************************************
static void
IdleReadingPwrModeSet(uint32_t ui32Mode)
{
    uint32_t ui32Value;

    if(ui32Mode == CONFIGURED_MODE)
    {
        //
        // Set idle reading power reduction mode as specified by factory
        // configuration.
        //
        ui32Value = HWREG(FLASH_BASE + FLASH_O_CFG);
        HWREG(FLASH_BASE + FLASH_O_CFG) =
            (ui32Value & ~(FLASH_CFG_DIS_STANDBY |
                           FLASH_CFG_DIS_IDLE)) |
            (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_OTP_DATA2) &
             (FACTORY_CFG_FLASH_OTP_DATA2_DIS_STANDBY |
              FACTORY_CFG_FLASH_OTP_DATA2_DIS_IDLE));
    }
    else if(ui32Mode == DISABLED_MODE)
    {
        //
        // Disable idle reading power reduction mode.
        //
        HWREG(FLASH_BASE + FLASH_O_CFG) |= (FLASH_CFG_DIS_IDLE |
                                               FLASH_CFG_DIS_STANDBY);
    }

    //
    // Check if sample and hold functionality is disabled.
    //
    if(HWREG(FLASH_BASE + FLASH_O_CFG) & FLASH_CFG_DIS_IDLE)
    {
        //
        // Wait for disabled sample and hold functionality to be stable.
        //
        while(!(HWREG(FLASH_BASE + FLASH_O_STAT) & FLASH_STAT_SAMHOLD_DIS))
        {
        }
    }
}

//*****************************************************************************
//
//! \internal
//! Trims the Flash Bank and Flash Pump for program/erase functionality
//!
//! This trimming will make it possible to perform erase and program operations
//! of the flash. Trim values are loaded from factory configuration area
//! (referred to as FCGF1). The trimming done by this function is valid until
//! reset of the flash module.
//!
//! Some registers shall be written with a value that is a number of FCLK
//! cycles. The trim values controlling these registers have a value of
//! number of half us. FCLK = SysClk / ((RWAIT+1) x 2).
//! In order to calculate the register value for these registers the
//! following calculation must be done:
//!
//!                                    OtpValue                   SysClkMHz
//!                                    -------- us      OtpValue x ---------
//!                                       2                       (RWAIT+1)
//! RegValue_in_no_of_clk_cycles = ----------------- = ---------------------
//!                                       1                     4
//!                                 --------------
//!                                   SysClkMHz
//!                                  ------------
//!                                  (RWAIT+1)x 2
//!
//! This is equevivalent to:
//!
//!                                           16 x SysClkMHz
//!                                OtpValue x ---------------
//!                                              (RWAIT+1)
//! RegValue_in_no_of_clk_cycles = ----------------------------
//!                                           64
//!
//!                                                 16 x SysClkMHz
//! A scaling factor is set equal to: ui32FclkScale = --------------
//!                                                    (RWAIT+1)
//!
//! which gives:
//!                                 OtpValue x ui32FclkScale
//! RegValue_in_no_of_clk_cycles = ------------------------
//!                                          64
//!
//! \return None.
//
//*****************************************************************************
static void
TrimForWrite(void)
{
    uint32_t ui32Value;
    uint32_t ui32FclkScale;
    uint32_t ui32RWait;

    //
    // Return if flash is already trimmed for program/erase operations.
    //
    if(HWREG(FLASH_BASE + FLASH_O_FWFLAG) & FW_WRT_TRIMMED)
    {
        return;
    }

    //***********************************************************************//
    //                                                                       //
    //                 Configure the FSM registers                           //
    //                                                                       //
    //***********************************************************************//

    //
    // Enable access to the FSM registers.
    //
    HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_ENABLE;

    //
    // Determine the scaling value to be used on timing related trim values.
    // The scaling value is based on the flash module clock frequency and RWAIT
    //
    ui32RWait     = (HWREG(FLASH_BASE + FLASH_O_FRDCTL) &
                     FLASH_FRDCTL_RWAIT_M) >> FLASH_FRDCTL_RWAIT_S;
    ui32FclkScale = (16 * FLASH_MODULE_CLK_FREQ) / (ui32RWait + 1);

    //
    // Configure Program puls width bits 15:0.
    // (FCFG1 offset 0x188 bits 15:0).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_PROG_EP) &
         FACTORY_CFG_FLASH_PROG_EP_PROGRAM_PW_M) >>
        FACTORY_CFG_FLASH_PROG_EP_PROGRAM_PW_S;

    ui32Value = ScaleCycleValues(ui32Value, ui32FclkScale);

    HWREG(FLASH_BASE + FLASH_O_FSM_PRG_PW) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_PRG_PW) &
         ~FLASH_FSM_PRG_PW_PROG_PUL_WIDTH_M) |
        ((ui32Value << FLASH_FSM_PRG_PW_PROG_PUL_WIDTH_S) &
         FLASH_FSM_PRG_PW_PROG_PUL_WIDTH_M);

    //
    // Configure Erase puls width bits 31:0.
    // (FCFG1 offset 0x18C bits 31:0).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_ERA_PW) &
         FACTORY_CFG_FLASH_ERA_PW_ERASE_PW_M) >>
        FACTORY_CFG_FLASH_ERA_PW_ERASE_PW_S;

    ui32Value = ScaleCycleValues(ui32Value, ui32FclkScale);

    HWREG(FLASH_BASE + FLASH_O_FSM_ERA_PW) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_ERA_PW) &
         ~FLASH_FSM_ERA_PW_FSM_ERA_PW_M) |
        ((ui32Value << FLASH_FSM_ERA_PW_FSM_ERA_PW_S) &
         FLASH_FSM_ERA_PW_FSM_ERA_PW_M);


    //
    // Configure no of flash clock cycles from EXECUTEZ going low to the the
    // verify data can be read in the program verify mode bits 7:0.
    // (FCFG1 offset 0x174 bits 23:16).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_C_E_P_R) &
         FACTORY_CFG_FLASH_C_E_P_R_PV_ACCESS_M) >>
        FACTORY_CFG_FLASH_C_E_P_R_PV_ACCESS_S;

    ui32Value = ScaleCycleValues(ui32Value, ui32FclkScale);

    HWREG(FLASH_BASE + FLASH_O_FSM_EX_VAL) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_EX_VAL) &
         ~FLASH_FSM_EX_VAL_EXE_VALD_M) |
        ((ui32Value << FLASH_FSM_EX_VAL_EXE_VALD_S) &
         FLASH_FSM_EX_VAL_EXE_VALD_M);

    //
    // Configure the number of flash clocks from the start of the Read mode at
    // the end of the operations until the FSM clears the BUSY bit in FMSTAT.
    // (FCFG1 offset 0x178 bits 23:16).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_P_R_PV) &
         FACTORY_CFG_FLASH_P_R_PV_RH_M) >>
        FACTORY_CFG_FLASH_P_R_PV_RH_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_RD_H) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_RD_H) &
         ~FLASH_FSM_RD_H_RD_H_M) |
        ((ui32Value << FLASH_FSM_RD_H_RD_H_S) &
         FLASH_FSM_RD_H_RD_H_M);

    //
    // Configure Program hold time
    // (FCFG1 offset 0x178 bits 31:24).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_P_R_PV) &
         FACTORY_CFG_FLASH_P_R_PV_PH_M) >>
        FACTORY_CFG_FLASH_P_R_PV_PH_S;

    ui32Value = ScaleCycleValues(ui32Value, ui32FclkScale);

    HWREG(FLASH_BASE + FLASH_O_FSM_P_OH) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_P_OH) &
         ~FLASH_FSM_P_OH_PGM_OH_M) |
        ((ui32Value << FLASH_FSM_P_OH_PGM_OH_S) &
         FLASH_FSM_P_OH_PGM_OH_M);

    //
    // Configure Erase hold time
    // (FCFG1 offset 0x17C bits 31:24).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_EH_SEQ) &
         FACTORY_CFG_FLASH_EH_SEQ_EH_M) >>
        FACTORY_CFG_FLASH_EH_SEQ_EH_S;

    ui32Value = ScaleCycleValues(ui32Value, ui32FclkScale);

    HWREG(FLASH_BASE + FLASH_O_FSM_ERA_OH) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_ERA_OH) &
         ~FLASH_FSM_ERA_OH_ERA_OH_M) |
        ((ui32Value << FLASH_FSM_ERA_OH_ERA_OH_S) &
         FLASH_FSM_ERA_OH_ERA_OH_M);

    //
    // Configure Program verify row switch time
    // (FCFG1 offset0x178 bits 15:8).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_P_R_PV) &
         FACTORY_CFG_FLASH_P_R_PV_PVH_M) >>
        FACTORY_CFG_FLASH_P_R_PV_PVH_S;

    ui32Value = ScaleCycleValues(ui32Value, ui32FclkScale);

    HWREG(FLASH_BASE + FLASH_O_FSM_PE_VH) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_PE_VH) &
         ~FLASH_FSM_PE_VH_PGM_VH_M) |
        ((ui32Value << FLASH_FSM_PE_VH_PGM_VH_S) &
         FLASH_FSM_PE_VH_PGM_VH_M);

    //
    // Configure Program Operation Setup time
    // (FCFG1 offset 0x170 bits 31:24).
    //
    ui32Value = (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_E_P) &
                 FACTORY_CFG_FLASH_E_P_PSU_M) >>
                FACTORY_CFG_FLASH_E_P_PSU_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_PE_OSU) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_PE_OSU) &
         ~FLASH_FSM_PE_OSU_PGM_OSU_M) |
        ((ui32Value << FLASH_FSM_PE_OSU_PGM_OSU_S) &
         FLASH_FSM_PE_OSU_PGM_OSU_M);

    //
    // Configure Erase Operation Setup time
    // (FCGF1 offset 0x170 bits 23:16).
    //
    ui32Value = (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_E_P) &
                 FACTORY_CFG_FLASH_E_P_ESU_M) >>
                FACTORY_CFG_FLASH_E_P_ESU_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_PE_OSU) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_PE_OSU) &
         ~FLASH_FSM_PE_OSU_ERA_OSU_M) |
        ((ui32Value << FLASH_FSM_PE_OSU_ERA_OSU_S) &
         FLASH_FSM_PE_OSU_ERA_OSU_M);

    //
    // Confgure Program Verify Setup time
    // (FCFG1 offset 0x170 bits 15:8).
    //
    ui32Value = (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_E_P) &
                 FACTORY_CFG_FLASH_E_P_PVSU_M) >>
                FACTORY_CFG_FLASH_E_P_PVSU_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_PE_VSU) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_PE_VSU) &
         ~FLASH_FSM_PE_VSU_PGM_VSU_M) |
        ((ui32Value << FLASH_FSM_PE_VSU_PGM_VSU_S) &
         FLASH_FSM_PE_VSU_PGM_VSU_M);

    //
    // Configure Erase Verify Setup time
    // (FCFG1 offset 0x170 bits 7:0).
    //
    ui32Value = (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_E_P) &
                 FACTORY_CFG_FLASH_E_P_EVSU_M) >>
                FACTORY_CFG_FLASH_E_P_EVSU_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_PE_VSU) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_PE_VSU) &
         ~FLASH_FSM_PE_VSU_ERA_VSU_M) |
        ((ui32Value << FLASH_FSM_PE_VSU_ERA_VSU_S) &
         FLASH_FSM_PE_VSU_ERA_VSU_M);

    //
    // Configure Addr to EXECUTEZ low setup time
    // (FCFG1 offset 0x174 bits 15:12).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_C_E_P_R) &
         FACTORY_CFG_FLASH_C_E_P_R_A_EXEZ_SETUP_M) >>
        FACTORY_CFG_FLASH_C_E_P_R_A_EXEZ_SETUP_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_CMP_VSU) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_CMP_VSU) &
         ~FLASH_FSM_CMP_VSU_ADD_EXZ_M) |
        ((ui32Value << FLASH_FSM_CMP_VSU_ADD_EXZ_S) &
         FLASH_FSM_CMP_VSU_ADD_EXZ_M);

    //
    // Configure Voltage Status Count
    // (FCFG1 offset 0x17C bits 15:12).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_EH_SEQ) &
         FACTORY_CFG_FLASH_EH_SEQ_VSTAT_M) >>
        FACTORY_CFG_FLASH_EH_SEQ_VSTAT_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_VSTAT) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_VSTAT) &
         ~FLASH_FSM_VSTAT_VSTAT_CNT_M) |
        ((ui32Value << FLASH_FSM_VSTAT_VSTAT_CNT_S) &
         FLASH_FSM_VSTAT_VSTAT_CNT_M);

    //
    // Configure Repeat Verify action setup
    // (FCFG1 offset 0x174 bits 31:24).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_C_E_P_R) &
         FACTORY_CFG_FLASH_C_E_P_R_RVSU_M) >>
        FACTORY_CFG_FLASH_C_E_P_R_RVSU_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_EX_VAL) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_EX_VAL) &
         ~FLASH_FSM_EX_VAL_REP_VSU_M) |
        ((ui32Value << FLASH_FSM_EX_VAL_REP_VSU_S) &
         FLASH_FSM_EX_VAL_REP_VSU_M);

    //
    // Configure Maximum Programming Pulses
    // (FCFG1 offset 0x184 bits 15:0).
    //
    ui32Value = (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_PP) &
                 FACTORY_CFG_FLASH_PP_MAX_PP_M) >>
                FACTORY_CFG_FLASH_PP_MAX_PP_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_PRG_PUL) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_PRG_PUL) &
         ~FLASH_FSM_PRG_PUL_MAX_PRG_PUL_M) |
        ((ui32Value << FLASH_FSM_PRG_PUL_MAX_PRG_PUL_S) &
         FLASH_FSM_PRG_PUL_MAX_PRG_PUL_M);

    //
    // Configure Beginning level for VHVCT used during erase modes
    // (FCFG1 offset 0x180 bits 31:16).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_VHV_E) &
         FACTORY_CFG_FLASH_VHV_E_VHV_E_START_M) >>
        FACTORY_CFG_FLASH_VHV_E_VHV_E_START_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_PRG_PUL) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_PRG_PUL) &
         ~FLASH_FSM_PRG_PUL_BEG_EC_LEVEL_M) |
        ((ui32Value << FLASH_FSM_PRG_PUL_BEG_EC_LEVEL_S) &
         FLASH_FSM_PRG_PUL_BEG_EC_LEVEL_M);

    //
    // Configure Maximum EC Level
    // (FCFG1 offset 0x2B0 bits 21:18).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_OTP_DATA3) &
         FACTORY_CFG_FLASH_OTP_DATA3_MAX_EC_LEVEL_M) >>
        FACTORY_CFG_FLASH_OTP_DATA3_MAX_EC_LEVEL_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_ERA_PUL) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_ERA_PUL) &
         ~FLASH_FSM_ERA_PUL_MAX_EC_LEVEL_M) |
        ((ui32Value << FLASH_FSM_ERA_PUL_MAX_EC_LEVEL_S) &
         FLASH_FSM_ERA_PUL_MAX_EC_LEVEL_M);

    //
    // Configure Maximum Erase Pulses
    // (FCFG1 offset 0x188 bits 31:16).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_PROG_EP) &
         FACTORY_CFG_FLASH_PROG_EP_MAX_EP_M) >>
        FACTORY_CFG_FLASH_PROG_EP_MAX_EP_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_ERA_PUL) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_ERA_PUL) &
         ~FLASH_FSM_ERA_PUL_MAX_ERA_PUL_M) |
        ((ui32Value << FLASH_FSM_ERA_PUL_MAX_ERA_PUL_S) &
         FLASH_FSM_ERA_PUL_MAX_ERA_PUL_M);

    //
    // Configure the VHVCT Step Size. This is the number of erase pulses that
    // must be completed for each level before the FSM increments the
    // CUR_EC_LEVEL to the next higher level. Actual erase pulses per level
    // equals (EC_STEP_SIZE +1). The stepping is only needed for the VHVCT
    // voltage.
    // (FCFG1 offset 0x2B0 bits 31:23).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_OTP_DATA3) &
         FACTORY_CFG_FLASH_OTP_DATA3_EC_STEP_SIZE_M) >>
        FACTORY_CFG_FLASH_OTP_DATA3_EC_STEP_SIZE_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_STEP_SIZE) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_STEP_SIZE) &
         ~FLASH_FSM_STEP_SIZE_EC_STEP_SIZE_M) |
        ((ui32Value << FLASH_FSM_STEP_SIZE_EC_STEP_SIZE_S) &
         FLASH_FSM_STEP_SIZE_EC_STEP_SIZE_M);

    //
    // Configure the hight of each EC step. This is the number of counts that
    // the CUR_EC_LEVEL will increment when going to a new level. Actual count
    // size equals (EC_STEP_HEIGHT + 1). The stepping applies only to the VHVCT
    // voltage.
    // The read trim value is decremented by 1 before written to the register
    // since actual counts equals (register value + 1).
    // (FCFG1 offset 0x180 bits 15:0).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_VHV_E) &
         FACTORY_CFG_FLASH_VHV_E_VHV_E_STEP_HIGHT_M) >>
        FACTORY_CFG_FLASH_VHV_E_VHV_E_STEP_HIGHT_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_EC_STEP_HEIGHT) = ((ui32Value - 1) &
            FLASH_FSM_EC_STEP_HEIGHT_EC_STEP_HEIGHT_M);

    //
    // Configure Precondition used in erase operations
    // (FCFG1 offset 0x2B0 bit 22).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_OTP_DATA3) &
         FACTORY_CFG_FLASH_OTP_DATA3_DO_PRECOND_M) >>
        FACTORY_CFG_FLASH_OTP_DATA3_DO_PRECOND_S;

    HWREG(FLASH_BASE + FLASH_O_FSM_ST_MACHINE) =
        (HWREG(FLASH_BASE + FLASH_O_FSM_ST_MACHINE) &
         ~FLASH_FSM_ST_MACHINE_DO_PRECOND_M) |
        ((ui32Value << FLASH_FSM_ST_MACHINE_DO_PRECOND_S) &
         FLASH_FSM_ST_MACHINE_DO_PRECOND_M);

    //
    // Enable the recommended Good Time function.
    //
    HWREG(FLASH_BASE + FLASH_O_FSM_ST_MACHINE) |=
        FLASH_FSM_ST_MACHINE_ONE_TIME_GOOD;

    //
    // Disable write access to FSM registers.
    //
    HWREG(FLASH_BASE + FLASH_O_FSM_WR_ENA) = FSM_REG_WRT_DISABLE;


    //***********************************************************************//
    //                                                                       //
    //                 Configure the voltage registers                       //
    //                                                                       //
    //***********************************************************************//

    //
    // Unlock voltage registers (0x2080 - 0x2098).
    //
    HWREG(FLASH_BASE + FLASH_O_FLOCK) = 0xAAAA;

    //
    // Configure voltage level for the specified pump voltage of high
    // voltage supply input during erase operation and the TRIM13_E
    // (FCFG1 offset 0x190 bits 15:0).
    //
    ui32Value = (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_VHV) &
                 FACTORY_CFG_FLASH_VHV_VHV_E_M) >>
                FACTORY_CFG_FLASH_VHV_VHV_E_S;

    HWREG(FLASH_BASE + FLASH_O_FVHVCT1) =
        (HWREG(FLASH_BASE + FLASH_O_FVHVCT1) &
         ~(FLASH_FVHVCT1_TRIM13_E_M | FLASH_FVHVCT1_VHVCT_E_M)) |
        ((ui32Value << FLASH_FVHVCT1_VHVCT_E_S) &
         (FLASH_FVHVCT1_TRIM13_E_M | FLASH_FVHVCT1_VHVCT_E_M));

    //
    // Configure voltage level for the specified pump voltage of high voltage
    // supply input during program verify operation and the TRIM13_PV
    // (OTP offset 0x194 bits 31:16).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_VHV_PV) &
         FACTORY_CFG_FLASH_VHV_PV_VHV_PV_M) >>
        FACTORY_CFG_FLASH_VHV_PV_VHV_PV_S;

    HWREG(FLASH_BASE + FLASH_O_FVHVCT1) =
        (HWREG(FLASH_BASE + FLASH_O_FVHVCT1) &
         ~(FLASH_FVHVCT1_TRIM13_PV_M | FLASH_FVHVCT1_VHVCT_PV_M)) |
        ((ui32Value << FLASH_FVHVCT1_VHVCT_PV_S) &
         (FLASH_FVHVCT1_TRIM13_PV_M | FLASH_FVHVCT1_VHVCT_PV_M));

    //
    // Configure voltage level for the specified pump voltage of high voltage
    // supply input during program operation and TRIM13_P
    // (FCFG1 offset 0x190 bits 31:16).
    //
    ui32Value = (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_VHV) &
                 FACTORY_CFG_FLASH_VHV_VHV_P_M) >>
                FACTORY_CFG_FLASH_VHV_VHV_P_S;

    HWREG(FLASH_BASE + FLASH_O_FVHVCT2) =
        (HWREG(FLASH_BASE + FLASH_O_FVHVCT2) &
         ~(FLASH_FVHVCT2_TRIM13_P_M | FLASH_FVHVCT2_VHVCT_P_M)) |
        ((ui32Value << FLASH_FVHVCT2_VHVCT_P_S) &
         (FLASH_FVHVCT2_TRIM13_P_M | FLASH_FVHVCT2_VHVCT_P_M));

    //
    // Configure voltage level for the specified pump voltage of wordline power
    // supply for read mode
    // (FCFG1 offset 0x198 Bits 15:8).
    //
    ui32Value = (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_V) &
                 FACTORY_CFG_FLASH_V_V_READ_M) >>
                FACTORY_CFG_FLASH_V_V_READ_S;

    HWREG(FLASH_BASE + FLASH_O_FVREADCT) =
        (HWREG(FLASH_BASE + FLASH_O_FVREADCT) &
         ~FLASH_FVREADCT_VREADCT_M) |
        ((ui32Value << FLASH_FVREADCT_VREADCT_S) &
         FLASH_FVREADCT_VREADCT_M);

    //
    // Configure the voltage level for the VCG 2.5 CT pump voltage
    // (FCFG1 offset 0x194 bits 15:8).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_VHV_PV) &
         FACTORY_CFG_FLASH_VHV_PV_VCG2P5_M) >>
        FACTORY_CFG_FLASH_VHV_PV_VCG2P5_S;

    HWREG(FLASH_BASE + FLASH_O_FVNVCT) =
        (HWREG(FLASH_BASE + FLASH_O_FVNVCT) &
         ~FLASH_FVNVCT_VCG2P5CT_M) |
        ((ui32Value << FLASH_FVNVCT_VCG2P5CT_S) &
         FLASH_FVNVCT_VCG2P5CT_M);

    //
    // Configure the voltage level for the specified pump voltage of high
    // current power input during program operation
    // (FCFG1 offset 0x198 bits 31:24).
    //
    ui32Value = (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_V) &
                 FACTORY_CFG_FLASH_V_VSL_P_M) >>
                FACTORY_CFG_FLASH_V_VSL_P_S;

    HWREG(FLASH_BASE + FLASH_O_FVSLP) =
        (HWREG(FLASH_BASE + FLASH_O_FVSLP) &
         ~FLASH_FVSLP_VSL_P_M) |
        ((ui32Value << FLASH_FVSLP_VSL_P_S) &
         FLASH_FVSLP_VSL_P_M);

    //
    // Configure the voltage level for the specified pump voltage of wordline
    // power supply during programming operations
    // (OTP offset 0x198 bits 23:16).
    //
    ui32Value = (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_V) &
                 FACTORY_CFG_FLASH_V_VWL_P_M) >>
                FACTORY_CFG_FLASH_V_VWL_P_S;

    HWREG(FLASH_BASE + FLASH_O_FVWLCT) =
        (HWREG(FLASH_BASE + FLASH_O_FVWLCT) &
         ~FLASH_FVWLCT_VWLCT_P_M) |
        ((ui32Value << FLASH_FVWLCT_VWLCT_P_S) &
         FLASH_FVWLCT_VWLCT_P_M);

    //
    // Configure the pump's TRIM_1P7 port pins.
    // (FCFG1 offset 0x2B0 bits 17:16).
    //
    ui32Value =
        (HWREG(FLASH_CFG_BASE + FCFG1_OFFSET + FACTORY_CFG_O_FLASH_OTP_DATA3) &
         FACTORY_CFG_FLASH_OTP_DATA3_TRIM_1P7_M) >>
        FACTORY_CFG_FLASH_OTP_DATA3_TRIM_1P7_S;

    HWREG(FLASH_BASE + FLASH_O_FSEQPMP) =
        (HWREG(FLASH_BASE + FLASH_O_FSEQPMP) &
         ~FLASH_FSEQPMP_TRIM_1P7_M) |
        ((ui32Value << FLASH_FSEQPMP_TRIM_1P7_S) &
         FLASH_FSEQPMP_TRIM_1P7_M);

    //
    // Lock the voltage registers.
    //
    HWREG(FLASH_BASE + FLASH_O_FLOCK) = 0x55AA;

    //
    // Set trimmed flag.
    //
    HWREG(FLASH_BASE + FLASH_O_FWLOCK) = 5;
    HWREG(FLASH_BASE + FLASH_O_FWFLAG) |= FW_WRT_TRIMMED;
    HWREG(FLASH_BASE + FLASH_O_FWLOCK) = 0;
}

//*****************************************************************************
//
//! \internal
//! Used to scale the TI OTP values based on the FClk scaling value.
//!
//! \param ui32SpecifiedTiming
//! \param ui32ScaleValue
//!
//! Used to scale the TI OTP values based on the FClk scaling value.
//!
//! \return Returns the scaled value
//
//*****************************************************************************
static uint32_t
ScaleCycleValues(uint32_t ui32SpecifiedTiming, uint32_t ui32ScaleValue)
{
    return((ui32SpecifiedTiming * ui32ScaleValue) >> 6);
}
