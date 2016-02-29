
/******************************************************************************
*  Filename:       hw_aon_event.h
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
#ifndef __HW_AON_EVENT_H__
#define __HW_AON_EVENT_H__

//*****************************************************************************
//
// The following are defines for the AON_EVENT register offsets.
//
//*****************************************************************************
#define AON_EVENT_O_MCUWUSEL    0x00000000  // Wake-up selector for MCU 
#define AON_EVENT_O_AUXWUSEL    0x00000004  // Wake-up selector for AUX 
#define AON_EVENT_O_EVTOMCUSEL  0x00000008  // Event selector for MCU 
#define AON_EVENT_O_RTCSEL      0x0000000C  // Event selector for MCU 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_EVENT_O_MCUWUSEL register.
//
//*****************************************************************************
#define AON_EVENT_MCUWUSEL_WU3_EV_M \
                                0x3F000000  // AON_EVENT_SOURCE id# which will 
                                            // wake the MCU domain (default 
                                            // disabled) (4 th priority) 

#define AON_EVENT_MCUWUSEL_WU3_EV_S 24
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD0 \
                                0x00000000  // Edge detect on DIO0 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD1 \
                                0x01000000  // Edge detect on DIO1 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD2 \
                                0x02000000  // Edge detect on DIO2 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD3 \
                                0x03000000  // Edge detect on DIO3 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD4 \
                                0x04000000  // Edge detect on DIO4 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD5 \
                                0x05000000  // Edge detect on DIO5 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD6 \
                                0x06000000  // Edge detect on DIO6 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD7 \
                                0x07000000  // Edge detect on DIO7 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD8 \
                                0x08000000  // Edge detect on DIO8 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD9 \
                                0x09000000  // Edge detect on DIO9 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD10 \
                                0x0A000000  // Edge detect on DIO10 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD11 \
                                0x0B000000  // Edge detect on DIO11 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD12 \
                                0x0C000000  // Edge detect on DIO12 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD13 \
                                0x0D000000  // Edge detect on DIO13 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD14 \
                                0x0E000000  // Edge detect on DIO14 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD15 \
                                0x0F000000  // Edge detect on DIO15 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD16 \
                                0x10000000  // Edge detect on DIO16 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD17 \
                                0x11000000  // Edge detect on DIO17 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD18 \
                                0x12000000  // Edge detect on DIO18 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD19 \
                                0x13000000  // Edge detect on DIO19 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD20 \
                                0x14000000  // Edge detect on DIO20 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD21 \
                                0x15000000  // Edge detect on DIO21 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD22 \
                                0x16000000  // Edge detect on DIO22 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD23 \
                                0x17000000  // Edge detect on DIO23 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD24 \
                                0x18000000  // Edge detect on DIO24 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD25 \
                                0x19000000  // Edge detect on DIO25 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD26 \
                                0x1A000000  // Edge detect on DIO26 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD27 \
                                0x1B000000  // Edge detect on DIO27 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD28 \
                                0x1C000000  // Edge detect on DIO28 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD29 \
                                0x1D000000  // Edge detect on DIO29 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD30 \
                                0x1E000000  // Edge detect on DIO30 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD31 \
                                0x1F000000  // Edge detect on DIO31 
#define AON_EVENT_MCUWUSEL_WU3_EV_PAD \
                                0x20000000  // Edge detect on any DIO 
#define AON_EVENT_MCUWUSEL_WU3_EV_SPIS_BYTE_DONE \
                                0x21000000  // SPIS byte received / 
                                            // transmitted 
#define AON_EVENT_MCUWUSEL_WU3_EV_SPIS_CS \
                                0x22000000  // SPIS CS_N asserted 
#define AON_EVENT_MCUWUSEL_WU3_EV_RTC_CH0 \
                                0x23000000  // RTC ch. 0 
#define AON_EVENT_MCUWUSEL_WU3_EV_RTC_CH1 \
                                0x24000000  // RTC ch. 1 
#define AON_EVENT_MCUWUSEL_WU3_EV_RTC_CH2 \
                                0x25000000  // RTC ch. 2 
#define AON_EVENT_MCUWUSEL_WU3_EV_RTC_CH0_DLY \
                                0x26000000  // RTC ch. 0 - delayed 
#define AON_EVENT_MCUWUSEL_WU3_EV_RTC_CH1_DLY \
                                0x27000000  // RTC ch. 1 - delayed 
#define AON_EVENT_MCUWUSEL_WU3_EV_RTC_CH2_DLY \
                                0x28000000  // RTC ch. 2 - delayed 
#define AON_EVENT_MCUWUSEL_WU3_EV_RTC_COMB_DLY \
                                0x29000000  // RTC combined delayed event 
#define AON_EVENT_MCUWUSEL_WU3_EV_RTC_UPD \
                                0x2A000000  // RTC Update Tick (16 kHz signal, 
                                            // i.e. event line toggles value 
                                            // every 32 kHz clock period) 
#define AON_EVENT_MCUWUSEL_WU3_EV_JTAG \
                                0x2B000000  // JTAG generated event 
#define AON_EVENT_MCUWUSEL_WU3_EV_AUX_SWEV0 \
                                0x2C000000  // AUX SW triggered event 
                                            // (suggested purpose: State 
                                            // machine done event) 
#define AON_EVENT_MCUWUSEL_WU3_EV_AUX_SWEV1 \
                                0x2D000000  // AUX SW triggered event 
                                            // (suggested purpose: Error event) 
#define AON_EVENT_MCUWUSEL_WU3_EV_AUX_SWEV2 \
                                0x2E000000  // AUX SW triggered event 
                                            // (suggested purpose: TBD. 
                                            // Triggering this event will also 
                                            // perform RTC Channel 2 clear) 
#define AON_EVENT_MCUWUSEL_WU3_EV_AUX_COMPA \
                                0x2F000000  // Comparator A triggered 
#define AON_EVENT_MCUWUSEL_WU3_EV_AUX_COMPB \
                                0x30000000  // Comparator B triggered 
#define AON_EVENT_MCUWUSEL_WU3_EV_AUX_ADC_DONE \
                                0x31000000  // ADC conversion completed 
#define AON_EVENT_MCUWUSEL_WU3_EV_AUX_TDC_DONE \
                                0x32000000  // TDC completed or timed out 
#define AON_EVENT_MCUWUSEL_WU3_EV_AUX_TIMER0 \
                                0x33000000  // Timer 0 event 
#define AON_EVENT_MCUWUSEL_WU3_EV_AUX_TIMER1 \
                                0x34000000  // Timer 1 event 
#define AON_EVENT_MCUWUSEL_WU3_EV_BATMON_TEMP \
                                0x35000000  // BATMON temperature update event 
#define AON_EVENT_MCUWUSEL_WU3_EV_BATMON_VOLT \
                                0x36000000  // BATMON voltage update event 
#define AON_EVENT_MCUWUSEL_WU3_EV_SOCAUX_CMP_B \
                                0x37000000  // Comperator B triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
#define AON_EVENT_MCUWUSEL_WU3_EV_SOCAUX_CMP_B_N \
                                0x38000000  // Comperator B not triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
                                            // (inverted) 
#define AON_EVENT_MCUWUSEL_WU3_EV_NONE \
                                0x3F000000  // No event, always low 
#define AON_EVENT_MCUWUSEL_WU2_EV_M \
                                0x003F0000  // AON_EVENT_SOURCE id# which will 
                                            // wake the MCU domain (default 
                                            // disabled) (3rd priority) 

#define AON_EVENT_MCUWUSEL_WU2_EV_S 16
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD0 \
                                0x00000000  // Edge detect on DIO0 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD1 \
                                0x00010000  // Edge detect on DIO1 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD2 \
                                0x00020000  // Edge detect on DIO2 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD3 \
                                0x00030000  // Edge detect on DIO3 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD4 \
                                0x00040000  // Edge detect on DIO4 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD5 \
                                0x00050000  // Edge detect on DIO5 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD6 \
                                0x00060000  // Edge detect on DIO6 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD7 \
                                0x00070000  // Edge detect on DIO7 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD8 \
                                0x00080000  // Edge detect on DIO8 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD9 \
                                0x00090000  // Edge detect on DIO9 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD10 \
                                0x000A0000  // Edge detect on DIO10 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD11 \
                                0x000B0000  // Edge detect on DIO11 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD12 \
                                0x000C0000  // Edge detect on DIO12 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD13 \
                                0x000D0000  // Edge detect on DIO13 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD14 \
                                0x000E0000  // Edge detect on DIO14 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD15 \
                                0x000F0000  // Edge detect on DIO15 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD16 \
                                0x00100000  // Edge detect on DIO16 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD17 \
                                0x00110000  // Edge detect on DIO17 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD18 \
                                0x00120000  // Edge detect on DIO18 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD19 \
                                0x00130000  // Edge detect on DIO19 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD20 \
                                0x00140000  // Edge detect on DIO20 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD21 \
                                0x00150000  // Edge detect on DIO21 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD22 \
                                0x00160000  // Edge detect on DIO22 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD23 \
                                0x00170000  // Edge detect on DIO23 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD24 \
                                0x00180000  // Edge detect on DIO24 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD25 \
                                0x00190000  // Edge detect on DIO25 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD26 \
                                0x001A0000  // Edge detect on DIO26 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD27 \
                                0x001B0000  // Edge detect on DIO27 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD28 \
                                0x001C0000  // Edge detect on DIO28 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD29 \
                                0x001D0000  // Edge detect on DIO29 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD30 \
                                0x001E0000  // Edge detect on DIO30 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD31 \
                                0x001F0000  // Edge detect on DIO31 
#define AON_EVENT_MCUWUSEL_WU2_EV_PAD \
                                0x00200000  // Edge detect on any DIO 
#define AON_EVENT_MCUWUSEL_WU2_EV_SPIS_BYTE_DONE \
                                0x00210000  // SPIS byte received / 
                                            // transmitted 
#define AON_EVENT_MCUWUSEL_WU2_EV_SPIS_CS \
                                0x00220000  // SPIS CS_N asserted 
#define AON_EVENT_MCUWUSEL_WU2_EV_RTC_CH0 \
                                0x00230000  // RTC ch. 0 
#define AON_EVENT_MCUWUSEL_WU2_EV_RTC_CH1 \
                                0x00240000  // RTC ch. 1 
#define AON_EVENT_MCUWUSEL_WU2_EV_RTC_CH2 \
                                0x00250000  // RTC ch. 2 
#define AON_EVENT_MCUWUSEL_WU2_EV_RTC_CH0_DLY \
                                0x00260000  // RTC ch. 0 - delayed 
#define AON_EVENT_MCUWUSEL_WU2_EV_RTC_CH1_DLY \
                                0x00270000  // RTC ch. 1 - delayed 
#define AON_EVENT_MCUWUSEL_WU2_EV_RTC_CH2_DLY \
                                0x00280000  // RTC ch. 2 - delayed 
#define AON_EVENT_MCUWUSEL_WU2_EV_RTC_COMB_DLY \
                                0x00290000  // RTC combined delayed event 
#define AON_EVENT_MCUWUSEL_WU2_EV_RTC_UPD \
                                0x002A0000  // RTC Update Tick (16 kHz signal, 
                                            // i.e. event line toggles value 
                                            // every 32 kHz clock period) 
#define AON_EVENT_MCUWUSEL_WU2_EV_JTAG \
                                0x002B0000  // JTAG generated event 
#define AON_EVENT_MCUWUSEL_WU2_EV_AUX_SWEV0 \
                                0x002C0000  // AUX SW triggered event 
                                            // (suggested purpose: State 
                                            // machine done event) 
#define AON_EVENT_MCUWUSEL_WU2_EV_AUX_SWEV1 \
                                0x002D0000  // AUX SW triggered event 
                                            // (suggested purpose: Error event) 
#define AON_EVENT_MCUWUSEL_WU2_EV_AUX_SWEV2 \
                                0x002E0000  // AUX SW triggered event 
                                            // (suggested purpose: TBD. 
                                            // Triggering this event will also 
                                            // perform RTC Channel 2 clear) 
#define AON_EVENT_MCUWUSEL_WU2_EV_AUX_COMPA \
                                0x002F0000  // Comparator A triggered 
#define AON_EVENT_MCUWUSEL_WU2_EV_AUX_COMPB \
                                0x00300000  // Comparator B triggered 
#define AON_EVENT_MCUWUSEL_WU2_EV_AUX_ADC_DONE \
                                0x00310000  // ADC conversion completed 
#define AON_EVENT_MCUWUSEL_WU2_EV_AUX_TDC_DONE \
                                0x00320000  // TDC completed or timed out 
#define AON_EVENT_MCUWUSEL_WU2_EV_AUX_TIMER0 \
                                0x00330000  // Timer 0 event 
#define AON_EVENT_MCUWUSEL_WU2_EV_AUX_TIMER1 \
                                0x00340000  // Timer 1 event 
#define AON_EVENT_MCUWUSEL_WU2_EV_BATMON_TEMP \
                                0x00350000  // BATMON temperature update event 
#define AON_EVENT_MCUWUSEL_WU2_EV_BATMON_VOLT \
                                0x00360000  // BATMON voltage update event 
#define AON_EVENT_MCUWUSEL_WU2_EV_SOCAUX_CMP_B \
                                0x00370000  // Comperator B triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
#define AON_EVENT_MCUWUSEL_WU2_EV_SOCAUX_CMP_B_N \
                                0x00380000  // Comperator B not triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
                                            // (inverted) 
#define AON_EVENT_MCUWUSEL_WU2_EV_NONE \
                                0x003F0000  // No event, always low 
#define AON_EVENT_MCUWUSEL_WU1_EV_M \
                                0x00003F00  // AON_EVENT_SOURCE id# which will 
                                            // wake the MCU domain (default 
                                            // disabled) (2nd priority) 

#define AON_EVENT_MCUWUSEL_WU1_EV_S 8
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD0 \
                                0x00000000  // Edge detect on DIO0 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD1 \
                                0x00000100  // Edge detect on DIO1 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD2 \
                                0x00000200  // Edge detect on DIO2 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD3 \
                                0x00000300  // Edge detect on DIO3 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD4 \
                                0x00000400  // Edge detect on DIO4 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD5 \
                                0x00000500  // Edge detect on DIO5 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD6 \
                                0x00000600  // Edge detect on DIO6 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD7 \
                                0x00000700  // Edge detect on DIO7 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD8 \
                                0x00000800  // Edge detect on DIO8 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD9 \
                                0x00000900  // Edge detect on DIO9 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD10 \
                                0x00000A00  // Edge detect on DIO10 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD11 \
                                0x00000B00  // Edge detect on DIO11 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD12 \
                                0x00000C00  // Edge detect on DIO12 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD13 \
                                0x00000D00  // Edge detect on DIO13 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD14 \
                                0x00000E00  // Edge detect on DIO14 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD15 \
                                0x00000F00  // Edge detect on DIO15 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD16 \
                                0x00001000  // Edge detect on DIO16 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD17 \
                                0x00001100  // Edge detect on DIO17 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD18 \
                                0x00001200  // Edge detect on DIO18 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD19 \
                                0x00001300  // Edge detect on DIO19 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD20 \
                                0x00001400  // Edge detect on DIO20 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD21 \
                                0x00001500  // Edge detect on DIO21 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD22 \
                                0x00001600  // Edge detect on DIO22 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD23 \
                                0x00001700  // Edge detect on DIO23 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD24 \
                                0x00001800  // Edge detect on DIO24 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD25 \
                                0x00001900  // Edge detect on DIO25 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD26 \
                                0x00001A00  // Edge detect on DIO26 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD27 \
                                0x00001B00  // Edge detect on DIO27 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD28 \
                                0x00001C00  // Edge detect on DIO28 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD29 \
                                0x00001D00  // Edge detect on DIO29 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD30 \
                                0x00001E00  // Edge detect on DIO30 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD31 \
                                0x00001F00  // Edge detect on DIO31 
#define AON_EVENT_MCUWUSEL_WU1_EV_PAD \
                                0x00002000  // Edge detect on any DIO 
#define AON_EVENT_MCUWUSEL_WU1_EV_SPIS_BYTE_DONE \
                                0x00002100  // SPIS byte received / 
                                            // transmitted 
#define AON_EVENT_MCUWUSEL_WU1_EV_SPIS_CS \
                                0x00002200  // SPIS CS_N asserted 
#define AON_EVENT_MCUWUSEL_WU1_EV_RTC_CH0 \
                                0x00002300  // RTC ch. 0 
#define AON_EVENT_MCUWUSEL_WU1_EV_RTC_CH1 \
                                0x00002400  // RTC ch. 1 
#define AON_EVENT_MCUWUSEL_WU1_EV_RTC_CH2 \
                                0x00002500  // RTC ch. 2 
#define AON_EVENT_MCUWUSEL_WU1_EV_RTC_CH0_DLY \
                                0x00002600  // RTC ch. 0 - delayed 
#define AON_EVENT_MCUWUSEL_WU1_EV_RTC_CH1_DLY \
                                0x00002700  // RTC ch. 1 - delayed 
#define AON_EVENT_MCUWUSEL_WU1_EV_RTC_CH2_DLY \
                                0x00002800  // RTC ch. 2 - delayed 
#define AON_EVENT_MCUWUSEL_WU1_EV_RTC_COMB_DLY \
                                0x00002900  // RTC combined delayed event 
#define AON_EVENT_MCUWUSEL_WU1_EV_RTC_UPD \
                                0x00002A00  // RTC Update Tick (16 kHz signal, 
                                            // i.e. event line toggles value 
                                            // every 32 kHz clock period) 
#define AON_EVENT_MCUWUSEL_WU1_EV_JTAG \
                                0x00002B00  // JTAG generated event 
#define AON_EVENT_MCUWUSEL_WU1_EV_AUX_SWEV0 \
                                0x00002C00  // AUX SW triggered event 
                                            // (suggested purpose: State 
                                            // machine done event) 
#define AON_EVENT_MCUWUSEL_WU1_EV_AUX_SWEV1 \
                                0x00002D00  // AUX SW triggered event 
                                            // (suggested purpose: Error event) 
#define AON_EVENT_MCUWUSEL_WU1_EV_AUX_SWEV2 \
                                0x00002E00  // AUX SW triggered event 
                                            // (suggested purpose: TBD. 
                                            // Triggering this event will also 
                                            // perform RTC Channel 2 clear) 
#define AON_EVENT_MCUWUSEL_WU1_EV_AUX_COMPA \
                                0x00002F00  // Comparator A triggered 
#define AON_EVENT_MCUWUSEL_WU1_EV_AUX_COMPB \
                                0x00003000  // Comparator B triggered 
#define AON_EVENT_MCUWUSEL_WU1_EV_AUX_ADC_DONE \
                                0x00003100  // ADC conversion completed 
#define AON_EVENT_MCUWUSEL_WU1_EV_AUX_TDC_DONE \
                                0x00003200  // TDC completed or timed out 
#define AON_EVENT_MCUWUSEL_WU1_EV_AUX_TIMER0 \
                                0x00003300  // Timer 0 event 
#define AON_EVENT_MCUWUSEL_WU1_EV_AUX_TIMER1 \
                                0x00003400  // Timer 1 event 
#define AON_EVENT_MCUWUSEL_WU1_EV_BATMON_TEMP \
                                0x00003500  // BATMON temperature update event 
#define AON_EVENT_MCUWUSEL_WU1_EV_BATMON_VOLT \
                                0x00003600  // BATMON voltage update event 
#define AON_EVENT_MCUWUSEL_WU1_EV_SOCAUX_CMP_B \
                                0x00003700  // Comperator B triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
#define AON_EVENT_MCUWUSEL_WU1_EV_SOCAUX_CMP_B_N \
                                0x00003800  // Comperator B not triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
                                            // (inverted) 
#define AON_EVENT_MCUWUSEL_WU1_EV_NONE \
                                0x00003F00  // No event, always low 
#define AON_EVENT_MCUWUSEL_WU0_EV_M \
                                0x0000003F  // AON_EVENT_SOURCE id# which will 
                                            // wake the MCU domain (default 
                                            // disabled) (first priority) 

#define AON_EVENT_MCUWUSEL_WU0_EV_S 0
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD0 \
                                0x00000000  // Edge detect on DIO0 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD1 \
                                0x00000001  // Edge detect on DIO1 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD2 \
                                0x00000002  // Edge detect on DIO2 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD3 \
                                0x00000003  // Edge detect on DIO3 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD4 \
                                0x00000004  // Edge detect on DIO4 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD5 \
                                0x00000005  // Edge detect on DIO5 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD6 \
                                0x00000006  // Edge detect on DIO6 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD7 \
                                0x00000007  // Edge detect on DIO7 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD8 \
                                0x00000008  // Edge detect on DIO8 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD9 \
                                0x00000009  // Edge detect on DIO9 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD10 \
                                0x0000000A  // Edge detect on DIO10 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD11 \
                                0x0000000B  // Edge detect on DIO11 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD12 \
                                0x0000000C  // Edge detect on DIO12 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD13 \
                                0x0000000D  // Edge detect on DIO13 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD14 \
                                0x0000000E  // Edge detect on DIO14 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD15 \
                                0x0000000F  // Edge detect on DIO15 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD16 \
                                0x00000010  // Edge detect on DIO16 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD17 \
                                0x00000011  // Edge detect on DIO17 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD18 \
                                0x00000012  // Edge detect on DIO18 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD19 \
                                0x00000013  // Edge detect on DIO19 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD20 \
                                0x00000014  // Edge detect on DIO20 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD21 \
                                0x00000015  // Edge detect on DIO21 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD22 \
                                0x00000016  // Edge detect on DIO22 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD23 \
                                0x00000017  // Edge detect on DIO23 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD24 \
                                0x00000018  // Edge detect on DIO24 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD25 \
                                0x00000019  // Edge detect on DIO25 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD26 \
                                0x0000001A  // Edge detect on DIO26 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD27 \
                                0x0000001B  // Edge detect on DIO27 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD28 \
                                0x0000001C  // Edge detect on DIO28 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD29 \
                                0x0000001D  // Edge detect on DIO29 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD30 \
                                0x0000001E  // Edge detect on DIO30 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD31 \
                                0x0000001F  // Edge detect on DIO31 
#define AON_EVENT_MCUWUSEL_WU0_EV_PAD \
                                0x00000020  // Edge detect on any DIO 
#define AON_EVENT_MCUWUSEL_WU0_EV_SPIS_BYTE_DONE \
                                0x00000021  // SPIS byte received / 
                                            // transmitted 
#define AON_EVENT_MCUWUSEL_WU0_EV_SPIS_CS \
                                0x00000022  // SPIS CS_N asserted 
#define AON_EVENT_MCUWUSEL_WU0_EV_RTC_CH0 \
                                0x00000023  // RTC ch. 0 
#define AON_EVENT_MCUWUSEL_WU0_EV_RTC_CH1 \
                                0x00000024  // RTC ch. 1 
#define AON_EVENT_MCUWUSEL_WU0_EV_RTC_CH2 \
                                0x00000025  // RTC ch. 2 
#define AON_EVENT_MCUWUSEL_WU0_EV_RTC_CH0_DLY \
                                0x00000026  // RTC ch. 0 - delayed 
#define AON_EVENT_MCUWUSEL_WU0_EV_RTC_CH1_DLY \
                                0x00000027  // RTC ch. 1 - delayed 
#define AON_EVENT_MCUWUSEL_WU0_EV_RTC_CH2_DLY \
                                0x00000028  // RTC ch. 2 - delayed 
#define AON_EVENT_MCUWUSEL_WU0_EV_RTC_COMB_DLY \
                                0x00000029  // RTC combined delayed event 
#define AON_EVENT_MCUWUSEL_WU0_EV_RTC_UPD \
                                0x0000002A  // RTC Update Tick (16 kHz signal, 
                                            // i.e. event line toggles value 
                                            // every 32 kHz clock period) 
#define AON_EVENT_MCUWUSEL_WU0_EV_JTAG \
                                0x0000002B  // JTAG generated event 
#define AON_EVENT_MCUWUSEL_WU0_EV_AUX_SWEV0 \
                                0x0000002C  // AUX SW triggered event 
                                            // (suggested purpose: State 
                                            // machine done event) 
#define AON_EVENT_MCUWUSEL_WU0_EV_AUX_SWEV1 \
                                0x0000002D  // AUX SW triggered event 
                                            // (suggested purpose: Error event) 
#define AON_EVENT_MCUWUSEL_WU0_EV_AUX_SWEV2 \
                                0x0000002E  // AUX SW triggered event 
                                            // (suggested purpose: TBD. 
                                            // Triggering this event will also 
                                            // perform RTC Channel 2 clear) 
#define AON_EVENT_MCUWUSEL_WU0_EV_AUX_COMPA \
                                0x0000002F  // Comparator A triggered 
#define AON_EVENT_MCUWUSEL_WU0_EV_AUX_COMPB \
                                0x00000030  // Comparator B triggered 
#define AON_EVENT_MCUWUSEL_WU0_EV_AUX_ADC_DONE \
                                0x00000031  // ADC conversion completed 
#define AON_EVENT_MCUWUSEL_WU0_EV_AUX_TDC_DONE \
                                0x00000032  // TDC completed or timed out 
#define AON_EVENT_MCUWUSEL_WU0_EV_AUX_TIMER0 \
                                0x00000033  // Timer 0 event 
#define AON_EVENT_MCUWUSEL_WU0_EV_AUX_TIMER1 \
                                0x00000034  // Timer 1 event 
#define AON_EVENT_MCUWUSEL_WU0_EV_BATMON_TEMP \
                                0x00000035  // BATMON temperature update event 
#define AON_EVENT_MCUWUSEL_WU0_EV_BATMON_VOLT \
                                0x00000036  // BATMON voltage update event 
#define AON_EVENT_MCUWUSEL_WU0_EV_SOCAUX_CMP_B \
                                0x00000037  // Comperator B triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
#define AON_EVENT_MCUWUSEL_WU0_EV_SOCAUX_CMP_B_N \
                                0x00000038  // Comperator B not triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
                                            // (inverted) 
#define AON_EVENT_MCUWUSEL_WU0_EV_NONE \
                                0x0000003F  // No event, always low 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_EVENT_O_AUXWUSEL register.
//
//*****************************************************************************
#define AON_EVENT_AUXWUSEL_WU2_EV_M \
                                0x003F0000  // AON_EVENT_SOURCE id# which will 
                                            // wake the AUX domain. (Default 
                                            // disabled) (3 rd priority) 

#define AON_EVENT_AUXWUSEL_WU2_EV_S 16
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD0 \
                                0x00000000  // Edge detect on DIO0 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD1 \
                                0x00010000  // Edge detect on DIO1 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD2 \
                                0x00020000  // Edge detect on DIO2 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD3 \
                                0x00030000  // Edge detect on DIO3 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD4 \
                                0x00040000  // Edge detect on DIO4 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD5 \
                                0x00050000  // Edge detect on DIO5 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD6 \
                                0x00060000  // Edge detect on DIO6 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD7 \
                                0x00070000  // Edge detect on DIO7 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD8 \
                                0x00080000  // Edge detect on DIO8 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD9 \
                                0x00090000  // Edge detect on DIO9 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD10 \
                                0x000A0000  // Edge detect on DIO10 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD11 \
                                0x000B0000  // Edge detect on DIO11 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD12 \
                                0x000C0000  // Edge detect on DIO12 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD13 \
                                0x000D0000  // Edge detect on DIO13 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD14 \
                                0x000E0000  // Edge detect on DIO14 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD15 \
                                0x000F0000  // Edge detect on DIO15 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD16 \
                                0x00100000  // Edge detect on DIO16 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD17 \
                                0x00110000  // Edge detect on DIO17 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD18 \
                                0x00120000  // Edge detect on DIO18 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD19 \
                                0x00130000  // Edge detect on DIO19 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD20 \
                                0x00140000  // Edge detect on DIO20 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD21 \
                                0x00150000  // Edge detect on DIO21 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD22 \
                                0x00160000  // Edge detect on DIO22 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD23 \
                                0x00170000  // Edge detect on DIO23 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD24 \
                                0x00180000  // Edge detect on DIO24 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD25 \
                                0x00190000  // Edge detect on DIO25 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD26 \
                                0x001A0000  // Edge detect on DIO26 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD27 \
                                0x001B0000  // Edge detect on DIO27 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD28 \
                                0x001C0000  // Edge detect on DIO28 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD29 \
                                0x001D0000  // Edge detect on DIO29 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD30 \
                                0x001E0000  // Edge detect on DIO30 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD31 \
                                0x001F0000  // Edge detect on DIO31 
#define AON_EVENT_AUXWUSEL_WU2_EV_PAD \
                                0x00200000  // Edge detect on any DIO 
#define AON_EVENT_AUXWUSEL_WU2_EV_SPIS_BYTE_DONE \
                                0x00210000  // SPIS byte received / 
                                            // transmitted 
#define AON_EVENT_AUXWUSEL_WU2_EV_SPIS_CS \
                                0x00220000  // SPIS CS_N asserted 
#define AON_EVENT_AUXWUSEL_WU2_EV_RTC_CH0 \
                                0x00230000  // RTC ch. 0 
#define AON_EVENT_AUXWUSEL_WU2_EV_RTC_CH1 \
                                0x00240000  // RTC ch. 1 
#define AON_EVENT_AUXWUSEL_WU2_EV_RTC_CH2 \
                                0x00250000  // RTC ch. 2 
#define AON_EVENT_AUXWUSEL_WU2_EV_RTC_CH0_DLY \
                                0x00260000  // RTC ch. 0 - delayed 
#define AON_EVENT_AUXWUSEL_WU2_EV_RTC_CH1_DLY \
                                0x00270000  // RTC ch. 1 - delayed 
#define AON_EVENT_AUXWUSEL_WU2_EV_RTC_CH2_DLY \
                                0x00280000  // RTC ch. 2 - delayed 
#define AON_EVENT_AUXWUSEL_WU2_EV_RTC_COMB_DLY \
                                0x00290000  // RTC combined delayed event 
#define AON_EVENT_AUXWUSEL_WU2_EV_RTC_UPD \
                                0x002A0000  // RTC Update Tick (16 kHz signal, 
                                            // i.e. event line toggles value 
                                            // every 32 kHz clock period) 
#define AON_EVENT_AUXWUSEL_WU2_EV_JTAG \
                                0x002B0000  // JTAG generated event 
#define AON_EVENT_AUXWUSEL_WU2_EV_AUX_SWEV0 \
                                0x002C0000  // AUX SW triggered event 
                                            // (suggested purpose: State 
                                            // machine done event) 
#define AON_EVENT_AUXWUSEL_WU2_EV_AUX_SWEV1 \
                                0x002D0000  // AUX SW triggered event 
                                            // (suggested purpose: Error event) 
#define AON_EVENT_AUXWUSEL_WU2_EV_AUX_SWEV2 \
                                0x002E0000  // AUX SW triggered event 
                                            // (suggested purpose: TBD. 
                                            // Triggering this event will also 
                                            // perform RTC Channel 2 clear) 
#define AON_EVENT_AUXWUSEL_WU2_EV_AUX_COMPA \
                                0x002F0000  // Comparator A triggered 
#define AON_EVENT_AUXWUSEL_WU2_EV_AUX_COMPB \
                                0x00300000  // Comparator B triggered 
#define AON_EVENT_AUXWUSEL_WU2_EV_AUX_ADC_DONE \
                                0x00310000  // ADC conversion completed 
#define AON_EVENT_AUXWUSEL_WU2_EV_AUX_TDC_DONE \
                                0x00320000  // TDC completed or timed out 
#define AON_EVENT_AUXWUSEL_WU2_EV_AUX_TIMER0 \
                                0x00330000  // Timer 0 event 
#define AON_EVENT_AUXWUSEL_WU2_EV_AUX_TIMER1 \
                                0x00340000  // Timer 1 event 
#define AON_EVENT_AUXWUSEL_WU2_EV_BATMON_TEMP \
                                0x00350000  // BATMON temperature update event 
#define AON_EVENT_AUXWUSEL_WU2_EV_BATMON_VOLT \
                                0x00360000  // BATMON voltage update event 
#define AON_EVENT_AUXWUSEL_WU2_EV_SOCAUX_CMP_B \
                                0x00370000  // Comperator B triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
#define AON_EVENT_AUXWUSEL_WU2_EV_SOCAUX_CMP_B_N \
                                0x00380000  // Comperator B not triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
                                            // (inverted) 
#define AON_EVENT_AUXWUSEL_WU2_EV_NONE \
                                0x003F0000  // No event, always low 
#define AON_EVENT_AUXWUSEL_WU1_EV_M \
                                0x00003F00  // AON_EVENT_SOURCE id# which will 
                                            // wake the AUX domain. (Default 
                                            // disabled) (2 nd priority) 

#define AON_EVENT_AUXWUSEL_WU1_EV_S 8
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD0 \
                                0x00000000  // Edge detect on DIO0 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD1 \
                                0x00000100  // Edge detect on DIO1 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD2 \
                                0x00000200  // Edge detect on DIO2 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD3 \
                                0x00000300  // Edge detect on DIO3 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD4 \
                                0x00000400  // Edge detect on DIO4 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD5 \
                                0x00000500  // Edge detect on DIO5 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD6 \
                                0x00000600  // Edge detect on DIO6 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD7 \
                                0x00000700  // Edge detect on DIO7 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD8 \
                                0x00000800  // Edge detect on DIO8 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD9 \
                                0x00000900  // Edge detect on DIO9 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD10 \
                                0x00000A00  // Edge detect on DIO10 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD11 \
                                0x00000B00  // Edge detect on DIO11 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD12 \
                                0x00000C00  // Edge detect on DIO12 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD13 \
                                0x00000D00  // Edge detect on DIO13 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD14 \
                                0x00000E00  // Edge detect on DIO14 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD15 \
                                0x00000F00  // Edge detect on DIO15 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD16 \
                                0x00001000  // Edge detect on DIO16 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD17 \
                                0x00001100  // Edge detect on DIO17 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD18 \
                                0x00001200  // Edge detect on DIO18 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD19 \
                                0x00001300  // Edge detect on DIO19 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD20 \
                                0x00001400  // Edge detect on DIO20 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD21 \
                                0x00001500  // Edge detect on DIO21 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD22 \
                                0x00001600  // Edge detect on DIO22 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD23 \
                                0x00001700  // Edge detect on DIO23 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD24 \
                                0x00001800  // Edge detect on DIO24 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD25 \
                                0x00001900  // Edge detect on DIO25 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD26 \
                                0x00001A00  // Edge detect on DIO26 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD27 \
                                0x00001B00  // Edge detect on DIO27 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD28 \
                                0x00001C00  // Edge detect on DIO28 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD29 \
                                0x00001D00  // Edge detect on DIO29 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD30 \
                                0x00001E00  // Edge detect on DIO30 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD31 \
                                0x00001F00  // Edge detect on DIO31 
#define AON_EVENT_AUXWUSEL_WU1_EV_PAD \
                                0x00002000  // Edge detect on any DIO 
#define AON_EVENT_AUXWUSEL_WU1_EV_SPIS_BYTE_DONE \
                                0x00002100  // SPIS byte received / 
                                            // transmitted 
#define AON_EVENT_AUXWUSEL_WU1_EV_SPIS_CS \
                                0x00002200  // SPIS CS_N asserted 
#define AON_EVENT_AUXWUSEL_WU1_EV_RTC_CH0 \
                                0x00002300  // RTC ch. 0 
#define AON_EVENT_AUXWUSEL_WU1_EV_RTC_CH1 \
                                0x00002400  // RTC ch. 1 
#define AON_EVENT_AUXWUSEL_WU1_EV_RTC_CH2 \
                                0x00002500  // RTC ch. 2 
#define AON_EVENT_AUXWUSEL_WU1_EV_RTC_CH0_DLY \
                                0x00002600  // RTC ch. 0 - delayed 
#define AON_EVENT_AUXWUSEL_WU1_EV_RTC_CH1_DLY \
                                0x00002700  // RTC ch. 1 - delayed 
#define AON_EVENT_AUXWUSEL_WU1_EV_RTC_CH2_DLY \
                                0x00002800  // RTC ch. 2 - delayed 
#define AON_EVENT_AUXWUSEL_WU1_EV_RTC_COMB_DLY \
                                0x00002900  // RTC combined delayed event 
#define AON_EVENT_AUXWUSEL_WU1_EV_RTC_UPD \
                                0x00002A00  // RTC Update Tick (16 kHz signal, 
                                            // i.e. event line toggles value 
                                            // every 32 kHz clock period) 
#define AON_EVENT_AUXWUSEL_WU1_EV_JTAG \
                                0x00002B00  // JTAG generated event 
#define AON_EVENT_AUXWUSEL_WU1_EV_AUX_SWEV0 \
                                0x00002C00  // AUX SW triggered event 
                                            // (suggested purpose: State 
                                            // machine done event) 
#define AON_EVENT_AUXWUSEL_WU1_EV_AUX_SWEV1 \
                                0x00002D00  // AUX SW triggered event 
                                            // (suggested purpose: Error event) 
#define AON_EVENT_AUXWUSEL_WU1_EV_AUX_SWEV2 \
                                0x00002E00  // AUX SW triggered event 
                                            // (suggested purpose: TBD. 
                                            // Triggering this event will also 
                                            // perform RTC Channel 2 clear) 
#define AON_EVENT_AUXWUSEL_WU1_EV_AUX_COMPA \
                                0x00002F00  // Comparator A triggered 
#define AON_EVENT_AUXWUSEL_WU1_EV_AUX_COMPB \
                                0x00003000  // Comparator B triggered 
#define AON_EVENT_AUXWUSEL_WU1_EV_AUX_ADC_DONE \
                                0x00003100  // ADC conversion completed 
#define AON_EVENT_AUXWUSEL_WU1_EV_AUX_TDC_DONE \
                                0x00003200  // TDC completed or timed out 
#define AON_EVENT_AUXWUSEL_WU1_EV_AUX_TIMER0 \
                                0x00003300  // Timer 0 event 
#define AON_EVENT_AUXWUSEL_WU1_EV_AUX_TIMER1 \
                                0x00003400  // Timer 1 event 
#define AON_EVENT_AUXWUSEL_WU1_EV_BATMON_TEMP \
                                0x00003500  // BATMON temperature update event 
#define AON_EVENT_AUXWUSEL_WU1_EV_BATMON_VOLT \
                                0x00003600  // BATMON voltage update event 
#define AON_EVENT_AUXWUSEL_WU1_EV_SOCAUX_CMP_B \
                                0x00003700  // Comperator B triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
#define AON_EVENT_AUXWUSEL_WU1_EV_SOCAUX_CMP_B_N \
                                0x00003800  // Comperator B not triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
                                            // (inverted) 
#define AON_EVENT_AUXWUSEL_WU1_EV_NONE \
                                0x00003F00  // No event, always low 
#define AON_EVENT_AUXWUSEL_WU0_EV_M \
                                0x0000003F  // AON_EVENT_SOURCE id# which will 
                                            // wake the AUX domain. (Default 
                                            // disabled) (first priority) 

#define AON_EVENT_AUXWUSEL_WU0_EV_S 0
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD0 \
                                0x00000000  // Edge detect on DIO0 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD1 \
                                0x00000001  // Edge detect on DIO1 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD2 \
                                0x00000002  // Edge detect on DIO2 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD3 \
                                0x00000003  // Edge detect on DIO3 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD4 \
                                0x00000004  // Edge detect on DIO4 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD5 \
                                0x00000005  // Edge detect on DIO5 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD6 \
                                0x00000006  // Edge detect on DIO6 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD7 \
                                0x00000007  // Edge detect on DIO7 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD8 \
                                0x00000008  // Edge detect on DIO8 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD9 \
                                0x00000009  // Edge detect on DIO9 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD10 \
                                0x0000000A  // Edge detect on DIO10 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD11 \
                                0x0000000B  // Edge detect on DIO11 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD12 \
                                0x0000000C  // Edge detect on DIO12 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD13 \
                                0x0000000D  // Edge detect on DIO13 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD14 \
                                0x0000000E  // Edge detect on DIO14 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD15 \
                                0x0000000F  // Edge detect on DIO15 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD16 \
                                0x00000010  // Edge detect on DIO16 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD17 \
                                0x00000011  // Edge detect on DIO17 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD18 \
                                0x00000012  // Edge detect on DIO18 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD19 \
                                0x00000013  // Edge detect on DIO19 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD20 \
                                0x00000014  // Edge detect on DIO20 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD21 \
                                0x00000015  // Edge detect on DIO21 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD22 \
                                0x00000016  // Edge detect on DIO22 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD23 \
                                0x00000017  // Edge detect on DIO23 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD24 \
                                0x00000018  // Edge detect on DIO24 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD25 \
                                0x00000019  // Edge detect on DIO25 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD26 \
                                0x0000001A  // Edge detect on DIO26 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD27 \
                                0x0000001B  // Edge detect on DIO27 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD28 \
                                0x0000001C  // Edge detect on DIO28 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD29 \
                                0x0000001D  // Edge detect on DIO29 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD30 \
                                0x0000001E  // Edge detect on DIO30 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD31 \
                                0x0000001F  // Edge detect on DIO31 
#define AON_EVENT_AUXWUSEL_WU0_EV_PAD \
                                0x00000020  // Edge detect on any DIO 
#define AON_EVENT_AUXWUSEL_WU0_EV_SPIS_BYTE_DONE \
                                0x00000021  // SPIS byte received / 
                                            // transmitted 
#define AON_EVENT_AUXWUSEL_WU0_EV_SPIS_CS \
                                0x00000022  // SPIS CS_N asserted 
#define AON_EVENT_AUXWUSEL_WU0_EV_RTC_CH0 \
                                0x00000023  // RTC ch. 0 
#define AON_EVENT_AUXWUSEL_WU0_EV_RTC_CH1 \
                                0x00000024  // RTC ch. 1 
#define AON_EVENT_AUXWUSEL_WU0_EV_RTC_CH2 \
                                0x00000025  // RTC ch. 2 
#define AON_EVENT_AUXWUSEL_WU0_EV_RTC_CH0_DLY \
                                0x00000026  // RTC ch. 0 - delayed 
#define AON_EVENT_AUXWUSEL_WU0_EV_RTC_CH1_DLY \
                                0x00000027  // RTC ch. 1 - delayed 
#define AON_EVENT_AUXWUSEL_WU0_EV_RTC_CH2_DLY \
                                0x00000028  // RTC ch. 2 - delayed 
#define AON_EVENT_AUXWUSEL_WU0_EV_RTC_COMB_DLY \
                                0x00000029  // RTC combined delayed event 
#define AON_EVENT_AUXWUSEL_WU0_EV_RTC_UPD \
                                0x0000002A  // RTC Update Tick (16 kHz signal, 
                                            // i.e. event line toggles value 
                                            // every 32 kHz clock period) 
#define AON_EVENT_AUXWUSEL_WU0_EV_JTAG \
                                0x0000002B  // JTAG generated event 
#define AON_EVENT_AUXWUSEL_WU0_EV_AUX_SWEV0 \
                                0x0000002C  // AUX SW triggered event 
                                            // (suggested purpose: State 
                                            // machine done event) 
#define AON_EVENT_AUXWUSEL_WU0_EV_AUX_SWEV1 \
                                0x0000002D  // AUX SW triggered event 
                                            // (suggested purpose: Error event) 
#define AON_EVENT_AUXWUSEL_WU0_EV_AUX_SWEV2 \
                                0x0000002E  // AUX SW triggered event 
                                            // (suggested purpose: TBD. 
                                            // Triggering this event will also 
                                            // perform RTC Channel 2 clear) 
#define AON_EVENT_AUXWUSEL_WU0_EV_AUX_COMPA \
                                0x0000002F  // Comparator A triggered 
#define AON_EVENT_AUXWUSEL_WU0_EV_AUX_COMPB \
                                0x00000030  // Comparator B triggered 
#define AON_EVENT_AUXWUSEL_WU0_EV_AUX_ADC_DONE \
                                0x00000031  // ADC conversion completed 
#define AON_EVENT_AUXWUSEL_WU0_EV_AUX_TDC_DONE \
                                0x00000032  // TDC completed or timed out 
#define AON_EVENT_AUXWUSEL_WU0_EV_AUX_TIMER0 \
                                0x00000033  // Timer 0 event 
#define AON_EVENT_AUXWUSEL_WU0_EV_AUX_TIMER1 \
                                0x00000034  // Timer 1 event 
#define AON_EVENT_AUXWUSEL_WU0_EV_BATMON_TEMP \
                                0x00000035  // BATMON temperature update event 
#define AON_EVENT_AUXWUSEL_WU0_EV_BATMON_VOLT \
                                0x00000036  // BATMON voltage update event 
#define AON_EVENT_AUXWUSEL_WU0_EV_SOCAUX_CMP_B \
                                0x00000037  // Comperator B triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
#define AON_EVENT_AUXWUSEL_WU0_EV_SOCAUX_CMP_B_N \
                                0x00000038  // Comperator B not triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
                                            // (inverted) 
#define AON_EVENT_AUXWUSEL_WU0_EV_NONE \
                                0x0000003F  // No event, always low 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_EVENT_O_EVTOMCUSEL register.
//
//*****************************************************************************
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_M \
                                0x003F0000  // AON_EVENT_SOURCE id# which is 
                                            // fed to MCU_AONS2 event. (default 
                                            // is JTAG) 

#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_S 16
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD0 \
                                0x00000000  // Edge detect on DIO0 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD1 \
                                0x00010000  // Edge detect on DIO1 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD2 \
                                0x00020000  // Edge detect on DIO2 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD3 \
                                0x00030000  // Edge detect on DIO3 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD4 \
                                0x00040000  // Edge detect on DIO4 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD5 \
                                0x00050000  // Edge detect on DIO5 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD6 \
                                0x00060000  // Edge detect on DIO6 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD7 \
                                0x00070000  // Edge detect on DIO7 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD8 \
                                0x00080000  // Edge detect on DIO8 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD9 \
                                0x00090000  // Edge detect on DIO9 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD10 \
                                0x000A0000  // Edge detect on DIO10 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD11 \
                                0x000B0000  // Edge detect on DIO11 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD12 \
                                0x000C0000  // Edge detect on DIO12 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD13 \
                                0x000D0000  // Edge detect on DIO13 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD14 \
                                0x000E0000  // Edge detect on DIO14 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD15 \
                                0x000F0000  // Edge detect on DIO15 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD16 \
                                0x00100000  // Edge detect on DIO16 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD17 \
                                0x00110000  // Edge detect on DIO17 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD18 \
                                0x00120000  // Edge detect on DIO18 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD19 \
                                0x00130000  // Edge detect on DIO19 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD20 \
                                0x00140000  // Edge detect on DIO20 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD21 \
                                0x00150000  // Edge detect on DIO21 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD22 \
                                0x00160000  // Edge detect on DIO22 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD23 \
                                0x00170000  // Edge detect on DIO23 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD24 \
                                0x00180000  // Edge detect on DIO24 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD25 \
                                0x00190000  // Edge detect on DIO25 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD26 \
                                0x001A0000  // Edge detect on DIO26 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD27 \
                                0x001B0000  // Edge detect on DIO27 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD28 \
                                0x001C0000  // Edge detect on DIO28 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD29 \
                                0x001D0000  // Edge detect on DIO29 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD30 \
                                0x001E0000  // Edge detect on DIO30 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD31 \
                                0x001F0000  // Edge detect on DIO31 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_PAD \
                                0x00200000  // Edge detect on any DIO 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_SPIS_BYTE_DONE \
                                0x00210000  // SPIS byte received / 
                                            // transmitted 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_SPIS_CS \
                                0x00220000  // SPIS CS_N asserted 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_RTC_CH0 \
                                0x00230000  // RTC ch. 0 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_RTC_CH1 \
                                0x00240000  // RTC ch. 1 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_RTC_CH2 \
                                0x00250000  // RTC ch. 2 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_RTC_CH0_DLY \
                                0x00260000  // RTC ch. 0 - delayed 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_RTC_CH1_DLY \
                                0x00270000  // RTC ch. 1 - delayed 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_RTC_CH2_DLY \
                                0x00280000  // RTC ch. 2 - delayed 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_RTC_COMB_DLY \
                                0x00290000  // RTC combined delayed event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_RTC_UPD \
                                0x002A0000  // RTC Update Tick (16 kHz signal, 
                                            // i.e. event line toggles value 
                                            // every 32 kHz clock period) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_JTAG \
                                0x002B0000  // JTAG generated event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_AUX_SWEV0 \
                                0x002C0000  // AUX SW triggered event 
                                            // (suggested purpose: State 
                                            // machine done event) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_AUX_SWEV1 \
                                0x002D0000  // AUX SW triggered event 
                                            // (suggested purpose: Error event) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_AUX_SWEV2 \
                                0x002E0000  // AUX SW triggered event 
                                            // (suggested purpose: TBD. 
                                            // Triggering this event will also 
                                            // perform RTC Channel 2 clear) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_AUX_COMPA \
                                0x002F0000  // Comparator A triggered 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_AUX_COMPB \
                                0x00300000  // Comparator B triggered 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_AUX_ADC_DONE \
                                0x00310000  // ADC conversion completed 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_AUX_TDC_DONE \
                                0x00320000  // TDC completed or timed out 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_AUX_TIMER0 \
                                0x00330000  // Timer 0 event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_AUX_TIMER1 \
                                0x00340000  // Timer 1 event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_BATMON_TEMP \
                                0x00350000  // BATMON temperature update event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_BATMON_VOLT \
                                0x00360000  // BATMON voltage update event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_SOCAUX_CMP_B \
                                0x00370000  // Comperator B triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_SOCAUX_CMP_B_N \
                                0x00380000  // Comperator B not triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
                                            // (inverted) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG2_EV_NONE \
                                0x003F0000  // No event, always low 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_M \
                                0x00003F00  // AON_EVENT_SOURCE id# which is 
                                            // fed to MCU_AONS1 event. (default 
                                            // is JTAG) 

#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_S 8
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD0 \
                                0x00000000  // Edge detect on DIO0 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD1 \
                                0x00000100  // Edge detect on DIO1 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD2 \
                                0x00000200  // Edge detect on DIO2 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD3 \
                                0x00000300  // Edge detect on DIO3 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD4 \
                                0x00000400  // Edge detect on DIO4 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD5 \
                                0x00000500  // Edge detect on DIO5 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD6 \
                                0x00000600  // Edge detect on DIO6 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD7 \
                                0x00000700  // Edge detect on DIO7 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD8 \
                                0x00000800  // Edge detect on DIO8 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD9 \
                                0x00000900  // Edge detect on DIO9 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD10 \
                                0x00000A00  // Edge detect on DIO10 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD11 \
                                0x00000B00  // Edge detect on DIO11 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD12 \
                                0x00000C00  // Edge detect on DIO12 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD13 \
                                0x00000D00  // Edge detect on DIO13 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD14 \
                                0x00000E00  // Edge detect on DIO14 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD15 \
                                0x00000F00  // Edge detect on DIO15 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD16 \
                                0x00001000  // Edge detect on DIO16 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD17 \
                                0x00001100  // Edge detect on DIO17 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD18 \
                                0x00001200  // Edge detect on DIO18 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD19 \
                                0x00001300  // Edge detect on DIO19 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD20 \
                                0x00001400  // Edge detect on DIO20 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD21 \
                                0x00001500  // Edge detect on DIO21 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD22 \
                                0x00001600  // Edge detect on DIO22 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD23 \
                                0x00001700  // Edge detect on DIO23 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD24 \
                                0x00001800  // Edge detect on DIO24 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD25 \
                                0x00001900  // Edge detect on DIO25 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD26 \
                                0x00001A00  // Edge detect on DIO26 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD27 \
                                0x00001B00  // Edge detect on DIO27 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD28 \
                                0x00001C00  // Edge detect on DIO28 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD29 \
                                0x00001D00  // Edge detect on DIO29 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD30 \
                                0x00001E00  // Edge detect on DIO30 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD31 \
                                0x00001F00  // Edge detect on DIO31 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_PAD \
                                0x00002000  // Edge detect on any DIO 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_SPIS_BYTE_DONE \
                                0x00002100  // SPIS byte received / 
                                            // transmitted 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_SPIS_CS \
                                0x00002200  // SPIS CS_N asserted 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_RTC_CH0 \
                                0x00002300  // RTC ch. 0 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_RTC_CH1 \
                                0x00002400  // RTC ch. 1 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_RTC_CH2 \
                                0x00002500  // RTC ch. 2 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_RTC_CH0_DLY \
                                0x00002600  // RTC ch. 0 - delayed 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_RTC_CH1_DLY \
                                0x00002700  // RTC ch. 1 - delayed 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_RTC_CH2_DLY \
                                0x00002800  // RTC ch. 2 - delayed 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_RTC_COMB_DLY \
                                0x00002900  // RTC combined delayed event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_RTC_UPD \
                                0x00002A00  // RTC Update Tick (16 kHz signal, 
                                            // i.e. event line toggles value 
                                            // every 32 kHz clock period) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_JTAG \
                                0x00002B00  // JTAG generated event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_AUX_SWEV0 \
                                0x00002C00  // AUX SW triggered event 
                                            // (suggested purpose: State 
                                            // machine done event) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_AUX_SWEV1 \
                                0x00002D00  // AUX SW triggered event 
                                            // (suggested purpose: Error event) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_AUX_SWEV2 \
                                0x00002E00  // AUX SW triggered event 
                                            // (suggested purpose: TBD. 
                                            // Triggering this event will also 
                                            // perform RTC Channel 2 clear) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_AUX_COMPA \
                                0x00002F00  // Comparator A triggered 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_AUX_COMPB \
                                0x00003000  // Comparator B triggered 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_AUX_ADC_DONE \
                                0x00003100  // ADC conversion completed 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_AUX_TDC_DONE \
                                0x00003200  // TDC completed or timed out 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_AUX_TIMER0 \
                                0x00003300  // Timer 0 event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_AUX_TIMER1 \
                                0x00003400  // Timer 1 event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_BATMON_TEMP \
                                0x00003500  // BATMON temperature update event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_BATMON_VOLT \
                                0x00003600  // BATMON voltage update event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_SOCAUX_CMP_B \
                                0x00003700  // Comperator B triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_SOCAUX_CMP_B_N \
                                0x00003800  // Comperator B not triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
                                            // (inverted) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG1_EV_NONE \
                                0x00003F00  // No event, always low 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_M \
                                0x0000003F  // AON_EVENT_SOURCE id# which is 
                                            // fed to MCU_AONS0 event. (default 
                                            // is JTAG) 

#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_S 0
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD0 \
                                0x00000000  // Edge detect on DIO0 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD1 \
                                0x00000001  // Edge detect on DIO1 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD2 \
                                0x00000002  // Edge detect on DIO2 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD3 \
                                0x00000003  // Edge detect on DIO3 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD4 \
                                0x00000004  // Edge detect on DIO4 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD5 \
                                0x00000005  // Edge detect on DIO5 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD6 \
                                0x00000006  // Edge detect on DIO6 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD7 \
                                0x00000007  // Edge detect on DIO7 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD8 \
                                0x00000008  // Edge detect on DIO8 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD9 \
                                0x00000009  // Edge detect on DIO9 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD10 \
                                0x0000000A  // Edge detect on DIO10 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD11 \
                                0x0000000B  // Edge detect on DIO11 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD12 \
                                0x0000000C  // Edge detect on DIO12 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD13 \
                                0x0000000D  // Edge detect on DIO13 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD14 \
                                0x0000000E  // Edge detect on DIO14 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD15 \
                                0x0000000F  // Edge detect on DIO15 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD16 \
                                0x00000010  // Edge detect on DIO16 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD17 \
                                0x00000011  // Edge detect on DIO17 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD18 \
                                0x00000012  // Edge detect on DIO18 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD19 \
                                0x00000013  // Edge detect on DIO19 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD20 \
                                0x00000014  // Edge detect on DIO20 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD21 \
                                0x00000015  // Edge detect on DIO21 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD22 \
                                0x00000016  // Edge detect on DIO22 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD23 \
                                0x00000017  // Edge detect on DIO23 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD24 \
                                0x00000018  // Edge detect on DIO24 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD25 \
                                0x00000019  // Edge detect on DIO25 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD26 \
                                0x0000001A  // Edge detect on DIO26 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD27 \
                                0x0000001B  // Edge detect on DIO27 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD28 \
                                0x0000001C  // Edge detect on DIO28 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD29 \
                                0x0000001D  // Edge detect on DIO29 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD30 \
                                0x0000001E  // Edge detect on DIO30 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD31 \
                                0x0000001F  // Edge detect on DIO31 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_PAD \
                                0x00000020  // Edge detect on any DIO 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_SPIS_BYTE_DONE \
                                0x00000021  // SPIS byte received / 
                                            // transmitted 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_SPIS_CS \
                                0x00000022  // SPIS CS_N asserted 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_RTC_CH0 \
                                0x00000023  // RTC ch. 0 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_RTC_CH1 \
                                0x00000024  // RTC ch. 1 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_RTC_CH2 \
                                0x00000025  // RTC ch. 2 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_RTC_CH0_DLY \
                                0x00000026  // RTC ch. 0 - delayed 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_RTC_CH1_DLY \
                                0x00000027  // RTC ch. 1 - delayed 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_RTC_CH2_DLY \
                                0x00000028  // RTC ch. 2 - delayed 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_RTC_COMB_DLY \
                                0x00000029  // RTC combined delayed event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_RTC_UPD \
                                0x0000002A  // RTC Update Tick (16 kHz signal, 
                                            // i.e. event line toggles value 
                                            // every 32 kHz clock period) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_JTAG \
                                0x0000002B  // JTAG generated event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_AUX_SWEV0 \
                                0x0000002C  // AUX SW triggered event 
                                            // (suggested purpose: State 
                                            // machine done event) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_AUX_SWEV1 \
                                0x0000002D  // AUX SW triggered event 
                                            // (suggested purpose: Error event) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_AUX_SWEV2 \
                                0x0000002E  // AUX SW triggered event 
                                            // (suggested purpose: TBD. 
                                            // Triggering this event will also 
                                            // perform RTC Channel 2 clear) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_AUX_COMPA \
                                0x0000002F  // Comparator A triggered 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_AUX_COMPB \
                                0x00000030  // Comparator B triggered 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_AUX_ADC_DONE \
                                0x00000031  // ADC conversion completed 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_AUX_TDC_DONE \
                                0x00000032  // TDC completed or timed out 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_AUX_TIMER0 \
                                0x00000033  // Timer 0 event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_AUX_TIMER1 \
                                0x00000034  // Timer 1 event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_BATMON_TEMP \
                                0x00000035  // BATMON temperature update event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_BATMON_VOLT \
                                0x00000036  // BATMON voltage update event 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_SOCAUX_CMP_B \
                                0x00000037  // Comperator B triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_SOCAUX_CMP_B_N \
                                0x00000038  // Comperator B not triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
                                            // (inverted) 
#define AON_EVENT_EVTOMCUSEL_AON_PROG0_EV_NONE \
                                0x0000003F  // No event, always low 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_EVENT_O_RTCSEL register.
//
//*****************************************************************************
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_M \
                                0x0000003F  // AON_EVENT_SOURCE id# which is 
                                            // fed to RTC. (default is NULL, 
                                            // i.e. disabled) 

#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_S 0
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD0 \
                                0x00000000  // Edge detect on DIO0 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD1 \
                                0x00000001  // Edge detect on DIO1 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD2 \
                                0x00000002  // Edge detect on DIO2 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD3 \
                                0x00000003  // Edge detect on DIO3 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD4 \
                                0x00000004  // Edge detect on DIO4 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD5 \
                                0x00000005  // Edge detect on DIO5 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD6 \
                                0x00000006  // Edge detect on DIO6 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD7 \
                                0x00000007  // Edge detect on DIO7 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD8 \
                                0x00000008  // Edge detect on DIO8 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD9 \
                                0x00000009  // Edge detect on DIO9 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD10 \
                                0x0000000A  // Edge detect on DIO10 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD11 \
                                0x0000000B  // Edge detect on DIO11 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD12 \
                                0x0000000C  // Edge detect on DIO12 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD13 \
                                0x0000000D  // Edge detect on DIO13 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD14 \
                                0x0000000E  // Edge detect on DIO14 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD15 \
                                0x0000000F  // Edge detect on DIO15 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD16 \
                                0x00000010  // Edge detect on DIO16 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD17 \
                                0x00000011  // Edge detect on DIO17 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD18 \
                                0x00000012  // Edge detect on DIO18 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD19 \
                                0x00000013  // Edge detect on DIO19 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD20 \
                                0x00000014  // Edge detect on DIO20 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD21 \
                                0x00000015  // Edge detect on DIO21 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD22 \
                                0x00000016  // Edge detect on DIO22 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD23 \
                                0x00000017  // Edge detect on DIO23 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD24 \
                                0x00000018  // Edge detect on DIO24 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD25 \
                                0x00000019  // Edge detect on DIO25 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD26 \
                                0x0000001A  // Edge detect on DIO26 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD27 \
                                0x0000001B  // Edge detect on DIO27 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD28 \
                                0x0000001C  // Edge detect on DIO28 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD29 \
                                0x0000001D  // Edge detect on DIO29 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD30 \
                                0x0000001E  // Edge detect on DIO30 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD31 \
                                0x0000001F  // Edge detect on DIO31 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_PAD \
                                0x00000020  // Edge detect on any DIO 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_SPIS_BYTE_DONE \
                                0x00000021  // SPIS byte received / 
                                            // transmitted 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_SPIS_CS \
                                0x00000022  // SPIS CS_N asserted 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_RTC_CH0 \
                                0x00000023  // RTC ch. 0 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_RTC_CH1 \
                                0x00000024  // RTC ch. 1 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_RTC_CH2 \
                                0x00000025  // RTC ch. 2 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_RTC_CH0_DLY \
                                0x00000026  // RTC ch. 0 - delayed 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_RTC_CH1_DLY \
                                0x00000027  // RTC ch. 1 - delayed 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_RTC_CH2_DLY \
                                0x00000028  // RTC ch. 2 - delayed 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_RTC_COMB_DLY \
                                0x00000029  // RTC combined delayed event 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_RTC_UPD \
                                0x0000002A  // RTC Update Tick (16 kHz signal, 
                                            // i.e. event line toggles value 
                                            // every 32 kHz clock period) 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_JTAG \
                                0x0000002B  // JTAG generated event 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_AUX_SWEV0 \
                                0x0000002C  // AUX SW triggered event 
                                            // (suggested purpose: State 
                                            // machine done event) 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_AUX_SWEV1 \
                                0x0000002D  // AUX SW triggered event 
                                            // (suggested purpose: Error event) 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_AUX_SWEV2 \
                                0x0000002E  // AUX SW triggered event 
                                            // (suggested purpose: TBD. 
                                            // Triggering this event will also 
                                            // perform RTC Channel 2 clear) 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_AUX_COMPA \
                                0x0000002F  // Comparator A triggered 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_AUX_COMPB \
                                0x00000030  // Comparator B triggered 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_AUX_ADC_DONE \
                                0x00000031  // ADC conversion completed 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_AUX_TDC_DONE \
                                0x00000032  // TDC completed or timed out 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_AUX_TIMER0 \
                                0x00000033  // Timer 0 event 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_AUX_TIMER1 \
                                0x00000034  // Timer 1 event 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_BATMON_TEMP \
                                0x00000035  // BATMON temperature update event 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_BATMON_VOLT \
                                0x00000036  // BATMON voltage update event 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_SOCAUX_CMP_B \
                                0x00000037  // Comperator B triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_SOCAUX_CMP_B_N \
                                0x00000038  // Comperator B not triggered. 
                                            // Asynchronous signal directly 
                                            // from SOCAUX Comperator B 
                                            // (inverted) 
#define AON_EVENT_RTCSEL_RTC_CH1_CAPT_EV_NONE \
                                0x0000003F  // No event, always low 


#endif // __HW_AON_EVENT_H__

