
/******************************************************************************
*  Filename:       hw_aon_batmon.h
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
#ifndef __HW_AON_BATMON_H__
#define __HW_AON_BATMON_H__

//*****************************************************************************
//
// The following are defines for the AON_BATMON register offsets.
//
//*****************************************************************************
#define AON_BATMON_O_CTL        0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_MEASCFG    0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_COMPTEST   0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_TEMPP0     0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_TEMPP1     0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_TEMPP2     0x00000014  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_BATMONP0   0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_BATMONP1   0x0000001C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_IOSTRP0    0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_FLASHPUMPP0 \
                                0x00000024  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_O_BAT        0x00000028  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_BATUPD     0x0000002C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_TEMP       0x00000030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_TEMPUPD    0x00000034  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_COMPTESTOUT \
                                0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_O_IOSTRSTAT  0x0000003C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_FLASHVSTAT 0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_O_SARSTAT    0x00000044  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_CTL register.
//
//*****************************************************************************
#define AON_BATMON_CTL_CALC_EN  0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_CTL_CALC_EN_M \
                                0x00000002
#define AON_BATMON_CTL_CALC_EN_S 1
#define AON_BATMON_CTL_MEAS_EN  0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_CTL_MEAS_EN_M \
                                0x00000001
#define AON_BATMON_CTL_MEAS_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_MEASCFG register.
//
//*****************************************************************************
#define AON_BATMON_MEASCFG_PER_M \
                                0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_MEASCFG_PER_S 0
#define AON_BATMON_MEASCFG_PER_CONT \
                                0x00000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_MEASCFG_PER_8CYC \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_MEASCFG_PER_16CYC \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_MEASCFG_PER_32CYC \
                                0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_COMPTEST register.
//
//*****************************************************************************
#define AON_BATMON_COMPTEST_EN  0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_COMPTEST_EN_M \
                                0x00000001
#define AON_BATMON_COMPTEST_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_TEMPP0 register.
//
//*****************************************************************************
#define AON_BATMON_TEMPP0_CFG_M 0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_TEMPP0_CFG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_TEMPP1 register.
//
//*****************************************************************************
#define AON_BATMON_TEMPP1_CFG_M 0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_TEMPP1_CFG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_TEMPP2 register.
//
//*****************************************************************************
#define AON_BATMON_TEMPP2_CFG_M 0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_TEMPP2_CFG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_BATMONP0 register.
//
//*****************************************************************************
#define AON_BATMON_BATMONP0_CFG_M \
                                0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_BATMONP0_CFG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_BATMONP1 register.
//
//*****************************************************************************
#define AON_BATMON_BATMONP1_CFG_M \
                                0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_BATMONP1_CFG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_IOSTRP0 register.
//
//*****************************************************************************
#define AON_BATMON_IOSTRP0_CFG2_M \
                                0x00000030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_IOSTRP0_CFG2_S 4
#define AON_BATMON_IOSTRP0_CFG1_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_IOSTRP0_CFG1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_FLASHPUMPP0 register.
//
//*****************************************************************************
#define AON_BATMON_FLASHPUMPP0_OVR \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_FLASHPUMPP0_OVR_M \
                                0x00000010
#define AON_BATMON_FLASHPUMPP0_OVR_S 4
#define AON_BATMON_FLASHPUMPP0_HYSTERESIS \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_FLASHPUMPP0_HYSTERESIS_M \
                                0x00000008
#define AON_BATMON_FLASHPUMPP0_HYSTERESIS_S 3
#define AON_BATMON_FLASHPUMPP0_CFG_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_FLASHPUMPP0_CFG_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_BAT register.
//
//*****************************************************************************
#define AON_BATMON_BAT_INT_M    0x00000700  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_BAT_INT_S    8
#define AON_BATMON_BAT_FRAC_M   0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_BAT_FRAC_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_BATUPD register.
//
//*****************************************************************************
#define AON_BATMON_BATUPD_STAT  0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_BATUPD_STAT_M \
                                0x00000001
#define AON_BATMON_BATUPD_STAT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_TEMP register.
//
//*****************************************************************************
#define AON_BATMON_TEMP_INT_M   0x0001FF00  // Integer part (signed) of 
                                            // temperature value. Total value = 
                                            // INTEGER + FRACTIONAL 2's 
                                            // complement encoding 0xFF: Min 
                                            // value 0xD8: -40C 0x00: 0C 0x1B: 
                                            // 27C 0x55: 85C 0x7F: Max value 
#define AON_BATMON_TEMP_INT_S   8
#define AON_BATMON_TEMP_FRAC_M  0x000000C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_TEMP_FRAC_S  6
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_TEMPUPD register.
//
//*****************************************************************************
#define AON_BATMON_TEMPUPD_STAT 0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define AON_BATMON_TEMPUPD_STAT_M \
                                0x00000001
#define AON_BATMON_TEMPUPD_STAT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_COMPTESTOUT register.
//
//*****************************************************************************
#define AON_BATMON_COMPTESTOUT_STAT \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_COMPTESTOUT_STAT_M \
                                0x00000001
#define AON_BATMON_COMPTESTOUT_STAT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_IOSTRSTAT register.
//
//*****************************************************************************
#define AON_BATMON_IOSTRSTAT_GRAY_CODE_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_IOSTRSTAT_GRAY_CODE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_FLASHVSTAT register.
//
//*****************************************************************************
#define AON_BATMON_FLASHVSTAT_ABOVE_3P0V \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_FLASHVSTAT_ABOVE_3P0V_M \
                                0x00000008
#define AON_BATMON_FLASHVSTAT_ABOVE_3P0V_S 3
#define AON_BATMON_FLASHVSTAT_ABOVE_2P4V \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_FLASHVSTAT_ABOVE_2P4V_M \
                                0x00000004
#define AON_BATMON_FLASHVSTAT_ABOVE_2P4V_S 2
#define AON_BATMON_FLASHVSTAT_ABOVE_2P1V \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_FLASHVSTAT_ABOVE_2P1V_M \
                                0x00000002
#define AON_BATMON_FLASHVSTAT_ABOVE_2P1V_S 1
#define AON_BATMON_FLASHVSTAT_ABOVE_1P7V \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_FLASHVSTAT_ABOVE_1P7V_M \
                                0x00000001
#define AON_BATMON_FLASHVSTAT_ABOVE_1P7V_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_BATMON_O_SARSTAT register.
//
//*****************************************************************************
#define AON_BATMON_SARSTAT_SEARCH_DONE \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define AON_BATMON_SARSTAT_SEARCH_DONE_M \
                                0x00000001
#define AON_BATMON_SARSTAT_SEARCH_DONE_S 0


#endif // __HW_AON_BATMON_H__

