//------------------------------------------------------------------------------
// TI Confidential - NDA Restrictions
//
// Copyright (c) 2014 Texas Instruments, Inc.
//
//    This is an unpublished work created in the year stated above.
//    Texas Instruments owns all rights in and to this work and
//    intends to maintain and protect it as an unpublished copyright.
//    In the event of either inadvertent or deliberate publication,
//    the above stated date shall be treated as the year of first
//    publication. In the event of such publication, Texas Instruments
//    intends to enforce its rights in the work under the copyright
//    laws as a published work.
//
//------------------------------------------------------------------------------
//
// This file is auto-generated and should not be edited
// Generated 2014-01-28 14:25:12 using the following command line defines:
// ENABLE_RFE_SOFT1_IRQ
// UPDATE_MODISFCFG
// EXTERNAL_WRITE_ADDR_FUN
//

// This file implements patches for the radio CPU on CC26xx
// It should only be included from ONE source file to avoid duplicated constant arrays

// The following patches are included:

//
// /vobs/cc26xxFwDev/radio_domain/patch/cpe/patchsrc/ieee_state_patch.c@@/main/3            Rule: /main/LATEST
//
//   This patch fixes bugs in the IEEE 802.15.4 state machine:
//   - In suspend, there may be a race condition between Tx ACK starting and Rx being turned off
//   - After TX of ACK frame, the synth is not set back in Rx mode
//   - After starting Tx for a potential ACK, the synth is not set back in Rx mode
//

//
// /vobs/cc26xxFwDev/radio_domain/patch/cpe/patchsrc/fgabort.c@@/main/1     Rule: /main/LATEST
//
//   This patch fixes the bug where foreground commands can't be aborted when they are pending start.
//

//
// /vobs/cc26xxFwDev/radio_domain/patch/cpe/patchsrc/finish_rx_null.c@@/main/1              Rule: /main/LATEST
//
//   Bug fix for using NULL as pRxQ in BLE Generic Rx command
//

//
// /vobs/cc26xxFwDev/radio_domain/patch/cpe/patchsrc/fscapatch.c@@/main/11  Rule: /main/LATEST
//
//   The patch modifies the FSCA interrupt handler to fix the following issues:
//   - Using updated synth programming routine found on silicon. This includes different scaling
//     of alpha and beta. New constants are optionally hard-coded in the patch, but some overrides are
//     also needed.
//   - Bugfix of PLL loop parameter update
//   - Addresses an RTL bug where clearing FSCAIRQFLAG may fail if sone on the exact same cylce as a
//     system access to RDBELL. This is done by reading back and clearing again until scccessful.
//   - Calls ROM code when writing to SYNTHREG00 to avoids an RTL bug where writing to DDI registers
//     may cause an incorrect write before the correct one if called while running CM0 code from
//     system memory. For SYNTHREG00, this may cause the synth state machine to reset.
//   - Adds 4 to the TDC estimate before it is inverted
//   - Calculates threshold from inverse TDC value
//   - If DYN_SYNTHPAR is defined in the preprocessor, all constants use the overridable values from the
//     FW parameter structure, and the use of high-precicion alpha is determined dynamically; otherwise
//     K1, K2AL, K2BL, K3AL, and K3BL are hard-coded 
//   - If UPDATE_MODISFCFG is defined in the preprocessor, calculates a more accurate Tx IF for
//     writing in MODISFCFG, depending on channel. The IF is taken from the firmware parameter
//     mdmTxIntFreq. If MODISF was already configured, MODISFCFG is re-written.
//   - If ENABLE_RFE_SOFT1_IRQ is defined in the preprocessor, enables the RFE_SOFT1 interrupt at
//     high priority. This is used for the ena_synth_tx patch.
//

//
// /vobs/cc26xxFwDev/radio_domain/patch/cpe/patchsrc/ena_synth_tx.c@@/main/3                Rule: /main/LATEST
//
//   The patch creates a high-priority IRQ that enables synth Tx output when PA has been enabled
//

//
// /vobs/cc26xxFwDev/radio_domain/patch/cpe/patchsrc/synthstartstop.c@@/main/4              Rule: /main/LATEST
//
//   This patch changes the synth start and stop routines so that only dynamic ADI bits are written.
//   It also makes sure that clock is enabled before reset is released. It sets:
//   CTL_LDOVCO_3.LDOVCO_COMP_CAP = 4, CTL_LDOVCO_3.LDOVCO_COMP_RES = 3
//

