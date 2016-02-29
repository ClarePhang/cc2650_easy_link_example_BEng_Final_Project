
/******************************************************************************
*  Filename:       hw_prcm.h
*  Revised:        $Date: 2014-03-13 14:29:16 +0100 (to, 13 mar 2014) $
*  Revision:       $Revision: 40389 $
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
#ifndef __HW_PRCM_H__
#define __HW_PRCM_H__

//*****************************************************************************
//
// The following are defines for the PRCM register offsets.
//
//*****************************************************************************
#define PRCM_O_INFRCLKDIVR      0x00000000  // INF clock division factor in 
                                            // run mode 
#define PRCM_O_INFRCLKDIVS      0x00000004  // INF clock division factor in 
                                            // sleep mode 
#define PRCM_O_INFRCLKDIVDS     0x00000008  // INF clock division factor in 
                                            // deep sleep mode 
#define PRCM_O_VDCTL            0x0000000C  // CPU Power domain control 
#define PRCM_O_CLKLOADCTL       0x00000028  // Load settings to CLKCTRL 
#define PRCM_O_RFCCLKG          0x0000002C  // RFCORE clk gate 
#define PRCM_O_VIMSCLKG         0x00000030  // FLASH clk gate 
#define PRCM_O_PERBUSCPUCLKG    0x00000034  // PERBUSCPU clock clock gate 
#define PRCM_O_SECDMACLKGR      0x0000003C  // SEC and DMA clk gate for run 
                                            // mode 
#define PRCM_O_SECDMASCLKG      0x00000040  // SEC and DMA clk gate for sleep 
                                            // mode 
#define PRCM_O_SECDMACLKGDS     0x00000044  // SEC and DMA clk gate for deep 
                                            // sleep mode 
#define PRCM_O_GPIOCLKGR        0x00000048  // GPIO clk gate for run mode 
#define PRCM_O_GPIOCLKGS        0x0000004C  // GPIO clk gate for sleep mode 
#define PRCM_O_GPIOCLKGDS       0x00000050  // GPIO clk gate for deep sleep 
                                            // mode 
#define PRCM_O_GPTCLKGR         0x00000054  // GPTM clk gate for run mode 
#define PRCM_O_GPTCLKGS         0x00000058  // GPTM clk gate for sleep mode 
#define PRCM_O_GPTCLKGDS        0x0000005C  // GPTM clk gate for deep sleep 
                                            // mode 
#define PRCM_O_I2CCLKGR         0x00000060  // I2C clk gate for run mode 
#define PRCM_O_I2CCLKGS         0x00000064  // I2C clk gate for sleep mode 
#define PRCM_O_I2CCLKGDS        0x00000068  // I2C clk gate for deep sleep 
                                            // mode 
#define PRCM_O_UARTCLKGR        0x0000006C  // UART clk gate for run mode 
#define PRCM_O_UARTCLKGS        0x00000070  // UART clk gate for sleep mode 
#define PRCM_O_UARTCLKGDS       0x00000074  // UART clk gate for deep sleep 
                                            // mode 
#define PRCM_O_SSICLKGR         0x00000078  // SSI clk gate for run mode 
#define PRCM_O_SSICLKGS         0x0000007C  // SSI clk gate for sleep mode 
#define PRCM_O_SSICLKGDS        0x00000080  // SSI clk gate for deep sleep 
                                            // mode 
#define PRCM_O_I2SCLKGR         0x00000084  // I2S clk gate for run mode 
#define PRCM_O_I2SCLKGS         0x00000088  // I2S clk gate for sleep mode 
#define PRCM_O_I2SCLKGDS        0x0000008C  // I2S clk gate for deep sleep 
                                            // mode 
#define PRCM_O_SYSBUSCLKDIV     0x000000B4  // SYSBUS clock division factor 
#define PRCM_O_CPUCLKDIV        0x000000B8  // CPU clock division factor 
#define PRCM_O_PERBUSCPUCLKDIV  0x000000BC  // PERBUSCPU clock division factor 
#define PRCM_O_PERDMACLKDIV     0x000000C4  // PERDMA clock division factor 
#define PRCM_O_I2SBCLKSEL       0x000000C8  // I2S clock ctrl 
#define PRCM_O_GPTCLKDIV        0x000000CC  // GPTM scalar 
#define PRCM_O_I2SCLKCTL        0x000000D0  // ACLK control 
#define PRCM_O_I2SMCLKDIV       0x000000D4  // MCLK Division ratio 
#define PRCM_O_I2SBCLKDIV       0x000000D8  // BCLK Division ratio 
#define PRCM_O_I2SWCLKDIV       0x000000DC  // WCLK Division ratio 
#define PRCM_O_RESETSECDMA      0x000000F0  // RESET for SEC and DMA 
#define PRCM_O_RESETGPIO        0x000000F4  // RESET for GPIO IPs 
#define PRCM_O_RESETGPT         0x000000F8  // RESET for GPTM IPs 
#define PRCM_O_RESETI2C         0x000000FC  // RESET for I2C IPs 
#define PRCM_O_RESETUART        0x00000100  // RESET for UART IPs 
#define PRCM_O_RESETSSI         0x00000104  // RESET for SSI IPs 
#define PRCM_O_RESETI2S         0x00000108  // RESET for I2S IP 
#define PRCM_O_SWRESET          0x0000010C  // SW initiated resets 
#define PRCM_O_WARMRESET        0x00000110  // WARM reset status 
#define PRCM_O_PDCTL0           0x0000012C  // Power domain control 
#define PRCM_O_PDCTL0RFC        0x00000130  // RFCORE Power domain control 
#define PRCM_O_PDCTL0SERIAL     0x00000134  // SERIAL Power domain control 
#define PRCM_O_PDCTL0PERIPH     0x00000138  // PERIPH Power domain control 
#define PRCM_O_PDSTAT0          0x00000140  // Power domain status 
#define PRCM_O_PDSTAT0RFC       0x00000144  // RFCORE Power domain status 
#define PRCM_O_PDSTAT0SERIAL    0x00000148  // SERIAL Power domain status 
#define PRCM_O_PDSTAT0PERIPH    0x0000014C  // PERIPH Power domain status 
#define PRCM_O_PDCTL1           0x0000017C  // MNG Power domain control 
#define PRCM_O_PDCTL1CPU        0x00000184  // CPU direct control 
#define PRCM_O_PDCTL1RFC        0x00000188  // RFC direct control 
#define PRCM_O_PDCTL1VIMS       0x0000018C  // FL_BUS direct control 
#define PRCM_O_MNGPWR_BUS_CTRL  0x00000190  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define PRCM_O_PDSTAT1          0x00000194  // Power manager status 
#define PRCM_O_PDSTAT1BUS       0x00000198  // BUS direct status read 
#define PRCM_O_PDSTAT1RFC       0x0000019C  // RFC direct status read 
#define PRCM_O_PDSTAT1CPU       0x000001A0  // CPU direct status read 
#define PRCM_O_PDSTAT1VIMS      0x000001A4  // FLASH direct status read 
#define PRCM_O_RFCBITS          0x000001CC  // Control to RFCORE 
#define PRCM_O_RFCMODESEL       0x000001D0  // Selected mode 
#define PRCM_O_RAMRETEN         0x00000224  // Memory retention control 
#define PRCM_O_PDRETEN          0x0000022C  // Retention control 
#define PRCM_O_CLKGOVR          0x0000026C  // Force modules clocks on 
#define PRCM_O_SYSRESETDBG      0x00000270  // SW system reset 
#define PRCM_O_PDFORCEON        0x00000278  // Force power domains on 
#define PRCM_O_PDTEST           0x0000027C  // Turn on TEST power doamin 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_INFRCLKDIVR register.
//
//*****************************************************************************
#define PRCM_INFRCLKDIVR_RATIO_M \
                                0x00000003  // Division rate for this clock If 
                                            // source clock is 48 MHz and 
                                            // DIVFACTOR = 0 it is overriden to 
                                            // 2 by HW but the register reading 
                                            // result in "00" if that is the 
                                            // last written contents. INTERNAL 
                                            // NOTE: Infrastructure clock. This 
                                            // clock is asynchronous and 
                                            // distributed using ULL clock 
                                            // cells. 

#define PRCM_INFRCLKDIVR_RATIO_S 0
#define PRCM_INFRCLKDIVR_RATIO_DIV1 \
                                0x00000000  // Divide by 1 
#define PRCM_INFRCLKDIVR_RATIO_DIV2 \
                                0x00000001  // Divide by 2 
#define PRCM_INFRCLKDIVR_RATIO_DIV8 \
                                0x00000002  // Divide by 8 
#define PRCM_INFRCLKDIVR_RATIO_DIV32 \
                                0x00000003  // Divide by 32 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_INFRCLKDIVS register.
//
//*****************************************************************************
#define PRCM_INFRCLKDIVS_RATIO_M \
                                0x00000003  // Division rate for this clock 
                                            // Infrastructure clock This clock 
                                            // is asynchronous and distributed 
                                            // using ULL clock cells. If source 
                                            // clock is 48 MHz and DIVFACTOR = 
                                            // 0 it is overriden to 2 by HW but 
                                            // the register reading result in 
                                            // "00" if that is the last written 
                                            // contents. 

#define PRCM_INFRCLKDIVS_RATIO_S 0
#define PRCM_INFRCLKDIVS_RATIO_DIV1 \
                                0x00000000  // Divide by 1 
#define PRCM_INFRCLKDIVS_RATIO_DIV2 \
                                0x00000001  // Divide by 2 
#define PRCM_INFRCLKDIVS_RATIO_DIV8 \
                                0x00000002  // Divide by 8 
#define PRCM_INFRCLKDIVS_RATIO_DIV32 \
                                0x00000003  // Divide by 32 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_INFRCLKDIVDS register.
//
//*****************************************************************************
#define PRCM_INFRCLKDIVDS_RATIO_M \
                                0x00000003  // Division rate for this clock 
                                            // Infrastructure clock This clock 
                                            // is asynchronous and distributed 
                                            // using ULL clock cells. If source 
                                            // clock is 48 MHz and DIVFACTOR = 
                                            // 0 it is overriden to 2 by HW but 
                                            // the register reading result in 
                                            // "00" if that is the last written 
                                            // contents. 

#define PRCM_INFRCLKDIVDS_RATIO_S 0
#define PRCM_INFRCLKDIVDS_RATIO_DIV1 \
                                0x00000000  // Divide by 1 
#define PRCM_INFRCLKDIVDS_RATIO_DIV2 \
                                0x00000001  // Divide by 2 
#define PRCM_INFRCLKDIVDS_RATIO_DIV8 \
                                0x00000002  // Divide by 8 
#define PRCM_INFRCLKDIVDS_RATIO_DIV32 \
                                0x00000003  // Divide by 32 
//*****************************************************************************
//
// The following are defines for the bit fields in the PRCM_O_VDCTL register.
//
//*****************************************************************************
#define PRCM_VDCTL_MCU_VD       0x00000004  // Request WUC to power down the 
                                            // MCU voltage domain 0: No request 
                                            // 1: Assert request when CM3 is in 
                                            // deepsleep and RFCORE is idle The 
                                            // bit will have no effect before 
                                            // 1. RFCORE do no request the bus 
                                            // 2. deepsleep is asserted 
#define PRCM_VDCTL_MCU_VD_M     0x00000004
#define PRCM_VDCTL_MCU_VD_S     2
#define PRCM_VDCTL_ULDO         0x00000001  // Request WUC to switch to uLDO. 
                                            // 0: No request 1: Assert request 
                                            // when possible The bit will have 
                                            // no effect before the following 
                                            // requirements are met: 1. FLASH 
                                            // has accepted to be powered down 
                                            // 2. deepsleep is asserted 
#define PRCM_VDCTL_ULDO_M       0x00000001
#define PRCM_VDCTL_ULDO_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_CLKLOADCTL register.
//
//*****************************************************************************
#define PRCM_CLKLOADCTL_LOAD_DONE \
                                0x00000002  // Status of load. Will be cleared 
                                            // to 0 when a write access to any 
                                            // of the registers requiring a 
                                            // load and be set to 1 when a load 
                                            // is done. Note that writing no 
                                            // change to a register will result 
                                            // in the load status being 
                                            // cleared. 0 : One or more 
                                            // registers have been write 
                                            // accessed after last load 1 : No 
                                            // registers are write accessed 
                                            // after last load 

#define PRCM_CLKLOADCTL_LOAD_DONE_M \
                                0x00000002
#define PRCM_CLKLOADCTL_LOAD_DONE_S 1
#define PRCM_CLKLOADCTL_LOAD    0x00000001  // 0: No action 1: Load settings 
                                            // to CLKCTRL. Bit is HW cleared. 
                                            // Multiple changes to settings may 
                                            // be done before load is written 
                                            // once so all changes takes place 
                                            // at the same time. LOAD can also 
                                            // be done after single setting 
                                            // updates. Registers that needs to 
                                            // be followed by LOAD before 
                                            // settings being applied are: - 
                                            // SYSBUSCLK_DIV - CPUCLK_DIV - 
                                            // PERBUSCPUCLK_DIV - 
                                            // PERBUSDMACLK_DIV - PERDMACLK_DIV 
                                            // - CG_PERBUSCPUCLK - 
                                            // CG_PERBUSDMACLK - CG_RFCORECLK - 
                                            // CG_FLASHCLK - RCG_SEC_DMA - 
                                            // SCG_SEC_DMA - DSCG_SEC_DMA - 
                                            // RCG_GPIO - SCG_GPIO - DSCG_GPIO 
                                            // - RCG_GPTM - SCG_GPTM - 
                                            // DSCG_GPTM - GPTM_DIV - RCG_I2C - 
                                            // SCG_I2C - DSCG_I2C - RCG_SSI - 
                                            // SCG_SSI - DSCG_SSI - RCG_UART - 
                                            // SCG_UART - DSCG_UART - RCG_I2S - 
                                            // SCG_I2S - DSCG_I2S - BCLK_CTRL - 
                                            // AGENCN - AGENMDR - AGENBDR - 
                                            // AGENWDR - CONFIG_RAMSIZE 
#define PRCM_CLKLOADCTL_LOAD_M  0x00000001
#define PRCM_CLKLOADCTL_LOAD_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the PRCM_O_RFCCLKG register.
//
//*****************************************************************************
#define PRCM_RFCCLKG_CLK_EN     0x00000001  // 0: Clock gated 1: Clock running 
                                            // if RFCORE power domain is on 
#define PRCM_RFCCLKG_CLK_EN_M   0x00000001
#define PRCM_RFCCLKG_CLK_EN_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_VIMSCLKG register.
//
//*****************************************************************************
#define PRCM_VIMSCLKG_CLK_EN_M  0x00000003  // 00: Clock gated 01: Clock 
                                            // running if CPUCORECLK is running 
                                            // 11: Clock running 
#define PRCM_VIMSCLKG_CLK_EN_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PERBUSCPUCLKG register.
//
//*****************************************************************************
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_SECDMACLKGR register.
//
//*****************************************************************************
#define PRCM_SECDMACLKGR_DMA_CLK_EN \
                                0x00000100  // 0: Clock gated 1: Clock running 

#define PRCM_SECDMACLKGR_DMA_CLK_EN_M \
                                0x00000100
#define PRCM_SECDMACLKGR_DMA_CLK_EN_S 8
#define PRCM_SECDMACLKGR_TRNG_CLK_EN \
                                0x00000002  // 0: Clock gated 1: Clock running 

#define PRCM_SECDMACLKGR_TRNG_CLK_EN_M \
                                0x00000002
#define PRCM_SECDMACLKGR_TRNG_CLK_EN_S 1
#define PRCM_SECDMACLKGR_CRYPTO_CLK_EN \
                                0x00000001  // 0: Clock gated 1: Clock running 

#define PRCM_SECDMACLKGR_CRYPTO_CLK_EN_M \
                                0x00000001
#define PRCM_SECDMACLKGR_CRYPTO_CLK_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_SECDMASCLKG register.
//
//*****************************************************************************
#define PRCM_SECDMASCLKG_DMA_CLK_EN \
                                0x00000100  // 0: Clock gated 1: Clock running 

#define PRCM_SECDMASCLKG_DMA_CLK_EN_M \
                                0x00000100
#define PRCM_SECDMASCLKG_DMA_CLK_EN_S 8
#define PRCM_SECDMASCLKG_TRNG_CLK_EN \
                                0x00000002  // 0: Clock gated 1: Clock running 

#define PRCM_SECDMASCLKG_TRNG_CLK_EN_M \
                                0x00000002
#define PRCM_SECDMASCLKG_TRNG_CLK_EN_S 1
#define PRCM_SECDMASCLKG_CRYPTO_CLK_EN \
                                0x00000001  // 0: Clock gated 1: Clock running 

#define PRCM_SECDMASCLKG_CRYPTO_CLK_EN_M \
                                0x00000001
#define PRCM_SECDMASCLKG_CRYPTO_CLK_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_SECDMACLKGDS register.
//
//*****************************************************************************
#define PRCM_SECDMACLKGDS_DMA_CLK_EN \
                                0x00000100  // 0: Clock gated 1: Clock running 

#define PRCM_SECDMACLKGDS_DMA_CLK_EN_M \
                                0x00000100
#define PRCM_SECDMACLKGDS_DMA_CLK_EN_S 8
#define PRCM_SECDMACLKGDS_TRNG_CLK_EN \
                                0x00000002  // 0: Clock gated 1: Clock running 

#define PRCM_SECDMACLKGDS_TRNG_CLK_EN_M \
                                0x00000002
#define PRCM_SECDMACLKGDS_TRNG_CLK_EN_S 1
#define PRCM_SECDMACLKGDS_CRYPTO_CLK_EN \
                                0x00000001  // 0: Clock gated 1: Clock running 

#define PRCM_SECDMACLKGDS_CRYPTO_CLK_EN_M \
                                0x00000001
#define PRCM_SECDMACLKGDS_CRYPTO_CLK_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_GPIOCLKGR register.
//
//*****************************************************************************
#define PRCM_GPIOCLKGR_CLK_EN   0x00000001  // 0: Clock gated 1: Clock running 
#define PRCM_GPIOCLKGR_CLK_EN_M 0x00000001
#define PRCM_GPIOCLKGR_CLK_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_GPIOCLKGS register.
//
//*****************************************************************************
#define PRCM_GPIOCLKGS_CLK_EN   0x00000001  // 0: Clock gated 1: Clock running 
#define PRCM_GPIOCLKGS_CLK_EN_M 0x00000001
#define PRCM_GPIOCLKGS_CLK_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_GPIOCLKGDS register.
//
//*****************************************************************************
#define PRCM_GPIOCLKGDS_CLK_EN  0x00000001  // 0: Clock gated 1: Clock running 
#define PRCM_GPIOCLKGDS_CLK_EN_M \
                                0x00000001
#define PRCM_GPIOCLKGDS_CLK_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_GPTCLKGR register.
//
//*****************************************************************************
#define PRCM_GPTCLKGR_CLK_EN_M  0x0000000F  // 0: Clock gated 1: Clock running 
#define PRCM_GPTCLKGR_CLK_EN_S  0
#define PRCM_GPTCLKGR_CLK_EN_GPT0 \
                                0x00000001  // Enable clock for GPTM0 
#define PRCM_GPTCLKGR_CLK_EN_GPT1 \
                                0x00000002  // Enable clock for GPTM1 
#define PRCM_GPTCLKGR_CLK_EN_GPT2 \
                                0x00000004  // Enable clock for GPTM2 
#define PRCM_GPTCLKGR_CLK_EN_GPT3 \
                                0x00000008  // Enable clock for GPTM3 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_GPTCLKGS register.
//
//*****************************************************************************
#define PRCM_GPTCLKGS_CLK_EN_M  0x0000000F  // 0: Clock gated 1: Clock running 
#define PRCM_GPTCLKGS_CLK_EN_S  0
#define PRCM_GPTCLKGS_CLK_EN_GPT0 \
                                0x00000001  // Enable clock for GPTM0 
#define PRCM_GPTCLKGS_CLK_EN_GPT1 \
                                0x00000002  // Enable clock for GPTM1 
#define PRCM_GPTCLKGS_CLK_EN_GPT2 \
                                0x00000004  // Enable clock for GPTM2 
#define PRCM_GPTCLKGS_CLK_EN_GPT3 \
                                0x00000008  // Enable clock for GPTM3 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_GPTCLKGDS register.
//
//*****************************************************************************
#define PRCM_GPTCLKGDS_CLK_EN_M 0x0000000F  // 0: Clock gated 1: Clock running 
#define PRCM_GPTCLKGDS_CLK_EN_S 0
#define PRCM_GPTCLKGDS_CLK_EN_GPT0 \
                                0x00000001  // Enable clock for GPTM0 
#define PRCM_GPTCLKGDS_CLK_EN_GPT1 \
                                0x00000002  // Enable clock for GPTM1 
#define PRCM_GPTCLKGDS_CLK_EN_GPT2 \
                                0x00000004  // Enable clock for GPTM2 
#define PRCM_GPTCLKGDS_CLK_EN_GPT3 \
                                0x00000008  // Enable clock for GPTM3 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_I2CCLKGR register.
//
//*****************************************************************************
#define PRCM_I2CCLKGR_CLK_EN    0x00000001  // 0: Clock gated 1: Clock running 
#define PRCM_I2CCLKGR_CLK_EN_M  0x00000001
#define PRCM_I2CCLKGR_CLK_EN_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_I2CCLKGS register.
//
//*****************************************************************************
#define PRCM_I2CCLKGS_CLK_EN    0x00000001  // 0: Clock gated 1: Clock running 
#define PRCM_I2CCLKGS_CLK_EN_M  0x00000001
#define PRCM_I2CCLKGS_CLK_EN_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_I2CCLKGDS register.
//
//*****************************************************************************
#define PRCM_I2CCLKGDS_CLK_EN   0x00000001  // 0: Clock gated 1: Clock running 
#define PRCM_I2CCLKGDS_CLK_EN_M 0x00000001
#define PRCM_I2CCLKGDS_CLK_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_UARTCLKGR register.
//
//*****************************************************************************
#define PRCM_UARTCLKGR_CLK_EN   0x00000001  // 0: Clock gated 1: Clock running 
#define PRCM_UARTCLKGR_CLK_EN_M 0x00000001
#define PRCM_UARTCLKGR_CLK_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_UARTCLKGS register.
//
//*****************************************************************************
#define PRCM_UARTCLKGS_CLK_EN   0x00000001  // 0: Clock gated 1: Clock running 
#define PRCM_UARTCLKGS_CLK_EN_M 0x00000001
#define PRCM_UARTCLKGS_CLK_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_UARTCLKGDS register.
//
//*****************************************************************************
#define PRCM_UARTCLKGDS_CLK_EN  0x00000001  // 0: Clock gated 1: Clock running 
#define PRCM_UARTCLKGDS_CLK_EN_M \
                                0x00000001
#define PRCM_UARTCLKGDS_CLK_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_SSICLKGR register.
//
//*****************************************************************************
#define PRCM_SSICLKGR_CLK_EN_M  0x00000003  // 0: Clock gated 1: Clock running 
#define PRCM_SSICLKGR_CLK_EN_S  0
#define PRCM_SSICLKGR_CLK_EN_SSI0 \
                                0x00000001  // Enable clock for SSI0 
#define PRCM_SSICLKGR_CLK_EN_SSI1 \
                                0x00000002  // Enable clock for SSI1 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_SSICLKGS register.
//
//*****************************************************************************
#define PRCM_SSICLKGS_CLK_EN_M  0x00000003  // 0: Clock gated 1: Clock running 
#define PRCM_SSICLKGS_CLK_EN_S  0
#define PRCM_SSICLKGS_CLK_EN_SSI0 \
                                0x00000001  // Enable clock for SSI0 
#define PRCM_SSICLKGS_CLK_EN_SSI1 \
                                0x00000002  // Enable clock for SSI1 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_SSICLKGDS register.
//
//*****************************************************************************
#define PRCM_SSICLKGDS_CLK_EN_M 0x00000003  // 0: Clock gated 1: Clock running 
#define PRCM_SSICLKGDS_CLK_EN_S 0
#define PRCM_SSICLKGDS_CLK_EN_SSI0 \
                                0x00000001  // Enable clock for SSI0 
#define PRCM_SSICLKGDS_CLK_EN_SSI1 \
                                0x00000002  // Enable clock for SSI1 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_I2SCLKGR register.
//
//*****************************************************************************
#define PRCM_I2SCLKGR_CLK_EN    0x00000001  // 0: Clock gated 1: Clock running 
#define PRCM_I2SCLKGR_CLK_EN_M  0x00000001
#define PRCM_I2SCLKGR_CLK_EN_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_I2SCLKGS register.
//
//*****************************************************************************
#define PRCM_I2SCLKGS_CLK_EN    0x00000001  // 0: Clock gated 1: Clock running 
#define PRCM_I2SCLKGS_CLK_EN_M  0x00000001
#define PRCM_I2SCLKGS_CLK_EN_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_I2SCLKGDS register.
//
//*****************************************************************************
#define PRCM_I2SCLKGDS_CLK_EN   0x00000001  // 0: Clock gated 1: Clock running 
#define PRCM_I2SCLKGDS_CLK_EN_M 0x00000001
#define PRCM_I2SCLKGDS_CLK_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_SYSBUSCLKDIV register.
//
//*****************************************************************************
#define PRCM_SYSBUSCLKDIV_RATIO_M \
                                0x00000007  // Division rate for this clock 

#define PRCM_SYSBUSCLKDIV_RATIO_S 0
#define PRCM_SYSBUSCLKDIV_RATIO_DIV1 \
                                0x00000000  // Divide by 1 
#define PRCM_SYSBUSCLKDIV_RATIO_DIV2 \
                                0x00000001  // Divide by 2 
#define PRCM_SYSBUSCLKDIV_RATIO_DIV4 \
                                0x00000002  // Divide by 4 
#define PRCM_SYSBUSCLKDIV_RATIO_DIV8 \
                                0x00000003  // Divide by 8 
#define PRCM_SYSBUSCLKDIV_RATIO_DIV16 \
                                0x00000004  // Divide by 16 
#define PRCM_SYSBUSCLKDIV_RATIO_DIV32 \
                                0x00000005  // Divide by 32 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_CPUCLKDIV register.
//
//*****************************************************************************
#define PRCM_CPUCLKDIV_RATIO    0x00000001  // Division rate for this clock 0: 
                                            // 1 1: 2 
#define PRCM_CPUCLKDIV_RATIO_M  0x00000001
#define PRCM_CPUCLKDIV_RATIO_S  0
#define PRCM_CPUCLKDIV_RATIO_DIV1 \
                                0x00000000  // Divide by 1 
#define PRCM_CPUCLKDIV_RATIO_DIV2 \
                                0x00000001  // Divide by 2 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PERBUSCPUCLKDIV register.
//
//*****************************************************************************
#define PRCM_PERBUSCPUCLKDIV_RATIO_M \
                                0x0000000F  // Division rate for this clock 
                                            // when sysbusclk is gated and 
                                            // CG_PERBUSCPUCLK = 1. When 
                                            // sysbusclk is running 
                                            // perbuscpuclk use SYSBUSCLK_DIV 
                                            // setting 

#define PRCM_PERBUSCPUCLKDIV_RATIO_S 0
#define PRCM_PERBUSCPUCLKDIV_RATIO_DIV1 \
                                0x00000000  // Divide by 1 
#define PRCM_PERBUSCPUCLKDIV_RATIO_DIV2 \
                                0x00000001  // Divide by 2 
#define PRCM_PERBUSCPUCLKDIV_RATIO_DIV4 \
                                0x00000002  // Divide by 4 
#define PRCM_PERBUSCPUCLKDIV_RATIO_DIV8 \
                                0x00000003  // Divide by 8 
#define PRCM_PERBUSCPUCLKDIV_RATIO_DIV16 \
                                0x00000004  // Divide by 16 
#define PRCM_PERBUSCPUCLKDIV_RATIO_DIV32 \
                                0x00000005  // Divide by 32 
#define PRCM_PERBUSCPUCLKDIV_RATIO_DIV64 \
                                0x00000006  // Divide by 64 
#define PRCM_PERBUSCPUCLKDIV_RATIO_DIV128 \
                                0x00000007  // Divide by 128 
#define PRCM_PERBUSCPUCLKDIV_RATIO_DIV256 \
                                0x00000008  // Divide by 256 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PERDMACLKDIV register.
//
//*****************************************************************************
#define PRCM_PERDMACLKDIV_RATIO_M \
                                0x0000000F  // Division rate for this clock 
                                            // Asynchronous clock. Software is 
                                            // responsible for selecting a safe 
                                            // frequency. (less than or equal 
                                            // to 5/3 perbusdmaclk for uart 
                                            // operation, less than or equal 
                                            // perbusdmaclk for ssi operation) 

#define PRCM_PERDMACLKDIV_RATIO_S 0
#define PRCM_PERDMACLKDIV_RATIO_DIV1 \
                                0x00000000  // Divide by 1 
#define PRCM_PERDMACLKDIV_RATIO_DIV2 \
                                0x00000001  // Divide by 2 
#define PRCM_PERDMACLKDIV_RATIO_DIV4 \
                                0x00000002  // Divide by 4 
#define PRCM_PERDMACLKDIV_RATIO_DIV8 \
                                0x00000003  // Divide by 8 
#define PRCM_PERDMACLKDIV_RATIO_DIV16 \
                                0x00000004  // Divide by 16 
#define PRCM_PERDMACLKDIV_RATIO_DIV32 \
                                0x00000005  // Divide by 32 
#define PRCM_PERDMACLKDIV_RATIO_DIV64 \
                                0x00000006  // Divide by 64 
#define PRCM_PERDMACLKDIV_RATIO_DIV128 \
                                0x00000007  // Divide by 128 
#define PRCM_PERDMACLKDIV_RATIO_DIV256 \
                                0x00000008  // Divide by 256 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_I2SBCLKSEL register.
//
//*****************************************************************************
#define PRCM_I2SBCLKSEL_SRC     0x00000001  // BCLK source selector 0: Use 
                                            // external bclk 1: Use internally 
                                            // generated clock 
#define PRCM_I2SBCLKSEL_SRC_M   0x00000001
#define PRCM_I2SBCLKSEL_SRC_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_GPTCLKDIV register.
//
//*****************************************************************************
#define PRCM_GPTCLKDIV_RATIO_M  0x0000000F  // Scalar used for GPTMs. The 
                                            // division rate will be constant 
                                            // and ungated for Run / Sleep/ 
                                            // DeepSleep mode when it is slower 
                                            // than the PERBUSCPU_DIV setting. 
                                            // When set faster than 
                                            // PERBUSCPU_DIV setting the 
                                            // PERBUSCPU_DIV will be used. Note 
                                            // that the register will contain 
                                            // the written content even though 
                                            // the setting is faster that 
                                            // PERBUSCUP_DIV setting. 
#define PRCM_GPTCLKDIV_RATIO_S  0
#define PRCM_GPTCLKDIV_RATIO_DIV1 \
                                0x00000000  // Divide by 1 
#define PRCM_GPTCLKDIV_RATIO_DIV2 \
                                0x00000001  // Divide by 2 
#define PRCM_GPTCLKDIV_RATIO_DIV4 \
                                0x00000002  // Divide by 4 
#define PRCM_GPTCLKDIV_RATIO_DIV8 \
                                0x00000003  // Divide by 8 
#define PRCM_GPTCLKDIV_RATIO_DIV16 \
                                0x00000004  // Divide by 16 
#define PRCM_GPTCLKDIV_RATIO_DIV32 \
                                0x00000005  // Divide by 32 
#define PRCM_GPTCLKDIV_RATIO_DIV64 \
                                0x00000006  // Divide by 64 
#define PRCM_GPTCLKDIV_RATIO_DIV128 \
                                0x00000007  // Divide by 128 
#define PRCM_GPTCLKDIV_RATIO_DIV256 \
                                0x00000008  // Divide by 256 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_I2SCLKCTL register.
//
//*****************************************************************************
#define PRCM_I2SCLKCTL_SMPL_ON_POSEDGE \
                                0x00000008  // Active edge of clk_bclk in the 
                                            // audio interface module. If set, 
                                            // wclkgen is toggled on negative 
                                            // edge of bclkgen. Opposite if not 
                                            // set. 

#define PRCM_I2SCLKCTL_SMPL_ON_POSEDGE_M \
                                0x00000008
#define PRCM_I2SCLKCTL_SMPL_ON_POSEDGE_S 3
#define PRCM_I2SCLKCTL_WCLK_PHASE_M \
                                0x00000006  // Decides how the wclkgen 
                                            // division ratio is calculated and 
                                            // used to generate different duty 
                                            // cycles (WDIV in the AGENWDR 
                                            // register). 00: Single phase 01: 
                                            // Dual phase 10: User Defined 11: 
                                            // Reserved/Undefined 

#define PRCM_I2SCLKCTL_WCLK_PHASE_S 1
#define PRCM_I2SCLKCTL_EN       0x00000001  // Enables the generation of 
                                            // mclkgen, bclkgen, wclkgen and 
                                            // wclkgen_n when set. If disabled, 
                                            // mclkgen, bclkgen and wclkgen 
                                            // will be static low, while 
                                            // wclkgen_n will be static high. 
#define PRCM_I2SCLKCTL_EN_M     0x00000001
#define PRCM_I2SCLKCTL_EN_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_I2SMCLKDIV register.
//
//*****************************************************************************
#define PRCM_I2SMCLKDIV_MDIV_M  0x000003FF  // An unsigned factor of the 
                                            // division ratio used to generate 
                                            // mclkgen [2-1024]: mclkgen = 
                                            // clk_aclk/MDIV[Hz] A value of 0 
                                            // is interpreted as 1024. A value 
                                            // of 1 is invalid. If MDIV is odd 
                                            // the low phase of the clock is 
                                            // one clk_aclk period longer than 
                                            // the high phase. 
#define PRCM_I2SMCLKDIV_MDIV_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_I2SBCLKDIV register.
//
//*****************************************************************************
#define PRCM_I2SBCLKDIV_BDIV_M  0x000003FF  // An unsigned factor of the 
                                            // division ratio used to generate 
                                            // bclkgen [2-1024]: bclkgen = 
                                            // clk_aclk/MDIV[Hz] A value of 0 
                                            // is interpreted as 1024. A value 
                                            // of 1 is invalid. If BDIV is odd 
                                            // and ADRP=0, the low phase of the 
                                            // clock is one clk_aclk period 
                                            // longer than the high phase, if 
                                            // ADRP=1 the high phase is longer. 
#define PRCM_I2SBCLKDIV_BDIV_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_I2SWCLKDIV register.
//
//*****************************************************************************
#define PRCM_I2SWCLKDIV_WDIV_M  0x0000FFFF  // If WCLKPHS = 00, Single phase. 
                                            // wclkgen is high one bclkgen 
                                            // period and low WDIV[9:0] 
                                            // (unsigned, [1-1023]) bclkgen 
                                            // periods. wclkgen = clk_aclk / 
                                            // BDIV*(WDIV[9:0] + 1) [Hz] If 
                                            // WCLKPHS = 01, Dual phase. Each 
                                            // phase on wclkgen (50% duty 
                                            // cycle) is WDIV[9:0] (unsigned, 
                                            // [1-1023]) bclkgen periods. 
                                            // wclkgen = clk_aclk / 
                                            // BDIV*(2*WDIV[9:0]) [Hz] If 
                                            // WCLKPHS = 10, User defined. 
                                            // wclkgen is high WDIV[7:0] 
                                            // (unsigned, [1-255]) bclkgen 
                                            // periods and low WDIV[15:8] 
                                            // (unsigned, [1-255]) bclkgen 
                                            // periods. wclkgen = clk_aclk / 
                                            // (BDIV*(WDIV[7:0] + WDIV[15:8]) 
                                            // [Hz] 
#define PRCM_I2SWCLKDIV_WDIV_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_RESETSECDMA register.
//
//*****************************************************************************
#define PRCM_RESETSECDMA_DMA    0x00000100  // Write 1 to reset. HW cleared. 
                                            // Acess will only have effect when 
                                            // PERIPH power domain is on 
                                            // (SWPWR_STATUS.PERIPH = 1) Before 
                                            // writing set 
                                            // FLASH_CONFIG.DIS_READACCESS = 1 
                                            // to ensure the reset is not 
                                            // active while executing from 
                                            // flash. This means one cannot 
                                            // execute from flash when using 
                                            // the SW reset. 
#define PRCM_RESETSECDMA_DMA_M  0x00000100
#define PRCM_RESETSECDMA_DMA_S  8
#define PRCM_RESETSECDMA_TRNG   0x00000002  // Write 1 to reset. HW cleared. 
                                            // Acess will only have effect when 
                                            // PERIPH power domain is on 
                                            // (SWPWR_STATUS.PERIPH = 1) Before 
                                            // writing set 
                                            // FLASH_CONFIG.DIS_READACCESS = 1 
                                            // to ensure the reset is not 
                                            // active while executing from 
                                            // flash. This means one cannot 
                                            // execute from flash when using 
                                            // the SW reset. 
#define PRCM_RESETSECDMA_TRNG_M 0x00000002
#define PRCM_RESETSECDMA_TRNG_S 1
#define PRCM_RESETSECDMA_CRYPTO 0x00000001  // Write 1 to reset. HW cleared. 
                                            // Acess will only have effect when 
                                            // PERIPH power domain is on 
                                            // (SWPWR_STATUS.PERIPH = 1) Before 
                                            // writing set 
                                            // FLASH_CONFIG.DIS_READACCESS = 1 
                                            // to ensure the reset is not 
                                            // active while executing from 
                                            // flash. This means one cannot 
                                            // execute from flash when using 
                                            // the SW reset. 
#define PRCM_RESETSECDMA_CRYPTO_M \
                                0x00000001
#define PRCM_RESETSECDMA_CRYPTO_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_RESETGPIO register.
//
//*****************************************************************************
#define PRCM_RESETGPIO_GPIO     0x00000001  // 0: No action 1: Reset GPIO. HW 
                                            // cleared. Acess will only have 
                                            // effect when PERIPH power domain 
                                            // is on (SWPWR_STATUS.PERIPH = 1) 
                                            // Before writing set 
                                            // FLASH_CONFIG.DIS_READACCESS = 1 
                                            // to ensure the reset is not 
                                            // active while executing from 
                                            // flash. This means one cannot 
                                            // execute from flash when using 
                                            // the SW reset. 
#define PRCM_RESETGPIO_GPIO_M   0x00000001
#define PRCM_RESETGPIO_GPIO_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_RESETGPT register.
//
//*****************************************************************************
#define PRCM_RESETGPT_GPT_M     0x0000000F  // 0: No action 1: Reset GPTM. HW 
                                            // cleared. Acess will only have 
                                            // effect when PERIPH power domain 
                                            // is on (SWPWR_STATUS.PERIPH = 1) 
                                            // Before writing set 
                                            // FLASH_CONFIG.DIS_READACCESS = 1 
                                            // to ensure the reset is not 
                                            // active while executing from 
                                            // flash. This means one cannot 
                                            // execute from flash when using 
                                            // the SW reset. 
#define PRCM_RESETGPT_GPT_S     0
#define PRCM_RESETGPT_GPT_GPT0  0x00000001  // Reset GPTM0 
#define PRCM_RESETGPT_GPT_GPT1  0x00000002  // Reset GPTM1 
#define PRCM_RESETGPT_GPT_GPT2  0x00000004  // Reset GPTM2 
#define PRCM_RESETGPT_GPT_GPT3  0x00000008  // Reset GPTM3 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_RESETI2C register.
//
//*****************************************************************************
#define PRCM_RESETI2C_I2C       0x00000001  // 0: No action 1: Reset I2C. HW 
                                            // cleared. Acess will only have 
                                            // effect when PERIPH power domain 
                                            // is on (SWPWR_STATUS.SERIAL = 1) 
                                            // Before writing set 
                                            // FLASH_CONFIG.DIS_READACCESS = 1 
                                            // to ensure the reset is not 
                                            // active while executing from 
                                            // flash. This means one cannot 
                                            // execute from flash when using 
                                            // the SW reset. 
#define PRCM_RESETI2C_I2C_M     0x00000001
#define PRCM_RESETI2C_I2C_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_RESETUART register.
//
//*****************************************************************************
#define PRCM_RESETUART_UART     0x00000001  // 0: No action 1: Reset UART. HW 
                                            // cleared. Acess will only have 
                                            // effect when PERIPH power domain 
                                            // is on (SWPWR_STATUS.SERIAL = 1) 
                                            // Before writing set 
                                            // FLASH_CONFIG.DIS_READACCESS = 1 
                                            // to ensure the reset is not 
                                            // active while executing from 
                                            // flash. This means one cannot 
                                            // execute from flash when using 
                                            // the SW reset. 
#define PRCM_RESETUART_UART_M   0x00000001
#define PRCM_RESETUART_UART_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_RESETSSI register.
//
//*****************************************************************************
#define PRCM_RESETSSI_SSI_M     0x00000003  // 0: No action 1: Reset SSI. HW 
                                            // cleared. Before writing set 
                                            // FLASH_CONFIG.DIS_READACCESS = 1 
                                            // to ensure the reset is not 
                                            // active while executing from 
                                            // flash. This means one cannot 
                                            // execute from flash when using 
                                            // the SW reset. SSI 0: Acess will 
                                            // only have effect when PERIPH 
                                            // power domain is on 
                                            // (SWPWR_STATUS.SERIAL = 1) SSI 1: 
                                            // Acess will only have effect when 
                                            // PERIPH power domain is on 
                                            // (SWPWR_STATUS.PERIPH = 1) 
#define PRCM_RESETSSI_SSI_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_RESETI2S register.
//
//*****************************************************************************
#define PRCM_RESETI2S_I2S       0x00000001  // Write 1 to reset. HW cleared. 
                                            // Acess will only have effect when 
                                            // PERIPH power domain is on 
                                            // (SWPWR_STATUS.PERIPH = 1) 
#define PRCM_RESETI2S_I2S_M     0x00000001
#define PRCM_RESETI2S_I2S_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the PRCM_O_SWRESET register.
//
//*****************************************************************************
#define PRCM_SWRESET_MCU        0x00000004  // 0: No action 1: Generates reset 
                                            // request to WUC to reset the 
                                            // entire MCU voltage domain. 
                                            // Request is cleared by HW. 
                                            // Everything in MCU voltage domain 
                                            // reset including PRCM itself 
#define PRCM_SWRESET_MCU_M      0x00000004
#define PRCM_SWRESET_MCU_S      2
#define PRCM_SWRESET_RFC        0x00000002  // 0: No action 1: Generates reset 
                                            // pulse on reset_rfcore_n. HW 
                                            // cleared Acess will only have 
                                            // effect when RFCORE power domain 
                                            // is on (SWPWR_STATUS.RFCORE = 1) 
                                            // Before writing set 
                                            // FLASH_CONFIG.DIS_READACCESS = 1 
                                            // to ensure the reset is not 
                                            // active while executing from 
                                            // flash. This means one cannot 
                                            // execute from flash when using 
                                            // the SW reset. 
#define PRCM_SWRESET_RFC_M      0x00000002
#define PRCM_SWRESET_RFC_S      1
#define PRCM_SWRESET_CPU        0x00000001  // 0: No action 1: Generates reset 
                                            // pulse on reset_cpucore_n. HW 
                                            // cleared Acess will only have 
                                            // effect when CPU power domain is 
                                            // on (MNGPWR_STATUS.CPU = 1) 
                                            // Before writing set 
                                            // FLASH_CONFIG.DIS_READACCESS = 1 
                                            // to ensure the reset is not 
                                            // active while executing from 
                                            // flash. This means one cannot 
                                            // execute from flash when using 
                                            // the SW reset. 
#define PRCM_SWRESET_CPU_M      0x00000001
#define PRCM_SWRESET_CPU_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_WARMRESET register.
//
//*****************************************************************************
#define PRCM_WARMRESET_LOCKUP_STAT \
                                0x00000002  // 0: No registred event 1: A CM3 
                                            // LOCKUP event has occured since 
                                            // last SW clear of the register. A 
                                            // read of this register clears 
                                            // both status bits. 

#define PRCM_WARMRESET_LOCKUP_STAT_M \
                                0x00000002
#define PRCM_WARMRESET_LOCKUP_STAT_S 1
#define PRCM_WARMRESET_WDT_STAT 0x00000001  // 0: No registred event 1: A WDT 
                                            // event has occured since last SW 
                                            // clear of the register. A read of 
                                            // this register clears both status 
                                            // bits. 
#define PRCM_WARMRESET_WDT_STAT_M \
                                0x00000001
#define PRCM_WARMRESET_WDT_STAT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the PRCM_O_PDCTL0 register.
//
//*****************************************************************************
#define PRCM_PDCTL0_PERIPH_ON   0x00000004  // PERIPH Power domain. 0: PERIPH 
                                            // power domain is powered down 1: 
                                            // PERIPH power domain is powered 
                                            // up 
#define PRCM_PDCTL0_PERIPH_ON_M 0x00000004
#define PRCM_PDCTL0_PERIPH_ON_S 2
#define PRCM_PDCTL0_SERIAL_ON   0x00000002  // SERIAL Power domain. 0: SERIAL 
                                            // power domain is powered down 1: 
                                            // SERIAL power domain is powered 
                                            // up 
#define PRCM_PDCTL0_SERIAL_ON_M 0x00000002
#define PRCM_PDCTL0_SERIAL_ON_S 1
#define PRCM_PDCTL0_RFC_ON      0x00000001  // 0: RFCORE power domain powered 
                                            // off if also NMGPWR_CTRL.RFC = 
                                            // '0' 1: RFCORE power domain 
                                            // powered on 
#define PRCM_PDCTL0_RFC_ON_M    0x00000001
#define PRCM_PDCTL0_RFC_ON_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDCTL0RFC register.
//
//*****************************************************************************
#define PRCM_PDCTL0RFC_ON       0x00000001  // Alias for SWPWR_CTRL.RFCORE 
#define PRCM_PDCTL0RFC_ON_M     0x00000001
#define PRCM_PDCTL0RFC_ON_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDCTL0SERIAL register.
//
//*****************************************************************************
#define PRCM_PDCTL0SERIAL_ON    0x00000001  // Alias for SWPWR_CTRL.SERIAL 
#define PRCM_PDCTL0SERIAL_ON_M  0x00000001
#define PRCM_PDCTL0SERIAL_ON_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDCTL0PERIPH register.
//
//*****************************************************************************
#define PRCM_PDCTL0PERIPH_ON    0x00000001  // Alias for SWPWR_CTRL.PERIPH 
#define PRCM_PDCTL0PERIPH_ON_M  0x00000001
#define PRCM_PDCTL0PERIPH_ON_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the PRCM_O_PDSTAT0 register.
//
//*****************************************************************************
#define PRCM_PDSTAT0_PERIPH_ON  0x00000004  // PERIPH Power domain. 0: Domain 
                                            // may be powered down 1: Domain 
                                            // powered up (guaranteed) 
#define PRCM_PDSTAT0_PERIPH_ON_M \
                                0x00000004
#define PRCM_PDSTAT0_PERIPH_ON_S 2
#define PRCM_PDSTAT0_SERIAL_ON  0x00000002  // SERIAL Power domain. 0: Domain 
                                            // may be powered down 1: Domain 
                                            // powered up (guaranteed) 
#define PRCM_PDSTAT0_SERIAL_ON_M \
                                0x00000002
#define PRCM_PDSTAT0_SERIAL_ON_S 1
#define PRCM_PDSTAT0_RFC_ON     0x00000001  // RFCORE Power domain 0: Domain 
                                            // may be powered down 1: Domain 
                                            // powered up (guaranteed) 
#define PRCM_PDSTAT0_RFC_ON_M   0x00000001
#define PRCM_PDSTAT0_RFC_ON_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDSTAT0RFC register.
//
//*****************************************************************************
#define PRCM_PDSTAT0RFC_ON      0x00000001  // Alias for SWPWR_STATUS.RFCORE 
#define PRCM_PDSTAT0RFC_ON_M    0x00000001
#define PRCM_PDSTAT0RFC_ON_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDSTAT0SERIAL register.
//
//*****************************************************************************
#define PRCM_PDSTAT0SERIAL_ON   0x00000001  // Alias for SWPWR_STATUS.SERIAL 
#define PRCM_PDSTAT0SERIAL_ON_M 0x00000001
#define PRCM_PDSTAT0SERIAL_ON_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDSTAT0PERIPH register.
//
//*****************************************************************************
#define PRCM_PDSTAT0PERIPH_ON   0x00000001  // Alias for SWPWR_STATUS.PERIPH 
#define PRCM_PDSTAT0PERIPH_ON_M 0x00000001
#define PRCM_PDSTAT0PERIPH_ON_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the PRCM_O_PDCTL1 register.
//
//*****************************************************************************
#define PRCM_PDCTL1_BUS         0x00000010  // 0: BUS power domain is powered 
                                            // when RFCORE needs access or CPU 
                                            // power doamain is on. Else BUS 
                                            // power domain is powered down. 1: 
                                            // BUS power domain is powered on. 
#define PRCM_PDCTL1_BUS_M       0x00000010
#define PRCM_PDCTL1_BUS_S       4
#define PRCM_PDCTL1_VIMS_MODE   0x00000008  // 0: VIMS power domain is only 
                                            // powered when CPU is powered. 1: 
                                            // VIMS power domain is powered 
                                            // whenever the BUS power domain is 
                                            // powered. 
#define PRCM_PDCTL1_VIMS_MODE_M 0x00000008
#define PRCM_PDCTL1_VIMS_MODE_S 3
#define PRCM_PDCTL1_RFC_ON      0x00000004  // 0: RFCORE power domain powered 
                                            // off if also SWPWR_CTRL.RFC = '0' 
                                            // 1: RFCORE power domain powered 
                                            // on Bit shall be used by RFCORE 
                                            // in autonomus mode but there is 
                                            // no HW restrictions fom CM3 to 
                                            // access the bit. 
#define PRCM_PDCTL1_RFC_ON_M    0x00000004
#define PRCM_PDCTL1_RFC_ON_S    2
#define PRCM_PDCTL1_CPU_ON      0x00000002  // 0: Causes a power down of the 
                                            // CPU power domain when CPU 
                                            // indicates it is idle, and 
                                            // initiates power-down of the BUS 
                                            // and SRAM power domains when 
                                            // BUS_RFC=0. 1: Initiates power-on 
                                            // of the CPU power domain. This 
                                            // bit shall be automatically set 
                                            // by a WIC power-on event. 
#define PRCM_PDCTL1_CPU_ON_M    0x00000002
#define PRCM_PDCTL1_CPU_ON_S    1
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDCTL1CPU register.
//
//*****************************************************************************
#define PRCM_PDCTL1CPU_ON       0x00000001  // This is an alias for 
                                            // MNGPWR_CTRL.CPU 
#define PRCM_PDCTL1CPU_ON_M     0x00000001
#define PRCM_PDCTL1CPU_ON_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDCTL1RFC register.
//
//*****************************************************************************
#define PRCM_PDCTL1RFC_ON       0x00000001  // This is an alias for 
                                            // MNGPWR_CTRL.RFC 
#define PRCM_PDCTL1RFC_ON_M     0x00000001
#define PRCM_PDCTL1RFC_ON_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDCTL1VIMS register.
//
//*****************************************************************************
#define PRCM_PDCTL1VIMS_ON      0x00000001  // This is an alias for 
                                            // MNGPWR_CTRL.FL_BUS 
#define PRCM_PDCTL1VIMS_ON_M    0x00000001
#define PRCM_PDCTL1VIMS_ON_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_MNGPWR_BUS_CTRL register.
//
//*****************************************************************************
#define PRCM_MNGPWR_BUS_CTRL_BUS \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define PRCM_MNGPWR_BUS_CTRL_BUS_M \
                                0x00000001
#define PRCM_MNGPWR_BUS_CTRL_BUS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the PRCM_O_PDSTAT1 register.
//
//*****************************************************************************
#define PRCM_PDSTAT1_BUS_ON     0x00000010  // This bit indicates if the BUS 
                                            // domain is currently accessible 
                                            // ('1') 
#define PRCM_PDSTAT1_BUS_ON_M   0x00000010
#define PRCM_PDSTAT1_BUS_ON_S   4
#define PRCM_PDSTAT1_VIMS_MODE  0x00000008  // This bit indicates if the VIMS 
                                            // domain is currently accessible 
                                            // ('1') 
#define PRCM_PDSTAT1_VIMS_MODE_M \
                                0x00000008
#define PRCM_PDSTAT1_VIMS_MODE_S 3
#define PRCM_PDSTAT1_RFC_ON     0x00000004  // This bit indicates if the 
                                            // RFCORE domain is currently 
                                            // accessible ('1') 
#define PRCM_PDSTAT1_RFC_ON_M   0x00000004
#define PRCM_PDSTAT1_RFC_ON_S   2
#define PRCM_PDSTAT1_CPU_ON     0x00000002  // This bit indicates if the CPU, 
                                            // BUS and SRAM domain is currently 
                                            // accessible ('1') 
#define PRCM_PDSTAT1_CPU_ON_M   0x00000002
#define PRCM_PDSTAT1_CPU_ON_S   1
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDSTAT1BUS register.
//
//*****************************************************************************
#define PRCM_PDSTAT1BUS_ON      0x00000001  // This is an alias for 
                                            // MNGPWR_STATUS.BUS 
#define PRCM_PDSTAT1BUS_ON_M    0x00000001
#define PRCM_PDSTAT1BUS_ON_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDSTAT1RFC register.
//
//*****************************************************************************
#define PRCM_PDSTAT1RFC_ON      0x00000001  // This is an alias for 
                                            // MNGPWR_STATUS.RFC 
#define PRCM_PDSTAT1RFC_ON_M    0x00000001
#define PRCM_PDSTAT1RFC_ON_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDSTAT1CPU register.
//
//*****************************************************************************
#define PRCM_PDSTAT1CPU_ON      0x00000001  // This is an alias for 
                                            // MNGPWR_STATUS.CPU 
#define PRCM_PDSTAT1CPU_ON_M    0x00000001
#define PRCM_PDSTAT1CPU_ON_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDSTAT1VIMS register.
//
//*****************************************************************************
#define PRCM_PDSTAT1VIMS_ON     0x00000001  // This is an alias for 
                                            // MNGPWR_STATUS.FL_BUS 
#define PRCM_PDSTAT1VIMS_ON_M   0x00000001
#define PRCM_PDSTAT1VIMS_ON_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the PRCM_O_RFCBITS register.
//
//*****************************************************************************
#define PRCM_RFCBITS_READ_M     0xFFFFFFFF  // Outputs to rf_core. Not PRCM 
                                            // related but placed here since 
                                            // RFCORE does not have retention 
#define PRCM_RFCBITS_READ_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_RFCMODESEL register.
//
//*****************************************************************************
#define PRCM_RFCMODESEL_CURR_M  0x00000007  // Written by MCU - Outputs to 
                                            // rf_core. Only modes permitted by 
                                            // RFCORE_AMODE shall be writeable. 
#define PRCM_RFCMODESEL_CURR_S  0
#define PRCM_RFCMODESEL_CURR_MODE0 \
                                0x00000000  // Select Mode 0 
#define PRCM_RFCMODESEL_CURR_MODE1 \
                                0x00000001  // Select Mode 1 
#define PRCM_RFCMODESEL_CURR_MODE2 \
                                0x00000002  // Select Mode 2 
#define PRCM_RFCMODESEL_CURR_MODE3 \
                                0x00000003  // Select Mode 3 
#define PRCM_RFCMODESEL_CURR_MODE4 \
                                0x00000004  // Select Mode 4 
#define PRCM_RFCMODESEL_CURR_MODE5 \
                                0x00000005  // Select Mode 5 
#define PRCM_RFCMODESEL_CURR_MODE6 \
                                0x00000006  // Select Mode 6 
#define PRCM_RFCMODESEL_CURR_MODE7 \
                                0x00000007  // Select Mode 7 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_RAMRETEN register.
//
//*****************************************************************************
#define PRCM_RAMRETEN_RFC       0x00000004  // 0: Retention for RFCORE SRAM 
                                            // disabled 1: Retention for RFCORE 
                                            // SRAM enabled 
#define PRCM_RAMRETEN_RFC_M     0x00000004
#define PRCM_RAMRETEN_RFC_S     2
#define PRCM_RAMRETEN_VIMS_M    0x00000003  // 0: Memory retention disabled 1: 
                                            // Memory retention enabled Bit 0: 
                                            // VIMS_TRAM Bit 1: VIMS_CRAM Legal 
                                            // modes depend on settings in 
                                            // VIMS:CONTROL.MODE and 
                                            // PRCM:CONFIG_RET.VIMS 
                                            // PRCM:CONFIG_RET.VIMS = 1 00: 
                                            // VIMS:CONTROL.MODE must be OFF 
                                            // before DEEPSLEEP is asserted - 
                                            // must be set to ENABLED or SPLIT 
                                            // mode after waking up again 01: 
                                            // VIMS:CONTROL.MODE must be 
                                            // DISABLED before DEEPSLEEP is 
                                            // asserted. Must remain in 
                                            // DISABLED mode after wake up, 
                                            // alternatively select OFF mode 
                                            // first and then ENABLED or SPILT 
                                            // mode. 10: Illegal mode 11: No 
                                            // restrictions 
                                            // PRCM:CONFIG_RET.VIMS = 0 00: 
                                            // Special TI debug mode. Do not 
                                            // use. All others: Illegal modes. 
#define PRCM_RAMRETEN_VIMS_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the PRCM_O_PDRETEN register.
//
//*****************************************************************************
#define PRCM_PDRETEN_PERIPH     0x00000040  // 0: Retention disabled 1: 
                                            // Retention enabled 
#define PRCM_PDRETEN_PERIPH_M   0x00000040
#define PRCM_PDRETEN_PERIPH_S   6
#define PRCM_PDRETEN_SERIAL     0x00000020  // Domain not designed for 
                                            // retention 
#define PRCM_PDRETEN_SERIAL_M   0x00000020
#define PRCM_PDRETEN_SERIAL_S   5
#define PRCM_PDRETEN_RFC        0x00000010  // Domain not designed for 
                                            // retention 
#define PRCM_PDRETEN_RFC_M      0x00000010
#define PRCM_PDRETEN_RFC_S      4
#define PRCM_PDRETEN_BUS        0x00000008  // Domain not designed for 
                                            // retention 
#define PRCM_PDRETEN_BUS_M      0x00000008
#define PRCM_PDRETEN_BUS_S      3
#define PRCM_PDRETEN_CPU        0x00000002  // 0: Retention disabled 1: 
                                            // Retention enabled Do not use! If 
                                            // disabled a subsequent cold reset 
                                            // of CPU PD the boot code will 
                                            // error out and CM3 will be stuck 
#define PRCM_PDRETEN_CPU_M      0x00000002
#define PRCM_PDRETEN_CPU_S      1
#define PRCM_PDRETEN_CLKCTL     0x00000001  // Domain not designed for 
                                            // retention 
#define PRCM_PDRETEN_CLKCTL_M   0x00000001
#define PRCM_PDRETEN_CLKCTL_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the PRCM_O_CLKGOVR register.
//
//*****************************************************************************
#define PRCM_CLKGOVR_I2S0       0x00100000  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_I2S0_M     0x00100000
#define PRCM_CLKGOVR_I2S0_S     20
#define PRCM_CLKGOVR_SSI1       0x00080000  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_SSI1_M     0x00080000
#define PRCM_CLKGOVR_SSI1_S     19
#define PRCM_CLKGOVR_SSI0       0x00040000  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_SSI0_M     0x00040000
#define PRCM_CLKGOVR_SSI0_S     18
#define PRCM_CLKGOVR_UART0      0x00010000  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_UART0_M    0x00010000
#define PRCM_CLKGOVR_UART0_S    16
#define PRCM_CLKGOVR_I2C0       0x00004000  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_I2C0_M     0x00004000
#define PRCM_CLKGOVR_I2C0_S     14
#define PRCM_CLKGOVR_PERDMA     0x00002000  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_PERDMA_M   0x00002000
#define PRCM_CLKGOVR_PERDMA_S   13
#define PRCM_CLKGOVR_GPT3       0x00000800  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_GPT3_M     0x00000800
#define PRCM_CLKGOVR_GPT3_S     11
#define PRCM_CLKGOVR_GPT2       0x00000400  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_GPT2_M     0x00000400
#define PRCM_CLKGOVR_GPT2_S     10
#define PRCM_CLKGOVR_GPT1       0x00000200  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_GPT1_M     0x00000200
#define PRCM_CLKGOVR_GPT1_S     9
#define PRCM_CLKGOVR_GPT0       0x00000100  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_GPT0_M     0x00000100
#define PRCM_CLKGOVR_GPT0_S     8
#define PRCM_CLKGOVR_GPIO       0x00000080  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_GPIO_M     0x00000080
#define PRCM_CLKGOVR_GPIO_S     7
#define PRCM_CLKGOVR_DMA        0x00000040  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_DMA_M      0x00000040
#define PRCM_CLKGOVR_DMA_S      6
#define PRCM_CLKGOVR_TRNG       0x00000020  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_TRNG_M     0x00000020
#define PRCM_CLKGOVR_TRNG_S     5
#define PRCM_CLKGOVR_CRYPTO     0x00000010  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_CRYPTO_M   0x00000010
#define PRCM_CLKGOVR_CRYPTO_S   4
#define PRCM_CLKGOVR_FLASH      0x00000004  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_FLASH_M    0x00000004
#define PRCM_CLKGOVR_FLASH_S    2
#define PRCM_CLKGOVR_RFC        0x00000002  // 0: No action 1: Force clock on 
#define PRCM_CLKGOVR_RFC_M      0x00000002
#define PRCM_CLKGOVR_RFC_S      1
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_SYSRESETDBG register.
//
//*****************************************************************************
#define PRCM_SYSRESETDBG_TRIG   0x00000001  // 0: No action 1: Generates a 
                                            // resetpulse that resets all MCU 
                                            // LL logic but configuration 
                                            // registers. Same result as a WDT 
                                            // timeout. Bit is HW cleared. 
#define PRCM_SYSRESETDBG_TRIG_M 0x00000001
#define PRCM_SYSRESETDBG_TRIG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// PRCM_O_PDFORCEON register.
//
//*****************************************************************************
#define PRCM_PDFORCEON_SERIAL   0x00000008  // 0: No action 1: Force SERIAL PD 
                                            // on 
#define PRCM_PDFORCEON_SERIAL_M 0x00000008
#define PRCM_PDFORCEON_SERIAL_S 3
#define PRCM_PDFORCEON_PERIPH   0x00000004  // 0: No action 1: Force PERIPH PD 
                                            // on 
#define PRCM_PDFORCEON_PERIPH_M 0x00000004
#define PRCM_PDFORCEON_PERIPH_S 2
#define PRCM_PDFORCEON_RFC      0x00000002  // 0: No action 1: Force RFCORE PD 
                                            // on 
#define PRCM_PDFORCEON_RFC_M    0x00000002
#define PRCM_PDFORCEON_RFC_S    1
#define PRCM_PDFORCEON_VIMS     0x00000001  // 0: No action 1: Force VIMS PD 
                                            // on 
#define PRCM_PDFORCEON_VIMS_M   0x00000001
#define PRCM_PDFORCEON_VIMS_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the PRCM_O_PDTEST register.
//
//*****************************************************************************
#define PRCM_PDTEST_ON          0x00000001  // 0: Turn off TEST PD 1: Turn on 
                                            // TEST PD 
#define PRCM_PDTEST_ON_M        0x00000001
#define PRCM_PDTEST_ON_S        0


#endif // __HW_PRCM_H__

