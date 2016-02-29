
/******************************************************************************
*  Filename:       hw_rfc_dbell.h
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
#ifndef __HW_RFC_DBELL_H__
#define __HW_RFC_DBELL_H__

//*****************************************************************************
//
// The following are defines for the RFC_DBELL register offsets.
//
//*****************************************************************************
#define RFC_DBELL_O_CMDR        0x00000000  // Doorbell Command Register 
#define RFC_DBELL_O_CMDSTA      0x00000004  // Doorbell Command Status 
                                            // Register 
#define RFC_DBELL_O_RFHWIFG     0x00000008  // Interrupt Flags From RF HW 
                                            // Modules 
#define RFC_DBELL_O_RFHWIEN     0x0000000C  // Interrupt Enable For Interrupts 
                                            // From RF HW Modules 
#define RFC_DBELL_O_RFCPEIFG    0x00000010  // Interrupt Flags For CPE 
                                            // Generated Interrupts 
#define RFC_DBELL_O_RFCPEIEN    0x00000014  // Interrupt Enable For CPE 
                                            // Generated Interrupts 
#define RFC_DBELL_O_RFCPEISL    0x00000018  // Interrupt Vector Selection For 
                                            // CPE Generated Interrupts 
#define RFC_DBELL_O_RFACKIFG    0x0000001C  // Doorbell Command 
                                            // Acknowledgement Interrupt Flag 
#define RFC_DBELL_O_SYSGPOCTL   0x00000020  // RF Core General Purpose Output 
                                            // Control 
#define RFC_DBELL_O_RFCIDLESTAT 0x00000024  


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// RFC_DBELL_O_CMDR register.
//
//*****************************************************************************
#define RFC_DBELL_CMDR_CMD_M    0xFFFFFFFF  // Command register. Raises IRQ to 
                                            // Radio CPU upon write. 
#define RFC_DBELL_CMDR_CMD_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// RFC_DBELL_O_CMDSTA register.
//
//*****************************************************************************
#define RFC_DBELL_CMDSTA_STAT_M 0xFFFFFFFF  // Status of the last command used 
#define RFC_DBELL_CMDSTA_STAT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// RFC_DBELL_O_RFHWIFG register.
//
//*****************************************************************************
#define RFC_DBELL_RFHWIFG_RATCH7 \
                                0x00080000  // Radio timer channel 7 interrupt 
                                            // flag 

#define RFC_DBELL_RFHWIFG_RATCH7_M \
                                0x00080000
#define RFC_DBELL_RFHWIFG_RATCH7_S 19
#define RFC_DBELL_RFHWIFG_RATCH6 \
                                0x00040000  // Radio timer channel 6 interrupt 
                                            // flag 

#define RFC_DBELL_RFHWIFG_RATCH6_M \
                                0x00040000
#define RFC_DBELL_RFHWIFG_RATCH6_S 18
#define RFC_DBELL_RFHWIFG_RATCH5 \
                                0x00020000  // Radio timer channel 5 interrupt 
                                            // flag 

#define RFC_DBELL_RFHWIFG_RATCH5_M \
                                0x00020000
#define RFC_DBELL_RFHWIFG_RATCH5_S 17
#define RFC_DBELL_RFHWIFG_RATCH4 \
                                0x00010000  // Radio timer channel 4 interrupt 
                                            // flag 

#define RFC_DBELL_RFHWIFG_RATCH4_M \
                                0x00010000
#define RFC_DBELL_RFHWIFG_RATCH4_S 16
#define RFC_DBELL_RFHWIFG_RATCH3 \
                                0x00008000  // Radio timer channel 3 interrupt 
                                            // flag 

#define RFC_DBELL_RFHWIFG_RATCH3_M \
                                0x00008000
#define RFC_DBELL_RFHWIFG_RATCH3_S 15
#define RFC_DBELL_RFHWIFG_RATCH2 \
                                0x00004000  // Radio timer channel 2 interrupt 
                                            // flag 

#define RFC_DBELL_RFHWIFG_RATCH2_M \
                                0x00004000
#define RFC_DBELL_RFHWIFG_RATCH2_S 14
#define RFC_DBELL_RFHWIFG_RATCH1 \
                                0x00002000  // Radio timer channel 1 interrupt 
                                            // flag 

#define RFC_DBELL_RFHWIFG_RATCH1_M \
                                0x00002000
#define RFC_DBELL_RFHWIFG_RATCH1_S 13
#define RFC_DBELL_RFHWIFG_RATCH0 \
                                0x00001000  // Radio timer channel 0 interrupt 
                                            // flag 

#define RFC_DBELL_RFHWIFG_RATCH0_M \
                                0x00001000
#define RFC_DBELL_RFHWIFG_RATCH0_S 12
#define RFC_DBELL_RFHWIFG_RFESOFT2 \
                                0x00000800  // RFE soft defined interrupt 2 
                                            // flag 

#define RFC_DBELL_RFHWIFG_RFESOFT2_M \
                                0x00000800
#define RFC_DBELL_RFHWIFG_RFESOFT2_S 11
#define RFC_DBELL_RFHWIFG_RFESOFT1 \
                                0x00000400  // RFE soft defined interrupt 1 
                                            // flag 

#define RFC_DBELL_RFHWIFG_RFESOFT1_M \
                                0x00000400
#define RFC_DBELL_RFHWIFG_RFESOFT1_S 10
#define RFC_DBELL_RFHWIFG_RFESOFT0 \
                                0x00000200  // RFE soft defined interrupt 0 
                                            // flag 

#define RFC_DBELL_RFHWIFG_RFESOFT0_M \
                                0x00000200
#define RFC_DBELL_RFHWIFG_RFESOFT0_S 9
#define RFC_DBELL_RFHWIFG_RFEDONE \
                                0x00000100  // RFE done interrupt flag 

#define RFC_DBELL_RFHWIFG_RFEDONE_M \
                                0x00000100
#define RFC_DBELL_RFHWIFG_RFEDONE_S 8
#define RFC_DBELL_RFHWIFG_TRCTK 0x00000040  // Debug tracer system tick 
                                            // interrupt flag 
#define RFC_DBELL_RFHWIFG_TRCTK_M \
                                0x00000040
#define RFC_DBELL_RFHWIFG_TRCTK_S 6
#define RFC_DBELL_RFHWIFG_MDMSOFT \
                                0x00000020  // Modem soft defined interrupt 
                                            // flag 

#define RFC_DBELL_RFHWIFG_MDMSOFT_M \
                                0x00000020
#define RFC_DBELL_RFHWIFG_MDMSOFT_S 5
#define RFC_DBELL_RFHWIFG_MDMOUT \
                                0x00000010  // Modem FIFO output interrupt 
                                            // flag 

#define RFC_DBELL_RFHWIFG_MDMOUT_M \
                                0x00000010
#define RFC_DBELL_RFHWIFG_MDMOUT_S 4
#define RFC_DBELL_RFHWIFG_MDMIN 0x00000008  // Modem FIFO input interrupt flag 
#define RFC_DBELL_RFHWIFG_MDMIN_M \
                                0x00000008
#define RFC_DBELL_RFHWIFG_MDMIN_S 3
#define RFC_DBELL_RFHWIFG_MDMDONE \
                                0x00000004  // Modem done interrupt flag 

#define RFC_DBELL_RFHWIFG_MDMDONE_M \
                                0x00000004
#define RFC_DBELL_RFHWIFG_MDMDONE_S 2
#define RFC_DBELL_RFHWIFG_FSCA  0x00000002  // FSCA interrupt flag 
#define RFC_DBELL_RFHWIFG_FSCA_M \
                                0x00000002
#define RFC_DBELL_RFHWIFG_FSCA_S 1
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// RFC_DBELL_O_RFHWIEN register.
//
//*****************************************************************************
#define RFC_DBELL_RFHWIEN_RATCH7 \
                                0x00080000  // Radio timer channel 7 interrupt 
                                            // enable 

#define RFC_DBELL_RFHWIEN_RATCH7_M \
                                0x00080000
#define RFC_DBELL_RFHWIEN_RATCH7_S 19
#define RFC_DBELL_RFHWIEN_RATCH6 \
                                0x00040000  // Radio timer channel 6 interrupt 
                                            // enable 

#define RFC_DBELL_RFHWIEN_RATCH6_M \
                                0x00040000
#define RFC_DBELL_RFHWIEN_RATCH6_S 18
#define RFC_DBELL_RFHWIEN_RATCH5 \
                                0x00020000  // Radio timer channel 5 interrupt 
                                            // enable 

#define RFC_DBELL_RFHWIEN_RATCH5_M \
                                0x00020000
#define RFC_DBELL_RFHWIEN_RATCH5_S 17
#define RFC_DBELL_RFHWIEN_RATCH4 \
                                0x00010000  // Radio timer channel 4 interrupt 
                                            // enable 

#define RFC_DBELL_RFHWIEN_RATCH4_M \
                                0x00010000
#define RFC_DBELL_RFHWIEN_RATCH4_S 16
#define RFC_DBELL_RFHWIEN_RATCH3 \
                                0x00008000  // Radio timer channel 3 interrupt 
                                            // enable 

#define RFC_DBELL_RFHWIEN_RATCH3_M \
                                0x00008000
#define RFC_DBELL_RFHWIEN_RATCH3_S 15
#define RFC_DBELL_RFHWIEN_RATCH2 \
                                0x00004000  // Radio timer channel 2 interrupt 
                                            // enable 

#define RFC_DBELL_RFHWIEN_RATCH2_M \
                                0x00004000
#define RFC_DBELL_RFHWIEN_RATCH2_S 14
#define RFC_DBELL_RFHWIEN_RATCH1 \
                                0x00002000  // Radio timer channel 1 interrupt 
                                            // enable 

#define RFC_DBELL_RFHWIEN_RATCH1_M \
                                0x00002000
#define RFC_DBELL_RFHWIEN_RATCH1_S 13
#define RFC_DBELL_RFHWIEN_RATCH0 \
                                0x00001000  // Radio timer channel 0 interrupt 
                                            // enable 

#define RFC_DBELL_RFHWIEN_RATCH0_M \
                                0x00001000
#define RFC_DBELL_RFHWIEN_RATCH0_S 12
#define RFC_DBELL_RFHWIEN_RFESOFT2 \
                                0x00000800  // RFE soft defined interrupt 2 
                                            // enable 

#define RFC_DBELL_RFHWIEN_RFESOFT2_M \
                                0x00000800
#define RFC_DBELL_RFHWIEN_RFESOFT2_S 11
#define RFC_DBELL_RFHWIEN_RFESOFT1 \
                                0x00000400  // RFE soft defined interrupt 1 
                                            // enable 

#define RFC_DBELL_RFHWIEN_RFESOFT1_M \
                                0x00000400
#define RFC_DBELL_RFHWIEN_RFESOFT1_S 10
#define RFC_DBELL_RFHWIEN_RFESOFT0 \
                                0x00000200  // RFE soft defined interrupt 0 
                                            // enable 

#define RFC_DBELL_RFHWIEN_RFESOFT0_M \
                                0x00000200
#define RFC_DBELL_RFHWIEN_RFESOFT0_S 9
#define RFC_DBELL_RFHWIEN_RFEDONE \
                                0x00000100  // RFE done interrupt enable 

#define RFC_DBELL_RFHWIEN_RFEDONE_M \
                                0x00000100
#define RFC_DBELL_RFHWIEN_RFEDONE_S 8
#define RFC_DBELL_RFHWIEN_TRCTK 0x00000040  // Debug tracer system tick 
                                            // interrupt enable 
#define RFC_DBELL_RFHWIEN_TRCTK_M \
                                0x00000040
#define RFC_DBELL_RFHWIEN_TRCTK_S 6
#define RFC_DBELL_RFHWIEN_MDMSOFT \
                                0x00000020  // Modem soft defined interrupt 
                                            // enable 

#define RFC_DBELL_RFHWIEN_MDMSOFT_M \
                                0x00000020
#define RFC_DBELL_RFHWIEN_MDMSOFT_S 5
#define RFC_DBELL_RFHWIEN_MDMOUT \
                                0x00000010  // Modem FIFO output interrupt 
                                            // enable 

#define RFC_DBELL_RFHWIEN_MDMOUT_M \
                                0x00000010
#define RFC_DBELL_RFHWIEN_MDMOUT_S 4
#define RFC_DBELL_RFHWIEN_MDMIN 0x00000008  // Modem FIFO input interrupt 
                                            // enable 
#define RFC_DBELL_RFHWIEN_MDMIN_M \
                                0x00000008
#define RFC_DBELL_RFHWIEN_MDMIN_S 3
#define RFC_DBELL_RFHWIEN_MDMDONE \
                                0x00000004  // Modem done interrupt enable 

#define RFC_DBELL_RFHWIEN_MDMDONE_M \
                                0x00000004
#define RFC_DBELL_RFHWIEN_MDMDONE_S 2
#define RFC_DBELL_RFHWIEN_FSCA  0x00000002  // FSCA interrupt enable 
#define RFC_DBELL_RFHWIEN_FSCA_M \
                                0x00000002
#define RFC_DBELL_RFHWIEN_FSCA_S 1
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// RFC_DBELL_O_RFCPEIFG register.
//
//*****************************************************************************
#define RFC_DBELL_RFCPEIFG_IRQ31 \
                                0x80000000  // CPE generated interrupt 31 

#define RFC_DBELL_RFCPEIFG_IRQ31_M \
                                0x80000000
#define RFC_DBELL_RFCPEIFG_IRQ31_S 31
#define RFC_DBELL_RFCPEIFG_IRQ30 \
                                0x40000000  // CPE generated interrupt 30 

#define RFC_DBELL_RFCPEIFG_IRQ30_M \
                                0x40000000
#define RFC_DBELL_RFCPEIFG_IRQ30_S 30
#define RFC_DBELL_RFCPEIFG_IRQ29 \
                                0x20000000  // CPE generated interrupt 29 

#define RFC_DBELL_RFCPEIFG_IRQ29_M \
                                0x20000000
#define RFC_DBELL_RFCPEIFG_IRQ29_S 29
#define RFC_DBELL_RFCPEIFG_IRQ28 \
                                0x10000000  // CPE generated interrupt 28 

#define RFC_DBELL_RFCPEIFG_IRQ28_M \
                                0x10000000
#define RFC_DBELL_RFCPEIFG_IRQ28_S 28
#define RFC_DBELL_RFCPEIFG_IRQ27 \
                                0x08000000  // CPE generated interrupt 27 

#define RFC_DBELL_RFCPEIFG_IRQ27_M \
                                0x08000000
#define RFC_DBELL_RFCPEIFG_IRQ27_S 27
#define RFC_DBELL_RFCPEIFG_IRQ26 \
                                0x04000000  // CPE generated interrupt 26 

#define RFC_DBELL_RFCPEIFG_IRQ26_M \
                                0x04000000
#define RFC_DBELL_RFCPEIFG_IRQ26_S 26
#define RFC_DBELL_RFCPEIFG_IRQ25 \
                                0x02000000  // CPE generated interrupt 25 

#define RFC_DBELL_RFCPEIFG_IRQ25_M \
                                0x02000000
#define RFC_DBELL_RFCPEIFG_IRQ25_S 25
#define RFC_DBELL_RFCPEIFG_IRQ24 \
                                0x01000000  // CPE generated interrupt 24 

#define RFC_DBELL_RFCPEIFG_IRQ24_M \
                                0x01000000
#define RFC_DBELL_RFCPEIFG_IRQ24_S 24
#define RFC_DBELL_RFCPEIFG_IRQ23 \
                                0x00800000  // CPE generated interrupt 23 

#define RFC_DBELL_RFCPEIFG_IRQ23_M \
                                0x00800000
#define RFC_DBELL_RFCPEIFG_IRQ23_S 23
#define RFC_DBELL_RFCPEIFG_IRQ22 \
                                0x00400000  // CPE generated interrupt 22 

#define RFC_DBELL_RFCPEIFG_IRQ22_M \
                                0x00400000
#define RFC_DBELL_RFCPEIFG_IRQ22_S 22
#define RFC_DBELL_RFCPEIFG_IRQ21 \
                                0x00200000  // CPE generated interrupt 21 

#define RFC_DBELL_RFCPEIFG_IRQ21_M \
                                0x00200000
#define RFC_DBELL_RFCPEIFG_IRQ21_S 21
#define RFC_DBELL_RFCPEIFG_IRQ20 \
                                0x00100000  // CPE generated interrupt 20 

#define RFC_DBELL_RFCPEIFG_IRQ20_M \
                                0x00100000
#define RFC_DBELL_RFCPEIFG_IRQ20_S 20
#define RFC_DBELL_RFCPEIFG_IRQ19 \
                                0x00080000  // CPE generated interrupt 19 

#define RFC_DBELL_RFCPEIFG_IRQ19_M \
                                0x00080000
#define RFC_DBELL_RFCPEIFG_IRQ19_S 19
#define RFC_DBELL_RFCPEIFG_IRQ18 \
                                0x00040000  // CPE generated interrupt 18 

#define RFC_DBELL_RFCPEIFG_IRQ18_M \
                                0x00040000
#define RFC_DBELL_RFCPEIFG_IRQ18_S 18
#define RFC_DBELL_RFCPEIFG_IRQ17 \
                                0x00020000  // CPE generated interrupt 17 

#define RFC_DBELL_RFCPEIFG_IRQ17_M \
                                0x00020000
#define RFC_DBELL_RFCPEIFG_IRQ17_S 17
#define RFC_DBELL_RFCPEIFG_IRQ16 \
                                0x00010000  // CPE generated interrupt 16 

#define RFC_DBELL_RFCPEIFG_IRQ16_M \
                                0x00010000
#define RFC_DBELL_RFCPEIFG_IRQ16_S 16
#define RFC_DBELL_RFCPEIFG_IRQ15 \
                                0x00008000  // CPE generated interrupt 15 

#define RFC_DBELL_RFCPEIFG_IRQ15_M \
                                0x00008000
#define RFC_DBELL_RFCPEIFG_IRQ15_S 15
#define RFC_DBELL_RFCPEIFG_IRQ14 \
                                0x00004000  // CPE generated interrupt 14 

#define RFC_DBELL_RFCPEIFG_IRQ14_M \
                                0x00004000
#define RFC_DBELL_RFCPEIFG_IRQ14_S 14
#define RFC_DBELL_RFCPEIFG_IRQ13 \
                                0x00002000  // CPE generated interrupt 13 

#define RFC_DBELL_RFCPEIFG_IRQ13_M \
                                0x00002000
#define RFC_DBELL_RFCPEIFG_IRQ13_S 13
#define RFC_DBELL_RFCPEIFG_IRQ12 \
                                0x00001000  // CPE generated interrupt 12 

#define RFC_DBELL_RFCPEIFG_IRQ12_M \
                                0x00001000
#define RFC_DBELL_RFCPEIFG_IRQ12_S 12
#define RFC_DBELL_RFCPEIFG_IRQ11 \
                                0x00000800  // CPE generated interrupt 11 

#define RFC_DBELL_RFCPEIFG_IRQ11_M \
                                0x00000800
#define RFC_DBELL_RFCPEIFG_IRQ11_S 11
#define RFC_DBELL_RFCPEIFG_IRQ10 \
                                0x00000400  // CPE generated interrupt 10 

#define RFC_DBELL_RFCPEIFG_IRQ10_M \
                                0x00000400
#define RFC_DBELL_RFCPEIFG_IRQ10_S 10
#define RFC_DBELL_RFCPEIFG_IRQ9 0x00000200  // CPE generated interrupt 9 
#define RFC_DBELL_RFCPEIFG_IRQ9_M \
                                0x00000200
#define RFC_DBELL_RFCPEIFG_IRQ9_S 9
#define RFC_DBELL_RFCPEIFG_IRQ8 0x00000100  // CPE generated interrupt 8 
#define RFC_DBELL_RFCPEIFG_IRQ8_M \
                                0x00000100
#define RFC_DBELL_RFCPEIFG_IRQ8_S 8
#define RFC_DBELL_RFCPEIFG_IRQ7 0x00000080  // CPE generated interrupt 7 
#define RFC_DBELL_RFCPEIFG_IRQ7_M \
                                0x00000080
#define RFC_DBELL_RFCPEIFG_IRQ7_S 7
#define RFC_DBELL_RFCPEIFG_IRQ6 0x00000040  // CPE generated interrupt 6 
#define RFC_DBELL_RFCPEIFG_IRQ6_M \
                                0x00000040
#define RFC_DBELL_RFCPEIFG_IRQ6_S 6
#define RFC_DBELL_RFCPEIFG_IRQ5 0x00000020  // CPE generated interrupt 5 
#define RFC_DBELL_RFCPEIFG_IRQ5_M \
                                0x00000020
#define RFC_DBELL_RFCPEIFG_IRQ5_S 5
#define RFC_DBELL_RFCPEIFG_IRQ4 0x00000010  // CPE generated interrupt 4 
#define RFC_DBELL_RFCPEIFG_IRQ4_M \
                                0x00000010
#define RFC_DBELL_RFCPEIFG_IRQ4_S 4
#define RFC_DBELL_RFCPEIFG_IRQ3 0x00000008  // CPE generated interrupt 3 
#define RFC_DBELL_RFCPEIFG_IRQ3_M \
                                0x00000008
#define RFC_DBELL_RFCPEIFG_IRQ3_S 3
#define RFC_DBELL_RFCPEIFG_IRQ2 0x00000004  // CPE generated interrupt 2 
#define RFC_DBELL_RFCPEIFG_IRQ2_M \
                                0x00000004
#define RFC_DBELL_RFCPEIFG_IRQ2_S 2
#define RFC_DBELL_RFCPEIFG_IRQ1 0x00000002  // CPE generated interrupt 1 
#define RFC_DBELL_RFCPEIFG_IRQ1_M \
                                0x00000002
#define RFC_DBELL_RFCPEIFG_IRQ1_S 1
#define RFC_DBELL_RFCPEIFG_IRQ0 0x00000001  // CPE generated interrupt 0 
#define RFC_DBELL_RFCPEIFG_IRQ0_M \
                                0x00000001
#define RFC_DBELL_RFCPEIFG_IRQ0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// RFC_DBELL_O_RFCPEIEN register.
//
//*****************************************************************************
#define RFC_DBELL_RFCPEIEN_IRQ31 \
                                0x80000000  // CPE generated interrupt 31 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ31_M \
                                0x80000000
#define RFC_DBELL_RFCPEIEN_IRQ31_S 31
#define RFC_DBELL_RFCPEIEN_IRQ30 \
                                0x40000000  // CPE generated interrupt 30 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ30_M \
                                0x40000000
#define RFC_DBELL_RFCPEIEN_IRQ30_S 30
#define RFC_DBELL_RFCPEIEN_IRQ29 \
                                0x20000000  // CPE generated interrupt 29 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ29_M \
                                0x20000000
#define RFC_DBELL_RFCPEIEN_IRQ29_S 29
#define RFC_DBELL_RFCPEIEN_IRQ28 \
                                0x10000000  // CPE generated interrupt 28 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ28_M \
                                0x10000000
#define RFC_DBELL_RFCPEIEN_IRQ28_S 28
#define RFC_DBELL_RFCPEIEN_IRQ27 \
                                0x08000000  // CPE generated interrupt 27 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ27_M \
                                0x08000000
#define RFC_DBELL_RFCPEIEN_IRQ27_S 27
#define RFC_DBELL_RFCPEIEN_IRQ26 \
                                0x04000000  // CPE generated interrupt 26 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ26_M \
                                0x04000000
#define RFC_DBELL_RFCPEIEN_IRQ26_S 26
#define RFC_DBELL_RFCPEIEN_IRQ25 \
                                0x02000000  // CPE generated interrupt 25 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ25_M \
                                0x02000000
#define RFC_DBELL_RFCPEIEN_IRQ25_S 25
#define RFC_DBELL_RFCPEIEN_IRQ24 \
                                0x01000000  // CPE generated interrupt 24 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ24_M \
                                0x01000000
#define RFC_DBELL_RFCPEIEN_IRQ24_S 24
#define RFC_DBELL_RFCPEIEN_IRQ23 \
                                0x00800000  // CPE generated interrupt 23 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ23_M \
                                0x00800000
#define RFC_DBELL_RFCPEIEN_IRQ23_S 23
#define RFC_DBELL_RFCPEIEN_IRQ22 \
                                0x00400000  // CPE generated interrupt 22 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ22_M \
                                0x00400000
#define RFC_DBELL_RFCPEIEN_IRQ22_S 22
#define RFC_DBELL_RFCPEIEN_IRQ21 \
                                0x00200000  // CPE generated interrupt 21 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ21_M \
                                0x00200000
#define RFC_DBELL_RFCPEIEN_IRQ21_S 21
#define RFC_DBELL_RFCPEIEN_IRQ20 \
                                0x00100000  // CPE generated interrupt 20 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ20_M \
                                0x00100000
#define RFC_DBELL_RFCPEIEN_IRQ20_S 20
#define RFC_DBELL_RFCPEIEN_IRQ19 \
                                0x00080000  // CPE generated interrupt 19 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ19_M \
                                0x00080000
#define RFC_DBELL_RFCPEIEN_IRQ19_S 19
#define RFC_DBELL_RFCPEIEN_IRQ18 \
                                0x00040000  // CPE generated interrupt 18 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ18_M \
                                0x00040000
#define RFC_DBELL_RFCPEIEN_IRQ18_S 18
#define RFC_DBELL_RFCPEIEN_IRQ17 \
                                0x00020000  // CPE generated interrupt 17 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ17_M \
                                0x00020000
#define RFC_DBELL_RFCPEIEN_IRQ17_S 17
#define RFC_DBELL_RFCPEIEN_IRQ16 \
                                0x00010000  // CPE generated interrupt 16 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ16_M \
                                0x00010000
#define RFC_DBELL_RFCPEIEN_IRQ16_S 16
#define RFC_DBELL_RFCPEIEN_IRQ15 \
                                0x00008000  // CPE generated interrupt 15 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ15_M \
                                0x00008000
#define RFC_DBELL_RFCPEIEN_IRQ15_S 15
#define RFC_DBELL_RFCPEIEN_IRQ14 \
                                0x00004000  // CPE generated interrupt 14 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ14_M \
                                0x00004000
#define RFC_DBELL_RFCPEIEN_IRQ14_S 14
#define RFC_DBELL_RFCPEIEN_IRQ13 \
                                0x00002000  // CPE generated interrupt 13 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ13_M \
                                0x00002000
#define RFC_DBELL_RFCPEIEN_IRQ13_S 13
#define RFC_DBELL_RFCPEIEN_IRQ12 \
                                0x00001000  // CPE generated interrupt 12 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ12_M \
                                0x00001000
#define RFC_DBELL_RFCPEIEN_IRQ12_S 12
#define RFC_DBELL_RFCPEIEN_IRQ11 \
                                0x00000800  // CPE generated interrupt 11 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ11_M \
                                0x00000800
#define RFC_DBELL_RFCPEIEN_IRQ11_S 11
#define RFC_DBELL_RFCPEIEN_IRQ10 \
                                0x00000400  // CPE generated interrupt 10 
                                            // enable 

#define RFC_DBELL_RFCPEIEN_IRQ10_M \
                                0x00000400
#define RFC_DBELL_RFCPEIEN_IRQ10_S 10
#define RFC_DBELL_RFCPEIEN_IRQ9 0x00000200  // CPE generated interrupt 9 
                                            // enable 
#define RFC_DBELL_RFCPEIEN_IRQ9_M \
                                0x00000200
#define RFC_DBELL_RFCPEIEN_IRQ9_S 9
#define RFC_DBELL_RFCPEIEN_IRQ8 0x00000100  // CPE generated interrupt 8 
                                            // enable 
#define RFC_DBELL_RFCPEIEN_IRQ8_M \
                                0x00000100
#define RFC_DBELL_RFCPEIEN_IRQ8_S 8
#define RFC_DBELL_RFCPEIEN_IRQ7 0x00000080  // CPE generated interrupt 7 
                                            // enable 
#define RFC_DBELL_RFCPEIEN_IRQ7_M \
                                0x00000080
#define RFC_DBELL_RFCPEIEN_IRQ7_S 7
#define RFC_DBELL_RFCPEIEN_IRQ6 0x00000040  // CPE generated interrupt 6 
                                            // enable 
#define RFC_DBELL_RFCPEIEN_IRQ6_M \
                                0x00000040
#define RFC_DBELL_RFCPEIEN_IRQ6_S 6
#define RFC_DBELL_RFCPEIEN_IRQ5 0x00000020  // CPE generated interrupt 5 
                                            // enable 
#define RFC_DBELL_RFCPEIEN_IRQ5_M \
                                0x00000020
#define RFC_DBELL_RFCPEIEN_IRQ5_S 5
#define RFC_DBELL_RFCPEIEN_IRQ4 0x00000010  // CPE generated interrupt 4 
                                            // enable 
#define RFC_DBELL_RFCPEIEN_IRQ4_M \
                                0x00000010
#define RFC_DBELL_RFCPEIEN_IRQ4_S 4
#define RFC_DBELL_RFCPEIEN_IRQ3 0x00000008  // CPE generated interrupt 3 
                                            // enable 
#define RFC_DBELL_RFCPEIEN_IRQ3_M \
                                0x00000008
#define RFC_DBELL_RFCPEIEN_IRQ3_S 3
#define RFC_DBELL_RFCPEIEN_IRQ2 0x00000004  // CPE generated interrupt 2 
                                            // enable 
#define RFC_DBELL_RFCPEIEN_IRQ2_M \
                                0x00000004
#define RFC_DBELL_RFCPEIEN_IRQ2_S 2
#define RFC_DBELL_RFCPEIEN_IRQ1 0x00000002  // CPE generated interrupt 1 
                                            // enable 
#define RFC_DBELL_RFCPEIEN_IRQ1_M \
                                0x00000002
#define RFC_DBELL_RFCPEIEN_IRQ1_S 1
#define RFC_DBELL_RFCPEIEN_IRQ0 0x00000001  // CPE generated interrupt 0 
                                            // enable 
#define RFC_DBELL_RFCPEIEN_IRQ0_M \
                                0x00000001
#define RFC_DBELL_RFCPEIEN_IRQ0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// RFC_DBELL_O_RFCPEISL register.
//
//*****************************************************************************
#define RFC_DBELL_RFCPEISL_IRQ31 \
                                0x80000000  // Interrupt vector select for CPE 
                                            // generated interrupt 31 

#define RFC_DBELL_RFCPEISL_IRQ31_M \
                                0x80000000
#define RFC_DBELL_RFCPEISL_IRQ31_S 31
#define RFC_DBELL_RFCPEISL_IRQ30 \
                                0x40000000  // Interrupt vector select for CPE 
                                            // generated interrupt 30 

#define RFC_DBELL_RFCPEISL_IRQ30_M \
                                0x40000000
#define RFC_DBELL_RFCPEISL_IRQ30_S 30
#define RFC_DBELL_RFCPEISL_IRQ29 \
                                0x20000000  // Interrupt vector select for CPE 
                                            // generated interrupt 29 

#define RFC_DBELL_RFCPEISL_IRQ29_M \
                                0x20000000
#define RFC_DBELL_RFCPEISL_IRQ29_S 29
#define RFC_DBELL_RFCPEISL_IRQ28 \
                                0x10000000  // Interrupt vector select for CPE 
                                            // generated interrupt 28 

#define RFC_DBELL_RFCPEISL_IRQ28_M \
                                0x10000000
#define RFC_DBELL_RFCPEISL_IRQ28_S 28
#define RFC_DBELL_RFCPEISL_IRQ27 \
                                0x08000000  // Interrupt vector select for CPE 
                                            // generated interrupt 27 

#define RFC_DBELL_RFCPEISL_IRQ27_M \
                                0x08000000
#define RFC_DBELL_RFCPEISL_IRQ27_S 27
#define RFC_DBELL_RFCPEISL_IRQ26 \
                                0x04000000  // Interrupt vector select for CPE 
                                            // generated interrupt 26 

#define RFC_DBELL_RFCPEISL_IRQ26_M \
                                0x04000000
#define RFC_DBELL_RFCPEISL_IRQ26_S 26
#define RFC_DBELL_RFCPEISL_IRQ25 \
                                0x02000000  // Interrupt vector select for CPE 
                                            // generated interrupt 25 

#define RFC_DBELL_RFCPEISL_IRQ25_M \
                                0x02000000
#define RFC_DBELL_RFCPEISL_IRQ25_S 25
#define RFC_DBELL_RFCPEISL_IRQ24 \
                                0x01000000  // Interrupt vector select for CPE 
                                            // generated interrupt 24 

#define RFC_DBELL_RFCPEISL_IRQ24_M \
                                0x01000000
#define RFC_DBELL_RFCPEISL_IRQ24_S 24
#define RFC_DBELL_RFCPEISL_IRQ23 \
                                0x00800000  // Interrupt vector select for CPE 
                                            // generated interrupt 23 

#define RFC_DBELL_RFCPEISL_IRQ23_M \
                                0x00800000
#define RFC_DBELL_RFCPEISL_IRQ23_S 23
#define RFC_DBELL_RFCPEISL_IRQ22 \
                                0x00400000  // Interrupt vector select for CPE 
                                            // generated interrupt 22 

#define RFC_DBELL_RFCPEISL_IRQ22_M \
                                0x00400000
#define RFC_DBELL_RFCPEISL_IRQ22_S 22
#define RFC_DBELL_RFCPEISL_IRQ21 \
                                0x00200000  // Interrupt vector select for CPE 
                                            // generated interrupt 21 

#define RFC_DBELL_RFCPEISL_IRQ21_M \
                                0x00200000
#define RFC_DBELL_RFCPEISL_IRQ21_S 21
#define RFC_DBELL_RFCPEISL_IRQ20 \
                                0x00100000  // Interrupt vector select for CPE 
                                            // generated interrupt 20 

#define RFC_DBELL_RFCPEISL_IRQ20_M \
                                0x00100000
#define RFC_DBELL_RFCPEISL_IRQ20_S 20
#define RFC_DBELL_RFCPEISL_IRQ19 \
                                0x00080000  // Interrupt vector select for CPE 
                                            // generated interrupt 19 

#define RFC_DBELL_RFCPEISL_IRQ19_M \
                                0x00080000
#define RFC_DBELL_RFCPEISL_IRQ19_S 19
#define RFC_DBELL_RFCPEISL_IRQ18 \
                                0x00040000  // Interrupt vector select for CPE 
                                            // generated interrupt 18 

#define RFC_DBELL_RFCPEISL_IRQ18_M \
                                0x00040000
#define RFC_DBELL_RFCPEISL_IRQ18_S 18
#define RFC_DBELL_RFCPEISL_IRQ17 \
                                0x00020000  // Interrupt vector select for CPE 
                                            // generated interrupt 17 

#define RFC_DBELL_RFCPEISL_IRQ17_M \
                                0x00020000
#define RFC_DBELL_RFCPEISL_IRQ17_S 17
#define RFC_DBELL_RFCPEISL_IRQ16 \
                                0x00010000  // Interrupt vector select for CPE 
                                            // generated interrupt 16 

#define RFC_DBELL_RFCPEISL_IRQ16_M \
                                0x00010000
#define RFC_DBELL_RFCPEISL_IRQ16_S 16
#define RFC_DBELL_RFCPEISL_IRQ15 \
                                0x00008000  // Interrupt vector select for CPE 
                                            // generated interrupt 15 

#define RFC_DBELL_RFCPEISL_IRQ15_M \
                                0x00008000
#define RFC_DBELL_RFCPEISL_IRQ15_S 15
#define RFC_DBELL_RFCPEISL_IRQ14 \
                                0x00004000  // Interrupt vector select for CPE 
                                            // generated interrupt 14 

#define RFC_DBELL_RFCPEISL_IRQ14_M \
                                0x00004000
#define RFC_DBELL_RFCPEISL_IRQ14_S 14
#define RFC_DBELL_RFCPEISL_IRQ13 \
                                0x00002000  // Interrupt vector select for CPE 
                                            // generated interrupt 13 

#define RFC_DBELL_RFCPEISL_IRQ13_M \
                                0x00002000
#define RFC_DBELL_RFCPEISL_IRQ13_S 13
#define RFC_DBELL_RFCPEISL_IRQ12 \
                                0x00001000  // Interrupt vector select for CPE 
                                            // generated interrupt 12 

#define RFC_DBELL_RFCPEISL_IRQ12_M \
                                0x00001000
#define RFC_DBELL_RFCPEISL_IRQ12_S 12
#define RFC_DBELL_RFCPEISL_IRQ11 \
                                0x00000800  // Interrupt vector select for CPE 
                                            // generated interrupt 11 

#define RFC_DBELL_RFCPEISL_IRQ11_M \
                                0x00000800
#define RFC_DBELL_RFCPEISL_IRQ11_S 11
#define RFC_DBELL_RFCPEISL_IRQ10 \
                                0x00000400  // Interrupt vector select for CPE 
                                            // generated interrupt 10 

#define RFC_DBELL_RFCPEISL_IRQ10_M \
                                0x00000400
#define RFC_DBELL_RFCPEISL_IRQ10_S 10
#define RFC_DBELL_RFCPEISL_IRQ9 0x00000200  // Interrupt vector select for CPE 
                                            // generated interrupt 9 
#define RFC_DBELL_RFCPEISL_IRQ9_M \
                                0x00000200
#define RFC_DBELL_RFCPEISL_IRQ9_S 9
#define RFC_DBELL_RFCPEISL_IRQ8 0x00000100  // Interrupt vector select for CPE 
                                            // generated interrupt 8 
#define RFC_DBELL_RFCPEISL_IRQ8_M \
                                0x00000100
#define RFC_DBELL_RFCPEISL_IRQ8_S 8
#define RFC_DBELL_RFCPEISL_IRQ7 0x00000080  // Interrupt vector select for CPE 
                                            // generated interrupt 7 
#define RFC_DBELL_RFCPEISL_IRQ7_M \
                                0x00000080
#define RFC_DBELL_RFCPEISL_IRQ7_S 7
#define RFC_DBELL_RFCPEISL_IRQ6 0x00000040  // Interrupt vector select for CPE 
                                            // generated interrupt 6 
#define RFC_DBELL_RFCPEISL_IRQ6_M \
                                0x00000040
#define RFC_DBELL_RFCPEISL_IRQ6_S 6
#define RFC_DBELL_RFCPEISL_IRQ5 0x00000020  // Interrupt vector select for CPE 
                                            // generated interrupt 5 
#define RFC_DBELL_RFCPEISL_IRQ5_M \
                                0x00000020
#define RFC_DBELL_RFCPEISL_IRQ5_S 5
#define RFC_DBELL_RFCPEISL_IRQ4 0x00000010  // Interrupt vector select for CPE 
                                            // generated interrupt 4 
#define RFC_DBELL_RFCPEISL_IRQ4_M \
                                0x00000010
#define RFC_DBELL_RFCPEISL_IRQ4_S 4
#define RFC_DBELL_RFCPEISL_IRQ3 0x00000008  // Interrupt vector select for CPE 
                                            // generated interrupt 3 
#define RFC_DBELL_RFCPEISL_IRQ3_M \
                                0x00000008
#define RFC_DBELL_RFCPEISL_IRQ3_S 3
#define RFC_DBELL_RFCPEISL_IRQ2 0x00000004  // Interrupt vector select for CPE 
                                            // generated interrupt 2 
#define RFC_DBELL_RFCPEISL_IRQ2_M \
                                0x00000004
#define RFC_DBELL_RFCPEISL_IRQ2_S 2
#define RFC_DBELL_RFCPEISL_IRQ1 0x00000002  // Interrupt vector select for CPE 
                                            // generated interrupt 1 
#define RFC_DBELL_RFCPEISL_IRQ1_M \
                                0x00000002
#define RFC_DBELL_RFCPEISL_IRQ1_S 1
#define RFC_DBELL_RFCPEISL_IRQ0 0x00000001  // Interrupt vector select for CPE 
                                            // generated interrupt 0 
#define RFC_DBELL_RFCPEISL_IRQ0_M \
                                0x00000001
#define RFC_DBELL_RFCPEISL_IRQ0_S 0
#define RFC_DBELL_RFCPEISL_IRQ0_CPE0 \
                                0x00000000  // Associate this interrupt flag 
                                            // with INT_RF_CPE0 interrupt 
                                            // vector 
#define RFC_DBELL_RFCPEISL_IRQ0_CPE1 \
                                0x00000001  // Associate this interrupt flag 
                                            // with INT_RF_CPE1 interrupt 
                                            // vector 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// RFC_DBELL_O_RFACKIFG register.
//
//*****************************************************************************
#define RFC_DBELL_RFACKIFG_ACKFLAG \
                                0x00000001  // Interrupt flag for Command ACK 

#define RFC_DBELL_RFACKIFG_ACKFLAG_M \
                                0x00000001
#define RFC_DBELL_RFACKIFG_ACKFLAG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// RFC_DBELL_O_SYSGPOCTL register.
//
//*****************************************************************************
#define RFC_DBELL_SYSGPOCTL_GPOCTL3_M \
                                0x0000F000  // GPO control bit 3. Selects 
                                            // which signal to output on the 
                                            // GPO line. 

#define RFC_DBELL_SYSGPOCTL_GPOCTL3_S 12
#define RFC_DBELL_SYSGPOCTL_GPOCTL2_M \
                                0x00000F00  // GPO control bit 2. Selects 
                                            // which signal to output on the 
                                            // GPO line. 

#define RFC_DBELL_SYSGPOCTL_GPOCTL2_S 8
#define RFC_DBELL_SYSGPOCTL_GPOCTL1_M \
                                0x000000F0  // GPO control bit 1. Selects 
                                            // which signal to output on the 
                                            // GPO line. 

#define RFC_DBELL_SYSGPOCTL_GPOCTL1_S 4
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_M \
                                0x0000000F  // GPO control bit 0. Selects 
                                            // which signal to output on the 
                                            // GPO line. 

#define RFC_DBELL_SYSGPOCTL_GPOCTL0_S 0
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_CPEGPO0 \
                                0x00000000  // Output CPE GPO 0 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_CPEGPO1 \
                                0x00000001  // Output CPE GPO 1 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_CPEGPO2 \
                                0x00000002  // Output CPE GPO 2 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_CPEGPO3 \
                                0x00000003  // Output CPE GPO 3 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_MCEGPO0 \
                                0x00000004  // Output MCE GPO 0 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_MCEGPO1 \
                                0x00000005  // Output MCE GPO 1 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_MCEGPO2 \
                                0x00000006  // Output MCE GPO 2 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_MCEGPO3 \
                                0x00000007  // Output MCE GPO 3 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_RFEGPO0 \
                                0x00000008  // Output RFE GPO 0 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_RFEGPO1 \
                                0x00000009  // Output RFE GPO 1 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_RFEGPO2 \
                                0x0000000A  // Output RFE GPO 2 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_RFEGPO3 \
                                0x0000000B  // Output RFE GPO 3 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_RATGPO0 \
                                0x0000000C  // Output RAT GPO 0 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_RATGPO1 \
                                0x0000000D  // Output RAT GPO 1 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_RATGPO2 \
                                0x0000000E  // Output RAT GPO 2 
#define RFC_DBELL_SYSGPOCTL_GPOCTL0_RATGPO3 \
                                0x0000000F  // Output RAT GPO 3 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// RFC_DBELL_O_RFCIDLESTAT register.
//
//*****************************************************************************
#define RFC_DBELL_RFCIDLESTAT_IDLE \
                                0x00000001  // The RF Core is IDLE and can be 
                                            // switched off 

#define RFC_DBELL_RFCIDLESTAT_IDLE_M \
                                0x00000001
#define RFC_DBELL_RFCIDLESTAT_IDLE_S 0


#endif // __HW_RFC_DBELL_H__