#ifndef _APPLY_PATCH_H
#define _APPLY_PATCH_H

#include <stdint.h>
#include <string.h>

#ifndef CPE_PATCH_TYPE
#define CPE_PATCH_TYPE static const uint32_t
#endif

#ifndef SYS_PATCH_TYPE
#define SYS_PATCH_TYPE static uint32_t
#endif

#ifndef PATCH_FUN_SPEC
#define PATCH_FUN_SPEC static inline
#endif

typedef struct {
   uint8_t patchInd_bleDecodeState;
   uint8_t patchInd_errorHandler;
   uint8_t patchInd_ieeeDecodeState;
   uint8_t patchInd_srcMatchShort;
   uint8_t patchInd_srcMatchExt;
   uint8_t patchInd_propDecodeState;
   uint8_t patchInd_bleProgramFreq;
   uint8_t patchInd_blePrepareTx;
   uint8_t patchInd_blePrepareRx;
   uint8_t patchInd_bleRestartRx;
   uint8_t patchInd_checkObservedTriggers;
   uint8_t patchInd_checkBgObservedTriggers;
   uint8_t patchInd_setupTrigger;
   uint8_t patchInd_cancelTrigger;
   uint8_t patchInd_submitCmd;
   uint8_t patchInd_endRadioOp;
   uint8_t patchInd_setDelayedRadioOpStart;
   uint8_t patchInd_setImmediateRadioOpStart;
   uint8_t patchInd_ratChAvail;
   uint8_t patchInd_RFCTRC_IRQHandler;
   uint8_t patchInd_allocateTx;
   uint8_t patchInd_freeDataEntry;
   uint8_t patchInd_finishDataEntry;
   uint8_t patchInd_checkValidQueue;
   uint8_t patchInd_allocateRx;
   uint8_t patchInd_writeToPartialRx;
   uint8_t patchInd_finishRx;
   uint8_t patchInd_freeRxEntry;
   uint8_t patchInd_getDataBuffer;
   uint8_t patchInd_rxDoneHandler;
   uint8_t patchInd_ieeeSendPhyHeader;
   uint8_t patchInd_ieeeReceivePhyHeader;
   uint8_t patchInd_ieeeReceiveBytes;
   uint8_t patchInd_findCcaState;
   uint8_t patchInd_setupRadioFreq;
   uint8_t patchInd_radioParOverride;
   uint8_t patchInd_enableForSetup;
   uint8_t patchInd_enableForTx;
   uint8_t patchInd_startTx;
   uint8_t patchInd_enableForRx;
   uint8_t patchInd_startRx;
   uint8_t patchInd_restartRx;
   uint8_t patchInd_stopRadio;
   uint8_t patchInd_stopFs;
   uint8_t patchInd_setupPreamSw;
   uint8_t patchInd_phaSetup;
   uint8_t patchInd_phaTxWhSetup;
   uint8_t patchInd_phaSeedDefault;
   uint8_t patchInd_phaCheckCrcErr;
   uint8_t patchInd_phaPseudoRand16;
   uint8_t patchInd_getRssi;
   uint8_t patchInd_enaMdmDoneIrqHiPri;
   uint8_t patchInd_enaMdmDoneIrqStdPri;
   uint8_t patchInd_disMdmDoneIrq;
   uint8_t patchInd_writeAdi0Reg;
   uint8_t patchInd_readAdi0Reg;
   uint8_t patchInd_MDM_Soft_IRQHandler;
   uint8_t patchInd_RFE_Soft1_IRQHandler;
   uint8_t patchInd_startRat;
   uint8_t patchInd_stopRat;
   uint8_t patchInd_setupTiming;
   uint8_t patchInd_setupExtTxStart;
   uint8_t patchInd_abortTiming;
   uint8_t patchInd_timingDone;
   uint8_t patchInd_setupCaptureSyncFound;
   uint8_t patchInd_setupCaptureCorrSync;
   uint8_t patchInd_modifyCaptureCorrSync;
   uint8_t patchInd_readCapturedSyncFound;
   uint8_t patchInd_readCapturedCorrTops;
   uint8_t patchInd_abortCaptureSyncFound;
   uint8_t patchInd_setupSyncStopRadioTimer;
   uint8_t patchInd_doSyncStopRadioTimer;
   uint8_t patchInd_setupSyncStartRadioTimer;
   uint8_t patchInd_doSyncStartRadioTimer;
   uint8_t patchInd_abortRatCh;
   uint8_t patchInd_timeIsLater;
   uint8_t patchInd_RAT_Ch5_IRQHandler;
   uint8_t patchInd_synthPowerUpInitialize;
   uint8_t patchInd_turnOffSynth;
   uint8_t patchInd_powerDownSynth;
   uint8_t patchInd_writeSynthFreqInfo;
   uint8_t patchInd_setSynthMode;
   uint8_t patchInd_setSynthOutput;
   uint8_t patchInd_setSynthPrecal;
   uint8_t patchInd_softwareSynthStartTuneSequence;
   uint8_t patchInd_writeAdi1Reg;
   uint8_t patchInd_readAdi1Reg;
} patchTab_t;

