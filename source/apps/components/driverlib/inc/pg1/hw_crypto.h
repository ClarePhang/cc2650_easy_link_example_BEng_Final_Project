
/******************************************************************************
*  Filename:       hw_crypto.h
*  Revised:        $Date: 2014-03-06 10:55:51 +0100 (to, 06 mar 2014) $
*  Revision:       $Revision: 40315 $
*
*  Description:    Template file for driverlib headers.
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
#ifndef __HW_CRYPTO_H__
#define __HW_CRYPTO_H__

//*****************************************************************************
//
// The following are defines for the CRYPTO register offsets.
//
//*****************************************************************************
#define CRYPTO_O_AESKEY20       0x00000500  // Clear/wipe AES_KEY2 register 
#define CRYPTO_O_AESKEY21       0x00000504  // Clear/wipe AES_KEY2 register 
#define CRYPTO_O_AESKEY22       0x00000508  // Clear/wipe AES_KEY2 register 
#define CRYPTO_O_AESKEY23       0x0000050C  // Clear/wipe AES_KEY2 register 
#define CRYPTO_O_AESKEY30       0x00000510  // Clear/wipe AES_KEY3 register 
#define CRYPTO_O_AESKEY31       0x00000514  // Clear/wipe AES_KEY3 register 
#define CRYPTO_O_AESKEY32       0x00000518  // Clear/wipe AES_KEY3 register 
#define CRYPTO_O_AESKEY33       0x0000051C  // Clear/wipe AES_KEY3 register 
#define CRYPTO_O_AESIV0         0x00000540  // AES Initialization vector 
                                            // registers 
#define CRYPTO_O_AESIV1         0x00000544  // AES Initialization vector 
                                            // registers 
#define CRYPTO_O_AESIV2         0x00000548  // AES Initialization vector 
                                            // registers 
#define CRYPTO_O_AESIV3         0x0000054C  // AES Initialization vector 
                                            // registers 
#define CRYPTO_O_AESCTL         0x00000550  // AES Input/Output Buffer Control 
                                            // and Mode register 
#define CRYPTO_O_AESDATALEN0    0x00000554  // Crypto Data Length Register 
                                            // (LSW) 
#define CRYPTO_O_AESDATALEN1    0x00000558  // Crypto Data Length Register 
                                            // (MSW) 
#define CRYPTO_O_AESAUTHLEN     0x0000055C  // Authentication length register 
#define CRYPTO_O_AESDATAIN0     0x00000560  // Data input/output register 
#define CRYPTO_O_AESDATAOUT0    0x00000560  // Data input/output register 
#define CRYPTO_O_AESDATAIN1     0x00000564  // Data input/output register 
#define CRYPTO_O_AESDATAOUT1    0x00000564  // Data input/output register 
#define CRYPTO_O_AESDATAIN2     0x00000568  // Data input/output register 
#define CRYPTO_O_AESDATAOUT2    0x00000568  // Data input/output register 
#define CRYPTO_O_AESDATAIN3     0x0000056C  // Data input/output register 
#define CRYPTO_O_AESDATAOUT3    0x0000056C  // Data input/output register 
#define CRYPTO_O_AESTAGOUT0     0x00000570  // AES tag output register 
#define CRYPTO_O_AESTAGOUT1     0x00000574  // AES tag output register 
#define CRYPTO_O_AESTAGOUT2     0x00000578  // AES tag output register 
#define CRYPTO_O_AESTAGOUT3     0x0000057C  // AES tag output register 
#define CRYPTO_O_HWOPT          0x000007F8  // CTRL Module options register 
#define CRYPTO_O_HWVER          0x000007FC  // CTRL Module version register 
#define CRYPTO_O_DMASTAT        0x00000018  // DMAC status 
#define CRYPTO_O_DMACH0CTL      0x00000000  // Channel 0 control register 
#define CRYPTO_O_DMASWRESET     0x0000001C  // DMAC software reset 
#define CRYPTO_O_DMACH1EXTADDR  0x00000024  // Channel 1 external address 
#define CRYPTO_O_DMACH1CTL      0x00000020  // Channel 1 control register 
#define CRYPTO_O_DMABUSCFG      0x00000078  // DMAC Master run-time parameters 
#define CRYPTO_O_DMAHWOPT       0x000000F8  // DMAC Options register 
#define CRYPTO_O_DMAHWVER       0x000000FC  // DMAC Version register 
#define CRYPTO_O_DMAPORTERR     0x0000007C  // DMAC Port error raw status 
#define CRYPTO_O_DMACH1LEN      0x0000002C  // DMAC channel length 
#define CRYPTO_O_DMACH0LEN      0x0000000C  // DMAC channel length 
#define CRYPTO_O_DMACH0EXTADDR  0x00000004  // Channel 0 external address 
#define CRYPTO_O_IRQCLR         0x00000788  // Interrupt clear 
#define CRYPTO_O_ALGSEL         0x00000700  // Master control algorithm select 
                                            // register 
#define CRYPTO_O_IRQTYPE        0x00000780  // Interrupt configuration 
#define CRYPTO_O_IRQSET         0x0000078C  // Interrupt set 
#define CRYPTO_O_DMAPROTCTL     0x00000704  // Master PROT enable register 
#define CRYPTO_O_SWRESET        0x00000740  // Software reset 
#define CRYPTO_O_IRQEN          0x00000784  // Interrupt enable 
#define CRYPTO_O_IRQSTAT        0x00000790  // Interrupt status 
#define CRYPTO_O_KEYWRITTENAREA 0x00000404  // Written area (status) register 
#define CRYPTO_O_KEYWRITEAREA   0x00000400  // Write area register 
#define CRYPTO_O_KEYSIZE        0x00000408  // Key size register 
#define CRYPTO_O_KEYREADAREA    0x0000040C  // Read area register 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESKEY20 register.
//
//*****************************************************************************
#define CRYPTO_AESKEY20_KEY2_M  0xFFFFFFFF  // AES_KEY2[31+x:0+x] / 
                                            // AES_GHASH_H[31+x:0+x], where x = 
                                            // 0, 32, 64, 96 ordered from the 
                                            // LSW entry of this 4-deep 
                                            // register arrary. The 
                                            // interpretation of this field 
                                            // depends on the crypto operation 
                                            // mode. INTERNAL NOTE: Check the 
                                            // Reference Manual 
#define CRYPTO_AESKEY20_KEY2_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESKEY21 register.
//
//*****************************************************************************
#define CRYPTO_AESKEY21_KEY2_M  0xFFFFFFFF  // AES_KEY2[31+x:0+x] / 
                                            // AES_GHASH_H[31+x:0+x], where x = 
                                            // 0, 32, 64, 96 ordered from the 
                                            // LSW entry of this 4-deep 
                                            // register arrary. The 
                                            // interpretation of this field 
                                            // depends on the crypto operation 
                                            // mode. INTERNAL NOTE: Check the 
                                            // Reference Manual 
#define CRYPTO_AESKEY21_KEY2_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESKEY22 register.
//
//*****************************************************************************
#define CRYPTO_AESKEY22_KEY2_M  0xFFFFFFFF  // AES_KEY2[31+x:0+x] / 
                                            // AES_GHASH_H[31+x:0+x], where x = 
                                            // 0, 32, 64, 96 ordered from the 
                                            // LSW entry of this 4-deep 
                                            // register arrary. The 
                                            // interpretation of this field 
                                            // depends on the crypto operation 
                                            // mode. INTERNAL NOTE: Check the 
                                            // Reference Manual 
#define CRYPTO_AESKEY22_KEY2_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESKEY23 register.
//
//*****************************************************************************
#define CRYPTO_AESKEY23_KEY2_M  0xFFFFFFFF  // AES_KEY2[31+x:0+x] / 
                                            // AES_GHASH_H[31+x:0+x], where x = 
                                            // 0, 32, 64, 96 ordered from the 
                                            // LSW entry of this 4-deep 
                                            // register arrary. The 
                                            // interpretation of this field 
                                            // depends on the crypto operation 
                                            // mode. INTERNAL NOTE: Check the 
                                            // Reference Manual 
#define CRYPTO_AESKEY23_KEY2_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESKEY30 register.
//
//*****************************************************************************
#define CRYPTO_AESKEY30_KEY3_M  0xFFFFFFFF  // AES_KEY3[31+x:0+x] / 
                                            // AES_KEY2[159+x:128+x], where x = 
                                            // 0, 32, 64, 96 ordered from the 
                                            // LSW entry of this 4-deep 
                                            // register arrary. The 
                                            // interpretation of this field 
                                            // depends on the crypto operation 
                                            // mode. INTERNAL NOTE: Check the 
                                            // Reference Manual 
#define CRYPTO_AESKEY30_KEY3_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESKEY31 register.
//
//*****************************************************************************
#define CRYPTO_AESKEY31_KEY3_M  0xFFFFFFFF  // AES_KEY3[31+x:0+x] / 
                                            // AES_KEY2[159+x:128+x], where x = 
                                            // 0, 32, 64, 96 ordered from the 
                                            // LSW entry of this 4-deep 
                                            // register arrary. The 
                                            // interpretation of this field 
                                            // depends on the crypto operation 
                                            // mode. INTERNAL NOTE: Check the 
                                            // Reference Manual 
#define CRYPTO_AESKEY31_KEY3_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESKEY32 register.
//
//*****************************************************************************
#define CRYPTO_AESKEY32_KEY3_M  0xFFFFFFFF  // AES_KEY3[31+x:0+x] / 
                                            // AES_KEY2[159+x:128+x], where x = 
                                            // 0, 32, 64, 96 ordered from the 
                                            // LSW entry of this 4-deep 
                                            // register arrary. The 
                                            // interpretation of this field 
                                            // depends on the crypto operation 
                                            // mode. INTERNAL NOTE: Check the 
                                            // Reference Manual 
#define CRYPTO_AESKEY32_KEY3_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESKEY33 register.
//
//*****************************************************************************
#define CRYPTO_AESKEY33_KEY3_M  0xFFFFFFFF  // AES_KEY3[31+x:0+x] / 
                                            // AES_KEY2[159+x:128+x], where x = 
                                            // 0, 32, 64, 96 ordered from the 
                                            // LSW entry of this 4-deep 
                                            // register arrary. The 
                                            // interpretation of this field 
                                            // depends on the crypto operation 
                                            // mode. INTERNAL NOTE: Check the 
                                            // Reference Manual 
#define CRYPTO_AESKEY33_KEY3_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESIV0 register.
//
//*****************************************************************************
#define CRYPTO_AESIV0_IV_M      0xFFFFFFFF  // The interpretation of this 
                                            // field depends on the crypto 
                                            // operation mode. INTERNAL NOTE: 
                                            // Check the Reference Manual 
#define CRYPTO_AESIV0_IV_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESIV1 register.
//
//*****************************************************************************
#define CRYPTO_AESIV1_IV_M      0xFFFFFFFF  // The interpretation of this 
                                            // field depends on the crypto 
                                            // operation mode. INTERNAL NOTE: 
                                            // Check the Reference Manual 
#define CRYPTO_AESIV1_IV_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESIV2 register.
//
//*****************************************************************************
#define CRYPTO_AESIV2_IV_M      0xFFFFFFFF  // The interpretation of this 
                                            // field depends on the crypto 
                                            // operation mode. INTERNAL NOTE: 
                                            // Check the Reference Manual 
#define CRYPTO_AESIV2_IV_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESIV3 register.
//
//*****************************************************************************
#define CRYPTO_AESIV3_IV_M      0xFFFFFFFF  // The interpretation of this 
                                            // field depends on the crypto 
                                            // operation mode. INTERNAL NOTE: 
                                            // Check the Reference Manual 
#define CRYPTO_AESIV3_IV_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESCTL register.
//
//*****************************************************************************
#define CRYPTO_AESCTL_CONTEXT_RDY \
                                0x80000000  // If 1, this read-only status bit 
                                            // indicates that the context data 
                                            // registers can be overwritten and 
                                            // the Host is permitted to write 
                                            // the next context. Writing a 
                                            // context means writing either a 
                                            // mode, the crypto length or AAD 
                                            // length registers 

#define CRYPTO_AESCTL_CONTEXT_RDY_M \
                                0x80000000
#define CRYPTO_AESCTL_CONTEXT_RDY_S 31
#define CRYPTO_AESCTL_SAVED_CONTEXT_RDY \
                                0x40000000  // If read as 1, this status bit 
                                            // indicates that an AES 
                                            // authentication TAG and/or IV 
                                            // block(s) is/are available for 
                                            // the Host to retrieve. This bit 
                                            // is only asserted if the 
                                            // save_context bit is set to 1. 
                                            // The bit is mutually exclusive 
                                            // with the context_ready bit. 
                                            // Writing a one clears the bit to 
                                            // zero, indicating the AES core 
                                            // can start its next operation. 
                                            // This bit is also cleared when 
                                            // the 4th word of the output TAG 
                                            // and/or IV is read. Note: All 
                                            // other mode bit writes will be 
                                            // ignored when this mode bit is 
                                            // written with a one. Note: This 
                                            // bit is controlled automatically 
                                            // by the EIP-120t for TAG read DMA 
                                            // operations. For typical use, 
                                            // this bit does NOT need to be 
                                            // written, but is used for status 
                                            // reading only. In this case, this 
                                            // status bit is automatically 
                                            // maintained by the EIP-120t. 

#define CRYPTO_AESCTL_SAVED_CONTEXT_RDY_M \
                                0x40000000
#define CRYPTO_AESCTL_SAVED_CONTEXT_RDY_S 30
#define CRYPTO_AESCTL_SAVE_CONTEXT \
                                0x20000000  // This bit indicates that an 
                                            // authentication TAG or result IV 
                                            // needs to be stored as a result 
                                            // context. Typically this bit must 
                                            // be set for authentication modes 
                                            // returning a TAG (CBC-MAC, GCM 
                                            // and CCM), or for basic 
                                            // encryption modes that require 
                                            // future continuation with the 
                                            // current result IV. If this bit 
                                            // is set, the engine will retain 
                                            // its full context until the TAG 
                                            // and/or IV registers are read. 
                                            // The TAG or IV must be read 
                                            // before the AES engine can start 
                                            // a new operation. 

#define CRYPTO_AESCTL_SAVE_CONTEXT_M \
                                0x20000000
#define CRYPTO_AESCTL_SAVE_CONTEXT_S 29
#define CRYPTO_AESCTL_CCM_M_M   0x01C00000  // Defines M that indicates the 
                                            // length of the authentication 
                                            // field for CCM operations; the 
                                            // authentication field length 
                                            // equals two times (the value of 
                                            // CCM-M plus one). Note: The 
                                            // EIP-120t always returns a 
                                            // 128-bit authentication field, of 
                                            // which the M least significant 
                                            // bytes are valid. All values are 
                                            // supported. 
#define CRYPTO_AESCTL_CCM_M_S   22
#define CRYPTO_AESCTL_CCM_L_M   0x00380000  // Defines L that indicates the 
                                            // width of the length field for 
                                            // CCM operations; the length field 
                                            // in bytes equals the value of 
                                            // CMM-L plus one. All values are 
                                            // supported. 
#define CRYPTO_AESCTL_CCM_L_S   19
#define CRYPTO_AESCTL_CCM       0x00040000  // If set to 1, AES-CCM is 
                                            // selected AES-CCM is a combined 
                                            // mode, using AES for both 
                                            // authentication and encryption. 
                                            // Note: Selecting AES-CCM mode 
                                            // requires writing of the AAD 
                                            // length register after all other 
                                            // registers. Note: The CTR mode 
                                            // bit in this register must also 
                                            // be set to 1 to enable AES-CTR; 
                                            // selecting other AES modes than 
                                            // CTR mode is invalid. 
#define CRYPTO_AESCTL_CCM_M     0x00040000
#define CRYPTO_AESCTL_CCM_S     18
#define CRYPTO_AESCTL_GCM_M     0x00030000  // Set these bits to 11, to select 
                                            // AES-GCM mode. AES-GCM is a 
                                            // combined mode, using the Galois 
                                            // field multiplier GF(2128) for 
                                            // authentication and AES-CTR mode 
                                            // for encryption. Note: The CTR 
                                            // mode bit in this register must 
                                            // also be set to 1 to enable 
                                            // AES-CTR Note: The EIP-120t-1 
                                            // configuration only supports mode 
                                            // 11 (autonomous GHASH), other GCM 
                                            // modes are not allowed. So for 
                                            // the EIP-120t-1 configuration the 
                                            // only valid values are 00 and 11. 
                                            // Note: The EIP-120t-2 
                                            // configuration does not support 
                                            // GCM and therefore these bits 
                                            // should always be set to 00. 
#define CRYPTO_AESCTL_GCM_S     16
#define CRYPTO_AESCTL_GCM_NO_GCM_MODE \
                                0x00000000  // No GCM Mode 
#define CRYPTO_AESCTL_GCM_AUTONOMOUS \
                                0x00030000  // Autonomous GHASH (both H and 
                                            // Y0-encrypted calculated 
                                            // internally) 
#define CRYPTO_AESCTL_CBC_MAC   0x00008000  // Set to 1 to select AES-CBC MAC 
                                            // mode. The direction bit must be 
                                            // set to 1 for this mode. 
                                            // Selecting this mode requires 
                                            // writing the length register 
                                            // after all other registers. 
#define CRYPTO_AESCTL_CBC_MAC_M 0x00008000
#define CRYPTO_AESCTL_CBC_MAC_S 15
#define CRYPTO_AESCTL_CTR_WIDTH_M \
                                0x00000180  // Specifies the counter width for 
                                            // AES-CTR mode 

#define CRYPTO_AESCTL_CTR_WIDTH_S 7
#define CRYPTO_AESCTL_CTR_WIDTH_32_BIT \
                                0x00000000  // 32 Bit Counter 
#define CRYPTO_AESCTL_CTR_WIDTH_64_BIT \
                                0x00000080  // 64 Bit Counter 
#define CRYPTO_AESCTL_CTR_WIDTH_96_BIT \
                                0x00000100  // 96 Bit Counter 
#define CRYPTO_AESCTL_CTR_WIDTH_128_BIT \
                                0x00000180  // 128 Bit Counter 
#define CRYPTO_AESCTL_CTR       0x00000040  // If set to 1, AES counter mode 
                                            // (CTR) is selected. Note: This 
                                            // bit must also be set for GCM and 
                                            // CCM, when encryption/decryption 
                                            // is required. 
#define CRYPTO_AESCTL_CTR_M     0x00000040
#define CRYPTO_AESCTL_CTR_S     6
#define CRYPTO_AESCTL_CBC       0x00000020  // If set to 1, 
                                            // cipher-block-chaining (CBC) mode 
                                            // is selected. 
#define CRYPTO_AESCTL_CBC_M     0x00000020
#define CRYPTO_AESCTL_CBC_S     5
#define CRYPTO_AESCTL_KEY_SIZE_M \
                                0x00000018  // This read-only field specifies 
                                            // the key size. The key size is 
                                            // automatically configured when a 
                                            // new key is loaded via the key 
                                            // store module. 00 = N/A - 
                                            // reserved 01 = 128-bit 10 = 
                                            // 192-bit 11 = 256-bit Refer to 
                                            // section 4.7 for details on the 
                                            // AES key, key size section and 
                                            // loading. 

#define CRYPTO_AESCTL_KEY_SIZE_S 3
#define CRYPTO_AESCTL_DIR       0x00000004  // If set to 1 an encrypt 
                                            // operation is performed. If set 
                                            // to 0 a decrypt operation is 
                                            // performed. This bit must be 
                                            // written with a 1 when CBC-MAC is 
                                            // selected. 
#define CRYPTO_AESCTL_DIR_M     0x00000004
#define CRYPTO_AESCTL_DIR_S     2
#define CRYPTO_AESCTL_INPUT_RDY 0x00000002  // If read as 1, this status bit 
                                            // indicates that the 16-byte AES 
                                            // input buffer is empty. The Host 
                                            // is permitted to write the next 
                                            // block of data. Writing a 0 
                                            // clears the bit to zero and 
                                            // indicates that the AES core can 
                                            // use the provided input data 
                                            // block. Writing a 1 to this bit 
                                            // will be ignored. Note: For DMA 
                                            // operations, this bit is 
                                            // automatically controlled by the 
                                            // EIP-120t. After reset, this bit 
                                            // is 0. After writing a context 
                                            // (note 1), this bit will become 
                                            // 1. For typical use, this bit 
                                            // does NOT need to be written, but 
                                            // is used for status reading only. 
                                            // In this case, this status bit is 
                                            // automatically maintained by the 
                                            // EIP-120t. 
#define CRYPTO_AESCTL_INPUT_RDY_M \
                                0x00000002
#define CRYPTO_AESCTL_INPUT_RDY_S 1
#define CRYPTO_AESCTL_OUTPUT_RDY \
                                0x00000001  // If read as 1, this status bit 
                                            // indicates that an AES output 
                                            // block is available to be 
                                            // retrieved by the Host. Writing a 
                                            // 0 clears the bit to zero and 
                                            // indicates that output data is 
                                            // read by the Host. The AES core 
                                            // can provide a next output data 
                                            // block. Writing a 1 to this bit 
                                            // will be ignored. Note: For DMA 
                                            // operations, this bit is 
                                            // automatically controlled by the 
                                            // EIP-120t. For typical use, this 
                                            // bit does NOT need to be written, 
                                            // but is used for status reading 
                                            // only. In this case, this status 
                                            // bit is automatically maintained 
                                            // by the EIP-120t. 

#define CRYPTO_AESCTL_OUTPUT_RDY_M \
                                0x00000001
#define CRYPTO_AESCTL_OUTPUT_RDY_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESDATALEN0 register.
//
//*****************************************************************************
#define CRYPTO_AESDATALEN0_LEN_LSW_M \
                                0xFFFFFFFF  // Used to write the Length values 
                                            // to the EIP-120t. This register 
                                            // contains bits [31:0] of the 
                                            // combined data length register 

#define CRYPTO_AESDATALEN0_LEN_LSW_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESDATALEN1 register.
//
//*****************************************************************************
#define CRYPTO_AESDATALEN1_LEN_MSW_M \
                                0x1FFFFFFF  // Bits [60:32] of the combined 
                                            // data length register. Bits 
                                            // [60:0] of the crypto length 
                                            // registers (LSW and MSW) store 
                                            // the cryptographic data length in 
                                            // bytes for all modes. Once 
                                            // processing with this context is 
                                            // started, this length decrements 
                                            // to zero. Data lengths up to 
                                            // (2^61 - 1) bytes are allowed. 
                                            // For GCM, any value up to 2^36 - 
                                            // 32 bytes can be used. This is 
                                            // because a 32-bit counter mode is 
                                            // used; the maximum number of 
                                            // 128-bit blocks is 2^32 - 2, 
                                            // resulting in a maximum number of 
                                            // bytes of 2^36 - 32. Writing to 
                                            // this register triggers the 
                                            // engine to start using this 
                                            // context. This is valid for all 
                                            // modes except GCM and CCM. Note: 
                                            // For the combined modes (GCM and 
                                            // CCM), this length does not 
                                            // include the authentication only 
                                            // data; the authentication length 
                                            // is specified in the 
                                            // AES_AUTH_LENGTH register below. 
                                            // All modes must have a length > 
                                            // 0. For the combined modes, it is 
                                            // allowed to have one of the 
                                            // lengths equal to zero. For the 
                                            // basic encryption modes 
                                            // (ECB/CBC/CTR) it is allowed to 
                                            // program zero to the length 
                                            // field; in that case the length 
                                            // is assumed infinite. All data 
                                            // must be byte (8-bit) aligned for 
                                            // stream cipher modes; bit aligned 
                                            // data streams are not supported 
                                            // by the EIP-120t. For block 
                                            // cipher modes, the data length 
                                            // must be programmed in multiples 
                                            // of the block cipher size, 16 
                                            // bytes. For a Host read 
                                            // operation, these registers 
                                            // return all-zeroes. 

#define CRYPTO_AESDATALEN1_LEN_MSW_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESAUTHLEN register.
//
//*****************************************************************************
#define CRYPTO_AESAUTHLEN_LEN_M 0xFFFFFFFF  // Bits [31:0] of the 
                                            // authentication length register 
                                            // store the authentication data 
                                            // length in bytes for combined 
                                            // modes only (GCM or CCM) 
                                            // Supported AAD-lengths for CCM 
                                            // are from 0 to (2^16 - 2^8) 
                                            // bytes. For GCM any value up to 
                                            // (2^32 - 1) bytes can be used. 
                                            // Once processing with this 
                                            // context is started, this length 
                                            // decrements to zero. Writing this 
                                            // register triggers the engine to 
                                            // start using this context for GCM 
                                            // and CCM. For a Host read 
                                            // operation, these registers 
                                            // return all-zeros. 
#define CRYPTO_AESAUTHLEN_LEN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESDATAIN0 register.
//
//*****************************************************************************
#define CRYPTO_AESDATAIN0_DATA_M \
                                0xFFFFFFFF  // Data registers for input block 
                                            // data to the EIP-120t. - 
                                            // AES_DATA_IN_0 = AES Input 
                                            // Data[31:0] of [127:0] For normal 
                                            // operations, this register is not 
                                            // used, since data input and 
                                            // output is transferred from and 
                                            // to the AES core via DMA. For a 
                                            // Host write operation, these 
                                            // registers must be written with 
                                            // the 128-bit input block for the 
                                            // next AES operation. Writing at a 
                                            // word-aligned offset within this 
                                            // address range will store the 
                                            // word (4 bytes) of data into the 
                                            // corresponding position of 4-word 
                                            // deep (16 bytes = 128-bit AES 
                                            // block) data input buffer. This 
                                            // buffer is used for the next AES 
                                            // operation. If the last data 
                                            // block is not completely filled 
                                            // with valid data (see notes 
                                            // below), it is allowed to write 
                                            // only the words with valid data. 
                                            // Next AES operation is triggered 
                                            // by writing to the input_ready 
                                            // flag of the AES_CTRL register. 
                                            // Note: AES typically operates on 
                                            // 128 bits block multiple input 
                                            // data. The CTR, GCM and CCM modes 
                                            // form an exception. The last 
                                            // block of a CTR-mode message may 
                                            // contain less than 128 bits 
                                            // (refer to [NIST 800-38A]): 0 < n 
                                            // <= 128 bits. For GCM/CCM, the 
                                            // last block of both AAD and 
                                            // message data may contain less 
                                            // than 128 bits (refer to [NIST 
                                            // 800-38D]). The EIP-120t 
                                            // automatically pads or masks 
                                            // misaligned ending data blocks 
                                            // with zeroes for GCM, CCM and 
                                            // CBC-MAC. For CTR mode, the 
                                            // remaining data in an unaligned 
                                            // data block is ignored. 

#define CRYPTO_AESDATAIN0_DATA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESDATAOUT0 register.
//
//*****************************************************************************
#define CRYPTO_AESDATAOUT0_DATA_M \
                                0xFFFFFFFF  // Data register 0 for output 
                                            // block data from the EIP-120t. - 
                                            // AES_DATA_OUT_0 = AES Output 
                                            // Data[31:0] of {127:0] For normal 
                                            // operations, this register is not 
                                            // used, since data input and 
                                            // output is transferred from and 
                                            // to the AES core via DMA. For a 
                                            // Host read operation, these 
                                            // registers contain the 128-bit 
                                            // output block from the latest AES 
                                            // operation. Reading from a 
                                            // word-aligned offset within this 
                                            // address range will read one word 
                                            // (4 bytes) of data out the 4-word 
                                            // deep (16 bytes = 128-bits AES 
                                            // block) data output buffer. The 
                                            // words (4 words, one full block) 
                                            // should be read before the core 
                                            // will move the next block to the 
                                            // data output buffer. To empty the 
                                            // data output buffer, the 
                                            // output_ready flag of the 
                                            // AES_CTRL register must be 
                                            // written. For the modes with 
                                            // authentication (CBC-MAC, GCM and 
                                            // CCM), the invalid (message) 
                                            // bytes/words can be written with 
                                            // any data. Note: The AAD / 
                                            // authentication only data is not 
                                            // copied to the output buffer but 
                                            // only used for authentication. 

#define CRYPTO_AESDATAOUT0_DATA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESDATAIN1 register.
//
//*****************************************************************************
#define CRYPTO_AESDATAIN1_DATA_M \
                                0xFFFFFFFF  // Data registers for input block 
                                            // data to the EIP-120t. - - 
                                            // AES_DATA_IN_1 = AES Input 
                                            // Data[63:32] of [127:0] For 
                                            // normal operations, this register 
                                            // is not used, since data input 
                                            // and output is transferred from 
                                            // and to the AES core via DMA. For 
                                            // a Host write operation, these 
                                            // registers must be written with 
                                            // the 128-bit input block for the 
                                            // next AES operation. Writing at a 
                                            // word-aligned offset within this 
                                            // address range will store the 
                                            // word (4 bytes) of data into the 
                                            // corresponding position of 4-word 
                                            // deep (16 bytes = 128-bit AES 
                                            // block) data input buffer. This 
                                            // buffer is used for the next AES 
                                            // operation. If the last data 
                                            // block is not completely filled 
                                            // with valid data (see notes 
                                            // below), it is allowed to write 
                                            // only the words with valid data. 
                                            // Next AES operation is triggered 
                                            // by writing to the input_ready 
                                            // flag of the AES_CTRL register. 
                                            // Note: AES typically operates on 
                                            // 128 bits block multiple input 
                                            // data. The CTR, GCM and CCM modes 
                                            // form an exception. The last 
                                            // block of a CTR-mode message may 
                                            // contain less than 128 bits 
                                            // (refer to [NIST 800-38A]): 0 < n 
                                            // <= 128 bits. For GCM/CCM, the 
                                            // last block of both AAD and 
                                            // message data may contain less 
                                            // than 128 bits (refer to [NIST 
                                            // 800-38D]). The EIP-120t 
                                            // automatically pads or masks 
                                            // misaligned ending data blocks 
                                            // with zeroes for GCM, CCM and 
                                            // CBC-MAC. For CTR mode, the 
                                            // remaining data in an unaligned 
                                            // data block is ignored. 

#define CRYPTO_AESDATAIN1_DATA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESDATAOUT1 register.
//
//*****************************************************************************
#define CRYPTO_AESDATAOUT1_DATA_M \
                                0xFFFFFFFF  // Data registers for output block 
                                            // data from the EIP-120t. - 
                                            // AES_DATA_OUT_1 = AES Output 
                                            // Data[63:32] of [127:0] For 
                                            // normal operations, this register 
                                            // is not used, since data input 
                                            // and output is transferred from 
                                            // and to the AES core via DMA. For 
                                            // a Host read operation, these 
                                            // registers contain the 128-bit 
                                            // output block from the latest AES 
                                            // operation. Reading from a 
                                            // word-aligned offset within this 
                                            // address range will read one word 
                                            // (4 bytes) of data out the 4-word 
                                            // deep (16 bytes = 128-bits AES 
                                            // block) data output buffer. The 
                                            // words (4 words, one full block) 
                                            // should be read before the core 
                                            // will move the next block to the 
                                            // data output buffer. To empty the 
                                            // data output buffer, the 
                                            // output_ready flag of the 
                                            // AES_CTRL register must be 
                                            // written. For the modes with 
                                            // authentication (CBC-MAC, GCM and 
                                            // CCM), the invalid (message) 
                                            // bytes/words can be written with 
                                            // any data. Note: The AAD / 
                                            // authentication only data is not 
                                            // copied to the output buffer but 
                                            // only used for authentication. 

#define CRYPTO_AESDATAOUT1_DATA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESDATAIN2 register.
//
//*****************************************************************************
#define CRYPTO_AESDATAIN2_DATA_M \
                                0xFFFFFFFF  // Data registers for input block 
                                            // data to the EIP-120t. - 
                                            // AES_DATA_IN_2 = AES Input 
                                            // Data[95:64] of [127:0] For 
                                            // normal operations, this register 
                                            // is not used, since data input 
                                            // and output is transferred from 
                                            // and to the AES core via DMA. For 
                                            // a Host write operation, these 
                                            // registers must be written with 
                                            // the 128-bit input block for the 
                                            // next AES operation. Writing at a 
                                            // word-aligned offset within this 
                                            // address range will store the 
                                            // word (4 bytes) of data into the 
                                            // corresponding position of 4-word 
                                            // deep (16 bytes = 128-bit AES 
                                            // block) data input buffer. This 
                                            // buffer is used for the next AES 
                                            // operation. If the last data 
                                            // block is not completely filled 
                                            // with valid data (see notes 
                                            // below), it is allowed to write 
                                            // only the words with valid data. 
                                            // Next AES operation is triggered 
                                            // by writing to the input_ready 
                                            // flag of the AES_CTRL register. 
                                            // Note: AES typically operates on 
                                            // 128 bits block multiple input 
                                            // data. The CTR, GCM and CCM modes 
                                            // form an exception. The last 
                                            // block of a CTR-mode message may 
                                            // contain less than 128 bits 
                                            // (refer to [NIST 800-38A]): 0 < n 
                                            // <= 128 bits. For GCM/CCM, the 
                                            // last block of both AAD and 
                                            // message data may contain less 
                                            // than 128 bits (refer to [NIST 
                                            // 800-38D]). The EIP-120t 
                                            // automatically pads or masks 
                                            // misaligned ending data blocks 
                                            // with zeroes for GCM, CCM and 
                                            // CBC-MAC. For CTR mode, the 
                                            // remaining data in an unaligned 
                                            // data block is ignored. 

#define CRYPTO_AESDATAIN2_DATA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESDATAOUT2 register.
//
//*****************************************************************************
#define CRYPTO_AESDATAOUT2_DATA_M \
                                0xFFFFFFFF  // Data registers for output block 
                                            // data from the EIP-120t. - 
                                            // AES_DATA_OUT_2 = AES Output 
                                            // Data[95:64] of [127:0] For 
                                            // normal operations, this register 
                                            // is not used, since data input 
                                            // and output is transferred from 
                                            // and to the AES core via DMA. For 
                                            // a Host read operation, these 
                                            // registers contain the 128-bit 
                                            // output block from the latest AES 
                                            // operation. Reading from a 
                                            // word-aligned offset within this 
                                            // address range will read one word 
                                            // (4 bytes) of data out the 4-word 
                                            // deep (16 bytes = 128-bits AES 
                                            // block) data output buffer. The 
                                            // words (4 words, one full block) 
                                            // should be read before the core 
                                            // will move the next block to the 
                                            // data output buffer. To empty the 
                                            // data output buffer, the 
                                            // output_ready flag of the 
                                            // AES_CTRL register must be 
                                            // written. For the modes with 
                                            // authentication (CBC-MAC, GCM and 
                                            // CCM), the invalid (message) 
                                            // bytes/words can be written with 
                                            // any data. Note: The AAD / 
                                            // authentication only data is not 
                                            // copied to the output buffer but 
                                            // only used for authentication. 

#define CRYPTO_AESDATAOUT2_DATA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESDATAIN3 register.
//
//*****************************************************************************
#define CRYPTO_AESDATAIN3_DATA_M \
                                0xFFFFFFFF  // Data registers for input block 
                                            // data to the EIP-120t. - 
                                            // AES_DATA_IN_3 = AES Input 
                                            // Data[127:96] of [127:0] For 
                                            // normal operations, this register 
                                            // is not used, since data input 
                                            // and output is transferred from 
                                            // and to the AES core via DMA. For 
                                            // a Host write operation, these 
                                            // registers must be written with 
                                            // the 128-bit input block for the 
                                            // next AES operation. Writing at a 
                                            // word-aligned offset within this 
                                            // address range will store the 
                                            // word (4 bytes) of data into the 
                                            // corresponding position of 4-word 
                                            // deep (16 bytes = 128-bit AES 
                                            // block) data input buffer. This 
                                            // buffer is used for the next AES 
                                            // operation. If the last data 
                                            // block is not completely filled 
                                            // with valid data (see notes 
                                            // below), it is allowed to write 
                                            // only the words with valid data. 
                                            // Next AES operation is triggered 
                                            // by writing to the input_ready 
                                            // flag of the AES_CTRL register. 
                                            // Note: AES typically operates on 
                                            // 128 bits block multiple input 
                                            // data. The CTR, GCM and CCM modes 
                                            // form an exception. The last 
                                            // block of a CTR-mode message may 
                                            // contain less than 128 bits 
                                            // (refer to [NIST 800-38A]): 0 < n 
                                            // <= 128 bits. For GCM/CCM, the 
                                            // last block of both AAD and 
                                            // message data may contain less 
                                            // than 128 bits (refer to [NIST 
                                            // 800-38D]). The EIP-120t 
                                            // automatically pads or masks 
                                            // misaligned ending data blocks 
                                            // with zeroes for GCM, CCM and 
                                            // CBC-MAC. For CTR mode, the 
                                            // remaining data in an unaligned 
                                            // data block is ignored. 

#define CRYPTO_AESDATAIN3_DATA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESDATAOUT3 register.
//
//*****************************************************************************
#define CRYPTO_AESDATAOUT3_DATA_M \
                                0xFFFFFFFF  // Data registers for output block 
                                            // data from the EIP-120t. - 
                                            // AES_DATA_OUT_3 = AES Output 
                                            // Data[127:96] of [127:0] For 
                                            // normal operations, this register 
                                            // is not used, since data input 
                                            // and output is transferred from 
                                            // and to the AES core via DMA. For 
                                            // a Host read operation, these 
                                            // registers contain the 128-bit 
                                            // output block from the latest AES 
                                            // operation. Reading from a 
                                            // word-aligned offset within this 
                                            // address range will read one word 
                                            // (4 bytes) of data out the 4-word 
                                            // deep (16 bytes = 128-bits AES 
                                            // block) data output buffer. The 
                                            // words (4 words, one full block) 
                                            // should be read before the core 
                                            // will move the next block to the 
                                            // data output buffer. To empty the 
                                            // data output buffer, the 
                                            // output_ready flag of the 
                                            // AES_CTRL register must be 
                                            // written. For the modes with 
                                            // authentication (CBC-MAC, GCM and 
                                            // CCM), the invalid (message) 
                                            // bytes/words can be written with 
                                            // any data. Note: The AAD / 
                                            // authentication only data is not 
                                            // copied to the output buffer but 
                                            // only used for authentication. 

#define CRYPTO_AESDATAOUT3_DATA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESTAGOUT0 register.
//
//*****************************************************************************
#define CRYPTO_AESTAGOUT0_TAG_M 0xFFFFFFFF  // This register contains the 
                                            // authentication TAG for the 
                                            // combined and authentication-only 
                                            // modes. 
#define CRYPTO_AESTAGOUT0_TAG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESTAGOUT1 register.
//
//*****************************************************************************
#define CRYPTO_AESTAGOUT1_TAG_M 0xFFFFFFFF  // This register contains the 
                                            // authentication TAG for the 
                                            // combined and authentication-only 
                                            // modes. 
#define CRYPTO_AESTAGOUT1_TAG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESTAGOUT2 register.
//
//*****************************************************************************
#define CRYPTO_AESTAGOUT2_TAG_M 0xFFFFFFFF  // This register contains the 
                                            // authentication TAG for the 
                                            // combined and authentication-only 
                                            // modes. 
#define CRYPTO_AESTAGOUT2_TAG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_AESTAGOUT3 register.
//
//*****************************************************************************
#define CRYPTO_AESTAGOUT3_TAG_M 0xFFFFFFFF  // This register contains the 
                                            // authentication TAG for the 
                                            // combined and authentication-only 
                                            // modes. 
#define CRYPTO_AESTAGOUT3_TAG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the CRYPTO_O_HWOPT register.
//
//*****************************************************************************
#define CRYPTO_HWOPT_TYPE_M     0xFF000000  // This field reads 0x01 for the 
                                            // EIP-120t-1 device This field 
                                            // reads 0x02 for the EIP-120t-2 
                                            // device 
#define CRYPTO_HWOPT_TYPE_S     24
#define CRYPTO_HWOPT_ANH_INTERFACE \
                                0x00010000  // AHB interface is available If 
                                            // this bit is zero, the EIP-120t 
                                            // has a TCM interface 

#define CRYPTO_HWOPT_ANH_INTERFACE_M \
                                0x00010000
#define CRYPTO_HWOPT_ANH_INTERFACE_S 16
#define CRYPTO_HWOPT_SHA_256    0x00000100  // The HASH core supports SHA-256 
#define CRYPTO_HWOPT_SHA_256_M  0x00000100
#define CRYPTO_HWOPT_SHA_256_S  8
#define CRYPTO_HWOPT_AEC_CCM    0x00000080  // AES-CCM is available as a 
                                            // single operation 
#define CRYPTO_HWOPT_AEC_CCM_M  0x00000080
#define CRYPTO_HWOPT_AEC_CCM_S  7
#define CRYPTO_HWOPT_AEC_GCM    0x00000040  // AES-GCM is available as a 
                                            // single operation 
#define CRYPTO_HWOPT_AEC_GCM_M  0x00000040
#define CRYPTO_HWOPT_AEC_GCM_S  6
#define CRYPTO_HWOPT_AES_256    0x00000020  // AES core supports 256-bit keys 
                                            // Note: If both AES-128 and 
                                            // AES-256 are set to one, the AES 
                                            // core supports 192-bit keys as 
                                            // well. 
#define CRYPTO_HWOPT_AES_256_M  0x00000020
#define CRYPTO_HWOPT_AES_256_S  5
#define CRYPTO_HWOPT_AES_128    0x00000010  // AES core supports 128-bit keys 
#define CRYPTO_HWOPT_AES_128_M  0x00000010
#define CRYPTO_HWOPT_AES_128_S  4
#define CRYPTO_HWOPT_HASH       0x00000004  // HASH Core is available 
#define CRYPTO_HWOPT_HASH_M     0x00000004
#define CRYPTO_HWOPT_HASH_S     2
#define CRYPTO_HWOPT_AES        0x00000002  // AES core is available 
#define CRYPTO_HWOPT_AES_M      0x00000002
#define CRYPTO_HWOPT_AES_S      1
#define CRYPTO_HWOPT_KEY_STORE  0x00000001  // KEY STORE is available 
#define CRYPTO_HWOPT_KEY_STORE_M \
                                0x00000001
#define CRYPTO_HWOPT_KEY_STORE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the CRYPTO_O_HWVER register.
//
//*****************************************************************************
#define CRYPTO_HWVER_HW_MAJOR_VER_M \
                                0x0F000000  // Major version number 

#define CRYPTO_HWVER_HW_MAJOR_VER_S 24
#define CRYPTO_HWVER_HW_MINOR_VER_M \
                                0x00F00000  // Minor version number 

#define CRYPTO_HWVER_HW_MINOR_VER_S 20
#define CRYPTO_HWVER_HW_PATCH_LVL_M \
                                0x000F0000  // Patch level, starts at 0 at 
                                            // first delivery of this version. 

#define CRYPTO_HWVER_HW_PATCH_LVL_S 16
#define CRYPTO_HWVER_EIP_NUM_COMPL_M \
                                0x0000FF00  // These bits simply contain the 
                                            // complement of bits [7:0] (0x87), 
                                            // used by a driver to ascertain 
                                            // that the EIP-120t register is 
                                            // indeed read. 

#define CRYPTO_HWVER_EIP_NUM_COMPL_S 8
#define CRYPTO_HWVER_EIP_NUM_M  0x000000FF  // These bits encode the EIP 
                                            // number for the EIP-120t, this 
                                            // field contains the value 120 
                                            // (decimal) or 0x78. 
#define CRYPTO_HWVER_EIP_NUM_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_DMASTAT register.
//
//*****************************************************************************
#define CRYPTO_DMASTAT_PORT_ERR 0x00020000  // Reflects possible transfer 
                                            // errors on the AHB port. 
#define CRYPTO_DMASTAT_PORT_ERR_M \
                                0x00020000
#define CRYPTO_DMASTAT_PORT_ERR_S 17
#define CRYPTO_DMASTAT_CH1_ACTIVE \
                                0x00000002  // A 1 indicates that channel 1 is 
                                            // active (DMA transfer on-going). 

#define CRYPTO_DMASTAT_CH1_ACTIVE_M \
                                0x00000002
#define CRYPTO_DMASTAT_CH1_ACTIVE_S 1
#define CRYPTO_DMASTAT_CH0_ACTIVE \
                                0x00000001  // A 1 indicates that channel 0 is 
                                            // active (DMA transfer on-going). 

#define CRYPTO_DMASTAT_CH0_ACTIVE_M \
                                0x00000001
#define CRYPTO_DMASTAT_CH0_ACTIVE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_DMACH0CTL register.
//
//*****************************************************************************
#define CRYPTO_DMACH0CTL_PRIO   0x00000002  // Channel priority: 0: Low 1: 
                                            // High If both channels have the 
                                            // same priority, access of the 
                                            // channels to the external port is 
                                            // arbitrated using the Round Robin 
                                            // scheme. If one channel has a 
                                            // High priority and another one 
                                            // Low, the channel with the High 
                                            // priority is served first, in 
                                            // case of simultaneous access 
                                            // requests. 
#define CRYPTO_DMACH0CTL_PRIO_M 0x00000002
#define CRYPTO_DMACH0CTL_PRIO_S 1
#define CRYPTO_DMACH0CTL_PRIO_LOW \
                                0x00000000  // Channel priority: Low 
#define CRYPTO_DMACH0CTL_PRIO_HIGH \
                                0x00000002  // Channel priority: High 
#define CRYPTO_DMACH0CTL_EN     0x00000001  // Channel enable: 0: Disabled 1: 
                                            // Enable Note: Disabling an active 
                                            // channel will interrupt the DMA 
                                            // operation. The ongoing block 
                                            // transfer will be completed, but 
                                            // no new transfers will be 
                                            // requested. 
#define CRYPTO_DMACH0CTL_EN_M   0x00000001
#define CRYPTO_DMACH0CTL_EN_S   0
#define CRYPTO_DMACH0CTL_EN_DIS 0x00000000  // Channel Disabled 
#define CRYPTO_DMACH0CTL_EN_EN  0x00000001  // Channel Enabled 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_DMASWRESET register.
//
//*****************************************************************************
#define CRYPTO_DMASWRESET_RESET 0x00000001  // Software reset enable 0: 
                                            // DISABLED 1: ENABLED 
                                            // (self-cleared to zero). Note: 
                                            // Completion of the software reset 
                                            // must be checked via the 
                                            // DMAC_STATUS register. 
#define CRYPTO_DMASWRESET_RESET_M \
                                0x00000001
#define CRYPTO_DMASWRESET_RESET_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_DMACH1EXTADDR register.
//
//*****************************************************************************
#define CRYPTO_DMACH1EXTADDR_ADDR_M \
                                0xFFFFFFFF  // Channel external address value. 
                                            // When read during operation, it 
                                            // holds the last updated external 
                                            // address after being sent to the 
                                            // master interface. 

#define CRYPTO_DMACH1EXTADDR_ADDR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_DMACH1CTL register.
//
//*****************************************************************************
#define CRYPTO_DMACH1CTL_PRIO   0x00000002  // Channel priority: 0: Low 1: 
                                            // High If both channels have the 
                                            // same priority, access of the 
                                            // channels to the external port is 
                                            // arbitrated using the Round Robin 
                                            // scheme. If one channel has a 
                                            // High priority and another one 
                                            // Low, the channel with the High 
                                            // priority is served first, in 
                                            // case of simultaneous access 
                                            // requests. 
#define CRYPTO_DMACH1CTL_PRIO_M 0x00000002
#define CRYPTO_DMACH1CTL_PRIO_S 1
#define CRYPTO_DMACH1CTL_PRIO_LOW \
                                0x00000000  // Channel priority: Low 
#define CRYPTO_DMACH1CTL_PRIO_HIGH \
                                0x00000002  // Channel priority: High 
#define CRYPTO_DMACH1CTL_EN     0x00000001  // Channel enable: 0: Disabled 1: 
                                            // Enable Note: Disabling an active 
                                            // channel will interrupt the DMA 
                                            // operation. The ongoing block 
                                            // transfer will be completed, but 
                                            // no new transfers will be 
                                            // requested. 
#define CRYPTO_DMACH1CTL_EN_M   0x00000001
#define CRYPTO_DMACH1CTL_EN_S   0
#define CRYPTO_DMACH1CTL_EN_DIS 0x00000000  // Channel Disabled 
#define CRYPTO_DMACH1CTL_EN_EN  0x00000001  // Channel Enabled 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_DMABUSCFG register.
//
//*****************************************************************************
#define CRYPTO_DMABUSCFG_AHB_MST1_BURST_SIZE_M \
                                0x0000F000  // Maximum burst size that can be 
                                            // performed on the AHB bus 

#define CRYPTO_DMABUSCFG_AHB_MST1_BURST_SIZE_S 12
#define CRYPTO_DMABUSCFG_AHB_MST1_BURST_SIZE_4_BYTE \
                                0x00002000  // Burst of 4 bytes (default) 
#define CRYPTO_DMABUSCFG_AHB_MST1_BURST_SIZE_8_BYTE \
                                0x00003000  // Burst of 8 bytes 
#define CRYPTO_DMABUSCFG_AHB_MST1_BURST_SIZE_16_BYTE \
                                0x00004000  // Burst of 16 bytes 
#define CRYPTO_DMABUSCFG_AHB_MST1_BURST_SIZE_32_BYTE \
                                0x00005000  // Burst of 32 bytes 
#define CRYPTO_DMABUSCFG_AHB_MST1_BURST_SIZE_64_BYTE \
                                0x00006000  // Burst of 64 bytes 
#define CRYPTO_DMABUSCFG_AHB_MST1_IDLE_EN \
                                0x00000800  // Idle insertion between 
                                            // consecutive burst transfers on 
                                            // AHB 

#define CRYPTO_DMABUSCFG_AHB_MST1_IDLE_EN_M \
                                0x00000800
#define CRYPTO_DMABUSCFG_AHB_MST1_IDLE_EN_S 11
#define CRYPTO_DMABUSCFG_AHB_MST1_IDLE_EN_NO_IDLE \
                                0x00000000  // No Idle 
#define CRYPTO_DMABUSCFG_AHB_MST1_IDLE_EN_IDLE \
                                0x00000800  // Idle 
#define CRYPTO_DMABUSCFG_AHB_MST1_INCR_EN \
                                0x00000400  // Burst length type of AHB 
                                            // transfer 0: unspecified length 
                                            // burst transfers 1: fixed length 
                                            // burst or single transfers 

#define CRYPTO_DMABUSCFG_AHB_MST1_INCR_EN_M \
                                0x00000400
#define CRYPTO_DMABUSCFG_AHB_MST1_INCR_EN_S 10
#define CRYPTO_DMABUSCFG_AHB_MST1_INCR_EN_UNSPECIFIED \
                                0x00000000  // Unspecified 
#define CRYPTO_DMABUSCFG_AHB_MST1_INCR_EN_SPECIFIED \
                                0x00000400  // Specified 
#define CRYPTO_DMABUSCFG_AHB_MST1_LOCK_EN \
                                0x00000200  // Locked transform on AHB 

#define CRYPTO_DMABUSCFG_AHB_MST1_LOCK_EN_M \
                                0x00000200
#define CRYPTO_DMABUSCFG_AHB_MST1_LOCK_EN_S 9
#define CRYPTO_DMABUSCFG_AHB_MST1_LOCK_EN_NOT_LOCKED \
                                0x00000000  // Not Locked 
#define CRYPTO_DMABUSCFG_AHB_MST1_LOCK_EN_LOCKED \
                                0x00000200  // Transfers are locked 
#define CRYPTO_DMABUSCFG_AHB_MST1_BIGEND \
                                0x00000100  // Endianess for the AHB master 

#define CRYPTO_DMABUSCFG_AHB_MST1_BIGEND_M \
                                0x00000100
#define CRYPTO_DMABUSCFG_AHB_MST1_BIGEND_S 8
#define CRYPTO_DMABUSCFG_AHB_MST1_BIGEND_LITTLE_ENDIAN \
                                0x00000000  // Little Endian 
#define CRYPTO_DMABUSCFG_AHB_MST1_BIGEND_BIG_ENDIAN \
                                0x00000100  // Big Endian 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_DMAHWOPT register.
//
//*****************************************************************************
#define CRYPTO_DMAHWOPT_NR_OF_CHANNELS_M \
                                0x00000F00  // Number of channels implemented; 
                                            // for the EIP-120t this field has 
                                            // value 0x2. 

#define CRYPTO_DMAHWOPT_NR_OF_CHANNELS_S 8
#define CRYPTO_DMAHWOPT_NR_OF_PORTS_M \
                                0x00000007  // Number of ports implemented; 
                                            // for the EIP-120t this field has 
                                            // value 0x2. 

#define CRYPTO_DMAHWOPT_NR_OF_PORTS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_DMAHWVER register.
//
//*****************************************************************************
#define CRYPTO_DMAHWVER_HW_MAJOR_VER_M \
                                0x0F000000  // Major version number 

#define CRYPTO_DMAHWVER_HW_MAJOR_VER_S 24
#define CRYPTO_DMAHWVER_HW_MINOR_VER_M \
                                0x00F00000  // Minor version number 

#define CRYPTO_DMAHWVER_HW_MINOR_VER_S 20
#define CRYPTO_DMAHWVER_HW_PATCH_LVL_M \
                                0x000F0000  // Patch level, starts at 0 at 
                                            // first delivery of this version. 

#define CRYPTO_DMAHWVER_HW_PATCH_LVL_S 16
#define CRYPTO_DMAHWVER_EIP_NUM_COMPL_M \
                                0x0000FF00  // Bit-by-bit complement of the 
                                            // EIP_NUMBER field bits. 

#define CRYPTO_DMAHWVER_EIP_NUM_COMPL_S 8
#define CRYPTO_DMAHWVER_EIP_NUM_M \
                                0x000000FF  // Binary encoding of the 
                                            // EIP-number of this DMA 
                                            // Controller (209) 

#define CRYPTO_DMAHWVER_EIP_NUM_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_DMAPORTERR register.
//
//*****************************************************************************
#define CRYPTO_DMAPORTERR_AHB_ERR \
                                0x00001000  // A 1 indicates that the EIP-101m 
                                            // has detected an AHB bus error 

#define CRYPTO_DMAPORTERR_AHB_ERR_M \
                                0x00001000
#define CRYPTO_DMAPORTERR_AHB_ERR_S 12
#define CRYPTO_DMAPORTERR_LAST_CH \
                                0x00000200  // Indicates which channel has 
                                            // serviced last (channel 0 or 
                                            // channel 1) by AHB master port. 

#define CRYPTO_DMAPORTERR_LAST_CH_M \
                                0x00000200
#define CRYPTO_DMAPORTERR_LAST_CH_S 9
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_DMACH1LEN register.
//
//*****************************************************************************
#define CRYPTO_DMACH1LEN_LEN_M  0x0000FFFF  // Channel DMA length in bytes. 
                                            // During configuration, this 
                                            // register contains the DMA 
                                            // transfer length in bytes. During 
                                            // operation, it contains the last 
                                            // updated value of the DMA 
                                            // transfer length after being sent 
                                            // to the master interface. Note: 
                                            // Setting this register to a 
                                            // non-zero value starts the 
                                            // transfer if the channel is 
                                            // enabled. Therefore, this 
                                            // register must be written last 
                                            // when setting up a DMA channel! 
#define CRYPTO_DMACH1LEN_LEN_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_DMACH0LEN register.
//
//*****************************************************************************
#define CRYPTO_DMACH0LEN_LEN_M  0x0000FFFF  // Channel DMA length in bytes. 
                                            // During configuration, this 
                                            // register contains the DMA 
                                            // transfer length in bytes. During 
                                            // operation, it contains the last 
                                            // updated value of the DMA 
                                            // transfer length after being sent 
                                            // to the master interface. Note: 
                                            // Setting this register to a 
                                            // non-zero value starts the 
                                            // transfer if the channel is 
                                            // enabled. Therefore, this 
                                            // register must be written last 
                                            // when setting up a DMA channel! 
#define CRYPTO_DMACH0LEN_LEN_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_DMACH0EXTADDR register.
//
//*****************************************************************************
#define CRYPTO_DMACH0EXTADDR_ADDR_M \
                                0xFFFFFFFF  // Channel external address value. 
                                            // When read during operation, it 
                                            // holds the last updated external 
                                            // address after being sent to the 
                                            // master interface. 

#define CRYPTO_DMACH0EXTADDR_ADDR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_IRQCLR register.
//
//*****************************************************************************
#define CRYPTO_IRQCLR_DMA_BUS_ERR \
                                0x80000000  // If a one is written to this 
                                            // bit, the DMA bus error status is 
                                            // cleared, writing a zero has no 
                                            // effect. 

#define CRYPTO_IRQCLR_DMA_BUS_ERR_M \
                                0x80000000
#define CRYPTO_IRQCLR_DMA_BUS_ERR_S 31
#define CRYPTO_IRQCLR_KEY_ST_WR_ERR \
                                0x40000000  // If a one is written to this 
                                            // bit, the key store write error 
                                            // status is cleared, writing a 
                                            // zero has no effect. 

#define CRYPTO_IRQCLR_KEY_ST_WR_ERR_M \
                                0x40000000
#define CRYPTO_IRQCLR_KEY_ST_WR_ERR_S 30
#define CRYPTO_IRQCLR_KEY_ST_RD_ERR \
                                0x20000000  // If a one is written to this 
                                            // bit, the key store read error 
                                            // status is cleared, writing a 
                                            // zero has no effect. 

#define CRYPTO_IRQCLR_KEY_ST_RD_ERR_M \
                                0x20000000
#define CRYPTO_IRQCLR_KEY_ST_RD_ERR_S 29
#define CRYPTO_IRQCLR_DMA_IN_DONE \
                                0x00000002  // If a one is written to this 
                                            // bit, the DMA in done 
                                            // (irq_dma_in_done) interrupt 
                                            // output is cleared, writing a 
                                            // zero has no effect. Note that 
                                            // clearing an interrupt only makes 
                                            // sense if the interrupt output is 
                                            // programmed as level (refer to 
                                            // CTRL_INT_CFG) 

#define CRYPTO_IRQCLR_DMA_IN_DONE_M \
                                0x00000002
#define CRYPTO_IRQCLR_DMA_IN_DONE_S 1
#define CRYPTO_IRQCLR_RESULT_AVAIL \
                                0x00000001  // If a one is written to this 
                                            // bit, the result available 
                                            // (irq_result_av) interrupt output 
                                            // is cleared, writing a zero has 
                                            // no effect. Note that clearing an 
                                            // interrupt only makes sense if 
                                            // the interrupt output is 
                                            // programmed as level (refer to 
                                            // CTRL_INT_CFG) 

#define CRYPTO_IRQCLR_RESULT_AVAIL_M \
                                0x00000001
#define CRYPTO_IRQCLR_RESULT_AVAIL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_ALGSEL register.
//
//*****************************************************************************
#define CRYPTO_ALGSEL_TAG       0x80000000  // If this bit is cleared to zero, 
                                            // the DMA operation involves only 
                                            // data. If this bit is set, the 
                                            // DMA operation includes a TAG 
                                            // (Authentication Result / 
                                            // Digest). For SHA-256 operation, 
                                            // a DMA must be set up for both 
                                            // input data and TAG. For any 
                                            // other selected module, setting 
                                            // this bit only allows a DMA that 
                                            // reads the TAG. No data allowed 
                                            // to be transferred to or from the 
                                            // selected module via the DMA. 
#define CRYPTO_ALGSEL_TAG_M     0x80000000
#define CRYPTO_ALGSEL_TAG_S     31
#define CRYPTO_ALGSEL_AES       0x00000002  // If set to one, selects the AES 
                                            // engine as source/destination for 
                                            // the DMA Both Read and Write 
                                            // maximum transfer size to DMA 
                                            // engine is set to 16 bytes 
#define CRYPTO_ALGSEL_AES_M     0x00000002
#define CRYPTO_ALGSEL_AES_S     1
#define CRYPTO_ALGSEL_KEY_STORE 0x00000001  // If set to one, selects the Key 
                                            // Store as destination for the DMA 
                                            // The maximum transfer size to DMA 
                                            // engine is set to 32 bytes 
                                            // (however transfers of 16, 24 and 
                                            // 32 bytes are allowed) 
#define CRYPTO_ALGSEL_KEY_STORE_M \
                                0x00000001
#define CRYPTO_ALGSEL_KEY_STORE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_IRQTYPE register.
//
//*****************************************************************************
#define CRYPTO_IRQTYPE_LVL      0x00000001  // If this bit is zero, the 
                                            // interrupt output is a pulse If 
                                            // this bit is set to one, the 
                                            // interrupt is a level interrupt 
                                            // that must be cleared by writing 
                                            // the interrupt clear register 
                                            // This bit is applicable for both 
                                            // interrupt output signals. 
#define CRYPTO_IRQTYPE_LVL_M    0x00000001
#define CRYPTO_IRQTYPE_LVL_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_IRQSET register.
//
//*****************************************************************************
#define CRYPTO_IRQSET_DMA_BUS_ERR \
                                0x80000000  // If a one is written to this 
                                            // bit, the DMA bus error status is 
                                            // cleared, writing a zero has no 
                                            // effect. 

#define CRYPTO_IRQSET_DMA_BUS_ERR_M \
                                0x80000000
#define CRYPTO_IRQSET_DMA_BUS_ERR_S 31
#define CRYPTO_IRQSET_KEY_ST_WR_ERR \
                                0x40000000  // If a one is written to this 
                                            // bit, the key store write error 
                                            // status is cleared, writing a 
                                            // zero has no effect. 

#define CRYPTO_IRQSET_KEY_ST_WR_ERR_M \
                                0x40000000
#define CRYPTO_IRQSET_KEY_ST_WR_ERR_S 30
#define CRYPTO_IRQSET_KEY_ST_RD_ERR \
                                0x20000000  // If a one is written to this 
                                            // bit, the key store read error 
                                            // status is cleared, writing a 
                                            // zero has no effect. 

#define CRYPTO_IRQSET_KEY_ST_RD_ERR_M \
                                0x20000000
#define CRYPTO_IRQSET_KEY_ST_RD_ERR_S 29
#define CRYPTO_IRQSET_DMA_IN_DONE \
                                0x00000002  // If a one is written to this 
                                            // bit, the DMA data in done 
                                            // (irq_dma_in_done) interrupt 
                                            // output is set to one, writing a 
                                            // zero has no effect. If the 
                                            // interrupt configuration register 
                                            // is programmed to pulse, clearing 
                                            // the DMA data in done 
                                            // (irq_dma_in_done) interrupt is 
                                            // not needed. If it is programmed 
                                            // to level, clearing the interrupt 
                                            // output should be done by writing 
                                            // the interrupt clear register 
                                            // (CTRL_INT_CLR) 

#define CRYPTO_IRQSET_DMA_IN_DONE_M \
                                0x00000002
#define CRYPTO_IRQSET_DMA_IN_DONE_S 1
#define CRYPTO_IRQSET_RESULT_AVAIL \
                                0x00000001  // If a one is written to this 
                                            // bit, the result available 
                                            // (irq_result_av) interrupt output 
                                            // is set to one, writing a zero 
                                            // has no effect. If the interrupt 
                                            // configuration register is 
                                            // programmed to pulse, clearing 
                                            // the result available 
                                            // (irq_result_av) interrupt is not 
                                            // needed. If it is programmed to 
                                            // level, clearing the interrupt 
                                            // output should be done by writing 
                                            // the interrupt clear register 
                                            // (CTRL_INT_CLR) 

#define CRYPTO_IRQSET_RESULT_AVAIL_M \
                                0x00000001
#define CRYPTO_IRQSET_RESULT_AVAIL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_DMAPROTCTL register.
//
//*****************************************************************************
#define CRYPTO_DMAPROTCTL_EN    0x00000001  // If this bit is cleared to zero, 
                                            // the AHB master interface always 
                                            // uses 'USER access' cycles. If 
                                            // this bit is set to one, the 
                                            // master AHB bus uses 'PRIVILEGED 
                                            // access' type cycles if an AHB 
                                            // read operation is performed, 
                                            // using DMA, with the key store 
                                            // module as destination. 
#define CRYPTO_DMAPROTCTL_EN_M  0x00000001
#define CRYPTO_DMAPROTCTL_EN_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_SWRESET register.
//
//*****************************************************************************
#define CRYPTO_SWRESET_RESET    0x00000001  // If this bit is set to 1, the 
                                            // following modules are reset: - 
                                            // Master control internal state is 
                                            // reset. That includes interrupt, 
                                            // error status register and result 
                                            // available interrupt generation 
                                            // FSM. - Key store module state is 
                                            // reset. That includes clearing 
                                            // the Written Area flags; 
                                            // therefore the keys must be 
                                            // reloaded to the key store 
                                            // module. Writing 0 has no effect. 
                                            // The bit is self cleared after 
                                            // executing the reset. 
#define CRYPTO_SWRESET_RESET_M  0x00000001
#define CRYPTO_SWRESET_RESET_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the CRYPTO_O_IRQEN register.
//
//*****************************************************************************
#define CRYPTO_IRQEN_DMA_IN_DONE \
                                0x00000002  // If this bit is set to zero the 
                                            // DMA input done (irq_dma_in_done) 
                                            // interrupt output is disabled and 
                                            // will remain zero If this bit is 
                                            // set to one, the DMA input done 
                                            // interrupt output is enabled 

#define CRYPTO_IRQEN_DMA_IN_DONE_M \
                                0x00000002
#define CRYPTO_IRQEN_DMA_IN_DONE_S 1
#define CRYPTO_IRQEN_RESULT_AVAIL \
                                0x00000001  // If this bit is set to zero the 
                                            // result available (irq_result_av) 
                                            // interrupt output is disabled and 
                                            // will remain zero If this bit is 
                                            // set to one, the result available 
                                            // interrupt output is enabled 

#define CRYPTO_IRQEN_RESULT_AVAIL_M \
                                0x00000001
#define CRYPTO_IRQEN_RESULT_AVAIL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_IRQSTAT register.
//
//*****************************************************************************
#define CRYPTO_IRQSTAT_DMA_BUS_ERR \
                                0x80000000  // This bit is set when a DMA bus 
                                            // error is detected during a DMA 
                                            // operation. The value of this 
                                            // register is held until it is 
                                            // cleared via the CTRL_INT_CLR 
                                            // register. Note: This error is 
                                            // asserted if an error is detected 
                                            // on the AHB master interface 
                                            // during a DMA operation. 

#define CRYPTO_IRQSTAT_DMA_BUS_ERR_M \
                                0x80000000
#define CRYPTO_IRQSTAT_DMA_BUS_ERR_S 31
#define CRYPTO_IRQSTAT_KEY_ST_WR_ERR \
                                0x40000000  // This bit is set when a write 
                                            // error is detected during the DMA 
                                            // write operation to the key store 
                                            // memory. The value of this 
                                            // register is held until it is 
                                            // cleared via the CTRL_INT_CLR 
                                            // register. Note: This error is 
                                            // asserted if a DMA operation does 
                                            // not cover a full key area or 
                                            // more areas are written than 
                                            // expected. 

#define CRYPTO_IRQSTAT_KEY_ST_WR_ERR_M \
                                0x40000000
#define CRYPTO_IRQSTAT_KEY_ST_WR_ERR_S 30
#define CRYPTO_IRQSTAT_KEY_ST_RD_ERR \
                                0x20000000  // This bit will be set when a 
                                            // read error is detected during 
                                            // the read of a key from the key 
                                            // store, while copying it to the 
                                            // AES core. The value of this 
                                            // register is held until it is 
                                            // cleared via the CTRL_INT_CLR 
                                            // register. Note: This error is 
                                            // asserted if a key location is 
                                            // selected in the key store that 
                                            // is not available. 

#define CRYPTO_IRQSTAT_KEY_ST_RD_ERR_M \
                                0x20000000
#define CRYPTO_IRQSTAT_KEY_ST_RD_ERR_S 29
#define CRYPTO_IRQSTAT_DMA_IN_DONE \
                                0x00000002  // This read only bit returns the 
                                            // actual DMA data in done 
                                            // (irq_data_in_done) interrupt 
                                            // status of the DMA data in done 
                                            // interrupt output pin 
                                            // (irq_data_in_done). 

#define CRYPTO_IRQSTAT_DMA_IN_DONE_M \
                                0x00000002
#define CRYPTO_IRQSTAT_DMA_IN_DONE_S 1
#define CRYPTO_IRQSTAT_RESULT_AVAIL \
                                0x00000001  // This read only bit returns the 
                                            // actual result available 
                                            // (irq_result_av) interrupt status 
                                            // of the result available 
                                            // interrupt output pin 
                                            // (irq_result_av). 

#define CRYPTO_IRQSTAT_RESULT_AVAIL_M \
                                0x00000001
#define CRYPTO_IRQSTAT_RESULT_AVAIL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_KEYWRITTENAREA register.
//
//*****************************************************************************
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN7 \
                                0x00000080  // On read RAM_AREA_WRITTEN7 
                                            // returns written status) 
                                            // RAM_AREA_WRITTEN7 bit can be 
                                            // reset by writing a 1. Note: This 
                                            // register will be reset on a soft 
                                            // reset from the master control 
                                            // module. After a soft reset, all 
                                            // keys must be rewritten to the 
                                            // key store memory. 

#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN7_M \
                                0x00000080
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN7_S 7
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN7_NOT_WRITTEN \
                                0x00000000  // This RAM area is not written 
                                            // with valid key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN7_WRITTEN \
                                0x00000080  // This RAM area is not with valid 
                                            // key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN6 \
                                0x00000040  // On read RAM_AREA_WRITTEN6 
                                            // returns written status) 
                                            // RAM_AREA_WRITTEN6 bit can be 
                                            // reset by writing a 1. Note: This 
                                            // register will be reset on a soft 
                                            // reset from the master control 
                                            // module. After a soft reset, all 
                                            // keys must be rewritten to the 
                                            // key store memory. 

#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN6_M \
                                0x00000040
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN6_S 6
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN6_NOT_WRITTEN \
                                0x00000000  // This RAM area is not written 
                                            // with valid key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN6_WRITTEN \
                                0x00000040  // This RAM area is not with valid 
                                            // key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN5 \
                                0x00000020  // On read RAM_AREA_WRITTEN5 
                                            // returns written status) 
                                            // RAM_AREA_WRITTEN5 bit can be 
                                            // reset by writing a 1. Note: This 
                                            // register will be reset on a soft 
                                            // reset from the master control 
                                            // module. After a soft reset, all 
                                            // keys must be rewritten to the 
                                            // key store memory. 

#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN5_M \
                                0x00000020
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN5_S 5
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN5_NOT_WRITTEN \
                                0x00000000  // This RAM area is not written 
                                            // with valid key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN5_WRITTEN \
                                0x00000020  // This RAM area is not with valid 
                                            // key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN4 \
                                0x00000010  // On read RAM_AREA_WRITTEN4 
                                            // returns written status) 
                                            // RAM_AREA_WRITTEN4 bit can be 
                                            // reset by writing a 1. Note: This 
                                            // register will be reset on a soft 
                                            // reset from the master control 
                                            // module. After a soft reset, all 
                                            // keys must be rewritten to the 
                                            // key store memory. 

#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN4_M \
                                0x00000010
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN4_S 4
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN4_NOT_WRITTEN \
                                0x00000000  // This RAM area is not written 
                                            // with valid key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN4_WRITTEN \
                                0x00000010  // This RAM area is not with valid 
                                            // key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN3 \
                                0x00000008  // On read RAM_AREA_WRITTEN3 
                                            // returns written status) 
                                            // RAM_AREA_WRITTEN3 bit can be 
                                            // reset by writing a 1. Note: This 
                                            // register will be reset on a soft 
                                            // reset from the master control 
                                            // module. After a soft reset, all 
                                            // keys must be rewritten to the 
                                            // key store memory. 

#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN3_M \
                                0x00000008
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN3_S 3
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN3_NOT_WRITTEN \
                                0x00000000  // This RAM area is not written 
                                            // with valid key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN3_WRITTEN \
                                0x00000008  // This RAM area is not with valid 
                                            // key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN2 \
                                0x00000004  // On read RAM_AREA_WRITTEN2 
                                            // returns written status) 
                                            // RAM_AREA_WRITTEN2 bit can be 
                                            // reset by writing a 1. Note: This 
                                            // register will be reset on a soft 
                                            // reset from the master control 
                                            // module. After a soft reset, all 
                                            // keys must be rewritten to the 
                                            // key store memory. 

#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN2_M \
                                0x00000004
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN2_S 2
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN2_NOT_WRITTEN \
                                0x00000000  // This RAM area is not written 
                                            // with valid key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN2_WRITTEN \
                                0x00000004  // This RAM area is not with valid 
                                            // key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN1 \
                                0x00000002  // On read RAM_AREA_WRITTEN1 
                                            // returns written status) 
                                            // RAM_AREA_WRITTEN1 bit can be 
                                            // reset by writing a 1. Note: This 
                                            // register will be reset on a soft 
                                            // reset from the master control 
                                            // module. After a soft reset, all 
                                            // keys must be rewritten to the 
                                            // key store memory. 

#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN1_M \
                                0x00000002
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN1_S 1
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN1_NOT_WRITTEN \
                                0x00000000  // This RAM area is not written 
                                            // with valid key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN1_WRITTEN \
                                0x00000002  // This RAM area is not with valid 
                                            // key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN0 \
                                0x00000001  // On read RAM_AREA_WRITTEN0 
                                            // returns written status) 
                                            // RAM_AREA_WRITTEN0 bit can be 
                                            // reset by writing a 1. Note: This 
                                            // register will be reset on a soft 
                                            // reset from the master control 
                                            // module. After a soft reset, all 
                                            // keys must be rewritten to the 
                                            // key store memory. 

#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN0_M \
                                0x00000001
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN0_S 0
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN0_NOT_WRITTEN \
                                0x00000000  // This RAM area is not written 
                                            // with valid key information 
#define CRYPTO_KEYWRITTENAREA_RAM_AREA_WRITTEN0_WRITTEN \
                                0x00000001  // This RAM area is not with valid 
                                            // key information 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_KEYWRITEAREA register.
//
//*****************************************************************************
#define CRYPTO_KEYWRITEAREA_RAM_AREA7 \
                                0x00000080  // Represents an area of 128 bits. 
                                            // Select the key store RAM area(s) 
                                            // where the key(s) needs to be 
                                            // written. Writing to multiple RAM 
                                            // locations is only possible when 
                                            // the selected RAM areas are 
                                            // sequential. 

#define CRYPTO_KEYWRITEAREA_RAM_AREA7_M \
                                0x00000080
#define CRYPTO_KEYWRITEAREA_RAM_AREA7_S 7
#define CRYPTO_KEYWRITEAREA_RAM_AREA7_NOT_SEL \
                                0x00000000  // RAM_AREA is not selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA7_SEL \
                                0x00000080  // RAM_AREA is selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA6 \
                                0x00000040  // Represents an area of 128 bits. 
                                            // Select the key store RAM area(s) 
                                            // where the key(s) needs to be 
                                            // written. Writing to multiple RAM 
                                            // locations is only possible when 
                                            // the selected RAM areas are 
                                            // sequential. 

#define CRYPTO_KEYWRITEAREA_RAM_AREA6_M \
                                0x00000040
#define CRYPTO_KEYWRITEAREA_RAM_AREA6_S 6
#define CRYPTO_KEYWRITEAREA_RAM_AREA6_NOT_SEL \
                                0x00000000  // RAM_AREA is not selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA6_SEL \
                                0x00000040  // RAM_AREA is selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA5 \
                                0x00000020  // Represents an area of 128 bits. 
                                            // Select the key store RAM area(s) 
                                            // where the key(s) needs to be 
                                            // written. Writing to multiple RAM 
                                            // locations is only possible when 
                                            // the selected RAM areas are 
                                            // sequential. 

#define CRYPTO_KEYWRITEAREA_RAM_AREA5_M \
                                0x00000020
#define CRYPTO_KEYWRITEAREA_RAM_AREA5_S 5
#define CRYPTO_KEYWRITEAREA_RAM_AREA5_NOT_SEL \
                                0x00000000  // RAM_AREA is not selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA5_SEL \
                                0x00000020  // RAM_AREA is selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA4 \
                                0x00000010  // Represents an area of 128 bits. 
                                            // Select the key store RAM area(s) 
                                            // where the key(s) needs to be 
                                            // written. Writing to multiple RAM 
                                            // locations is only possible when 
                                            // the selected RAM areas are 
                                            // sequential. 

#define CRYPTO_KEYWRITEAREA_RAM_AREA4_M \
                                0x00000010
#define CRYPTO_KEYWRITEAREA_RAM_AREA4_S 4
#define CRYPTO_KEYWRITEAREA_RAM_AREA4_NOT_SEL \
                                0x00000000  // RAM_AREA is not selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA4_SEL \
                                0x00000010  // RAM_AREA is selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA3 \
                                0x00000008  // Represents an area of 128 bits. 
                                            // Select the key store RAM area(s) 
                                            // where the key(s) needs to be 
                                            // written. Writing to multiple RAM 
                                            // locations is only possible when 
                                            // the selected RAM areas are 
                                            // sequential. 

#define CRYPTO_KEYWRITEAREA_RAM_AREA3_M \
                                0x00000008
#define CRYPTO_KEYWRITEAREA_RAM_AREA3_S 3
#define CRYPTO_KEYWRITEAREA_RAM_AREA3_NOT_SEL \
                                0x00000000  // RAM_AREA is not selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA3_SEL \
                                0x00000008  // RAM_AREA is selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA2 \
                                0x00000004  // Represents an area of 128 bits. 
                                            // Select the key store RAM area(s) 
                                            // where the key(s) needs to be 
                                            // written. Writing to multiple RAM 
                                            // locations is only possible when 
                                            // the selected RAM areas are 
                                            // sequential. 

#define CRYPTO_KEYWRITEAREA_RAM_AREA2_M \
                                0x00000004
#define CRYPTO_KEYWRITEAREA_RAM_AREA2_S 2
#define CRYPTO_KEYWRITEAREA_RAM_AREA2_NOT_SEL \
                                0x00000000  // RAM_AREA is not selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA2_SEL \
                                0x00000004  // RAM_AREA is selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA1 \
                                0x00000002  // Represents an area of 128 bits. 
                                            // Select the key store RAM area(s) 
                                            // where the key(s) needs to be 
                                            // written. Writing to multiple RAM 
                                            // locations is only possible when 
                                            // the selected RAM areas are 
                                            // sequential. 

#define CRYPTO_KEYWRITEAREA_RAM_AREA1_M \
                                0x00000002
#define CRYPTO_KEYWRITEAREA_RAM_AREA1_S 1
#define CRYPTO_KEYWRITEAREA_RAM_AREA1_NOT_SEL \
                                0x00000000  // RAM_AREA is not selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA1_SEL \
                                0x00000002  // RAM_AREA is selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA0 \
                                0x00000001  // Represents an area of 128 bits. 
                                            // Select the key store RAM area(s) 
                                            // where the key(s) needs to be 
                                            // written. Writing to multiple RAM 
                                            // locations is only possible when 
                                            // the selected RAM areas are 
                                            // sequential. 

#define CRYPTO_KEYWRITEAREA_RAM_AREA0_M \
                                0x00000001
#define CRYPTO_KEYWRITEAREA_RAM_AREA0_S 0
#define CRYPTO_KEYWRITEAREA_RAM_AREA0_NOT_SEL \
                                0x00000000  // RAM_AREA is not selected to be 
                                            // written 
#define CRYPTO_KEYWRITEAREA_RAM_AREA0_SEL \
                                0x00000001  // RAM_AREA is selected to be 
                                            // written 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_KEYSIZE register.
//
//*****************************************************************************
#define CRYPTO_KEYSIZE_SIZE_M   0x00000003  // Key size When writing this to 
                                            // this register, 
                                            // KEY_STORE_WRITTEN_AREA register 
                                            // will be reset. Note: For the 
                                            // EIP-120t-2 configuration the 
                                            // key_size bits are fixed to 01, 
                                            // for software compatibility the 
                                            // KEY_STORE_WRITTEN_AREA register 
                                            // will still be reset when writing 
                                            // to this register. 
#define CRYPTO_KEYSIZE_SIZE_S   0
#define CRYPTO_KEYSIZE_SIZE_128_BIT \
                                0x00000001  // 128 bits 
#define CRYPTO_KEYSIZE_SIZE_192_BIT \
                                0x00000002  // 192 bits 
#define CRYPTO_KEYSIZE_SIZE_256_BIT \
                                0x00000003  // 256 bits 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CRYPTO_O_KEYREADAREA register.
//
//*****************************************************************************
#define CRYPTO_KEYREADAREA_BUSY 0x80000000  // Key store operation busy status 
                                            // flag (read only) 0: operation is 
                                            // completed. 1: operation is not 
                                            // completed and the key store is 
                                            // busy. 
#define CRYPTO_KEYREADAREA_BUSY_M \
                                0x80000000
#define CRYPTO_KEYREADAREA_BUSY_S 31
#define CRYPTO_KEYREADAREA_RAM_AREA_M \
                                0x0000000F  // Selects the area of the key 
                                            // store RAM from where the key 
                                            // needs to be read that will be 
                                            // writen to the AES engine. RAM 
                                            // areas ram_area0, ram_area2, 
                                            // ram_area4 and ram_area6 are the 
                                            // only valid read areas for 192 
                                            // and 256 bits key sizes. Only RAM 
                                            // areas that contain valid written 
                                            // keys can be selected. 

#define CRYPTO_KEYREADAREA_RAM_AREA_S 0
#define CRYPTO_KEYREADAREA_RAM_AREA_RAM_AREA0 \
                                0x00000000  // RAM Area 0 
#define CRYPTO_KEYREADAREA_RAM_AREA_RAM_AREA1 \
                                0x00000001  // RAM Area 1 
#define CRYPTO_KEYREADAREA_RAM_AREA_RAM_AREA2 \
                                0x00000002  // RAM Area 2 
#define CRYPTO_KEYREADAREA_RAM_AREA_RAM_AREA3 \
                                0x00000003  // RAM Area 3 
#define CRYPTO_KEYREADAREA_RAM_AREA_RAM_AREA4 \
                                0x00000004  // RAM Area 4 
#define CRYPTO_KEYREADAREA_RAM_AREA_RAM_AREA5 \
                                0x00000005  // RAM Area 5 
#define CRYPTO_KEYREADAREA_RAM_AREA_RAM_AREA6 \
                                0x00000006  // RAM Area 6 
#define CRYPTO_KEYREADAREA_RAM_AREA_RAM_AREA7 \
                                0x00000007  // RAM Area 7 
#define CRYPTO_KEYREADAREA_RAM_AREA_NO_RAM \
                                0x00000008  // No RAM 


#endif // __HW_CRYPTO_H__

