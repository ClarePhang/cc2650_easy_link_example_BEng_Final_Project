
/******************************************************************************
*  Filename:       hw_trng.h
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
#ifndef __HW_TRNG_H__
#define __HW_TRNG_H__

//*****************************************************************************
//
// The following are defines for the TRNG register offsets.
//
//*****************************************************************************
#define TRNG_O_OUT0             0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_OUT1             0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_IRQFLAGSTAT      0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_IRQFLAGMASK      0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_IRQFLAGCLR       0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_CTL              0x00000014  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_CFG0             0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_ALARMCNT         0x0000001C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_FROEN            0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_FRODETUNE        0x00000024  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_ALARMMASK        0x00000028  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_ALARMSTOP        0x0000002C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_LFSR0            0x00000030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_LFSR1            0x00000034  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_LFSR2            0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_TESTCNT          0x0000003C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_TEST             0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_HWOPT            0x00000078  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_HWVER0           0x0000007C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_IRQTESTEN        0x00001FD8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_HWVER1           0x00001FE0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_CFG1             0x00001FE4  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_IRQTESTSET       0x00001FEC  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_SWRESET          0x00001FF0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_IRQTESTCLR       0x00001FF4  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_IRQSTAT          0x00001FF8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_O_IRQEN            0x00001FFC  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 


//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_OUT0 register.
//
//*****************************************************************************
#define TRNG_OUT0_VALUE_31_0_M  0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_OUT0_VALUE_31_0_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_OUT1 register.
//
//*****************************************************************************
#define TRNG_OUT1_VALUE_63_32_M 0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_OUT1_VALUE_63_32_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// TRNG_O_IRQFLAGSTAT register.
//
//*****************************************************************************
#define TRNG_IRQFLAGSTAT_NEED_CLOCK \
                                0x80000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_IRQFLAGSTAT_NEED_CLOCK_M \
                                0x80000000
#define TRNG_IRQFLAGSTAT_NEED_CLOCK_S 31
#define TRNG_IRQFLAGSTAT_SHUTDOWN_OVF \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_IRQFLAGSTAT_SHUTDOWN_OVF_M \
                                0x00000002
#define TRNG_IRQFLAGSTAT_SHUTDOWN_OVF_S 1
#define TRNG_IRQFLAGSTAT_RDY    0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_IRQFLAGSTAT_RDY_M  0x00000001
#define TRNG_IRQFLAGSTAT_RDY_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// TRNG_O_IRQFLAGMASK register.
//
//*****************************************************************************
#define TRNG_IRQFLAGMASK_SHUTDOWN_OVF \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_IRQFLAGMASK_SHUTDOWN_OVF_M \
                                0x00000002
#define TRNG_IRQFLAGMASK_SHUTDOWN_OVF_S 1
#define TRNG_IRQFLAGMASK_RDY    0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_IRQFLAGMASK_RDY_M  0x00000001
#define TRNG_IRQFLAGMASK_RDY_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// TRNG_O_IRQFLAGCLR register.
//
//*****************************************************************************
#define TRNG_IRQFLAGCLR_SHUTDOWN_OVF \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_IRQFLAGCLR_SHUTDOWN_OVF_M \
                                0x00000002
#define TRNG_IRQFLAGCLR_SHUTDOWN_OVF_S 1
#define TRNG_IRQFLAGCLR_RDY     0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_IRQFLAGCLR_RDY_M   0x00000001
#define TRNG_IRQFLAGCLR_RDY_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_CTL register.
//
//*****************************************************************************
#define TRNG_CTL_STARTUP_CYCLES_M \
                                0xFFFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_CTL_STARTUP_CYCLES_S 16
#define TRNG_CTL_TRNG_EN        0x00000400  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_CTL_TRNG_EN_M      0x00000400
#define TRNG_CTL_TRNG_EN_S      10
#define TRNG_CTL_NO_LFSR_FB     0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_CTL_NO_LFSR_FB_M   0x00000004
#define TRNG_CTL_NO_LFSR_FB_S   2
#define TRNG_CTL_TEST_MODE      0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_CTL_TEST_MODE_M    0x00000002
#define TRNG_CTL_TEST_MODE_S    1
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_CFG0 register.
//
//*****************************************************************************
#define TRNG_CFG0_MAX_REFILL_CYCLES_M \
                                0xFFFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_CFG0_MAX_REFILL_CYCLES_S 16
#define TRNG_CFG0_SMPL_DIV_M    0x00000F00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_CFG0_SMPL_DIV_S    8
#define TRNG_CFG0_MIN_REFILL_CYCLES_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_CFG0_MIN_REFILL_CYCLES_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// TRNG_O_ALARMCNT register.
//
//*****************************************************************************
#define TRNG_ALARMCNT_SHUTDOWN_CNT_M \
                                0x3F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_ALARMCNT_SHUTDOWN_CNT_S 24
#define TRNG_ALARMCNT_SHUTDOWN_THR_M \
                                0x001F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_ALARMCNT_SHUTDOWN_THR_S 16
#define TRNG_ALARMCNT_ALARM_THR_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_ALARMCNT_ALARM_THR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_FROEN register.
//
//*****************************************************************************
#define TRNG_FROEN_FRO_MASK_M   0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_FROEN_FRO_MASK_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// TRNG_O_FRODETUNE register.
//
//*****************************************************************************
#define TRNG_FRODETUNE_FRO_MASK_M \
                                0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_FRODETUNE_FRO_MASK_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// TRNG_O_ALARMMASK register.
//
//*****************************************************************************
#define TRNG_ALARMMASK_FRO_MASK_M \
                                0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_ALARMMASK_FRO_MASK_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// TRNG_O_ALARMSTOP register.
//
//*****************************************************************************
#define TRNG_ALARMSTOP_FRO_FLAGS_M \
                                0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_ALARMSTOP_FRO_FLAGS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_LFSR0 register.
//
//*****************************************************************************
#define TRNG_LFSR0_LFSR_31_0_M  0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_LFSR0_LFSR_31_0_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_LFSR1 register.
//
//*****************************************************************************
#define TRNG_LFSR1_LFSR_63_32_M 0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_LFSR1_LFSR_63_32_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_LFSR2 register.
//
//*****************************************************************************
#define TRNG_LFSR2_LFSR_80_64_M 0x0001FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_LFSR2_LFSR_80_64_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_TESTCNT register.
//
//*****************************************************************************
#define TRNG_TESTCNT_SMPL_CNT_M 0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_TESTCNT_SMPL_CNT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_TEST register.
//
//*****************************************************************************
#define TRNG_TEST_PATT_M        0x0FFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_TEST_PATT_S        16
#define TRNG_TEST_FRO_SEL_M     0x00001F00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_TEST_FRO_SEL_S     8
#define TRNG_TEST_PATT_DET      0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_TEST_PATT_DET_M    0x00000004
#define TRNG_TEST_PATT_DET_S    2
#define TRNG_TEST_PATT_FRO      0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_TEST_PATT_FRO_M    0x00000002
#define TRNG_TEST_PATT_FRO_S    1
#define TRNG_TEST_EN_OUT        0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_TEST_EN_OUT_M      0x00000001
#define TRNG_TEST_EN_OUT_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_HWOPT register.
//
//*****************************************************************************
#define TRNG_HWOPT_NR_OF_FROS_M 0x00000FC0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_HWOPT_NR_OF_FROS_S 6
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_HWVER0 register.
//
//*****************************************************************************
#define TRNG_HWVER0_HW_MAJOR_VER_M \
                                0x0F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_HWVER0_HW_MAJOR_VER_S 24
#define TRNG_HWVER0_HW_MINOR_VER_M \
                                0x00F00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_HWVER0_HW_MINOR_VER_S 20
#define TRNG_HWVER0_HW_PATCH_LVL_M \
                                0x000F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_HWVER0_HW_PATCH_LVL_S 16
#define TRNG_HWVER0_EIP_NUM_COMPL_M \
                                0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_HWVER0_EIP_NUM_COMPL_S 8
#define TRNG_HWVER0_EIP_NUM_M   0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_HWVER0_EIP_NUM_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// TRNG_O_IRQTESTEN register.
//
//*****************************************************************************
#define TRNG_IRQTESTEN_SHUTDOWN_OVF \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_IRQTESTEN_SHUTDOWN_OVF_M \
                                0x00000002
#define TRNG_IRQTESTEN_SHUTDOWN_OVF_S 1
#define TRNG_IRQTESTEN_RDY      0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_IRQTESTEN_RDY_M    0x00000001
#define TRNG_IRQTESTEN_RDY_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_HWVER1 register.
//
//*****************************************************************************
#define TRNG_HWVER1_REV_M       0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_HWVER1_REV_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_CFG1 register.
//
//*****************************************************************************
#define TRNG_CFG1_IDLE_TYPE_M   0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_CFG1_IDLE_TYPE_S   3
#define TRNG_CFG1_AUTO_IDLE     0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_CFG1_AUTO_IDLE_M   0x00000001
#define TRNG_CFG1_AUTO_IDLE_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// TRNG_O_IRQTESTSET register.
//
//*****************************************************************************
#define TRNG_IRQTESTSET_SW_IRQ_M \
                                0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_IRQTESTSET_SW_IRQ_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_SWRESET register.
//
//*****************************************************************************
#define TRNG_SWRESET_RESET      0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_SWRESET_RESET_M    0x00000001
#define TRNG_SWRESET_RESET_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// TRNG_O_IRQTESTCLR register.
//
//*****************************************************************************
#define TRNG_IRQTESTCLR_PULSE_IRQ_CLR \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define TRNG_IRQTESTCLR_PULSE_IRQ_CLR_M \
                                0x00000001
#define TRNG_IRQTESTCLR_PULSE_IRQ_CLR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_IRQSTAT register.
//
//*****************************************************************************
#define TRNG_IRQSTAT_STAT       0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_IRQSTAT_STAT_M     0x00000001
#define TRNG_IRQSTAT_STAT_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the TRNG_O_IRQEN register.
//
//*****************************************************************************
#define TRNG_IRQEN_EN           0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define TRNG_IRQEN_EN_M         0x00000001
#define TRNG_IRQEN_EN_S         0


#endif // __HW_TRNG_H__

