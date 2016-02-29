
/******************************************************************************
*  Filename:       hw_aon_sysctl.h
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
#ifndef __HW_AON_SYSCTL_H__
#define __HW_AON_SYSCTL_H__

//*****************************************************************************
//
// The following are defines for the AON_SYSCTL register offsets.
//
//*****************************************************************************
#define AON_SYSCTL_O_PWRCTL     0x00000000  // Power management 
#define AON_SYSCTL_O_RESETCTL   0x00000004  // Reset management 
#define AON_SYSCTL_O_SLEEPCTL   0x00000008  // Sleep mode register 
#define AON_SYSCTL_O_DBG        0x0000000C  // Debug register 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_SYSCTL_O_PWRCTL register.
//
//*****************************************************************************
#define AON_SYSCTL_PWRCTL_VDDS3_IOSEG_EN_SET \
                                0x00000800  // VDDS3 I/O segment enable 0: No 
                                            // effect 1: Enable VDDS3 I/O 
                                            // Segment 

#define AON_SYSCTL_PWRCTL_VDDS3_IOSEG_EN_SET_M \
                                0x00000800
#define AON_SYSCTL_PWRCTL_VDDS3_IOSEG_EN_SET_S 11
#define AON_SYSCTL_PWRCTL_VDDS2_IOSEG_EN_SET \
                                0x00000400  // VDDS2 I/O segment enable 0: No 
                                            // effect 1: Enable VDDS2 I/O 
                                            // Segment 

#define AON_SYSCTL_PWRCTL_VDDS2_IOSEG_EN_SET_M \
                                0x00000400
#define AON_SYSCTL_PWRCTL_VDDS2_IOSEG_EN_SET_S 10
#define AON_SYSCTL_PWRCTL_VDDS3_IOSEG_EN_CLR \
                                0x00000200  // VDDS3 I/O segment disable 0: No 
                                            // effect 1: Disable VDDS3 I/O 
                                            // Segment 

#define AON_SYSCTL_PWRCTL_VDDS3_IOSEG_EN_CLR_M \
                                0x00000200
#define AON_SYSCTL_PWRCTL_VDDS3_IOSEG_EN_CLR_S 9
#define AON_SYSCTL_PWRCTL_VDDS2_IOSEG_EN_CLR \
                                0x00000100  // VDDS2 I/O segment disable 0: No 
                                            // effect 1: Disable VDDS2 I/O 
                                            // Segment 

#define AON_SYSCTL_PWRCTL_VDDS2_IOSEG_EN_CLR_M \
                                0x00000100
#define AON_SYSCTL_PWRCTL_VDDS2_IOSEG_EN_CLR_S 8
#define AON_SYSCTL_PWRCTL_DCDC_ACTIVE \
                                0x00000004  // Select if DCDC is used in 
                                            // active mode 0: Do not use DCDC 
                                            // in active mode. 1: Use DCDC in 
                                            // active mode. 

#define AON_SYSCTL_PWRCTL_DCDC_ACTIVE_M \
                                0x00000004
#define AON_SYSCTL_PWRCTL_DCDC_ACTIVE_S 2
#define AON_SYSCTL_PWRCTL_EXT_REG_MODE \
                                0x00000002  // Status of source for VDDR 
                                            // supply: 0: DCDC/GLDO are 
                                            // generating VDDR 1: DCDC/GLDO are 
                                            // bypassed, external regulator 
                                            // supplies VDDR 

#define AON_SYSCTL_PWRCTL_EXT_REG_MODE_M \
                                0x00000002
#define AON_SYSCTL_PWRCTL_EXT_REG_MODE_S 1
#define AON_SYSCTL_PWRCTL_DCDC_EN \
                                0x00000001  // Controls use if DCDC during 
                                            // recharge,- ie when going from 
                                            // Powerdown to Active due to a 
                                            // wakeup or recharge request 0: 
                                            // Use GLDO 1: Use DCDC 

#define AON_SYSCTL_PWRCTL_DCDC_EN_M \
                                0x00000001
#define AON_SYSCTL_PWRCTL_DCDC_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_SYSCTL_O_RESETCTL register.
//
//*****************************************************************************
#define AON_SYSCTL_RESETCTL_SYSRESET \
                                0x80000000  // Cold reset register 1: Generate 
                                            // system reset. Appears as 
                                            // SYSRESET in resetsrc. 

#define AON_SYSCTL_RESETCTL_SYSRESET_M \
                                0x80000000
#define AON_SYSCTL_RESETCTL_SYSRESET_S 31
#define AON_SYSCTL_RESETCTL_VDDS_LOSS_EN_OVR \
                                0x00000800  // Override of VDDSLOSSEN 0: Brown 
                                            // out detect of VDDS is ignored, 
                                            // unless VDDSLOSSEN=1 1: Brown out 
                                            // detect of VDDS generates system 
                                            // reset This bit can be locked 

#define AON_SYSCTL_RESETCTL_VDDS_LOSS_EN_OVR_M \
                                0x00000800
#define AON_SYSCTL_RESETCTL_VDDS_LOSS_EN_OVR_S 11
#define AON_SYSCTL_RESETCTL_VDDR_LOSS_EN_OVR \
                                0x00000400  // Override of VDDRLOSSEN 0: Brown 
                                            // out detect of VDDR is ignored, 
                                            // unless VDDRLOSSEN=1 1: Brown out 
                                            // detect of VDDR generates system 
                                            // reset This bit can be locked 

#define AON_SYSCTL_RESETCTL_VDDR_LOSS_EN_OVR_M \
                                0x00000400
#define AON_SYSCTL_RESETCTL_VDDR_LOSS_EN_OVR_S 10
#define AON_SYSCTL_RESETCTL_VDD_LOSS_EN_OVR \
                                0x00000200  // Override of VDDLOSSEN 0: Brown 
                                            // out detect of VDD is ignored, 
                                            // unless VDDLOSSEN=1 1: Brown out 
                                            // detect of VDD generates system 
                                            // reset This bit can be locked 

#define AON_SYSCTL_RESETCTL_VDD_LOSS_EN_OVR_M \
                                0x00000200
#define AON_SYSCTL_RESETCTL_VDD_LOSS_EN_OVR_S 9
#define AON_SYSCTL_RESETCTL_VDDS_LOSS_EN \
                                0x00000080  // Controls reset generation in 
                                            // case VDDS is lost 0: Brown out 
                                            // detect of VDDS is ignored, 
                                            // unless VDDSLOSSENOR=1 1: Brown 
                                            // out detect of VDDS generates 
                                            // system reset 

#define AON_SYSCTL_RESETCTL_VDDS_LOSS_EN_M \
                                0x00000080
#define AON_SYSCTL_RESETCTL_VDDS_LOSS_EN_S 7
#define AON_SYSCTL_RESETCTL_VDDR_LOSS_EN \
                                0x00000040  // Controls reset generation in 
                                            // case VDDR is lost 0: Brown out 
                                            // detect of VDDR is ignored, 
                                            // unless VDDRLOSSENOR=1 1: Brown 
                                            // out detect of VDDR generates 
                                            // system reset 

#define AON_SYSCTL_RESETCTL_VDDR_LOSS_EN_M \
                                0x00000040
#define AON_SYSCTL_RESETCTL_VDDR_LOSS_EN_S 6
#define AON_SYSCTL_RESETCTL_VDD_LOSS_EN \
                                0x00000020  // Controls reset generation in 
                                            // case VDD is lost 0: Brown out 
                                            // detect of VDD is ignored, unless 
                                            // VDDLOSSENOR=1 1: Brown out 
                                            // detect of VDD generates system 
                                            // reset 

#define AON_SYSCTL_RESETCTL_VDD_LOSS_EN_M \
                                0x00000020
#define AON_SYSCTL_RESETCTL_VDD_LOSS_EN_S 5
#define AON_SYSCTL_RESETCTL_CLK_LOSS_EN \
                                0x00000010  // Controls reset generation in 
                                            // case lf clock is lost. Note: 
                                            // CLKLOSS should be disabled while 
                                            // LF clock is changing source. 0: 
                                            // Clock loss is ignored, unless 
                                            // CLKLOSSENOR=1 1: Clock loss 
                                            // generates system reset 

#define AON_SYSCTL_RESETCTL_CLK_LOSS_EN_M \
                                0x00000010
#define AON_SYSCTL_RESETCTL_CLK_LOSS_EN_S 4
#define AON_SYSCTL_RESETCTL_RESET_SRC_M \
                                0x0000000E  // Shows the source of the last 
                                            // system reset: NB: latched after 
                                            // reset, hence must be cleared to 
                                            // be prepared to latch the source 
                                            // of a subsequent reset 

#define AON_SYSCTL_RESETCTL_RESET_SRC_S 1
#define AON_SYSCTL_RESETCTL_RESET_SRC_PWR_ON \
                                0x00000000  // Power on reset 
#define AON_SYSCTL_RESETCTL_RESET_SRC_PIN_RESET \
                                0x00000002  // Reset pin 
#define AON_SYSCTL_RESETCTL_RESET_SRC_VDDS_LOSS \
                                0x00000004  // Brown out detect on VDDS 
#define AON_SYSCTL_RESETCTL_RESET_SRC_VDD_LOSS \
                                0x00000006  // Brown out detect on VDD 
#define AON_SYSCTL_RESETCTL_RESET_SRC_VDDR_LOSS \
                                0x00000008  // Brown out detect on VDDR 
#define AON_SYSCTL_RESETCTL_RESET_SRC_CLK_LOSS \
                                0x0000000A  // Clock loss detect 
#define AON_SYSCTL_RESETCTL_RESET_SRC_SHUTDOWN \
                                0x0000000C  // Woke up from shutdown 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_SYSCTL_O_SLEEPCTL register.
//
//*****************************************************************************
#define AON_SYSCTL_SLEEPCTL_IO_PAD_SLEEP_DIS \
                                0x00000001  // Controls the I/O pad sleep 
                                            // mode: 0: I/O pad sleep mode is 
                                            // enabled 1: I/O pad sleep mode is 
                                            // disabled 

#define AON_SYSCTL_SLEEPCTL_IO_PAD_SLEEP_DIS_M \
                                0x00000001
#define AON_SYSCTL_SLEEPCTL_IO_PAD_SLEEP_DIS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_SYSCTL_O_DBG register.
//
//*****************************************************************************


#endif // __HW_AON_SYSCTL_H__

