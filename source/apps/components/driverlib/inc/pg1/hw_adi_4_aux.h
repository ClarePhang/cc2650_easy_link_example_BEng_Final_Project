
/******************************************************************************
*  Filename:       hw_adi_4_aux.h
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
#ifndef __HW_ADI_4_AUX_H__
#define __HW_ADI_4_AUX_H__

//*****************************************************************************
//
// The following are defines for the ADI_4_AUX register offsets.
//
//*****************************************************************************
#define ADI_4_AUX_O_MUX1        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_O_MUX3        0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_O_ISRC        0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_O_COMP        0x00000005  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_O_ADC0        0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_O_ADC1        0x00000009  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_O_ADCREF0     0x0000000A  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_O_ADCREF1     0x0000000B  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_4_AUX_O_MUX1 register.
//
//*****************************************************************************
#define ADI_4_AUX_MUX1_COMPA_IN_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_4_AUX_MUX1_COMPA_IN_S 0
#define ADI_4_AUX_MUX1_COMPA_IN_NC \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX1_COMPA_IN_AUXIO7 \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX1_COMPA_IN_AUXIO6 \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX1_COMPA_IN_AUXIO5 \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX1_COMPA_IN_AUXIO4 \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX1_COMPA_IN_AUXIO3 \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX1_COMPA_IN_AUXIO2 \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX1_COMPA_IN_AUXIO1 \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX1_COMPA_IN_AUXIO0 \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_4_AUX_O_MUX3 register.
//
//*****************************************************************************
#define ADI_4_AUX_MUX3_ADCCOMPB_IN_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_4_AUX_MUX3_ADCCOMPB_IN_S 0
#define ADI_4_AUX_MUX3_ADCCOMPB_IN_NC \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX3_ADCCOMPB_IN_AUXIO7 \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX3_ADCCOMPB_IN_AUXIO6 \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX3_ADCCOMPB_IN_AUXIO5 \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX3_ADCCOMPB_IN_AUXIO4 \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX3_ADCCOMPB_IN_AUXIO3 \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX3_ADCCOMPB_IN_AUXIO2 \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX3_ADCCOMPB_IN_AUXIO1 \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_MUX3_ADCCOMPB_IN_AUXIO0 \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_4_AUX_O_ISRC register.
//
//*****************************************************************************
#define ADI_4_AUX_ISRC_TRIM_M   0x000000FC  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ISRC_TRIM_S   2
#define ADI_4_AUX_ISRC_TRIM_NC  0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ISRC_TRIM_0P25U \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ISRC_TRIM_0P5U \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ISRC_TRIM_1P0U \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ISRC_TRIM_2P0U \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ISRC_TRIM_4P5U \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ISRC_TRIM_11P75U \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ISRC_IPTAT_BIAS_EN \
                                0x00000002  // Enable dummy bias mode. 0: 
                                            // Normal mode, 1: Dummy bias mode 

#define ADI_4_AUX_ISRC_IPTAT_BIAS_EN_M \
                                0x00000002
#define ADI_4_AUX_ISRC_IPTAT_BIAS_EN_S 1
#define ADI_4_AUX_ISRC_EN       0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ISRC_EN_M     0x00000001
#define ADI_4_AUX_ISRC_EN_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_4_AUX_O_COMP register.
//
//*****************************************************************************
#define ADI_4_AUX_COMP_COMPA_REF_RES_EN \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_4_AUX_COMP_COMPA_REF_RES_EN_M \
                                0x00000080
#define ADI_4_AUX_COMP_COMPA_REF_RES_EN_S 7
#define ADI_4_AUX_COMP_COMPA_REF_CURR_EN \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_4_AUX_COMP_COMPA_REF_CURR_EN_M \
                                0x00000040
#define ADI_4_AUX_COMP_COMPA_REF_CURR_EN_S 6
#define ADI_4_AUX_COMP_COMPB_TRIM_M \
                                0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_4_AUX_COMP_COMPB_TRIM_S 3
#define ADI_4_AUX_COMP_COMPB_TRIM_DIV1 \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_COMP_COMPB_TRIM_DIV2 \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_COMP_COMPB_TRIM_DIV3 \
                                0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_COMP_COMPB_TRIM_DIV4 \
                                0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_COMP_COMPB_EN 0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_COMP_COMPB_EN_M \
                                0x00000004
#define ADI_4_AUX_COMP_COMPB_EN_S 2
#define ADI_4_AUX_COMP_IPTAT_BIAS_EN \
                                0x00000002  // Enable dummy bias mode. 0: 
                                            // Normal mode, 1: Dummy bias mode 

#define ADI_4_AUX_COMP_IPTAT_BIAS_EN_M \
                                0x00000002
#define ADI_4_AUX_COMP_IPTAT_BIAS_EN_S 1
#define ADI_4_AUX_COMP_COMPA_EN 0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_COMP_COMPA_EN_M \
                                0x00000001
#define ADI_4_AUX_COMP_COMPA_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_4_AUX_O_ADC0 register.
//
//*****************************************************************************
#define ADI_4_AUX_ADC0_SMPL_MODE \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_4_AUX_ADC0_SMPL_MODE_M \
                                0x00000080
#define ADI_4_AUX_ADC0_SMPL_MODE_S 7
#define ADI_4_AUX_ADC0_SMPL_CYCLE_EXP_M \
                                0x00000078  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_4_AUX_ADC0_SMPL_CYCLE_EXP_S 3
#define ADI_4_AUX_ADC0_IREF_DIS 0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ADC0_IREF_DIS_M \
                                0x00000004
#define ADI_4_AUX_ADC0_IREF_DIS_S 2
#define ADI_4_AUX_ADC0_RESET_N  0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ADC0_RESET_N_M \
                                0x00000002
#define ADI_4_AUX_ADC0_RESET_N_S 1
#define ADI_4_AUX_ADC0_EN       0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ADC0_EN_M     0x00000001
#define ADI_4_AUX_ADC0_EN_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_4_AUX_O_ADC1 register.
//
//*****************************************************************************
#define ADI_4_AUX_ADC1_VMID_ON_IDLE \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_4_AUX_ADC1_VMID_ON_IDLE_M \
                                0x00000010
#define ADI_4_AUX_ADC1_VMID_ON_IDLE_S 4
#define ADI_4_AUX_ADC1_DEBUG_EN 0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ADC1_DEBUG_EN_M \
                                0x00000008
#define ADI_4_AUX_ADC1_DEBUG_EN_S 3
#define ADI_4_AUX_ADC1_COMP_SETTLE_M \
                                0x00000006  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_4_AUX_ADC1_COMP_SETTLE_S 1
#define ADI_4_AUX_ADC1_COMP_SETTLE_3_PERIODS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ADC1_COMP_SETTLE_7_PERIODS \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ADC1_COMP_SETTLE_11_PERIODS \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ADC1_COMP_SETTLE_15_PERIODS \
                                0x00000006  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ADC1_SCALE_DIS \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_4_AUX_ADC1_SCALE_DIS_M \
                                0x00000001
#define ADI_4_AUX_ADC1_SCALE_DIS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_4_AUX_O_ADCREF0 register.
//
//*****************************************************************************
#define ADI_4_AUX_ADCREF0_REF_ON_IDLE \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_4_AUX_ADCREF0_REF_ON_IDLE_M \
                                0x00000040
#define ADI_4_AUX_ADCREF0_REF_ON_IDLE_S 6
#define ADI_4_AUX_ADCREF0_IOMUX 0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ADCREF0_IOMUX_M \
                                0x00000020
#define ADI_4_AUX_ADCREF0_IOMUX_S 5
#define ADI_4_AUX_ADCREF0_EXT   0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ADCREF0_EXT_M 0x00000010
#define ADI_4_AUX_ADCREF0_EXT_S 4
#define ADI_4_AUX_ADCREF0_SRC   0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ADCREF0_SRC_M 0x00000008
#define ADI_4_AUX_ADCREF0_SRC_S 3
#define ADI_4_AUX_ADCREF0_IREF_BIAS_EN \
                                0x00000004  // Enable dummy bias mode. 0: 
                                            // Normal mode, 1: Dummy bias mode 

#define ADI_4_AUX_ADCREF0_IREF_BIAS_EN_M \
                                0x00000004
#define ADI_4_AUX_ADCREF0_IREF_BIAS_EN_S 2
#define ADI_4_AUX_ADCREF0_IVREF_BIAS_EN \
                                0x00000002  // Enable dummy bias mode. 0: 
                                            // Normal mode, 1: Dummy bias mode 

#define ADI_4_AUX_ADCREF0_IVREF_BIAS_EN_M \
                                0x00000002
#define ADI_4_AUX_ADCREF0_IVREF_BIAS_EN_S 1
#define ADI_4_AUX_ADCREF0_EN    0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_4_AUX_ADCREF0_EN_M  0x00000001
#define ADI_4_AUX_ADCREF0_EN_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_4_AUX_O_ADCREF1 register.
//
//*****************************************************************************
#define ADI_4_AUX_ADCREF1_ITRIM_M \
                                0x000000C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_4_AUX_ADCREF1_ITRIM_S 6
#define ADI_4_AUX_ADCREF1_VTRIM_M \
                                0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_4_AUX_ADCREF1_VTRIM_S 0


#endif // __HW_ADI_4_AUX_H__

