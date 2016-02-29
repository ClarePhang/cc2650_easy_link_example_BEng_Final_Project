
/******************************************************************************
*  Filename:       hw_adi_3_refsys.h
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
#ifndef __HW_ADI_3_REFSYS_H__
#define __HW_ADI_3_REFSYS_H__

//*****************************************************************************
//
// The following are defines for the ADI_3_REFSYS register offsets.
//
//*****************************************************************************
#define ADI_3_REFSYS_O_REFSYSCTL1 \
                                0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_O_REFSYSCTL2 \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_O_REFSYSCTL3 \
                                0x00000005  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_O_DCDCCTL0 0x00000006  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_O_DCDCCTL1 0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_O_DCDCCTL2 0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_O_DCDCCTL4 0x0000000A  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_O_DCDCCTL5 0x0000000B  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_3_REFSYS_O_REFSYSCTL1 register.
//
//*****************************************************************************
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_M \
                                0x000000F8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_S 3
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_4 \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_5 \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_6 \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_7 \
                                0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_0 \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_1 \
                                0x00000028  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_2 \
                                0x00000030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_3 \
                                0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_12 \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_13 \
                                0x00000048  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_14 \
                                0x00000050  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_15 \
                                0x00000058  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_8 \
                                0x00000060  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_9 \
                                0x00000068  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_10 \
                                0x00000070  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_11 \
                                0x00000078  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_20 \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_21 \
                                0x00000088  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_22 \
                                0x00000090  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_23 \
                                0x00000098  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_16 \
                                0x000000A0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_17 \
                                0x000000A8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_18 \
                                0x000000B0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_19 \
                                0x000000B8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_28 \
                                0x000000C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_29 \
                                0x000000C8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_30 \
                                0x000000D0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_31 \
                                0x000000D8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_24 \
                                0x000000E0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_25 \
                                0x000000E8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_26 \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_TRIM_VDDS_BOD_POS_27 \
                                0x000000F8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_BATMON_COMP_TEST_EN \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_REFSYSCTL1_BATMON_COMP_TEST_EN_M \
                                0x00000004
#define ADI_3_REFSYS_REFSYSCTL1_BATMON_COMP_TEST_EN_S 2
#define ADI_3_REFSYS_REFSYSCTL1_BATMON_COMP_TEST_EN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL1_BATMON_COMP_TEST_EN_EN \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_3_REFSYS_O_REFSYSCTL2 register.
//
//*****************************************************************************
#define ADI_3_REFSYS_REFSYSCTL2_TRIM_VBG_MAG_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_REFSYSCTL2_TRIM_VBG_MAG_S 4
#define ADI_3_REFSYS_REFSYSCTL2_TRIM_BATMON_M \
                                0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_REFSYSCTL2_TRIM_BATMON_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_3_REFSYS_O_REFSYSCTL3 register.
//
//*****************************************************************************
#define ADI_3_REFSYS_REFSYSCTL3_BOD_BG_TRIM_EN \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_REFSYSCTL3_BOD_BG_TRIM_EN_M \
                                0x00000080
#define ADI_3_REFSYS_REFSYSCTL3_BOD_BG_TRIM_EN_S 7
#define ADI_3_REFSYS_REFSYSCTL3_VTEMP_EN \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_REFSYSCTL3_VTEMP_EN_M \
                                0x00000040
#define ADI_3_REFSYS_REFSYSCTL3_VTEMP_EN_S 6
#define ADI_3_REFSYS_REFSYSCTL3_VTEMP_EN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL3_VTEMP_EN_EN \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_REFSYSCTL3_TRIM_VBG_CURV_M \
                                0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_REFSYSCTL3_TRIM_VBG_CURV_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_3_REFSYS_O_DCDCCTL0 register.
//
//*****************************************************************************
#define ADI_3_REFSYS_DCDCCTL0_GLDO_ISRC_M \
                                0x000000E0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_DCDCCTL0_GLDO_ISRC_S 5
#define ADI_3_REFSYS_DCDCCTL0_VDDR_TRIM_M \
                                0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_DCDCCTL0_VDDR_TRIM_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_3_REFSYS_O_DCDCCTL1 register.
//
//*****************************************************************************
#define ADI_3_REFSYS_DCDCCTL1_IPTAT_TRIM_M \
                                0x000000C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_DCDCCTL1_IPTAT_TRIM_S 6
#define ADI_3_REFSYS_DCDCCTL1_VDDR_OK_HYST \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_DCDCCTL1_VDDR_OK_HYST_M \
                                0x00000020
#define ADI_3_REFSYS_DCDCCTL1_VDDR_OK_HYST_S 5
#define ADI_3_REFSYS_DCDCCTL1_VDDR_TRIM_SLEEP_M \
                                0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_DCDCCTL1_VDDR_TRIM_SLEEP_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_3_REFSYS_O_DCDCCTL2 register.
//
//*****************************************************************************
#define ADI_3_REFSYS_DCDCCTL2_EN_DMY_3P3V \
                                0x00000010  // Enable dummy bias mode. 0: 
                                            // Normal mode, 1: Dummy bias mode 

#define ADI_3_REFSYS_DCDCCTL2_EN_DMY_3P3V_M \
                                0x00000010
#define ADI_3_REFSYS_DCDCCTL2_EN_DMY_3P3V_S 4
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_3_REFSYS_O_DCDCCTL4 register.
//
//*****************************************************************************
#define ADI_3_REFSYS_DCDCCTL4_DEADTIME_TRIM_M \
                                0x000000C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_DCDCCTL4_DEADTIME_TRIM_S 6
#define ADI_3_REFSYS_DCDCCTL4_LOW_EN_SEL_M \
                                0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_DCDCCTL4_LOW_EN_SEL_S 3
#define ADI_3_REFSYS_DCDCCTL4_HIGH_EN_SEL_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_DCDCCTL4_HIGH_EN_SEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_3_REFSYS_O_DCDCCTL5 register.
//
//*****************************************************************************
#define ADI_3_REFSYS_DCDCCTL5_TESTN \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_DCDCCTL5_TESTN_M \
                                0x00000020
#define ADI_3_REFSYS_DCDCCTL5_TESTN_S 5
#define ADI_3_REFSYS_DCDCCTL5_TESTP \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_DCDCCTL5_TESTP_M \
                                0x00000010
#define ADI_3_REFSYS_DCDCCTL5_TESTP_S 4
#define ADI_3_REFSYS_DCDCCTL5_DITHER_EN \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_DCDCCTL5_DITHER_EN_M \
                                0x00000008
#define ADI_3_REFSYS_DCDCCTL5_DITHER_EN_S 3
#define ADI_3_REFSYS_DCDCCTL5_DITHER_EN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_DCDCCTL5_DITHER_EN_EN \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_3_REFSYS_DCDCCTL5_IPEAK_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_3_REFSYS_DCDCCTL5_IPEAK_S 0


#endif // __HW_ADI_3_REFSYS_H__

