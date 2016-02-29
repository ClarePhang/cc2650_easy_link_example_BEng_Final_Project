
/******************************************************************************
*  Filename:       hw_aon_rtc.h
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
#ifndef __HW_AON_RTC_H__
#define __HW_AON_RTC_H__

//*****************************************************************************
//
// The following are defines for the AON_RTC register offsets.
//
//*****************************************************************************
#define AON_RTC_O_CTL           0x00000000  // Configuration register 
#define AON_RTC_O_EVFLAGS       0x00000004  // RTC Status register Note: 
                                            // Reading from this register will 
                                            // force an immediate 
                                            // synchronization of the aon 
                                            // status bits. The read operation 
                                            // is stalled for 2 cycles to 
                                            // ensure that data is clocked 
                                            // through the synchronizers 
#define AON_RTC_O_SEC           0x00000008  // Seconds register 
#define AON_RTC_O_SUBSEC        0x0000000C  // Subseconds register 
#define AON_RTC_O_SUBSECINC     0x00000010  // Subseconds register 
#define AON_RTC_O_CHCTL         0x00000014  // Channel configuration register 
#define AON_RTC_O_CH0CMP        0x00000018  // CH0 compare register 
#define AON_RTC_O_CH1CMP        0x0000001C  // CH1 compare register 
#define AON_RTC_O_CH2CMP        0x00000020  // CH2 compare register 
#define AON_RTC_O_CH2CMPINC     0x00000024  // CH2 compare increment register 
#define AON_RTC_O_CH1CAPT       0x00000028  // CH1 capture register 
#define AON_RTC_O_SYNC          0x0000002C  // OCP synchronization register 


//*****************************************************************************
//
// The following are defines for the bit fields in the AON_RTC_O_CTL register.
//
//*****************************************************************************
#define AON_RTC_CTL_COMB_EV_MASK_M \
                                0x00070000  // Eventmask selecting which 
                                            // delayed event signals are OR'ed 
                                            // together to form the combined 
                                            // event. Bit 16 : Use CH0 delayed 
                                            // event in combined event Bit 17: 
                                            // Use CH1 delayed event in 
                                            // combined event Bit 18: Use CH2 
                                            // delayed event in combined event 

#define AON_RTC_CTL_COMB_EV_MASK_S 16
#define AON_RTC_CTL_EV_DELAY_M  0x00000F00  // No of clock cycles the delayed 
                                            // event is delayed 
#define AON_RTC_CTL_EV_DELAY_S  8
#define AON_RTC_CTL_EV_DELAY_D0 0x00000000  // No delay on delayed event 
#define AON_RTC_CTL_EV_DELAY_D1 0x00000100  // Delay by 1 clock cycles 
#define AON_RTC_CTL_EV_DELAY_D2 0x00000200  // Delay by 2 clock cycles 
#define AON_RTC_CTL_EV_DELAY_D4 0x00000300  // Delay by 4 clock cycles 
#define AON_RTC_CTL_EV_DELAY_D8 0x00000400  // Delay by 8 clock cycles 
#define AON_RTC_CTL_EV_DELAY_D16 \
                                0x00000500  // Delay by 16 clock cycles 
#define AON_RTC_CTL_EV_DELAY_D32 \
                                0x00000600  // Delay by 32 clock cycles 
#define AON_RTC_CTL_EV_DELAY_D48 \
                                0x00000700  // Delay by 48 clock cycles 
#define AON_RTC_CTL_EV_DELAY_D64 \
                                0x00000800  // Delay by 64 clock cycles 
#define AON_RTC_CTL_EV_DELAY_D80 \
                                0x00000900  // Delay by 80 clock cycles 
#define AON_RTC_CTL_EV_DELAY_D96 \
                                0x00000A00  // Delay by 96 clock cycles 
#define AON_RTC_CTL_EV_DELAY_D112 \
                                0x00000B00  // Delay by 112 clock cycles 
#define AON_RTC_CTL_EV_DELAY_D128 \
                                0x00000C00  // Delay by 128 clock cycles 
#define AON_RTC_CTL_EV_DELAY_D144 \
                                0x00000D00  // Delay by 144 clock cycles 
#define AON_RTC_CTL_RESET       0x00000080  // RESET RTC counter The bit is 
                                            // cleared automatically by HW 
#define AON_RTC_CTL_RESET_M     0x00000080
#define AON_RTC_CTL_RESET_S     7
#define AON_RTC_CTL_RTC_UPD_EN  0x00000002  // Enable RTC Update tick (16 Khz 
                                            // signal used in radio) 0: RTC_UPD 
                                            // signal is 0 1: RTC_UPD signal is 
                                            // toggling @16 kHz 
#define AON_RTC_CTL_RTC_UPD_EN_M \
                                0x00000002
#define AON_RTC_CTL_RTC_UPD_EN_S 1
#define AON_RTC_CTL_EN          0x00000001  // Enable RTC counter 0: Halted 
                                            // (frozen) 1: Running 
#define AON_RTC_CTL_EN_M        0x00000001
#define AON_RTC_CTL_EN_S        0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_RTC_O_EVFLAGS register.
//
//*****************************************************************************
#define AON_RTC_EVFLAGS_CH2     0x00010000  // Set by HW on CH2 event. Cleared 
                                            // by writing 1, or by writing 1 to 
                                            // CLREVENT2, or asserting 
                                            // EventClr[2] HW pin (done by AUX) 
#define AON_RTC_EVFLAGS_CH2_M   0x00010000
#define AON_RTC_EVFLAGS_CH2_S   16
#define AON_RTC_EVFLAGS_CH1     0x00000100  // Set by HW on CH1 event. Cleared 
                                            // by writing 1, or by writing 1 to 
                                            // CLREVENT1, or asserting 
                                            // EventClr[1] HW pin 
#define AON_RTC_EVFLAGS_CH1_M   0x00000100
#define AON_RTC_EVFLAGS_CH1_S   8
#define AON_RTC_EVFLAGS_CH0     0x00000001  // Set by HW on CH0 event. Cleared 
                                            // by writing 1, or by writing 1 to 
                                            // CLREVENT0, or asserting 
                                            // EventClr[0] HW pin 
#define AON_RTC_EVFLAGS_CH0_M   0x00000001
#define AON_RTC_EVFLAGS_CH0_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the AON_RTC_O_SEC register.
//
//*****************************************************************************
#define AON_RTC_SEC_VALUE_M     0xFFFFFFFF  // Unsigned integer counting 
                                            // seconds. Incremented when SUBSEC 
                                            // overflows 
#define AON_RTC_SEC_VALUE_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_RTC_O_SUBSEC register.
//
//*****************************************************************************
#define AON_RTC_SUBSEC_VALUE_M  0xFFFFFFFF  // Unsigned integer representing 
                                            // fractional part of a second. 
                                            // Note: It is not possible to do 
                                            // an atomic read of SEC and 
                                            // SUBSEC, hence software is 
                                            // adviced to read SEC, SUBSEC and 
                                            // then read SEC again to ensure 
                                            // that SEC hasn't updated. 
#define AON_RTC_SUBSEC_VALUE_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_RTC_O_SUBSECINC register.
//
//*****************************************************************************
#define AON_RTC_SUBSECINC_VALUEINC_M \
                                0x00FFFFFF  // This value compensates for a LF 
                                            // clock which has an offset from 
                                            // 32768 Hz. The compensation value 
                                            // can be found as 2^38 / freq, 
                                            // where freq if LF clock frequency 
                                            // in Hertz This value is added to 
                                            // RTC_SUBSEC.SUBSEC on every 
                                            // cycle. To perform the addition, 
                                            // SUBSECINC[23:6] are aligned with 
                                            // SUBSEC[17:0]. The remaining bits 
                                            // SUBSECINC[5:0] are accumulated 
                                            // in a hidden 6-bit register that 
                                            // generates a carry into the above 
                                            // mentioned addition on overflow. 
                                            // The default value corresponds to 
                                            // incrementing by precisely 
                                            // 1/32768 of a second. 

#define AON_RTC_SUBSECINC_VALUEINC_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_RTC_O_CHCTL register.
//
//*****************************************************************************
#define AON_RTC_CHCTL_CH2_CONT_EN \
                                0x00040000  // Set to enable continuous 
                                            // opereation of CH2 

#define AON_RTC_CHCTL_CH2_CONT_EN_M \
                                0x00040000
#define AON_RTC_CHCTL_CH2_CONT_EN_S 18
#define AON_RTC_CHCTL_CH2_EN    0x00010000  // Set to enable CH2 
#define AON_RTC_CHCTL_CH2_EN_M  0x00010000
#define AON_RTC_CHCTL_CH2_EN_S  16
#define AON_RTC_CHCTL_CH1_CAPT_EN \
                                0x00000200  // Set CH1 mode 0: Compare mode 
                                            // (default) 1: Capture mode 

#define AON_RTC_CHCTL_CH1_CAPT_EN_M \
                                0x00000200
#define AON_RTC_CHCTL_CH1_CAPT_EN_S 9
#define AON_RTC_CHCTL_CH1_EN    0x00000100  // Set to enable CH1 
#define AON_RTC_CHCTL_CH1_EN_M  0x00000100
#define AON_RTC_CHCTL_CH1_EN_S  8
#define AON_RTC_CHCTL_CH0_EN    0x00000001  // Set to enable CH0. 
#define AON_RTC_CHCTL_CH0_EN_M  0x00000001
#define AON_RTC_CHCTL_CH0_EN_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_RTC_O_CH0CMP register.
//
//*****************************************************************************
#define AON_RTC_CH0CMP_VALUE_M  0xFFFFFFFF  // CH0 compare value When CMP0 == 
                                            // {SEC[15:0],SUBSEC[31:16]}, a CH0 
                                            // event is generated. 
#define AON_RTC_CH0CMP_VALUE_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_RTC_O_CH1CMP register.
//
//*****************************************************************************
#define AON_RTC_CH1CMP_VALUE_M  0xFFFFFFFF  // CH1 compare value When CMP1 == 
                                            // {SEC[15:0],SUBSEC[31:16]}, a CH1 
                                            // event is generated. Only valid 
                                            // if CH1 is in compare mode. 
#define AON_RTC_CH1CMP_VALUE_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_RTC_O_CH2CMP register.
//
//*****************************************************************************
#define AON_RTC_CH2CMP_VALUE_M  0xFFFFFFFF  // CH2 compare value When CMP2 == 
                                            // {SEC[15:0],SUBSEC[31:16]}, a CH2 
                                            // event is generated. 
#define AON_RTC_CH2CMP_VALUE_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_RTC_O_CH2CMPINC register.
//
//*****************************************************************************
#define AON_RTC_CH2CMPINC_VALUE_M \
                                0xFFFFFFFF  // This value is added to CMP2 
                                            // following a CH2 event, if CH2 is 
                                            // in continuous mode. 

#define AON_RTC_CH2CMPINC_VALUE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_RTC_O_CH1CAPT register.
//
//*****************************************************************************
#define AON_RTC_CH1CAPT_SEC_M   0xFFFF0000  // CH1 capture value in Seconds 
                                            // (SEC[15:0) , when CH1 capture 
                                            // event occurs. Only valid if CH1 
                                            // is in capture mode 
#define AON_RTC_CH1CAPT_SEC_S   16
#define AON_RTC_CH1CAPT_SUBSEC_M \
                                0x0000FFFF  // CH1 capture value in fraction 
                                            // of Seconds ( SUBSEC[31:16]), 
                                            // when CH1 capture event occurs. 
                                            // Only valid if CH1 is in capture 
                                            // mode 

#define AON_RTC_CH1CAPT_SUBSEC_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the AON_RTC_O_SYNC register.
//
//*****************************************************************************
#define AON_RTC_SYNC_WBUSY      0x00000001  // This register will always 
                                            // return 0,- however it will not 
                                            // return the value until there are 
                                            // no outstanding write requests 
                                            // between AONIF and AON Note: 
                                            // Writing to this register prior 
                                            // to reading will force a wait 
                                            // until next LF_CLK edge. This is 
                                            // recommended for syncing read 
                                            // registers from AON when waking 
                                            // up from sleep Failure to do so 
                                            // may result in reading aon values 
                                            // from prior to going to sleep 
#define AON_RTC_SYNC_WBUSY_M    0x00000001
#define AON_RTC_SYNC_WBUSY_S    0


#endif // __HW_AON_RTC_H__

