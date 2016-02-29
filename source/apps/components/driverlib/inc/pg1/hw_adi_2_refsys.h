
/******************************************************************************
*  Filename:       hw_adi_2_refsys.h
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
#ifndef __HW_ADI_2_REFSYS_H__
#define __HW_ADI_2_REFSYS_H__

//*****************************************************************************
//
// The following are defines for the ADI_2_REFSYS register offsets.
//
//*****************************************************************************
#define ADI_2_REFSYS_O_REFSYSCTL0 \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_O_SOCLDOCTL0 \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_O_SOCLDOCTL1 \
                                0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_O_SOCLDOCTL2 \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_O_SOCLDOCTL3 \
                                0x00000005  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_O_SOCLDOCTL4 \
                                0x00000006  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 



//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_2_REFSYS_O_REFSYSCTL0 register.
//
//*****************************************************************************
#define ADI_2_REFSYS_REFSYSCTL0_REFTRIM_M \
                                0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_REFSYSCTL0_REFTRIM_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_2_REFSYS_O_SOCLDOCTL0 register.
//
//*****************************************************************************
#define ADI_2_REFSYS_SOCLDOCTL0_VTRIM_UDIG_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_SOCLDOCTL0_VTRIM_UDIG_S 4
#define ADI_2_REFSYS_SOCLDOCTL0_VTRIM_BOD_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_SOCLDOCTL0_VTRIM_BOD_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_2_REFSYS_O_SOCLDOCTL1 register.
//
//*****************************************************************************
#define ADI_2_REFSYS_SOCLDOCTL1_VTRIM_COARSE_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_SOCLDOCTL1_VTRIM_COARSE_S 4
#define ADI_2_REFSYS_SOCLDOCTL1_VTRIM_DIG_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_SOCLDOCTL1_VTRIM_DIG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_2_REFSYS_O_SOCLDOCTL2 register.
//
//*****************************************************************************
#define ADI_2_REFSYS_SOCLDOCTL2_VTRIM_DELTA_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_SOCLDOCTL2_VTRIM_DELTA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_2_REFSYS_O_SOCLDOCTL3 register.
//
//*****************************************************************************
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_LOAD_M \
                                0x000000C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_LOAD_S 6
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_M \
                                0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_S 3
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_BIAS_60P \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_BIAS_80P \
                                0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_BIAS_100P \
                                0x00000028  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_DIGLDO_BIAS_120P \
                                0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_UDIGLDO_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_SOCLDOCTL3_ITRIM_UDIGLDO_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// ADI_2_REFSYS_O_SOCLDOCTL4 register.
//
//*****************************************************************************
#define ADI_2_REFSYS_SOCLDOCTL4_IPTAT_BIAS_EN \
                                0x00000002  // Enable dummy bias mode. 0: 
                                            // Normal mode, 1: Dummy bias mode 

#define ADI_2_REFSYS_SOCLDOCTL4_IPTAT_BIAS_EN_M \
                                0x00000002
#define ADI_2_REFSYS_SOCLDOCTL4_IPTAT_BIAS_EN_S 1
#define ADI_2_REFSYS_SOCLDOCTL4_UDIG_LDO_EN \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define ADI_2_REFSYS_SOCLDOCTL4_UDIG_LDO_EN_M \
                                0x00000001
#define ADI_2_REFSYS_SOCLDOCTL4_UDIG_LDO_EN_S 0
#define ADI_2_REFSYS_SOCLDOCTL4_UDIG_LDO_EN_DIS \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define ADI_2_REFSYS_SOCLDOCTL4_UDIG_LDO_EN_EN \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 


#endif // __HW_ADI_2_REFSYS_H__

