
/******************************************************************************
*  Filename:       hw_vims.h
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
#ifndef __HW_VIMS_H__
#define __HW_VIMS_H__

//*****************************************************************************
//
// The following are defines for the VIMS register offsets.
//
//*****************************************************************************
#define VIMS_O_STAT             0x00000000  // VIMS status 
#define VIMS_O_CTL              0x00000004  // VIMS control 
#define VIMS_O_STATS0           0x00000100  // Cache statistics 
#define VIMS_O_STATS1           0x00000104  // Cache statistics 
#define VIMS_O_STATS2           0x00000108  // Cache statistics 
#define VIMS_O_STATS3           0x0000010C  // Cache statistics 
#define VIMS_O_STATS4           0x00000110  // Cache statistics 
#define VIMS_O_STATS5           0x00000114  // Cache statistics 


//*****************************************************************************
//
// The following are defines for the bit fields in the VIMS_O_STAT register.
//
//*****************************************************************************
#define VIMS_STAT_SYSBUS_LB_DIS 0x00000010  // 0: Sysbus flash line buffer is 
                                            // enabled or in transition to 
                                            // disabled 1: Sysbus flash line 
                                            // buffer is disabled and flushed 
#define VIMS_STAT_SYSBUS_LB_DIS_M \
                                0x00000010
#define VIMS_STAT_SYSBUS_LB_DIS_S 4
#define VIMS_STAT_MODE_CHANGING 0x00000008  // 0: VIMS is in the mode defined 
                                            // by MODE 1: VIMS is in the 
                                            // process of changing to the mode 
                                            // given in CONTROL.MODE 
#define VIMS_STAT_MODE_CHANGING_M \
                                0x00000008
#define VIMS_STAT_MODE_CHANGING_S 3
#define VIMS_STAT_INV           0x00000004  // 0: No invalidation 1: 
                                            // Invalidation in progress 
#define VIMS_STAT_INV_M         0x00000004
#define VIMS_STAT_INV_S         2
#define VIMS_STAT_MODE_M        0x00000003  // Current VIMS mode 
#define VIMS_STAT_MODE_S        0
#define VIMS_STAT_MODE_GPRAM    0x00000000  // VIMS Disabled mode 
#define VIMS_STAT_MODE_CACHE    0x00000001  // VIMS Enabled mode 
#define VIMS_STAT_MODE_SPLIT    0x00000002  // VIMS Split mode 
#define VIMS_STAT_MODE_OFF      0x00000003  // VIMS Off mode 
//*****************************************************************************
//
// The following are defines for the bit fields in the VIMS_O_CTL register.
//
//*****************************************************************************
#define VIMS_CTL_STATS_CLR      0x80000000  // Set to clear statistic 
                                            // counters. 
#define VIMS_CTL_STATS_CLR_M    0x80000000
#define VIMS_CTL_STATS_CLR_S    31
#define VIMS_CTL_STATS_EN       0x40000000  // Set to enable statistic 
                                            // counters. 
#define VIMS_CTL_STATS_EN_M     0x40000000
#define VIMS_CTL_STATS_EN_S     30
#define VIMS_CTL_SYSBUS_LB_DIS  0x00000010  // 0: Sysbus flash line buffer 
                                            // enable request 1: Sysbus flash 
                                            // line buffer disable request 
#define VIMS_CTL_SYSBUS_LB_DIS_M \
                                0x00000010
#define VIMS_CTL_SYSBUS_LB_DIS_S 4
#define VIMS_CTL_ARB_CFG        0x00000008  // icode/dcode and sysbus 
                                            // arbitation 0: Static arbitration 
                                            // (icode/docde > sysbus) 1: 
                                            // Round-robin arbitration 
#define VIMS_CTL_ARB_CFG_M      0x00000008
#define VIMS_CTL_ARB_CFG_S      3
#define VIMS_CTL_PREF_EN        0x00000004  // 0: Tag prefetch disabled 1: Tag 
                                            // prefetch enabled 
#define VIMS_CTL_PREF_EN_M      0x00000004
#define VIMS_CTL_PREF_EN_S      2
#define VIMS_CTL_MODE_M         0x00000003  // VIMS mode request 
#define VIMS_CTL_MODE_S         0
#define VIMS_CTL_MODE_GPRAM     0x00000000  // VIMS Disabled mode 
#define VIMS_CTL_MODE_CACHE     0x00000001  // VIMS Enabled mode 
#define VIMS_CTL_MODE_SPLIT     0x00000002  // VIMS Split mode 
#define VIMS_CTL_MODE_OFF       0x00000003  // VIMS Off mode 
//*****************************************************************************
//
// The following are defines for the bit fields in the VIMS_O_STATS0 register.
//
//*****************************************************************************
#define VIMS_STATS0_HIT_M       0xFFFFFFFF  // Cache hit counter (not incuding 
                                            // cache line bufffer accesses) 
                                            // Enabled by setting 
                                            // CONTROLL.ENSTAT Cleared by 
                                            // setting CONTROL.CLRSTAT 
#define VIMS_STATS0_HIT_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the VIMS_O_STATS1 register.
//
//*****************************************************************************
#define VIMS_STATS1_MISS_M      0xFFFFFFFF  // Cache miss counter (not 
                                            // incuding cache line bufffer 
                                            // accesses) Enabled by setting 
                                            // CONTROL.ENSTAT Cleared by 
                                            // setting CONTROL.CLRSTAT 
#define VIMS_STATS1_MISS_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the VIMS_O_STATS2 register.
//
//*****************************************************************************
#define VIMS_STATS2_LB_HIT_M    0xFFFFFFFF  // Cache line buffer hit counter 
                                            // Enabled by setting 
                                            // CONTROL.ENSTAT Cleared by 
                                            // setting CONTROL.CLRSTAT 
#define VIMS_STATS2_LB_HIT_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the VIMS_O_STATS3 register.
//
//*****************************************************************************
#define VIMS_STATS3_PREF_HIT_M  0xFFFFFFFF  // Tag prefetch hit counter 
                                            // Enabled by setting 
                                            // CONTROL.ENSTAT Cleared by 
                                            // setting CONTROL.CLRSTAT 
#define VIMS_STATS3_PREF_HIT_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the VIMS_O_STATS4 register.
//
//*****************************************************************************
#define VIMS_STATS4_ICODE_STALL_M \
                                0xFFFFFFFF  // Icode stall counter Enabled by 
                                            // setting CONTROL.ENSTAT Cleared 
                                            // by setting CONTROL.CLRSTAT 

#define VIMS_STATS4_ICODE_STALL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the VIMS_O_STATS5 register.
//
//*****************************************************************************
#define VIMS_STATS5_DCODE_STALL_M \
                                0xFFFFFFFF  // Dcode stall counter Enabled by 
                                            // setting CONTROL.ENSTAT Cleared 
                                            // by setting CONTROL.CLRSTAT 

#define VIMS_STATS5_DCODE_STALL_S 0


#endif // __HW_VIMS_H__

