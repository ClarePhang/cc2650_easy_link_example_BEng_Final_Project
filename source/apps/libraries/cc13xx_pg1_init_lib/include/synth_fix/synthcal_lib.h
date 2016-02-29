//------------------------------------------------------------------------------
// TI Confidential - NDA Restrictions
//
// Copyright (c) 2011 Texas Instruments, Inc.
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
///
/// \file            synthcal_libs.h
/// \brief           Radio Calibration Functions
///
/// \author          Low Power RF Wireless Business Unit
///                  Helge Coward (h.coward@ti.com)
///                  Tomas Motos (t.motos@ti.com)
///                  Eivind Syvertsen (e.syvertsen@ti.com)
///
/// \date            Fri Apr 5 10:26:10 CET 2013
///
//-----------------------------------------------------------------------------

#ifndef _SYNTHCALLIB_H
#define _SYNTHCALLIB_H

#include <stdint.h>
#include <stdbool.h>

#define CC26XX_MODE 1
#define CC13XX_MODE 2

//*****************************************************************************
//
// The following are defines for the bit field offsets in the 
// RF24_FSCA and RF24_MDM registers.
// Note: Cannot seem to find any FSCA registers and defines in the CC26xx libs
//
//*****************************************************************************

#define RF24_FSCA_O_SYNTHREG00                  0x00000000
#define RF24_FSCA_O_SYNTHREGPREDIV              0x00000004
#define RF24_FSCA_O_SYNTHREGPLLMVALUE           0x00000008
#define RF24_FSCA_O_SYNTHREGOTHERMVALUE         0x0000000C
#define RF24_FSCA_O_SYNTHREGFINECALMVALUE       0x00000010
#define RF24_FSCA_O_SYNTHREGFORCEDCO            0x00000014
#define RF24_FSCA_O_SYNTHREGDTSTCTRL            0x0000001C
#define RF24_FSCA_O_SYNTHREGSDCONTROL           0x00000018
#define RF24_FSCA_O_SYNTHREGDIGCFG2             0x00000020
#define RF24_FSCA_O_SYNTHREGTDCTHRESH           0x00000024
#define RF24_FSCA_O_SYNTHREGLOOPCOEFF           0x00000028
#define RF24_FSCA_O_SYNTHREGPLLCONTROL          0x0000002C
#define RF24_FSCA_O_SYNTHREGFSMCONTROL          0x00000030
#define RF24_FSCA_O_SYNTHREGPETHRESH            0x00000034
#define RF24_FSCA_O_SYNTHREGPLLCONTROL2         0x00000038
#define RF24_FSCA_O_SYNTHREGDTXGAIN             0x00000058
#define RF24_FSCA_O_SYNTHREGANADIV              0x0000005C
#define RF24_FSCA_O_SYNTHREGPLLCONTROL3         0x00000060
#define RF24_FSCA_O_SYNTHREGFSMCONTROL2         0x00000064
#define RF24_FSCA_O_SYNTHREGFSMCONTROL3         0x00000068
//Note: the mem. offset in the ref is the same as the RFC_FSCA_DTX reg; looks like it has the same bit field definitions; not sure if they are the same
#define RF24_FSCA_O_MODISFCFG                   0x0000003C
#define RF24_FSCA_O_SYNTHSTATUS2                0x00000078
#define RF24_FSCA_O_SYNTHSTATUS3                0x0000007C
#define RF24_FSCA_O_DIVIDEND                    0x00000120
#define RF24_FSCA_O_DIVISOR                     0x00000124
#define RF24_FSCA_O_DIVCTRL                     0x0000011C
#define RF24_FSCA_O_QUOTIENT                    0x00000128

//RF24 MDM Register offsets

#define RF24_MDM_BASE                           0x40045000
#define RF24_MDM_O_DEMFRAC3                     0x00000134
#define RF24_MDM_O_DEMFRAC2                     0x00000130
#define RF24_MDM_O_DEMMAFI0                     0x000000F0
#define RF24_MDM_O_DEMMAFI1                     0x000000F4
#define RF24_MDM_O_DEMMAFI2                     0x000000F8
#define RF24_MDM_O_DEMMAFI3                     0x000000FC
//*****************************************************************************
//
// More defines for the bit field offsets of all the sub-registers
//
//*****************************************************************************

