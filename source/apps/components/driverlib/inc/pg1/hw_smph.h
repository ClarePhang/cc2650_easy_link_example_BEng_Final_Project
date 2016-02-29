
/******************************************************************************
*  Filename:       hw_smph.h
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
#ifndef __HW_SMPH_H__
#define __HW_SMPH_H__

//*****************************************************************************
//
// The following are defines for the SMPH register offsets.
//
//*****************************************************************************
#define SMPH_O_SMPH0            0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH1            0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH2            0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH3            0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH4            0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH5            0x00000014  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH6            0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH7            0x0000001C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH8            0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH9            0x00000024  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH10           0x00000028  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH11           0x0000002C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH12           0x00000030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH13           0x00000034  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH14           0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH15           0x0000003C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH16           0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH17           0x00000044  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH18           0x00000048  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH19           0x0000004C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH20           0x00000050  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH21           0x00000054  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH22           0x00000058  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH23           0x0000005C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH24           0x00000060  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH25           0x00000064  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH26           0x00000068  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH27           0x0000006C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH28           0x00000070  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH29           0x00000074  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH30           0x00000078  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_SMPH31           0x0000007C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK0            0x00000800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK1            0x00000804  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK2            0x00000808  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK3            0x0000080C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK4            0x00000810  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK5            0x00000814  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK6            0x00000818  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK7            0x0000081C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK8            0x00000820  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK9            0x00000824  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK10           0x00000828  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK11           0x0000082C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK12           0x00000830  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK13           0x00000834  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK14           0x00000838  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK15           0x0000083C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK16           0x00000840  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK17           0x00000844  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK18           0x00000848  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK19           0x0000084C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK20           0x00000850  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK21           0x00000854  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK22           0x00000858  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK23           0x0000085C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK24           0x00000860  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK25           0x00000864  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK26           0x00000868  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK27           0x0000086C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK28           0x00000870  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK29           0x00000874  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK30           0x00000878  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_O_PEEK31           0x0000087C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 


//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH0 register.
//
//*****************************************************************************
#define SMPH_SMPH0_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH0_STAT_M       0x00000001
#define SMPH_SMPH0_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH1 register.
//
//*****************************************************************************
#define SMPH_SMPH1_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH1_STAT_M       0x00000001
#define SMPH_SMPH1_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH2 register.
//
//*****************************************************************************
#define SMPH_SMPH2_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH2_STAT_M       0x00000001
#define SMPH_SMPH2_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH3 register.
//
//*****************************************************************************
#define SMPH_SMPH3_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH3_STAT_M       0x00000001
#define SMPH_SMPH3_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH4 register.
//
//*****************************************************************************
#define SMPH_SMPH4_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH4_STAT_M       0x00000001
#define SMPH_SMPH4_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH5 register.
//
//*****************************************************************************
#define SMPH_SMPH5_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH5_STAT_M       0x00000001
#define SMPH_SMPH5_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH6 register.
//
//*****************************************************************************
#define SMPH_SMPH6_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH6_STAT_M       0x00000001
#define SMPH_SMPH6_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH7 register.
//
//*****************************************************************************
#define SMPH_SMPH7_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH7_STAT_M       0x00000001
#define SMPH_SMPH7_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH8 register.
//
//*****************************************************************************
#define SMPH_SMPH8_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH8_STAT_M       0x00000001
#define SMPH_SMPH8_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH9 register.
//
//*****************************************************************************
#define SMPH_SMPH9_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH9_STAT_M       0x00000001
#define SMPH_SMPH9_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH10 register.
//
//*****************************************************************************
#define SMPH_SMPH10_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH10_STAT_M      0x00000001
#define SMPH_SMPH10_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH11 register.
//
//*****************************************************************************
#define SMPH_SMPH11_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH11_STAT_M      0x00000001
#define SMPH_SMPH11_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH12 register.
//
//*****************************************************************************
#define SMPH_SMPH12_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH12_STAT_M      0x00000001
#define SMPH_SMPH12_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH13 register.
//
//*****************************************************************************
#define SMPH_SMPH13_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH13_STAT_M      0x00000001
#define SMPH_SMPH13_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH14 register.
//
//*****************************************************************************
#define SMPH_SMPH14_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH14_STAT_M      0x00000001
#define SMPH_SMPH14_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH15 register.
//
//*****************************************************************************
#define SMPH_SMPH15_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH15_STAT_M      0x00000001
#define SMPH_SMPH15_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH16 register.
//
//*****************************************************************************
#define SMPH_SMPH16_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH16_STAT_M      0x00000001
#define SMPH_SMPH16_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH17 register.
//
//*****************************************************************************
#define SMPH_SMPH17_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH17_STAT_M      0x00000001
#define SMPH_SMPH17_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH18 register.
//
//*****************************************************************************
#define SMPH_SMPH18_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH18_STAT_M      0x00000001
#define SMPH_SMPH18_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH19 register.
//
//*****************************************************************************
#define SMPH_SMPH19_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH19_STAT_M      0x00000001
#define SMPH_SMPH19_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH20 register.
//
//*****************************************************************************
#define SMPH_SMPH20_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH20_STAT_M      0x00000001
#define SMPH_SMPH20_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH21 register.
//
//*****************************************************************************
#define SMPH_SMPH21_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH21_STAT_M      0x00000001
#define SMPH_SMPH21_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH22 register.
//
//*****************************************************************************
#define SMPH_SMPH22_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH22_STAT_M      0x00000001
#define SMPH_SMPH22_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH23 register.
//
//*****************************************************************************
#define SMPH_SMPH23_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH23_STAT_M      0x00000001
#define SMPH_SMPH23_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH24 register.
//
//*****************************************************************************
#define SMPH_SMPH24_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH24_STAT_M      0x00000001
#define SMPH_SMPH24_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH25 register.
//
//*****************************************************************************
#define SMPH_SMPH25_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH25_STAT_M      0x00000001
#define SMPH_SMPH25_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH26 register.
//
//*****************************************************************************
#define SMPH_SMPH26_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH26_STAT_M      0x00000001
#define SMPH_SMPH26_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH27 register.
//
//*****************************************************************************
#define SMPH_SMPH27_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH27_STAT_M      0x00000001
#define SMPH_SMPH27_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH28 register.
//
//*****************************************************************************
#define SMPH_SMPH28_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH28_STAT_M      0x00000001
#define SMPH_SMPH28_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH29 register.
//
//*****************************************************************************
#define SMPH_SMPH29_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH29_STAT_M      0x00000001
#define SMPH_SMPH29_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH30 register.
//
//*****************************************************************************
#define SMPH_SMPH30_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH30_STAT_M      0x00000001
#define SMPH_SMPH30_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_SMPH31 register.
//
//*****************************************************************************
#define SMPH_SMPH31_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_SMPH31_STAT_M      0x00000001
#define SMPH_SMPH31_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK0 register.
//
//*****************************************************************************
#define SMPH_PEEK0_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK0_STAT_M       0x00000001
#define SMPH_PEEK0_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK1 register.
//
//*****************************************************************************
#define SMPH_PEEK1_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK1_STAT_M       0x00000001
#define SMPH_PEEK1_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK2 register.
//
//*****************************************************************************
#define SMPH_PEEK2_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK2_STAT_M       0x00000001
#define SMPH_PEEK2_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK3 register.
//
//*****************************************************************************
#define SMPH_PEEK3_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK3_STAT_M       0x00000001
#define SMPH_PEEK3_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK4 register.
//
//*****************************************************************************
#define SMPH_PEEK4_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK4_STAT_M       0x00000001
#define SMPH_PEEK4_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK5 register.
//
//*****************************************************************************
#define SMPH_PEEK5_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK5_STAT_M       0x00000001
#define SMPH_PEEK5_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK6 register.
//
//*****************************************************************************
#define SMPH_PEEK6_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK6_STAT_M       0x00000001
#define SMPH_PEEK6_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK7 register.
//
//*****************************************************************************
#define SMPH_PEEK7_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK7_STAT_M       0x00000001
#define SMPH_PEEK7_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK8 register.
//
//*****************************************************************************
#define SMPH_PEEK8_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK8_STAT_M       0x00000001
#define SMPH_PEEK8_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK9 register.
//
//*****************************************************************************
#define SMPH_PEEK9_STAT         0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK9_STAT_M       0x00000001
#define SMPH_PEEK9_STAT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK10 register.
//
//*****************************************************************************
#define SMPH_PEEK10_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK10_STAT_M      0x00000001
#define SMPH_PEEK10_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK11 register.
//
//*****************************************************************************
#define SMPH_PEEK11_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK11_STAT_M      0x00000001
#define SMPH_PEEK11_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK12 register.
//
//*****************************************************************************
#define SMPH_PEEK12_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK12_STAT_M      0x00000001
#define SMPH_PEEK12_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK13 register.
//
//*****************************************************************************
#define SMPH_PEEK13_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK13_STAT_M      0x00000001
#define SMPH_PEEK13_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK14 register.
//
//*****************************************************************************
#define SMPH_PEEK14_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK14_STAT_M      0x00000001
#define SMPH_PEEK14_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK15 register.
//
//*****************************************************************************
#define SMPH_PEEK15_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK15_STAT_M      0x00000001
#define SMPH_PEEK15_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK16 register.
//
//*****************************************************************************
#define SMPH_PEEK16_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK16_STAT_M      0x00000001
#define SMPH_PEEK16_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK17 register.
//
//*****************************************************************************
#define SMPH_PEEK17_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK17_STAT_M      0x00000001
#define SMPH_PEEK17_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK18 register.
//
//*****************************************************************************
#define SMPH_PEEK18_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK18_STAT_M      0x00000001
#define SMPH_PEEK18_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK19 register.
//
//*****************************************************************************
#define SMPH_PEEK19_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK19_STAT_M      0x00000001
#define SMPH_PEEK19_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK20 register.
//
//*****************************************************************************
#define SMPH_PEEK20_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK20_STAT_M      0x00000001
#define SMPH_PEEK20_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK21 register.
//
//*****************************************************************************
#define SMPH_PEEK21_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK21_STAT_M      0x00000001
#define SMPH_PEEK21_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK22 register.
//
//*****************************************************************************
#define SMPH_PEEK22_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK22_STAT_M      0x00000001
#define SMPH_PEEK22_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK23 register.
//
//*****************************************************************************
#define SMPH_PEEK23_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK23_STAT_M      0x00000001
#define SMPH_PEEK23_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK24 register.
//
//*****************************************************************************
#define SMPH_PEEK24_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK24_STAT_M      0x00000001
#define SMPH_PEEK24_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK25 register.
//
//*****************************************************************************
#define SMPH_PEEK25_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK25_STAT_M      0x00000001
#define SMPH_PEEK25_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK26 register.
//
//*****************************************************************************
#define SMPH_PEEK26_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK26_STAT_M      0x00000001
#define SMPH_PEEK26_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK27 register.
//
//*****************************************************************************
#define SMPH_PEEK27_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK27_STAT_M      0x00000001
#define SMPH_PEEK27_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK28 register.
//
//*****************************************************************************
#define SMPH_PEEK28_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK28_STAT_M      0x00000001
#define SMPH_PEEK28_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK29 register.
//
//*****************************************************************************
#define SMPH_PEEK29_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK29_STAT_M      0x00000001
#define SMPH_PEEK29_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK30 register.
//
//*****************************************************************************
#define SMPH_PEEK30_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK30_STAT_M      0x00000001
#define SMPH_PEEK30_STAT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the SMPH_O_PEEK31 register.
//
//*****************************************************************************
#define SMPH_PEEK31_STAT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define SMPH_PEEK31_STAT_M      0x00000001
#define SMPH_PEEK31_STAT_S      0


#endif // __HW_SMPH_H__

