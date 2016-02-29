
/******************************************************************************
*  Filename:       hw_cm3_rom_table.h
*  Revised:        $Date$
*  Revision:       $Revision$
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
#ifndef __HW_CM3_ROM_TABLE_H__
#define __HW_CM3_ROM_TABLE_H__

//*****************************************************************************
//
// The following are defines for the CM3_ROM_TABLE register offsets.
//
//*****************************************************************************
#define CM3_ROM_TABLE_O_SCS     0x00000000  // SCS. Points to the SCS at 
                                            // 0xE000E000. 
#define CM3_ROM_TABLE_O_DWT     0x00000004  // DWT. Points to the Data 
                                            // Watchpoint and Trace block at 
                                            // 0xE0001000. Value has bit [0] 
                                            // set if DWT is present. 
#define CM3_ROM_TABLE_O_FPB     0x00000008  // FPB. Points to the Flash Patch 
                                            // and Breakpoint block at 
                                            // 0xE0002000. Value has bit [0] 
                                            // set to 1 if FPB is present. 
#define CM3_ROM_TABLE_O_ITM     0x0000000C  // ITM. Points to the 
                                            // Instrumentation Trace block at 
                                            // 0xE0000000. Value has bit [0] 
                                            // set if ITM is present. 
#define CM3_ROM_TABLE_O_TPIU    0x00000010  // TPIU. Points to the TPIU. Value 
                                            // has bit [0] set to 1 if TPIU is 
                                            // present. TPIU is at 0xE0040000. 
#define CM3_ROM_TABLE_O_ETM     0x00000014  // ETM. Points to the ETM. Value 
                                            // has bit [0] set to 1 if ETM is 
                                            // present. ETM is at 0xE0041000. 
#define CM3_ROM_TABLE_O_END     0x00000018  // End. Marks the end of the ROM 
                                            // table. If CoreSight components 
                                            // are added, they are added 
                                            // starting from this location and 
                                            // the End marker is moved to the 
                                            // next location after the 
                                            // additional components. 
#define CM3_ROM_TABLE_O_SYSTEM_ACCESS \
                                0x00000FCC  // SYSTEM_ACCESS. Bits [31:1] RAZ. 
                                            // Bit [0] is set when the system 
                                            // memory map is accessible using 
                                            // the DAP. Bit [0] is clear when 
                                            // only debug resources are 
                                            // accessible using the DAP. 

#define CM3_ROM_TABLE_O_PID4    0x00000FD0  // Peripheral identification 
                                            // register (PID4). 
#define CM3_ROM_TABLE_O_PID5    0x00000FD4  // Peripheral identification 
                                            // register (PID5). 
#define CM3_ROM_TABLE_O_PID6    0x00000FD8  // Peripheral identification 
                                            // register (PID6). 
#define CM3_ROM_TABLE_O_PID7    0x00000FDC  // Peripheral identification 
                                            // register (PID7). 
#define CM3_ROM_TABLE_O_PID0    0x00000FE0  // Peripheral identification 
                                            // register Bits 7:0 (PID0). 
#define CM3_ROM_TABLE_O_PID1    0x00000FE4  // Peripheral identification 
                                            // register Bits 15:8 (PID1). 
#define CM3_ROM_TABLE_O_PID2    0x00000FE8  // Peripheral identification 
                                            // register Bits 23:16 (PID2). 
#define CM3_ROM_TABLE_O_PID3    0x00000FEC  // Peripheral identification 
                                            // register Bits 31:24 (PID3). 
#define CM3_ROM_TABLE_O_CID0    0x00000FF0  // Component identification 
                                            // register Bits 7:0 (CID0). 
#define CM3_ROM_TABLE_O_CID1    0x00000FF4  // Component identification 
                                            // register Bits 15:8 (CID1). 
#define CM3_ROM_TABLE_O_CID2    0x00000FF8  // Component identification 
                                            // register Bits 23:16 (CID2). 
#define CM3_ROM_TABLE_O_CID3    0x00000FFC  // Component identification 
                                            // register Bits 31:24 (CID3). 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_SCS register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_SCS_SCS_M 0xFFFFFFFF  // SCS. Points to the SCS at 
                                            // 0xE000E000. 
#define CM3_ROM_TABLE_SCS_SCS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_DWT register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_DWT_DWT_M 0xFFFFFFFF  // DWT. Points to the Data 
                                            // Watchpoint and Trace block at 
                                            // 0xE0001000. Value has bit [0] 
                                            // set if DWT is present. 
#define CM3_ROM_TABLE_DWT_DWT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_FPB register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_FPB_FPB_M 0xFFFFFFFF  // FPB. Points to the Flash Patch 
                                            // and Breakpoint block at 
                                            // 0xE0002000. Value has bit [0] 
                                            // set to 1 if FPB is present. 
#define CM3_ROM_TABLE_FPB_FPB_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_ITM register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_ITM_ITM_M 0xFFFFFFFF  // ITM. Points to the 
                                            // Instrumentation Trace block at 
                                            // 0xE0000000. Value has bit [0] 
                                            // set if ITM is present. 
#define CM3_ROM_TABLE_ITM_ITM_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_TPIU register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_TPIU_TPIU_M \
                                0xFFFFFFFF  // TPIU. Points to the TPIU. Value 
                                            // has bit [0] set to 1 if TPIU is 
                                            // present. TPIU is at 0xE0040000. 

#define CM3_ROM_TABLE_TPIU_TPIU_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_ETM register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_ETM_ETM_M 0xFFFFFFFF  // ETM. Points to the ETM. Value 
                                            // has bit [0] set to 1 if ETM is 
                                            // present. ETM is at 0xE0041000. 
#define CM3_ROM_TABLE_ETM_ETM_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_END register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_END_END_M 0xFFFFFFFF  // End. Marks the end of the ROM 
                                            // table. If CoreSight components 
                                            // are added, they are added 
                                            // starting from this location and 
                                            // the End marker is moved to the 
                                            // next location after the 
                                            // additional components. 
#define CM3_ROM_TABLE_END_END_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_SYSTEM_ACCESS register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_SYSTEM_ACCESS_SYSTEM_ACCESS_M \
                                0xFFFFFFFF  // SYSTEM_ACCESS. Bits [31:1] RAZ. 
                                            // Bit [0] is set when the system 
                                            // memory map is accessible using 
                                            // the DAP. Bit [0] is clear when 
                                            // only debug resources are 
                                            // accessible using the DAP. 

#define CM3_ROM_TABLE_SYSTEM_ACCESS_SYSTEM_ACCESS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_PID4 register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_PID4_PID4_M \
                                0xFFFFFFFF  // Peripheral identification 
                                            // register (PID4). 

#define CM3_ROM_TABLE_PID4_PID4_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_PID5 register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_PID5_PID5_M \
                                0xFFFFFFFF  // Peripheral identification 
                                            // register (PID5). 

#define CM3_ROM_TABLE_PID5_PID5_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_PID6 register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_PID6_PID6_M \
                                0xFFFFFFFF  // Peripheral identification 
                                            // register (PID6). 

#define CM3_ROM_TABLE_PID6_PID6_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_PID7 register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_PID7_PID7_M \
                                0xFFFFFFFF  // Peripheral identification 
                                            // register (PID7). 

#define CM3_ROM_TABLE_PID7_PID7_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_PID0 register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_PID0_PID0_M \
                                0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 7:0 (PID0). 

#define CM3_ROM_TABLE_PID0_PID0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_PID1 register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_PID1_PID1_M \
                                0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 15:8 (PID1). 

#define CM3_ROM_TABLE_PID1_PID1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_PID2 register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_PID2_PID2_M \
                                0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 23:16 (PID2). 

#define CM3_ROM_TABLE_PID2_PID2_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_PID3 register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_PID3_PID3_M \
                                0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 31:24 (PID3). 

#define CM3_ROM_TABLE_PID3_PID3_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_CID0 register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_CID0_CID0_M \
                                0xFFFFFFFF  // Component identification 
                                            // register Bits 7:0 (CID0). 

#define CM3_ROM_TABLE_CID0_CID0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_CID1 register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_CID1_CID1_M \
                                0xFFFFFFFF  // Component identification 
                                            // register Bits 15:8 (CID1). 

#define CM3_ROM_TABLE_CID1_CID1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_CID2 register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_CID2_CID2_M \
                                0xFFFFFFFF  // Component identification 
                                            // register Bits 23:16 (CID2). 

#define CM3_ROM_TABLE_CID2_CID2_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ROM_TABLE_O_CID3 register.
//
//*****************************************************************************
#define CM3_ROM_TABLE_CID3_CID3_M \
                                0xFFFFFFFF  // Component identification 
                                            // register Bits 31:24 (CID3). 

#define CM3_ROM_TABLE_CID3_CID3_S 0


#endif // __HW_CM3_ROM_TABLE_H__