//TXFOFF bit field? No description, so unsure what the value has to be
#define RF24_FSCA_MODISFCFG_TXFOFF_M                            0x000FFF00
//NB! unknown bit position
//#define RF24_FSCA_SYNTHREG00_IS24MHZXTAL_M                      0x30000000
#define RF24_FSCA_SYNTHREG00_SYNTHTXRXZ_M                       0x80000000 //Tx mode
//No description!
#define RF24_FSCA_SYNTHREG00_SYNTHTUNEPHASE_M                   0x0000001F
#define RF24_FSCA_SYNTHREGFSMCONTROL_PLLFREEZE_M                0x10000000
#define RF24_FSCA_SYNTHREGFSMCONTROL_RETIMERFREEZE_M            0x08000000
#define RF24_FSCA_SYNTHREGFSMCONTROL_FINECODEFREEZE_M           0x04000000
#define RF24_FSCA_SYNTHSTATUS3_TDCCALIBAVG_M                    0x0000FFFF
#define RF24_FSCA_SYNTHREGTDCTHRESH_MEMKTINV_M                  0xFFFF0000

//Number of bits to shift left by
#define RF24_FSCA_MODISFCFG_TXFOFF_S                            8

#define RF24_FSCA_SYNTHREGTDCTHRESH_MEMKTINV_S                  16
#define RF24_FSCA_SYNTHREGTDCTHRESH_EDGESELTDCTH2_S             8
#define RF24_FSCA_SYNTHREGTDCTHRESH_EDGESELTDCTH1_S             0

#define RF24_FSCA_SYNTHREGPLLCONTROL_DELAYRETIMERINP_S          21
#define RF24_FSCA_SYNTHREGPLLCONTROL_RECENTERDISABLE_S          20
#define RF24_FSCA_SYNTHREGPLLCONTROL_RECENTERTHRESHHOLD_S       14
//?
#define RF24_FSCA_SYNTHREGPLLCONTROL_PLLHWFINECALIBEN_S         13
#define RF24_FSCA_SYNTHREGPLLCONTROL_CKVD64LATENCYFORMPXCAN_S   10
#define RF24_FSCA_SYNTHREGPLLCONTROL_CKVD16LATENCYFORMPXCAN_S   7
#define RF24_FSCA_SYNTHREGPLLCONTROL_REFCLKLATCHEDGESEL_S       6
#define RF24_FSCA_SYNTHREGPLLCONTROL_TDCSATENABLE_S             4
#define RF24_FSCA_SYNTHREGPLLCONTROL_TDCCALIBAVERAGE_S          0

#define RF24_FSCA_SYNTHREGFSMCONTROL_RETIMERFREEZE_S            27
#define RF24_FSCA_SYNTHREGFSMCONTROL_PLLFREEZE_S                28
#define RF24_FSCA_SYNTHREGFSMCONTROL_FINECODEFREEZE_S           26
#define RF24_FSCA_SYNTHREGFSMCONTROL_TDCFREEZE_S                25
#define RF24_FSCA_SYNTHREGFSMCONTROL_MIDSARINITVAL_S            13
#define RF24_FSCA_SYNTHREGFSMCONTROL_COARSEPRECALVAL_S          9
#define RF24_FSCA_SYNTHREGFSMCONTROL_MIDPRECALVAL_S             3
#define RF24_FSCA_SYNTHREGFSMCONTROL_COARSECALSKIPEN_S          2
#define RF24_FSCA_SYNTHREGFSMCONTROL_MIDCALSKIPEN_S             1
#define RF24_FSCA_SYNTHREGFSMCONTROL_TDCCALSKIPEN_S             0

#define RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORLOCKTHRESHCNT_S    24
#define RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORLOCKTHRESH_S       16
#define RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORDISCARDENABLE_S    14
#define RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORDISCARDCNT_S       10
#define RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORDISCARDTH_S        0

