
/******************************************************************************
*  Filename:       hw_rfc_pwr.h
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
#ifndef __HW_RFC_PWR_H__
#define __HW_RFC_PWR_H__

//*****************************************************************************
//
// The following are defines for the RFC_PWR register offsets.
//
//*****************************************************************************
#define RFC_PWR_O_PWMCLKEN      0x00000000  // RF Core Clock Enable 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// RFC_PWR_O_PWMCLKEN register.
//
//*****************************************************************************
#define RFC_PWR_PWMCLKEN_RFCTRC 0x00000400  // Enable clk to RFCTRC 
#define RFC_PWR_PWMCLKEN_RFCTRC_M \
                                0x00000400
#define RFC_PWR_PWMCLKEN_RFCTRC_S 10
#define RFC_PWR_PWMCLKEN_FSCA   0x00000200  // Enable clk to FSCA 
#define RFC_PWR_PWMCLKEN_FSCA_M 0x00000200
#define RFC_PWR_PWMCLKEN_FSCA_S 9
#define RFC_PWR_PWMCLKEN_PHA    0x00000100  // Enable clk to PHA 
#define RFC_PWR_PWMCLKEN_PHA_M  0x00000100
#define RFC_PWR_PWMCLKEN_PHA_S  8
#define RFC_PWR_PWMCLKEN_RAT    0x00000080  // Enable clk to RAT 
#define RFC_PWR_PWMCLKEN_RAT_M  0x00000080
#define RFC_PWR_PWMCLKEN_RAT_S  7
#define RFC_PWR_PWMCLKEN_RFERAM 0x00000040  // Enable clk to RFERAM 
#define RFC_PWR_PWMCLKEN_RFERAM_M \
                                0x00000040
#define RFC_PWR_PWMCLKEN_RFERAM_S 6
#define RFC_PWR_PWMCLKEN_RFE    0x00000020  // Enable clk to RFE 
#define RFC_PWR_PWMCLKEN_RFE_M  0x00000020
#define RFC_PWR_PWMCLKEN_RFE_S  5
#define RFC_PWR_PWMCLKEN_MDMRAM 0x00000010  // Enable clk to MDMRAM 
#define RFC_PWR_PWMCLKEN_MDMRAM_M \
                                0x00000010
#define RFC_PWR_PWMCLKEN_MDMRAM_S 4
#define RFC_PWR_PWMCLKEN_MDM    0x00000008  // Enable clk to MDM 
#define RFC_PWR_PWMCLKEN_MDM_M  0x00000008
#define RFC_PWR_PWMCLKEN_MDM_S  3
#define RFC_PWR_PWMCLKEN_CPERAM 0x00000004  // Enable clk to CPERAM 
#define RFC_PWR_PWMCLKEN_CPERAM_M \
                                0x00000004
#define RFC_PWR_PWMCLKEN_CPERAM_S 2
#define RFC_PWR_PWMCLKEN_CPE    0x00000002  // Enable hclk into CPE and CPEROM 
#define RFC_PWR_PWMCLKEN_CPE_M  0x00000002
#define RFC_PWR_PWMCLKEN_CPE_S  1
#define RFC_PWR_PWMCLKEN_RFC    0x00000001  // Enable interconnect; DBELL; and 
                                            // sclk for CPE 
#define RFC_PWR_PWMCLKEN_RFC_M  0x00000001
#define RFC_PWR_PWMCLKEN_RFC_S  0


#endif // __HW_RFC_PWR_H__

