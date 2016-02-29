
/******************************************************************************
*  Filename:       hw_adi_1_synth.h
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
#ifndef __HW_ADI_1_SYNTH_H__
#define __HW_ADI_1_SYNTH_H__

//*****************************************************************************
//
// The following are defines for the ADI_1_SYNTH register offsets.
//
//*****************************************************************************
#define ADI_1_SYNTH_O_VCOLDOCTL0 \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_O_VCOLDOCTL1 \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_O_VCOLDOCFG 0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_1_SYNTH_O_SLDOCTL0  0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_1_SYNTH_O_SLDOCTL1  0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_1_SYNTH_O_VCOLDOCTL0 register.
//
//*****************************************************************************
#define ADI_1_SYNTH_VCOLDOCTL0_BYPASS_REG_EN \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_VCOLDOCTL0_BYPASS_REG_EN_M \
                                0x00000008
#define ADI_1_SYNTH_VCOLDOCTL0_BYPASS_REG_EN_S 3
#define ADI_1_SYNTH_VCOLDOCTL0_RDY_EN \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_VCOLDOCTL0_RDY_EN_M \
                                0x00000004
#define ADI_1_SYNTH_VCOLDOCTL0_RDY_EN_S 2
#define ADI_1_SYNTH_VCOLDOCTL0_LDOVCO_EN_BIAS_ONLY \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_VCOLDOCTL0_LDOVCO_EN_BIAS_ONLY_M \
                                0x00000002
#define ADI_1_SYNTH_VCOLDOCTL0_LDOVCO_EN_BIAS_ONLY_S 1
#define ADI_1_SYNTH_VCOLDOCTL0_EN \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_VCOLDOCTL0_EN_M \
                                0x00000001
#define ADI_1_SYNTH_VCOLDOCTL0_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_1_SYNTH_O_VCOLDOCTL1 register.
//
//*****************************************************************************
#define ADI_1_SYNTH_VCOLDOCTL1_TRIM_OUT_M \
                                0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_VCOLDOCTL1_TRIM_OUT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_1_SYNTH_O_VCOLDOCFG register.
//
//*****************************************************************************
#define ADI_1_SYNTH_VCOLDOCFG_COMP_RES_M \
                                0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_VCOLDOCFG_COMP_RES_S 3
#define ADI_1_SYNTH_VCOLDOCFG_COMP_CAP_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_VCOLDOCFG_COMP_CAP_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_1_SYNTH_O_SLDOCTL0 register.
//
//*****************************************************************************
#define ADI_1_SYNTH_SLDOCTL0_COMP_CAP \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_SLDOCTL0_COMP_CAP_M \
                                0x00000040
#define ADI_1_SYNTH_SLDOCTL0_COMP_CAP_S 6
#define ADI_1_SYNTH_SLDOCTL0_RDY_EN \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_SLDOCTL0_RDY_EN_M \
                                0x00000004
#define ADI_1_SYNTH_SLDOCTL0_RDY_EN_S 2
#define ADI_1_SYNTH_SLDOCTL0_SLDO_EN_BIAS_ONLY \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_SLDOCTL0_SLDO_EN_BIAS_ONLY_M \
                                0x00000002
#define ADI_1_SYNTH_SLDOCTL0_SLDO_EN_BIAS_ONLY_S 1
#define ADI_1_SYNTH_SLDOCTL0_EN 0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_1_SYNTH_SLDOCTL0_EN_M \
                                0x00000001
#define ADI_1_SYNTH_SLDOCTL0_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_1_SYNTH_O_SLDOCTL1 register.
//
//*****************************************************************************
#define ADI_1_SYNTH_SLDOCTL1_TRIM_OUT_M \
                                0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_1_SYNTH_SLDOCTL1_TRIM_OUT_S 0


#endif // __HW_ADI_1_SYNTH_H__

