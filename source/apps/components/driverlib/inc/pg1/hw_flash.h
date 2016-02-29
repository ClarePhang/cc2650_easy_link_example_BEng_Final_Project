
/******************************************************************************
*  Filename:       hw_flash.h
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
#ifndef __HW_FLASH_H__
#define __HW_FLASH_H__

//*****************************************************************************
//
// The following are defines for the FLASH register offsets.
//
//*****************************************************************************
#define FLASH_O_WAITSTATES      0x00000000  // Read waitstate configuration 
                                            // register for usercode range 
#define FLASH_O_STAT            0x0000001C  // FMC and EFUSE status register 
#define FLASH_O_CFG             0x00000024  // New FMC features for cc26xx 
                                            // configuration control register 
#define FLASH_O_SYSCODE_START   0x00000028  // Syscode start address offset 
                                            // configuration register 
#define FLASH_O_FLASH_SIZE      0x0000002C  // Flash sector size configuration 
                                            // register 
#define FLASH_O_FWLOCK          0x0000003C  // Firmware lock control for the 
                                            // FWFLAG register 
#define FLASH_O_FWFLAG          0x00000040  // Firmware flags register 
#define FLASH_O_EFUSE           0x00001000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_EFUSEADDR       0x00001004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_DATAUPPER       0x00001008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_DATALOWER       0x0000100C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_EFUSECFG        0x00001010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_EFUSESTAT       0x00001014  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_ACC             0x00001018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_BOUNDARY        0x0000101C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_EFUSEFLAG       0x00001020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_EFUSEKEY        0x00001024  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_EFUSERELEASE    0x00001028  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_EFUSEPINS       0x0000102C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_EFUSECRA        0x00001030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_EFUSEREAD       0x00001034  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_EFUSEPROGRAM    0x00001038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_EFUSEERROR      0x0000103C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_SINGLEBIT       0x00001040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_TWOBIT          0x00001044  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_SELFTESTCYC     0x00001048  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_SELFTESTSIGN    0x0000104C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FRDCTL          0x00002000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSPRD           0x00002004  // Software should not rely on the 
                                            // value of a reserved. Writing any 
                                            // other value than the reset value 
                                            // may result in undefined 
                                            // behavior. 
#define FLASH_O_FEDACCTL1       0x00002008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FEDACSTAT       0x0000201C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FBPROT          0x00002030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FBSE            0x00002034  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FBBUSY          0x00002038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FBAC            0x0000203C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FBFALLBACK      0x00002040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FBPRDY          0x00002044  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FPAC1           0x00002048  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FPAC2           0x0000204C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FMAC            0x00002050  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FMSTAT          0x00002054  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FLOCK           0x00002064  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FVREADCT        0x00002080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FVHVCT1         0x00002084  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FVHVCT2         0x00002088  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FVHVCT3         0x0000208C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FVNVCT          0x00002090  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FVSLP           0x00002094  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FVWLCT          0x00002098  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FEFUSECTL       0x0000209C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FEFUSESTAT      0x000020A0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FEFUSEDATA      0x000020A4  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSEQPMP         0x000020A8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FBSTROBES       0x00002100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FPSTROBES       0x00002104  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FBMODE          0x00002108  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FTCR            0x0000210C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FADDR           0x00002110  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FTCTL           0x0000211C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FWPWRITE0       0x00002120  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FWPWRITE1       0x00002124  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FWPWRITE2       0x00002128  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FWPWRITE3       0x0000212C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FWPWRITE4       0x00002130  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FWPWRITE5       0x00002134  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FWPWRITE6       0x00002138  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FWPWRITE7       0x0000213C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FWPWRITE_ECC    0x00002140  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSWSTAT         0x00002144  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_GLBCTL      0x00002200  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_STATE       0x00002204  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_STAT        0x00002208  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_CMD         0x0000220C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_PE_OSU      0x00002210  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_VSTAT       0x00002214  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_PE_VSU      0x00002218  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_CMP_VSU     0x0000221C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_EX_VAL      0x00002220  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_RD_H        0x00002224  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_P_OH        0x00002228  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_ERA_OH      0x0000222C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_SAV_PPUL    0x00002230  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_PE_VH       0x00002234  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_PRG_PW      0x00002240  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_ERA_PW      0x00002244  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_SAV_ERA_PUL 0x00002254  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_TIMER       0x00002258  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_MODE        0x0000225C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_PGM         0x00002260  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_ERA         0x00002264  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_PRG_PUL     0x00002268  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_ERA_PUL     0x0000226C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_STEP_SIZE   0x00002270  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_PUL_CNTR    0x00002274  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_EC_STEP_HEIGHT \
                                0x00002278  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_O_FSM_ST_MACHINE  0x0000227C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_FLES        0x00002280  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_WR_ENA      0x00002288  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_ACC_PP      0x0000228C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_ACC_EP      0x00002290  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_ADDR        0x000022A0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_SECTOR      0x000022A4  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FMC_REV_ID      0x000022A8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_ERR_ADDR    0x000022AC  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_PGM_MAXPUL  0x000022B0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_EXECUTE     0x000022B4  // FMC FSM Command Execute 
#define FLASH_O_FSM_SECTOR1     0x000022C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_SECTOR2     0x000022C4  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_BSLE0       0x000022E0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_BSLE1       0x000022E4  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_BSLP0       0x000022F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FSM_BSLP1       0x000022F4  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FCFG_BANK       0x00002400  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FCFG_WRAPPER    0x00002404  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FCFG_BNK_TYPE   0x00002408  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FCFG_B0_START   0x00002410  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FCFG_B1_START   0x00002414  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FCFG_B2_START   0x00002418  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FCFG_B3_START   0x0000241C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FCFG_B4_START   0x00002420  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FCFG_B5_START   0x00002424  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FCFG_B6_START   0x00002428  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FCFG_B7_START   0x0000242C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_O_FCFG_B0_SSIZE0  0x00002430  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_WAITSTATES register.
//
//*****************************************************************************
#define FLASH_WAITSTATES_WAITSTATES_M \
                                0x000000FF  // [Configured by boot firmware] 
                                            // Flash reading wait states 
                                            // (USERCODE range). Number of 
                                            // clock cycles to access flash. 
                                            // Range 1 to 255, Setting 0 will 
                                            // behave like minimum = 1. Target 
                                            // optimal value is 3. Flash 
                                            // reading will fail if set too low 
                                            // (less than 3). 

#define FLASH_WAITSTATES_WAITSTATES_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_STAT register.
//
//*****************************************************************************
#define FLASH_STAT_EFUSE_BLANK  0x00008000  // Efuse scanning detected if fuse 
                                            // ROM is blank: 0 : Not blank 1 : 
                                            // Blank 
#define FLASH_STAT_EFUSE_BLANK_M \
                                0x00008000
#define FLASH_STAT_EFUSE_BLANK_S 15
#define FLASH_STAT_EFUSE_TIMEOUT \
                                0x00004000  // Efuse scanning resulted in 
                                            // timeout error. 0 : No Timeout 
                                            // error 1 : Timeout Error 

#define FLASH_STAT_EFUSE_TIMEOUT_M \
                                0x00004000
#define FLASH_STAT_EFUSE_TIMEOUT_S 14
#define FLASH_STAT_EFUSE_CRC_ERROR \
                                0x00002000  // Efuse scanning resulted in scan 
                                            // chain CRC error. 0 : No CRC 
                                            // error 1 : CRC Error 

#define FLASH_STAT_EFUSE_CRC_ERROR_M \
                                0x00002000
#define FLASH_STAT_EFUSE_CRC_ERROR_S 13
#define FLASH_STAT_EFUSE_ERRCODE_M \
                                0x00001F00  // Same as EFUSEERROR.CODE[4:0] 

#define FLASH_STAT_EFUSE_ERRCODE_S 8
#define FLASH_STAT_SAMHOLD_DIS  0x00000004  // 0: Not disabled 1: Sample and 
                                            // hold disabled and stable 
#define FLASH_STAT_SAMHOLD_DIS_M \
                                0x00000004
#define FLASH_STAT_SAMHOLD_DIS_S 2
#define FLASH_STAT_BUSY         0x00000002  // Fast version of the FMC 
                                            // FMSTAT.BUSY bit. This flag is 
                                            // valid immediately after the 
                                            // operation setting it 
                                            // (FMSTAT.BUSY is delayed some 
                                            // cycles) 0 : Not busy 1 : Busy 
#define FLASH_STAT_BUSY_M       0x00000002
#define FLASH_STAT_BUSY_S       1
#define FLASH_STAT_POWER_MODE   0x00000001  // Actual low power mode. 0 : Low 
                                            // power 1 : Active 
#define FLASH_STAT_POWER_MODE_M 0x00000001
#define FLASH_STAT_POWER_MODE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_CFG register.
//
//*****************************************************************************
#define FLASH_CFG_DIS_READACCESS \
                                0x00000010  // Disable read access to flash. 
                                            // This bit will disable all read 
                                            // accesses to the flash. The 
                                            // purpose is to block read access 
                                            // from other masters when changing 
                                            // the 48 MHz clock source. 
                                            // Firmware has to disable all CPU 
                                            // accesses to the flash before 
                                            // setting this bit. NOTE: Once 
                                            // this bit is set, if a subsequent 
                                            // read access to the flash arrays 
                                            // is made, this will result in a 
                                            // bus stall condition so should be 
                                            // avoided. 

#define FLASH_CFG_DIS_READACCESS_M \
                                0x00000010
#define FLASH_CFG_DIS_READACCESS_S 4
#define FLASH_CFG_DIS_STANDBY   0x00000002  // [Configured by boot firmware] 
                                            // Disable standby functionality in 
                                            // read idle state 
#define FLASH_CFG_DIS_STANDBY_M 0x00000002
#define FLASH_CFG_DIS_STANDBY_S 1
#define FLASH_CFG_DIS_IDLE      0x00000001  // [Configured by boot firmware] 
                                            // Disable sample and hold 
                                            // functionality in read idle state 
#define FLASH_CFG_DIS_IDLE_M    0x00000001
#define FLASH_CFG_DIS_IDLE_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_SYSCODE_START register.
//
//*****************************************************************************
#define FLASH_SYSCODE_START_SYSCODE_START_M \
                                0x0000001F  // Syscode addressing offset. This 
                                            // register will point to the 
                                            // sector number in the flash where 
                                            // syscode starts. The purpose of 
                                            // syscode is to emulate ROM code 
                                            // in a flash version of cc26xx. 
                                            // The ROM code is placed in the 
                                            // flash from the specified sector. 
                                            // Sector size is 4 Kbyte. 

#define FLASH_SYSCODE_START_SYSCODE_START_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FLASH_SIZE register.
//
//*****************************************************************************
#define FLASH_FLASH_SIZE_SECTORS_M \
                                0x000000FF  // [Configured by boot firmware] 
                                            // Flash size. The number of flash 
                                            // sectors in the configured 
                                            // device. Read access to sectors 
                                            // equal to this number or higher 
                                            // will result in an error. The CFG 
                                            // area is the sector 
                                            // (FLASH_SIZE.SECTORS - 1) Writing 
                                            // to this register is disabled by 
                                            // the CONFIG:CONFIGURED bit. 

#define FLASH_FLASH_SIZE_SECTORS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FWLOCK register.
//
//*****************************************************************************
#define FLASH_FWLOCK_FWLOCK_M   0x00000007  // LOCK register for FWFLAG. 
                                            // Writing to FWFLAG requires 
                                            // FWLOCK = 0x5 
#define FLASH_FWLOCK_FWLOCK_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FWFLAG register.
//
//*****************************************************************************
#define FLASH_FWFLAG_FWFLAG_M   0x00000007  // Flags available for Firmware. 
                                            // Writing to FWFLAG requires 
                                            // FWLOCK = 0x5 
#define FLASH_FWFLAG_FWFLAG_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_EFUSE register.
//
//*****************************************************************************
#define FLASH_EFUSE_INSTRUCTION_M \
                                0x1F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSE_INSTRUCTION_S 24
#define FLASH_EFUSE_DUMPWORD_M  0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_EFUSE_DUMPWORD_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_EFUSEADDR register.
//
//*****************************************************************************
#define FLASH_EFUSEADDR_BLOCK_M 0x0000F800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_EFUSEADDR_BLOCK_S 11
#define FLASH_EFUSEADDR_ROW_M   0x000007FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_EFUSEADDR_ROW_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_DATAUPPER register.
//
//*****************************************************************************
#define FLASH_DATAUPPER_SPARE_M 0x000000F8  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_DATAUPPER_SPARE_S 3
#define FLASH_DATAUPPER_P       0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_DATAUPPER_P_M     0x00000004
#define FLASH_DATAUPPER_P_S     2
#define FLASH_DATAUPPER_R       0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_DATAUPPER_R_M     0x00000002
#define FLASH_DATAUPPER_R_S     1
#define FLASH_DATAUPPER_EEN     0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_DATAUPPER_EEN_M   0x00000001
#define FLASH_DATAUPPER_EEN_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_DATALOWER register.
//
//*****************************************************************************
#define FLASH_DATALOWER_DATA_M  0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_DATALOWER_DATA_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_EFUSECFG register.
//
//*****************************************************************************
#define FLASH_EFUSECFG_IDLEGATING \
                                0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSECFG_IDLEGATING_M \
                                0x00000100
#define FLASH_EFUSECFG_IDLEGATING_S 8
#define FLASH_EFUSECFG_SLAVEPOWER_M \
                                0x00000018  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSECFG_SLAVEPOWER_S 3
#define FLASH_EFUSECFG_GATING   0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_EFUSECFG_GATING_M 0x00000001
#define FLASH_EFUSECFG_GATING_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_EFUSESTAT register.
//
//*****************************************************************************
#define FLASH_EFUSESTAT_RESETDONE \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSESTAT_RESETDONE_M \
                                0x00000001
#define FLASH_EFUSESTAT_RESETDONE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_ACC register.
//
//*****************************************************************************
#define FLASH_ACC_ACCUMULATOR_M 0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_ACC_ACCUMULATOR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_BOUNDARY register.
//
//*****************************************************************************
#define FLASH_BOUNDARY_DISROW0  0x00800000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_BOUNDARY_DISROW0_M \
                                0x00800000
#define FLASH_BOUNDARY_DISROW0_S 23
#define FLASH_BOUNDARY_SPARE    0x00400000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_BOUNDARY_SPARE_M  0x00400000
#define FLASH_BOUNDARY_SPARE_S  22
#define FLASH_BOUNDARY_EFC_SELF_TEST_ERROR \
                                0x00200000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_BOUNDARY_EFC_SELF_TEST_ERROR_M \
                                0x00200000
#define FLASH_BOUNDARY_EFC_SELF_TEST_ERROR_S 21
#define FLASH_BOUNDARY_EFC_INSTRUCTION_INFO \
                                0x00100000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_BOUNDARY_EFC_INSTRUCTION_INFO_M \
                                0x00100000
#define FLASH_BOUNDARY_EFC_INSTRUCTION_INFO_S 20
#define FLASH_BOUNDARY_EFC_INSTRUCTION_ERROR \
                                0x00080000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_BOUNDARY_EFC_INSTRUCTION_ERROR_M \
                                0x00080000
#define FLASH_BOUNDARY_EFC_INSTRUCTION_ERROR_S 19
#define FLASH_BOUNDARY_EFC_AUTOLOAD_ERROR \
                                0x00040000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_BOUNDARY_EFC_AUTOLOAD_ERROR_M \
                                0x00040000
#define FLASH_BOUNDARY_EFC_AUTOLOAD_ERROR_S 18
#define FLASH_BOUNDARY_OUTPUTENABLE_M \
                                0x0003C000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_BOUNDARY_OUTPUTENABLE_S 14
#define FLASH_BOUNDARY_YS_ECC_SELF_TEST_EN \
                                0x00002000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_BOUNDARY_YS_ECC_SELF_TEST_EN_M \
                                0x00002000
#define FLASH_BOUNDARY_YS_ECC_SELF_TEST_EN_S 13
#define FLASH_BOUNDARY_SYS_ECC_OVERRIDE_EN \
                                0x00001000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_BOUNDARY_SYS_ECC_OVERRIDE_EN_M \
                                0x00001000
#define FLASH_BOUNDARY_SYS_ECC_OVERRIDE_EN_S 12
#define FLASH_BOUNDARY_EFC_FDI  0x00000800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_BOUNDARY_EFC_FDI_M \
                                0x00000800
#define FLASH_BOUNDARY_EFC_FDI_S 11
#define FLASH_BOUNDARY_SYS_DIEID_AUTOLOAD_EN \
                                0x00000400  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_BOUNDARY_SYS_DIEID_AUTOLOAD_EN_M \
                                0x00000400
#define FLASH_BOUNDARY_SYS_DIEID_AUTOLOAD_EN_S 10
#define FLASH_BOUNDARY_SYS_REPAIR_EN_M \
                                0x00000300  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_BOUNDARY_SYS_REPAIR_EN_S 8
#define FLASH_BOUNDARY_SYS_WS_READ_STATES_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_BOUNDARY_SYS_WS_READ_STATES_S 4
#define FLASH_BOUNDARY_INPUTENABLE_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_BOUNDARY_INPUTENABLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_EFUSEFLAG register.
//
//*****************************************************************************
#define FLASH_EFUSEFLAG_KEY     0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_EFUSEFLAG_KEY_M   0x00000001
#define FLASH_EFUSEFLAG_KEY_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_EFUSEKEY register.
//
//*****************************************************************************
#define FLASH_EFUSEKEY_CODE_M   0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_EFUSEKEY_CODE_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_EFUSERELEASE register.
//
//*****************************************************************************
#define FLASH_EFUSERELEASE_ODPYEAR_M \
                                0xFE000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSERELEASE_ODPYEAR_S 25
#define FLASH_EFUSERELEASE_ODPMONTH_M \
                                0x01E00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSERELEASE_ODPMONTH_S 21
#define FLASH_EFUSERELEASE_ODPDAY_M \
                                0x001F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSERELEASE_ODPDAY_S 16
#define FLASH_EFUSERELEASE_EFUSEYEAR_M \
                                0x0000FE00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSERELEASE_EFUSEYEAR_S 9
#define FLASH_EFUSERELEASE_EFUSEMONTH_M \
                                0x000001E0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSERELEASE_EFUSEMONTH_S 5
#define FLASH_EFUSERELEASE_EFUSEDAY_M \
                                0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSERELEASE_EFUSEDAY_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_EFUSEPINS register.
//
//*****************************************************************************
#define FLASH_EFUSEPINS_EFC_SELF_TEST_DONE \
                                0x00008000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPINS_EFC_SELF_TEST_DONE_M \
                                0x00008000
#define FLASH_EFUSEPINS_EFC_SELF_TEST_DONE_S 15
#define FLASH_EFUSEPINS_EFC_SELF_TEST_ERROR \
                                0x00004000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPINS_EFC_SELF_TEST_ERROR_M \
                                0x00004000
#define FLASH_EFUSEPINS_EFC_SELF_TEST_ERROR_S 14
#define FLASH_EFUSEPINS_SYS_ECC_SELF_TEST_EN \
                                0x00002000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPINS_SYS_ECC_SELF_TEST_EN_M \
                                0x00002000
#define FLASH_EFUSEPINS_SYS_ECC_SELF_TEST_EN_S 13
#define FLASH_EFUSEPINS_EFC_INSTRUCTION_INFO \
                                0x00001000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPINS_EFC_INSTRUCTION_INFO_M \
                                0x00001000
#define FLASH_EFUSEPINS_EFC_INSTRUCTION_INFO_S 12
#define FLASH_EFUSEPINS_EFC_INSTRUCTION_ERROR \
                                0x00000800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPINS_EFC_INSTRUCTION_ERROR_M \
                                0x00000800
#define FLASH_EFUSEPINS_EFC_INSTRUCTION_ERROR_S 11
#define FLASH_EFUSEPINS_EFC_AUTOLOAD_ERROR \
                                0x00000400  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPINS_EFC_AUTOLOAD_ERROR_M \
                                0x00000400
#define FLASH_EFUSEPINS_EFC_AUTOLOAD_ERROR_S 10
#define FLASH_EFUSEPINS_SYS_ECC_OVERRIDE_EN \
                                0x00000200  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPINS_SYS_ECC_OVERRIDE_EN_M \
                                0x00000200
#define FLASH_EFUSEPINS_SYS_ECC_OVERRIDE_EN_S 9
#define FLASH_EFUSEPINS_EFC_READY \
                                0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPINS_EFC_READY_M \
                                0x00000100
#define FLASH_EFUSEPINS_EFC_READY_S 8
#define FLASH_EFUSEPINS_EFC_FCLRZ \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPINS_EFC_FCLRZ_M \
                                0x00000080
#define FLASH_EFUSEPINS_EFC_FCLRZ_S 7
#define FLASH_EFUSEPINS_SYS_DIEID_AUTOLOAD_EN \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPINS_SYS_DIEID_AUTOLOAD_EN_M \
                                0x00000040
#define FLASH_EFUSEPINS_SYS_DIEID_AUTOLOAD_EN_S 6
#define FLASH_EFUSEPINS_SYS_REPAIR_EN_M \
                                0x00000030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPINS_SYS_REPAIR_EN_S 4
#define FLASH_EFUSEPINS_SYS_WS_READ_STATES_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPINS_SYS_WS_READ_STATES_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_EFUSECRA register.
//
//*****************************************************************************
#define FLASH_EFUSECRA_DATA_M   0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_EFUSECRA_DATA_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_EFUSEREAD register.
//
//*****************************************************************************
#define FLASH_EFUSEREAD_DATABIT_M \
                                0x00000300  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEREAD_DATABIT_S 8
#define FLASH_EFUSEREAD_READCLOCK_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEREAD_READCLOCK_S 4
#define FLASH_EFUSEREAD_DEBUG   0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_EFUSEREAD_DEBUG_M 0x00000008
#define FLASH_EFUSEREAD_DEBUG_S 3
#define FLASH_EFUSEREAD_SPARE   0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_EFUSEREAD_SPARE_M 0x00000004
#define FLASH_EFUSEREAD_SPARE_S 2
#define FLASH_EFUSEREAD_MARGIN_M \
                                0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEREAD_MARGIN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_EFUSEPROGRAM register.
//
//*****************************************************************************
#define FLASH_EFUSEPROGRAM_COMPAREDISABLE \
                                0x40000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPROGRAM_COMPAREDISABLE_M \
                                0x40000000
#define FLASH_EFUSEPROGRAM_COMPAREDISABLE_S 30
#define FLASH_EFUSEPROGRAM_CLOCKSTALL_M \
                                0x3FFFC000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPROGRAM_CLOCKSTALL_S 14
#define FLASH_EFUSEPROGRAM_VPPTOVDD \
                                0x00002000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPROGRAM_VPPTOVDD_M \
                                0x00002000
#define FLASH_EFUSEPROGRAM_VPPTOVDD_S 13
#define FLASH_EFUSEPROGRAM_ITERATIONS_M \
                                0x00001E00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPROGRAM_ITERATIONS_S 9
#define FLASH_EFUSEPROGRAM_WRITECLOCK_M \
                                0x000001FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_EFUSEPROGRAM_WRITECLOCK_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_EFUSEERROR register.
//
//*****************************************************************************
#define FLASH_EFUSEERROR_DONE   0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_EFUSEERROR_DONE_M 0x00000020
#define FLASH_EFUSEERROR_DONE_S 5
#define FLASH_EFUSEERROR_CODE_M 0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_EFUSEERROR_CODE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_SINGLEBIT register.
//
//*****************************************************************************
#define FLASH_SINGLEBIT_FROMN_M 0xFFFFFFFE  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_SINGLEBIT_FROMN_S 1
#define FLASH_SINGLEBIT_FROM0   0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_SINGLEBIT_FROM0_M 0x00000001
#define FLASH_SINGLEBIT_FROM0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_TWOBIT register.
//
//*****************************************************************************
#define FLASH_TWOBIT_FROMN_M    0xFFFFFFFE  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_TWOBIT_FROMN_S    1
#define FLASH_TWOBIT_FROM0      0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_TWOBIT_FROM0_M    0x00000001
#define FLASH_TWOBIT_FROM0_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_SELFTESTCYC register.
//
//*****************************************************************************
#define FLASH_SELFTESTCYC_CYCLES_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_SELFTESTCYC_CYCLES_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_SELFTESTSIGN register.
//
//*****************************************************************************
#define FLASH_SELFTESTSIGN_SIGNATURE_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_SELFTESTSIGN_SIGNATURE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FRDCTL register.
//
//*****************************************************************************
#define FLASH_FRDCTL_RWAIT_M    0x00000F00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FRDCTL_RWAIT_S    8
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FSPRD register.
//
//*****************************************************************************
#define FLASH_FSPRD_RMBSEM_M    0x0000FF00  // Software should not rely on the 
                                            // value of a reserved. Writing any 
                                            // other value than the reset value 
                                            // may result in undefined 
                                            // behavior. 
#define FLASH_FSPRD_RMBSEM_S    8
#define FLASH_FSPRD_RM1         0x00000002  // Software should not rely on the 
                                            // value of a reserved. Writing any 
                                            // other value than the reset value 
                                            // may result in undefined 
                                            // behavior. 
#define FLASH_FSPRD_RM1_M       0x00000002
#define FLASH_FSPRD_RM1_S       1
#define FLASH_FSPRD_RM0         0x00000001  // Software should not rely on the 
                                            // value of a reserved. Writing any 
                                            // other value than the reset value 
                                            // may result in undefined 
                                            // behavior. 
#define FLASH_FSPRD_RM0_M       0x00000001
#define FLASH_FSPRD_RM0_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FEDACCTL1 register.
//
//*****************************************************************************
#define FLASH_FEDACCTL1_SUSP_IGNR \
                                0x01000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FEDACCTL1_SUSP_IGNR_M \
                                0x01000000
#define FLASH_FEDACCTL1_SUSP_IGNR_S 24
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FEDACSTAT register.
//
//*****************************************************************************
#define FLASH_FEDACSTAT_RVF_INT 0x02000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FEDACSTAT_RVF_INT_M \
                                0x02000000
#define FLASH_FEDACSTAT_RVF_INT_S 25
#define FLASH_FEDACSTAT_FSM_DONE \
                                0x01000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FEDACSTAT_FSM_DONE_M \
                                0x01000000
#define FLASH_FEDACSTAT_FSM_DONE_S 24
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FBPROT register.
//
//*****************************************************************************
#define FLASH_FBPROT_PROTL1DIS  0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBPROT_PROTL1DIS_M \
                                0x00000001
#define FLASH_FBPROT_PROTL1DIS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FBSE register.
//
//*****************************************************************************
#define FLASH_FBSE_BSE_M        0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBSE_BSE_S        0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FBBUSY register.
//
//*****************************************************************************
#define FLASH_FBBUSY_BUSY_M     0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBBUSY_BUSY_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FBAC register.
//
//*****************************************************************************
#define FLASH_FBAC_OTPPROTDIS   0x00010000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBAC_OTPPROTDIS_M 0x00010000
#define FLASH_FBAC_OTPPROTDIS_S 16
#define FLASH_FBAC_BAGP_M       0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBAC_BAGP_S       8
#define FLASH_FBAC_VREADS_M     0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBAC_VREADS_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FBFALLBACK register.
//
//*****************************************************************************
#define FLASH_FBFALLBACK_FSM_PWRSAV_M \
                                0x0F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FBFALLBACK_FSM_PWRSAV_S 24
#define FLASH_FBFALLBACK_REG_PWRSAV_M \
                                0x000F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FBFALLBACK_REG_PWRSAV_S 16
#define FLASH_FBFALLBACK_BANKPWR7_M \
                                0x0000C000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FBFALLBACK_BANKPWR7_S 14
#define FLASH_FBFALLBACK_BANKPWR6_M \
                                0x00003000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FBFALLBACK_BANKPWR6_S 12
#define FLASH_FBFALLBACK_BANKPWR5_M \
                                0x00000C00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FBFALLBACK_BANKPWR5_S 10
#define FLASH_FBFALLBACK_BANKPWR4_M \
                                0x00000300  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FBFALLBACK_BANKPWR4_S 8
#define FLASH_FBFALLBACK_BANKPWR3_M \
                                0x000000C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FBFALLBACK_BANKPWR3_S 6
#define FLASH_FBFALLBACK_BANKPWR2_M \
                                0x00000030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FBFALLBACK_BANKPWR2_S 4
#define FLASH_FBFALLBACK_BANKPWR1_M \
                                0x0000000C  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FBFALLBACK_BANKPWR1_S 2
#define FLASH_FBFALLBACK_BANKPWR0_M \
                                0x00000003  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FBFALLBACK_BANKPWR0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FBPRDY register.
//
//*****************************************************************************
#define FLASH_FBPRDY_BANKBUSY   0x00010000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBPRDY_BANKBUSY_M 0x00010000
#define FLASH_FBPRDY_BANKBUSY_S 16
#define FLASH_FBPRDY_PUMPRDY    0x00008000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBPRDY_PUMPRDY_M  0x00008000
#define FLASH_FBPRDY_PUMPRDY_S  15
#define FLASH_FBPRDY_BANKRDY    0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBPRDY_BANKRDY_M  0x00000001
#define FLASH_FBPRDY_BANKRDY_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FPAC1 register.
//
//*****************************************************************************
#define FLASH_FPAC1_PSLEEPTDIS_M \
                                0x0FFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FPAC1_PSLEEPTDIS_S 16
#define FLASH_FPAC1_PUMPPWR     0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FPAC1_PUMPPWR_M   0x00000001
#define FLASH_FPAC1_PUMPPWR_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FPAC2 register.
//
//*****************************************************************************
#define FLASH_FPAC2_PAGP_M      0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FPAC2_PAGP_S      0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FMAC register.
//
//*****************************************************************************
#define FLASH_FMAC_BANK_M       0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMAC_BANK_S       0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FMSTAT register.
//
//*****************************************************************************
#define FLASH_FMSTAT_RVSUSP     0x00020000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_RVSUSP_M   0x00020000
#define FLASH_FMSTAT_RVSUSP_S   17
#define FLASH_FMSTAT_RDVER      0x00010000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_RDVER_M    0x00010000
#define FLASH_FMSTAT_RDVER_S    16
#define FLASH_FMSTAT_RVF        0x00008000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_RVF_M      0x00008000
#define FLASH_FMSTAT_RVF_S      15
#define FLASH_FMSTAT_ILA        0x00004000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_ILA_M      0x00004000
#define FLASH_FMSTAT_ILA_S      14
#define FLASH_FMSTAT_DBF        0x00002000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_DBF_M      0x00002000
#define FLASH_FMSTAT_DBF_S      13
#define FLASH_FMSTAT_PGV        0x00001000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_PGV_M      0x00001000
#define FLASH_FMSTAT_PGV_S      12
#define FLASH_FMSTAT_PCV        0x00000800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_PCV_M      0x00000800
#define FLASH_FMSTAT_PCV_S      11
#define FLASH_FMSTAT_EV         0x00000400  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_EV_M       0x00000400
#define FLASH_FMSTAT_EV_S       10
#define FLASH_FMSTAT_CV         0x00000200  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_CV_M       0x00000200
#define FLASH_FMSTAT_CV_S       9
#define FLASH_FMSTAT_BUSY       0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_BUSY_M     0x00000100
#define FLASH_FMSTAT_BUSY_S     8
#define FLASH_FMSTAT_ERS        0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_ERS_M      0x00000080
#define FLASH_FMSTAT_ERS_S      7
#define FLASH_FMSTAT_PGM        0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_PGM_M      0x00000040
#define FLASH_FMSTAT_PGM_S      6
#define FLASH_FMSTAT_INVDAT     0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_INVDAT_M   0x00000020
#define FLASH_FMSTAT_INVDAT_S   5
#define FLASH_FMSTAT_CSTAT      0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_CSTAT_M    0x00000010
#define FLASH_FMSTAT_CSTAT_S    4
#define FLASH_FMSTAT_VOLSTAT    0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_VOLSTAT_M  0x00000008
#define FLASH_FMSTAT_VOLSTAT_S  3
#define FLASH_FMSTAT_ESUSP      0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_ESUSP_M    0x00000004
#define FLASH_FMSTAT_ESUSP_S    2
#define FLASH_FMSTAT_PSUSP      0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_PSUSP_M    0x00000002
#define FLASH_FMSTAT_PSUSP_S    1
#define FLASH_FMSTAT_SLOCK      0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FMSTAT_SLOCK_M    0x00000001
#define FLASH_FMSTAT_SLOCK_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FLOCK register.
//
//*****************************************************************************
#define FLASH_FLOCK_ENCOM_M     0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FLOCK_ENCOM_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FVREADCT register.
//
//*****************************************************************************
#define FLASH_FVREADCT_VREADCT_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FVREADCT_VREADCT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FVHVCT1 register.
//
//*****************************************************************************
#define FLASH_FVHVCT1_TRIM13_E_M \
                                0x00F00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FVHVCT1_TRIM13_E_S 20
#define FLASH_FVHVCT1_VHVCT_E_M 0x000F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FVHVCT1_VHVCT_E_S 16
#define FLASH_FVHVCT1_TRIM13_PV_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FVHVCT1_TRIM13_PV_S 4
#define FLASH_FVHVCT1_VHVCT_PV_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FVHVCT1_VHVCT_PV_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FVHVCT2 register.
//
//*****************************************************************************
#define FLASH_FVHVCT2_TRIM13_P_M \
                                0x00F00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FVHVCT2_TRIM13_P_S 20
#define FLASH_FVHVCT2_VHVCT_P_M 0x000F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FVHVCT2_VHVCT_P_S 16
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FVHVCT3 register.
//
//*****************************************************************************
#define FLASH_FVHVCT3_WCT_M     0x000F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FVHVCT3_WCT_S     16
#define FLASH_FVHVCT3_VHVCT_READ_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FVHVCT3_VHVCT_READ_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FVNVCT register.
//
//*****************************************************************************
#define FLASH_FVNVCT_VCG2P5CT_M 0x00001F00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FVNVCT_VCG2P5CT_S 8
#define FLASH_FVNVCT_VIN_CT_M   0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FVNVCT_VIN_CT_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FVSLP register.
//
//*****************************************************************************
#define FLASH_FVSLP_VSL_P_M     0x0000F000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FVSLP_VSL_P_S     12
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FVWLCT register.
//
//*****************************************************************************
#define FLASH_FVWLCT_VWLCT_P_M  0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FVWLCT_VWLCT_P_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FEFUSECTL register.
//
//*****************************************************************************
#define FLASH_FEFUSECTL_CHAIN_SEL_M \
                                0x07000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FEFUSECTL_CHAIN_SEL_S 24
#define FLASH_FEFUSECTL_WRITE_EN \
                                0x00020000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FEFUSECTL_WRITE_EN_M \
                                0x00020000
#define FLASH_FEFUSECTL_WRITE_EN_S 17
#define FLASH_FEFUSECTL_BP_SEL  0x00010000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FEFUSECTL_BP_SEL_M \
                                0x00010000
#define FLASH_FEFUSECTL_BP_SEL_S 16
#define FLASH_FEFUSECTL_EF_CLRZ 0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FEFUSECTL_EF_CLRZ_M \
                                0x00000100
#define FLASH_FEFUSECTL_EF_CLRZ_S 8
#define FLASH_FEFUSECTL_EF_TEST 0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FEFUSECTL_EF_TEST_M \
                                0x00000010
#define FLASH_FEFUSECTL_EF_TEST_S 4
#define FLASH_FEFUSECTL_EFUSE_EN_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FEFUSECTL_EFUSE_EN_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FEFUSESTAT register.
//
//*****************************************************************************
#define FLASH_FEFUSESTAT_SHIFT_DONE \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FEFUSESTAT_SHIFT_DONE_M \
                                0x00000001
#define FLASH_FEFUSESTAT_SHIFT_DONE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FEFUSEDATA register.
//
//*****************************************************************************
#define FLASH_FEFUSEDATA_FEFUSEDATA_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FEFUSEDATA_FEFUSEDATA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSEQPMP register.
//
//*****************************************************************************
#define FLASH_FSEQPMP_TRIM_3P4_M \
                                0x0F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSEQPMP_TRIM_3P4_S 24
#define FLASH_FSEQPMP_TRIM_1P7_M \
                                0x00300000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSEQPMP_TRIM_1P7_S 20
#define FLASH_FSEQPMP_TRIM_0P8_M \
                                0x000F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSEQPMP_TRIM_0P8_S 16
#define FLASH_FSEQPMP_VIN_AT_X_M \
                                0x00007000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSEQPMP_VIN_AT_X_S 12
#define FLASH_FSEQPMP_VIN_BY_PASS \
                                0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSEQPMP_VIN_BY_PASS_M \
                                0x00000100
#define FLASH_FSEQPMP_VIN_BY_PASS_S 8
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FBSTROBES register.
//
//*****************************************************************************
#define FLASH_FBSTROBES_ECBIT   0x01000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBSTROBES_ECBIT_M 0x01000000
#define FLASH_FBSTROBES_ECBIT_S 24
#define FLASH_FBSTROBES_RWAIT2_FLCLK \
                                0x00040000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FBSTROBES_RWAIT2_FLCLK_M \
                                0x00040000
#define FLASH_FBSTROBES_RWAIT2_FLCLK_S 18
#define FLASH_FBSTROBES_RWAIT_FLCLK \
                                0x00020000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FBSTROBES_RWAIT_FLCLK_M \
                                0x00020000
#define FLASH_FBSTROBES_RWAIT_FLCLK_S 17
#define FLASH_FBSTROBES_FLCLKEN 0x00010000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBSTROBES_FLCLKEN_M \
                                0x00010000
#define FLASH_FBSTROBES_FLCLKEN_S 16
#define FLASH_FBSTROBES_CTRLENZ 0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBSTROBES_CTRLENZ_M \
                                0x00000100
#define FLASH_FBSTROBES_CTRLENZ_S 8
#define FLASH_FBSTROBES_NOCOLRED \
                                0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FBSTROBES_NOCOLRED_M \
                                0x00000040
#define FLASH_FBSTROBES_NOCOLRED_S 6
#define FLASH_FBSTROBES_PRECOL  0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBSTROBES_PRECOL_M \
                                0x00000020
#define FLASH_FBSTROBES_PRECOL_S 5
#define FLASH_FBSTROBES_TI_OTP  0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBSTROBES_TI_OTP_M \
                                0x00000010
#define FLASH_FBSTROBES_TI_OTP_S 4
#define FLASH_FBSTROBES_OTP     0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBSTROBES_OTP_M   0x00000008
#define FLASH_FBSTROBES_OTP_S   3
#define FLASH_FBSTROBES_TEZ     0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBSTROBES_TEZ_M   0x00000004
#define FLASH_FBSTROBES_TEZ_S   2
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FPSTROBES register.
//
//*****************************************************************************
#define FLASH_FPSTROBES_EXECUTEZ \
                                0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FPSTROBES_EXECUTEZ_M \
                                0x00000100
#define FLASH_FPSTROBES_EXECUTEZ_S 8
#define FLASH_FPSTROBES_V3PWRDNZ \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FPSTROBES_V3PWRDNZ_M \
                                0x00000002
#define FLASH_FPSTROBES_V3PWRDNZ_S 1
#define FLASH_FPSTROBES_V5PWRDNZ \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FPSTROBES_V5PWRDNZ_M \
                                0x00000001
#define FLASH_FPSTROBES_V5PWRDNZ_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FBMODE register.
//
//*****************************************************************************
#define FLASH_FBMODE_MODE_M     0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FBMODE_MODE_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FTCR register.
//
//*****************************************************************************
#define FLASH_FTCR_TCR_M        0x0000007F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FTCR_TCR_S        0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FADDR register.
//
//*****************************************************************************
#define FLASH_FADDR_FADDR_M     0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FADDR_FADDR_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the FLASH_O_FTCTL register.
//
//*****************************************************************************
#define FLASH_FTCTL_WDATA_BLK_CLR \
                                0x00010000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FTCTL_WDATA_BLK_CLR_M \
                                0x00010000
#define FLASH_FTCTL_WDATA_BLK_CLR_S 16
#define FLASH_FTCTL_TEST_EN     0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FTCTL_TEST_EN_M   0x00000002
#define FLASH_FTCTL_TEST_EN_S   1
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FWPWRITE0 register.
//
//*****************************************************************************
#define FLASH_FWPWRITE0_FWPWRITE0_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FWPWRITE0_FWPWRITE0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FWPWRITE1 register.
//
//*****************************************************************************
#define FLASH_FWPWRITE1_FWPWRITE1_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FWPWRITE1_FWPWRITE1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FWPWRITE2 register.
//
//*****************************************************************************
#define FLASH_FWPWRITE2_FWPWRITE2_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FWPWRITE2_FWPWRITE2_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FWPWRITE3 register.
//
//*****************************************************************************
#define FLASH_FWPWRITE3_FWPWRITE3_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FWPWRITE3_FWPWRITE3_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FWPWRITE4 register.
//
//*****************************************************************************
#define FLASH_FWPWRITE4_FWPWRITE4_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FWPWRITE4_FWPWRITE4_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FWPWRITE5 register.
//
//*****************************************************************************
#define FLASH_FWPWRITE5_FWPWRITE5_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FWPWRITE5_FWPWRITE5_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FWPWRITE6 register.
//
//*****************************************************************************
#define FLASH_FWPWRITE6_FWPWRITE6_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FWPWRITE6_FWPWRITE6_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FWPWRITE7 register.
//
//*****************************************************************************
#define FLASH_FWPWRITE7_FWPWRITE7_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FWPWRITE7_FWPWRITE7_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FWPWRITE_ECC register.
//
//*****************************************************************************
#define FLASH_FWPWRITE_ECC_ECCBYTES07_00_M \
                                0xFF000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FWPWRITE_ECC_ECCBYTES07_00_S 24
#define FLASH_FWPWRITE_ECC_ECCBYTES15_08_M \
                                0x00FF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FWPWRITE_ECC_ECCBYTES15_08_S 16
#define FLASH_FWPWRITE_ECC_ECCBYTES23_16_M \
                                0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FWPWRITE_ECC_ECCBYTES23_16_S 8
#define FLASH_FWPWRITE_ECC_ECCBYTES31_24_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FWPWRITE_ECC_ECCBYTES31_24_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSWSTAT register.
//
//*****************************************************************************
#define FLASH_FSWSTAT_SAFELV    0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FSWSTAT_SAFELV_M  0x00000001
#define FLASH_FSWSTAT_SAFELV_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_GLBCTL register.
//
//*****************************************************************************
#define FLASH_FSM_GLBCTL_CLKSEL 0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FSM_GLBCTL_CLKSEL_M \
                                0x00000001
#define FLASH_FSM_GLBCTL_CLKSEL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_STATE register.
//
//*****************************************************************************
#define FLASH_FSM_STATE_CTRLENZ 0x00000800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FSM_STATE_CTRLENZ_M \
                                0x00000800
#define FLASH_FSM_STATE_CTRLENZ_S 11
#define FLASH_FSM_STATE_EXECUTEZ \
                                0x00000400  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_STATE_EXECUTEZ_M \
                                0x00000400
#define FLASH_FSM_STATE_EXECUTEZ_S 10
#define FLASH_FSM_STATE_FSM_ACT 0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FSM_STATE_FSM_ACT_M \
                                0x00000100
#define FLASH_FSM_STATE_FSM_ACT_S 8
#define FLASH_FSM_STATE_TIOTP_ACT \
                                0x00000080  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_STATE_TIOTP_ACT_M \
                                0x00000080
#define FLASH_FSM_STATE_TIOTP_ACT_S 7
#define FLASH_FSM_STATE_OTP_ACT 0x00000040  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FSM_STATE_OTP_ACT_M \
                                0x00000040
#define FLASH_FSM_STATE_OTP_ACT_S 6
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_STAT register.
//
//*****************************************************************************
#define FLASH_FSM_STAT_NON_OP   0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FSM_STAT_NON_OP_M 0x00000004
#define FLASH_FSM_STAT_NON_OP_S 2
#define FLASH_FSM_STAT_OVR_PUL_CNT \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_STAT_OVR_PUL_CNT_M \
                                0x00000002
#define FLASH_FSM_STAT_OVR_PUL_CNT_S 1
#define FLASH_FSM_STAT_INV_DAT  0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FSM_STAT_INV_DAT_M \
                                0x00000001
#define FLASH_FSM_STAT_INV_DAT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_CMD register.
//
//*****************************************************************************
#define FLASH_FSM_CMD_FSMCMD_M  0x0000003F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FSM_CMD_FSMCMD_S  0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_PE_OSU register.
//
//*****************************************************************************
#define FLASH_FSM_PE_OSU_PGM_OSU_M \
                                0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_PE_OSU_PGM_OSU_S 8
#define FLASH_FSM_PE_OSU_ERA_OSU_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_PE_OSU_ERA_OSU_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_VSTAT register.
//
//*****************************************************************************
#define FLASH_FSM_VSTAT_VSTAT_CNT_M \
                                0x0000F000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_VSTAT_VSTAT_CNT_S 12
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_PE_VSU register.
//
//*****************************************************************************
#define FLASH_FSM_PE_VSU_PGM_VSU_M \
                                0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_PE_VSU_PGM_VSU_S 8
#define FLASH_FSM_PE_VSU_ERA_VSU_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_PE_VSU_ERA_VSU_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_CMP_VSU register.
//
//*****************************************************************************
#define FLASH_FSM_CMP_VSU_ADD_EXZ_M \
                                0x0000F000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_CMP_VSU_ADD_EXZ_S 12
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_EX_VAL register.
//
//*****************************************************************************
#define FLASH_FSM_EX_VAL_REP_VSU_M \
                                0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_EX_VAL_REP_VSU_S 8
#define FLASH_FSM_EX_VAL_EXE_VALD_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_EX_VAL_EXE_VALD_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_RD_H register.
//
//*****************************************************************************
#define FLASH_FSM_RD_H_RD_H_M   0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FSM_RD_H_RD_H_S   0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_P_OH register.
//
//*****************************************************************************
#define FLASH_FSM_P_OH_PGM_OH_M 0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FSM_P_OH_PGM_OH_S 8
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_ERA_OH register.
//
//*****************************************************************************
#define FLASH_FSM_ERA_OH_ERA_OH_M \
                                0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ERA_OH_ERA_OH_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_SAV_PPUL register.
//
//*****************************************************************************
#define FLASH_FSM_SAV_PPUL_SAV_P_PUL_M \
                                0x00000FFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_SAV_PPUL_SAV_P_PUL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_PE_VH register.
//
//*****************************************************************************
#define FLASH_FSM_PE_VH_PGM_VH_M \
                                0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_PE_VH_PGM_VH_S 8
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_PRG_PW register.
//
//*****************************************************************************
#define FLASH_FSM_PRG_PW_PROG_PUL_WIDTH_M \
                                0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_PRG_PW_PROG_PUL_WIDTH_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_ERA_PW register.
//
//*****************************************************************************
#define FLASH_FSM_ERA_PW_FSM_ERA_PW_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ERA_PW_FSM_ERA_PW_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_SAV_ERA_PUL register.
//
//*****************************************************************************
#define FLASH_FSM_SAV_ERA_PUL_SAV_ERA_PUL_M \
                                0x00000FFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_SAV_ERA_PUL_SAV_ERA_PUL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_TIMER register.
//
//*****************************************************************************
#define FLASH_FSM_TIMER_FSM_TIMER_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_TIMER_FSM_TIMER_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_MODE register.
//
//*****************************************************************************
#define FLASH_FSM_MODE_RDV_SUBMODE_M \
                                0x000C0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_MODE_RDV_SUBMODE_S 18
#define FLASH_FSM_MODE_PGM_SUBMODE_M \
                                0x00030000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_MODE_PGM_SUBMODE_S 16
#define FLASH_FSM_MODE_ERA_SUBMODE_M \
                                0x0000C000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_MODE_ERA_SUBMODE_S 14
#define FLASH_FSM_MODE_SUBMODE_M \
                                0x00003000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_MODE_SUBMODE_S 12
#define FLASH_FSM_MODE_SAV_PGM_CMD_M \
                                0x00000E00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_MODE_SAV_PGM_CMD_S 9
#define FLASH_FSM_MODE_SAV_ERA_MODE_M \
                                0x000001C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_MODE_SAV_ERA_MODE_S 6
#define FLASH_FSM_MODE_MODE_M   0x00000038  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FSM_MODE_MODE_S   3
#define FLASH_FSM_MODE_CMD_M    0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FSM_MODE_CMD_S    0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_PGM register.
//
//*****************************************************************************
#define FLASH_FSM_PGM_PGM_BANK_M \
                                0x03800000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_PGM_PGM_BANK_S 23
#define FLASH_FSM_PGM_PGM_ADDR_M \
                                0x007FFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_PGM_PGM_ADDR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_ERA register.
//
//*****************************************************************************
#define FLASH_FSM_ERA_ERA_BANK_M \
                                0x03800000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ERA_ERA_BANK_S 23
#define FLASH_FSM_ERA_ERA_ADDR_M \
                                0x007FFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ERA_ERA_ADDR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_PRG_PUL register.
//
//*****************************************************************************
#define FLASH_FSM_PRG_PUL_BEG_EC_LEVEL_M \
                                0x000F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_PRG_PUL_BEG_EC_LEVEL_S 16
#define FLASH_FSM_PRG_PUL_MAX_PRG_PUL_M \
                                0x00000FFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_PRG_PUL_MAX_PRG_PUL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_ERA_PUL register.
//
//*****************************************************************************
#define FLASH_FSM_ERA_PUL_MAX_EC_LEVEL_M \
                                0x000F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ERA_PUL_MAX_EC_LEVEL_S 16
#define FLASH_FSM_ERA_PUL_MAX_ERA_PUL_M \
                                0x00000FFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ERA_PUL_MAX_ERA_PUL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_STEP_SIZE register.
//
//*****************************************************************************
#define FLASH_FSM_STEP_SIZE_EC_STEP_SIZE_M \
                                0x01FF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_STEP_SIZE_EC_STEP_SIZE_S 16
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_PUL_CNTR register.
//
//*****************************************************************************
#define FLASH_FSM_PUL_CNTR_CUR_EC_LEVEL_M \
                                0x01FF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_PUL_CNTR_CUR_EC_LEVEL_S 16
#define FLASH_FSM_PUL_CNTR_PUL_CNTR_M \
                                0x00000FFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_PUL_CNTR_PUL_CNTR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_EC_STEP_HEIGHT register.
//
//*****************************************************************************
#define FLASH_FSM_EC_STEP_HEIGHT_EC_STEP_HEIGHT_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_EC_STEP_HEIGHT_EC_STEP_HEIGHT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_ST_MACHINE register.
//
//*****************************************************************************
#define FLASH_FSM_ST_MACHINE_DO_PRECOND \
                                0x00800000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_DO_PRECOND_M \
                                0x00800000
#define FLASH_FSM_ST_MACHINE_DO_PRECOND_S 23
#define FLASH_FSM_ST_MACHINE_FSM_INT_EN \
                                0x00400000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_FSM_INT_EN_M \
                                0x00400000
#define FLASH_FSM_ST_MACHINE_FSM_INT_EN_S 22
#define FLASH_FSM_ST_MACHINE_ALL_BANKS \
                                0x00200000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_ALL_BANKS_M \
                                0x00200000
#define FLASH_FSM_ST_MACHINE_ALL_BANKS_S 21
#define FLASH_FSM_ST_MACHINE_CMPV_ALLOWED \
                                0x00100000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_CMPV_ALLOWED_M \
                                0x00100000
#define FLASH_FSM_ST_MACHINE_CMPV_ALLOWED_S 20
#define FLASH_FSM_ST_MACHINE_RANDOM \
                                0x00080000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_RANDOM_M \
                                0x00080000
#define FLASH_FSM_ST_MACHINE_RANDOM_S 19
#define FLASH_FSM_ST_MACHINE_RV_SEC_EN \
                                0x00040000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_RV_SEC_EN_M \
                                0x00040000
#define FLASH_FSM_ST_MACHINE_RV_SEC_EN_S 18
#define FLASH_FSM_ST_MACHINE_RV_RES \
                                0x00020000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_RV_RES_M \
                                0x00020000
#define FLASH_FSM_ST_MACHINE_RV_RES_S 17
#define FLASH_FSM_ST_MACHINE_RV_INT_EN \
                                0x00010000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_RV_INT_EN_M \
                                0x00010000
#define FLASH_FSM_ST_MACHINE_RV_INT_EN_S 16
#define FLASH_FSM_ST_MACHINE_ONE_TIME_GOOD \
                                0x00004000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_ONE_TIME_GOOD_M \
                                0x00004000
#define FLASH_FSM_ST_MACHINE_ONE_TIME_GOOD_S 14
#define FLASH_FSM_ST_MACHINE_DO_REDU_COL \
                                0x00000800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_DO_REDU_COL_M \
                                0x00000800
#define FLASH_FSM_ST_MACHINE_DO_REDU_COL_S 11
#define FLASH_FSM_ST_MACHINE_DBG_SHORT_ROW_M \
                                0x00000780  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_DBG_SHORT_ROW_S 7
#define FLASH_FSM_ST_MACHINE_PGM_SEC_COF_EN \
                                0x00000020  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_PGM_SEC_COF_EN_M \
                                0x00000020
#define FLASH_FSM_ST_MACHINE_PGM_SEC_COF_EN_S 5
#define FLASH_FSM_ST_MACHINE_PREC_STOP_EN \
                                0x00000010  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_PREC_STOP_EN_M \
                                0x00000010
#define FLASH_FSM_ST_MACHINE_PREC_STOP_EN_S 4
#define FLASH_FSM_ST_MACHINE_DIS_TST_EN \
                                0x00000008  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_DIS_TST_EN_M \
                                0x00000008
#define FLASH_FSM_ST_MACHINE_DIS_TST_EN_S 3
#define FLASH_FSM_ST_MACHINE_CMD_EN \
                                0x00000004  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_CMD_EN_M \
                                0x00000004
#define FLASH_FSM_ST_MACHINE_CMD_EN_S 2
#define FLASH_FSM_ST_MACHINE_INV_DATA \
                                0x00000002  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_INV_DATA_M \
                                0x00000002
#define FLASH_FSM_ST_MACHINE_INV_DATA_S 1
#define FLASH_FSM_ST_MACHINE_OVERRIDE \
                                0x00000001  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ST_MACHINE_OVERRIDE_M \
                                0x00000001
#define FLASH_FSM_ST_MACHINE_OVERRIDE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_FLES register.
//
//*****************************************************************************
#define FLASH_FSM_FLES_BLK_TIOTP_M \
                                0x00000F00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_FLES_BLK_TIOTP_S 8
#define FLASH_FSM_FLES_BLK_OTP_M \
                                0x000000FF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_FLES_BLK_OTP_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_WR_ENA register.
//
//*****************************************************************************
#define FLASH_FSM_WR_ENA_WR_ENA_M \
                                0x00000007  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_WR_ENA_WR_ENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_ACC_PP register.
//
//*****************************************************************************
#define FLASH_FSM_ACC_PP_FSM_ACC_PP_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ACC_PP_FSM_ACC_PP_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_ACC_EP register.
//
//*****************************************************************************
#define FLASH_FSM_ACC_EP_ACC_EP_M \
                                0x0000FFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ACC_EP_ACC_EP_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_ADDR register.
//
//*****************************************************************************
#define FLASH_FSM_ADDR_BANK_M   0x70000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FSM_ADDR_BANK_S   28
#define FLASH_FSM_ADDR_CUR_ADDR_M \
                                0x0FFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ADDR_CUR_ADDR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_SECTOR register.
//
//*****************************************************************************
#define FLASH_FSM_SECTOR_SECT_ERASED_M \
                                0xFFFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_SECTOR_SECT_ERASED_S 16
#define FLASH_FSM_SECTOR_FSM_SECTOR_EXTENSION_M \
                                0x0000FF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_SECTOR_FSM_SECTOR_EXTENSION_S 8
#define FLASH_FSM_SECTOR_SECTOR_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_SECTOR_SECTOR_S 4
#define FLASH_FSM_SECTOR_SEC_OUT_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_SECTOR_SEC_OUT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FMC_REV_ID register.
//
//*****************************************************************************
#define FLASH_FMC_REV_ID_MOD_VERSION_M \
                                0xFFFFF000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FMC_REV_ID_MOD_VERSION_S 12
#define FLASH_FMC_REV_ID_CONFIG_CRC_M \
                                0x00000FFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FMC_REV_ID_CONFIG_CRC_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_ERR_ADDR register.
//
//*****************************************************************************
#define FLASH_FSM_ERR_ADDR_FSM_ERR_ADDR_M \
                                0xFFFFFF00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ERR_ADDR_FSM_ERR_ADDR_S 8
#define FLASH_FSM_ERR_ADDR_FSM_ERR_BANK_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_ERR_ADDR_FSM_ERR_BANK_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_PGM_MAXPUL register.
//
//*****************************************************************************
#define FLASH_FSM_PGM_MAXPUL_FSM_PGM_MAXPUL_M \
                                0x00000FFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_PGM_MAXPUL_FSM_PGM_MAXPUL_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_EXECUTE register.
//
//*****************************************************************************
#define FLASH_FSM_EXECUTE_SUSPEND_NOW_M \
                                0x000F0000  // FSM Command Suspend. Writing a 
                                            // '0101' to this register will 
                                            // suspend the Program (02), Erase 
                                            // sector (06) or Read_verify(22h) 
                                            // commands. Writes to this 
                                            // register are ignored unless the 
                                            // FSM is busy with one of these 
                                            // commands. This field resets to 
                                            // `1010' when the FSM enters the 
                                            // standby state where it waits for 
                                            // the next command. It will not 
                                            // retain the written value for 
                                            // long. The Bank erase command, 
                                            // program sector command and every 
                                            // command except those three 
                                            // commands above are not 
                                            // suspendable and will ignore the 
                                            // suspend command. A suspend 
                                            // operation will exit the FSM with 
                                            // the proper setup and hold times 
                                            // for the various modes. When the 
                                            // FMC enters the auto-suspend mode 
                                            // this register is set to '0101' 
                                            // to suspend the FSM. It will be 
                                            // exactly like this field was 
                                            // written with a '0101' by the 
                                            // CPU. 

#define FLASH_FSM_EXECUTE_SUSPEND_NOW_S 16
#define FLASH_FSM_EXECUTE_FSMEXECUTE_M \
                                0x0000001F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_EXECUTE_FSMEXECUTE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_SECTOR1 register.
//
//*****************************************************************************
#define FLASH_FSM_SECTOR1_FSM_SECTOR1_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_SECTOR1_FSM_SECTOR1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_SECTOR2 register.
//
//*****************************************************************************
#define FLASH_FSM_SECTOR2_FSM_SECTOR2_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_SECTOR2_FSM_SECTOR2_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_BSLE0 register.
//
//*****************************************************************************
#define FLASH_FSM_BSLE0_FSM_BSLE0_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_BSLE0_FSM_BSLE0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_BSLE1 register.
//
//*****************************************************************************
#define FLASH_FSM_BSLE1_FSM_BSL1_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_BSLE1_FSM_BSL1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_BSLP0 register.
//
//*****************************************************************************
#define FLASH_FSM_BSLP0_FSM_BSLP0_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_BSLP0_FSM_BSLP0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FSM_BSLP1 register.
//
//*****************************************************************************
#define FLASH_FSM_BSLP1_FSM_BSL1_M \
                                0xFFFFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FSM_BSLP1_FSM_BSL1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FCFG_BANK register.
//
//*****************************************************************************
#define FLASH_FCFG_BANK_EE_BANK_WIDTH_M \
                                0xFFF00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_BANK_EE_BANK_WIDTH_S 20
#define FLASH_FCFG_BANK_EE_NUM_BANK_M \
                                0x000F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_BANK_EE_NUM_BANK_S 16
#define FLASH_FCFG_BANK_MAIN_BANK_WIDTH_M \
                                0x0000FFF0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_BANK_MAIN_BANK_WIDTH_S 4
#define FLASH_FCFG_BANK_MAIN_NUM_BANK_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_BANK_MAIN_NUM_BANK_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FCFG_WRAPPER register.
//
//*****************************************************************************
#define FLASH_FCFG_WRAPPER_FAMILY_TYPE_M \
                                0xFF000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_WRAPPER_FAMILY_TYPE_S 24
#define FLASH_FCFG_WRAPPER_MEM_MAP \
                                0x00100000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_WRAPPER_MEM_MAP_M \
                                0x00100000
#define FLASH_FCFG_WRAPPER_MEM_MAP_S 20
#define FLASH_FCFG_WRAPPER_CPU2_M \
                                0x000F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_WRAPPER_CPU2_S 16
#define FLASH_FCFG_WRAPPER_EE_IN_MAIN_M \
                                0x0000F000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_WRAPPER_EE_IN_MAIN_S 12
#define FLASH_FCFG_WRAPPER_ROM  0x00000800  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FCFG_WRAPPER_ROM_M \
                                0x00000800
#define FLASH_FCFG_WRAPPER_ROM_S 11
#define FLASH_FCFG_WRAPPER_IFLUSH \
                                0x00000400  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_WRAPPER_IFLUSH_M \
                                0x00000400
#define FLASH_FCFG_WRAPPER_IFLUSH_S 10
#define FLASH_FCFG_WRAPPER_SIL3 0x00000200  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FCFG_WRAPPER_SIL3_M \
                                0x00000200
#define FLASH_FCFG_WRAPPER_SIL3_S 9
#define FLASH_FCFG_WRAPPER_ECCA 0x00000100  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 
#define FLASH_FCFG_WRAPPER_ECCA_M \
                                0x00000100
#define FLASH_FCFG_WRAPPER_ECCA_S 8
#define FLASH_FCFG_WRAPPER_AUTO_SUSP_M \
                                0x000000C0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_WRAPPER_AUTO_SUSP_S 6
#define FLASH_FCFG_WRAPPER_UERR_M \
                                0x00000030  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_WRAPPER_UERR_S 4
#define FLASH_FCFG_WRAPPER_CPU_TYPE1_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_WRAPPER_CPU_TYPE1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FCFG_BNK_TYPE register.
//
//*****************************************************************************
#define FLASH_FCFG_BNK_TYPE_B7_TYPE_M \
                                0xF0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_BNK_TYPE_B7_TYPE_S 28
#define FLASH_FCFG_BNK_TYPE_B6_TYPE_M \
                                0x0F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_BNK_TYPE_B6_TYPE_S 24
#define FLASH_FCFG_BNK_TYPE_B5_TYPE_M \
                                0x00F00000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_BNK_TYPE_B5_TYPE_S 20
#define FLASH_FCFG_BNK_TYPE_B4_TYPE_M \
                                0x000F0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_BNK_TYPE_B4_TYPE_S 16
#define FLASH_FCFG_BNK_TYPE_B3_TYPE_M \
                                0x0000F000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_BNK_TYPE_B3_TYPE_S 12
#define FLASH_FCFG_BNK_TYPE_B2_TYPE_M \
                                0x00000F00  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_BNK_TYPE_B2_TYPE_S 8
#define FLASH_FCFG_BNK_TYPE_B1_TYPE_M \
                                0x000000F0  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_BNK_TYPE_B1_TYPE_S 4
#define FLASH_FCFG_BNK_TYPE_B0_TYPE_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_BNK_TYPE_B0_TYPE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FCFG_B0_START register.
//
//*****************************************************************************
#define FLASH_FCFG_B0_START_B0_MAX_SECTOR_M \
                                0xF0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B0_START_B0_MAX_SECTOR_S 28
#define FLASH_FCFG_B0_START_B0_MUX_FACTOR_M \
                                0x0F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B0_START_B0_MUX_FACTOR_S 24
#define FLASH_FCFG_B0_START_B0_START_ADDR_M \
                                0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B0_START_B0_START_ADDR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FCFG_B1_START register.
//
//*****************************************************************************
#define FLASH_FCFG_B1_START_B1_MAX_SECTOR_M \
                                0xF0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B1_START_B1_MAX_SECTOR_S 28
#define FLASH_FCFG_B1_START_B1_MUX_FACTOR_M \
                                0x0F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B1_START_B1_MUX_FACTOR_S 24
#define FLASH_FCFG_B1_START_B1_START_ADDR_M \
                                0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B1_START_B1_START_ADDR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FCFG_B2_START register.
//
//*****************************************************************************
#define FLASH_FCFG_B2_START_B2_MAX_SECTOR_M \
                                0xF0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B2_START_B2_MAX_SECTOR_S 28
#define FLASH_FCFG_B2_START_B2_MUX_FACTOR_M \
                                0x0F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B2_START_B2_MUX_FACTOR_S 24
#define FLASH_FCFG_B2_START_B2_START_ADDR_M \
                                0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B2_START_B2_START_ADDR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FCFG_B3_START register.
//
//*****************************************************************************
#define FLASH_FCFG_B3_START_B3_MAX_SECTOR_M \
                                0xF0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B3_START_B3_MAX_SECTOR_S 28
#define FLASH_FCFG_B3_START_B3_MUX_FACTOR_M \
                                0x0F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B3_START_B3_MUX_FACTOR_S 24
#define FLASH_FCFG_B3_START_B3_START_ADDR_M \
                                0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B3_START_B3_START_ADDR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FCFG_B4_START register.
//
//*****************************************************************************
#define FLASH_FCFG_B4_START_B4_MAX_SECTOR_M \
                                0xF0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B4_START_B4_MAX_SECTOR_S 28
#define FLASH_FCFG_B4_START_B4_MUX_FACTOR_M \
                                0x0F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B4_START_B4_MUX_FACTOR_S 24
#define FLASH_FCFG_B4_START_B4_START_ADDR_M \
                                0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B4_START_B4_START_ADDR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FCFG_B5_START register.
//
//*****************************************************************************
#define FLASH_FCFG_B5_START_B5_MAX_SECTOR_M \
                                0xF0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B5_START_B5_MAX_SECTOR_S 28
#define FLASH_FCFG_B5_START_B5_MUX_FACTOR_M \
                                0x0F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B5_START_B5_MUX_FACTOR_S 24
#define FLASH_FCFG_B5_START_B5_START_ADDR_M \
                                0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B5_START_B5_START_ADDR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FCFG_B6_START register.
//
//*****************************************************************************
#define FLASH_FCFG_B6_START_B6_MAX_SECTOR_M \
                                0xF0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B6_START_B6_MAX_SECTOR_S 28
#define FLASH_FCFG_B6_START_B6_MUX_FACTOR_M \
                                0x0F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B6_START_B6_MUX_FACTOR_S 24
#define FLASH_FCFG_B6_START_B6_START_ADDR_M \
                                0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B6_START_B6_START_ADDR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FCFG_B7_START register.
//
//*****************************************************************************
#define FLASH_FCFG_B7_START_B7_MAX_SECTOR_M \
                                0xF0000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B7_START_B7_MAX_SECTOR_S 28
#define FLASH_FCFG_B7_START_B7_MUX_FACTOR_M \
                                0x0F000000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B7_START_B7_MUX_FACTOR_S 24
#define FLASH_FCFG_B7_START_B7_START_ADDR_M \
                                0x00FFFFFF  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B7_START_B7_START_ADDR_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// FLASH_O_FCFG_B0_SSIZE0 register.
//
//*****************************************************************************
#define FLASH_FCFG_B0_SSIZE0_B0_NUM_SECTORS_M \
                                0x0FFF0000  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B0_SSIZE0_B0_NUM_SECTORS_S 16
#define FLASH_FCFG_B0_SSIZE0_B0_SECT_SIZE_M \
                                0x0000000F  // Internal register. Value is 
                                            // controlled through TI provided 
                                            // API and should not be edited by 
                                            // customer. 

#define FLASH_FCFG_B0_SSIZE0_B0_SECT_SIZE_S 0


#endif // __HW_FLASH_H__