#define RF24_FSCA_SYNTHREGPLLCONTROL2_PLLOPENLOOPMODE1PTMOD_S   31
#define RF24_FSCA_SYNTHREGPLLCONTROL2_XTALIDFRAC_S              8
#define RF24_FSCA_SYNTHREGPLLCONTROL2_POMIDSEL_S                5
#define RF24_FSCA_SYNTHREGPLLCONTROL2_POFINESEL_S               4
#define RF24_FSCA_SYNTHREGPLLCONTROL2_POTAILRESTRIM_S           0

#define RF24_FSCA_SYNTHREGANADIV_RETIMERISO_S                   23
#define RF24_FSCA_SYNTHREGANADIV_CTRLNMIREF_S                   14
#define RF24_FSCA_SYNTHREGANADIV_CTRLPMIREF_S                   11
#define RF24_FSCA_SYNTHREGANADIV_ENADC_S                        6
#define RF24_FSCA_SYNTHREGANADIV_ENSYNTH_S                      5
#define RF24_FSCA_SYNTHREGANADIV_ENTXPH180_S                    4
#define RF24_FSCA_SYNTHREGANADIV_ENTXPH0_S                      3
#define RF24_FSCA_SYNTHREGANADIV_ENRXQ_S                        2
#define RF24_FSCA_SYNTHREGANADIV_ENRXI_S                        1
#define RF24_FSCA_SYNTHREGANADIV_DIVBUFENABLE_S                 0

#define RF24_FSCA_SYNTHREGFSMCONTROL2_FINESTARTCODE_S           0

#define RF24_FSCA_SYNTHREGPREDIV_PLLPREDIVRATIO_S               26
#define RF24_FSCA_SYNTHREGPREDIV_FINECALIBPREDIVRATIO_S         15
#define RF24_FSCA_SYNTHREGPREDIV_MIDCALIBPREDIVRATIO_S          6
#define RF24_FSCA_SYNTHREGPREDIV_DEFAULTCALIBPREDIVRATIO_S      0

#define RF24_FSCA_SYNTHREGPLLMVALUE_PLLMVALUE_S                 0

#define RF24_FSCA_SYNTHREGOTHERMVALUE_MIDMVALUE_S               16
//not sure why the shift is to the right
#define RF24_FSCA_SYNTHSTATUS3_TDCCALIBAVG_S                    0

#define RF24_FSCA_SYNTHREGLOOPCOEFF_PLLBETA_S                   12
#define RF24_FSCA_SYNTHREGLOOPCOEFF_PLLALPHA_S                  0
#define RF24_FSCA_SYNTHREGLOOPCOEFF_PLLCOEFFDYNCHANGE_S         31

#define RF24_FSCA_SYNTHREGFORCEDCO_TSTDCOFINEREG_S              22
#define RF24_FSCA_SYNTHREGFORCEDCO_TSTDCOSDREG_S                14
#define RF24_FSCA_SYNTHREGFORCEDCO_TSTDCOMIDREG_S               8
#define RF24_FSCA_SYNTHREGFORCEDCO_TSTDCOCOARSEREG_S            4
#define RF24_FSCA_SYNTHREGFORCEDCO_TSTFORCECMFCODES_S           1
#define RF24_FSCA_SYNTHREGFORCEDCO_TSTFORCESDCODE_S             0

#define RF24_FSCA_SYNTHREGSDCONTROL_SDMDLYDOUBLEEN_S            31
#define RF24_FSCA_SYNTHREGSDCONTROL_SDMDITHERMODE_S             27

#define RF24_FSCA_SYNTHREGDIGCFG2_FINEBOTCODEDURINGCALIB_S      24
#define RF24_FSCA_SYNTHREGDIGCFG2_FINETOPCODEDURINGCALIB_S      8


void    adi1_fullWrite ( uint8_t adiAdd, uint8_t data );
uint8_t adi1_Read ( uint8_t adiAdd );
int     calibrate_synth (int mode, int rf_channel, int rf_channel_dec, int divider_setting, int isTx, int xtal);
void    turn_on_synth (int mode, int frequency);
void    turn_off_synth (void);

#endif
