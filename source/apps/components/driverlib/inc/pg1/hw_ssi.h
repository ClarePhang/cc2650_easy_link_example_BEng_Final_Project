
/******************************************************************************
*  Filename:       hw_ssi.h
*  Revised:        $Date$
*  Revision:       $Revision$
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
#ifndef __HW_SSI_H__
#define __HW_SSI_H__

//*****************************************************************************
//
// The following are defines for the SSI register offsets.
//
//*****************************************************************************
#define SSI_O_CR0               0x00000000  // Control register 0 
#define SSI_O_CR1               0x00000004  // Control register 1 
#define SSI_O_DR                0x00000008  // DR is the data register and is 
                                            // 16-bits wide. When DR is read, 
                                            // the entry in the receive FIFO, 
                                            // pointed to by the current FIFO 
                                            // read pointer, is accessed. As 
                                            // data values are removed by the 
                                            // receive logic from the incoming 
                                            // data frame, they are placed into 
                                            // the entry in the receive FIFO, 
                                            // pointed to by the current FIFO 
                                            // write pointer. When DR is 
                                            // written to, the entry in the 
                                            // transmit FIFO, pointed to by the 
                                            // write pointer, is written to. 
                                            // Data values are removed from the 
                                            // transmit FIFO one value at a 
                                            // time by the transmit logic. It 
                                            // is loaded into the transmit 
                                            // serial shifter, then serially 
                                            // shifted out onto the SSPTXD pin 
                                            // at the programmed bit rate. When 
                                            // a data size of less than 16 bits 
                                            // is selected, the user must 
                                            // right-justify data written to 
                                            // the transmit FIFO. The transmit 
                                            // logic ignores the unused bits. 
                                            // Received data less than 16 bits 
                                            // is automatically right-justified 
                                            // in the receive buffer. 
#define SSI_O_SR                0x0000000C  // Status register 
#define SSI_O_CPSR              0x00000010  // Clock prescale register 
#define SSI_O_IMSC              0x00000014  // Interrupt mask set and clear 
                                            // register 
#define SSI_O_RIS               0x00000018  // Raw interrupt status register 
#define SSI_O_MIS               0x0000001C  // Masked interrupt status 
                                            // register 
#define SSI_O_ICR               0x00000020  // Interrupt clear register 
#define SSI_O_DMACR             0x00000024  // DMA control register 
#define SSI_O_PERIPHID0         0x00000FE0  // Peripheral Identification 0 
#define SSI_O_PERIPHID1         0x00000FE4  // Peripheral Identification 1 
#define SSI_O_PERIPHID2         0x00000FE8  // Peripheral Identification 2 
#define SSI_O_PERIPHID3         0x00000FEC  // Peripheral Identification 3 
#define SSI_O_PCELLID0          0x00000FF0  // PrimeCell identification 0 
#define SSI_O_PCELLID1          0x00000FF4  // PrimeCell identification 1 
#define SSI_O_PCELLID2          0x00000FF8  // PrimeCell identification 2 
#define SSI_O_PCELLID3          0x00000FFC  // PrimeCell identification 3 


//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_CR0 register.
//
//*****************************************************************************
#define SSI_CR0_SCR_M           0x0000FF00  // Serial clock rate 
#define SSI_CR0_SCR_S           8
#define SSI_CR0_SPH             0x00000080  // CLKOUT phase (Motorola SPI 
                                            // frame format only) 
#define SSI_CR0_SPH_M           0x00000080
#define SSI_CR0_SPH_S           7
#define SSI_CR0_SPO             0x00000040  // CLKOUT polarity (Motorola SPI 
                                            // frame format only) 
#define SSI_CR0_SPO_M           0x00000040
#define SSI_CR0_SPO_S           6
#define SSI_CR0_FRF_M           0x00000030  // Frame format 
#define SSI_CR0_FRF_S           4
#define SSI_CR0_FRF_MOTOROLA_SPI \
                                0x00000000  // Motorola SPI frame format 
#define SSI_CR0_FRF_TI_SYNC_SERIAL \
                                0x00000010  // TI synchronous serial frame 
                                            // format 
#define SSI_CR0_FRF_NATIONAL_MICROWIRE \
                                0x00000020  // National Microwire frame format 
#define SSI_CR0_DSS_M           0x0000000F  // Data Size Select 
#define SSI_CR0_DSS_S           0
#define SSI_CR0_DSS_4_BIT       0x00000003  // 4-bit data 
#define SSI_CR0_DSS_5_BIT       0x00000004  // 5-bit data 
#define SSI_CR0_DSS_6_BIT       0x00000005  // 6-bit data 
#define SSI_CR0_DSS_7_BIT       0x00000006  // 7-bit data 
#define SSI_CR0_DSS_8_BIT       0x00000007  // 8-bit data 
#define SSI_CR0_DSS_9_BIT       0x00000008  // 9-bit data 
#define SSI_CR0_DSS_10_BIT      0x00000009  // 10-bit data 
#define SSI_CR0_DSS_11_BIT      0x0000000A  // 11-bit data 
#define SSI_CR0_DSS_12_BIT      0x0000000B  // 12-bit data 
#define SSI_CR0_DSS_13_BIT      0x0000000C  // 13-bit data 
#define SSI_CR0_DSS_14_BIT      0x0000000D  // 14-bit data 
#define SSI_CR0_DSS_15_BIT      0x0000000E  // 15-bit data 
#define SSI_CR0_DSS_16_BIT      0x0000000F  // 16-bit data 
//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_CR1 register.
//
//*****************************************************************************
#define SSI_CR1_SOD             0x00000008  // Slave-mode output disabled 
#define SSI_CR1_SOD_M           0x00000008
#define SSI_CR1_SOD_S           3
#define SSI_CR1_MS              0x00000004  // Master or slave mode select 
#define SSI_CR1_MS_M            0x00000004
#define SSI_CR1_MS_S            2
#define SSI_CR1_MS_MASTER       0x00000000  // Device configured as master 
#define SSI_CR1_MS_SLAVE        0x00000004  // Device configured as slave 
#define SSI_CR1_SSE             0x00000002  // Synchronous serial port enable 
#define SSI_CR1_SSE_M           0x00000002
#define SSI_CR1_SSE_S           1
#define SSI_CR1_SSE_SSI_DISABLED \
                                0x00000000  // SSP operation disabled 
#define SSI_CR1_SSE_SSI_ENABLED 0x00000002  // SSP operation enabled 
#define SSI_CR1_LBM             0x00000001  // Loop back mode 
#define SSI_CR1_LBM_M           0x00000001
#define SSI_CR1_LBM_S           0
//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_DR register.
//
//*****************************************************************************
#define SSI_DR_DATA_M           0x0000FFFF  // Transmit/receive data 
#define SSI_DR_DATA_S           0
//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_SR register.
//
//*****************************************************************************
#define SSI_SR_BSY              0x00000010  // PrimeCell SSP busy flag 
#define SSI_SR_BSY_M            0x00000010
#define SSI_SR_BSY_S            4
#define SSI_SR_RFF              0x00000008  // Receive FIFO full 
#define SSI_SR_RFF_M            0x00000008
#define SSI_SR_RFF_S            3
#define SSI_SR_RNE              0x00000004  // Receive FIFO not empty 
#define SSI_SR_RNE_M            0x00000004
#define SSI_SR_RNE_S            2
#define SSI_SR_TNF              0x00000002  // Transmit FIFO not full 
#define SSI_SR_TNF_M            0x00000002
#define SSI_SR_TNF_S            1
#define SSI_SR_TFE              0x00000001  // Transmit FIFO empty 
#define SSI_SR_TFE_M            0x00000001
#define SSI_SR_TFE_S            0
//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_CPSR register.
//
//*****************************************************************************
#define SSI_CPSR_CPSDVSR_M      0x000000FF  // Clock prescale divisor 
#define SSI_CPSR_CPSDVSR_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_IMSC register.
//
//*****************************************************************************
#define SSI_IMSC_TXIM           0x00000008  // Transmit FIFO interrupt mask 
#define SSI_IMSC_TXIM_M         0x00000008
#define SSI_IMSC_TXIM_S         3
#define SSI_IMSC_RXIM           0x00000004  // Receive FIFO interrupt mask 
#define SSI_IMSC_RXIM_M         0x00000004
#define SSI_IMSC_RXIM_S         2
#define SSI_IMSC_RTIM           0x00000002  // Receive timeout interrupt mask 
#define SSI_IMSC_RTIM_M         0x00000002
#define SSI_IMSC_RTIM_S         1
#define SSI_IMSC_RORIM          0x00000001  // Receive overrun interrupt mask 
#define SSI_IMSC_RORIM_M        0x00000001
#define SSI_IMSC_RORIM_S        0
//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_RIS register.
//
//*****************************************************************************
#define SSI_RIS_TXRIS           0x00000008  // Raw interrupt state of transmit 
                                            // FIFO interrupt 
#define SSI_RIS_TXRIS_M         0x00000008
#define SSI_RIS_TXRIS_S         3
#define SSI_RIS_RXRIS           0x00000004  // Raw interrupt state of receive 
                                            // FIFO interrupt 
#define SSI_RIS_RXRIS_M         0x00000004
#define SSI_RIS_RXRIS_S         2
#define SSI_RIS_RTRIS           0x00000002  // Raw interrupt state of receive 
                                            // timeout interrupt 
#define SSI_RIS_RTRIS_M         0x00000002
#define SSI_RIS_RTRIS_S         1
#define SSI_RIS_RORRIS          0x00000001  // Raw interrupt state of receive 
                                            // overrun interrupt 
#define SSI_RIS_RORRIS_M        0x00000001
#define SSI_RIS_RORRIS_S        0
//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_MIS register.
//
//*****************************************************************************
#define SSI_MIS_TXMIS           0x00000008  // Masked interrupt state of 
                                            // transmit FIFO interrupt 
#define SSI_MIS_TXMIS_M         0x00000008
#define SSI_MIS_TXMIS_S         3
#define SSI_MIS_RXMIS           0x00000004  // Masked interrupt state of 
                                            // receive FIFO interrupt 
#define SSI_MIS_RXMIS_M         0x00000004
#define SSI_MIS_RXMIS_S         2
#define SSI_MIS_RTMIS           0x00000002  // Masked interrupt state of 
                                            // receive timeout interrupt 
#define SSI_MIS_RTMIS_M         0x00000002
#define SSI_MIS_RTMIS_S         1
#define SSI_MIS_RORMIS          0x00000001  // Masked interrupt state of 
                                            // receive overrun interrupt 
#define SSI_MIS_RORMIS_M        0x00000001
#define SSI_MIS_RORMIS_S        0
//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_ICR register.
//
//*****************************************************************************
#define SSI_ICR_RTIC            0x00000002  // Clear the receive timeout 
                                            // interrupt 
#define SSI_ICR_RTIC_M          0x00000002
#define SSI_ICR_RTIC_S          1
#define SSI_ICR_RORIC           0x00000001  // Clear the receive overrun 
                                            // interrupt 
#define SSI_ICR_RORIC_M         0x00000001
#define SSI_ICR_RORIC_S         0
//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_DMACR register.
//
//*****************************************************************************
#define SSI_DMACR_TXDMAE        0x00000002  // Transmit DMA Enable 
#define SSI_DMACR_TXDMAE_M      0x00000002
#define SSI_DMACR_TXDMAE_S      1
#define SSI_DMACR_RXDMAE        0x00000001  // Receive DMA Enable 
#define SSI_DMACR_RXDMAE_M      0x00000001
#define SSI_DMACR_RXDMAE_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SSI_O_PERIPHID0 register.
//
//*****************************************************************************
#define SSI_PERIPHID0_PARTNUMBER0_M \
                                0x000000FF  // Identifies the peripheral 

#define SSI_PERIPHID0_PARTNUMBER0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SSI_O_PERIPHID1 register.
//
//*****************************************************************************
#define SSI_PERIPHID1_DESIGNER0_M \
                                0x000000F0  // Identifies the designer (ARM) 

#define SSI_PERIPHID1_DESIGNER0_S 4
#define SSI_PERIPHID1_PARTNUMBER1_M \
                                0x0000000F  // Identifies the peripheral 

#define SSI_PERIPHID1_PARTNUMBER1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SSI_O_PERIPHID2 register.
//
//*****************************************************************************
#define SSI_PERIPHID2_REVISION_M \
                                0x000000F0  // Peripheral revision 

#define SSI_PERIPHID2_REVISION_S 4
#define SSI_PERIPHID2_DESIGNER1_M \
                                0x0000000F  // Identifies the designer (ARM) 

#define SSI_PERIPHID2_DESIGNER1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// SSI_O_PERIPHID3 register.
//
//*****************************************************************************
#define SSI_PERIPHID3_CONFIGURATION_M \
                                0x000000FF  // The configuration option of the 
                                            // SSP. 

#define SSI_PERIPHID3_CONFIGURATION_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_PCELLID0 register.
//
//*****************************************************************************
//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_PCELLID1 register.
//
//*****************************************************************************
//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_PCELLID2 register.
//
//*****************************************************************************
//*****************************************************************************
//
// The following are defines for the bit fields in the SSI_O_PCELLID3 register.
//
//*****************************************************************************


#endif // __HW_SSI_H__

