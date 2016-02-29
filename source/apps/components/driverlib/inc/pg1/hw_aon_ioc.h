
/******************************************************************************
*  Filename:       hw_aon_ioc.h
*  Revised:        $Date: 2014-03-05 15:40:25 +0100 (on, 05 mar 2014) $
*  Revision:       $Revision: 40309 $
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
#ifndef __HW_AON_IOC_H__
#define __HW_AON_IOC_H__

//*****************************************************************************
//
// The following are defines for the AON_IOC register offsets.
//
//*****************************************************************************
#define AON_IOC_O_IOSTRMIN      0x00000000  // IO Drive Strength Minimum 
                                            // setting 
#define AON_IOC_O_IOSTRMED      0x00000004  // IO Drive Strength Medium 
                                            // setting 
#define AON_IOC_O_IOSTRMAX      0x00000008  // IO Drive Strength Maximum 
                                            // setting 
#define AON_IOC_O_IOCLATCH      0x0000000C  // Controls transparency of all 
                                            // latches holding I/O or 
                                            // configuration state from the MCU 
                                            // IOC 
#define AON_IOC_O_CLK32KCTL     0x00000010  // Control of 32 KHz clock 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_IOC_O_IOSTRMIN register.
//
//*****************************************************************************
#define AON_IOC_IOSTRMIN_GRAY_CODE_M \
                                0x00000007  // Defines Gray encoded value that 
                                            // selects pad driver strength when 
                                            // IOCFGX.IOSTR is set to minimum 
                                            // drive strength (ENUM 'MIN') 

#define AON_IOC_IOSTRMIN_GRAY_CODE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_IOC_O_IOSTRMED register.
//
//*****************************************************************************
#define AON_IOC_IOSTRMED_GRAY_CODE_M \
                                0x00000007  // Defines Gray encoded value that 
                                            // selects pad driver strength when 
                                            // IOCFGX.IOSTR is set to medium 
                                            // drive strength (ENUM 'MED') 

#define AON_IOC_IOSTRMED_GRAY_CODE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_IOC_O_IOSTRMAX register.
//
//*****************************************************************************
#define AON_IOC_IOSTRMAX_GRAY_CODE_M \
                                0x00000007  // Defines Gray encoded value that 
                                            // selects pad driver strength when 
                                            // IOCFGX.IOSTR is set to maximum 
                                            // drive strength (ENUM 'MAX') 

#define AON_IOC_IOSTRMAX_GRAY_CODE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_IOC_O_IOCLATCH register.
//
//*****************************************************************************
#define AON_IOC_IOCLATCH_EN     0x00000001  // Select latch state 
#define AON_IOC_IOCLATCH_EN_M   0x00000001
#define AON_IOC_IOCLATCH_EN_S   0
#define AON_IOC_IOCLATCH_EN_STATIC \
                                0x00000000  // Latches are static 
#define AON_IOC_IOCLATCH_EN_TRANSP \
                                0x00000001  // Latches are transparent 
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// AON_IOC_O_CLK32KCTL register.
//
//*****************************************************************************
#define AON_IOC_CLK32KCTL_OE_N  0x00000001  // 0: Output enable active. 
                                            // Internal 32kHz clock output on 
                                            // IO pin that has IOCFGX.PORTID 
                                            // set to AON_CLK32K (ENUM) 1: 
                                            // Output enable not active 
#define AON_IOC_CLK32KCTL_OE_N_M \
                                0x00000001
#define AON_IOC_CLK32KCTL_OE_N_S 0


#endif // __HW_AON_IOC_H__

