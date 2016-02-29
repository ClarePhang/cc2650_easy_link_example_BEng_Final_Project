
/******************************************************************************
*  Filename:       hw_adi_0_rf.h
*  Revised:        $Date: 2014-03-05 15:40:25 +0100 (on, 05 mar 2014) $
*  Revision:       $Revision: 40309 $
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
#ifndef __HW_ADI_0_RF_H__
#define __HW_ADI_0_RF_H__

//*****************************************************************************
//
// The following are defines for the ADI_0_RF register offsets.
//
//*****************************************************************************
#define ADI_0_RF_O_LNACTL0      0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_LNACTL1      0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_LNACTL2      0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFAMPCTL0    0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFAMPCTL1    0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFAMPCTL2    0x00000005  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_PACTL0       0x00000006  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_PACTL1       0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_PACTL2       0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_RFLDO0       0x00000009  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_RFLDO1       0x0000000A  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_RFLDO2       0x0000000B  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFADCCTL0    0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFADCLFCFG0  0x0000000D  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFADCLFCFG1  0x0000000E  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFADCDAC     0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFADCQUANT0  0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFADCCTL1    0x00000012  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFADCCTL2    0x00000013  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFADCTEST    0x00000014  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFALDO1      0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFALDO2      0x00000019  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFALDO3      0x0000001A  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFDLDO1      0x0000001B  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFDLDO2      0x0000001C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFDLDO3      0x0000001D  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_IFAMPCTL3    0x0000001E  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_O_STAT         0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_LNACTL0 register.
//
//*****************************************************************************
#define ADI_0_RF_LNACTL0_MIX_AD_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_LNACTL0_MIX_AD_S 4
#define ADI_0_RF_LNACTL0_LNA_AD_M \
                                0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_LNACTL0_LNA_AD_S 2
#define ADI_0_RF_LNACTL0_EN_DMY_LNA \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_LNACTL0_EN_DMY_LNA_M \
                                0x00000002
#define ADI_0_RF_LNACTL0_EN_DMY_LNA_S 1
#define ADI_0_RF_LNACTL0_EN     0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_LNACTL0_EN_M   0x00000001
#define ADI_0_RF_LNACTL0_EN_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_LNACTL1 register.
//
//*****************************************************************************
#define ADI_0_RF_LNACTL1_DEV_CTL_M \
                                0x00000030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_LNACTL1_DEV_CTL_S 4
#define ADI_0_RF_LNACTL1_GAIN_M 0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_LNACTL1_GAIN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_LNACTL2 register.
//
//*****************************************************************************
#define ADI_0_RF_LNACTL2_RXTX_PIN_M \
                                0x000000C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_LNACTL2_RXTX_PIN_S 6
#define ADI_0_RF_LNACTL2_EXT_BIAS \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_LNACTL2_EXT_BIAS_M \
                                0x00000010
#define ADI_0_RF_LNACTL2_EXT_BIAS_S 4
#define ADI_0_RF_LNACTL2_IB_M   0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_LNACTL2_IB_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFAMPCTL0 register.
//
//*****************************************************************************
#define ADI_0_RF_IFAMPCTL0_TRIM_M \
                                0x000000F8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFAMPCTL0_TRIM_S 3
#define ADI_0_RF_IFAMPCTL0_EN_DMY_IFAMP \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFAMPCTL0_EN_DMY_IFAMP_M \
                                0x00000004
#define ADI_0_RF_IFAMPCTL0_EN_DMY_IFAMP_S 2
#define ADI_0_RF_IFAMPCTL0_EN_Q 0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFAMPCTL0_EN_Q_M \
                                0x00000002
#define ADI_0_RF_IFAMPCTL0_EN_Q_S 1
#define ADI_0_RF_IFAMPCTL0_EN_Q_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFAMPCTL0_EN_Q_EN \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFAMPCTL0_EN_I 0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFAMPCTL0_EN_I_M \
                                0x00000001
#define ADI_0_RF_IFAMPCTL0_EN_I_S 0
#define ADI_0_RF_IFAMPCTL0_EN_I_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFAMPCTL0_EN_I_EN \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFAMPCTL1 register.
//
//*****************************************************************************
#define ADI_0_RF_IFAMPCTL1_GAIN_M \
                                0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFAMPCTL1_GAIN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFAMPCTL2 register.
//
//*****************************************************************************
#define ADI_0_RF_IFAMPCTL2_ATTN_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFAMPCTL2_ATTN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_PACTL0 register.
//
//*****************************************************************************
#define ADI_0_RF_PACTL0_TRIM_M  0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_PACTL0_TRIM_S  4
#define ADI_0_RF_PACTL0_LDO_TEST_EN \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_PACTL0_LDO_TEST_EN_M \
                                0x00000008
#define ADI_0_RF_PACTL0_LDO_TEST_EN_S 3
#define ADI_0_RF_PACTL0_PEAKDET_EN \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_PACTL0_PEAKDET_EN_M \
                                0x00000004
#define ADI_0_RF_PACTL0_PEAKDET_EN_S 2
#define ADI_0_RF_PACTL0_PEAKDET_EN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_PACTL0_PEAKDET_EN_EN \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_PACTL0_EN_DMY  0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_PACTL0_EN_DMY_M \
                                0x00000002
#define ADI_0_RF_PACTL0_EN_DMY_S 1
#define ADI_0_RF_PACTL0_EN      0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_PACTL0_EN_M    0x00000001
#define ADI_0_RF_PACTL0_EN_S    0
#define ADI_0_RF_PACTL0_EN_DIS  0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_PACTL0_EN_EN   0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_PACTL1 register.
//
//*****************************************************************************
#define ADI_0_RF_PACTL1_GAIN_M  0x000000C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_PACTL1_GAIN_S  6
#define ADI_0_RF_PACTL1_IB_M    0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_PACTL1_IB_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_PACTL2 register.
//
//*****************************************************************************
#define ADI_0_RF_PACTL2_RXTX_M  0x000000E0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_PACTL2_RXTX_S  5
#define ADI_0_RF_PACTL2_CM_M    0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_PACTL2_CM_S    3
#define ADI_0_RF_PACTL2_AD_M    0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_PACTL2_AD_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_RFLDO0 register.
//
//*****************************************************************************
#define ADI_0_RF_RFLDO0_ATEST_I_EN \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_RFLDO0_ATEST_I_EN_M \
                                0x00000020
#define ADI_0_RF_RFLDO0_ATEST_I_EN_S 5
#define ADI_0_RF_RFLDO0_ATEST_V_EN \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_RFLDO0_ATEST_V_EN_M \
                                0x00000010
#define ADI_0_RF_RFLDO0_ATEST_V_EN_S 4
#define ADI_0_RF_RFLDO0_BYPASS_REG_EN \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_RFLDO0_BYPASS_REG_EN_M \
                                0x00000008
#define ADI_0_RF_RFLDO0_BYPASS_REG_EN_S 3
#define ADI_0_RF_RFLDO0_RDY_EN  0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_RFLDO0_RDY_EN_M \
                                0x00000004
#define ADI_0_RF_RFLDO0_RDY_EN_S 2
#define ADI_0_RF_RFLDO0_RDY_EN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_RFLDO0_RDY_EN_EN \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_RFLDO0_RFLDO_EN_BIAS_ONLY \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_RFLDO0_RFLDO_EN_BIAS_ONLY_M \
                                0x00000002
#define ADI_0_RF_RFLDO0_RFLDO_EN_BIAS_ONLY_S 1
#define ADI_0_RF_RFLDO0_RFLDO_EN_BIAS_ONLY_EN \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_RFLDO0_RFLDO_EN_BIAS_ONLY_DIS \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_RFLDO0_EN      0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_RFLDO0_EN_M    0x00000001
#define ADI_0_RF_RFLDO0_EN_S    0
#define ADI_0_RF_RFLDO0_EN_DIS  0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_RFLDO0_EN_EN   0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_RFLDO1 register.
//
//*****************************************************************************
#define ADI_0_RF_RFLDO1_TRIM_OUT_M \
                                0x0000007F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_RFLDO1_TRIM_OUT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_RFLDO2 register.
//
//*****************************************************************************
#define ADI_0_RF_RFLDO2_COMP_RES_M \
                                0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_RFLDO2_COMP_RES_S 3
#define ADI_0_RF_RFLDO2_COMP_CAP_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_RFLDO2_COMP_CAP_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFADCCTL0 register.
//
//*****************************************************************************
#define ADI_0_RF_IFADCCTL0_INT2ADJ_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCCTL0_INT2ADJ_S 4
#define ADI_0_RF_IFADCCTL0_AAFCAP_M \
                                0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCCTL0_AAFCAP_S 2
#define ADI_0_RF_IFADCCTL0_ENABLE_OVERRIDE \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCCTL0_ENABLE_OVERRIDE_M \
                                0x00000002
#define ADI_0_RF_IFADCCTL0_ENABLE_OVERRIDE_S 1
#define ADI_0_RF_IFADCCTL0_ENABLE_OVERRIDE_EN \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCCTL0_ENABLE_OVERRIDE_DIS \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFADCLFCFG0 register.
//
//*****************************************************************************
#define ADI_0_RF_IFADCLFCFG0_FF1ADJ_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCLFCFG0_FF1ADJ_S 4
#define ADI_0_RF_IFADCLFCFG0_INT3ADJ_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCLFCFG0_INT3ADJ_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFADCLFCFG1 register.
//
//*****************************************************************************
#define ADI_0_RF_IFADCLFCFG1_FF3ADJ_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCLFCFG1_FF3ADJ_S 4
#define ADI_0_RF_IFADCLFCFG1_FF2ADJ_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCLFCFG1_FF2ADJ_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFADCDAC register.
//
//*****************************************************************************
#define ADI_0_RF_IFADCDAC_MODE  0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCDAC_MODE_M \
                                0x00000080
#define ADI_0_RF_IFADCDAC_MODE_S 7
#define ADI_0_RF_IFADCDAC_MODE_NRTZ \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCDAC_MODE_RTZ \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCDAC_TRIM_M \
                                0x0000007E  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCDAC_TRIM_S 1
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFADCQUANT0 register.
//
//*****************************************************************************
#define ADI_0_RF_IFADCQUANT0_DBG_CAL_MODE_Q_M \
                                0x000000C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCQUANT0_DBG_CAL_MODE_Q_S 6
#define ADI_0_RF_IFADCQUANT0_DBG_CAL_MODE_Q_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCQUANT0_DBG_CAL_MODE_Q_EN \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCQUANT0_DBG_CAL_MODE_I_M \
                                0x00000030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCQUANT0_DBG_CAL_MODE_I_S 4
#define ADI_0_RF_IFADCQUANT0_DBG_CAL_MODE_I_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCQUANT0_DBG_CAL_MODE_I_EN \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCQUANT0_AUTOCAL_EN \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCQUANT0_AUTOCAL_EN_M \
                                0x00000008
#define ADI_0_RF_IFADCQUANT0_AUTOCAL_EN_S 3
#define ADI_0_RF_IFADCQUANT0_TH_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCQUANT0_TH_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFADCCTL1 register.
//
//*****************************************************************************
#define ADI_0_RF_IFADCCTL1_DITHERTRIM_M \
                                0x000000E0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCCTL1_DITHERTRIM_S 5
#define ADI_0_RF_IFADCCTL1_ADCIEN \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCCTL1_ADCIEN_M \
                                0x00000010
#define ADI_0_RF_IFADCCTL1_ADCIEN_S 4
#define ADI_0_RF_IFADCCTL1_ADCIEN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCCTL1_ADCIEN_EN \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCCTL1_ADCQEN \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCCTL1_ADCQEN_M \
                                0x00000008
#define ADI_0_RF_IFADCCTL1_ADCQEN_S 3
#define ADI_0_RF_IFADCCTL1_ADCQEN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCCTL1_ADCQEN_EN \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCCTL1_DITHEREN_M \
                                0x00000006  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCCTL1_DITHEREN_S 1
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFADCCTL2 register.
//
//*****************************************************************************
#define ADI_0_RF_IFADCCTL2_RESETN \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCCTL2_RESETN_M \
                                0x00000080
#define ADI_0_RF_IFADCCTL2_RESETN_S 7
#define ADI_0_RF_IFADCCTL2_CLKGENEN \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCCTL2_CLKGENEN_M \
                                0x00000040
#define ADI_0_RF_IFADCCTL2_CLKGENEN_S 6
#define ADI_0_RF_IFADCCTL2_CLKGENEN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCCTL2_CLKGENEN_EN \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCCTL2_ADCDIGCLKEN \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCCTL2_ADCDIGCLKEN_M \
                                0x00000020
#define ADI_0_RF_IFADCCTL2_ADCDIGCLKEN_S 5
#define ADI_0_RF_IFADCCTL2_ADCDIGCLKEN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCCTL2_ADCDIGCLKEN_EN \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCCTL2_ADCLFSROUTEN \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCCTL2_ADCLFSROUTEN_M \
                                0x00000010
#define ADI_0_RF_IFADCCTL2_ADCLFSROUTEN_S 4
#define ADI_0_RF_IFADCCTL2_INVCLKOUT \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCCTL2_INVCLKOUT_M \
                                0x00000002
#define ADI_0_RF_IFADCCTL2_INVCLKOUT_S 1
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFADCTEST register.
//
//*****************************************************************************
#define ADI_0_RF_IFADCTEST_QCALDBIQSEL \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCTEST_QCALDBIQSEL_M \
                                0x00000040
#define ADI_0_RF_IFADCTEST_QCALDBIQSEL_S 6
#define ADI_0_RF_IFADCTEST_QCALDBIQSEL_Q \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_QCALDBIQSEL_I \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_QCALDBCSEL \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCTEST_QCALDBCSEL_M \
                                0x00000020
#define ADI_0_RF_IFADCTEST_QCALDBCSEL_S 5
#define ADI_0_RF_IFADCTEST_QCALDBCSEL_COMP0 \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_QCALDBCSEL_COMP1 \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_M \
                                0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFADCTEST_TESTSEL_S 0
#define ADI_0_RF_IFADCTEST_TESTSEL_NONE \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_DVN2ATP1 \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_DVP2ATP1 \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_QVN2ATP1 \
                                0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_QVP2ATP1 \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_IV0P5UD2ATN1 \
                                0x00000005  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_IV4UQT2ATN1 \
                                0x00000006  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_I2UGMBIAST2ATN1 \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_SPARE8 \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_GMVN2ATP2 \
                                0x00000009  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_GMVNC2ATP2 \
                                0x0000000A  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_GMVPC2ATP2 \
                                0x0000000B  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_GMVP2ATP2 \
                                0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_SPARE13 \
                                0x0000000D  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_CMCFFQ2ATP2 \
                                0x0000000E  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_CMCI3Q2ATP2 \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_CMCI2Q2ATP2 \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_VOPQ12ATN2_VONQ12ATP2 \
                                0x00000011  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_DTQ2ATN1 \
                                0x00000012  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_DACQ2ATN1 \
                                0x00000013  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_QVTHQ2ATP1 \
                                0x00000014  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_QVFFQ2ATP1 \
                                0x00000015  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_CMCFFI2ATP2 \
                                0x00000016  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_CMCI3I2ATP2 \
                                0x00000017  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_CMCI2I2ATP2 \
                                0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_VOPI12ATN2_VONI12ATP2 \
                                0x00000019  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_DTI2ATN1 \
                                0x0000001A  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_DACI2ATN1 \
                                0x0000001B  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_QVTHI2ATP1 \
                                0x0000001C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_QVFFI2ATP1 \
                                0x0000001D  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_SPARE30 \
                                0x0000001E  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFADCTEST_TESTSEL_SPARE31 \
                                0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFALDO1 register.
//
//*****************************************************************************
#define ADI_0_RF_IFALDO1_ERR_AMP_ZERO_EN \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFALDO1_ERR_AMP_ZERO_EN_M \
                                0x00000010
#define ADI_0_RF_IFALDO1_ERR_AMP_ZERO_EN_S 4
#define ADI_0_RF_IFALDO1_ERR_AMP_ZERO_EN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFALDO1_ERR_AMP_ZERO_EN_EN \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFALDO1_BYPASS_REG_EN \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFALDO1_BYPASS_REG_EN_M \
                                0x00000008
#define ADI_0_RF_IFALDO1_BYPASS_REG_EN_S 3
#define ADI_0_RF_IFALDO1_RDY_EN 0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFALDO1_RDY_EN_M \
                                0x00000004
#define ADI_0_RF_IFALDO1_RDY_EN_S 2
#define ADI_0_RF_IFALDO1_RDY_EN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFALDO1_RDY_EN_EN \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFALDO1_IFANALDO_EN_BIAS_ONLY \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFALDO1_IFANALDO_EN_BIAS_ONLY_M \
                                0x00000002
#define ADI_0_RF_IFALDO1_IFANALDO_EN_BIAS_ONLY_S 1
#define ADI_0_RF_IFALDO1_IFANALDO_EN_BIAS_ONLY_EN \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFALDO1_IFANALDO_EN_BIAS_ONLY_DIS \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFALDO1_EN     0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFALDO1_EN_M   0x00000001
#define ADI_0_RF_IFALDO1_EN_S   0
#define ADI_0_RF_IFALDO1_EN_DIS 0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFALDO1_EN_EN  0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFALDO2 register.
//
//*****************************************************************************
#define ADI_0_RF_IFALDO2_COMP_CAP_M \
                                0x000000E0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFALDO2_COMP_CAP_S 5
#define ADI_0_RF_IFALDO2_TRIM_OUT_M \
                                0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFALDO2_TRIM_OUT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFALDO3 register.
//
//*****************************************************************************
#define ADI_0_RF_IFALDO3_COMP_RES_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFALDO3_COMP_RES_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFDLDO1 register.
//
//*****************************************************************************
#define ADI_0_RF_IFDLDO1_BYPASS_REG_EN \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFDLDO1_BYPASS_REG_EN_M \
                                0x00000008
#define ADI_0_RF_IFDLDO1_BYPASS_REG_EN_S 3
#define ADI_0_RF_IFDLDO1_RDY_EN 0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFDLDO1_RDY_EN_M \
                                0x00000004
#define ADI_0_RF_IFDLDO1_RDY_EN_S 2
#define ADI_0_RF_IFDLDO1_RDY_EN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFDLDO1_RDY_EN_EN \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFDLDO1_IFDIGLDO_EN_BIAS_ONLY \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFDLDO1_IFDIGLDO_EN_BIAS_ONLY_M \
                                0x00000002
#define ADI_0_RF_IFDLDO1_IFDIGLDO_EN_BIAS_ONLY_S 1
#define ADI_0_RF_IFDLDO1_IFDIGLDO_EN_BIAS_ONLY_EN \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFDLDO1_IFDIGLDO_EN_BIAS_ONLY_DIS \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFDLDO1_EN     0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFDLDO1_EN_M   0x00000001
#define ADI_0_RF_IFDLDO1_EN_S   0
#define ADI_0_RF_IFDLDO1_EN_DIS 0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFDLDO1_EN_EN  0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFDLDO2 register.
//
//*****************************************************************************
#define ADI_0_RF_IFDLDO2_COMP_CAP_M \
                                0x000000E0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFDLDO2_COMP_CAP_S 5
#define ADI_0_RF_IFDLDO2_TRIM_OUT_M \
                                0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFDLDO2_TRIM_OUT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFDLDO3 register.
//
//*****************************************************************************
#define ADI_0_RF_IFDLDO3_ATEST_V_EN \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFDLDO3_ATEST_V_EN_M \
                                0x00000010
#define ADI_0_RF_IFDLDO3_ATEST_V_EN_S 4
#define ADI_0_RF_IFDLDO3_ATEST_V_EN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFDLDO3_ATEST_V_EN_EN \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFDLDO3_ATEST_I_EN \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFDLDO3_ATEST_I_EN_M \
                                0x00000008
#define ADI_0_RF_IFDLDO3_ATEST_I_EN_S 3
#define ADI_0_RF_IFDLDO3_ATEST_I_EN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFDLDO3_ATEST_I_EN_EN \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFDLDO3_COMP_RES_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFDLDO3_COMP_RES_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_IFAMPCTL3 register.
//
//*****************************************************************************
#define ADI_0_RF_IFAMPCTL3_AAF_CAP_EN_M \
                                0x00000070  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_IFAMPCTL3_AAF_CAP_EN_S 4
#define ADI_0_RF_IFAMPCTL3_IB_M 0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_IFAMPCTL3_IB_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_0_RF_O_STAT register.
//
//*****************************************************************************
#define ADI_0_RF_STAT_IFADC_CALVAL_OUT_M \
                                0x000000F8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_STAT_IFADC_CALVAL_OUT_S 3
#define ADI_0_RF_STAT_IFADC_CALDONE \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_STAT_IFADC_CALDONE_M \
                                0x00000004
#define ADI_0_RF_STAT_IFADC_CALDONE_S 2
#define ADI_0_RF_STAT_IFLDOS_RDY \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_0_RF_STAT_IFLDOS_RDY_M \
                                0x00000002
#define ADI_0_RF_STAT_IFLDOS_RDY_S 1
#define ADI_0_RF_STAT_RF_LDO    0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_0_RF_STAT_RF_LDO_M  0x00000001
#define ADI_0_RF_STAT_RF_LDO_S  0


#endif // __HW_ADI_0_RF_H__

