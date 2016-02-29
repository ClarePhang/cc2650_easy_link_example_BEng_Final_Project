
/******************************************************************************
*  Filename:       hw_memmap.h
*  Revised:        $Date: 2014-03-04 14:05:57 +0100 (ti, 04 mar 2014) $
*  Revision:       $Revision: 40297 $
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
#ifndef __HW_MEMMAP_H__
#define __HW_MEMMAP_H__

//*****************************************************************************
//
// The following are defines for the base address of the memories and
// peripherals on the AHB interface.
//
//*****************************************************************************
#define FLASHMEM_BASE           0x00000000  // FLASHMEM 
#define BROM_BASE               0x10000000  // BROM 
#define GPRAM_BASE              0x11000000  // GPRAM 
#define SRAM_BASE               0x20000000  // SRAM 
#define RFC_RAM_BASE            0x21000000  // RFC_RAM 
#define SSI0_BASE               0x40000000  // SSI 
#define UART0_BASE              0x40001000  // UART 
#define I2C0_BASE               0x40002000  // I2C 
#define SSI1_BASE               0x40008000  // SSI 
#define GPT0_BASE               0x40010000  // GPT 
#define GPT1_BASE               0x40011000  // GPT 
#define GPT2_BASE               0x40012000  // GPT 
#define GPT3_BASE               0x40013000  // GPT 
#define UDMA0_BASE              0x40020000  // UDMA 
#define I2S0_BASE               0x40021000  // I2S 
#define GPIO_BASE               0x40022000  // GPIO 
#define CRYPTO_BASE             0x40024000  // CRYPTO 
#define TRNG_BASE               0x40028000  // TRNG 
#define FLASH_BASE              0x40030000  // FLASH 
#define VIMS_BASE               0x40034000  // VIMS 
#define RFC_PWR_BASE            0x40040000  // RFC_PWR 
#define RFC_DBELL_BASE          0x40041000  // RFC_DBELL 
#define RFC_RAT_BASE            0x40043000  // RFC_RAT 
#define WDT_BASE                0x40080000  // WDT 
#define IOC_BASE                0x40081000  // IOC 
#define PRCM_BASE               0x40082000  // PRCM 
#define EVENT_BASE              0x40083000  // EVENT 
#define SMPH_BASE               0x40084000  // SMPH 
#define SPIS_BASE               0x40085000  // SPIS 
#define ADI2_BASE               0x40086000  // ADI 
#define ADI3_BASE               0x40086200  // ADI 
#define AON_SYSCTL_BASE         0x40090000  // AON_SYSCTL 
#define AON_WUC_BASE            0x40091000  // AON_WUC 
#define AON_RTC_BASE            0x40092000  // AON_RTC 
#define AON_EVENT_BASE          0x40093000  // AON_EVENT 
#define AON_IOC_BASE            0x40094000  // AON_IOC 
#define AON_BATMON_BASE         0x40095000  // AON_BATMON 
#define AUX_AIODIO0_BASE        0x400C1000  // AUX_AIODIO 
#define AUX_AIODIO1_BASE        0x400C2000  // AUX_AIODIO 
#define AUX_TDCIF_BASE          0x400C4000  // AUX_TDC 
#define AUX_EVCTL_BASE          0x400C5000  // AUX_EVCTL 
#define AUX_WUC_BASE            0x400C6000  // AUX_WUC 
#define AUX_TIMER_BASE          0x400C7000  // AUX_TIMER 
#define AUX_SMPH_BASE           0x400C8000  // AUX_SMPH 
#define AUX_SOC_BASE            0x400C9000  // AUX_SOC 
#define AUX_OSCDDI_BASE         0x400CA000  // DDI 
#define AUX_ADI_BASE            0x400CB000  // ADI 
#define AUX_RAM_BASE            0x400E0000  // AUX_RAM 
#define AUX_SCE_BASE            0x400E1000  // AUX_SCE 
#define FLASH_CFG_BASE          0x50000000  // CC26_DUMMY_COMP 
#define FCFG1_BASE              0x50001000  // cc26_fcfg1 
#define FCFG2_BASE              0x50002000  // cc26_fcfg2 
#define CCFG_BASE               0x50003000  // cc26_ccfg 
#define SSI0_NONBUF_BASE        0x60000000  // SSI  CM3 non-buf access
#define UART0_NONBUF_BASE       0x60001000  // UART  CM3 non-buf access
#define I2C0_NONBUF_BASE        0x60002000  // I2C  CM3 non-buf access
#define SSI1_NONBUF_BASE        0x60008000  // SSI  CM3 non-buf access
#define GPT0_NONBUF_BASE        0x60010000  // GPT  CM3 non-buf access
#define GPT1_NONBUF_BASE        0x60011000  // GPT  CM3 non-buf access
#define GPT2_NONBUF_BASE        0x60012000  // GPT  CM3 non-buf access
#define GPT3_NONBUF_BASE        0x60013000  // GPT  CM3 non-buf access
#define UDMA0_NONBUF_BASE       0x60020000  // UDMA  CM3 non-buf access
#define I2S0_NONBUF_BASE        0x60021000  // I2S  CM3 non-buf access
#define GPIO_NONBUF_BASE        0x60022000  // GPIO  CM3 non-buf access
#define CRYPTO_NONBUF_BASE      0x60024000  // CRYPTO  CM3 non-buf access
#define TRNG_NONBUF_BASE        0x60028000  // TRNG  CM3 non-buf access
#define FLASH_NONBUF_BASE       0x60030000  // FLASH  CM3 non-buf access
#define VIMS_NONBUF_BASE        0x60034000  // VIMS  CM3 non-buf access
#define RFC_PWR_NONBUF_BASE     0x60040000  // RFC_PWR  CM3 non-buf access
#define RFC_DBELL_NONBUF_BASE   0x60041000  // RFC_DBELL  CM3 non-buf access
#define RFC_RAT_NONBUF_BASE     0x60043000  // RFC_RAT  CM3 non-buf access
#define WDT_NONBUF_BASE         0x60080000  // WDT  CM3 non-buf access
#define IOC_NONBUF_BASE         0x60081000  // IOC  CM3 non-buf access
#define PRCM_NONBUF_BASE        0x60082000  // PRCM  CM3 non-buf access
#define EVENT_NONBUF_BASE       0x60083000  // EVENT  CM3 non-buf access
#define SMPH_NONBUF_BASE        0x60084000  // SMPH  CM3 non-buf access
#define SPIS_NONBUF_BASE        0x60085000  // SPIS  CM3 non-buf access
#define ADI2_NONBUF_BASE        0x60086000  // ADI  CM3 non-buf access
#define ADI3_NONBUF_BASE        0x60086200  // ADI  CM3 non-buf access
#define AON_SYSCTL_NONBUF_BASE  0x60090000  // AON_SYSCTL  CM3 non-buf access
#define AON_WUC_NONBUF_BASE     0x60091000  // AON_WUC  CM3 non-buf access
#define AON_RTC_NONBUF_BASE     0x60092000  // AON_RTC  CM3 non-buf access
#define AON_EVENT_NONBUF_BASE   0x60093000  // AON_EVENT  CM3 non-buf access
#define AON_IOC_NONBUF_BASE     0x60094000  // AON_IOC  CM3 non-buf access
#define AON_BATMON_NONBUF_BASE  0x60095000  // AON_BATMON  CM3 non-buf access
#define AUX_AIODIO0_NONBUF_BASE \
                                0x600C1000  // AUX_AIODIO  CM3 non-buf access
#define AUX_AIODIO1_NONBUF_BASE \
                                0x600C2000  // AUX_AIODIO  CM3 non-buf access
#define AUX_TDCIF_NONBUF_BASE   0x600C4000  // AUX_TDC  CM3 non-buf access
#define AUX_EVCTL_NONBUF_BASE   0x600C5000  // AUX_EVCTL  CM3 non-buf access
#define AUX_WUC_NONBUF_BASE     0x600C6000  // AUX_WUC  CM3 non-buf access
#define AUX_TIMER_NONBUF_BASE   0x600C7000  // AUX_TIMER  CM3 non-buf access
#define AUX_SMPH_NONBUF_BASE    0x600C8000  // AUX_SMPH  CM3 non-buf access
#define AUX_SOC_NONBUF_BASE     0x600C9000  // AUX_SOC  CM3 non-buf access
#define AUX_OSCDDI_NONBUF_BASE  0x600CA000  // DDI  CM3 non-buf access
#define AUX_ADI_NONBUF_BASE     0x600CB000  // ADI  CM3 non-buf access
#define AUX_RAM_NONBUF_BASE     0x600E0000  // AUX_RAM  CM3 non-buf access
#define AUX_SCE_NONBUF_BASE     0x600E1000  // AUX_SCE  CM3 non-buf access
#define FLASHMEM_ALIAS_BASE     0xA0000000  // FLASHMEM 
#define CM3_ITM_BASE            0xE0000000  // CM3_ITM 
#define CM3_DWT_BASE            0xE0001000  // CM3_DWT 
#define CM3_FPB_BASE            0xE0002000  // CM3_FPB 
#define CM3_SCS_BASE            0xE000E000  // CM3_SCS 
#define CM3_TPIU_BASE           0xE0040000  // CM3_TPIU 
#define CM3_RESERVED_E0041000_BASE \
                                0xE0041000  // CM3_RESERVED_E0041000 

#define CM3_ROM_TABLE_BASE      0xE00FF000  // CM3_ROM_TABLE 

#endif // __HW_MEMMAP_H__