#define PATCH_VECTOR_0 0x20000001
#define PATCH_VECTOR_1 0x20000071
#define PATCH_VECTOR_2 0x200000a5
#define PATCH_VECTOR_3 0x2000010d
#define PATCH_VECTOR_4 0x20000029
#define PATCH_VECTOR_5 0x20000059

CPE_PATCH_TYPE patchImage[] = {
   0x21000455,
   0x2100045d,
   0x21000469,
   0xe0034900,
   0x00002a35,
   0x31024671,
   0xd0002800,
   0x47704708,
   0x20014901,
   0x00004708,
   0x00005139,
};
#define _NWORD_PATCHIMAGE 11

SYS_PATCH_TYPE patchSys[] = {
   0x281472c8,
   0x280dd008,
   0x2812d009,
   0x4a0fd007,
   0x58100080,
   0x47706048,
   0x69504a02,
   0x4a01e7fa,
   0xe7f76910,
   0x21000430,
   0x4808b510,
   0x7ae14c08,
   0x58400089,
   0x7ae14780,
   0xd0012903,
   0xd1042902,
   0x46044904,
   0x47882000,
   0xbd104620,
   0x0000b960,
   0x210000d0,
   0x00005013,
   0x4c04b510,
   0x47800c20,
   0xd1022804,
   0x47a0b2a4,
   0xbd102004,
   0xb3194585,
   0xd1002800,
   0xb5f84770,
   0x27804e07,
   0x4e076037,
   0x466a7831,
   0x70113630,
   0x70517831,
   0xb2a14c04,
   0x0c214788,
   0x47082401,
   0xe000e180,
   0x2100009c,
   0x08770659,
   0xf846f000,
   0xd1202b00,
   0x21002001,
   0x47a80300,
   0x2100480f,
   0x68026001,
   0xd1fb2a00,
   0x2202480d,
   0x480d6002,
   0x210147a8,
   0x47a82055,
   0x480a2101,
   0x47a80c00,
   0x201e4a09,
   0x43c04790,
   0xd1f90780,
   0x48072101,
   0x0c023602,
   0x48064710,
   0xbf004700,
   0x4004112c,
   0x40044100,
   0x0655041c,
   0x00004d87,
   0x4ea51022,
   0x00004f37,
   0xf812f000,
   0xd10d2b00,
   0x21002001,
   0x47a80300,
   0x20502101,
   0x210147a8,
   0xb2904a0e,
   0x1cb40c12,
   0x4710024d,
   0x4700480c,
   0x89e04c0c,
   0x07c309c0,
   0x4770d000,
   0x25014e0a,
   0x026d8871,
   0x80714329,
   0x43012020,
   0x48078832,
   0x0c050407,
   0x46384311,
   0x47104a05,
   0x4d650650,
   0x00004d7b,
   0x21000270,
   0x2100003a,
   0x4cf14004,
   0x00003567,
   0x4853b5f8,
   0x62c12100,
   0x2a006ac2,
   0x4f51d1fb,
   0x48527839,
   0x4d504e51,
   0x24014b50,
   0x36c03840,
   0xd0062900,
   0x29017839,
   0x7839d02c,
   0xd07e2902,
   0x7d29e08b,
   0x07c90849,
   0x6bd9d111,
   0xb2892201,
   0x04921d09,
   0x62716232,
   0x69f161f4,
   0xd1fc07c9,
   0x4b436ab1,
   0x889b040a,
   0x6242431a,
   0x6a698329,
   0x43112207,
   0x62694606,
   0xffbcf7ff,
   0x8b2a6b70,
   0x20010a81,
   0x02890280,
   0x0a401810,
   0x63704308,
   0xbdf8703c,
   0x4a376b99,
   0x62716232,
   0x61f12101,
   0x07c969f1,
   0x6ab4d1fc,
   0x46214a33,
   0x4a334351,
   0x43620d49,
   0x03120d52,
   0x430a482c,
   0x62823840,
   0x0c516aea,
   0x0c1203d2,
   0x43614362,
   0x18510c12,
   0x61990949,
   0x220f6a69,
   0x62694311,
   0xff8af7ff,
   0x21344823,
   0x5e413860,
   0x62310249,
   0x62718b69,
   0x61f12101,
   0x4a234922,
   0x43544361,
   0x0d620d49,
   0x430a0312,
   0x62ea2102,
   0x69f17039,
   0xd1fc07c9,
   0x4b1d6ab2,
   0x02126881,
   0x43114019,
   0x48126081,
   0x7dc03820,
   0xd5020740,
   0x38404810,
   0x481763c1,
   0x22ff6881,
   0x43910412,
   0x20016081,
   0xe003e000,
   0x02804913,
   0xbdf86008,
   0x62816ae9,
   0x07c02001,
   0x48064301,
   0xf7ff3818,
   0x480eff4d,
   0xbdf84780,
   0x40041100,
   0x21000057,
   0x21000040,
   0x40044040,
   0x21000270,
   0x028a1dfc,
   0x0000d030,
   0x000b813e,
   0x00001722,
   0x0003d5bf,
   0xfff000ff,
   0xe000e400,
   0xe000e100,
   0x000032fb,
};
#define _NWORD_PATCHSYS 192

