/******************************************************************************
*  Filename:       hw_adi_1_synth.h
*  Revised:        $Date: 2013-10-29 13:25:06 +0100 (ti, 29 okt 2013) $
*  Revision:       $Revision: 39368 $
*
*  Copyright 2005-2012 Texas Instruments Incorporated. All rights reserved.
*
*  IMPORTANT: Your use of this Software is limited to those specific rights
*  granted under the terms of a software license agreement between the user
*  who downloaded the software, his/her employer (which must be your employer)
*  and Texas Instruments Incorporated (the "License").  You may not use this
*  Software unless you agree to abide by the terms of the License. The License
*  limits your use, and you acknowledge, that the Software may not be modified,
*  copied or distributed unless embedded on a Texas Instruments microcontroller
*  or used solely and exclusively in conjunction with a Texas Instruments radio
*  frequency transceiver, which is integrated into your product. Other than for
*  the foregoing purpose, you may not use, reproduce, copy, prepare derivative
*  works of, modify, distribute, perform, display or sell this Software and/or
*  its documentation for any purpose.
*
*  YOU FURTHER ACKNOWLEDGE AND AGREE THAT THE SOFTWARE AND DOCUMENTATION ARE
*  PROVIDED AS IS WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESS OR IMPLIED, 
*  INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF MERCHANTABILITY, TITLE, 
*  NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT SHALL
*  TEXAS INSTRUMENTS OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER CONTRACT,
*  NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR OTHER
*  LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
*  INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE
*  OR CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT
*  OF SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
*  (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
*
*  Should you have any questions regarding your right to use this Software,
*  contact Texas Instruments Incorporated at www.TI.com. 
*
******************************************************************************/

#ifndef __HW_ADI_1_SYNTH_H__
#define __HW_ADI_1_SYNTH_H__

//*****************************************************************************
//
// The following are defines for the ADI_1_SYNTH register offsets.
//
//*****************************************************************************
#define ADI_1_SYNTH_O_CTL_LDOVCO_1 \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_O_CTL_LDOVCO_2 \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_O_CTL_LDOVCO_3 \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_O_SLDO_1    0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_1_SYNTH_O_SLDO_2    0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_1_SYNTH_O_ADI1_SYNTHCONTROL_INIT \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_O_STS       0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_1_SYNTH_O_CTL_LDOVCO_1 register.
//
//*****************************************************************************
#define ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN_BYPASS_REG \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN_BYPASS_REG_M \
                                0x00000008
#define ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN_BYPASS_REG_S 3
#define ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN_RDY_SIGNAL \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN_RDY_SIGNAL_M \
                                0x00000004
#define ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN_RDY_SIGNAL_S 2
#define ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN_BIAS_ONLY \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN_BIAS_ONLY_M \
                                0x00000002
#define ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN_BIAS_ONLY_S 1
#define ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN_M \
                                0x00000001
#define ADI_1_SYNTH_CTL_LDOVCO_1_LDOVCO_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_1_SYNTH_O_CTL_LDOVCO_2 register.
//
//*****************************************************************************
#define ADI_1_SYNTH_CTL_LDOVCO_2_LDOVCO_TRIM_OUTPUT_M \
                                0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_CTL_LDOVCO_2_LDOVCO_TRIM_OUTPUT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_1_SYNTH_O_CTL_LDOVCO_3 register.
//
//*****************************************************************************
#define ADI_1_SYNTH_CTL_LDOVCO_3_LDOVCO_COMP_RES_M \
                                0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_CTL_LDOVCO_3_LDOVCO_COMP_RES_S 3
#define ADI_1_SYNTH_CTL_LDOVCO_3_LDOVCO_COMP_CAP_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_CTL_LDOVCO_3_LDOVCO_COMP_CAP_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_1_SYNTH_O_SLDO_1 register.
//
//*****************************************************************************
#define ADI_1_SYNTH_SLDO_1_SLDO_COMP_CAP \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_SLDO_1_SLDO_COMP_CAP_M \
                                0x00000040
#define ADI_1_SYNTH_SLDO_1_SLDO_COMP_CAP_S 6
#define ADI_1_SYNTH_SLDO_1_SLDO_EN_RDY_SIGNAL \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_SLDO_1_SLDO_EN_RDY_SIGNAL_M \
                                0x00000004
#define ADI_1_SYNTH_SLDO_1_SLDO_EN_RDY_SIGNAL_S 2
#define ADI_1_SYNTH_SLDO_1_SLDO_EN_BIAS_ONLY \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_SLDO_1_SLDO_EN_BIAS_ONLY_M \
                                0x00000002
#define ADI_1_SYNTH_SLDO_1_SLDO_EN_BIAS_ONLY_S 1
#define ADI_1_SYNTH_SLDO_1_SLDO_EN \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_SLDO_1_SLDO_EN_M \
                                0x00000001
#define ADI_1_SYNTH_SLDO_1_SLDO_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_1_SYNTH_O_SLDO_2 register.
//
//*****************************************************************************
#define ADI_1_SYNTH_SLDO_2_SLDO_TRIM_OUTPUT_M \
                                0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_SLDO_2_SLDO_TRIM_OUTPUT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_1_SYNTH_O_ADI1_SYNTHCONTROL_INIT register.
//
//*****************************************************************************
#define ADI_1_SYNTH_ADI1_SYNTHCONTROL_INIT_SYNTH_CLK_EN \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_ADI1_SYNTHCONTROL_INIT_SYNTH_CLK_EN_M \
                                0x00000002
#define ADI_1_SYNTH_ADI1_SYNTHCONTROL_INIT_SYNTH_CLK_EN_S 1
#define ADI_1_SYNTH_ADI1_SYNTHCONTROL_INIT_SYNTH_DDI_RESET \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_ADI1_SYNTHCONTROL_INIT_SYNTH_DDI_RESET_M \
                                0x00000001
#define ADI_1_SYNTH_ADI1_SYNTHCONTROL_INIT_SYNTH_DDI_RESET_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_1_SYNTH_O_STS register.
//
//*****************************************************************************
#define ADI_1_SYNTH_STS_SYNTH_TUNE_ACK \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_STS_SYNTH_TUNE_ACK_M \
                                0x00000004
#define ADI_1_SYNTH_STS_SYNTH_TUNE_ACK_S 2
#define ADI_1_SYNTH_STS_STS_SLDO_RDY \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_STS_STS_SLDO_RDY_M \
                                0x00000002
#define ADI_1_SYNTH_STS_STS_SLDO_RDY_S 1
#define ADI_1_SYNTH_STS_STS_LDOVCO_RDY \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_STS_STS_LDOVCO_RDY_M \
                                0x00000001
#define ADI_1_SYNTH_STS_STS_LDOVCO_RDY_S 0


#endif // __HW_ADI_1_SYNTH_H__

