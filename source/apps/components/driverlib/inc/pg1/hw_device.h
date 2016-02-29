/******************************************************************************
*  Filename:       hw_device.h
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

#ifndef __HW_DEVICE_H__
#define __HW_DEVICE_H__

#ifdef __CC2650__
//*****************************************************************************
//
// The following are defines for edge detection on wake up events for the
// CC2650 device.
//
//*****************************************************************************
#define AON_EVENT_DIO_0         0x3F
#define AON_EVENT_DIO_1         17
#define AON_EVENT_DIO_2         16
#define AON_EVENT_DIO_3         15
#define AON_EVENT_DIO_4         14
#define AON_EVENT_DIO_5         13
#define AON_EVENT_DIO_6         12
#define AON_EVENT_DIO_7         11
#define AON_EVENT_DIO_8         10
#define AON_EVENT_DIO_9         9
#define AON_EVENT_DIO_10        8
#define AON_EVENT_DIO_11        7
#define AON_EVENT_DIO_12        6
#define AON_EVENT_DIO_13        5
#define AON_EVENT_DIO_14        4
#define AON_EVENT_DIO_15        3
#define AON_EVENT_DIO_16        2
#define AON_EVENT_DIO_17        1
#define AON_EVENT_DIO_18        0
#define AON_EVENT_DIO_19        30
#define AON_EVENT_DIO_20        29
#define AON_EVENT_DIO_21        28
#define AON_EVENT_DIO_22        27
#define AON_EVENT_DIO_23        26
#define AON_EVENT_DIO_24        25
#define AON_EVENT_DIO_25        24
#define AON_EVENT_DIO_26        23
#define AON_EVENT_DIO_27        22
#define AON_EVENT_DIO_28        21
#define AON_EVENT_DIO_29        20
#define AON_EVENT_DIO_30        19
#define AON_EVENT_DIO_31        18
#endif // __CC2650__

#endif // __HW_DEVICE_H__