#define IRQ_PATCH_0 0x20000179


#define _SYS_PATCH_FIXED_ADDR patchSys

PATCH_FUN_SPEC void enterCpePatch(void)
{
   uint32_t *pPatchVec = (uint32_t *) 0x21000430;

   pPatchVec[0] = ((intptr_t) patchSys) + PATCH_VECTOR_0 - 0x20000000;
   pPatchVec[1] = ((intptr_t) patchSys) + PATCH_VECTOR_1 - 0x20000000;
   pPatchVec[2] = ((intptr_t) patchSys) + PATCH_VECTOR_2 - 0x20000000;
   pPatchVec[3] = ((intptr_t) patchSys) + PATCH_VECTOR_3 - 0x20000000;
   pPatchVec[4] = ((intptr_t) patchSys) + PATCH_VECTOR_4 - 0x20000000;
   pPatchVec[5] = ((intptr_t) patchSys) + PATCH_VECTOR_5 - 0x20000000;
#if (_NWORD_PATCHIMAGE > 0)
   memcpy(pPatchVec + 6, patchImage, sizeof(patchImage));
#endif
}

PATCH_FUN_SPEC void enterSysPatch(void)
{
}

PATCH_FUN_SPEC void configurePatch(void)
{
   patchTab_t *pPatchTab = (patchTab_t *) 0x21000388;
   uint32_t *pIrqPatch = (uint32_t *) 0x210003E0;


   pPatchTab->patchInd_ieeeDecodeState = 0;
   pPatchTab->patchInd_submitCmd = 1;
   pPatchTab->patchInd_synthPowerUpInitialize = 2;
   pPatchTab->patchInd_powerDownSynth = 3;
   pPatchTab->patchInd_freeDataEntry = 6;
   pPatchTab->patchInd_finishRx = 7;
   pPatchTab->patchInd_RFE_Soft1_IRQHandler = 8;

   pIrqPatch[1] = ((intptr_t) patchSys) + IRQ_PATCH_0 - 0x20000000;
}

PATCH_FUN_SPEC void applyPatch(void)
{
   enterSysPatch();
   enterCpePatch();
   configurePatch();
}

PATCH_FUN_SPEC void refreshPatch(void)
{
   enterCpePatch();
   configurePatch();
}


#endif
