
/******************************************************************************
*  Filename:       hw_aux_aiodio.h
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
#ifndef __HW_AUX_AIODIO_H__
#define __HW_AUX_AIODIO_H__

//*****************************************************************************
//
// The following are defines for the AUX_AIODIO register offsets.
//
//*****************************************************************************
#define AUX_AIODIO_O_GPIODOUT   0x00000000  // Output data register 
#define AUX_AIODIO_O_IOMODE     0x00000004  // IO configuration register 
#define AUX_AIODIO_O_GPIODIN    0x00000008  // Input data register 
#define AUX_AIODIO_O_GPIODOUTSET \
                                0x0000000C  // IO set register 

#define AUX_AIODIO_O_GPIODOUTCLR \
                                0x00000010  // IO clear register 

#define AUX_AIODIO_O_GPIODOUTTGL \
                                0x00000014  // IO toggle register 

#define AUX_AIODIO_O_GPIODIE    0x00000018  // Input buffer enable 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_AIODIO_O_GPIODOUT register.
//
//*****************************************************************************
#define AUX_AIODIO_GPIODOUT_IO7_0_M \
                                0x000000FF  // Data output for AUX General 
                                            // Purpose IO's 0 to 7 

#define AUX_AIODIO_GPIODOUT_IO7_0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_AIODIO_O_IOMODE register.
//
//*****************************************************************************
#define AUX_AIODIO_IOMODE_IO7_M 0x0000C000  // Selects input output mode for 
                                            // AUX GPIO #7 
#define AUX_AIODIO_IOMODE_IO7_S 14
#define AUX_AIODIO_IOMODE_IO7_OUT \
                                0x00000000  // GPIO #7 configured as Output 
#define AUX_AIODIO_IOMODE_IO7_IN \
                                0x00004000  // GPIO #7 is input. Output 
                                            // disabled. 
#define AUX_AIODIO_IOMODE_IO7_OPEN_DRAIN \
                                0x00008000  // GPIO #7 configured as OpenDrain 
                                            // output. 
#define AUX_AIODIO_IOMODE_IO7_OPEN_SOURCE \
                                0x0000C000  // GPIO #7 configured as 
                                            // OpenSource output. 
#define AUX_AIODIO_IOMODE_IO6_M 0x00003000  // Selects input output mode for 
                                            // AUX GPIO #6 
#define AUX_AIODIO_IOMODE_IO6_S 12
#define AUX_AIODIO_IOMODE_IO6_OUT \
                                0x00000000  // GPIO #6 configured as Output 
#define AUX_AIODIO_IOMODE_IO6_IN \
                                0x00001000  // GPIO #6 is input. Output 
                                            // disabled. 
#define AUX_AIODIO_IOMODE_IO6_OPEN_DRAIN \
                                0x00002000  // GPIO #6 configured as OpenDrain 
                                            // output. 
#define AUX_AIODIO_IOMODE_IO6_OPEN_SOURCE \
                                0x00003000  // GPIO #6 configured as 
                                            // OpenSource output. 
#define AUX_AIODIO_IOMODE_IO5_M 0x00000C00  // Selects input output mode for 
                                            // AUX GPIO #5 
#define AUX_AIODIO_IOMODE_IO5_S 10
#define AUX_AIODIO_IOMODE_IO5_OUT \
                                0x00000000  // GPIO #5 configured as Output 
#define AUX_AIODIO_IOMODE_IO5_IN \
                                0x00000400  // GPIO #5 is input. Output 
                                            // disabled. 
#define AUX_AIODIO_IOMODE_IO5_OPEN_DRAIN \
                                0x00000800  // GPIO #5 configured as OpenDrain 
                                            // output. 
#define AUX_AIODIO_IOMODE_IO5_OPEN_SOURCE \
                                0x00000C00  // GPIO #5 configured as 
                                            // OpenSource output. 
#define AUX_AIODIO_IOMODE_IO4_M 0x00000300  // Selects input output mode for 
                                            // AUX GPIO #4 
#define AUX_AIODIO_IOMODE_IO4_S 8
#define AUX_AIODIO_IOMODE_IO4_OUT \
                                0x00000000  // GPIO #4 configured as Output 
#define AUX_AIODIO_IOMODE_IO4_IN \
                                0x00000100  // GPIO #4 is input. Output 
                                            // disabled. 
#define AUX_AIODIO_IOMODE_IO4_OPEN_DRAIN \
                                0x00000200  // GPIO #4 configured as OpenDrain 
                                            // output. 
#define AUX_AIODIO_IOMODE_IO4_OPEN_SOURCE \
                                0x00000300  // GPIO #4 configured as 
                                            // OpenSource output. 
#define AUX_AIODIO_IOMODE_IO3_M 0x000000C0  // Selects input output mode for 
                                            // AUX GPIO #3 
#define AUX_AIODIO_IOMODE_IO3_S 6
#define AUX_AIODIO_IOMODE_IO3_OUT \
                                0x00000000  // GPIO #3 configured as Output 
#define AUX_AIODIO_IOMODE_IO3_IN \
                                0x00000040  // GPIO #3 is input. Output 
                                            // disabled. 
#define AUX_AIODIO_IOMODE_IO3_OPEN_DRAIN \
                                0x00000080  // GPIO #3 configured as OpenDrain 
                                            // output. 
#define AUX_AIODIO_IOMODE_IO3_OPEN_SOURCE \
                                0x000000C0  // GPIO #3 configured as 
                                            // OpenSource output. 
#define AUX_AIODIO_IOMODE_IO2_M 0x00000030  // Selects input output mode for 
                                            // AUX GPIO #2 
#define AUX_AIODIO_IOMODE_IO2_S 4
#define AUX_AIODIO_IOMODE_IO2_OUT \
                                0x00000000  // GPIO #2 configured as Output 
#define AUX_AIODIO_IOMODE_IO2_IN \
                                0x00000010  // GPIO #2 is input. Output 
                                            // disabled. 
#define AUX_AIODIO_IOMODE_IO2_OPEN_DRAIN \
                                0x00000020  // GPIO #2 configured as OpenDrain 
                                            // output. 
#define AUX_AIODIO_IOMODE_IO2_OPEN_SOURCE \
                                0x00000030  // GPIO #2 configured as 
                                            // OpenSource output. 
#define AUX_AIODIO_IOMODE_IO1_M 0x0000000C  // Selects input output mode for 
                                            // AUX GPIO #1 
#define AUX_AIODIO_IOMODE_IO1_S 2
#define AUX_AIODIO_IOMODE_IO1_OUT \
                                0x00000000  // GPIO #1 configured as Output 
#define AUX_AIODIO_IOMODE_IO1_IN \
                                0x00000004  // GPIO #1 is input. Output 
                                            // disabled. 
#define AUX_AIODIO_IOMODE_IO1_OPEN_DRAIN \
                                0x00000008  // GPIO #1 configured as OpenDrain 
                                            // output. 
#define AUX_AIODIO_IOMODE_IO1_OPEN_SOURCE \
                                0x0000000C  // GPIO #1 configured as 
                                            // OpenSource output. 
#define AUX_AIODIO_IOMODE_IO0_M 0x00000003  // Selects input output mode for 
                                            // AUX GPIO #0 
#define AUX_AIODIO_IOMODE_IO0_S 0
#define AUX_AIODIO_IOMODE_IO0_OUT \
                                0x00000000  // GPIO #0 configured as Output 
#define AUX_AIODIO_IOMODE_IO0_IN \
                                0x00000001  // GPIO #0 is input. Output 
                                            // disabled. 
#define AUX_AIODIO_IOMODE_IO0_OPEN_DRAIN \
                                0x00000002  // GPIO #0 configured as OpenDrain 
                                            // output. 
#define AUX_AIODIO_IOMODE_IO0_OPEN_SOURCE \
                                0x00000003  // GPIO #0 configured as 
                                            // OpenSource output. 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_AIODIO_O_GPIODIN register.
//
//*****************************************************************************
#define AUX_AIODIO_GPIODIN_IO7_0_M \
                                0x000000FF  // Data input for AUX General 
                                            // Purpose IO's 0 to 7 

#define AUX_AIODIO_GPIODIN_IO7_0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_AIODIO_O_GPIODOUTSET register.
//
//*****************************************************************************
#define AUX_AIODIO_GPIODOUTSET_IO7_0_M \
                                0x000000FF  // Writing 1 to a bit position 
                                            // sets the corresponding bit in DO 
                                            // register: Read will return 
                                            // GPIODO 

#define AUX_AIODIO_GPIODOUTSET_IO7_0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_AIODIO_O_GPIODOUTCLR register.
//
//*****************************************************************************
#define AUX_AIODIO_GPIODOUTCLR_IO7_0_M \
                                0x000000FF  // Writing 1 to a bit position 
                                            // clears the corresponding bit in 
                                            // DO register: Read will return 
                                            // GPIODO 

#define AUX_AIODIO_GPIODOUTCLR_IO7_0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_AIODIO_O_GPIODOUTTGL register.
//
//*****************************************************************************
#define AUX_AIODIO_GPIODOUTTGL_IO7_0_M \
                                0x000000FF  // Writing 1 to a bit position 
                                            // toggles the corresponding bit in 
                                            // DO register: Read will return 
                                            // GPIODO 

#define AUX_AIODIO_GPIODOUTTGL_IO7_0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AUX_AIODIO_O_GPIODIE register.
//
//*****************************************************************************
#define AUX_AIODIO_GPIODIE_IO7_0_M \
                                0x000000FF  // Writing a 1 to bit position n 
                                            // enables a corresponding input 
                                            // buffer for AUX GPIO #n 0: 
                                            // Digital input buffer disabled 1: 
                                            // Digital input buffer enabled 

#define AUX_AIODIO_GPIODIE_IO7_0_S 0


#endif // __HW_AUX_AIODIO_H__

