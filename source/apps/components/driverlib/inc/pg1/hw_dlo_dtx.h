
/******************************************************************************
*  Filename:       hw_dlo_dtx.h
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
#ifndef __HW_DLO_DTX_H__
#define __HW_DLO_DTX_H__

//*****************************************************************************
//
// The following are defines for the DLO_DTX register offsets.
//
//*****************************************************************************
#define DLO_DTX_O_SYNTHREG00    0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_PREDIV        0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_PLLM          0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_OTHERM        0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_FINECALM      0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_FRCDCO        0x00000014  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_SDCTL         0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_DIGCFG2       0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_TDCTH         0x00000024  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_LOOPCOEFF     0x00000028  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_PLLCTL0       0x0000002C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_FSMCTL0       0x00000030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_PETH          0x00000034  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_PLLCTL1       0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_DTX           0x0000003C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_DTX00         0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_DTX01         0x00000044  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_DTX02         0x00000048  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_DTX03         0x0000004C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_DTX04         0x00000050  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_DTX05         0x00000054  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_DTXGAIN       0x00000058  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_ANADIV        0x0000005C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_PLLCTL2       0x00000060  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_FSMCTL1       0x00000064  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_FSMCTL2       0x00000068  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_SPARE0        0x0000006C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_STAT0         0x00000070  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_STAT1         0x00000074  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_STAT2         0x00000078  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_O_STAT3         0x0000007C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_SYNTHREG00 register.
//
//*****************************************************************************
#define DLO_DTX_SYNTHREG00_SYNTH_TX_RX_Z \
                                0x80000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SYNTHREG00_SYNTH_TX_RX_Z_M \
                                0x80000000
#define DLO_DTX_SYNTHREG00_SYNTH_TX_RX_Z_S 31
#define DLO_DTX_SYNTHREG00_SYNTH_TX_RX_Z_RX \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_SYNTHREG00_SYNTH_TX_RX_Z_TX \
                                0x80000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_SYNTHREG00_HSD_CLOCK_MASTER_ENABLE \
                                0x40000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SYNTHREG00_HSD_CLOCK_MASTER_ENABLE_M \
                                0x40000000
#define DLO_DTX_SYNTHREG00_HSD_CLOCK_MASTER_ENABLE_S 30
#define DLO_DTX_SYNTHREG00_RETIMER_CLRZ_MASTER \
                                0x20000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SYNTHREG00_RETIMER_CLRZ_MASTER_M \
                                0x20000000
#define DLO_DTX_SYNTHREG00_RETIMER_CLRZ_MASTER_S 29
#define DLO_DTX_SYNTHREG00_IS_24MHZXTAL \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SYNTHREG00_IS_24MHZXTAL_M \
                                0x00000020
#define DLO_DTX_SYNTHREG00_IS_24MHZXTAL_S 5
#define DLO_DTX_SYNTHREG00_IS_24MHZXTAL_48M \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_SYNTHREG00_IS_24MHZXTAL_24M \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_SYNTHREG00_SYNTH_TUNE_PHASE_M \
                                0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SYNTHREG00_SYNTH_TUNE_PHASE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_PREDIV register.
//
//*****************************************************************************
#define DLO_DTX_PREDIV_PLL_PREDIV_RATIO_M \
                                0xFC000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PREDIV_PLL_PREDIV_RATIO_S 26
#define DLO_DTX_PREDIV_FINECALIB_PREDIV_RATIO_M \
                                0x03FF8000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PREDIV_FINECALIB_PREDIV_RATIO_S 15
#define DLO_DTX_PREDIV_MIDCALIB_PREDIV_RATIO_M \
                                0x00007FC0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PREDIV_MIDCALIB_PREDIV_RATIO_S 6
#define DLO_DTX_PREDIV_DEFAULTCALIB_PREDIV_RATIO_M \
                                0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PREDIV_DEFAULTCALIB_PREDIV_RATIO_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the DLO_DTX_O_PLLM register.
//
//*****************************************************************************
#define DLO_DTX_PLLM_FREF_DITHER_EN \
                                0x80000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLM_FREF_DITHER_EN_M \
                                0x80000000
#define DLO_DTX_PLLM_FREF_DITHER_EN_S 31
#define DLO_DTX_PLLM_VAL_M      0x0FFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLM_VAL_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_OTHERM register.
//
//*****************************************************************************
#define DLO_DTX_OTHERM_MID_M_VAL_M \
                                0xFFFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_OTHERM_MID_M_VAL_S 16
#define DLO_DTX_OTHERM_DEF_M_VAL_M \
                                0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_OTHERM_DEF_M_VAL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_FINECALM register.
//
//*****************************************************************************
#define DLO_DTX_FINECALM_VAL_M  0x0003FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_FINECALM_VAL_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_FRCDCO register.
//
//*****************************************************************************
#define DLO_DTX_FRCDCO_TST_DCO_FINE_REG_M \
                                0x3FC00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FRCDCO_TST_DCO_FINE_REG_S 22
#define DLO_DTX_FRCDCO_TST_DCO_SD_REG_M \
                                0x003FC000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FRCDCO_TST_DCO_SD_REG_S 14
#define DLO_DTX_FRCDCO_TST_DCO_MID_REG_M \
                                0x00003F00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FRCDCO_TST_DCO_MID_REG_S 8
#define DLO_DTX_FRCDCO_TST_DCO_COARSE_REG_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FRCDCO_TST_DCO_COARSE_REG_S 4
#define DLO_DTX_FRCDCO_TST_FORCE_C_M_F_CODES_M \
                                0x0000000E  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FRCDCO_TST_FORCE_C_M_F_CODES_S 1
#define DLO_DTX_FRCDCO_TST_FORCE_SD \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FRCDCO_TST_FORCE_SD_M \
                                0x00000001
#define DLO_DTX_FRCDCO_TST_FORCE_SD_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_SDCTL register.
//
//*****************************************************************************
#define DLO_DTX_SDCTL_SDM_DLY_DOUBLE_EN \
                                0x80000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SDCTL_SDM_DLY_DOUBLE_EN_M \
                                0x80000000
#define DLO_DTX_SDCTL_SDM_DLY_DOUBLE_EN_S 31
#define DLO_DTX_SDCTL_SDM_DLY_MAT_DIS \
                                0x40000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SDCTL_SDM_DLY_MAT_DIS_M \
                                0x40000000
#define DLO_DTX_SDCTL_SDM_DLY_MAT_DIS_S 30
#define DLO_DTX_SDCTL_SDM_DITHER_MODE_M \
                                0x18000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SDCTL_SDM_DITHER_MODE_S 27
#define DLO_DTX_SDCTL_SDM_ORDER_1OR2Z \
                                0x04000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SDCTL_SDM_ORDER_1OR2Z_M \
                                0x04000000
#define DLO_DTX_SDCTL_SDM_ORDER_1OR2Z_S 26
#define DLO_DTX_SDCTL_SDM_ORDER_1OR2Z_2ND \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_SDCTL_SDM_ORDER_1OR2Z_1ST \
                                0x04000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_SDCTL_SDM_DEM_DIS \
                                0x02000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SDCTL_SDM_DEM_DIS_M \
                                0x02000000
#define DLO_DTX_SDCTL_SDM_DEM_DIS_S 25
#define DLO_DTX_SDCTL_MPX_CAN_DIS \
                                0x01000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SDCTL_MPX_CAN_DIS_M \
                                0x01000000
#define DLO_DTX_SDCTL_MPX_CAN_DIS_S 24
#define DLO_DTX_SDCTL_SDM_DIS   0x00800000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_SDCTL_SDM_DIS_M 0x00800000
#define DLO_DTX_SDCTL_SDM_DIS_S 23
#define DLO_DTX_SDCTL_TST_DCO_SDM_OP_REG_M \
                                0x00700000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SDCTL_TST_DCO_SDM_OP_REG_S 20
#define DLO_DTX_SDCTL_TST_FORCE_SDM_OP \
                                0x00080000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SDCTL_TST_FORCE_SDM_OP_M \
                                0x00080000
#define DLO_DTX_SDCTL_TST_FORCE_SDM_OP_S 19
#define DLO_DTX_SDCTL_SDM_DLY_MODE_M \
                                0x00030000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_SDCTL_SDM_DLY_MODE_S 16
#define DLO_DTX_SDCTL_SDM_DLY_MODE_1DELAY \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_SDCTL_SDM_DLY_MODE_2DELAY \
                                0x00010000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_SDCTL_SDM_DLY_MODE_3DELAY \
                                0x00020000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_SDCTL_SDM_DLY_MODE_4DELAY \
                                0x00030000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_DIGCFG2 register.
//
//*****************************************************************************
#define DLO_DTX_DIGCFG2_FINE_BOT_CODE_DURING_CALIB_M \
                                0xFF000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_DIGCFG2_FINE_BOT_CODE_DURING_CALIB_S 24
#define DLO_DTX_DIGCFG2_FINE_TOP_CODE_DURING_CALIB_M \
                                0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_DIGCFG2_FINE_TOP_CODE_DURING_CALIB_S 8
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_TDCTH register.
//
//*****************************************************************************
#define DLO_DTX_TDCTH_MEM_KT_INV_M \
                                0xFFFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_TDCTH_MEM_KT_INV_S 16
#define DLO_DTX_TDCTH_EDGESEL_TDC_TH2_M \
                                0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_TDCTH_EDGESEL_TDC_TH2_S 8
#define DLO_DTX_TDCTH_EDGESEL_TDC_TH1_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_TDCTH_EDGESEL_TDC_TH1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_LOOPCOEFF register.
//
//*****************************************************************************
#define DLO_DTX_LOOPCOEFF_PLL_COEFF_DYN_CHANGE \
                                0x80000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_LOOPCOEFF_PLL_COEFF_DYN_CHANGE_M \
                                0x80000000
#define DLO_DTX_LOOPCOEFF_PLL_COEFF_DYN_CHANGE_S 31
#define DLO_DTX_LOOPCOEFF_IIR_FILT_BW_M \
                                0x60000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_LOOPCOEFF_IIR_FILT_BW_S 29
#define DLO_DTX_LOOPCOEFF_IIR_FILT_BW_K2 \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_LOOPCOEFF_IIR_FILT_BW_K4 \
                                0x20000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_LOOPCOEFF_IIR_FILT_BW_K8 \
                                0x40000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_LOOPCOEFF_IIR_FILT_BW_K16 \
                                0x60000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_LOOPCOEFF_IIR_FILTER_ORDER \
                                0x10000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_LOOPCOEFF_IIR_FILTER_ORDER_M \
                                0x10000000
#define DLO_DTX_LOOPCOEFF_IIR_FILTER_ORDER_S 28
#define DLO_DTX_LOOPCOEFF_IIR_FILT_EN \
                                0x08000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_LOOPCOEFF_IIR_FILT_EN_M \
                                0x08000000
#define DLO_DTX_LOOPCOEFF_IIR_FILT_EN_S 27
#define DLO_DTX_LOOPCOEFF_ALPHA_HIGH_PREC \
                                0x04000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_LOOPCOEFF_ALPHA_HIGH_PREC_M \
                                0x04000000
#define DLO_DTX_LOOPCOEFF_ALPHA_HIGH_PREC_S 26
#define DLO_DTX_LOOPCOEFF_PLL_BETA_M \
                                0x03FFF000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_LOOPCOEFF_PLL_BETA_S 12
#define DLO_DTX_LOOPCOEFF_PLL_ALPHA_M \
                                0x00000FFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_LOOPCOEFF_PLL_ALPHA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_PLLCTL0 register.
//
//*****************************************************************************
#define DLO_DTX_PLLCTL0_DLY_RETIMER_INP_M \
                                0x00E00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL0_DLY_RETIMER_INP_S 21
#define DLO_DTX_PLLCTL0_DLY_RETIMER_INP_3CLK \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLCTL0_DLY_RETIMER_INP_4CLK \
                                0x00200000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLCTL0_DLY_RETIMER_INP_5CLK \
                                0x00400000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLCTL0_DLY_RETIMER_INP_6CLK \
                                0x00600000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLCTL0_DLY_RETIMER_INP_7CLK \
                                0x00800000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLCTL0_DLY_RETIMER_INP_8CLK \
                                0x00A00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLCTL0_DLY_RETIMER_INP_9CLK \
                                0x00C00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLCTL0_DLY_RETIMER_INP_10CLK \
                                0x00E00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLCTL0_RECENTER_DISABLE \
                                0x00100000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL0_RECENTER_DISABLE_M \
                                0x00100000
#define DLO_DTX_PLLCTL0_RECENTER_DISABLE_S 20
#define DLO_DTX_PLLCTL0_RECENTER_THRESHHOLD_M \
                                0x000FC000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL0_RECENTER_THRESHHOLD_S 14
#define DLO_DTX_PLLCTL0_PLLHW_FINE_CALIB_EN \
                                0x00002000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL0_PLLHW_FINE_CALIB_EN_M \
                                0x00002000
#define DLO_DTX_PLLCTL0_PLLHW_FINE_CALIB_EN_S 13
#define DLO_DTX_PLLCTL0_CKVD64_LATENCY_FOR_MPX_CAN_M \
                                0x00001C00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL0_CKVD64_LATENCY_FOR_MPX_CAN_S 10
#define DLO_DTX_PLLCTL0_CKVD16_LATENCY_FOR_MPX_CAN_M \
                                0x00000380  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL0_CKVD16_LATENCY_FOR_MPX_CAN_S 7
#define DLO_DTX_PLLCTL0_REFCLK_LATCH_EDGE_SEL \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL0_REFCLK_LATCH_EDGE_SEL_M \
                                0x00000040
#define DLO_DTX_PLLCTL0_REFCLK_LATCH_EDGE_SEL_S 6
#define DLO_DTX_PLLCTL0_REFCLK_LATCH_EDGE_SEL_POSEDGE \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLCTL0_REFCLK_LATCH_EDGE_SEL_NEGEDGE \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLCTL0_TDC_SAT_ENABLE \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL0_TDC_SAT_ENABLE_M \
                                0x00000010
#define DLO_DTX_PLLCTL0_TDC_SAT_ENABLE_S 4
#define DLO_DTX_PLLCTL0_TDC_CALIB_AVERAGE_M \
                                0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL0_TDC_CALIB_AVERAGE_S 0
#define DLO_DTX_PLLCTL0_TDC_CALIB_AVERAGE_1CYCLE \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLCTL0_TDC_CALIB_AVERAGE_2CYCLE \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLCTL0_TDC_CALIB_AVERAGE_4CYCLE \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_PLLCTL0_TDC_CALIB_AVERAGE_8CYCLE \
                                0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_FSMCTL0 register.
//
//*****************************************************************************
#define DLO_DTX_FSMCTL0_ENABLE_DYNAMIC_CLOCK_SWITCH \
                                0x40000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL0_ENABLE_DYNAMIC_CLOCK_SWITCH_M \
                                0x40000000
#define DLO_DTX_FSMCTL0_ENABLE_DYNAMIC_CLOCK_SWITCH_S 30
#define DLO_DTX_FSMCTL0_PLL_FREEZE \
                                0x10000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL0_PLL_FREEZE_M \
                                0x10000000
#define DLO_DTX_FSMCTL0_PLL_FREEZE_S 28
#define DLO_DTX_FSMCTL0_RETIMERFREEZE \
                                0x08000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL0_RETIMERFREEZE_M \
                                0x08000000
#define DLO_DTX_FSMCTL0_RETIMERFREEZE_S 27
#define DLO_DTX_FSMCTL0_FINECODEFREEZE \
                                0x04000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL0_FINECODEFREEZE_M \
                                0x04000000
#define DLO_DTX_FSMCTL0_FINECODEFREEZE_S 26
#define DLO_DTX_FSMCTL0_TDCFREEZE \
                                0x02000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL0_TDCFREEZE_M \
                                0x02000000
#define DLO_DTX_FSMCTL0_TDCFREEZE_S 25
#define DLO_DTX_FSMCTL0_PLL_RESET \
                                0x01000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL0_PLL_RESET_M \
                                0x01000000
#define DLO_DTX_FSMCTL0_PLL_RESET_S 24
#define DLO_DTX_FSMCTL0_SKIP_CALIB_ST_ENABLE \
                                0x00400000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL0_SKIP_CALIB_ST_ENABLE_M \
                                0x00400000
#define DLO_DTX_FSMCTL0_SKIP_CALIB_ST_ENABLE_S 22
#define DLO_DTX_FSMCTL0_MID_SAR_INIT_VAL_M \
                                0x0007E000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL0_MID_SAR_INIT_VAL_S 13
#define DLO_DTX_FSMCTL0_COARSE_PRECAL_VAL_M \
                                0x00001E00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL0_COARSE_PRECAL_VAL_S 9
#define DLO_DTX_FSMCTL0_MID_PRECAL_VAL_M \
                                0x000001F8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL0_MID_PRECAL_VAL_S 3
#define DLO_DTX_FSMCTL0_COARSE_CAL_SKIP_EN \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL0_COARSE_CAL_SKIP_EN_M \
                                0x00000004
#define DLO_DTX_FSMCTL0_COARSE_CAL_SKIP_EN_S 2
#define DLO_DTX_FSMCTL0_MID_CAL_SKIP_EN \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL0_MID_CAL_SKIP_EN_M \
                                0x00000002
#define DLO_DTX_FSMCTL0_MID_CAL_SKIP_EN_S 1
#define DLO_DTX_FSMCTL0_TDC_CAL_SKIP_EN \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL0_TDC_CAL_SKIP_EN_M \
                                0x00000001
#define DLO_DTX_FSMCTL0_TDC_CAL_SKIP_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the DLO_DTX_O_PETH register.
//
//*****************************************************************************
#define DLO_DTX_PETH_PHASE_ERROR_LOCK_THRESH_CNT_M \
                                0x1F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PETH_PHASE_ERROR_LOCK_THRESH_CNT_S 24
#define DLO_DTX_PETH_PHASE_ERROR_LOCK_THRESH_M \
                                0x00FF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PETH_PHASE_ERROR_LOCK_THRESH_S 16
#define DLO_DTX_PETH_PHASE_ERROR_DISCARD_ENABLE \
                                0x00004000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PETH_PHASE_ERROR_DISCARD_ENABLE_M \
                                0x00004000
#define DLO_DTX_PETH_PHASE_ERROR_DISCARD_ENABLE_S 14
#define DLO_DTX_PETH_PHASE_ERROR_DISCARD_CNT_M \
                                0x00003C00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PETH_PHASE_ERROR_DISCARD_CNT_S 10
#define DLO_DTX_PETH_PHASE_ERROR_DISCARD_TH_M \
                                0x000003FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PETH_PHASE_ERROR_DISCARD_TH_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_PLLCTL1 register.
//
//*****************************************************************************
#define DLO_DTX_PLLCTL1_PLL_OPEN_LOOP_MODE_WITH_1PT_MOD \
                                0x80000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL1_PLL_OPEN_LOOP_MODE_WITH_1PT_MOD_M \
                                0x80000000
#define DLO_DTX_PLLCTL1_PLL_OPEN_LOOP_MODE_WITH_1PT_MOD_S 31
#define DLO_DTX_PLLCTL1_XTALID_FRAC_M \
                                0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL1_XTALID_FRAC_S 8
#define DLO_DTX_PLLCTL1_PO_MID_SEL \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL1_PO_MID_SEL_M \
                                0x00000020
#define DLO_DTX_PLLCTL1_PO_MID_SEL_S 5
#define DLO_DTX_PLLCTL1_PO_FINE_SEL \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL1_PO_FINE_SEL_M \
                                0x00000010
#define DLO_DTX_PLLCTL1_PO_FINE_SEL_S 4
#define DLO_DTX_PLLCTL1_PO_TAIL_RES_TRIM_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_PLLCTL1_PO_TAIL_RES_TRIM_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the DLO_DTX_O_DTX register.
//
//*****************************************************************************
#define DLO_DTX_DTX_TXFOFF_M    0x000FFF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX_TXFOFF_S    8
#define DLO_DTX_DTX_SHAPEDZIGBEE \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_DTX_SHAPEDZIGBEE_M \
                                0x00000080
#define DLO_DTX_DTX_SHAPEDZIGBEE_S 7
#define DLO_DTX_DTX_ZIGBEEMODE  0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX_ZIGBEEMODE_M \
                                0x00000040
#define DLO_DTX_DTX_ZIGBEEMODE_S 6
#define DLO_DTX_DTX_SHAPEGAIN_M 0x00000030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX_SHAPEGAIN_S 4
#define DLO_DTX_DTX_INTPFACTOR_M \
                                0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_DTX_INTPFACTOR_S 2
#define DLO_DTX_DTX_INIT        0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX_INIT_M      0x00000002
#define DLO_DTX_DTX_INIT_S      1
#define DLO_DTX_DTX_MODULEEN    0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX_MODULEEN_M  0x00000001
#define DLO_DTX_DTX_MODULEEN_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_DTX00 register.
//
//*****************************************************************************
#define DLO_DTX_DTX00_SHAPE3_M  0xFF000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX00_SHAPE3_S  24
#define DLO_DTX_DTX00_SHAPE2_M  0x00FF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX00_SHAPE2_S  16
#define DLO_DTX_DTX00_SHAPE1_M  0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX00_SHAPE1_S  8
#define DLO_DTX_DTX00_SHAPE0_M  0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX00_SHAPE0_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_DTX01 register.
//
//*****************************************************************************
#define DLO_DTX_DTX01_SHAPE7_M  0xFF000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX01_SHAPE7_S  24
#define DLO_DTX_DTX01_SHAPE6_M  0x00FF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX01_SHAPE6_S  16
#define DLO_DTX_DTX01_SHAPE5_M  0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX01_SHAPE5_S  8
#define DLO_DTX_DTX01_SHAPE4_M  0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX01_SHAPE4_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_DTX02 register.
//
//*****************************************************************************
#define DLO_DTX_DTX02_SHAPE11_M 0xFF000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX02_SHAPE11_S 24
#define DLO_DTX_DTX02_SHAPE10_M 0x00FF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX02_SHAPE10_S 16
#define DLO_DTX_DTX02_SHAPE9_M  0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX02_SHAPE9_S  8
#define DLO_DTX_DTX02_SHAPE8_M  0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX02_SHAPE8_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_DTX03 register.
//
//*****************************************************************************
#define DLO_DTX_DTX03_SHAPE15_M 0xFF000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX03_SHAPE15_S 24
#define DLO_DTX_DTX03_SHAPE14_M 0x00FF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX03_SHAPE14_S 16
#define DLO_DTX_DTX03_SHAPE13_M 0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX03_SHAPE13_S 8
#define DLO_DTX_DTX03_SHAPE12_M 0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX03_SHAPE12_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_DTX04 register.
//
//*****************************************************************************
#define DLO_DTX_DTX04_SHAPE19_M 0xFF000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX04_SHAPE19_S 24
#define DLO_DTX_DTX04_SHAPE18_M 0x00FF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX04_SHAPE18_S 16
#define DLO_DTX_DTX04_SHAPE17_M 0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX04_SHAPE17_S 8
#define DLO_DTX_DTX04_SHAPE16_M 0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX04_SHAPE16_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_DTX05 register.
//
//*****************************************************************************
#define DLO_DTX_DTX05_SHAPE23_M 0xFF000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX05_SHAPE23_S 24
#define DLO_DTX_DTX05_SHAPE22_M 0x00FF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX05_SHAPE22_S 16
#define DLO_DTX_DTX05_SHAPE21_M 0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX05_SHAPE21_S 8
#define DLO_DTX_DTX05_SHAPE20_M 0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_DTX05_SHAPE20_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_DTXGAIN register.
//
//*****************************************************************************
#define DLO_DTX_DTXGAIN_ADD_PATH_GAIN_M \
                                0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_DTXGAIN_ADD_PATH_GAIN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_ANADIV register.
//
//*****************************************************************************
#define DLO_DTX_ANADIV_CORNER_CAP_M \
                                0xC0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_ANADIV_CORNER_CAP_S 30
#define DLO_DTX_ANADIV_EN_KICK_START \
                                0x20000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_ANADIV_EN_KICK_START_M \
                                0x20000000
#define DLO_DTX_ANADIV_EN_KICK_START_S 29
#define DLO_DTX_ANADIV_EN_DIV_BIAS \
                                0x02000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_ANADIV_EN_DIV_BIAS_M \
                                0x02000000
#define DLO_DTX_ANADIV_EN_DIV_BIAS_S 25
#define DLO_DTX_ANADIV_EN_HALF_CYCLE_PFD \
                                0x00100000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_ANADIV_EN_HALF_CYCLE_PFD_M \
                                0x00100000
#define DLO_DTX_ANADIV_EN_HALF_CYCLE_PFD_S 20
#define DLO_DTX_ANADIV_RETIMER_ISO \
                                0x00020000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_ANADIV_RETIMER_ISO_M \
                                0x00020000
#define DLO_DTX_ANADIV_RETIMER_ISO_S 17
#define DLO_DTX_ANADIV_CTRL_NM_IREF_M \
                                0x0001C000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_ANADIV_CTRL_NM_IREF_S 14
#define DLO_DTX_ANADIV_CTRL_PM_IREF_M \
                                0x00003800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_ANADIV_CTRL_PM_IREF_S 11
#define DLO_DTX_ANADIV_EN_ADC   0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_ANADIV_EN_ADC_M 0x00000040
#define DLO_DTX_ANADIV_EN_ADC_S 6
#define DLO_DTX_ANADIV_EN_SYNTH 0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_ANADIV_EN_SYNTH_M \
                                0x00000020
#define DLO_DTX_ANADIV_EN_SYNTH_S 5
#define DLO_DTX_ANADIV_EN_TX_PH180 \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_ANADIV_EN_TX_PH180_M \
                                0x00000010
#define DLO_DTX_ANADIV_EN_TX_PH180_S 4
#define DLO_DTX_ANADIV_EN_TX_PH0 \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_ANADIV_EN_TX_PH0_M \
                                0x00000008
#define DLO_DTX_ANADIV_EN_TX_PH0_S 3
#define DLO_DTX_ANADIV_EN_RX_Q  0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_ANADIV_EN_RX_Q_M \
                                0x00000004
#define DLO_DTX_ANADIV_EN_RX_Q_S 2
#define DLO_DTX_ANADIV_EN_RX_I  0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_ANADIV_EN_RX_I_M \
                                0x00000002
#define DLO_DTX_ANADIV_EN_RX_I_S 1
#define DLO_DTX_ANADIV_DIV_BUF_ENABLE \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_ANADIV_DIV_BUF_ENABLE_M \
                                0x00000001
#define DLO_DTX_ANADIV_DIV_BUF_ENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_PLLCTL2 register.
//
//*****************************************************************************
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_FSMCTL1 register.
//
//*****************************************************************************
#define DLO_DTX_FSMCTL1_FINE_START_CODE_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_FSMCTL1_FINE_START_CODE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_FSMCTL2 register.
//
//*****************************************************************************
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_SPARE0 register.
//
//*****************************************************************************
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_STAT0 register.
//
//*****************************************************************************
#define DLO_DTX_STAT0_FB_CNT_M  0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define DLO_DTX_STAT0_FB_CNT_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_STAT1 register.
//
//*****************************************************************************
#define DLO_DTX_STAT1_SYNTH_TUNE_STAT_M \
                                0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_STAT1_SYNTH_TUNE_STAT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_STAT2 register.
//
//*****************************************************************************
#define DLO_DTX_STAT2_FDCO_SPAN_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_STAT2_FDCO_SPAN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// DLO_DTX_O_STAT3 register.
//
//*****************************************************************************
#define DLO_DTX_STAT3_DTST_READ_M \
                                0xFFFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_STAT3_DTST_READ_S 16
#define DLO_DTX_STAT3_TDC_CALIB_AVG_M \
                                0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define DLO_DTX_STAT3_TDC_CALIB_AVG_S 0


#endif // __HW_DLO_DTX_H__

