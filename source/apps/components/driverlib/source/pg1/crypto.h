/******************************************************************************
*  Filename:       crypto.h
*  Revised:        $Date: 2014-03-04 15:36:43 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40299 $
*
*  Description:    AES header file.
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
//! \addtogroup crypto_api
//! @{
//
//*****************************************************************************

#ifndef __CRYPTO_H__
#define __CRYPTO_H__

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
#include "hw_crypto.h"
#include "debug.h"
#include "interrupt.h"
#include "cpu.h"

//*****************************************************************************
//
// Length of AES Electronic Code Book (ECB) block in bytes
//
//*****************************************************************************
#define AES_ECB_LENGTH  16

//*****************************************************************************
//
// Values that can be passed to CryptoIntEnable, CryptoIntDisable, and CryptoIntClear
// as the ui32IntFlags parameter, and returned from CryptoIntStatus.
//
//*****************************************************************************
#define CRYPTO_DMA_IN_DONE      0x00000002  // DMA done interrupt mask
#define CRYPTO_RESULT_RDY       0x00000001  // Result ready interrupt mask
#define CRYPTO_DMA_BUS_ERR      0x80000000  // DMA Bus error
#define CRYPTO_KEY_ST_WR_ERR    0x40000000  // Key Store Write failed
#define CRYPTO_KEY_ST_RD_ERR    0x20000000  // Key Store Read failed

#define CRYPTO_INT_LEVEL        0x00000001  // Crypto Level interrupt enabled
#define CRYPTO_INT_PULSE        0x00000000  // Crypto pulse interrupt enabled

#define CRYPTO_DMA_CHAN0        0x00000001  // Crypto DMA Channel 0
#define CRYPTO_DMA_CHAN1        0x00000002  // Crypto DMA Channel 1

#define CRYPTO_AES128_ENCRYPT   0x0000000C  //
#define CRYPTO_AES128_DECRYPT   0x00000008  //

#define CRYPTO_DMA_READY        0x00000000  // DMA ready
#define CRYPTO_DMA_BSY          0x00000003  // DMA busy
#define CRYPTO_DMA_BUS_ERROR    0x00020000  // DMA encountered bus error

//*****************************************************************************
//
//  General constants
//
//*****************************************************************************

// AES module return codes
#define AES_SUCCESS                      0
#define AES_KEYSTORE_READ_ERROR          1
#define AES_KEYSTORE_WRITE_ERROR         2
#define AES_DMA_BUS_ERROR                3
#define CCM_AUTHENTICATION_FAILED        4
#define AES_ECB_TEST_ERROR               8
#define AES_NULL_ERROR                   9
#define AES_CCM_TEST_ERROR              10
#define AES_DMA_BSY                     11

// Key store module defines
#define STATE_BLENGTH                   16  // Number of bytes in State
#define KEY_BLENGTH                     16  // Number of bytes in Key
#define KEY_EXP_LENGTH                 176  // Nb * (Nr+1) * 4

#define KEY_STORE_SIZE_128      0x00000001
#define KEY_STORE_SIZE_192      0x00000002
#define KEY_STORE_SIZE_256      0x00000003
#define KEY_STORE_SIZE_BITS     0x00000003

//*****************************************************************************
//
// For 128 bit key all 8 Key Area locations from 0 to 8 are valid
// However for 192 bit and 256 bit keys, only even Key Areas 0, 2, 4, 6
// are valid. This is passes as a parameter to AesECBStart()
//
//*****************************************************************************
#define CRYPTO_KEY_AREA_0       0
#define CRYPTO_KEY_AREA_1       1
#define CRYPTO_KEY_AREA_2       2
#define CRYPTO_KEY_AREA_3       3
#define CRYPTO_KEY_AREA_4       4
#define CRYPTO_KEY_AREA_5       5
#define CRYPTO_KEY_AREA_6       6
#define CRYPTO_KEY_AREA_7       7

//*****************************************************************************
//
// Defines for the current AES operation
//
//*****************************************************************************
#define CRYPTO_AES_NONE         0
#define CRYPTO_AES_KEYL0AD      1
#define CRYPTO_AES_ECB          2
#define CRYPTO_AES_CCM          3
#define CRYPTO_AES_RNG          4

//*****************************************************************************
//
// Defines for the AES-CTR mode counter width
//
//*****************************************************************************
#define CRYPTO_AES_CTR_32       0x0
#define CRYPTO_AES_CTR_64       0x1
#define CRYPTO_AES_CTR_96       0x2
#define CRYPTO_AES_CTR_128      0x3

//*****************************************************************************
//
// API Overview
//
//*****************************************************************************
// uint32_t CRYPTOAesLoadKey(uint32_t *pui32AesKey,
//                           uint32_t ui32KeyLocation);
// uint32_t CRYPTOAesEcb(uint32_t *pui32MsgIn, uint32_t *pui32MsgOut,
//                       uint32_t ui32KeyLocation, bool bEncrypt,
//                       bool bIntEnable);
// uint32_t CRYPTOAesEcbStatus(void);
// void CRYPTOAesEcbFinish(void);
// uint32_t CRYPTOCcmAuthEncrypt(bool bEncrypt, uint32_t ui32AuthLength,
//                               uint32_t *pui32Nonce,
//                               uint32_t *pui32PlainText,
//                               uint32_t ui32PlainTextLength,
//                               uint32_t *pui32Header,
//                               uint32_t ui32HeaderLength,
//                               uint32_t ui32KeyLocation,
//                               uint32_t ui32FieldLength,
//                               bool bIntEnable);
// uint32_t CRYPTOCcmAuthEncryptStatus(void);
// uint32_t CRYPTOCcmAuthEncryptResultGet(uint32_t ui32TagLength, uint32_t *pui32CcmTag);
// uint32_t CRYPTOCcmInvAuthDecrypt(bool bDecrypt, uint32_t ui32AuthLength,
//                           uint32_t *pui32Nonce,
//                           uint32_t *pui32CipherText,
//                           uint32_t ui32CipherTextLength,
//                           uint32_t *pui32Header,
//                           uint32_t ui32HeaderLength,
//                           uint32_t ui32KeyLocation,
//                           uint32_t ui32FieldLength,
//                           bool bIntEnable);
// uint32_t CRYPTOCcmInvAuthDecryptStatus(void);
// uint32_t CRYPTOCcmInvAuthDecryptResultGet(uint32_t ui32AuthLength,
//                                           uint32_t *pui32CipherText,
//                                           uint32_t ui32CipherTextLength,
//                                           uint32_t *pui32CcmTag);
// uint32_t CRYPTODmaStatus(void);
// void CRYPTODmaEnable(uint32_t ui32IntFlags);
// void CRYPTODmaDisable(uint32_t ui32IntFlags);
// void CRYPTOIntEnable(uint32_t ui32IntFlags);
// void CRYPTOIntDisable(uint32_t ui32IntFlags);
// void CRYPTOIntClear(uint32_t ui32IntFlags);
// uint32_t CRYPTOIntStatus(bool bMasked);
// void CRYPTOIntRegister(void (*pfnHandler)(void));
// void CRYPTOIntUnregister(void);

//*****************************************************************************
//
// API Functions and prototypes
//
//*****************************************************************************

//*****************************************************************************
//
//! Write the key into the Key Ram.
//!
//! \param pui32AesKey is a pointer to an AES Key.
//! \param ui32KeyLocation is the location of the key in Key RAM.
//!
//! The \b ui32KeyLocation parameter is an enumerated type which specifies
//! the Key Ram location in which the key is stored.
//! This parameter can have any of the following values:
//!
//! - \b CRYPTO_KEY_AREA_0
//! - \b CRYPTO_KEY_AREA_1
//! - \b CRYPTO_KEY_AREA_2
//! - \b CRYPTO_KEY_AREA_3
//! - \b CRYPTO_KEY_AREA_4
//! - \b CRYPTO_KEY_AREA_5
//! - \b CRYPTO_KEY_AREA_6
//! - \b CRYPTO_KEY_AREA_7
//!
//! The pointer \e pui8AesKey has the address where the Key is stored.
//!
//! \return Returns \b AES_SUCCESS if successful, otherwise will return
//! \b AES_KEYSTORE_READ_ERROR.
//
//*****************************************************************************
extern uint32_t CRYPTOAesLoadKey(uint32_t *pui32AesKey, 
                                 uint32_t ui32KeyLocation);

//*****************************************************************************
//
//! Start an AES-ECB operation (encryption or decryption).
//!
//! \param pui32MsgIn is a pointer to the input data.
//! \param pui32MsgOut is a pointer to the output data.
//! \param ui32KeyLocation is the location of the key in Key RAM.
//! \param bEncrypt is set 'true' to encrypt or set 'false' to decrypt.
//! \param bIntEnable is set 'true' to enable Crypto interrupts or 'false' to
//! disable Crypto interrupt.
//!
//! The \e key_location parameter is an enumerated type which specifies
//! the Key Ram location in which the key is stored.
//! This parameter can have any of the following values:
//!
//! - \b KEY_AREA_0
//! - \b KEY_AREA_1
//! - \b KEY_AREA_2
//! - \b KEY_AREA_3
//! - \b KEY_AREA_4
//! - \b KEY_AREA_5
//! - \b KEY_AREA_6
//! - \b KEY_AREA_7
//!
//! \return Returns \b AES_SUCCESS if successful and
//! \b AES_KEYSTORE_READ_ERROR if failing.
//
//*****************************************************************************
extern uint32_t CRYPTOAesEcb(uint32_t *pui32MsgIn, uint32_t *pui32MsgOut,
                             uint32_t ui32KeyLocation, bool bEncrypt,
                             bool bIntEnable);

//*****************************************************************************
//
//! Check the result of an AES ECB operation
//!
//! This function should be called after CryptoAesECBStart function to check if
//! the AES ECB operation was successful.
//!
//! \return Returns \b AES_SUCCESS if successful and \b AES_DMA_BUS_ERROR if
//! failing. If operation is still ongoing fuction will return \b AES_DMA_BSY.
//
//*****************************************************************************
extern uint32_t CRYPTOAesEcbStatus(void);

//*****************************************************************************
//
//! Finish the encryption operation by resetting the operation mode
//!
//! This function should be called after CryptoAesECBResultCheck has reported
//! that the operation is finished.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
CRYPTOAesEcbFinish(void)
{
    //
    // Result has already been copied to the output buffer by DMA.
    // Disable master control/DMA clock and clear the operating mode.
    //
    HWREG(CRYPTO_BASE + CRYPTO_O_ALGSEL) = 0x00000000;
    HWREG(CRYPTO_BASE + CRYPTO_O_AESCTL) = 0x00000000;
}

//*****************************************************************************
//
//! Start CCM operation
//!
//! \param bEncrypt determines whether to run encryption or not.
//! \param ui32AuthLength is the the length of the authentication field -
//! 0, 2, 4, 6, 8, 10, 12, 14 or 16 octets.
//! \param pui32Nonce is a pointer to 13-byte or 12-byte Nonce.
//! \param pui32PlainText is a poiner to the octet string input message,
//! \param ui32PlainTextLength is the length of the message,
//! \param pui32Header is the length of the header (Additional Authentication
//! Data or AAD).
//! \param ui32HeaderLength is the length of the header in octets.
//! \param ui32KeyLocation is the location in Key RAM where the key is stored.
//! \param ui32FieldLength is the size of the length field (2 or 3).
//! \param bIntEnable enables interrupts.
//!
//! The \e ui32KeyLocation is an enumerated type which specifies the Key Ram
//! location in which the key is stored. This parameter can have any of the
//! following values:
//!
//! - \b KEY_AREA_0
//! - \b KEY_AREA_1
//! - \b KEY_AREA_2
//! - \b KEY_AREA_3
//! - \b KEY_AREA_4
//! - \b KEY_AREA_5
//! - \b KEY_AREA_6
//! - \b KEY_AREA_7
//!
//! \return Returns \b AES_SUCCESS if successful - otherwise
//! \b AES_KEYSTORE_READ_ERROR or \b AES_DMA_BUS_ERROR.
//
//*****************************************************************************
extern uint32_t CRYPTOCcmAuthEncrypt(bool bEncrypt, uint32_t ui32AuthLength,
                                     uint32_t *pui32Nonce,
                                     uint32_t *pui32PlainText,
                                     uint32_t ui32PlainTextLength,
                                     uint32_t *pui32Header,
                                     uint32_t ui32HeaderLength,
                                     uint32_t ui32KeyLocation,
                                     uint32_t ui32FieldLength,
                                     bool bIntEnable);

//*****************************************************************************
//
//! Check the result of an AES CCM operation.
//!
//! This function should be called after CryptoCCMAuthEncrypt function to check
//! if the AES CCM operation was successful.
//!
//! \return Returns \b AES_SUCCESS if successful and \b AES_DMA_BUS_ERROR if
//! failing. If operation is still ongoing fuction will return \b AES_DMA_BSY.
//
//*****************************************************************************
extern uint32_t CRYPTOCcmAuthEncryptStatus(void);

//*****************************************************************************
//
//! Get the result of an AES-CCM operation
//!
//! \param ui32TagLength is length of the Tag.
//! \param pui32CcmTag is the location of the authetication Tag.
//!
//! This function should be called after CCCMAuthEncryptStatus.
//!
//! \return Returns \b AES_SUCCESS if successful.
//
//*****************************************************************************
extern uint32_t CRYPTOCcmAuthEncryptResultGet(uint32_t ui32TagLength,
                                              uint32_t *pui32CcmTag);

//*****************************************************************************
//
//! Start a CCM Decryption and Inverse Authentication operation.
//!
//! \param bDecrypt determines whether to run decryption or not.
//! \param ui32AuthLength is the the length of the authentication field -
//! 0, 2, 4, 6, 8, 10, 12, 14 or 16 octets.
//! \param pui32Nonce is a pointer to 13-byte or 12-byte Nonce.
//! \param pui32CipherText is a poiner to the octet string encrypted message.
//! \param ui32CipherTextLength is the length of the encrypted message.
//! \param pui32Header is the length of the header (Additional Authentication
//! Data or AAD).
//! \param ui32HeaderLength is the length of the header in octets.
//! \param ui32KeyLocation is the location in Key RAM where the key is stored.
//! \param ui32FieldLength is the size of the length field (2 or 3).
//! \param bIntEnable enables interrupts.
//!
//! The \e ui32KeyLocation is an enumerated type which specifies the Key Ram
//! location in which the key is stored. This parameter can have any of the
//! following values:
//!
//! - \b KEY_AREA_0
//! - \b KEY_AREA_1
//! - \b KEY_AREA_2
//! - \b KEY_AREA_3
//! - \b KEY_AREA_4
//! - \b KEY_AREA_5
//! - \b KEY_AREA_6
//! - \b KEY_AREA_7
//!
//! \return Return \b AES_SUCCESS if successful. \b AES_DMA_BUS_ERROR
//! otherwise.
//!
//! \return Returns \b AES_SUCCESS if successful - otherwise
//! \b AES_KEYSTORE_READ_ERROR or \b AES_DMA_BUS_ERROR
//
//*****************************************************************************
extern uint32_t CRYPTOCcmInvAuthDecrypt(bool bDecrypt, uint32_t ui32AuthLength,
                                        uint32_t *pui32Nonce,
                                        uint32_t *pui32CipherText,
                                        uint32_t ui32CipherTextLength,
                                        uint32_t *pui32Header,
                                        uint32_t ui32HeaderLength,
                                        uint32_t ui32KeyLocation,
                                        uint32_t ui32FieldLength,
                                        bool bIntEnable);

//*****************************************************************************
//
//! Checks CCM decrypt and Inverse Authentication result.
//!
//! \return Returns \b AES_SUCCESS if successful - \b AES_DMA_BSY if still busy
//! and \b AES_DMA_BUS_ERROR if an error is encountered.
//
//*****************************************************************************
extern uint32_t CRYPTOCcmInvAuthDecryptStatus(void);

//*****************************************************************************
//
//! Get the result of the CCM operation. 
//!
//! \param ui32AuthLength is the the length of the authentication field -
//! 0, 2, 4, 6, 8, 10, 12, 14 or 16 octets.
//! \param pui32CipherText is a poiner to the octet string encrypted message.
//! \param ui32CipherTextLength is the length of the encrypted message.
//! \param pui32CcmTag is the location of the authentication Tag.
//!
//! \return Returns AES_SUCCESS if successful.
//
//*****************************************************************************
extern uint32_t CRYPTOCcmInvAuthDecryptResultGet(uint32_t ui32AuthLength,
                                                 uint32_t *pui32CipherText,
                                                 uint32_t ui32CipherTextLength,
                                                 uint32_t *pui32CcmTag);

//*****************************************************************************
//
//! Get the current status of the Crypto DMA controller.
//!
//! This function is used to poll the Crypto DMA controller to check if it is
//! ready for a new operation or if an error has occured. The current status is
//! either
//! -\b CRYPTO_DMA_READY     : DMA ready for a new operation
//! -\b CRYPTO_DMA_BSY       : DMA is busy
//! -\b CRYTPO_DMA_BUS_ERROR : DMA Bus error
//!
//! The \b CRYPTO_DMA_BUS_ERROR can also be caught using the crypto event
//! handler.
//!
//! \return Returns the current status of the DMA controller.
//
//*****************************************************************************
__STATIC_INLINE uint32_t
CRYPTODmaStatus(void)
{
    //
    // Return the value of the status register.
    //
    return (HWREG(CRYPTO_BASE + CRYPTO_O_DMASTAT));
}

//*****************************************************************************
//
//! Enable Crypto DMA operation
//!
//! \param ui32Channels is a bitmask of the channels to enable.
//!
//! The specified Crypto DMA channels are enabled. The \e ui32Channels
//! parameter is the logical OR of any of the following values:
//!
//! - CRYPTO_DMA_CHAN0
//! - CRYPTO_DMA_CHAN1
//!
//! \return None
//
//*****************************************************************************
extern void CRYPTODmaEnable(uint32_t ui32Channels);

//*****************************************************************************
//
//! Disable Crypto DMA operation
//!
//! \param ui32Channels is a bitmask of the channels to disable.
//!
//! The specified Crypto DMA channels are disabled. The \e ui32Channels
//! parameter is the logical OR of any of the following values:
//!
//! - CRYPTO_DMA_CHAN0
//! - CRYPTO_DMA_CHAN1
//!
//! \return None
//
//*****************************************************************************
extern void CRYPTODmaDisable(uint32_t ui32Channels);

//*****************************************************************************
//
//! Enables individual Crypto interrupt sources
//!
//! \param ui32IntFlags is the bit mask of the interrupt sources to be enabled.
//!
//! This function enables the indicated Crypto interrupt sources. Only the
//! sources that are enabled can be reflected to the processor interrupt;
//! disabled sources have no effect on the processor.
//!
//! The \e ui32IntFlags parameter is the logical OR of any of the following:
//!
//! - \b CRYPTO_DMA_IN_DONE
//! - \b CRYPTO_RESULT_RDY
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
CRYPTOIntEnable(uint32_t ui32IntFlags)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32IntFlags & CRYPTO_DMA_IN_DONE) |
           (ui32IntFlags & CRYPTO_RESULT_RDY));

    //
    // Using level interrupt.
    //
    HWREG(CRYPTO_BASE + CRYPTO_O_IRQTYPE) = CRYPTO_INT_LEVEL;

    //
    // Enable the specified interrupts.
    //
    HWREG(CRYPTO_BASE + CRYPTO_O_IRQEN) |= ui32IntFlags;
}

//*****************************************************************************
//
//! Disables individual CRYPTO interrupt sources
//!
//! \param ui32IntFlags is the bit mask of the interrupt sources to be
//! disabled.
//!
//! This function disables the indicated Crypto interrupt sources. Only the
//! sources that are enabled can be reflected to the processor interrupt;
//! disabled sources have no effect on the processor.
//!
//! The \e ui32IntFlags parameter has the same definition as the
//! \e ui32IntFlags parameter to CryptoIntEnable().
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
CRYPTOIntDisable(uint32_t ui32IntFlags)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32IntFlags & CRYPTO_DMA_IN_DONE) |
           (ui32IntFlags & CRYPTO_RESULT_RDY));

    //
    // Disable the specified interrupts.
    //
    HWREG(CRYPTO_BASE + CRYPTO_O_IRQEN) &= ~ui32IntFlags;
}

//*****************************************************************************
//
//! Gets the current interrupt status
//!
//! \param bMasked is \b false if the raw interrupt status is required and
//! \b true if the masked interrupt status is required.
//!
//! This function returns the interrupt status for the specified Crypto. Either
//! the raw interrupt status or the status of interrupts that are allowed to
//! reflect to the processor can be returned.
//!
//! \return Returns the current interrupt status, enumerated as a bit field of
//! values described in CryptoIntEnable().
//
//*****************************************************************************
__STATIC_INLINE uint32_t
CRYPTOIntStatus(bool bMasked)
{
    uint32_t ui32Mask;

    //
    // Return either the interrupt status or the raw interrupt status as
    // requested.
    //
    if(bMasked)
    {
        ui32Mask = HWREG(CRYPTO_BASE + CRYPTO_O_IRQEN);
        return(ui32Mask & HWREG(CRYPTO_BASE + CRYPTO_O_IRQSTAT));
    }
    else
    {
        return(HWREG(CRYPTO_BASE + CRYPTO_O_IRQSTAT) & 0x00000003);
    }
}

//*****************************************************************************
//
//! Clears Crypto interrupt sources
//!
//! \param ui32IntFlags is a bit mask of the interrupt sources to be cleared.
//!
//! The specified Crypto interrupt sources are cleared, so that they no longer
//! assert. This function must be called in the interrupt handler to keep the
//! interrupt from being recognized again immediately upon exit.
//!
//! The \e ui32IntFlags parameter has the same definition as the
//! \e ui32IntFlags parameter to CryptoIntEnable().
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
CRYPTOIntClear(uint32_t ui32IntFlags)
{
    //
    // Check the arguments.
    //
    ASSERT((ui32IntFlags & CRYPTO_DMA_IN_DONE) |
           (ui32IntFlags & CRYPTO_RESULT_RDY));

    //
    // Clear the requested interrupt sources,
    //
    HWREG(CRYPTO_BASE + CRYPTO_O_IRQCLR) = ui32IntFlags;
}

//*****************************************************************************
//
//! Registers an interrupt handler for a Crypto interrupt
//!
//! \param pfnHandler is a pointer to the function to be called when the
//! UART interrupt occurs.
//!
//! This function does the actual registering of the interrupt handler.  This
//! function enables the global interrupt in the interrupt controller; specific
//! UART interrupts must be enabled via CryptoIntEnable(). It is the interrupt
//! handler's responsibility to clear the interrupt source.
//!
//! \sa IntRegister() for important information about registering interrupt
//! handlers.
//!
//! \return None
//
//*****************************************************************************
__STATIC_INLINE void
CRYPTOIntRegister(void (*pfnHandler)(void))
{
    //
    // Register the interrupt handler.
    //
    IntRegister(INT_CRYPTO, pfnHandler);

    //
    // Enable the UART interrupt.
    //
    IntEnable(INT_CRYPTO);
}

//*****************************************************************************
//
//! Unregisters an interrupt handler for a Crypto interrupt
//!
//! This function does the actual unregistering of the interrupt handler. It
//! clears the handler to be called when a Crypto interrupt occurs. This
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
CRYPTOIntUnregister(void)
{
    //
    // Disable the interrupt.
    //
    IntDisable(INT_CRYPTO);

    //
    // Unregister the interrupt handler.
    //
    IntUnregister(INT_CRYPTO);
}

//*****************************************************************************
//
// Mark the end of the C bindings section for C++ compilers.
//
//*****************************************************************************
#ifdef __cplusplus
}
#endif

#endif  // __CRYPTO_H__

//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
