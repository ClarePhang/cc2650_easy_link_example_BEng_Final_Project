
/******************************************************************************
*  Filename:       hw_osc_dig.h
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
#ifndef __HW_OSC_DIG_H__
#define __HW_OSC_DIG_H__

//*****************************************************************************
//
// The following are defines for the OSC_DIG register offsets.
//
//*****************************************************************************
#define OSC_DIG_O_CTL0          0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_O_RADCEXTCFG    0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_O_AMPCOMPCTL    0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_O_AMPCOMPTH1    0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_O_AMPCOMPTH2    0x00000014  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_O_ANABYPASSVAL1 0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_O_ANABYPASSVAL2 0x0000001C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_O_ADCDOUBLERNANOAMPCTL \
                                0x00000024  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_O_XOSCHFCTL     0x00000028  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_O_LFOSCCTL      0x0000002C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_O_RCOSCHFCTL    0x00000030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_O_STAT0         0x00000034  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_O_STAT1         0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_O_STAT2         0x0000003C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 


//*****************************************************************************
//
// The following are defines for the bit fields in the OSC_DIG_O_CTL0 register.
//
//*****************************************************************************
#define OSC_DIG_CTL0_XTAL_IS_24M \
                                0x80000000  // Set based on the connected High 
                                            // Frequency XTAL. 

#define OSC_DIG_CTL0_XTAL_IS_24M_M \
                                0x80000000
#define OSC_DIG_CTL0_XTAL_IS_24M_S 31
#define OSC_DIG_CTL0_XTAL_IS_24M_48M \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_CTL0_XTAL_IS_24M_24M \
                                0x80000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_CTL0_DOUBLER_BYPASS_CTL \
                                0x40000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_DOUBLER_BYPASS_CTL_M \
                                0x40000000
#define OSC_DIG_CTL0_DOUBLER_BYPASS_CTL_S 30
#define OSC_DIG_CTL0_BYPASS_XOSC_LF_CLK_QUAL \
                                0x20000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_BYPASS_XOSC_LF_CLK_QUAL_M \
                                0x20000000
#define OSC_DIG_CTL0_BYPASS_XOSC_LF_CLK_QUAL_S 29
#define OSC_DIG_CTL0_BYPASS_RCOSC_LF_CLK_QUAL \
                                0x10000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_BYPASS_RCOSC_LF_CLK_QUAL_M \
                                0x10000000
#define OSC_DIG_CTL0_BYPASS_RCOSC_LF_CLK_QUAL_S 28
#define OSC_DIG_CTL0_ACT_PWR_SAVING_EN \
                                0x00800000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_ACT_PWR_SAVING_EN_M \
                                0x00800000
#define OSC_DIG_CTL0_ACT_PWR_SAVING_EN_S 23
#define OSC_DIG_CTL0_FORCE_KICKSTART_EN \
                                0x00400000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_FORCE_KICKSTART_EN_M \
                                0x00400000
#define OSC_DIG_CTL0_FORCE_KICKSTART_EN_S 22
#define OSC_DIG_CTL0_BGAP_NEEDED_SW_CTL \
                                0x00200000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_BGAP_NEEDED_SW_CTL_M \
                                0x00200000
#define OSC_DIG_CTL0_BGAP_NEEDED_SW_CTL_S 21
#define OSC_DIG_CTL0_BGAP_NEEDED_SW_EN \
                                0x00100000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_BGAP_NEEDED_SW_EN_M \
                                0x00100000
#define OSC_DIG_CTL0_BGAP_NEEDED_SW_EN_S 20
#define OSC_DIG_CTL0_GBIAS_NEEDED_SW_CTL \
                                0x00080000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_GBIAS_NEEDED_SW_CTL_M \
                                0x00080000
#define OSC_DIG_CTL0_GBIAS_NEEDED_SW_CTL_S 19
#define OSC_DIG_CTL0_GBIAS_NEEDED_SW_EN \
                                0x00040000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_GBIAS_NEEDED_SW_EN_M \
                                0x00040000
#define OSC_DIG_CTL0_GBIAS_NEEDED_SW_EN_S 18
#define OSC_DIG_CTL0_AMPCOMP_REQ_IGNORES_GBIAS \
                                0x00020000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_AMPCOMP_REQ_IGNORES_GBIAS_M \
                                0x00020000
#define OSC_DIG_CTL0_AMPCOMP_REQ_IGNORES_GBIAS_S 17
#define OSC_DIG_CTL0_ALLOW_SCLK_HF_SWITCHING \
                                0x00010000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_ALLOW_SCLK_HF_SWITCHING_M \
                                0x00010000
#define OSC_DIG_CTL0_ALLOW_SCLK_HF_SWITCHING_S 16
#define OSC_DIG_CTL0_PD_PWR_SAVING_EN \
                                0x00008000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_PD_PWR_SAVING_EN_M \
                                0x00008000
#define OSC_DIG_CTL0_PD_PWR_SAVING_EN_S 15
#define OSC_DIG_CTL0_BAW_MODE_EN \
                                0x00004000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_BAW_MODE_EN_M \
                                0x00004000
#define OSC_DIG_CTL0_BAW_MODE_EN_S 14
#define OSC_DIG_CTL0_OSCDIG_BYP_CLK_SRC_IS_INT \
                                0x00002000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_OSCDIG_BYP_CLK_SRC_IS_INT_M \
                                0x00002000
#define OSC_DIG_CTL0_OSCDIG_BYP_CLK_SRC_IS_INT_S 13
#define OSC_DIG_CTL0_RCOSC_LF_TRIMMED \
                                0x00001000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_RCOSC_LF_TRIMMED_M \
                                0x00001000
#define OSC_DIG_CTL0_RCOSC_LF_TRIMMED_S 12
#define OSC_DIG_CTL0_XOSC_HF_MODE \
                                0x00000800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_XOSC_HF_MODE_M \
                                0x00000800
#define OSC_DIG_CTL0_XOSC_HF_MODE_S 11
#define OSC_DIG_CTL0_XOSC_LF_DIG_BYPASS \
                                0x00000400  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_XOSC_LF_DIG_BYPASS_M \
                                0x00000400
#define OSC_DIG_CTL0_XOSC_LF_DIG_BYPASS_S 10
#define OSC_DIG_CTL0_CLK_LOSS_EN \
                                0x00000200  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_CLK_LOSS_EN_M \
                                0x00000200
#define OSC_DIG_CTL0_CLK_LOSS_EN_S 9
#define OSC_DIG_CTL0_ACLK_TDC_SRC_SEL_M \
                                0x00000180  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_ACLK_TDC_SRC_SEL_S 7
#define OSC_DIG_CTL0_ACLK_REF_SRC_SEL_M \
                                0x00000060  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_ACLK_REF_SRC_SEL_S 5
#define OSC_DIG_CTL0_SCLK_LF_SRC_SEL_M \
                                0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_SCLK_LF_SRC_SEL_S 2
#define OSC_DIG_CTL0_SCLK_LF_SRC_SEL_RCOSCHFDLF \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_CTL0_SCLK_LF_SRC_SEL_XOSCHFDLF \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_CTL0_SCLK_LF_SRC_SEL_RCOSCLF \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_CTL0_SCLK_LF_SRC_SEL_XOSCLF \
                                0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_CTL0_SCLK_MF_SRC_SEL \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_SCLK_MF_SRC_SEL_M \
                                0x00000002
#define OSC_DIG_CTL0_SCLK_MF_SRC_SEL_S 1
#define OSC_DIG_CTL0_SCLK_MF_SRC_SEL_RCOSCHFDMF \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_CTL0_SCLK_MF_SRC_SEL_XCOSCHFDMF \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_CTL0_SCLK_HF_SRC_SEL \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_CTL0_SCLK_HF_SRC_SEL_M \
                                0x00000001
#define OSC_DIG_CTL0_SCLK_HF_SRC_SEL_S 0
#define OSC_DIG_CTL0_SCLK_HF_SRC_SEL_RCOSC \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_CTL0_SCLK_HF_SRC_SEL_XOSC \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// OSC_DIG_O_RADCEXTCFG register.
//
//*****************************************************************************
#define OSC_DIG_RADCEXTCFG_HPM_IBIAS_WAIT_CNT_M \
                                0xFFC00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RADCEXTCFG_HPM_IBIAS_WAIT_CNT_S 22
#define OSC_DIG_RADCEXTCFG_LPM_IBIAS_WAIT_CNT_M \
                                0x003F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RADCEXTCFG_LPM_IBIAS_WAIT_CNT_S 16
#define OSC_DIG_RADCEXTCFG_IDAC_STEP_M \
                                0x0000F000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RADCEXTCFG_IDAC_STEP_S 12
#define OSC_DIG_RADCEXTCFG_RADC_DAC_TH_M \
                                0x00000FC0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RADCEXTCFG_RADC_DAC_TH_S 6
#define OSC_DIG_RADCEXTCFG_RADC_MODE_IS_SAR \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RADCEXTCFG_RADC_MODE_IS_SAR_M \
                                0x00000020
#define OSC_DIG_RADCEXTCFG_RADC_MODE_IS_SAR_S 5
#define OSC_DIG_RADCEXTCFG_RADC_START_CONV \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RADCEXTCFG_RADC_START_CONV_M \
                                0x00000010
#define OSC_DIG_RADCEXTCFG_RADC_START_CONV_S 4
#define OSC_DIG_RADCEXTCFG_DDI_RADC_CLK \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RADCEXTCFG_DDI_RADC_CLK_M \
                                0x00000008
#define OSC_DIG_RADCEXTCFG_DDI_RADC_CLK_S 3
#define OSC_DIG_RADCEXTCFG_RADC_USE_EXTERNAL_CLK \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RADCEXTCFG_RADC_USE_EXTERNAL_CLK_M \
                                0x00000004
#define OSC_DIG_RADCEXTCFG_RADC_USE_EXTERNAL_CLK_S 2
#define OSC_DIG_RADCEXTCFG_DDI_RADC_CLRZ \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RADCEXTCFG_DDI_RADC_CLRZ_M \
                                0x00000002
#define OSC_DIG_RADCEXTCFG_DDI_RADC_CLRZ_S 1
#define OSC_DIG_RADCEXTCFG_RADC_EXTERNAL_USE_EN \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RADCEXTCFG_RADC_EXTERNAL_USE_EN_M \
                                0x00000001
#define OSC_DIG_RADCEXTCFG_RADC_EXTERNAL_USE_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// OSC_DIG_O_AMPCOMPCTL register.
//
//*****************************************************************************
#define OSC_DIG_AMPCOMPCTL_AMPCOMP_REQ_MODE \
                                0x40000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPCTL_AMPCOMP_REQ_MODE_M \
                                0x40000000
#define OSC_DIG_AMPCOMPCTL_AMPCOMP_REQ_MODE_S 30
#define OSC_DIG_AMPCOMPCTL_AMPCOMP_FSM_UPDATE_RATE_M \
                                0x30000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPCTL_AMPCOMP_FSM_UPDATE_RATE_S 28
#define OSC_DIG_AMPCOMPCTL_AMPCOMP_SW_CTRL \
                                0x08000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPCTL_AMPCOMP_SW_CTRL_M \
                                0x08000000
#define OSC_DIG_AMPCOMPCTL_AMPCOMP_SW_CTRL_S 27
#define OSC_DIG_AMPCOMPCTL_AMPCOMP_SW_EN \
                                0x04000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPCTL_AMPCOMP_SW_EN_M \
                                0x04000000
#define OSC_DIG_AMPCOMPCTL_AMPCOMP_SW_EN_S 26
#define OSC_DIG_AMPCOMPCTL_XOSC_HF_HP_BUF_SW_CTRL \
                                0x02000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPCTL_XOSC_HF_HP_BUF_SW_CTRL_M \
                                0x02000000
#define OSC_DIG_AMPCOMPCTL_XOSC_HF_HP_BUF_SW_CTRL_S 25
#define OSC_DIG_AMPCOMPCTL_XOSC_HF_HP_BUF_SW_EN \
                                0x01000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPCTL_XOSC_HF_HP_BUF_SW_EN_M \
                                0x01000000
#define OSC_DIG_AMPCOMPCTL_XOSC_HF_HP_BUF_SW_EN_S 24
#define OSC_DIG_AMPCOMPCTL_IBIAS_OFFSET_M \
                                0x00F00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPCTL_IBIAS_OFFSET_S 20
#define OSC_DIG_AMPCOMPCTL_IBIAS_INIT_M \
                                0x000F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPCTL_IBIAS_INIT_S 16
#define OSC_DIG_AMPCOMPCTL_LPM_IBIAS_WAIT_CNT_FINAL_M \
                                0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPCTL_LPM_IBIAS_WAIT_CNT_FINAL_S 8
#define OSC_DIG_AMPCOMPCTL_CAP_STEP_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPCTL_CAP_STEP_S 4
#define OSC_DIG_AMPCOMPCTL_IBIASCAP_HPTOLP_OL_CNT_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPCTL_IBIASCAP_HPTOLP_OL_CNT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// OSC_DIG_O_AMPCOMPTH1 register.
//
//*****************************************************************************
#define OSC_DIG_AMPCOMPTH1_HPMRAMP2_TH_M \
                                0xFC000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPTH1_HPMRAMP2_TH_S 26
#define OSC_DIG_AMPCOMPTH1_HPMRAMP3_LTH_M \
                                0x00FC0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPTH1_HPMRAMP3_LTH_S 18
#define OSC_DIG_AMPCOMPTH1_HPMRAMP3_HTH_M \
                                0x0000FC00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPTH1_HPMRAMP3_HTH_S 10
#define OSC_DIG_AMPCOMPTH1_IBIASCAP_LPTOHP_OL_CNT_M \
                                0x000003C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPTH1_IBIASCAP_LPTOHP_OL_CNT_S 6
#define OSC_DIG_AMPCOMPTH1_HPMRAMP1_TH_M \
                                0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPTH1_HPMRAMP1_TH_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// OSC_DIG_O_AMPCOMPTH2 register.
//
//*****************************************************************************
#define OSC_DIG_AMPCOMPTH2_LPMUPDATE_LTH_M \
                                0xFC000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPTH2_LPMUPDATE_LTH_S 26
#define OSC_DIG_AMPCOMPTH2_LPMUPDATE_HTH_M \
                                0x00FC0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPTH2_LPMUPDATE_HTH_S 18
#define OSC_DIG_AMPCOMPTH2_ADC_COMP_AMPTH_LPM_M \
                                0x0000FC00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPTH2_ADC_COMP_AMPTH_LPM_S 10
#define OSC_DIG_AMPCOMPTH2_ADC_COMP_AMPTH_HPM_M \
                                0x000000FC  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_AMPCOMPTH2_ADC_COMP_AMPTH_HPM_S 2
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// OSC_DIG_O_ANABYPASSVAL1 register.
//
//*****************************************************************************
#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_LP_BUF_EN \
                                0x80000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_LP_BUF_EN_M \
                                0x80000000
#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_LP_BUF_EN_S 31
#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_HP_BUF_EN \
                                0x40000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_HP_BUF_EN_M \
                                0x40000000
#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_HP_BUF_EN_S 30
#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_PEAK_DET_EN \
                                0x20000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_PEAK_DET_EN_M \
                                0x20000000
#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_PEAK_DET_EN_S 29
#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_MUX_SEL \
                                0x10000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_MUX_SEL_M \
                                0x10000000
#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_MUX_SEL_S 28
#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_EN \
                                0x08000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_EN_M \
                                0x08000000
#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_EN_S 27
#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_IDAC_M \
                                0x07F00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_IDAC_S 20
#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_ROW_Q12_M \
                                0x000F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_ROW_Q12_S 16
#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_COLUMN_Q12_M \
                                0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL1_XOSC_HF_COLUMN_Q12_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// OSC_DIG_O_ANABYPASSVAL2 register.
//
//*****************************************************************************
#define OSC_DIG_ANABYPASSVAL2_RCOSC_LF_EN \
                                0x80000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL2_RCOSC_LF_EN_M \
                                0x80000000
#define OSC_DIG_ANABYPASSVAL2_RCOSC_LF_EN_S 31
#define OSC_DIG_ANABYPASSVAL2_XOSC_LF_EN \
                                0x40000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL2_XOSC_LF_EN_M \
                                0x40000000
#define OSC_DIG_ANABYPASSVAL2_XOSC_LF_EN_S 30
#define OSC_DIG_ANABYPASSVAL2_DOUBLER_EN \
                                0x20000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL2_DOUBLER_EN_M \
                                0x20000000
#define OSC_DIG_ANABYPASSVAL2_DOUBLER_EN_S 29
#define OSC_DIG_ANABYPASSVAL2_GBIAS_NEEDED \
                                0x10000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL2_GBIAS_NEEDED_M \
                                0x10000000
#define OSC_DIG_ANABYPASSVAL2_GBIAS_NEEDED_S 28
#define OSC_DIG_ANABYPASSVAL2_BGAP_NEEDED \
                                0x08000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL2_BGAP_NEEDED_M \
                                0x08000000
#define OSC_DIG_ANABYPASSVAL2_BGAP_NEEDED_S 27
#define OSC_DIG_ANABYPASSVAL2_ADC_ANA_EN \
                                0x04000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL2_ADC_ANA_EN_M \
                                0x04000000
#define OSC_DIG_ANABYPASSVAL2_ADC_ANA_EN_S 26
#define OSC_DIG_ANABYPASSVAL2_XOSC_HF_IBIASTHERM_M \
                                0x00003FFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ANABYPASSVAL2_XOSC_HF_IBIASTHERM_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// OSC_DIG_O_ADCDOUBLERNANOAMPCTL register.
//
//*****************************************************************************
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_NANOAMP_TESTHIGH_I_EN \
                                0x80000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_NANOAMP_TESTHIGH_I_EN_M \
                                0x80000000
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_NANOAMP_TESTHIGH_I_EN_S 31
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_NANOAMP_RES_TRIM_M \
                                0x7E000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_NANOAMP_RES_TRIM_S 25
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_NANOAMP_BIAS_ENABLE \
                                0x01000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_NANOAMP_BIAS_ENABLE_M \
                                0x01000000
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_NANOAMP_BIAS_ENABLE_S 24
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_SPARE23 \
                                0x00800000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_SPARE23_M \
                                0x00800000
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_SPARE23_S 23
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_DBLR_ATEST_SELECT \
                                0x00400000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_DBLR_ATEST_SELECT_M \
                                0x00400000
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_DBLR_ATEST_SELECT_S 22
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_DBLR_ATEST_ENABLE \
                                0x00200000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_DBLR_ATEST_ENABLE_M \
                                0x00200000
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_DBLR_ATEST_ENABLE_S 21
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_DBLR_LOOP_FILTER_CAP_M \
                                0x00180000  // Loop filter cap 00: Nominal 01: 
                                            // Decrement 17%; 10: Increment 
                                            // 34%; 11: Increment 17% 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_DBLR_LOOP_FILTER_CAP_S 19
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_DBLR_LOOP_FILTER_RESET_VOLTAGE_M \
                                0x00060000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_DBLR_LOOP_FILTER_RESET_VOLTAGE_S 17
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_DOUBLER_EN_BIAS_ONLY \
                                0x00010000  // Enable and consume bias 
                                            // currents but does not turn the 
                                            // doubler on. 0: Disabled 1: 
                                            // Enabled Used if there is 
                                            // sensitivity to kickback on 
                                            // global bias blocks. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_DOUBLER_EN_BIAS_ONLY_M \
                                0x00010000
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_DOUBLER_EN_BIAS_ONLY_S 16
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_IPTAT_IREF_OR \
                                0x00000200  // Override IPTAT and IREF 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_IPTAT_IREF_OR_M \
                                0x00000200
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_IPTAT_IREF_OR_S 9
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_ATEST_SRC_M \
                                0x00000180  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_ATEST_SRC_S 7
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_EN_ATEST \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_EN_ATEST_M \
                                0x00000040
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_EN_ATEST_S 6
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_SH_MODE_EN \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_SH_MODE_EN_M \
                                0x00000020
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_SH_MODE_EN_S 5
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_SH_VBUF_EN \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_SH_VBUF_EN_M \
                                0x00000010
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_SH_VBUF_EN_S 4
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_MUX_SEL_M \
                                0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_MUX_SEL_S 2
#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_IREF_CTRL_M \
                                0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_ADCDOUBLERNANOAMPCTL_ADC_IREF_CTRL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// OSC_DIG_O_XOSCHFCTL register.
//
//*****************************************************************************
#define OSC_DIG_XOSCHFCTL_XOSCHF_HPBUFF_IREF_OVERRIDE \
                                0x00000800  // Enable dummy bias mode. 0: 
                                            // Normal mode, 1: Dummy bias mode 

#define OSC_DIG_XOSCHFCTL_XOSCHF_HPBUFF_IREF_OVERRIDE_M \
                                0x00000800
#define OSC_DIG_XOSCHFCTL_XOSCHF_HPBUFF_IREF_OVERRIDE_S 11
#define OSC_DIG_XOSCHFCTL_XOSCHF_PEAKDET_IPTAT_OVERRIDE \
                                0x00000400  // Enable dummy bias mode. 0: 
                                            // Normal mode, 1: Dummy bias mode 

#define OSC_DIG_XOSCHFCTL_XOSCHF_PEAKDET_IPTAT_OVERRIDE_M \
                                0x00000400
#define OSC_DIG_XOSCHFCTL_XOSCHF_PEAKDET_IPTAT_OVERRIDE_S 10
#define OSC_DIG_XOSCHFCTL_PEAK_DET_ITRIM_M \
                                0x00000300  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_XOSCHFCTL_PEAK_DET_ITRIM_S 8
#define OSC_DIG_XOSCHFCTL_HP_ALT_BIAS \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_XOSCHFCTL_HP_ALT_BIAS_M \
                                0x00000080
#define OSC_DIG_XOSCHFCTL_HP_ALT_BIAS_S 7
#define OSC_DIG_XOSCHFCTL_BYPASS \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_XOSCHFCTL_BYPASS_M \
                                0x00000040
#define OSC_DIG_XOSCHFCTL_BYPASS_S 6
#define OSC_DIG_XOSCHFCTL_TESTMUX_EN \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_XOSCHFCTL_TESTMUX_EN_M \
                                0x00000020
#define OSC_DIG_XOSCHFCTL_TESTMUX_EN_S 5
#define OSC_DIG_XOSCHFCTL_HP_BUF_ITRIM_M \
                                0x0000001C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_XOSCHFCTL_HP_BUF_ITRIM_S 2
#define OSC_DIG_XOSCHFCTL_LP_BUF_ITRIM_M \
                                0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_XOSCHFCTL_LP_BUF_ITRIM_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// OSC_DIG_O_LFOSCCTL register.
//
//*****************************************************************************
#define OSC_DIG_LFOSCCTL_XOSCLF_BUFFER_TRIM \
                                0x04000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_LFOSCCTL_XOSCLF_BUFFER_TRIM_M \
                                0x04000000
#define OSC_DIG_LFOSCCTL_XOSCLF_BUFFER_TRIM_S 26
#define OSC_DIG_LFOSCCTL_XOSCLF_TESTMUX_EN \
                                0x02000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_LFOSCCTL_XOSCLF_TESTMUX_EN_M \
                                0x02000000
#define OSC_DIG_LFOSCCTL_XOSCLF_TESTMUX_EN_S 25
#define OSC_DIG_LFOSCCTL_XOSCLF_AMP_BOOST \
                                0x01000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_LFOSCCTL_XOSCLF_AMP_BOOST_M \
                                0x01000000
#define OSC_DIG_LFOSCCTL_XOSCLF_AMP_BOOST_S 24
#define OSC_DIG_LFOSCCTL_XOSCLF_REGULATOR_TRIM_M \
                                0x00C00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_LFOSCCTL_XOSCLF_REGULATOR_TRIM_S 22
#define OSC_DIG_LFOSCCTL_XOSCLF_CMIRRWR_RATIO_M \
                                0x003C0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_LFOSCCTL_XOSCLF_CMIRRWR_RATIO_S 18
#define OSC_DIG_LFOSCCTL_XOSCLF_ANA_AMP_CTRL \
                                0x00020000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_LFOSCCTL_XOSCLF_ANA_AMP_CTRL_M \
                                0x00020000
#define OSC_DIG_LFOSCCTL_XOSCLF_ANA_AMP_CTRL_S 17
#define OSC_DIG_LFOSCCTL_XOSCLF_RXTX_MODE \
                                0x00010000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_LFOSCCTL_XOSCLF_RXTX_MODE_M \
                                0x00010000
#define OSC_DIG_LFOSCCTL_XOSCLF_RXTX_MODE_S 16
#define OSC_DIG_LFOSCCTL_RCOSCLF_VDD_LOCAL_TRIM \
                                0x00000800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_LFOSCCTL_RCOSCLF_VDD_LOCAL_TRIM_M \
                                0x00000800
#define OSC_DIG_LFOSCCTL_RCOSCLF_VDD_LOCAL_TRIM_S 11
#define OSC_DIG_LFOSCCTL_RCOSCLF_LOCAL_ATEST_EN \
                                0x00000400  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_LFOSCCTL_RCOSCLF_LOCAL_ATEST_EN_M \
                                0x00000400
#define OSC_DIG_LFOSCCTL_RCOSCLF_LOCAL_ATEST_EN_S 10
#define OSC_DIG_LFOSCCTL_RCOSCLF_RTUNE_TRIM_M \
                                0x00000300  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_LFOSCCTL_RCOSCLF_RTUNE_TRIM_S 8
#define OSC_DIG_LFOSCCTL_RCOSCLF_RTUNE_TRIM_7P5MEG \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_LFOSCCTL_RCOSCLF_RTUNE_TRIM_7P0MEG \
                                0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_LFOSCCTL_RCOSCLF_RTUNE_TRIM_6P5MEG \
                                0x00000200  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_LFOSCCTL_RCOSCLF_RTUNE_TRIM_6P0MEG \
                                0x00000300  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_LFOSCCTL_RCOSCLF_CTUNE_TRIM_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_LFOSCCTL_RCOSCLF_CTUNE_TRIM_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// OSC_DIG_O_RCOSCHFCTL register.
//
//*****************************************************************************
#define OSC_DIG_RCOSCHFCTL_RCOSCHF_CTRIM_M \
                                0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RCOSCHFCTL_RCOSCHF_CTRIM_S 8
#define OSC_DIG_RCOSCHFCTL_SPARE6_M \
                                0x000000C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RCOSCHFCTL_SPARE6_S 6
#define OSC_DIG_RCOSCHFCTL_RCOSCHF_ATEST_EN \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RCOSCHFCTL_RCOSCHF_ATEST_EN_M \
                                0x00000020
#define OSC_DIG_RCOSCHFCTL_RCOSCHF_ATEST_EN_S 5
#define OSC_DIG_RCOSCHFCTL_RCOSCHF_BYPASS_GATE \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RCOSCHFCTL_RCOSCHF_BYPASS_GATE_M \
                                0x00000010
#define OSC_DIG_RCOSCHFCTL_RCOSCHF_BYPASS_GATE_S 4
#define OSC_DIG_RCOSCHFCTL_RCOSCHF_ITUNE_TRIM_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_RCOSCHFCTL_RCOSCHF_ITUNE_TRIM_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// OSC_DIG_O_STAT0 register.
//
//*****************************************************************************
#define OSC_DIG_STAT0_SCLK_LF_SRC_M \
                                0x60000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_SCLK_LF_SRC_S 29
#define OSC_DIG_STAT0_SCLK_HF_SRC \
                                0x10000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_SCLK_HF_SRC_M \
                                0x10000000
#define OSC_DIG_STAT0_SCLK_HF_SRC_S 28
#define OSC_DIG_STAT0_BYPASS_OSCDIG \
                                0x08000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_BYPASS_OSCDIG_M \
                                0x08000000
#define OSC_DIG_STAT0_BYPASS_OSCDIG_S 27
#define OSC_DIG_STAT0_BGAP_NEEDED \
                                0x04000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_BGAP_NEEDED_M \
                                0x04000000
#define OSC_DIG_STAT0_BGAP_NEEDED_S 26
#define OSC_DIG_STAT0_BGAP_RDY  0x02000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT0_BGAP_RDY_M \
                                0x02000000
#define OSC_DIG_STAT0_BGAP_RDY_S 25
#define OSC_DIG_STAT0_GBIAS_NEEDED \
                                0x01000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_GBIAS_NEEDED_M \
                                0x01000000
#define OSC_DIG_STAT0_GBIAS_NEEDED_S 24
#define OSC_DIG_STAT0_GBIAS_RDY 0x00800000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT0_GBIAS_RDY_M \
                                0x00800000
#define OSC_DIG_STAT0_GBIAS_RDY_S 23
#define OSC_DIG_STAT0_RCOSC_HF_EN \
                                0x00400000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_RCOSC_HF_EN_M \
                                0x00400000
#define OSC_DIG_STAT0_RCOSC_HF_EN_S 22
#define OSC_DIG_STAT0_RCOSC_LF_EN \
                                0x00200000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_RCOSC_LF_EN_M \
                                0x00200000
#define OSC_DIG_STAT0_RCOSC_LF_EN_S 21
#define OSC_DIG_STAT0_XOSC_LF_EN \
                                0x00100000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_XOSC_LF_EN_M \
                                0x00100000
#define OSC_DIG_STAT0_XOSC_LF_EN_S 20
#define OSC_DIG_STAT0_CLK_DCDC_RDY \
                                0x00080000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_CLK_DCDC_RDY_M \
                                0x00080000
#define OSC_DIG_STAT0_CLK_DCDC_RDY_S 19
#define OSC_DIG_STAT0_CLK_DCDC_RDY_ACK \
                                0x00040000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_CLK_DCDC_RDY_ACK_M \
                                0x00040000
#define OSC_DIG_STAT0_CLK_DCDC_RDY_ACK_S 18
#define OSC_DIG_STAT0_SCLK_HF_LOSS \
                                0x00020000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_SCLK_HF_LOSS_M \
                                0x00020000
#define OSC_DIG_STAT0_SCLK_HF_LOSS_S 17
#define OSC_DIG_STAT0_SCLK_LF_LOSS \
                                0x00010000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_SCLK_LF_LOSS_M \
                                0x00010000
#define OSC_DIG_STAT0_SCLK_LF_LOSS_S 16
#define OSC_DIG_STAT0_XOSC_HF_EN \
                                0x00008000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_XOSC_HF_EN_M \
                                0x00008000
#define OSC_DIG_STAT0_XOSC_HF_EN_S 15
#define OSC_DIG_STAT0_XOSC_HF_PEAK_DET_EN \
                                0x00004000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_XOSC_HF_PEAK_DET_EN_M \
                                0x00004000
#define OSC_DIG_STAT0_XOSC_HF_PEAK_DET_EN_S 14
#define OSC_DIG_STAT0_DOUBLER_EN \
                                0x00002000  // DOUBLER_EN 

#define OSC_DIG_STAT0_DOUBLER_EN_M \
                                0x00002000
#define OSC_DIG_STAT0_DOUBLER_EN_S 13
#define OSC_DIG_STAT0_ADC_EN    0x00001000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT0_ADC_EN_M  0x00001000
#define OSC_DIG_STAT0_ADC_EN_S  12
#define OSC_DIG_STAT0_XOSC_HF_LP_BUF_EN \
                                0x00000800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_XOSC_HF_LP_BUF_EN_M \
                                0x00000800
#define OSC_DIG_STAT0_XOSC_HF_LP_BUF_EN_S 11
#define OSC_DIG_STAT0_XOSC_HF_HP_BUF_EN \
                                0x00000400  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_XOSC_HF_HP_BUF_EN_M \
                                0x00000400
#define OSC_DIG_STAT0_XOSC_HF_HP_BUF_EN_S 10
#define OSC_DIG_STAT0_RADC_DIG_CLRZ \
                                0x00000200  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_RADC_DIG_CLRZ_M \
                                0x00000200
#define OSC_DIG_STAT0_RADC_DIG_CLRZ_S 9
#define OSC_DIG_STAT0_ADC_THMET 0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT0_ADC_THMET_M \
                                0x00000100
#define OSC_DIG_STAT0_ADC_THMET_S 8
#define OSC_DIG_STAT0_ADC_DATA_READY \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_ADC_DATA_READY_M \
                                0x00000080
#define OSC_DIG_STAT0_ADC_DATA_READY_S 7
#define OSC_DIG_STAT0_ADC_DATA_M \
                                0x0000007E  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_ADC_DATA_S 1
#define OSC_DIG_STAT0_PENDINGSCLKHFSWITCHING \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT0_PENDINGSCLKHFSWITCHING_M \
                                0x00000001
#define OSC_DIG_STAT0_PENDINGSCLKHFSWITCHING_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// OSC_DIG_O_STAT1 register.
//
//*****************************************************************************
#define OSC_DIG_STAT1_RAMPSTATE_M \
                                0xF0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_RAMPSTATE_S 28
#define OSC_DIG_STAT1_RAMPSTATE_RESET \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_INITIALIZATION \
                                0x10000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_HPM_RAMP1 \
                                0x20000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_HPM_RAMP2 \
                                0x30000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_HPM_RAMP3 \
                                0x40000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_HPM_UPDATE \
                                0x50000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_IDAC_INCREMENT \
                                0x60000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_IBIAS_CAP_UPDATE \
                                0x70000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_IBIAS_DEC_W_MEASURE \
                                0x80000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_LPM_UPDATE \
                                0x90000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_IBIAS_INC \
                                0xA0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_IDAC_DEC_W_MEASURE \
                                0xB0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_DUMMY_TO_INIT_1 \
                                0xC0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_FAST_START \
                                0xD0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_RAMPSTATE_FAST_START_SETTLE \
                                0xE0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT1_HMP_UPDATE_AMP_M \
                                0x0FC00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_HMP_UPDATE_AMP_S 22
#define OSC_DIG_STAT1_LPM_UPDATE_AMP_M \
                                0x003F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_LPM_UPDATE_AMP_S 16
#define OSC_DIG_STAT1_FORCE_RCOSC_HF \
                                0x00008000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_FORCE_RCOSC_HF_M \
                                0x00008000
#define OSC_DIG_STAT1_FORCE_RCOSC_HF_S 15
#define OSC_DIG_STAT1_SCLK_HF_EN \
                                0x00004000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_SCLK_HF_EN_M \
                                0x00004000
#define OSC_DIG_STAT1_SCLK_HF_EN_S 14
#define OSC_DIG_STAT1_SCLK_MF_EN \
                                0x00002000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_SCLK_MF_EN_M \
                                0x00002000
#define OSC_DIG_STAT1_SCLK_MF_EN_S 13
#define OSC_DIG_STAT1_ACLK_ADC_EN \
                                0x00001000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_ACLK_ADC_EN_M \
                                0x00001000
#define OSC_DIG_STAT1_ACLK_ADC_EN_S 12
#define OSC_DIG_STAT1_ACLK_TDC_EN \
                                0x00000800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_ACLK_TDC_EN_M \
                                0x00000800
#define OSC_DIG_STAT1_ACLK_TDC_EN_S 11
#define OSC_DIG_STAT1_ACLK_REF_EN \
                                0x00000400  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_ACLK_REF_EN_M \
                                0x00000400
#define OSC_DIG_STAT1_ACLK_REF_EN_S 10
#define OSC_DIG_STAT1_CLK_CHP_EN \
                                0x00000200  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_CLK_CHP_EN_M \
                                0x00000200
#define OSC_DIG_STAT1_CLK_CHP_EN_S 9
#define OSC_DIG_STAT1_CLK_DCDC_EN \
                                0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_CLK_DCDC_EN_M \
                                0x00000100
#define OSC_DIG_STAT1_CLK_DCDC_EN_S 8
#define OSC_DIG_STAT1_SCLK_HF_GOOD \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_SCLK_HF_GOOD_M \
                                0x00000080
#define OSC_DIG_STAT1_SCLK_HF_GOOD_S 7
#define OSC_DIG_STAT1_SCLK_MF_GOOD \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_SCLK_MF_GOOD_M \
                                0x00000040
#define OSC_DIG_STAT1_SCLK_MF_GOOD_S 6
#define OSC_DIG_STAT1_SCLK_LF_GOOD \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_SCLK_LF_GOOD_M \
                                0x00000020
#define OSC_DIG_STAT1_SCLK_LF_GOOD_S 5
#define OSC_DIG_STAT1_ACLK_ADC_GOOD \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_ACLK_ADC_GOOD_M \
                                0x00000010
#define OSC_DIG_STAT1_ACLK_ADC_GOOD_S 4
#define OSC_DIG_STAT1_ACLK_TDC_GOOD \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_ACLK_TDC_GOOD_M \
                                0x00000008
#define OSC_DIG_STAT1_ACLK_TDC_GOOD_S 3
#define OSC_DIG_STAT1_ACLK_REF_GOOD \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_ACLK_REF_GOOD_M \
                                0x00000004
#define OSC_DIG_STAT1_ACLK_REF_GOOD_S 2
#define OSC_DIG_STAT1_CLK_CHP_GOOD \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_CLK_CHP_GOOD_M \
                                0x00000002
#define OSC_DIG_STAT1_CLK_CHP_GOOD_S 1
#define OSC_DIG_STAT1_CLK_DCDC_GOOD \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT1_CLK_DCDC_GOOD_M \
                                0x00000001
#define OSC_DIG_STAT1_CLK_DCDC_GOOD_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// OSC_DIG_O_STAT2 register.
//
//*****************************************************************************
#define OSC_DIG_STAT2_ADC_DCBIAS_M \
                                0xFC000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_ADC_DCBIAS_S 26
#define OSC_DIG_STAT2_HPM_RAMP1_THMEHT \
                                0x02000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_HPM_RAMP1_THMEHT_M \
                                0x02000000
#define OSC_DIG_STAT2_HPM_RAMP1_THMEHT_S 25
#define OSC_DIG_STAT2_HPM_RAMP2_THMET \
                                0x01000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_HPM_RAMP2_THMET_M \
                                0x01000000
#define OSC_DIG_STAT2_HPM_RAMP2_THMET_S 24
#define OSC_DIG_STAT2_HPM_RAMP3_THMET \
                                0x00800000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_HPM_RAMP3_THMET_M \
                                0x00800000
#define OSC_DIG_STAT2_HPM_RAMP3_THMET_S 23
#define OSC_DIG_STAT2_IBIAS_DEC_WITH_MEASURE_DONE \
                                0x00400000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_IBIAS_DEC_WITH_MEASURE_DONE_M \
                                0x00400000
#define OSC_DIG_STAT2_IBIAS_DEC_WITH_MEASURE_DONE_S 22
#define OSC_DIG_STAT2_IBIAS_WAIT_CNTR_DONE \
                                0x00200000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_IBIAS_WAIT_CNTR_DONE_M \
                                0x00200000
#define OSC_DIG_STAT2_IBIAS_WAIT_CNTR_DONE_S 21
#define OSC_DIG_STAT2_IDAC_INCREMENT_DONE \
                                0x00100000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_IDAC_INCREMENT_DONE_M \
                                0x00100000
#define OSC_DIG_STAT2_IDAC_INCREMENT_DONE_S 20
#define OSC_DIG_STAT2_IBIAS_CAP_UPDATE_DONE \
                                0x00080000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_IBIAS_CAP_UPDATE_DONE_M \
                                0x00080000
#define OSC_DIG_STAT2_IBIAS_CAP_UPDATE_DONE_S 19
#define OSC_DIG_STAT2_IDAC_DECREMENT_WITH_MEASURE_DONE \
                                0x00040000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_IDAC_DECREMENT_WITH_MEASURE_DONE_M \
                                0x00040000
#define OSC_DIG_STAT2_IDAC_DECREMENT_WITH_MEASURE_DONE_S 18
#define OSC_DIG_STAT2_IBIAS_INCREMENT_DONE \
                                0x00020000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_IBIAS_INCREMENT_DONE_M \
                                0x00020000
#define OSC_DIG_STAT2_IBIAS_INCREMENT_DONE_S 17
#define OSC_DIG_STAT2_RAMP_DOWN_TO_INIT_DONE \
                                0x00010000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_RAMP_DOWN_TO_INIT_DONE_M \
                                0x00010000
#define OSC_DIG_STAT2_RAMP_DOWN_TO_INIT_DONE_S 16
#define OSC_DIG_STAT2_RAMPSTATE_M \
                                0x0000F000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_RAMPSTATE_S 12
#define OSC_DIG_STAT2_ADCSTATE_M \
                                0x00000E00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_ADCSTATE_S 9
#define OSC_DIG_STAT2_ADCSTATE_ADC_RESET \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT2_ADCSTATE_ADC_IDLE \
                                0x00000200  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT2_ADCSTATE_ADC_SC \
                                0x00000400  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT2_ADCSTATE_ADC_RDDCB \
                                0x00000600  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT2_ADCSTATE_ADC_RDAMP \
                                0x00000800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT2_ADCSTATE_ADC_CALC \
                                0x00000A00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define OSC_DIG_STAT2_ADC_COMP_P \
                                0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_ADC_COMP_P_M \
                                0x00000100
#define OSC_DIG_STAT2_ADC_COMP_P_S 8
#define OSC_DIG_STAT2_ADC_COMP_M \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_ADC_COMP_M_M \
                                0x00000080
#define OSC_DIG_STAT2_ADC_COMP_M_S 7
#define OSC_DIG_STAT2_AMPCOMP_OF_UF_M \
                                0x00000070  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_AMPCOMP_OF_UF_S 4
#define OSC_DIG_STAT2_AMPCOMP_REQ \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_AMPCOMP_REQ_M \
                                0x00000008
#define OSC_DIG_STAT2_AMPCOMP_REQ_S 3
#define OSC_DIG_STAT2_XOSC_HF_AMPGOOD \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_XOSC_HF_AMPGOOD_M \
                                0x00000004
#define OSC_DIG_STAT2_XOSC_HF_AMPGOOD_S 2
#define OSC_DIG_STAT2_XOSC_HF_FREQGOOD \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_XOSC_HF_FREQGOOD_M \
                                0x00000002
#define OSC_DIG_STAT2_XOSC_HF_FREQGOOD_S 1
#define OSC_DIG_STAT2_XOSC_HF_RF_FREQGOOD \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define OSC_DIG_STAT2_XOSC_HF_RF_FREQGOOD_M \
                                0x00000001
#define OSC_DIG_STAT2_XOSC_HF_RF_FREQGOOD_S 0


#endif // __HW_OSC_DIG_H__

