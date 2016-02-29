
/******************************************************************************
*  Filename:       hw_gpio.h
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
#ifndef __HW_GPIO_H__
#define __HW_GPIO_H__

//*****************************************************************************
//
// The following are defines for the GPIO register offsets.
//
//*****************************************************************************
#define GPIO_O_DOUT3_0          0x00000000  // Unpacked Data Out register for 
                                            // GPIO(#M-#N) 
#define GPIO_O_DOUT7_4          0x00000004  // Unpacked Data Out register for 
                                            // GPIO(#M-#N) 
#define GPIO_O_DOUT11_8         0x00000008  // Unpacked Data Out register for 
                                            // GPIO(#M-#N) 
#define GPIO_O_DOUT15_12        0x0000000C  // Unpacked Data Out register for 
                                            // GPIO(#M-#N) 
#define GPIO_O_DOUT19_16        0x00000010  // Unpacked Data Out register for 
                                            // GPIO(#M-#N) 
#define GPIO_O_DOUT23_20        0x00000014  // Unpacked Data Out register for 
                                            // GPIO(#M-#N) 
#define GPIO_O_DOUT27_24        0x00000018  // Unpacked Data Out register for 
                                            // GPIO(#M-#N) 
#define GPIO_O_DOUT31_28        0x0000001C  // Unpacked Data Out register for 
                                            // GPIO(#M-#N) 
#define GPIO_O_DOUT31_0         0x00000080  // Data output for GPIO 0 to 31 
#define GPIO_O_DOUTSET31_0      0x00000090  // Writing 1 to a bit position 
                                            // sets the corresponding bit in 
                                            // the DATO register 
#define GPIO_O_DOUTCLR31_0      0x000000A0  // Writing 1 to a bit position 
                                            // clears the corresponding bit in 
                                            // the DATO register 
#define GPIO_O_DOUTTGL31_0      0x000000B0  // Writing 1 to a bit position 
                                            // toggles the corresponding bit in 
                                            // the DATO register 
#define GPIO_O_DIN31_0          0x000000C0  // Data input from GPIO 0 to 31 
#define GPIO_O_DOE31_0          0x000000D0  // Data output enable for GPIO 0 
                                            // to 31 
#define GPIO_O_EVFLAGS31_0      0x000000E0  // Event register for GPIO 0 to 
                                            // 31. Read will display triggered 
                                            // events, write one will clear 
                                            // event. 


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIO_O_DOUT3_0 register.
//
//*****************************************************************************
#define GPIO_DOUT3_0_DIO3       0x01000000  // Sets the state of the pin that 
                                            // is configured as GPIO#3, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT3_0_DIO3_M     0x01000000
#define GPIO_DOUT3_0_DIO3_S     24
#define GPIO_DOUT3_0_DIO2       0x00010000  // Sets the state of the pin that 
                                            // is configured as GPIO#2, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT3_0_DIO2_M     0x00010000
#define GPIO_DOUT3_0_DIO2_S     16
#define GPIO_DOUT3_0_DIO1       0x00000100  // Sets the state of the pin that 
                                            // is configured as GPIO#1, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT3_0_DIO1_M     0x00000100
#define GPIO_DOUT3_0_DIO1_S     8
#define GPIO_DOUT3_0_DIO0       0x00000001  // Sets the state of the pin that 
                                            // is configured as GPIO#0, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT3_0_DIO0_M     0x00000001
#define GPIO_DOUT3_0_DIO0_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPIO_O_DOUT7_4 register.
//
//*****************************************************************************
#define GPIO_DOUT7_4_DIO7       0x01000000  // Sets the state of the pin that 
                                            // is configured as GPIO#7, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT7_4_DIO7_M     0x01000000
#define GPIO_DOUT7_4_DIO7_S     24
#define GPIO_DOUT7_4_DIO6       0x00010000  // Sets the state of the pin that 
                                            // is configured as GPIO#6, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT7_4_DIO6_M     0x00010000
#define GPIO_DOUT7_4_DIO6_S     16
#define GPIO_DOUT7_4_DIO5       0x00000100  // Sets the state of the pin that 
                                            // is configured as GPIO#5, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT7_4_DIO5_M     0x00000100
#define GPIO_DOUT7_4_DIO5_S     8
#define GPIO_DOUT7_4_DIO4       0x00000001  // Sets the state of the pin that 
                                            // is configured as GPIO#4, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT7_4_DIO4_M     0x00000001
#define GPIO_DOUT7_4_DIO4_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// GPIO_O_DOUT11_8 register.
//
//*****************************************************************************
#define GPIO_DOUT11_8_DIO11     0x01000000  // Sets the state of the pin that 
                                            // is configured as GPIO#11, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT11_8_DIO11_M   0x01000000
#define GPIO_DOUT11_8_DIO11_S   24
#define GPIO_DOUT11_8_DIO10     0x00010000  // Sets the state of the pin that 
                                            // is configured as GPIO#10, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT11_8_DIO10_M   0x00010000
#define GPIO_DOUT11_8_DIO10_S   16
#define GPIO_DOUT11_8_DIO9      0x00000100  // Sets the state of the pin that 
                                            // is configured as GPIO#9, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT11_8_DIO9_M    0x00000100
#define GPIO_DOUT11_8_DIO9_S    8
#define GPIO_DOUT11_8_DIO8      0x00000001  // Sets the state of the pin that 
                                            // is configured as GPIO#8, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT11_8_DIO8_M    0x00000001
#define GPIO_DOUT11_8_DIO8_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// GPIO_O_DOUT15_12 register.
//
//*****************************************************************************
#define GPIO_DOUT15_12_DIO15    0x01000000  // Sets the state of the pin that 
                                            // is configured as GPIO#15, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT15_12_DIO15_M  0x01000000
#define GPIO_DOUT15_12_DIO15_S  24
#define GPIO_DOUT15_12_DIO14    0x00010000  // Sets the state of the pin that 
                                            // is configured as GPIO#14, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT15_12_DIO14_M  0x00010000
#define GPIO_DOUT15_12_DIO14_S  16
#define GPIO_DOUT15_12_DIO13    0x00000100  // Sets the state of the pin that 
                                            // is configured as GPIO#13, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT15_12_DIO13_M  0x00000100
#define GPIO_DOUT15_12_DIO13_S  8
#define GPIO_DOUT15_12_DIO12    0x00000001  // Sets the state of the pin that 
                                            // is configured as GPIO#12, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT15_12_DIO12_M  0x00000001
#define GPIO_DOUT15_12_DIO12_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// GPIO_O_DOUT19_16 register.
//
//*****************************************************************************
#define GPIO_DOUT19_16_DIO19    0x01000000  // Sets the state of the pin that 
                                            // is configured as GPIO#19, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT19_16_DIO19_M  0x01000000
#define GPIO_DOUT19_16_DIO19_S  24
#define GPIO_DOUT19_16_DIO18    0x00010000  // Sets the state of the pin that 
                                            // is configured as GPIO#18, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT19_16_DIO18_M  0x00010000
#define GPIO_DOUT19_16_DIO18_S  16
#define GPIO_DOUT19_16_DIO17    0x00000100  // Sets the state of the pin that 
                                            // is configured as GPIO#17, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT19_16_DIO17_M  0x00000100
#define GPIO_DOUT19_16_DIO17_S  8
#define GPIO_DOUT19_16_DIO16    0x00000001  // Sets the state of the pin that 
                                            // is configured as GPIO#16, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT19_16_DIO16_M  0x00000001
#define GPIO_DOUT19_16_DIO16_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// GPIO_O_DOUT23_20 register.
//
//*****************************************************************************
#define GPIO_DOUT23_20_DIO23    0x01000000  // Sets the state of the pin that 
                                            // is configured as GPIO#23, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT23_20_DIO23_M  0x01000000
#define GPIO_DOUT23_20_DIO23_S  24
#define GPIO_DOUT23_20_DIO22    0x00010000  // Sets the state of the pin that 
                                            // is configured as GPIO#22, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT23_20_DIO22_M  0x00010000
#define GPIO_DOUT23_20_DIO22_S  16
#define GPIO_DOUT23_20_DIO21    0x00000100  // Sets the state of the pin that 
                                            // is configured as GPIO#21, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT23_20_DIO21_M  0x00000100
#define GPIO_DOUT23_20_DIO21_S  8
#define GPIO_DOUT23_20_DIO20    0x00000001  // Sets the state of the pin that 
                                            // is configured as GPIO#20, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT23_20_DIO20_M  0x00000001
#define GPIO_DOUT23_20_DIO20_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// GPIO_O_DOUT27_24 register.
//
//*****************************************************************************
#define GPIO_DOUT27_24_DIO27    0x01000000  // Sets the state of the pin that 
                                            // is configured as GPIO#27, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT27_24_DIO27_M  0x01000000
#define GPIO_DOUT27_24_DIO27_S  24
#define GPIO_DOUT27_24_DIO26    0x00010000  // Sets the state of the pin that 
                                            // is configured as GPIO#26, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT27_24_DIO26_M  0x00010000
#define GPIO_DOUT27_24_DIO26_S  16
#define GPIO_DOUT27_24_DIO25    0x00000100  // Sets the state of the pin that 
                                            // is configured as GPIO#25, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT27_24_DIO25_M  0x00000100
#define GPIO_DOUT27_24_DIO25_S  8
#define GPIO_DOUT27_24_DIO24    0x00000001  // Sets the state of the pin that 
                                            // is configured as GPIO#24, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT27_24_DIO24_M  0x00000001
#define GPIO_DOUT27_24_DIO24_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// GPIO_O_DOUT31_28 register.
//
//*****************************************************************************
#define GPIO_DOUT31_28_DIO31    0x01000000  // Sets the state of the pin that 
                                            // is configured as GPIO#31, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT31_28_DIO31_M  0x01000000
#define GPIO_DOUT31_28_DIO31_S  24
#define GPIO_DOUT31_28_DIO30    0x00010000  // Sets the state of the pin that 
                                            // is configured as GPIO#30, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT31_28_DIO30_M  0x00010000
#define GPIO_DOUT31_28_DIO30_S  16
#define GPIO_DOUT31_28_DIO29    0x00000100  // Sets the state of the pin that 
                                            // is configured as GPIO#29, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT31_28_DIO29_M  0x00000100
#define GPIO_DOUT31_28_DIO29_S  8
#define GPIO_DOUT31_28_DIO28    0x00000001  // Sets the state of the pin that 
                                            // is configured as GPIO#28, if the 
                                            // corresponding DATOE bitfield is 
                                            // set. This register should not be 
                                            // used to read the GPIO status, 
                                            // this must be done via DATI 
                                            // register. 
#define GPIO_DOUT31_28_DIO28_M  0x00000001
#define GPIO_DOUT31_28_DIO28_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// GPIO_O_DOUT31_0 register.
//
//*****************************************************************************
#define GPIO_DOUT31_0_DIO31     0x80000000  // Data output for GPIO 31 
#define GPIO_DOUT31_0_DIO31_M   0x80000000
#define GPIO_DOUT31_0_DIO31_S   31
#define GPIO_DOUT31_0_DIO30     0x40000000  // Data output for GPIO 30 
#define GPIO_DOUT31_0_DIO30_M   0x40000000
#define GPIO_DOUT31_0_DIO30_S   30
#define GPIO_DOUT31_0_DIO29     0x20000000  // Data output for GPIO 29 
#define GPIO_DOUT31_0_DIO29_M   0x20000000
#define GPIO_DOUT31_0_DIO29_S   29
#define GPIO_DOUT31_0_DIO28     0x10000000  // Data output for GPIO 28 
#define GPIO_DOUT31_0_DIO28_M   0x10000000
#define GPIO_DOUT31_0_DIO28_S   28
#define GPIO_DOUT31_0_DIO27     0x08000000  // Data output for GPIO 27 
#define GPIO_DOUT31_0_DIO27_M   0x08000000
#define GPIO_DOUT31_0_DIO27_S   27
#define GPIO_DOUT31_0_DIO26     0x04000000  // Data output for GPIO 26 
#define GPIO_DOUT31_0_DIO26_M   0x04000000
#define GPIO_DOUT31_0_DIO26_S   26
#define GPIO_DOUT31_0_DIO25     0x02000000  // Data output for GPIO 25 
#define GPIO_DOUT31_0_DIO25_M   0x02000000
#define GPIO_DOUT31_0_DIO25_S   25
#define GPIO_DOUT31_0_DIO24     0x01000000  // Data output for GPIO 24 
#define GPIO_DOUT31_0_DIO24_M   0x01000000
#define GPIO_DOUT31_0_DIO24_S   24
#define GPIO_DOUT31_0_DIO23     0x00800000  // Data output for GPIO 23 
#define GPIO_DOUT31_0_DIO23_M   0x00800000
#define GPIO_DOUT31_0_DIO23_S   23
#define GPIO_DOUT31_0_DIO22     0x00400000  // Data output for GPIO 22 
#define GPIO_DOUT31_0_DIO22_M   0x00400000
#define GPIO_DOUT31_0_DIO22_S   22
#define GPIO_DOUT31_0_DIO21     0x00200000  // Data output for GPIO 21 
#define GPIO_DOUT31_0_DIO21_M   0x00200000
#define GPIO_DOUT31_0_DIO21_S   21
#define GPIO_DOUT31_0_DIO20     0x00100000  // Data output for GPIO 20 
#define GPIO_DOUT31_0_DIO20_M   0x00100000
#define GPIO_DOUT31_0_DIO20_S   20
#define GPIO_DOUT31_0_DIO19     0x00080000  // Data output for GPIO 19 
#define GPIO_DOUT31_0_DIO19_M   0x00080000
#define GPIO_DOUT31_0_DIO19_S   19
#define GPIO_DOUT31_0_DIO18     0x00040000  // Data output for GPIO 18 
#define GPIO_DOUT31_0_DIO18_M   0x00040000
#define GPIO_DOUT31_0_DIO18_S   18
#define GPIO_DOUT31_0_DIO17     0x00020000  // Data output for GPIO 17 
#define GPIO_DOUT31_0_DIO17_M   0x00020000
#define GPIO_DOUT31_0_DIO17_S   17
#define GPIO_DOUT31_0_DIO16     0x00010000  // Data output for GPIO 16 
#define GPIO_DOUT31_0_DIO16_M   0x00010000
#define GPIO_DOUT31_0_DIO16_S   16
#define GPIO_DOUT31_0_DIO15     0x00008000  // Data output for GPIO 15 
#define GPIO_DOUT31_0_DIO15_M   0x00008000
#define GPIO_DOUT31_0_DIO15_S   15
#define GPIO_DOUT31_0_DIO14     0x00004000  // Data output for GPIO 14 
#define GPIO_DOUT31_0_DIO14_M   0x00004000
#define GPIO_DOUT31_0_DIO14_S   14
#define GPIO_DOUT31_0_DIO13     0x00002000  // Data output for GPIO 13 
#define GPIO_DOUT31_0_DIO13_M   0x00002000
#define GPIO_DOUT31_0_DIO13_S   13
#define GPIO_DOUT31_0_DIO12     0x00001000  // Data output for GPIO 12 
#define GPIO_DOUT31_0_DIO12_M   0x00001000
#define GPIO_DOUT31_0_DIO12_S   12
#define GPIO_DOUT31_0_DIO11     0x00000800  // Data output for GPIO 11 
#define GPIO_DOUT31_0_DIO11_M   0x00000800
#define GPIO_DOUT31_0_DIO11_S   11
#define GPIO_DOUT31_0_DIO10     0x00000400  // Data output for GPIO 10 
#define GPIO_DOUT31_0_DIO10_M   0x00000400
#define GPIO_DOUT31_0_DIO10_S   10
#define GPIO_DOUT31_0_DIO9      0x00000200  // Data output for GPIO 9 
#define GPIO_DOUT31_0_DIO9_M    0x00000200
#define GPIO_DOUT31_0_DIO9_S    9
#define GPIO_DOUT31_0_DIO8      0x00000100  // Data output for GPIO 8 
#define GPIO_DOUT31_0_DIO8_M    0x00000100
#define GPIO_DOUT31_0_DIO8_S    8
#define GPIO_DOUT31_0_DIO7      0x00000080  // Data output for GPIO 7 
#define GPIO_DOUT31_0_DIO7_M    0x00000080
#define GPIO_DOUT31_0_DIO7_S    7
#define GPIO_DOUT31_0_DIO6      0x00000040  // Data output for GPIO 6 
#define GPIO_DOUT31_0_DIO6_M    0x00000040
#define GPIO_DOUT31_0_DIO6_S    6
#define GPIO_DOUT31_0_DIO5      0x00000020  // Data output for GPIO 5 
#define GPIO_DOUT31_0_DIO5_M    0x00000020
#define GPIO_DOUT31_0_DIO5_S    5
#define GPIO_DOUT31_0_DIO4      0x00000010  // Data output for GPIO 4 
#define GPIO_DOUT31_0_DIO4_M    0x00000010
#define GPIO_DOUT31_0_DIO4_S    4
#define GPIO_DOUT31_0_DIO3      0x00000008  // Data output for GPIO 3 
#define GPIO_DOUT31_0_DIO3_M    0x00000008
#define GPIO_DOUT31_0_DIO3_S    3
#define GPIO_DOUT31_0_DIO2      0x00000004  // Data output for GPIO 2 
#define GPIO_DOUT31_0_DIO2_M    0x00000004
#define GPIO_DOUT31_0_DIO2_S    2
#define GPIO_DOUT31_0_DIO1      0x00000002  // Data output for GPIO 1 
#define GPIO_DOUT31_0_DIO1_M    0x00000002
#define GPIO_DOUT31_0_DIO1_S    1
#define GPIO_DOUT31_0_DIO0      0x00000001  // Data output for GPIO 0 
#define GPIO_DOUT31_0_DIO0_M    0x00000001
#define GPIO_DOUT31_0_DIO0_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// GPIO_O_DOUTSET31_0 register.
//
//*****************************************************************************
#define GPIO_DOUTSET31_0_DIO31  0x80000000  // Set bit 31 
#define GPIO_DOUTSET31_0_DIO31_M \
                                0x80000000
#define GPIO_DOUTSET31_0_DIO31_S 31
#define GPIO_DOUTSET31_0_DIO30  0x40000000  // Set bit 30 
#define GPIO_DOUTSET31_0_DIO30_M \
                                0x40000000
#define GPIO_DOUTSET31_0_DIO30_S 30
#define GPIO_DOUTSET31_0_DIO29  0x20000000  // Set bit 29 
#define GPIO_DOUTSET31_0_DIO29_M \
                                0x20000000
#define GPIO_DOUTSET31_0_DIO29_S 29
#define GPIO_DOUTSET31_0_DIO28  0x10000000  // Set bit 28 
#define GPIO_DOUTSET31_0_DIO28_M \
                                0x10000000
#define GPIO_DOUTSET31_0_DIO28_S 28
#define GPIO_DOUTSET31_0_DIO27  0x08000000  // Set bit 27 
#define GPIO_DOUTSET31_0_DIO27_M \
                                0x08000000
#define GPIO_DOUTSET31_0_DIO27_S 27
#define GPIO_DOUTSET31_0_DIO26  0x04000000  // Set bit 26 
#define GPIO_DOUTSET31_0_DIO26_M \
                                0x04000000
#define GPIO_DOUTSET31_0_DIO26_S 26
#define GPIO_DOUTSET31_0_DIO25  0x02000000  // Set bit 25 
#define GPIO_DOUTSET31_0_DIO25_M \
                                0x02000000
#define GPIO_DOUTSET31_0_DIO25_S 25
#define GPIO_DOUTSET31_0_DIO24  0x01000000  // Set bit 24 
#define GPIO_DOUTSET31_0_DIO24_M \
                                0x01000000
#define GPIO_DOUTSET31_0_DIO24_S 24
#define GPIO_DOUTSET31_0_DIO23  0x00800000  // Set bit 23 
#define GPIO_DOUTSET31_0_DIO23_M \
                                0x00800000
#define GPIO_DOUTSET31_0_DIO23_S 23
#define GPIO_DOUTSET31_0_DIO22  0x00400000  // Set bit 22 
#define GPIO_DOUTSET31_0_DIO22_M \
                                0x00400000
#define GPIO_DOUTSET31_0_DIO22_S 22
#define GPIO_DOUTSET31_0_DIO21  0x00200000  // Set bit 21 
#define GPIO_DOUTSET31_0_DIO21_M \
                                0x00200000
#define GPIO_DOUTSET31_0_DIO21_S 21
#define GPIO_DOUTSET31_0_DIO20  0x00100000  // Set bit 20 
#define GPIO_DOUTSET31_0_DIO20_M \
                                0x00100000
#define GPIO_DOUTSET31_0_DIO20_S 20
#define GPIO_DOUTSET31_0_DIO19  0x00080000  // Set bit 19 
#define GPIO_DOUTSET31_0_DIO19_M \
                                0x00080000
#define GPIO_DOUTSET31_0_DIO19_S 19
#define GPIO_DOUTSET31_0_DIO18  0x00040000  // Set bit 18 
#define GPIO_DOUTSET31_0_DIO18_M \
                                0x00040000
#define GPIO_DOUTSET31_0_DIO18_S 18
#define GPIO_DOUTSET31_0_DIO17  0x00020000  // Set bit 17 
#define GPIO_DOUTSET31_0_DIO17_M \
                                0x00020000
#define GPIO_DOUTSET31_0_DIO17_S 17
#define GPIO_DOUTSET31_0_DIO16  0x00010000  // Set bit 16 
#define GPIO_DOUTSET31_0_DIO16_M \
                                0x00010000
#define GPIO_DOUTSET31_0_DIO16_S 16
#define GPIO_DOUTSET31_0_DIO15  0x00008000  // Set bit 15 
#define GPIO_DOUTSET31_0_DIO15_M \
                                0x00008000
#define GPIO_DOUTSET31_0_DIO15_S 15
#define GPIO_DOUTSET31_0_DIO14  0x00004000  // Set bit 14 
#define GPIO_DOUTSET31_0_DIO14_M \
                                0x00004000
#define GPIO_DOUTSET31_0_DIO14_S 14
#define GPIO_DOUTSET31_0_DIO13  0x00002000  // Set bit 13 
#define GPIO_DOUTSET31_0_DIO13_M \
                                0x00002000
#define GPIO_DOUTSET31_0_DIO13_S 13
#define GPIO_DOUTSET31_0_DIO12  0x00001000  // Set bit 12 
#define GPIO_DOUTSET31_0_DIO12_M \
                                0x00001000
#define GPIO_DOUTSET31_0_DIO12_S 12
#define GPIO_DOUTSET31_0_DIO11  0x00000800  // Set bit 11 
#define GPIO_DOUTSET31_0_DIO11_M \
                                0x00000800
#define GPIO_DOUTSET31_0_DIO11_S 11
#define GPIO_DOUTSET31_0_DIO10  0x00000400  // Set bit 10 
#define GPIO_DOUTSET31_0_DIO10_M \
                                0x00000400
#define GPIO_DOUTSET31_0_DIO10_S 10
#define GPIO_DOUTSET31_0_DIO9   0x00000200  // Set bit 9 
#define GPIO_DOUTSET31_0_DIO9_M 0x00000200
#define GPIO_DOUTSET31_0_DIO9_S 9
#define GPIO_DOUTSET31_0_DIO8   0x00000100  // Set bit 8 
#define GPIO_DOUTSET31_0_DIO8_M 0x00000100
#define GPIO_DOUTSET31_0_DIO8_S 8
#define GPIO_DOUTSET31_0_DIO7   0x00000080  // Set bit 7 
#define GPIO_DOUTSET31_0_DIO7_M 0x00000080
#define GPIO_DOUTSET31_0_DIO7_S 7
#define GPIO_DOUTSET31_0_DIO6   0x00000040  // Set bit 6 
#define GPIO_DOUTSET31_0_DIO6_M 0x00000040
#define GPIO_DOUTSET31_0_DIO6_S 6
#define GPIO_DOUTSET31_0_DIO5   0x00000020  // Set bit 5 
#define GPIO_DOUTSET31_0_DIO5_M 0x00000020
#define GPIO_DOUTSET31_0_DIO5_S 5
#define GPIO_DOUTSET31_0_DIO4   0x00000010  // Set bit 4 
#define GPIO_DOUTSET31_0_DIO4_M 0x00000010
#define GPIO_DOUTSET31_0_DIO4_S 4
#define GPIO_DOUTSET31_0_DIO3   0x00000008  // Set bit 3 
#define GPIO_DOUTSET31_0_DIO3_M 0x00000008
#define GPIO_DOUTSET31_0_DIO3_S 3
#define GPIO_DOUTSET31_0_DIO2   0x00000004  // Set bit 2 
#define GPIO_DOUTSET31_0_DIO2_M 0x00000004
#define GPIO_DOUTSET31_0_DIO2_S 2
#define GPIO_DOUTSET31_0_DIO1   0x00000002  // Set bit 1 
#define GPIO_DOUTSET31_0_DIO1_M 0x00000002
#define GPIO_DOUTSET31_0_DIO1_S 1
#define GPIO_DOUTSET31_0_DIO0   0x00000001  // Set bit 0 
#define GPIO_DOUTSET31_0_DIO0_M 0x00000001
#define GPIO_DOUTSET31_0_DIO0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// GPIO_O_DOUTCLR31_0 register.
//
//*****************************************************************************
#define GPIO_DOUTCLR31_0_DIO31  0x80000000  // Clears bit 31 
#define GPIO_DOUTCLR31_0_DIO31_M \
                                0x80000000
#define GPIO_DOUTCLR31_0_DIO31_S 31
#define GPIO_DOUTCLR31_0_DIO30  0x40000000  // Clears bit 30 
#define GPIO_DOUTCLR31_0_DIO30_M \
                                0x40000000
#define GPIO_DOUTCLR31_0_DIO30_S 30
#define GPIO_DOUTCLR31_0_DIO29  0x20000000  // Clears bit 29 
#define GPIO_DOUTCLR31_0_DIO29_M \
                                0x20000000
#define GPIO_DOUTCLR31_0_DIO29_S 29
#define GPIO_DOUTCLR31_0_DIO28  0x10000000  // Clears bit 28 
#define GPIO_DOUTCLR31_0_DIO28_M \
                                0x10000000
#define GPIO_DOUTCLR31_0_DIO28_S 28
#define GPIO_DOUTCLR31_0_DIO27  0x08000000  // Clears bit 27 
#define GPIO_DOUTCLR31_0_DIO27_M \
                                0x08000000
#define GPIO_DOUTCLR31_0_DIO27_S 27
#define GPIO_DOUTCLR31_0_DIO26  0x04000000  // Clears bit 26 
#define GPIO_DOUTCLR31_0_DIO26_M \
                                0x04000000
#define GPIO_DOUTCLR31_0_DIO26_S 26
#define GPIO_DOUTCLR31_0_DIO25  0x02000000  // Clears bit 25 
#define GPIO_DOUTCLR31_0_DIO25_M \
                                0x02000000
#define GPIO_DOUTCLR31_0_DIO25_S 25
#define GPIO_DOUTCLR31_0_DIO24  0x01000000  // Clears bit 24 
#define GPIO_DOUTCLR31_0_DIO24_M \
                                0x01000000
#define GPIO_DOUTCLR31_0_DIO24_S 24
#define GPIO_DOUTCLR31_0_DIO23  0x00800000  // Clears bit 23 
#define GPIO_DOUTCLR31_0_DIO23_M \
                                0x00800000
#define GPIO_DOUTCLR31_0_DIO23_S 23
#define GPIO_DOUTCLR31_0_DIO22  0x00400000  // Clears bit 22 
#define GPIO_DOUTCLR31_0_DIO22_M \
                                0x00400000
#define GPIO_DOUTCLR31_0_DIO22_S 22
#define GPIO_DOUTCLR31_0_DIO21  0x00200000  // Clears bit 21 
#define GPIO_DOUTCLR31_0_DIO21_M \
                                0x00200000
#define GPIO_DOUTCLR31_0_DIO21_S 21
#define GPIO_DOUTCLR31_0_DIO20  0x00100000  // Clears bit 20 
#define GPIO_DOUTCLR31_0_DIO20_M \
                                0x00100000
#define GPIO_DOUTCLR31_0_DIO20_S 20
#define GPIO_DOUTCLR31_0_DIO19  0x00080000  // Clears bit 19 
#define GPIO_DOUTCLR31_0_DIO19_M \
                                0x00080000
#define GPIO_DOUTCLR31_0_DIO19_S 19
#define GPIO_DOUTCLR31_0_DIO18  0x00040000  // Clears bit 18 
#define GPIO_DOUTCLR31_0_DIO18_M \
                                0x00040000
#define GPIO_DOUTCLR31_0_DIO18_S 18
#define GPIO_DOUTCLR31_0_DIO17  0x00020000  // Clears bit 17 
#define GPIO_DOUTCLR31_0_DIO17_M \
                                0x00020000
#define GPIO_DOUTCLR31_0_DIO17_S 17
#define GPIO_DOUTCLR31_0_DIO16  0x00010000  // Clears bit 16 
#define GPIO_DOUTCLR31_0_DIO16_M \
                                0x00010000
#define GPIO_DOUTCLR31_0_DIO16_S 16
#define GPIO_DOUTCLR31_0_DIO15  0x00008000  // Clears bit 15 
#define GPIO_DOUTCLR31_0_DIO15_M \
                                0x00008000
#define GPIO_DOUTCLR31_0_DIO15_S 15
#define GPIO_DOUTCLR31_0_DIO14  0x00004000  // Clears bit 14 
#define GPIO_DOUTCLR31_0_DIO14_M \
                                0x00004000
#define GPIO_DOUTCLR31_0_DIO14_S 14
#define GPIO_DOUTCLR31_0_DIO13  0x00002000  // Clears bit 13 
#define GPIO_DOUTCLR31_0_DIO13_M \
                                0x00002000
#define GPIO_DOUTCLR31_0_DIO13_S 13
#define GPIO_DOUTCLR31_0_DIO12  0x00001000  // Clears bit 12 
#define GPIO_DOUTCLR31_0_DIO12_M \
                                0x00001000
#define GPIO_DOUTCLR31_0_DIO12_S 12
#define GPIO_DOUTCLR31_0_DIO11  0x00000800  // Clears bit 11 
#define GPIO_DOUTCLR31_0_DIO11_M \
                                0x00000800
#define GPIO_DOUTCLR31_0_DIO11_S 11
#define GPIO_DOUTCLR31_0_DIO10  0x00000400  // Clears bit 10 
#define GPIO_DOUTCLR31_0_DIO10_M \
                                0x00000400
#define GPIO_DOUTCLR31_0_DIO10_S 10
#define GPIO_DOUTCLR31_0_DIO9   0x00000200  // Clears bit 9 
#define GPIO_DOUTCLR31_0_DIO9_M 0x00000200
#define GPIO_DOUTCLR31_0_DIO9_S 9
#define GPIO_DOUTCLR31_0_DIO8   0x00000100  // Clears bit 8 
#define GPIO_DOUTCLR31_0_DIO8_M 0x00000100
#define GPIO_DOUTCLR31_0_DIO8_S 8
#define GPIO_DOUTCLR31_0_DIO7   0x00000080  // Clears bit 7 
#define GPIO_DOUTCLR31_0_DIO7_M 0x00000080
#define GPIO_DOUTCLR31_0_DIO7_S 7
#define GPIO_DOUTCLR31_0_DIO6   0x00000040  // Clears bit 6 
#define GPIO_DOUTCLR31_0_DIO6_M 0x00000040
#define GPIO_DOUTCLR31_0_DIO6_S 6
#define GPIO_DOUTCLR31_0_DIO5   0x00000020  // Clears bit 5 
#define GPIO_DOUTCLR31_0_DIO5_M 0x00000020
#define GPIO_DOUTCLR31_0_DIO5_S 5
#define GPIO_DOUTCLR31_0_DIO4   0x00000010  // Clears bit 4 
#define GPIO_DOUTCLR31_0_DIO4_M 0x00000010
#define GPIO_DOUTCLR31_0_DIO4_S 4
#define GPIO_DOUTCLR31_0_DIO3   0x00000008  // Clears bit 3 
#define GPIO_DOUTCLR31_0_DIO3_M 0x00000008
#define GPIO_DOUTCLR31_0_DIO3_S 3
#define GPIO_DOUTCLR31_0_DIO2   0x00000004  // Clears bit 2 
#define GPIO_DOUTCLR31_0_DIO2_M 0x00000004
#define GPIO_DOUTCLR31_0_DIO2_S 2
#define GPIO_DOUTCLR31_0_DIO1   0x00000002  // Clears bit 1 
#define GPIO_DOUTCLR31_0_DIO1_M 0x00000002
#define GPIO_DOUTCLR31_0_DIO1_S 1
#define GPIO_DOUTCLR31_0_DIO0   0x00000001  // Clears bit 0 
#define GPIO_DOUTCLR31_0_DIO0_M 0x00000001
#define GPIO_DOUTCLR31_0_DIO0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// GPIO_O_DOUTTGL31_0 register.
//
//*****************************************************************************
#define GPIO_DOUTTGL31_0_DIO31  0x80000000  // Toggles bit 31 
#define GPIO_DOUTTGL31_0_DIO31_M \
                                0x80000000
#define GPIO_DOUTTGL31_0_DIO31_S 31
#define GPIO_DOUTTGL31_0_DIO30  0x40000000  // Toggles bit 30 
#define GPIO_DOUTTGL31_0_DIO30_M \
                                0x40000000
#define GPIO_DOUTTGL31_0_DIO30_S 30
#define GPIO_DOUTTGL31_0_DIO29  0x20000000  // Toggles bit 29 
#define GPIO_DOUTTGL31_0_DIO29_M \
                                0x20000000
#define GPIO_DOUTTGL31_0_DIO29_S 29
#define GPIO_DOUTTGL31_0_DIO28  0x10000000  // Toggles bit 28 
#define GPIO_DOUTTGL31_0_DIO28_M \
                                0x10000000
#define GPIO_DOUTTGL31_0_DIO28_S 28
#define GPIO_DOUTTGL31_0_DIO27  0x08000000  // Toggles bit 27 
#define GPIO_DOUTTGL31_0_DIO27_M \
                                0x08000000
#define GPIO_DOUTTGL31_0_DIO27_S 27
#define GPIO_DOUTTGL31_0_DIO26  0x04000000  // Toggles bit 26 
#define GPIO_DOUTTGL31_0_DIO26_M \
                                0x04000000
#define GPIO_DOUTTGL31_0_DIO26_S 26
#define GPIO_DOUTTGL31_0_DIO25  0x02000000  // Toggles bit 25 
#define GPIO_DOUTTGL31_0_DIO25_M \
                                0x02000000
#define GPIO_DOUTTGL31_0_DIO25_S 25
#define GPIO_DOUTTGL31_0_DIO24  0x01000000  // Toggles bit 24 
#define GPIO_DOUTTGL31_0_DIO24_M \
                                0x01000000
#define GPIO_DOUTTGL31_0_DIO24_S 24
#define GPIO_DOUTTGL31_0_DIO23  0x00800000  // Toggles bit 23 
#define GPIO_DOUTTGL31_0_DIO23_M \
                                0x00800000
#define GPIO_DOUTTGL31_0_DIO23_S 23
#define GPIO_DOUTTGL31_0_DIO22  0x00400000  // Toggles bit 22 
#define GPIO_DOUTTGL31_0_DIO22_M \
                                0x00400000
#define GPIO_DOUTTGL31_0_DIO22_S 22
#define GPIO_DOUTTGL31_0_DIO21  0x00200000  // Toggles bit 21 
#define GPIO_DOUTTGL31_0_DIO21_M \
                                0x00200000
#define GPIO_DOUTTGL31_0_DIO21_S 21
#define GPIO_DOUTTGL31_0_DIO20  0x00100000  // Toggles bit 20 
#define GPIO_DOUTTGL31_0_DIO20_M \
                                0x00100000
#define GPIO_DOUTTGL31_0_DIO20_S 20
#define GPIO_DOUTTGL31_0_DIO19  0x00080000  // Toggles bit 19 
#define GPIO_DOUTTGL31_0_DIO19_M \
                                0x00080000
#define GPIO_DOUTTGL31_0_DIO19_S 19
#define GPIO_DOUTTGL31_0_DIO18  0x00040000  // Toggles bit 18 
#define GPIO_DOUTTGL31_0_DIO18_M \
                                0x00040000
#define GPIO_DOUTTGL31_0_DIO18_S 18
#define GPIO_DOUTTGL31_0_DIO17  0x00020000  // Toggles bit 17 
#define GPIO_DOUTTGL31_0_DIO17_M \
                                0x00020000
#define GPIO_DOUTTGL31_0_DIO17_S 17
#define GPIO_DOUTTGL31_0_DIO16  0x00010000  // Toggles bit 16 
#define GPIO_DOUTTGL31_0_DIO16_M \
                                0x00010000
#define GPIO_DOUTTGL31_0_DIO16_S 16
#define GPIO_DOUTTGL31_0_DIO15  0x00008000  // Toggles bit 15 
#define GPIO_DOUTTGL31_0_DIO15_M \
                                0x00008000
#define GPIO_DOUTTGL31_0_DIO15_S 15
#define GPIO_DOUTTGL31_0_DIO14  0x00004000  // Toggles bit 14 
#define GPIO_DOUTTGL31_0_DIO14_M \
                                0x00004000
#define GPIO_DOUTTGL31_0_DIO14_S 14
#define GPIO_DOUTTGL31_0_DIO13  0x00002000  // Toggles bit 13 
#define GPIO_DOUTTGL31_0_DIO13_M \
                                0x00002000
#define GPIO_DOUTTGL31_0_DIO13_S 13
#define GPIO_DOUTTGL31_0_DIO12  0x00001000  // Toggles bit 12 
#define GPIO_DOUTTGL31_0_DIO12_M \
                                0x00001000
#define GPIO_DOUTTGL31_0_DIO12_S 12
#define GPIO_DOUTTGL31_0_DIO11  0x00000800  // Toggles bit 11 
#define GPIO_DOUTTGL31_0_DIO11_M \
                                0x00000800
#define GPIO_DOUTTGL31_0_DIO11_S 11
#define GPIO_DOUTTGL31_0_DIO10  0x00000400  // Toggles bit 10 
#define GPIO_DOUTTGL31_0_DIO10_M \
                                0x00000400
#define GPIO_DOUTTGL31_0_DIO10_S 10
#define GPIO_DOUTTGL31_0_DIO9   0x00000200  // Toggles bit 9 
#define GPIO_DOUTTGL31_0_DIO9_M 0x00000200
#define GPIO_DOUTTGL31_0_DIO9_S 9
#define GPIO_DOUTTGL31_0_DIO8   0x00000100  // Toggles bit 8 
#define GPIO_DOUTTGL31_0_DIO8_M 0x00000100
#define GPIO_DOUTTGL31_0_DIO8_S 8
#define GPIO_DOUTTGL31_0_DIO7   0x00000080  // Toggles bit 7 
#define GPIO_DOUTTGL31_0_DIO7_M 0x00000080
#define GPIO_DOUTTGL31_0_DIO7_S 7
#define GPIO_DOUTTGL31_0_DIO6   0x00000040  // Toggles bit 6 
#define GPIO_DOUTTGL31_0_DIO6_M 0x00000040
#define GPIO_DOUTTGL31_0_DIO6_S 6
#define GPIO_DOUTTGL31_0_DIO5   0x00000020  // Toggles bit 5 
#define GPIO_DOUTTGL31_0_DIO5_M 0x00000020
#define GPIO_DOUTTGL31_0_DIO5_S 5
#define GPIO_DOUTTGL31_0_DIO4   0x00000010  // Toggles bit 4 
#define GPIO_DOUTTGL31_0_DIO4_M 0x00000010
#define GPIO_DOUTTGL31_0_DIO4_S 4
#define GPIO_DOUTTGL31_0_DIO3   0x00000008  // Toggles bit 3 
#define GPIO_DOUTTGL31_0_DIO3_M 0x00000008
#define GPIO_DOUTTGL31_0_DIO3_S 3
#define GPIO_DOUTTGL31_0_DIO2   0x00000004  // Toggles bit 2 
#define GPIO_DOUTTGL31_0_DIO2_M 0x00000004
#define GPIO_DOUTTGL31_0_DIO2_S 2
#define GPIO_DOUTTGL31_0_DIO1   0x00000002  // Toggles bit 1 
#define GPIO_DOUTTGL31_0_DIO1_M 0x00000002
#define GPIO_DOUTTGL31_0_DIO1_S 1
#define GPIO_DOUTTGL31_0_DIO0   0x00000001  // Toggles bit 0 
#define GPIO_DOUTTGL31_0_DIO0_M 0x00000001
#define GPIO_DOUTTGL31_0_DIO0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPIO_O_DIN31_0 register.
//
//*****************************************************************************
#define GPIO_DIN31_0_DIO31      0x80000000  // Data input from GPIO 31 
#define GPIO_DIN31_0_DIO31_M    0x80000000
#define GPIO_DIN31_0_DIO31_S    31
#define GPIO_DIN31_0_DIO30      0x40000000  // Data input from GPIO 30 
#define GPIO_DIN31_0_DIO30_M    0x40000000
#define GPIO_DIN31_0_DIO30_S    30
#define GPIO_DIN31_0_DIO29      0x20000000  // Data input from GPIO 29 
#define GPIO_DIN31_0_DIO29_M    0x20000000
#define GPIO_DIN31_0_DIO29_S    29
#define GPIO_DIN31_0_DIO28      0x10000000  // Data input from GPIO 28 
#define GPIO_DIN31_0_DIO28_M    0x10000000
#define GPIO_DIN31_0_DIO28_S    28
#define GPIO_DIN31_0_DIO27      0x08000000  // Data input from GPIO 27 
#define GPIO_DIN31_0_DIO27_M    0x08000000
#define GPIO_DIN31_0_DIO27_S    27
#define GPIO_DIN31_0_DIO26      0x04000000  // Data input from GPIO 26 
#define GPIO_DIN31_0_DIO26_M    0x04000000
#define GPIO_DIN31_0_DIO26_S    26
#define GPIO_DIN31_0_DIO25      0x02000000  // Data input from GPIO 25 
#define GPIO_DIN31_0_DIO25_M    0x02000000
#define GPIO_DIN31_0_DIO25_S    25
#define GPIO_DIN31_0_DIO24      0x01000000  // Data input from GPIO 24 
#define GPIO_DIN31_0_DIO24_M    0x01000000
#define GPIO_DIN31_0_DIO24_S    24
#define GPIO_DIN31_0_DIO23      0x00800000  // Data input from GPIO 23 
#define GPIO_DIN31_0_DIO23_M    0x00800000
#define GPIO_DIN31_0_DIO23_S    23
#define GPIO_DIN31_0_DIO22      0x00400000  // Data input from GPIO 22 
#define GPIO_DIN31_0_DIO22_M    0x00400000
#define GPIO_DIN31_0_DIO22_S    22
#define GPIO_DIN31_0_DIO21      0x00200000  // Data input from GPIO 21 
#define GPIO_DIN31_0_DIO21_M    0x00200000
#define GPIO_DIN31_0_DIO21_S    21
#define GPIO_DIN31_0_DIO20      0x00100000  // Data input from GPIO 20 
#define GPIO_DIN31_0_DIO20_M    0x00100000
#define GPIO_DIN31_0_DIO20_S    20
#define GPIO_DIN31_0_DIO19      0x00080000  // Data input from GPIO 19 
#define GPIO_DIN31_0_DIO19_M    0x00080000
#define GPIO_DIN31_0_DIO19_S    19
#define GPIO_DIN31_0_DIO18      0x00040000  // Data input from GPIO 18 
#define GPIO_DIN31_0_DIO18_M    0x00040000
#define GPIO_DIN31_0_DIO18_S    18
#define GPIO_DIN31_0_DIO17      0x00020000  // Data input from GPIO 17 
#define GPIO_DIN31_0_DIO17_M    0x00020000
#define GPIO_DIN31_0_DIO17_S    17
#define GPIO_DIN31_0_DIO16      0x00010000  // Data input from GPIO 16 
#define GPIO_DIN31_0_DIO16_M    0x00010000
#define GPIO_DIN31_0_DIO16_S    16
#define GPIO_DIN31_0_DIO15      0x00008000  // Data input from GPIO 15 
#define GPIO_DIN31_0_DIO15_M    0x00008000
#define GPIO_DIN31_0_DIO15_S    15
#define GPIO_DIN31_0_DIO14      0x00004000  // Data input from GPIO 14 
#define GPIO_DIN31_0_DIO14_M    0x00004000
#define GPIO_DIN31_0_DIO14_S    14
#define GPIO_DIN31_0_DIO13      0x00002000  // Data input from GPIO 13 
#define GPIO_DIN31_0_DIO13_M    0x00002000
#define GPIO_DIN31_0_DIO13_S    13
#define GPIO_DIN31_0_DIO12      0x00001000  // Data input from GPIO 12 
#define GPIO_DIN31_0_DIO12_M    0x00001000
#define GPIO_DIN31_0_DIO12_S    12
#define GPIO_DIN31_0_DIO11      0x00000800  // Data input from GPIO 11 
#define GPIO_DIN31_0_DIO11_M    0x00000800
#define GPIO_DIN31_0_DIO11_S    11
#define GPIO_DIN31_0_DIO10      0x00000400  // Data input from GPIO 10 
#define GPIO_DIN31_0_DIO10_M    0x00000400
#define GPIO_DIN31_0_DIO10_S    10
#define GPIO_DIN31_0_DIO9       0x00000200  // Data input from GPIO 9 
#define GPIO_DIN31_0_DIO9_M     0x00000200
#define GPIO_DIN31_0_DIO9_S     9
#define GPIO_DIN31_0_DIO8       0x00000100  // Data input from GPIO 8 
#define GPIO_DIN31_0_DIO8_M     0x00000100
#define GPIO_DIN31_0_DIO8_S     8
#define GPIO_DIN31_0_DIO7       0x00000080  // Data input from GPIO 7 
#define GPIO_DIN31_0_DIO7_M     0x00000080
#define GPIO_DIN31_0_DIO7_S     7
#define GPIO_DIN31_0_DIO6       0x00000040  // Data input from GPIO 6 
#define GPIO_DIN31_0_DIO6_M     0x00000040
#define GPIO_DIN31_0_DIO6_S     6
#define GPIO_DIN31_0_DIO5       0x00000020  // Data input from GPIO 5 
#define GPIO_DIN31_0_DIO5_M     0x00000020
#define GPIO_DIN31_0_DIO5_S     5
#define GPIO_DIN31_0_DIO4       0x00000010  // Data input from GPIO 4 
#define GPIO_DIN31_0_DIO4_M     0x00000010
#define GPIO_DIN31_0_DIO4_S     4
#define GPIO_DIN31_0_DIO3       0x00000008  // Data input from GPIO 3 
#define GPIO_DIN31_0_DIO3_M     0x00000008
#define GPIO_DIN31_0_DIO3_S     3
#define GPIO_DIN31_0_DIO2       0x00000004  // Data input from GPIO 2 
#define GPIO_DIN31_0_DIO2_M     0x00000004
#define GPIO_DIN31_0_DIO2_S     2
#define GPIO_DIN31_0_DIO1       0x00000002  // Data input from GPIO 1 
#define GPIO_DIN31_0_DIO1_M     0x00000002
#define GPIO_DIN31_0_DIO1_S     1
#define GPIO_DIN31_0_DIO0       0x00000001  // Data input from GPIO 0 
#define GPIO_DIN31_0_DIO0_M     0x00000001
#define GPIO_DIN31_0_DIO0_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the GPIO_O_DOE31_0 register.
//
//*****************************************************************************
#define GPIO_DOE31_0_DIO31      0x80000000  // Data output enable for GPIO 31 
#define GPIO_DOE31_0_DIO31_M    0x80000000
#define GPIO_DOE31_0_DIO31_S    31
#define GPIO_DOE31_0_DIO30      0x40000000  // Data output enable for GPIO 30 
#define GPIO_DOE31_0_DIO30_M    0x40000000
#define GPIO_DOE31_0_DIO30_S    30
#define GPIO_DOE31_0_DIO29      0x20000000  // Data output enable for GPIO 29 
#define GPIO_DOE31_0_DIO29_M    0x20000000
#define GPIO_DOE31_0_DIO29_S    29
#define GPIO_DOE31_0_DIO28      0x10000000  // Data output enable for GPIO 28 
#define GPIO_DOE31_0_DIO28_M    0x10000000
#define GPIO_DOE31_0_DIO28_S    28
#define GPIO_DOE31_0_DIO27      0x08000000  // Data output enable for GPIO 27 
#define GPIO_DOE31_0_DIO27_M    0x08000000
#define GPIO_DOE31_0_DIO27_S    27
#define GPIO_DOE31_0_DIO26      0x04000000  // Data output enable for GPIO 26 
#define GPIO_DOE31_0_DIO26_M    0x04000000
#define GPIO_DOE31_0_DIO26_S    26
#define GPIO_DOE31_0_DIO25      0x02000000  // Data output enable for GPIO 25 
#define GPIO_DOE31_0_DIO25_M    0x02000000
#define GPIO_DOE31_0_DIO25_S    25
#define GPIO_DOE31_0_DIO24      0x01000000  // Data output enable for GPIO 24 
#define GPIO_DOE31_0_DIO24_M    0x01000000
#define GPIO_DOE31_0_DIO24_S    24
#define GPIO_DOE31_0_DIO23      0x00800000  // Data output enable for GPIO 23 
#define GPIO_DOE31_0_DIO23_M    0x00800000
#define GPIO_DOE31_0_DIO23_S    23
#define GPIO_DOE31_0_DIO22      0x00400000  // Data output enable for GPIO 22 
#define GPIO_DOE31_0_DIO22_M    0x00400000
#define GPIO_DOE31_0_DIO22_S    22
#define GPIO_DOE31_0_DIO21      0x00200000  // Data output enable for GPIO 21 
#define GPIO_DOE31_0_DIO21_M    0x00200000
#define GPIO_DOE31_0_DIO21_S    21
#define GPIO_DOE31_0_DIO20      0x00100000  // Data output enable for GPIO 20 
#define GPIO_DOE31_0_DIO20_M    0x00100000
#define GPIO_DOE31_0_DIO20_S    20
#define GPIO_DOE31_0_DIO19      0x00080000  // Data output enable for GPIO 19 
#define GPIO_DOE31_0_DIO19_M    0x00080000
#define GPIO_DOE31_0_DIO19_S    19
#define GPIO_DOE31_0_DIO18      0x00040000  // Data output enable for GPIO 18 
#define GPIO_DOE31_0_DIO18_M    0x00040000
#define GPIO_DOE31_0_DIO18_S    18
#define GPIO_DOE31_0_DIO17      0x00020000  // Data output enable for GPIO 17 
#define GPIO_DOE31_0_DIO17_M    0x00020000
#define GPIO_DOE31_0_DIO17_S    17
#define GPIO_DOE31_0_DIO16      0x00010000  // Data output enable for GPIO 16 
#define GPIO_DOE31_0_DIO16_M    0x00010000
#define GPIO_DOE31_0_DIO16_S    16
#define GPIO_DOE31_0_DIO15      0x00008000  // Data output enable for GPIO 15 
#define GPIO_DOE31_0_DIO15_M    0x00008000
#define GPIO_DOE31_0_DIO15_S    15
#define GPIO_DOE31_0_DIO14      0x00004000  // Data output enable for GPIO 14 
#define GPIO_DOE31_0_DIO14_M    0x00004000
#define GPIO_DOE31_0_DIO14_S    14
#define GPIO_DOE31_0_DIO13      0x00002000  // Data output enable for GPIO 13 
#define GPIO_DOE31_0_DIO13_M    0x00002000
#define GPIO_DOE31_0_DIO13_S    13
#define GPIO_DOE31_0_DIO12      0x00001000  // Data output enable for GPIO 12 
#define GPIO_DOE31_0_DIO12_M    0x00001000
#define GPIO_DOE31_0_DIO12_S    12
#define GPIO_DOE31_0_DIO11      0x00000800  // Data output enable for GPIO 11 
#define GPIO_DOE31_0_DIO11_M    0x00000800
#define GPIO_DOE31_0_DIO11_S    11
#define GPIO_DOE31_0_DIO10      0x00000400  // Data output enable for GPIO 10 
#define GPIO_DOE31_0_DIO10_M    0x00000400
#define GPIO_DOE31_0_DIO10_S    10
#define GPIO_DOE31_0_DIO9       0x00000200  // Data output enable for GPIO 9 
#define GPIO_DOE31_0_DIO9_M     0x00000200
#define GPIO_DOE31_0_DIO9_S     9
#define GPIO_DOE31_0_DIO8       0x00000100  // Data output enable for GPIO 8 
#define GPIO_DOE31_0_DIO8_M     0x00000100
#define GPIO_DOE31_0_DIO8_S     8
#define GPIO_DOE31_0_DIO7       0x00000080  // Data output enable for GPIO 7 
#define GPIO_DOE31_0_DIO7_M     0x00000080
#define GPIO_DOE31_0_DIO7_S     7
#define GPIO_DOE31_0_DIO6       0x00000040  // Data output enable for GPIO 6 
#define GPIO_DOE31_0_DIO6_M     0x00000040
#define GPIO_DOE31_0_DIO6_S     6
#define GPIO_DOE31_0_DIO5       0x00000020  // Data output enable for GPIO 5 
#define GPIO_DOE31_0_DIO5_M     0x00000020
#define GPIO_DOE31_0_DIO5_S     5
#define GPIO_DOE31_0_DIO4       0x00000010  // Data output enable for GPIO 4 
#define GPIO_DOE31_0_DIO4_M     0x00000010
#define GPIO_DOE31_0_DIO4_S     4
#define GPIO_DOE31_0_DIO3       0x00000008  // Data output enable for GPIO 3 
#define GPIO_DOE31_0_DIO3_M     0x00000008
#define GPIO_DOE31_0_DIO3_S     3
#define GPIO_DOE31_0_DIO2       0x00000004  // Data output enable for GPIO 2 
#define GPIO_DOE31_0_DIO2_M     0x00000004
#define GPIO_DOE31_0_DIO2_S     2
#define GPIO_DOE31_0_DIO1       0x00000002  // Data output enable for GPIO 1 
#define GPIO_DOE31_0_DIO1_M     0x00000002
#define GPIO_DOE31_0_DIO1_S     1
#define GPIO_DOE31_0_DIO0       0x00000001  // Data output enable for GPIO 0 
#define GPIO_DOE31_0_DIO0_M     0x00000001
#define GPIO_DOE31_0_DIO0_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// GPIO_O_EVFLAGS31_0 register.
//
//*****************************************************************************
#define GPIO_EVFLAGS31_0_DIO31  0x80000000  // Event for GPIO 31 
#define GPIO_EVFLAGS31_0_DIO31_M \
                                0x80000000
#define GPIO_EVFLAGS31_0_DIO31_S 31
#define GPIO_EVFLAGS31_0_DIO30  0x40000000  // Event for GPIO 30 
#define GPIO_EVFLAGS31_0_DIO30_M \
                                0x40000000
#define GPIO_EVFLAGS31_0_DIO30_S 30
#define GPIO_EVFLAGS31_0_DIO29  0x20000000  // Event for GPIO 29 
#define GPIO_EVFLAGS31_0_DIO29_M \
                                0x20000000
#define GPIO_EVFLAGS31_0_DIO29_S 29
#define GPIO_EVFLAGS31_0_DIO28  0x10000000  // Event for GPIO 28 
#define GPIO_EVFLAGS31_0_DIO28_M \
                                0x10000000
#define GPIO_EVFLAGS31_0_DIO28_S 28
#define GPIO_EVFLAGS31_0_DIO27  0x08000000  // Event for GPIO 27 
#define GPIO_EVFLAGS31_0_DIO27_M \
                                0x08000000
#define GPIO_EVFLAGS31_0_DIO27_S 27
#define GPIO_EVFLAGS31_0_DIO26  0x04000000  // Event for GPIO 26 
#define GPIO_EVFLAGS31_0_DIO26_M \
                                0x04000000
#define GPIO_EVFLAGS31_0_DIO26_S 26
#define GPIO_EVFLAGS31_0_DIO25  0x02000000  // Event for GPIO 25 
#define GPIO_EVFLAGS31_0_DIO25_M \
                                0x02000000
#define GPIO_EVFLAGS31_0_DIO25_S 25
#define GPIO_EVFLAGS31_0_DIO24  0x01000000  // Event for GPIO 24 
#define GPIO_EVFLAGS31_0_DIO24_M \
                                0x01000000
#define GPIO_EVFLAGS31_0_DIO24_S 24
#define GPIO_EVFLAGS31_0_DIO23  0x00800000  // Event for GPIO 23 
#define GPIO_EVFLAGS31_0_DIO23_M \
                                0x00800000
#define GPIO_EVFLAGS31_0_DIO23_S 23
#define GPIO_EVFLAGS31_0_DIO22  0x00400000  // Event for GPIO 22 
#define GPIO_EVFLAGS31_0_DIO22_M \
                                0x00400000
#define GPIO_EVFLAGS31_0_DIO22_S 22
#define GPIO_EVFLAGS31_0_DIO21  0x00200000  // Event for GPIO 21 
#define GPIO_EVFLAGS31_0_DIO21_M \
                                0x00200000
#define GPIO_EVFLAGS31_0_DIO21_S 21
#define GPIO_EVFLAGS31_0_DIO20  0x00100000  // Event for GPIO 20 
#define GPIO_EVFLAGS31_0_DIO20_M \
                                0x00100000
#define GPIO_EVFLAGS31_0_DIO20_S 20
#define GPIO_EVFLAGS31_0_DIO19  0x00080000  // Event for GPIO 19 
#define GPIO_EVFLAGS31_0_DIO19_M \
                                0x00080000
#define GPIO_EVFLAGS31_0_DIO19_S 19
#define GPIO_EVFLAGS31_0_DIO18  0x00040000  // Event for GPIO 18 
#define GPIO_EVFLAGS31_0_DIO18_M \
                                0x00040000
#define GPIO_EVFLAGS31_0_DIO18_S 18
#define GPIO_EVFLAGS31_0_DIO17  0x00020000  // Event for GPIO 17 
#define GPIO_EVFLAGS31_0_DIO17_M \
                                0x00020000
#define GPIO_EVFLAGS31_0_DIO17_S 17
#define GPIO_EVFLAGS31_0_DIO16  0x00010000  // Event for GPIO 16 
#define GPIO_EVFLAGS31_0_DIO16_M \
                                0x00010000
#define GPIO_EVFLAGS31_0_DIO16_S 16
#define GPIO_EVFLAGS31_0_DIO15  0x00008000  // Event for GPIO 15 
#define GPIO_EVFLAGS31_0_DIO15_M \
                                0x00008000
#define GPIO_EVFLAGS31_0_DIO15_S 15
#define GPIO_EVFLAGS31_0_DIO14  0x00004000  // Event for GPIO 14 
#define GPIO_EVFLAGS31_0_DIO14_M \
                                0x00004000
#define GPIO_EVFLAGS31_0_DIO14_S 14
#define GPIO_EVFLAGS31_0_DIO13  0x00002000  // Event for GPIO 13 
#define GPIO_EVFLAGS31_0_DIO13_M \
                                0x00002000
#define GPIO_EVFLAGS31_0_DIO13_S 13
#define GPIO_EVFLAGS31_0_DIO12  0x00001000  // Event for GPIO 12 
#define GPIO_EVFLAGS31_0_DIO12_M \
                                0x00001000
#define GPIO_EVFLAGS31_0_DIO12_S 12
#define GPIO_EVFLAGS31_0_DIO11  0x00000800  // Event for GPIO 11 
#define GPIO_EVFLAGS31_0_DIO11_M \
                                0x00000800
#define GPIO_EVFLAGS31_0_DIO11_S 11
#define GPIO_EVFLAGS31_0_DIO10  0x00000400  // Event for GPIO 10 
#define GPIO_EVFLAGS31_0_DIO10_M \
                                0x00000400
#define GPIO_EVFLAGS31_0_DIO10_S 10
#define GPIO_EVFLAGS31_0_DIO9   0x00000200  // Event for GPIO 9 
#define GPIO_EVFLAGS31_0_DIO9_M 0x00000200
#define GPIO_EVFLAGS31_0_DIO9_S 9
#define GPIO_EVFLAGS31_0_DIO8   0x00000100  // Event for GPIO 8 
#define GPIO_EVFLAGS31_0_DIO8_M 0x00000100
#define GPIO_EVFLAGS31_0_DIO8_S 8
#define GPIO_EVFLAGS31_0_DIO7   0x00000080  // Event for GPIO 7 
#define GPIO_EVFLAGS31_0_DIO7_M 0x00000080
#define GPIO_EVFLAGS31_0_DIO7_S 7
#define GPIO_EVFLAGS31_0_DIO6   0x00000040  // Event for GPIO 6 
#define GPIO_EVFLAGS31_0_DIO6_M 0x00000040
#define GPIO_EVFLAGS31_0_DIO6_S 6
#define GPIO_EVFLAGS31_0_DIO5   0x00000020  // Event for GPIO 5 
#define GPIO_EVFLAGS31_0_DIO5_M 0x00000020
#define GPIO_EVFLAGS31_0_DIO5_S 5
#define GPIO_EVFLAGS31_0_DIO4   0x00000010  // Event for GPIO 4 
#define GPIO_EVFLAGS31_0_DIO4_M 0x00000010
#define GPIO_EVFLAGS31_0_DIO4_S 4
#define GPIO_EVFLAGS31_0_DIO3   0x00000008  // Event for GPIO 3 
#define GPIO_EVFLAGS31_0_DIO3_M 0x00000008
#define GPIO_EVFLAGS31_0_DIO3_S 3
#define GPIO_EVFLAGS31_0_DIO2   0x00000004  // Event for GPIO 2 
#define GPIO_EVFLAGS31_0_DIO2_M 0x00000004
#define GPIO_EVFLAGS31_0_DIO2_S 2
#define GPIO_EVFLAGS31_0_DIO1   0x00000002  // Event for GPIO 1 
#define GPIO_EVFLAGS31_0_DIO1_M 0x00000002
#define GPIO_EVFLAGS31_0_DIO1_S 1
#define GPIO_EVFLAGS31_0_DIO0   0x00000001  // Event for GPIO 0 
#define GPIO_EVFLAGS31_0_DIO0_M 0x00000001
#define GPIO_EVFLAGS31_0_DIO0_S 0


#endif // __HW_GPIO_H__

