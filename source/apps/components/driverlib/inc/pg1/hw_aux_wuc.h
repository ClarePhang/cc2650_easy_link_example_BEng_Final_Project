
/******************************************************************************
*  Filename:       hw_aux_wuc.h
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
#ifndef __HW_AUX_WUC_H__
#define __HW_AUX_WUC_H__

//*****************************************************************************
//
// The following are defines for the AUX_WUC register offsets.
//
//*****************************************************************************
#define AUX_WUC_O_MODCLKEN0     0x00000000  // Clock enable for submodules of 
                                            // AUX, used by MCU. A module is 
                                            // turned on if it is enabled in 
                                            // this register or in 
                                            // MODCLKEN_AUX_CTRL. 
#define AUX_WUC_O_PWROFFREQ     0x00000004  // Power off request 
#define AUX_WUC_O_PWRDWNREQ     0x00000008  // Power down request 
#define AUX_WUC_O_PWRDWNACK     0x0000000C  // Power down acknowledge 
#define AUX_WUC_O_CLKLFREQ      0x00000010  // Low frequency clock request 
#define AUX_WUC_O_CLKLFACK      0x00000014  // Low frequency clock acknowledge 
#define AUX_WUC_O_GBIASREQ      0x00000018  // Global bias request 
#define AUX_WUC_O_GBIASACK      0x0000001C  // Global bias acknowledge 
#define AUX_WUC_O_BGAPREQ       0x00000020  // Band gap request 
#define AUX_WUC_O_BGAPACK       0x00000024  // Band gap acknowledge 
#define AUX_WUC_O_WUEVFLAGS     0x00000028  // Wake up event 
#define AUX_WUC_O_WUEVCLR       0x0000002C  // Wake up event clear 
#define AUX_WUC_O_ADCCLKCTL     0x00000030  // ADC clock control 
#define AUX_WUC_O_TDCCLKCTL     0x00000034  // TDC clock control 
#define AUX_WUC_O_REFCLKCTL     0x00000038  // Reference clock control 
#define AUX_WUC_O_RTCSUBSECINC0 0x0000003C  // Real time counter sub second 
                                            // increment, low part 
#define AUX_WUC_O_RTCSUBSECINC1 0x00000040  // Real time counter sub second 
                                            // increment, high part 
#define AUX_WUC_O_RTCSUBSECINCCTL \
                                0x00000044  // Real time counter sub second 
                                            // increment control 

#define AUX_WUC_O_MCUBUSCTL     0x00000048  // Interconnect bridge handshake 
                                            // register (request signals) 
#define AUX_WUC_O_MCUBUSSTAT    0x0000004C  // Interconnect bridge handshake 
                                            // register (status signals) 
#define AUX_WUC_O_AONCTLSTAT    0x00000050  // Reads status of AUX Control 
                                            // pins from AON 
#define AUX_WUC_O_AUXIOLATCH    0x00000054  // Controls latching of AUX IO 
                                            // signals in AON IOC 
#define AUX_WUC_O_DEFAULTALIAS  0x00000058  // Reserved for default address in 
                                            // alias table 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_MODCLKEN0 register.
//
//*****************************************************************************
#define AUX_WUC_MODCLKEN0_AUX_ADI \
                                0x00000080  // Clock for ADI Master 

#define AUX_WUC_MODCLKEN0_AUX_ADI_M \
                                0x00000080
#define AUX_WUC_MODCLKEN0_AUX_ADI_S 7
#define AUX_WUC_MODCLKEN0_AUX_ADI_DIS \
                                0x00000000  // MCU has not requested clock for 
                                            // AUX_ADI 
#define AUX_WUC_MODCLKEN0_AUX_ADI_EN \
                                0x00000080  // MCU has requested clock for 
                                            // AUX_ADI 
#define AUX_WUC_MODCLKEN0_OSCCTL \
                                0x00000040  // Clock for DDI Master 

#define AUX_WUC_MODCLKEN0_OSCCTL_M \
                                0x00000040
#define AUX_WUC_MODCLKEN0_OSCCTL_S 6
#define AUX_WUC_MODCLKEN0_OSCCTL_DIS \
                                0x00000000  // MCU has not requested clock for 
                                            // OSCCTRL 
#define AUX_WUC_MODCLKEN0_OSCCTL_EN \
                                0x00000040  // MCU has requested clock for 
                                            // OSCCTRL 
#define AUX_WUC_MODCLKEN0_TDC   0x00000020  // Clock for TDC module 
#define AUX_WUC_MODCLKEN0_TDC_M 0x00000020
#define AUX_WUC_MODCLKEN0_TDC_S 5
#define AUX_WUC_MODCLKEN0_TDC_DIS \
                                0x00000000  // MCU has not requested clock for 
                                            // TDCIF 
#define AUX_WUC_MODCLKEN0_TDC_EN \
                                0x00000020  // MCU has requested clock for 
                                            // TDCIF 
#define AUX_WUC_MODCLKEN0_SOC   0x00000010  // Clock for AUX CTRL module 
#define AUX_WUC_MODCLKEN0_SOC_M 0x00000010
#define AUX_WUC_MODCLKEN0_SOC_S 4
#define AUX_WUC_MODCLKEN0_SOC_DIS \
                                0x00000000  // MCU has not requested clock for 
                                            // SOC_AUXCTRL 
#define AUX_WUC_MODCLKEN0_SOC_EN \
                                0x00000010  // MCU has requested clock for 
                                            // SOC_AUXCTRL 
#define AUX_WUC_MODCLKEN0_TIMER 0x00000008  // Clock enable for TIMERS 
#define AUX_WUC_MODCLKEN0_TIMER_M \
                                0x00000008
#define AUX_WUC_MODCLKEN0_TIMER_S 3
#define AUX_WUC_MODCLKEN0_TIMER_DIS \
                                0x00000000  // MCU has not requested clock for 
                                            // TIMER 
#define AUX_WUC_MODCLKEN0_TIMER_EN \
                                0x00000008  // MCU has requested clock for 
                                            // TIMER 
#define AUX_WUC_MODCLKEN0_AIODIO1 \
                                0x00000004  // Clock enable for AIODIOCTRL1 

#define AUX_WUC_MODCLKEN0_AIODIO1_M \
                                0x00000004
#define AUX_WUC_MODCLKEN0_AIODIO1_S 2
#define AUX_WUC_MODCLKEN0_AIODIO1_DIS \
                                0x00000000  // MCU has not requested clock for 
                                            // AIODIOCTRL1 
#define AUX_WUC_MODCLKEN0_AIODIO1_EN \
                                0x00000004  // MCU has requested clock for 
                                            // AIODIOCTRL1 
#define AUX_WUC_MODCLKEN0_AIODIO0 \
                                0x00000002  // Clock enable for AIODIOCTRL0 

#define AUX_WUC_MODCLKEN0_AIODIO0_M \
                                0x00000002
#define AUX_WUC_MODCLKEN0_AIODIO0_S 1
#define AUX_WUC_MODCLKEN0_AIODIO0_DIS \
                                0x00000000  // MCU has not requested clock for 
                                            // AIODIOCTRL0 
#define AUX_WUC_MODCLKEN0_AIODIO0_EN \
                                0x00000002  // MCU has requested clock for 
                                            // AIODIOCTRL0 
#define AUX_WUC_MODCLKEN0_SMPH  0x00000001  // Clock enable for semaphore 
                                            // module 
#define AUX_WUC_MODCLKEN0_SMPH_M \
                                0x00000001
#define AUX_WUC_MODCLKEN0_SMPH_S 0
#define AUX_WUC_MODCLKEN0_SMPH_DIS \
                                0x00000000  // MCU has not requested clock for 
                                            // SMPH 
#define AUX_WUC_MODCLKEN0_SMPH_EN \
                                0x00000001  // MCU has requested clock for 
                                            // SMPH 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_PWROFFREQ register.
//
//*****************************************************************************
#define AUX_WUC_PWROFFREQ_REQ   0x00000001  // Power off request 0: Request to 
                                            // be powered 1: Request to be 
                                            // powered off The request will 
                                            // only be made if AUXCTRLSTAT.FON 
                                            // = 0 and ICBSTAT.IDLE=1 
#define AUX_WUC_PWROFFREQ_REQ_M 0x00000001
#define AUX_WUC_PWROFFREQ_REQ_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_PWRDWNREQ register.
//
//*****************************************************************************
#define AUX_WUC_PWRDWNREQ_REQ   0x00000001  // Power down request 0: Request 
                                            // to be in active mode 1: Request 
                                            // to be in power down mode A four 
                                            // phase handshake with 
                                            // POWERDOWNACK must be maintained. 
#define AUX_WUC_PWRDWNREQ_REQ_M 0x00000001
#define AUX_WUC_PWRDWNREQ_REQ_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_PWRDWNACK register.
//
//*****************************************************************************
#define AUX_WUC_PWRDWNACK_ACK   0x00000001  // Power down acknowledge 0: The 
                                            // AUX can assume that it is in 
                                            // active mode 1: The request for 
                                            // power down is acknowledged and 
                                            // the AUX must act like it is in 
                                            // power down mode 
#define AUX_WUC_PWRDWNACK_ACK_M 0x00000001
#define AUX_WUC_PWRDWNACK_ACK_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_CLKLFREQ register.
//
//*****************************************************************************
#define AUX_WUC_CLKLFREQ_REQ    0x00000001  // Low frequency request 0: 
                                            // Request high frequency clock 1: 
                                            // Request low frequency clock A 
                                            // four phase handshake with 
                                            // CLKLFACK must be maintained. 
#define AUX_WUC_CLKLFREQ_REQ_M  0x00000001
#define AUX_WUC_CLKLFREQ_REQ_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_CLKLFACK register.
//
//*****************************************************************************
#define AUX_WUC_CLKLFACK_ACK    0x00000001  // Acknowledge of CLKLFREQ 0: 
                                            // Acknowledge of high frequency 
                                            // clock 1: Acknowledge of low 
                                            // frequency clock 
#define AUX_WUC_CLKLFACK_ACK_M  0x00000001
#define AUX_WUC_CLKLFACK_ACK_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_GBIASREQ register.
//
//*****************************************************************************
#define AUX_WUC_GBIASREQ_REQ    0x00000001  // AUX Request for Global Bias 0: 
                                            // AUX does not need global bias 
                                            // enabled 1: AUX needs global bias 
                                            // to be enabled A four phase 
                                            // handshake with GBIASACK.ACK must 
                                            // be maintained 
#define AUX_WUC_GBIASREQ_REQ_M  0x00000001
#define AUX_WUC_GBIASREQ_REQ_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_GBIASACK register.
//
//*****************************************************************************
#define AUX_WUC_GBIASACK_ACK    0x00000001  // Acknowledge of AUX Global Bias 
                                            // request 0: Global bias is not 
                                            // ready 1: Global bias is ready 
#define AUX_WUC_GBIASACK_ACK_M  0x00000001
#define AUX_WUC_GBIASACK_ACK_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_BGAPREQ register.
//
//*****************************************************************************
#define AUX_WUC_BGAPREQ_REQ     0x00000001  // AUX Request for bandgap 
                                            // reference. 0: AUX does not need 
                                            // band gap enabled 1: AUX needs 
                                            // band gap to be enabled A four 
                                            // phase handshake with BGAPACK.ACK 
                                            // must be maintained 
#define AUX_WUC_BGAPREQ_REQ_M   0x00000001
#define AUX_WUC_BGAPREQ_REQ_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_BGAPACK register.
//
//*****************************************************************************
#define AUX_WUC_BGAPACK_ACK     0x00000001  // Acknowledge of AUX Bandgap 
                                            // Reference request. 0: Band gap 
                                            // is not ready 1: Band gap is 
                                            // ready 
#define AUX_WUC_BGAPACK_ACK_M   0x00000001
#define AUX_WUC_BGAPACK_ACK_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_WUEVFLAGS register.
//
//*****************************************************************************
#define AUX_WUC_WUEVFLAGS_AON_RTC \
                                0x00000004  // Status of the RTC wake up event 
                                            // from AON 

#define AUX_WUC_WUEVFLAGS_AON_RTC_M \
                                0x00000004
#define AUX_WUC_WUEVFLAGS_AON_RTC_S 2
#define AUX_WUC_WUEVFLAGS_AON_SW \
                                0x00000002  // Status of the SW wake up event 
                                            // from AON 

#define AUX_WUC_WUEVFLAGS_AON_SW_M \
                                0x00000002
#define AUX_WUC_WUEVFLAGS_AON_SW_S 1
#define AUX_WUC_WUEVFLAGS_AON_PROG_WU0 \
                                0x00000001  // Status of the PRG wake up event 
                                            // from AON 

#define AUX_WUC_WUEVFLAGS_AON_PROG_WU0_M \
                                0x00000001
#define AUX_WUC_WUEVFLAGS_AON_PROG_WU0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_WUEVCLR register.
//
//*****************************************************************************
#define AUX_WUC_WUEVCLR_AON_RTC 0x00000004  // 0: Don't clear the RTC wakeup 
                                            // event from AON 1: Clear the RTC 
                                            // wakeup event from AON If 
                                            // clearing event, keep this bit 
                                            // high until WUEVENT.RTC reads 
                                            // back a 0 
#define AUX_WUC_WUEVCLR_AON_RTC_M \
                                0x00000004
#define AUX_WUC_WUEVCLR_AON_RTC_S 2
#define AUX_WUC_WUEVCLR_AON_SW  0x00000002  // 0: Don't clear the SW wakeup 
                                            // event from AON 1: Clear the SW 
                                            // wakeup event from AON If 
                                            // clearing event, keep this bit 
                                            // high until WUEVENT.SW reads back 
                                            // a 0 
#define AUX_WUC_WUEVCLR_AON_SW_M \
                                0x00000002
#define AUX_WUC_WUEVCLR_AON_SW_S 1
#define AUX_WUC_WUEVCLR_AON_PROG_WU0 \
                                0x00000001  // 0: Don't clear the PRG wakeup 
                                            // event from AON 1: Clear the PRG 
                                            // wakeup event from AON If 
                                            // clearing event, keep this bit 
                                            // high until WUEVENT.PRG reads 
                                            // back a 0 

#define AUX_WUC_WUEVCLR_AON_PROG_WU0_M \
                                0x00000001
#define AUX_WUC_WUEVCLR_AON_PROG_WU0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_ADCCLKCTL register.
//
//*****************************************************************************
#define AUX_WUC_ADCCLKCTL_ACK   0x00000002  // 0: ADC clock not ready 1: ADC 
                                            // clock ready 
#define AUX_WUC_ADCCLKCTL_ACK_M 0x00000002
#define AUX_WUC_ADCCLKCTL_ACK_S 1
#define AUX_WUC_ADCCLKCTL_REQ   0x00000001  // 0: Disable the ADC clock 1: 
                                            // Enable the ADC clock 
#define AUX_WUC_ADCCLKCTL_REQ_M 0x00000001
#define AUX_WUC_ADCCLKCTL_REQ_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_TDCCLKCTL register.
//
//*****************************************************************************
#define AUX_WUC_TDCCLKCTL_ACK   0x00000002  // 0: TDC clock not ready 1: TDC 
                                            // clock ready 
#define AUX_WUC_TDCCLKCTL_ACK_M 0x00000002
#define AUX_WUC_TDCCLKCTL_ACK_S 1
#define AUX_WUC_TDCCLKCTL_REQ   0x00000001  // 0: Disable the TDC clock 1: 
                                            // Enable the TDC clock 
#define AUX_WUC_TDCCLKCTL_REQ_M 0x00000001
#define AUX_WUC_TDCCLKCTL_REQ_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_REFCLKCTL register.
//
//*****************************************************************************
#define AUX_WUC_REFCLKCTL_ACK   0x00000002  // 0: REF clock not ready 1: REF 
                                            // clock ready 
#define AUX_WUC_REFCLKCTL_ACK_M 0x00000002
#define AUX_WUC_REFCLKCTL_ACK_S 1
#define AUX_WUC_REFCLKCTL_REQ   0x00000001  // 0: Disable the REF clock 1: 
                                            // Enable the REF clock 
#define AUX_WUC_REFCLKCTL_REQ_M 0x00000001
#define AUX_WUC_REFCLKCTL_REQ_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_RTCSUBSECINC0 register.
//
//*****************************************************************************
#define AUX_WUC_RTCSUBSECINC0_INC15_0_M \
                                0x0000FFFF  // Bits 15:0 of SUBSECINC 

#define AUX_WUC_RTCSUBSECINC0_INC15_0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_RTCSUBSECINC1 register.
//
//*****************************************************************************
#define AUX_WUC_RTCSUBSECINC1_INC23_16_M \
                                0x000000FF  // Bits 23:16 of SUBSECINC 

#define AUX_WUC_RTCSUBSECINC1_INC23_16_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_RTCSUBSECINCCTL register.
//
//*****************************************************************************
#define AUX_WUC_RTCSUBSECINCCTL_UPD_ACK \
                                0x00000002  // 0: New SUBSECINC value not 
                                            // captured by AON yet 1: New 
                                            // SUBSECINC value is captured by 
                                            // AON 

#define AUX_WUC_RTCSUBSECINCCTL_UPD_ACK_M \
                                0x00000002
#define AUX_WUC_RTCSUBSECINCCTL_UPD_ACK_S 1
#define AUX_WUC_RTCSUBSECINCCTL_UPD_REQ \
                                0x00000001  // 0: SUBSECINC value invalid 1: 
                                            // SUBSECIND value is valid A four 
                                            // phase handshake must be 
                                            // maintained with 
                                            // SUBSECINC_RDY_ACK 

#define AUX_WUC_RTCSUBSECINCCTL_UPD_REQ_M \
                                0x00000001
#define AUX_WUC_RTCSUBSECINCCTL_UPD_REQ_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_MCUBUSCTL register.
//
//*****************************************************************************
#define AUX_WUC_MCUBUSCTL_DISCONNECT_REQ \
                                0x00000001  // Request for idle A four phase 
                                            // handshake must be maintained 
                                            // with IDLE and IDLE_ACK. ie don't 
                                            // set unless ICBSTAT.IDLE and 
                                            // ICBSTAT.IDLEACK are both 0. 
                                            // Don't clear unless ICBSTAT.IDLE 
                                            // and ICBSTAT.IDLEACK are both 1 

#define AUX_WUC_MCUBUSCTL_DISCONNECT_REQ_M \
                                0x00000001
#define AUX_WUC_MCUBUSCTL_DISCONNECT_REQ_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_MCUBUSSTAT register.
//
//*****************************************************************************
#define AUX_WUC_MCUBUSSTAT_DISCONNECTED \
                                0x00000002  // Indicates when idle is granted 

#define AUX_WUC_MCUBUSSTAT_DISCONNECTED_M \
                                0x00000002
#define AUX_WUC_MCUBUSSTAT_DISCONNECTED_S 1
#define AUX_WUC_MCUBUSSTAT_DISCONNECT_ACK \
                                0x00000001  // Acknowledge of idle request 

#define AUX_WUC_MCUBUSSTAT_DISCONNECT_ACK_M \
                                0x00000001
#define AUX_WUC_MCUBUSSTAT_DISCONNECT_ACK_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_AONCTLSTAT register.
//
//*****************************************************************************
#define AUX_WUC_AONCTLSTAT_AUX_FORCE_ON \
                                0x00000002  // Status of the force on input 
                                            // from AON 

#define AUX_WUC_AONCTLSTAT_AUX_FORCE_ON_M \
                                0x00000002
#define AUX_WUC_AONCTLSTAT_AUX_FORCE_ON_S 1
#define AUX_WUC_AONCTLSTAT_SCE_RUN_EN \
                                0x00000001  // Status of the flag from AON 
                                            // that there is a valid program in 
                                            // AUX memory 

#define AUX_WUC_AONCTLSTAT_SCE_RUN_EN_M \
                                0x00000001
#define AUX_WUC_AONCTLSTAT_SCE_RUN_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_AUXIOLATCH register.
//
//*****************************************************************************
#define AUX_WUC_AUXIOLATCH_EN   0x00000001  // Controls latches between AUX 
                                            // IO's and AON_IOC. The latches 
                                            // are closed by default, hence 
                                            // they must be opened prior to 
                                            // using the AIODIO module. They 
                                            // must be closed again prior to 
                                            // AUX power off request in order 
                                            // to preserve IO values on 
                                            // external pins. 
#define AUX_WUC_AUXIOLATCH_EN_M 0x00000001
#define AUX_WUC_AUXIOLATCH_EN_S 0
#define AUX_WUC_AUXIOLATCH_EN_STATIC \
                                0x00000000  // Latches are opaque ( closed ) 
#define AUX_WUC_AUXIOLATCH_EN_TRANSP \
                                0x00000001  // Latches are transparent ( open 
                                            // ) 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_WUC_O_DEFAULTALIAS register.
//
//*****************************************************************************


#endif // __HW_AUX_WUC_H__

