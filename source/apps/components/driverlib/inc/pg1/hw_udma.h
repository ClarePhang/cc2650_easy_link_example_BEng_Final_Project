
/******************************************************************************
*  Filename:       hw_udma.h
*  Revised:        $Date: 2014-03-12 13:42:36 +0100 (on, 12 mar 2014) $
*  Revision:       $Revision: 40374 $
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
#ifndef __HW_UDMA_H__
#define __HW_UDMA_H__

//*****************************************************************************
//
// The following are defines for the UDMA register offsets.
//
//*****************************************************************************
#define UDMA_O_STATUS           0x00000000  // DMA Status 
#define UDMA_O_CFG              0x00000004  // DMA Configuration 
#define UDMA_O_CTRL             0x00000008  // Channel control data base 
                                            // pointer 
#define UDMA_O_ALTCTRL          0x0000000C  // Channel alternate control data 
                                            // base pointer 
#define UDMA_O_WAITONREQ        0x00000010  // Channel wait on request status 
#define UDMA_O_SOFTREQ          0x00000014  // Channel software request 
#define UDMA_O_SETBURST         0x00000018  // Channel useburst set 
#define UDMA_O_CLEARBURST       0x0000001C  // Channel useburst clear 
#define UDMA_O_SETREQMASK       0x00000020  // Channel request mask set 
#define UDMA_O_CLEARREQMASK     0x00000024  // Channel request mask clear 
#define UDMA_O_SETCHANNELEN     0x00000028  // Channel enable set 
#define UDMA_O_CLEARCHANNELEN   0x0000002C  // Channel enable clear 
#define UDMA_O_SETCHNLPRIALT    0x00000030  // Channel primary-alternate set 
#define UDMA_O_CLEARCHNLPRIALT  0x00000034  // Channel primary-alternate clear 
#define UDMA_O_SETCHNLPRIORITY  0x00000038  // Channel priority set 
#define UDMA_O_CLEARCHNLPRIORITY \
                                0x0000003C  // Channel priority clear 

#define UDMA_O_ERROR            0x0000004C  // Bus error clear 
#define UDMA_O_REQDONE          0x00000504  // Channel request done 
#define UDMA_O_DONEMASK         0x00000520  // Channel request done mask 
#define UDMA_O_PID4             0x00000FD0  // Peripheral identification 4 
#define UDMA_O_PID0             0x00000FE0  // Peripheral identification 0 
#define UDMA_O_PID1             0x00000FE4  // Peripheral identification 1 
#define UDMA_O_PID2             0x00000FE8  // Peripheral identification 2 
#define UDMA_O_PID3             0x00000FEC  // Peripheral identification 3 
#define UDMA_O_PRIMECELLID0     0x00000FF0  // Primecell Identification 0 
#define UDMA_O_PRIMECELLID1     0x00000FF4  // Primecell Identification 1 
#define UDMA_O_PRIMECELLID2     0x00000FF8  // Primecell Identification 2 
#define UDMA_O_PRIMECELLID3     0x00000FFC  // Primecell Identification 3 


//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_STATUS register.
//
//*****************************************************************************
#define UDMA_STATUS_TEST_M      0xF0000000  // 0x0: Controller does not 
                                            // include the integration test 
                                            // logic 0x1: Controller includes 
                                            // the integration test logic 0x2 - 
                                            // 0xF: Undefined 
#define UDMA_STATUS_TEST_S      28
#define UDMA_STATUS_TOTALCHANNELS_M \
                                0x001F0000  // Number of available DMA 
                                            // channels minus one. For example 
                                            // 0x00: Controller configured to 
                                            // use 1 DMA channel 0x01: 
                                            // Controller configured to use 2 
                                            // DMA channel . . 0x1F: Controller 
                                            // configured to use 32 DMA channel 

#define UDMA_STATUS_TOTALCHANNELS_S 16
#define UDMA_STATUS_STATE_M     0x000000F0  // Current state of the control 
                                            // state machine. State can be one 
                                            // of the following: 0x0: Idle 0x1: 
                                            // Reading channel controller data 
                                            // 0x2: Reading source data end 
                                            // pointer 0x3: Reading destination 
                                            // data end pointer 0x4: Reading 
                                            // source data 0x5: Writing 
                                            // destination data 0x6: Waiting 
                                            // for DMA request to clear 0x7: 
                                            // Writing channel controller data 
                                            // 0x8: Stalled 0x9: Done 0xA: 
                                            // Peripheral scatter-gather 
                                            // transition 0xB - 0xF: undefined. 
#define UDMA_STATUS_STATE_S     4
#define UDMA_STATUS_MASTERENABLE \
                                0x00000001  // Enable status of the 
                                            // controller: 0: Controller is 
                                            // disabled 1: Controller is 
                                            // enabled 

#define UDMA_STATUS_MASTERENABLE_M \
                                0x00000001
#define UDMA_STATUS_MASTERENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_CFG register.
//
//*****************************************************************************
#define UDMA_CFG_PRTOCTRL_M     0x000000E0  // Sets the AHB-Lite protection by 
                                            // controlling the HPROT[3:1] 
                                            // signal levels as follows: Bit 
                                            // [7] Controls HPROT[3] to 
                                            // indicate if a cacheable access 
                                            // is occurring. Bit [6] Controls 
                                            // HPROT[2] to indicate if a 
                                            // bufferable access is occurring. 
                                            // Bit [5] Controls HPROT[1] to 
                                            // indicate if a privileged access 
                                            // is occurring. When bit [n] = 1 
                                            // then the corresponding HPROT is 
                                            // HIGH. When bit [n] = 0 then the 
                                            // corresponding HPROT is LOW. 
#define UDMA_CFG_PRTOCTRL_S     5
#define UDMA_CFG_MASTERENABLE   0x00000001  // Enables the controller: 0: 
                                            // Disables the controller 1: 
                                            // Enables the controller 
#define UDMA_CFG_MASTERENABLE_M 0x00000001
#define UDMA_CFG_MASTERENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_CTRL register.
//
//*****************************************************************************
#define UDMA_CTRL_BASEPTR_M     0xFFFFFC00  // Pointer to the base address of 
                                            // the primary data structure 
#define UDMA_CTRL_BASEPTR_S     10
//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_ALTCTRL register.
//
//*****************************************************************************
#define UDMA_ALTCTRL_BASEPTR_M  0xFFFFFFFF  // Base address of the alternate 
                                            // data structure 
#define UDMA_ALTCTRL_BASEPTR_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_WAITONREQ register.
//
//*****************************************************************************
#define UDMA_WAITONREQ_CHNLSTATUS_M \
                                0xFFFFFFFF  // Channel wait on request status: 
                                            // Bit [C] = 0: dma_waitonreq[C] is 
                                            // low Bit [C] = 1: 
                                            // dma_waitonreq[C] is high 

#define UDMA_WAITONREQ_CHNLSTATUS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_SOFTREQ register.
//
//*****************************************************************************
#define UDMA_SOFTREQ_CHNLS_M    0xFFFFFFFF  // Set the appropriate bit to 
                                            // generate a software DMA request 
                                            // on the corresponding DMA channel 
                                            // Bit [C] = 0: Does not create a 
                                            // DMA request for channel C Bit 
                                            // [C] = 1: Creates a DMA request 
                                            // for channel C Writing to a bit 
                                            // where a DMA channel is not 
                                            // implemented does not create a 
                                            // DMA request for that channel 
#define UDMA_SOFTREQ_CHNLS_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_SETBURST register.
//
//*****************************************************************************
#define UDMA_SETBURST_CHNLS_M   0xFFFFFFFF  // Returns the useburst status, or 
                                            // disables dma_sreq[C] from 
                                            // generating DMA requests. Read 
                                            // as: Bit [C] = 0: DMA channel C 
                                            // responds to requests that it 
                                            // receives on dma_req[C] or 
                                            // dma_sreq[C]. The controller 
                                            // performs 2R, or single, bus 
                                            // transfers. Bit [C] = 1: DMA 
                                            // channel C does not respond to 
                                            // requests that it receives on 
                                            // dma_sreq[C]. The controller only 
                                            // responds to dma_req[C] requests 
                                            // and performs 2R transfers. Write 
                                            // as: Bit [C] = 0: No effect. Use 
                                            // the CLEARBURST Register to set 
                                            // bit [C] to 0. Bit [C] = 1: 
                                            // Disables dma_sreq[C] from 
                                            // generating DMA requests. The 
                                            // controller performs 2R 
                                            // transfers. Writing to a bit 
                                            // where a DMA channel is not 
                                            // implemented has no effect 
#define UDMA_SETBURST_CHNLS_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_CLEARBURST register.
//
//*****************************************************************************
#define UDMA_CLEARBURST_CHNLS_M 0xFFFFFFFF  // Set the appropriate bit to 
                                            // enable dma_sreq[] to generate 
                                            // requests. Write as: Bit [C] = 0: 
                                            // No effect. Use the SETBURST 
                                            // Register to disable dma_sreq[] 
                                            // from generating requests. Bit 
                                            // [C] = 1: Enables dma_sreq[C] to 
                                            // generate DMA requests. Writing 
                                            // to a bit where a DMA channel is 
                                            // not implemented has no effect. 
#define UDMA_CLEARBURST_CHNLS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_SETREQMASK register.
//
//*****************************************************************************
#define UDMA_SETREQMASK_CHNLS_M 0xFFFFFFFF  // Returns the request mask status 
                                            // of dma_req[] and dma_sreq[], or 
                                            // disables the corresponding 
                                            // channel from generating DMA 
                                            // requests. Read as: Bit [C] = 0: 
                                            // External requests are enabled 
                                            // for channel C. Bit [C] = 1: 
                                            // External requests are disabled 
                                            // for channel C. Write as: Bit [C] 
                                            // = 0: No effect. Use the 
                                            // chnl_req_mask_clr Register to 
                                            // enable DMA requests. Bit [C] = 
                                            // 1: Disables dma_req[C] and 
                                            // dma_sreq[C] from generating DMA 
                                            // requests. Writing to a bit where 
                                            // a DMA channel is not implemented 
                                            // has no effect 
#define UDMA_SETREQMASK_CHNLS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_CLEARREQMASK register.
//
//*****************************************************************************
#define UDMA_CLEARREQMASK_CHNLS_M \
                                0xFFFFFFFF  // Set the appropriate bit to 
                                            // enable DMA request for the 
                                            // channel corresponding to 
                                            // dma_req[] and dma_sreq[]. Write 
                                            // as: Bit [C] = 0: Use the 
                                            // SETREQMASK Register to disable 
                                            // dma_req[] and dma_sreq[] from 
                                            // generating requests Bit [C] = 1: 
                                            // Enables dma_req[C] or 
                                            // dma_sreq[C] to generate DMA 
                                            // requests. Writing to a bit where 
                                            // a DMA channel is not implemented 
                                            // has no effect. 

#define UDMA_CLEARREQMASK_CHNLS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_SETCHANNELEN register.
//
//*****************************************************************************
#define UDMA_SETCHANNELEN_CHNLS_M \
                                0xFFFFFFFF  // Returns the enable status of 
                                            // the channels, or enables the 
                                            // corresponding channels. Read as: 
                                            // Bit [C] = 0: Channel C is 
                                            // disabled. Bit [C] = 1: Channel C 
                                            // is enabled. Write as: Bit [C] = 
                                            // 0: No effect. Use the 
                                            // CLEARCHANNELEN Register to 
                                            // disable a channel Bit [C] = 1: 
                                            // Enables channel C Writing to a 
                                            // bit where a DMA channel is not 
                                            // implemented has no effect 

#define UDMA_SETCHANNELEN_CHNLS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_CLEARCHANNELEN register.
//
//*****************************************************************************
#define UDMA_CLEARCHANNELEN_CHNLS_M \
                                0xFFFFFFFF  // Set the appropriate bit to 
                                            // disable the corresponding DMA 
                                            // channel. Write as: Bit [C] = 0: 
                                            // No effect. Use the SETCHANNELEN 
                                            // Register to enable DMA channels. 
                                            // Bit [C] = 1: Disables channel C. 
                                            // Writing to a bit where a DMA 
                                            // channel is not implemented has 
                                            // no effect 

#define UDMA_CLEARCHANNELEN_CHNLS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_SETCHNLPRIALT register.
//
//*****************************************************************************
#define UDMA_SETCHNLPRIALT_CHNLS_M \
                                0xFFFFFFFF  // Returns the channel control 
                                            // data structure status, or 
                                            // selects the alternate data 
                                            // structure for the corresponding 
                                            // DMA channel. Read as: Bit [C] = 
                                            // 0: DMA channel C is using the 
                                            // primary data structure. Bit [C] 
                                            // = 1: DMA channel C is using the 
                                            // alternate data structure. Write 
                                            // as: Bit [C] = 0: No effect. Use 
                                            // the CLEARCHNLPRIALT Register to 
                                            // disable a channel Bit [C] = 1: 
                                            // Selects the alternate data 
                                            // structure for channel C. Writing 
                                            // to a bit where a DMA channel is 
                                            // not implemented has no effect 

#define UDMA_SETCHNLPRIALT_CHNLS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_CLEARCHNLPRIALT register.
//
//*****************************************************************************
#define UDMA_CLEARCHNLPRIALT_CHNLS_M \
                                0xFFFFFFFF  // Set the appropriate bit to 
                                            // select the primary data 
                                            // structure for the corresponding 
                                            // DMA channel. Write as: Bit [C] = 
                                            // 0: No effect. Use the 
                                            // SETCHNLPRIALT Register to select 
                                            // the alternate data structure. 
                                            // Bit [C] = 1: Selects the primary 
                                            // data structure for channel C. 
                                            // Writing to a bit where a DMA 
                                            // channel is not implemented has 
                                            // no effect 

#define UDMA_CLEARCHNLPRIALT_CHNLS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_SETCHNLPRIORITY register.
//
//*****************************************************************************
#define UDMA_SETCHNLPRIORITY_CHNLS_M \
                                0xFFFFFFFF  // Returns the channel priority 
                                            // mask status, or sets the channel 
                                            // priority to high. Read as: Bit 
                                            // [C] = 0: DMA channel C is using 
                                            // the default priority level. Bit 
                                            // [C] = 1: DMA channel C is using 
                                            // a high priority level. Write as: 
                                            // Bit [C] = 0: No effect. Use the 
                                            // CLEARCHNLPRIORITY Register to 
                                            // set channel C to the default 
                                            // priority level. Bit [C] = 1: 
                                            // Channel C uses the high priority 
                                            // level. Writing to a bit where a 
                                            // DMA channel is not implemented 
                                            // has no effect 

#define UDMA_SETCHNLPRIORITY_CHNLS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_CLEARCHNLPRIORITY register.
//
//*****************************************************************************
#define UDMA_CLEARCHNLPRIORITY_CHNLS_M \
                                0xFFFFFFFF  // Set the appropriate bit to 
                                            // select the default priority 
                                            // level for the specified DMA 
                                            // channel. Write as: Bit [C] = 0: 
                                            // No effect. Use the 
                                            // SETCHNLPRIORITY Register to set 
                                            // channel C to the high priority 
                                            // level. Bit [C] = 1: Channel C 
                                            // uses the default priority level. 
                                            // Writing to a bit where a DMA 
                                            // channel is not implemented has 
                                            // no effect 

#define UDMA_CLEARCHNLPRIORITY_CHNLS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_ERROR register.
//
//*****************************************************************************
#define UDMA_ERROR_STATUS       0x00000001  // Returns the status of dma_err, 
                                            // or sets the signal LOW. Read as: 
                                            // 0: dma_err is LOW 1: dma_err is 
                                            // HIGH Write as: 0: No effect, 
                                            // status of dma_err is unchanged. 
                                            // 1: Sets dma_err LOW. 
#define UDMA_ERROR_STATUS_M     0x00000001
#define UDMA_ERROR_STATUS_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_REQDONE register.
//
//*****************************************************************************
#define UDMA_REQDONE_CHNLS_M    0xFFFFFFFF  // Reflects the dma_done status 
                                            // for the given channel. It's a 
                                            // sticky done bit. Unless cleared 
                                            // by writing '1', it holds the 
                                            // value of '1'. Read as: Bit [C] = 
                                            // 0: Request is not completed for 
                                            // the channel C Bit [C] = 1: 
                                            // Request is completed for the 
                                            // channel C Writing a 1 to 
                                            // individual bits would clear the 
                                            // corresponding bit. Write as: Bit 
                                            // [C] = 0: No effect. Bit [C] = 1: 
                                            // dmareqdone[C] bit is cleared and 
                                            // is set to '0'. 
#define UDMA_REQDONE_CHNLS_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_DONEMASK register.
//
//*****************************************************************************
#define UDMA_DONEMASK_CHNLS_M   0xFFFFFFFF  // Controls the propagation of 
                                            // "dma_done" and "dma_active" 
                                            // signals to the peripherals. 
                                            // Specifically used for software 
                                            // channels. Read as: Bit [C] = 0: 
                                            // "dma_done" and "dma_active" 
                                            // signals are not blocked from 
                                            // reaching to the peripherals. 
                                            // Also, dma_done of channel [C] is 
                                            // blocked from contributing to 
                                            // generation of combined dma_done 
                                            // ("dma_done_sft") coming out of 
                                            // DMA wrapper. Bit [C] = 1: 
                                            // "dma_done" and "dma_active" 
                                            // signals are blocked from 
                                            // reaching to the peripherals. 
                                            // Also, dma_done of channel [C] is 
                                            // not blocked from contributing to 
                                            // generation of combined dma_done 
                                            // ("dma_done_sft") coming out of 
                                            // DMA wrapper. Write as: Bit [C] = 
                                            // 0: Allows "dma_done" and 
                                            // "dma_active" signals to 
                                            // propagate to the peripherals. 
                                            // Also, this disables dma_done of 
                                            // channel [C] from contributing to 
                                            // generation of combined dma_done 
                                            // ("dma_done_sft") coming out of 
                                            // DMA wrapper. Bit [C] = 1: Blocks 
                                            // "dma_done" and "dma_active" 
                                            // signals to propagate to the 
                                            // peripherals. Also, this enables 
                                            // dma_done of channel [C] to 
                                            // contribute to generation of 
                                            // combined dma_done 
                                            // ("dma_done_sft") coming out of 
                                            // DMA wrapper. 
#define UDMA_DONEMASK_CHNLS_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_PID4 register.
//
//*****************************************************************************
#define UDMA_PID4_BLOCKCOUNT_M  0x000000F0  // The number of 4KB address 
                                            // blocks you require, to access 
                                            // the registers, expressed in 
                                            // powers of 2. These bits read 
                                            // back as 0x0. 
#define UDMA_PID4_BLOCKCOUNT_S  4
#define UDMA_PID4_JEP106C_M     0x0000000F  // The JEP106 continuation code 
                                            // value represents how many 0x7F 
                                            // continuation characters occur in 
                                            // the manufacturer's identity 
                                            // code. These bits read back as 
                                            // 0x4. 
#define UDMA_PID4_JEP106C_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_PID0 register.
//
//*****************************************************************************
#define UDMA_PID0_PARTNUMBER0_M 0x000000FF  // These bits read back as 0x30 
#define UDMA_PID0_PARTNUMBER0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_PID1 register.
//
//*****************************************************************************
#define UDMA_PID1_JEP106CODE3TO0_M \
                                0x000000F0  // JEP106 identity code [3:0]. 
                                            // These bits read back as 0xB 
                                            // because ARM is the designer of 
                                            // the peripheral. 

#define UDMA_PID1_JEP106CODE3TO0_S 4
#define UDMA_PID1_PARTNUMBER1_M 0x0000000F  // These bits read back as 0x2. 
#define UDMA_PID1_PARTNUMBER1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_PID2 register.
//
//*****************************************************************************
#define UDMA_PID2_REVISION_M    0x000000F0  // The revision status of the 
                                            // controller. For revision r0p0, 
                                            // these bits read back as 0x0. 
#define UDMA_PID2_REVISION_S    4
#define UDMA_PID2_JEDEC         0x00000008  // This indicates that the 
                                            // controller uses a manufacturer's 
                                            // identity code that was allocated 
                                            // by JEDEC according to JEP106. 
                                            // These bits always read back as 
                                            // 0x1. 
#define UDMA_PID2_JEDEC_M       0x00000008
#define UDMA_PID2_JEDEC_S       3
#define UDMA_PID2_JEP106CODE6TO4_M \
                                0x00000007  // JEP106 identity code [6:4]. 
                                            // These bits read back as 0x3 
                                            // because ARM is the designer of 
                                            // this peripheral. 

#define UDMA_PID2_JEP106CODE6TO4_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the UDMA_O_PID3 register.
//
//*****************************************************************************
#define UDMA_PID3_MODNUMBER_M   0x0000000F  // The customer must update this 
                                            // field if they modify the RTL of 
                                            // the controller. ARM set this to 
                                            // 0x0. 
#define UDMA_PID3_MODNUMBER_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_PRIMECELLID0 register.
//
//*****************************************************************************
#define UDMA_PRIMECELLID0_ID0_M 0x000000FF  // These bits read back as 0x0D. 
#define UDMA_PRIMECELLID0_ID0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_PRIMECELLID1 register.
//
//*****************************************************************************
#define UDMA_PRIMECELLID1_ID1_M 0x000000FF  // These bits read back as 0xF0. 
#define UDMA_PRIMECELLID1_ID1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_PRIMECELLID2 register.
//
//*****************************************************************************
#define UDMA_PRIMECELLID2_ID2_M 0x000000FF  // These bits read back as 0x05 
#define UDMA_PRIMECELLID2_ID2_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// UDMA_O_PRIMECELLID3 register.
//
//*****************************************************************************
#define UDMA_PRIMECELLID3_ID3_M 0x000000FF  // These bits read back as 0xB1 
#define UDMA_PRIMECELLID3_ID3_S 0


#endif // __HW_UDMA_H__

