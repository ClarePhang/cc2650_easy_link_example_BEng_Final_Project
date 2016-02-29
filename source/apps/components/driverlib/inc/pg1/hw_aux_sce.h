
/******************************************************************************
*  Filename:       hw_aux_sce.h
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
#ifndef __HW_AUX_SCE_H__
#define __HW_AUX_SCE_H__

//*****************************************************************************
//
// The following are defines for the AUX_SCE register offsets.
//
//*****************************************************************************
#define AUX_SCE_O_CTL           0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_O_FETCHSTAT     0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_O_CPUSTAT       0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_O_WUSTAT        0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_O_REG1_0        0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_O_REG3_2        0x00000014  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_O_REG5_4        0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_O_REG7_6        0x0000001C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_O_LOOPADDR      0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_O_LOOPCNT       0x00000024  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 


//*****************************************************************************
//
// The following are defines for the bit fields in the AUX_SCE_O_CTL register.
//
//*****************************************************************************
#define AUX_SCE_CTL_FORCE_EV_LOW_M \
                                0xFF000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_CTL_FORCE_EV_LOW_S 24
#define AUX_SCE_CTL_FORCE_EV_HIGH_M \
                                0x00FF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_CTL_FORCE_EV_HIGH_S 16
#define AUX_SCE_CTL_RESET_VECTOR_M \
                                0x00000F00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_CTL_RESET_VECTOR_S 8
#define AUX_SCE_CTL_DBG_FREEZE_EN \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_CTL_DBG_FREEZE_EN_M \
                                0x00000040
#define AUX_SCE_CTL_DBG_FREEZE_EN_S 6
#define AUX_SCE_CTL_FORCE_WU_LOW \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_CTL_FORCE_WU_LOW_M \
                                0x00000020
#define AUX_SCE_CTL_FORCE_WU_LOW_S 5
#define AUX_SCE_CTL_FORCE_WU_HIGH \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_CTL_FORCE_WU_HIGH_M \
                                0x00000010
#define AUX_SCE_CTL_FORCE_WU_HIGH_S 4
#define AUX_SCE_CTL_RESTART     0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_CTL_RESTART_M   0x00000008
#define AUX_SCE_CTL_RESTART_S   3
#define AUX_SCE_CTL_SINGLE_STEP 0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_CTL_SINGLE_STEP_M \
                                0x00000004
#define AUX_SCE_CTL_SINGLE_STEP_S 2
#define AUX_SCE_CTL_SUSPEND     0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_CTL_SUSPEND_M   0x00000002
#define AUX_SCE_CTL_SUSPEND_S   1
#define AUX_SCE_CTL_CLK_EN      0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_CTL_CLK_EN_M    0x00000001
#define AUX_SCE_CTL_CLK_EN_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SCE_O_FETCHSTAT register.
//
//*****************************************************************************
#define AUX_SCE_FETCHSTAT_OPCODE_M \
                                0xFFFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_FETCHSTAT_OPCODE_S 16
#define AUX_SCE_FETCHSTAT_PC_M  0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_FETCHSTAT_PC_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SCE_O_CPUSTAT register.
//
//*****************************************************************************
#define AUX_SCE_CPUSTAT_BUS_ERROR \
                                0x00000800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_CPUSTAT_BUS_ERROR_M \
                                0x00000800
#define AUX_SCE_CPUSTAT_BUS_ERROR_S 11
#define AUX_SCE_CPUSTAT_SLEEP   0x00000400  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_CPUSTAT_SLEEP_M 0x00000400
#define AUX_SCE_CPUSTAT_SLEEP_S 10
#define AUX_SCE_CPUSTAT_WEV     0x00000200  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_CPUSTAT_WEV_M   0x00000200
#define AUX_SCE_CPUSTAT_WEV_S   9
#define AUX_SCE_CPUSTAT_SELF_STOP \
                                0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_CPUSTAT_SELF_STOP_M \
                                0x00000100
#define AUX_SCE_CPUSTAT_SELF_STOP_S 8
#define AUX_SCE_CPUSTAT_V_FLAG  0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_CPUSTAT_V_FLAG_M \
                                0x00000008
#define AUX_SCE_CPUSTAT_V_FLAG_S 3
#define AUX_SCE_CPUSTAT_C_FLAG  0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_CPUSTAT_C_FLAG_M \
                                0x00000004
#define AUX_SCE_CPUSTAT_C_FLAG_S 2
#define AUX_SCE_CPUSTAT_N_FLAG  0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_CPUSTAT_N_FLAG_M \
                                0x00000002
#define AUX_SCE_CPUSTAT_N_FLAG_S 1
#define AUX_SCE_CPUSTAT_Z_FLAG  0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_CPUSTAT_Z_FLAG_M \
                                0x00000001
#define AUX_SCE_CPUSTAT_Z_FLAG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SCE_O_WUSTAT register.
//
//*****************************************************************************
#define AUX_SCE_WUSTAT_EXC_VECTOR_M \
                                0x00030000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_WUSTAT_EXC_VECTOR_S 16
#define AUX_SCE_WUSTAT_WU_SIGNAL \
                                0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_WUSTAT_WU_SIGNAL_M \
                                0x00000100
#define AUX_SCE_WUSTAT_WU_SIGNAL_S 8
#define AUX_SCE_WUSTAT_EV_SIGNALS_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_WUSTAT_EV_SIGNALS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SCE_O_REG1_0 register.
//
//*****************************************************************************
#define AUX_SCE_REG1_0_REG1_M   0xFFFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_REG1_0_REG1_S   16
#define AUX_SCE_REG1_0_REG0_M   0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_REG1_0_REG0_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SCE_O_REG3_2 register.
//
//*****************************************************************************
#define AUX_SCE_REG3_2_REG3_M   0xFFFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_REG3_2_REG3_S   16
#define AUX_SCE_REG3_2_REG2_M   0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_REG3_2_REG2_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SCE_O_REG5_4 register.
//
//*****************************************************************************
#define AUX_SCE_REG5_4_REG5_M   0xFFFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_REG5_4_REG5_S   16
#define AUX_SCE_REG5_4_REG4_M   0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_REG5_4_REG4_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SCE_O_REG7_6 register.
//
//*****************************************************************************
#define AUX_SCE_REG7_6_REG7_M   0xFFFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_REG7_6_REG7_S   16
#define AUX_SCE_REG7_6_REG6_M   0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_REG7_6_REG6_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SCE_O_LOOPADDR register.
//
//*****************************************************************************
#define AUX_SCE_LOOPADDR_STOP_M 0xFFFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AUX_SCE_LOOPADDR_STOP_S 16
#define AUX_SCE_LOOPADDR_START_M \
                                0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_LOOPADDR_START_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_SCE_O_LOOPCNT register.
//
//*****************************************************************************
#define AUX_SCE_LOOPCNT_ITER_LEFT_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AUX_SCE_LOOPCNT_ITER_LEFT_S 0


#endif // __HW_AUX_SCE_H__

