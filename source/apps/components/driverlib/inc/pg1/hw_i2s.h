
/******************************************************************************
*  Filename:       hw_i2s.h
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
#ifndef __HW_I2S_H__
#define __HW_I2S_H__

//*****************************************************************************
//
// The following are defines for the I2S register offsets.
//
//*****************************************************************************
#define I2S_O_AIFWCLKSRC        0x00000000  // WCLK Source Selection 
#define I2S_O_AIFDMACFG         0x00000004  // DMA Buffer Size Configuration 
#define I2S_O_AIFDIRCFG         0x00000008  // Pin Direction 
#define I2S_O_AIFFMTCFG         0x0000000C  // Serial Interface Format 
                                            // Configuration 
#define I2S_O_AIFWMASK0         0x00000010  // Word Selection Bit Mask for Pin 
                                            // x (x is 0, 1 or 2) 
#define I2S_O_AIFWMASK1         0x00000014  // Word Selection Bit Mask for Pin 
                                            // x (x is 0, 1 or 2) 
#define I2S_O_AIFWMASK2         0x00000018  // Word Selection Bit Mask for Pin 
                                            // x (x is 0, 1 or 2) 
#define I2S_O_AIFPWMVALUE       0x0000001C  // PWM Debug Value 
#define I2S_O_AIFINPTRNEXT      0x00000020  // DMA Input Buffer Next Pointer 
#define I2S_O_AIFINPTR          0x00000024  // DMA Input Buffer Current 
                                            // Pointer 
#define I2S_O_AIFOUTPTRNEXT     0x00000028  // DMA Output Buffer Next Pointer 
#define I2S_O_AIFOUTPTR         0x0000002C  // DMA Output Buffer Current 
                                            // Pointer 
#define I2S_O_STMPCTL           0x00000034  // Samplestamp Generator Control 
                                            // Register 
#define I2S_O_STMPXCNTCAPT0     0x00000038  // Captured XOSC Counter Value, 
                                            // Capture Channel 0 
#define I2S_O_STMPXPER          0x0000003C  // XOSC Period Value 
#define I2S_O_STMPWCNTCAPT0     0x00000040  // Captured WCLK Counter Value, 
                                            // Capture Channel 0 
#define I2S_O_STMPWPER          0x00000044  // WCLK Counter Period Value 
#define I2S_O_STMPINTRIG        0x00000048  // WCLK Counter Trigger Value for 
                                            // Input Pins 
#define I2S_O_STMPOUTTRIG       0x0000004C  // WCLK Counter Trigger Value for 
                                            // Output Pins 
#define I2S_O_STMPWSET          0x00000050  // WCLK Counter Set Operation 
#define I2S_O_STMPWADD          0x00000054  // WCLK Counter Add Operation 
#define I2S_O_STMPXPERMIN       0x00000058  // Minimum value of STMPXPER 
#define I2S_O_STMPWCNT          0x0000005C  // Current value of WCNT 
#define I2S_O_STMPXCNT          0x00000060  // Current value of XCNT 
#define I2S_O_STMPXCNTCAPT1     0x00000064  // Captured XOSC Counter Value, 
                                            // Capture Channel 1 
#define I2S_O_STMPWCNTCAPT1     0x00000068  // Captured WCLK Counter Value, 
                                            // Capture Channel 1 
#define I2S_O_IRQMASK           0x00000070  // I2S Masked interrupt status 
                                            // register 
#define I2S_O_IRQFLAGS          0x00000074  // I2S Raw Interrupt status 
                                            // register 
#define I2S_O_IRQSET            0x00000078  // I2S interrupt set register 
#define I2S_O_IRQCLR            0x0000007C  // I2S interrupt clear register 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_AIFWCLKSRC register.
//
//*****************************************************************************
#define I2S_AIFWCLKSRC_WCLK_INV 0x00000004  // Inverts WCLK source (pad or 
                                            // internal) when set. 0: Not 
                                            // inverted 1: Inverted 
#define I2S_AIFWCLKSRC_WCLK_INV_M \
                                0x00000004
#define I2S_AIFWCLKSRC_WCLK_INV_S 2
#define I2S_AIFWCLKSRC_WCLK_SRC_M \
                                0x00000003  // Selects the one and only WCLK 
                                            // source for AIF, which should be 
                                            // the same as the BCLK source (the 
                                            // BCLK source is selected PRCM). 

#define I2S_AIFWCLKSRC_WCLK_SRC_S 0
#define I2S_AIFWCLKSRC_WCLK_SRC_NONE \
                                0x00000000  // None ('0') 
#define I2S_AIFWCLKSRC_WCLK_SRC_EXT \
                                0x00000001  // External WCLK generator, from 
                                            // pad 
#define I2S_AIFWCLKSRC_WCLK_SRC_INT \
                                0x00000002  // Internal WCLK generator, from 
                                            // PRCM/ClkCtrl 
#define I2S_AIFWCLKSRC_WCLK_SRC_RESERVED \
                                0x00000003  // Not supported. Will give same 
                                            // WCLK as 'NONE' ('00') 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_AIFDMACFG register.
//
//*****************************************************************************
#define I2S_AIFDMACFG_END_FRAME_IDX_M \
                                0x000000FF  // Writing a non-zero value to 
                                            // this register enables and 
                                            // initializes AIF. Note that 
                                            // before doing so, all other 
                                            // configuration must have been 
                                            // done, and AIFINPTR/AIFOUTPTR 
                                            // must have been loaded. Writing a 
                                            // non-zero value to this register 
                                            // enables and initializes AIF. 
                                            // Note that before doing so, all 
                                            // other configuration must have 
                                            // been done, and registers 
                                            // AIFINPTR/AIFOUTPTR must have 
                                            // been loaded. 

#define I2S_AIFDMACFG_END_FRAME_IDX_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_AIFDIRCFG register.
//
//*****************************************************************************
#define I2S_AIFDIRCFG_AD2_M     0x00000300  // Configures the AD2 audio data 
                                            // pin usage 11: Reserved 
#define I2S_AIFDIRCFG_AD2_S     8
#define I2S_AIFDIRCFG_AD2_DIS   0x00000000  // Not in use (disabled) 
#define I2S_AIFDIRCFG_AD2_IN    0x00000100  // Input mode 
#define I2S_AIFDIRCFG_AD2_OUT   0x00000200  // Output mode 
#define I2S_AIFDIRCFG_AD1_M     0x00000030  // Configures the AD1 audio data 
                                            // pin usage: 11: Reserved 
#define I2S_AIFDIRCFG_AD1_S     4
#define I2S_AIFDIRCFG_AD1_DIS   0x00000000  // Not in use (disabled) 
#define I2S_AIFDIRCFG_AD1_IN    0x00000010  // Input mode 
#define I2S_AIFDIRCFG_AD1_OUT   0x00000020  // Output mode 
#define I2S_AIFDIRCFG_AD0_M     0x00000003  // Configures the AD0 audio data 
                                            // pin usage 11: Reserved 
#define I2S_AIFDIRCFG_AD0_S     0
#define I2S_AIFDIRCFG_AD0_DIS   0x00000000  // Not in use (disabled) 
#define I2S_AIFDIRCFG_AD0_IN    0x00000001  // Input mode 
#define I2S_AIFDIRCFG_AD0_OUT   0x00000002  // Output mode 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_AIFFMTCFG register.
//
//*****************************************************************************
#define I2S_AIFFMTCFG_DATA_DELAY_M \
                                0x0000FF00  // The number of BCLK periods 
                                            // between the positive WCLK edge 
                                            // and MSB of the first word in a 
                                            // phase: 0x00: LJF format 0x01: 
                                            // I2S and DSP format 0x02: RJF 
                                            // format ... 0xFF: RJF format 
                                            // Note: When 0, MSB of the next 
                                            // word will be output in the idle 
                                            // period between LSB of the 
                                            // previous word and the start of 
                                            // the next word. Otherwise logical 
                                            // 0 will be output until the data 
                                            // delay has expired. 

#define I2S_AIFFMTCFG_DATA_DELAY_S 8
#define I2S_AIFFMTCFG_MEM_LEN_24 \
                                0x00000080  // The size of each word stored to 
                                            // or loaded from memory: 

#define I2S_AIFFMTCFG_MEM_LEN_24_M \
                                0x00000080
#define I2S_AIFFMTCFG_MEM_LEN_24_S 7
#define I2S_AIFFMTCFG_MEM_LEN_24_16BIT \
                                0x00000000  // 16-bit (one 16 bit access per 
                                            // sample) 
#define I2S_AIFFMTCFG_MEM_LEN_24_24BIT \
                                0x00000080  // 24-bit (one 8 bit and one 16 
                                            // bit locked access per sample) 
#define I2S_AIFFMTCFG_SMPL_EDGE 0x00000040  // On the serial audio interface, 
                                            // data (and wclk) is sampled and 
                                            // clocked out on opposite edges of 
                                            // BCLK. 
#define I2S_AIFFMTCFG_SMPL_EDGE_M \
                                0x00000040
#define I2S_AIFFMTCFG_SMPL_EDGE_S 6
#define I2S_AIFFMTCFG_SMPL_EDGE_NEG \
                                0x00000000  // Data is sampled on the negative 
                                            // edge and clocked out on the 
                                            // positive edge. 
#define I2S_AIFFMTCFG_SMPL_EDGE_POS \
                                0x00000040  // Data is sampled on the positive 
                                            // edge and clocked out on the 
                                            // negative edge. 
#define I2S_AIFFMTCFG_DUAL_PHASE \
                                0x00000020  // Selects dual- or single-phase 
                                            // format. When set, dual-phase 
                                            // format is selected. 0: 
                                            // Single-phase 1: Dual-phase 

#define I2S_AIFFMTCFG_DUAL_PHASE_M \
                                0x00000020
#define I2S_AIFFMTCFG_DUAL_PHASE_S 5
#define I2S_AIFFMTCFG_WORD_LEN_M \
                                0x0000001F  // Number of bits per word (8-24): 
                                            // In single-phase format, this is 
                                            // the exact number of bits per 
                                            // word. In dual-phase format, this 
                                            // is the maximum number of bits 
                                            // per word. Values below 8 and 
                                            // above 24 give undefined 
                                            // behavior. 

#define I2S_AIFFMTCFG_WORD_LEN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_AIFWMASK0 register.
//
//*****************************************************************************
#define I2S_AIFWMASK0_MASK_M    0x000000FF  // Bit-mask indicating valid 
                                            // channels in a frame on ADx. In 
                                            // single-phase mode, each bit 
                                            // represents one channel, starting 
                                            // with LSB for the first word in 
                                            // the frame. A frame can contain 
                                            // up to 8 channels. Channels that 
                                            // are not included in the mask 
                                            // will not be sampled and stored 
                                            // in memory, and clocked out as 
                                            // '0'. In dual-phase mode, only 
                                            // the two LSBs are considered. For 
                                            // a stereo configuration, set both 
                                            // bits. For a mono configuration, 
                                            // set bit 0 only. In mono mode, 
                                            // only channel 0 will be sampled 
                                            // and stored to memory, and 
                                            // channel 0 will be repeated when 
                                            // clocked out. If all bits are 
                                            // zero, no input words will be 
                                            // stored to memory, and the output 
                                            // data lines will be constant '0'. 
                                            // This can be utilized when PWM 
                                            // debug output is desired without 
                                            // any actively used output pins. 
#define I2S_AIFWMASK0_MASK_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_AIFWMASK1 register.
//
//*****************************************************************************
#define I2S_AIFWMASK1_MASK_M    0x000000FF  // Bit-mask indicating valid 
                                            // channels in a frame on ADx. In 
                                            // single-phase mode, each bit 
                                            // represents one channel, starting 
                                            // with LSB for the first word in 
                                            // the frame. A frame can contain 
                                            // up to 8 channels. Channels that 
                                            // are not included in the mask 
                                            // will not be sampled and stored 
                                            // in memory, and clocked out as 
                                            // '0'. In dual-phase mode, only 
                                            // the two LSBs are considered. For 
                                            // a stereo configuration, set both 
                                            // bits. For a mono configuration, 
                                            // set bit 0 only. In mono mode, 
                                            // only channel 0 will be sampled 
                                            // and stored to memory, and 
                                            // channel 0 will be repeated when 
                                            // clocked out. If all bits are 
                                            // zero, no input words will be 
                                            // stored to memory, and the output 
                                            // data lines will be constant '0'. 
                                            // This can be utilized when PWM 
                                            // debug output is desired without 
                                            // any actively used output pins. 
#define I2S_AIFWMASK1_MASK_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_AIFWMASK2 register.
//
//*****************************************************************************
#define I2S_AIFWMASK2_MASK_M    0x000000FF  // Bit-mask indicating valid 
                                            // channels in a frame on ADx. In 
                                            // single-phase mode, each bit 
                                            // represents one channel, starting 
                                            // with LSB for the first word in 
                                            // the frame. A frame can contain 
                                            // up to 8 channels. Channels that 
                                            // are not included in the mask 
                                            // will not be sampled and stored 
                                            // in memory, and clocked out as 
                                            // '0'. In dual-phase mode, only 
                                            // the two LSBs are considered. For 
                                            // a stereo configuration, set both 
                                            // bits. For a mono configuration, 
                                            // set bit 0 only. In mono mode, 
                                            // only channel 0 will be sampled 
                                            // and stored to memory, and 
                                            // channel 0 will be repeated when 
                                            // clocked out. If all bits are 
                                            // zero, no input words will be 
                                            // stored to memory, and the output 
                                            // data lines will be constant '0'. 
                                            // This can be utilized when PWM 
                                            // debug output is desired without 
                                            // any actively used output pins. 
#define I2S_AIFWMASK2_MASK_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_AIFPWMVALUE register.
//
//*****************************************************************************
#define I2S_AIFPWMVALUE_PULSE_WIDTH_M \
                                0x0000FFFF  // The value written to this 
                                            // register determines the width of 
                                            // the active high PWM pulse 
                                            // (pwm_debug), which starts 
                                            // together with MSB of the first 
                                            // output word in a DMA buffer: 
                                            // 0x0000: Constant low 0x0001 - 
                                            // 0xFFFE: Width of the pulse 
                                            // (number of BCLK cycles). 0xFFFF: 
                                            // Constant high Note: The PWM 
                                            // pulse is also constant high when 
                                            // the configured width equals or 
                                            // exceeds the PWM period (i.e. the 
                                            // duration of a DMA buffer). Note: 
                                            // At least one output pin must be 
                                            // configured for the PWM function 
                                            // to be operational. Note: This 
                                            // value should preferably be 
                                            // written when starting on a new 
                                            // block, after the aif_dma_in_irq 
                                            // interrupt has occurred, or after 
                                            // aif_dma_out_irq + a delay 
                                            // corresponding to 3 samples. If 
                                            // written when a new PWM pulse 
                                            // begins, the length of the pulse 
                                            // is undetermined (and possible 
                                            // equal to neither the current nor 
                                            // the previous PWM value). 

#define I2S_AIFPWMVALUE_PULSE_WIDTH_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_AIFINPTRNEXT register.
//
//*****************************************************************************
#define I2S_AIFINPTRNEXT_PTR_M  0xFFFFFFFF  // Pointer to the first byte in 
                                            // the next DMA input buffer. The 
                                            // read value equals the last 
                                            // written value until the 
                                            // currently used DMA input buffer 
                                            // is completed, and then becomes 
                                            // NULL when the last written value 
                                            // is transferred to the DMA 
                                            // controller to start on the next 
                                            // buffer. This event is signalized 
                                            // by aif_dma_in_irq. At startup, 
                                            // the value should be written once 
                                            // before and once after 
                                            // configuring the DMA buffer size 
                                            // in AIFDMACFG. The next pointer 
                                            // must be written to AIFINPTR 
                                            // while the DMA function uses the 
                                            // previously written pointer. If 
                                            // not written in time, 
                                            // AIFERR.PTR_ERR will be raised 
                                            // and all input pins will be 
                                            // disabled. Note the following 
                                            // limitations: - Address space 
                                            // wrapping is not supported (i.e. 
                                            // address(last sample) must be 
                                            // higher than address(first 
                                            // sample). - A DMA block cannot be 
                                            // aligned with the end of the 
                                            // address space (i.e. a block 
                                            // cannot contain the address 
                                            // 0xFFFF) 
#define I2S_AIFINPTRNEXT_PTR_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2S_O_AIFINPTR register.
//
//*****************************************************************************
#define I2S_AIFINPTR_PTR_M      0xFFFFFFFF  // Value of the DMA input buffer 
                                            // pointer currently used by the 
                                            // DMA controller. Incremented by 1 
                                            // (byte) or 2 (word) for each AHB 
                                            // access. 
#define I2S_AIFINPTR_PTR_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_AIFOUTPTRNEXT register.
//
//*****************************************************************************
#define I2S_AIFOUTPTRNEXT_PTR_M 0xFFFFFFFF  // Pointer to the first byte in 
                                            // the next DMA output buffer. The 
                                            // read value equals the last 
                                            // written value until the 
                                            // currently used DMA output buffer 
                                            // is completed, and then becomes 
                                            // NULL when the last written value 
                                            // is transferred to the DMA 
                                            // controller to start on the next 
                                            // buffer. This event is signalized 
                                            // by aif_dma_out_irq. At startup, 
                                            // the value should be written once 
                                            // before and once after 
                                            // configuring the DMA buffer size 
                                            // in AIFDMACFG. At this time, the 
                                            // first two samples will be 
                                            // fetched from memory. The next 
                                            // pointer must be written to 
                                            // AIFOUTPTR while the DMA function 
                                            // uses the previously written 
                                            // pointer. If not written in time, 
                                            // AIFERR.PTR_ERR will be raised 
                                            // and all output pins will be 
                                            // disabled. Note the following 
                                            // limitations: - Address space 
                                            // wrapping is not supported (i.e. 
                                            // address(last sample) must be 
                                            // higher than address(first 
                                            // sample). - A DMA block cannot be 
                                            // aligned with the end of the 
                                            // address space (i.e. a block 
                                            // cannot contain the address 
                                            // 0xFFFF) 
#define I2S_AIFOUTPTRNEXT_PTR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_AIFOUTPTR register.
//
//*****************************************************************************
#define I2S_AIFOUTPTR_PTR_M     0xFFFFFFFF  // Value of the DMA output buffer 
                                            // pointer currently used by the 
                                            // DMA controller Incremented by 1 
                                            // (byte) or 2 (word) for each AHB 
                                            // access. 
#define I2S_AIFOUTPTR_PTR_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2S_O_STMPCTL register.
//
//*****************************************************************************
#define I2S_STMPCTL_OUT_RDY     0x00000004  // Low until the output pins are 
                                            // ready to be started by the 
                                            // samplestamp generator. When 
                                            // started (i.e. STMPOUTTRIG equals 
                                            // the WCLK counter) the bit goes 
                                            // back low. 
#define I2S_STMPCTL_OUT_RDY_M   0x00000004
#define I2S_STMPCTL_OUT_RDY_S   2
#define I2S_STMPCTL_IN_RDY      0x00000002  // Low until the input pins are 
                                            // ready to be started by the 
                                            // samplestamp generator. When 
                                            // started (i.e. STMPINTRIG equals 
                                            // the WCLK counter) the bit goes 
                                            // back low. 
#define I2S_STMPCTL_IN_RDY_M    0x00000002
#define I2S_STMPCTL_IN_RDY_S    1
#define I2S_STMPCTL_STMP_EN     0x00000001  // Enables the samplestamp 
                                            // generator. The samplestamp 
                                            // generator should only be enabled 
                                            // after it has been properly 
                                            // configured. When cleared, all 
                                            // samplestamp generator counters 
                                            // and capture values are cleared. 
#define I2S_STMPCTL_STMP_EN_M   0x00000001
#define I2S_STMPCTL_STMP_EN_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_STMPXCNTCAPT0 register.
//
//*****************************************************************************
#define I2S_STMPXCNTCAPT0_CAPT_VALUE_M \
                                0x0000FFFF  // The value of the samplestamp 
                                            // XOSC counter last time 
                                            // samplestamp_req(0) was pulsed. 
                                            // This number corresponds to the 
                                            // number of 24 MHz clock cycles 
                                            // since the last positive edge of 
                                            // the selected WCLK. The value is 
                                            // cleared when STMPCTRL.STMP_EN is 
                                            // 0. Note: Due to buffering and 
                                            // synchronization, WCLK is delayed 
                                            // by a small number of clk_bclk 
                                            // periods and clk periods. Note: 
                                            // When calculating the fractional 
                                            // part of the sample stamp, 
                                            // STMPXPER may be less than 
                                            // STMPXCNTC0. 

#define I2S_STMPXCNTCAPT0_CAPT_VALUE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2S_O_STMPXPER register.
//
//*****************************************************************************
#define I2S_STMPXPER_VALUE_M    0x0000FFFF  // The number of 24 MHz clock 
                                            // cycles in the previous WCLK 
                                            // period (i.e. the next value of 
                                            // the XOSC counter at the positive 
                                            // WCLK edge, had it not been reset 
                                            // to 0). The value is cleared when 
                                            // STMPCTRL.STMP_EN is 0. 
#define I2S_STMPXPER_VALUE_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_STMPWCNTCAPT0 register.
//
//*****************************************************************************
#define I2S_STMPWCNTCAPT0_CAPT_VALUE_M \
                                0x0000FFFF  // The value of the samplestamp 
                                            // WCLK counter last time 
                                            // samplestamp_req(0) was pulsed. 
                                            // This number corresponds to the 
                                            // number of positive WCLK edges 
                                            // since the samplestamp generator 
                                            // was enabled (not taking 
                                            // modification through 
                                            // STMPWADD/STMPWSET into account). 
                                            // The value is cleared when 
                                            // STMPCTRL.STMP_EN is 0. 

#define I2S_STMPWCNTCAPT0_CAPT_VALUE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2S_O_STMPWPER register.
//
//*****************************************************************************
#define I2S_STMPWPER_VALUE_M    0x0000FFFF  // Modulo value for the WCLK 
                                            // counter. This number should 
                                            // correspond to the size of the 
                                            // sample buffer used by the system 
                                            // (i.e. the index of the last 
                                            // sample plus 1). 
#define I2S_STMPWPER_VALUE_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_STMPINTRIG register.
//
//*****************************************************************************
#define I2S_STMPINTRIG_IN_START_WCNT_M \
                                0x0000FFFF  // Compare value used to start the 
                                            // incoming audio streams. 
                                            // IN_START_WCNT shall equal the 
                                            // WCLK counter value during the 
                                            // WCLK period in which the first 
                                            // input word(s) are sampled and 
                                            // stored to memory (i.e. the 
                                            // sample at the start of the very 
                                            // first DMA input buffer). The 
                                            // value of this register takes 
                                            // effect when the following 
                                            // conditions are met: - One or 
                                            // more pins are configured as 
                                            // inputs in AIFDIRCFG. - AIFDMACFG 
                                            // has been configured for the 
                                            // correct buffer size, and 32 
                                            // clk_bclk cycles or more have 
                                            // passed afterwards. Note: To 
                                            // avoid false triggers, 
                                            // IN_START_WCNT should be set 
                                            // higher than STMP_WPER. 

#define I2S_STMPINTRIG_IN_START_WCNT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_STMPOUTTRIG register.
//
//*****************************************************************************
#define I2S_STMPOUTTRIG_OUT_START_WCNT_M \
                                0x0000FFFF  // Compare value used to start the 
                                            // outgoing audio streams. 
                                            // OUT_START_WCNT shall equal the 
                                            // WCLK counter value during the 
                                            // WCLK period in which the first 
                                            // output word(s) read from memory 
                                            // are clocked out (i.e. the sample 
                                            // at the start of the very first 
                                            // DMA output buffer). The value of 
                                            // this register takes effect when 
                                            // the following conditions are 
                                            // met: - One or more pins are 
                                            // configured as outputs in 
                                            // AIFDIRCFG. - AIFDMACFG has been 
                                            // configured for the correct 
                                            // buffer size, and 32 clk_bclk 
                                            // cycles or more have passed 
                                            // afterwards. - 2 samples have 
                                            // been preloaded from memory 
                                            // (examine the AIFDOUTPTR register 
                                            // if necessary). Note: The memory 
                                            // read access is only performed 
                                            // when required, i.e. channels 0/1 
                                            // must be selected in AIFWMSKx. 
                                            // Note: To avoid false triggers, 
                                            // OUT_START_WCNT should be set 
                                            // higher than STMP_WPER. 

#define I2S_STMPOUTTRIG_OUT_START_WCNT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2S_O_STMPWSET register.
//
//*****************************************************************************
#define I2S_STMPWSET_VALUE_M    0x0000FFFF  // WCLK counter modification: Set 
                                            // the running WCLK counter equal 
                                            // to the written value. 
#define I2S_STMPWSET_VALUE_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2S_O_STMPWADD register.
//
//*****************************************************************************
#define I2S_STMPWADD_VALUE_INC_M \
                                0x0000FFFF  // WCLK counter modification: Add 
                                            // the written value to the running 
                                            // WCLK counter. If a positive edge 
                                            // of WCLK occurs at the same time 
                                            // as the operation, this will be 
                                            // taken into account. This 
                                            // operation is typically used to 
                                            // adjust the WCLK counter after 
                                            // receiving the first WASP beacon. 
                                            // To add a negative value, write 
                                            // "STMP_WPER - value". 

#define I2S_STMPWADD_VALUE_INC_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_STMPXPERMIN register.
//
//*****************************************************************************
#define I2S_STMPXPERMIN_VALUE_M 0x0000FFFF  // Each time STMPXPER is updated, 
                                            // the value is also loaded into 
                                            // this register, provided that the 
                                            // value is smaller than the 
                                            // current value of STMPXPERMIN. 
                                            // When written, the register is 
                                            // reset to 0xFFFF (65535), 
                                            // regardless of the value written. 
                                            // The minimum value can be used to 
                                            // detect extra WCLK pulses (the 
                                            // STMPXPERMIN value will be 
                                            // significantly smaller than 
                                            // STMPXPER). 
#define I2S_STMPXPERMIN_VALUE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2S_O_STMPWCNT register.
//
//*****************************************************************************
#define I2S_STMPWCNT_CURR_VALUE_M \
                                0x0000FFFF  // Current value of the WCLK 
                                            // counter 

#define I2S_STMPWCNT_CURR_VALUE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2S_O_STMPXCNT register.
//
//*****************************************************************************
#define I2S_STMPXCNT_CURR_VALUE_M \
                                0x0000FFFF  // Current value of the XOSC 
                                            // counter, latched when reading 
                                            // STMPWCNT. 

#define I2S_STMPXCNT_CURR_VALUE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_STMPXCNTCAPT1 register.
//
//*****************************************************************************
#define I2S_STMPXCNTCAPT1_CAPT_VALUE_M \
                                0x0000FFFF  // The value of the samplestamp 
                                            // XOSC counter last time 
                                            // samplestamp_req(1) was pulsed. 
                                            // This number corresponds to the 
                                            // number of 24 MHz clock cycles 
                                            // since the last positive edge of 
                                            // the selected WCLK. The value is 
                                            // cleared when STMPCTRL.STMP_EN is 
                                            // 0. Note: Due to buffering and 
                                            // synchronization, WCLK is delayed 
                                            // by a small number of clk_bclk 
                                            // periods and clk periods. Note: 
                                            // When calculating the fractional 
                                            // part of the sample stamp, 
                                            // STMPXPER may be less than 
                                            // STMPXCNTC1. 

#define I2S_STMPXCNTCAPT1_CAPT_VALUE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// I2S_O_STMPWCNTCAPT1 register.
//
//*****************************************************************************
#define I2S_STMPWCNTCAPT1_CAPT_VALUE_M \
                                0x0000FFFF  // The value of the samplestamp 
                                            // WCLK counter last time 
                                            // samplestamp_req(1) was pulsed. 
                                            // This number corresponds to the 
                                            // number of positive WCLK edges 
                                            // since the samplestamp generator 
                                            // was enabled (not taking 
                                            // modification through 
                                            // STMPWADD/STMPWSET into account). 
                                            // The value is cleared when 
                                            // STMPCTRL.STMP_EN is 0. 

#define I2S_STMPWCNTCAPT1_CAPT_VALUE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2S_O_IRQMASK register.
//
//*****************************************************************************
#define I2S_IRQMASK_AIF_DMA_IN  0x00000020  // This bit masks the level 
                                            // interrupt of AIF_DMA_IN 
#define I2S_IRQMASK_AIF_DMA_IN_M \
                                0x00000020
#define I2S_IRQMASK_AIF_DMA_IN_S 5
#define I2S_IRQMASK_AIF_DMA_OUT 0x00000010  // This bit masks the level 
                                            // interrupt of AIF_DMA_OUT 
#define I2S_IRQMASK_AIF_DMA_OUT_M \
                                0x00000010
#define I2S_IRQMASK_AIF_DMA_OUT_S 4
#define I2S_IRQMASK_WCLK_TIMEOUT \
                                0x00000008  // This bit masks the level 
                                            // interrupt of WCLK_TIMEOUT 

#define I2S_IRQMASK_WCLK_TIMEOUT_M \
                                0x00000008
#define I2S_IRQMASK_WCLK_TIMEOUT_S 3
#define I2S_IRQMASK_BUS_ERR     0x00000004  // This bit masks the level 
                                            // interrupt of BUS_ERR 
#define I2S_IRQMASK_BUS_ERR_M   0x00000004
#define I2S_IRQMASK_BUS_ERR_S   2
#define I2S_IRQMASK_WCLK_ERR    0x00000002  // This bit masks the level 
                                            // interrupt of WCLK_ERR 
#define I2S_IRQMASK_WCLK_ERR_M  0x00000002
#define I2S_IRQMASK_WCLK_ERR_S  1
#define I2S_IRQMASK_PTR_ERR     0x00000001  // This bit masks the level 
                                            // interrupt of PTR_ERR 
#define I2S_IRQMASK_PTR_ERR_M   0x00000001
#define I2S_IRQMASK_PTR_ERR_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2S_O_IRQFLAGS register.
//
//*****************************************************************************
#define I2S_IRQFLAGS_AIF_DMA_IN 0x00000020  // Set when condition for 
                                            // AIF_DMA_IN event occurs (auto 
                                            // cleared when input pointer is 
                                            // updated - AIFINPTR), see 
                                            // description of AIFINPTR register 
#define I2S_IRQFLAGS_AIF_DMA_IN_M \
                                0x00000020
#define I2S_IRQFLAGS_AIF_DMA_IN_S 5
#define I2S_IRQFLAGS_AIF_DMA_OUT \
                                0x00000010  // Set when condition for 
                                            // AIF_DMA_OUT event occurs (auto 
                                            // cleared when output pointer is 
                                            // updated - AIFOUTPTR), see 
                                            // description of AIFOUTPTR 
                                            // register for details 

#define I2S_IRQFLAGS_AIF_DMA_OUT_M \
                                0x00000010
#define I2S_IRQFLAGS_AIF_DMA_OUT_S 4
#define I2S_IRQFLAGS_WCLK_TIMEOUT \
                                0x00000008  // Set when the sample stamp 
                                            // generator does not detect a 
                                            // positive WCLK edge for 65535 clk 
                                            // periods. This signalizes that 
                                            // the internal/external BCLK/WCLK 
                                            // generator source has been 
                                            // disabled. The bit is sticky and 
                                            // may only be cleared by software 
                                            // (by writing '1' to 
                                            // IRQ_CLR.WCLK_TIMEOUT). 

#define I2S_IRQFLAGS_WCLK_TIMEOUT_M \
                                0x00000008
#define I2S_IRQFLAGS_WCLK_TIMEOUT_S 3
#define I2S_IRQFLAGS_BUS_ERR    0x00000004  // Set when a DMA operation is not 
                                            // completed in time (i.e. audio 
                                            // output buffer underflow, or 
                                            // audio input buffer overflow). 
                                            // This error requires a complete 
                                            // restart since word 
                                            // synchronization has been lost. 
                                            // The bit is sticky and may only 
                                            // be cleared by software (by 
                                            // writing '1' to IRQ_CLR.BUS_ERR). 
#define I2S_IRQFLAGS_BUS_ERR_M  0x00000004
#define I2S_IRQFLAGS_BUS_ERR_S  2
#define I2S_IRQFLAGS_WCLK_ERR   0x00000002  // Set when: - An unexpected WCLK 
                                            // edge occurs during the data 
                                            // delay period of a phase. Note 
                                            // unexpected WCLK edges during the 
                                            // word and idle periods of the 
                                            // phase are not detected. - In 
                                            // dual-phase mode, when two WCLK 
                                            // edges are less than 4 BCLK 
                                            // cycles apart. - In single-phase 
                                            // mode, when a WCLK pulse occurs 
                                            // before the last channel. This 
                                            // error requires a complete 
                                            // restart since word 
                                            // synchronization has been lost. 
                                            // The bit is sticky and may only 
                                            // be cleared by software (by 
                                            // writing '1' to 
                                            // IRQ_CLR.WCLK_ERR). 
#define I2S_IRQFLAGS_WCLK_ERR_M 0x00000002
#define I2S_IRQFLAGS_WCLK_ERR_S 1
#define I2S_IRQFLAGS_PTR_ERR    0x00000001  // Set when AIFINPTR or AIFOUTPTR 
                                            // has not been loaded with the 
                                            // next block address in time. This 
                                            // error requires a complete 
                                            // restart since word 
                                            // synchronization has been lost. 
                                            // The bit is sticky and may only 
                                            // be cleared by software (by 
                                            // writing '1' to IRQ_CLR.PTR_ERR). 
#define I2S_IRQFLAGS_PTR_ERR_M  0x00000001
#define I2S_IRQFLAGS_PTR_ERR_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2S_O_IRQSET register.
//
//*****************************************************************************
#define I2S_IRQSET_AIF_DMA_IN   0x00000020  // 1: Sets the level interrupt of 
                                            // AIF_DMA_IN_IRQ (unless a auto 
                                            // clear criteria was given at the 
                                            // same time, in which the set will 
                                            // be ignored) 
#define I2S_IRQSET_AIF_DMA_IN_M 0x00000020
#define I2S_IRQSET_AIF_DMA_IN_S 5
#define I2S_IRQSET_AIF_DMA_OUT  0x00000010  // 1: Sets the level interrupt of 
                                            // AIF_DMA_OUT_IRQ (unless a auto 
                                            // clear criteria was given at the 
                                            // same time, in which the set will 
                                            // be ignored) 
#define I2S_IRQSET_AIF_DMA_OUT_M \
                                0x00000010
#define I2S_IRQSET_AIF_DMA_OUT_S 4
#define I2S_IRQSET_WCLK_TIMEOUT 0x00000008  // 1: Sets the level interrupt of 
                                            // WCLK_TIMEOUT 
#define I2S_IRQSET_WCLK_TIMEOUT_M \
                                0x00000008
#define I2S_IRQSET_WCLK_TIMEOUT_S 3
#define I2S_IRQSET_BUS_ERR      0x00000004  // 1: Sets the level interrupt of 
                                            // BUS_ERR 
#define I2S_IRQSET_BUS_ERR_M    0x00000004
#define I2S_IRQSET_BUS_ERR_S    2
#define I2S_IRQSET_WCLK_ERR     0x00000002  // 1: Sets the level interrupt of 
                                            // WCLK_ERR 
#define I2S_IRQSET_WCLK_ERR_M   0x00000002
#define I2S_IRQSET_WCLK_ERR_S   1
#define I2S_IRQSET_PTR_ERR      0x00000001  // 1: Sets the level interrupt of 
                                            // PTR_ERR 
#define I2S_IRQSET_PTR_ERR_M    0x00000001
#define I2S_IRQSET_PTR_ERR_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the I2S_O_IRQCLR register.
//
//*****************************************************************************
#define I2S_IRQCLR_AIF_DMA_IN   0x00000020  // 1: Clears the level interrupt 
                                            // of AIF_DMA_IN_IRQ (unless a set 
                                            // criteria was given at the same 
                                            // time in which the clear will be 
                                            // ignored) 
#define I2S_IRQCLR_AIF_DMA_IN_M 0x00000020
#define I2S_IRQCLR_AIF_DMA_IN_S 5
#define I2S_IRQCLR_AIF_DMA_OUT  0x00000010  // 1: Clears the level interrupt 
                                            // of AIF_DMA_OUT_IRQ (unless a set 
                                            // criteria was given at the same 
                                            // time in which the clear will be 
                                            // ignored) 
#define I2S_IRQCLR_AIF_DMA_OUT_M \
                                0x00000010
#define I2S_IRQCLR_AIF_DMA_OUT_S 4
#define I2S_IRQCLR_WCLK_TIMEOUT 0x00000008  // 1: Clears the level interrupt 
                                            // of WCLK_TIMEOUT (unless a set 
                                            // criteria was given at the same 
                                            // time in which the clear will be 
                                            // ignored) 
#define I2S_IRQCLR_WCLK_TIMEOUT_M \
                                0x00000008
#define I2S_IRQCLR_WCLK_TIMEOUT_S 3
#define I2S_IRQCLR_BUS_ERR      0x00000004  // 1: Clears the level interrupt 
                                            // of BUS_ERR (unless a set 
                                            // criteria was given at the same 
                                            // time in which the clear will be 
                                            // ignored) 
#define I2S_IRQCLR_BUS_ERR_M    0x00000004
#define I2S_IRQCLR_BUS_ERR_S    2
#define I2S_IRQCLR_WCLK_ERR     0x00000002  // 1: Clears the level interrupt 
                                            // of WCLK_ERR (unless a set 
                                            // criteria was given at the same 
                                            // time in which the clear will be 
                                            // ignored) 
#define I2S_IRQCLR_WCLK_ERR_M   0x00000002
#define I2S_IRQCLR_WCLK_ERR_S   1
#define I2S_IRQCLR_PTR_ERR      0x00000001  // 1: Clears the level interrupt 
                                            // of PTR_ERR (unless a set 
                                            // criteria was given at the same 
                                            // time in which the clear will be 
                                            // ignored) 
#define I2S_IRQCLR_PTR_ERR_M    0x00000001
#define I2S_IRQCLR_PTR_ERR_S    0


#endif // __HW_I2S_H__

