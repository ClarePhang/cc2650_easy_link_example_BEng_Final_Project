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
/// \file            synthcal_libs.c
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
// TI Confidential. NDA Restrictions

#include "synthcal_lib.h"

#include <stdint.h>
#include <stdbool.h>

#include "hw_types.h"
#include "hw_sysctl.h"
//#include "hw_memmap.h"

//#include "hw_rf24_pwr.h"
//#include "hw_rf24_dbell.h"
#include "hw_rfc_pwr.h"
#include "hw_rfc_dbell.h"
//#include "hw_rf24_mdm.h"
//#include "hw_rf24_rfe.h"
#include "hw_rfc_rat.h"
//#include "hw_rf24_s2r.h"
//#include "hw_rf24_fsca.h"
//#include "hw_rf24_pha.h"
//#include "cc26xxware/inc/hw_memmap_cc26xxware.h"
#include <inc/hw_memmap.h>

//#include "inc/hw_adi_1_synth.h"
//#include "hw_adi_1_synth.h"

//LH: This header's defines (memory regs) are correct, but some are missing. 
//Change, if needed, to PG2 header and redefine all calls to the old regs with the new ones.
#include "from_cc13xx_ex_app/hw_adi_1_synth_cc13xx.h"

//#include <inc/hw_adi_1_synth.h>
#include "inc/hw_adi_0_rf.h"
#include "synthcal_lib.h"

//#define DBG_ENABLE
#include "dbgid_sys_mst.h"

//#define POLL_LDO
#define USE_HW_DIVIDER

//******************************************************************************
// Include DigVal code for Radio
//******************************************************************************
#include "adiddi_lib.h"

///////////////////////////////////////////////////////////////////////////////////////////////
//
//
#define STATE_WAIT_TDC 0
#define STATE_TDC_DONE 1
#define STATE_DCO_DONE 2
#define STATE_PLL_LOCK 3

#define FACT32(x) ((uint32_t)((x) + 0.5))
#define FACT64(x) ((uint64_t)((x) + 0.5))


////////////////////////////////////////////////////////////////////////////////////////////////
// Some specific CC13XX DEFINES (NOT COMING FROM BITWISE, MANUALLY CREATED)
//

#define RF24_FSCA_ANADIV13XX_COARSECAP_S        30
#define RF24_FSCA_ANADIV13XX_CTRL_PM_IREFD2_S   20
#define RF24_FSCA_ANADIV13XX_CTRL_PM_IREFD5_S   17
#define RF24_FSCA_ANADIV13XX_CTRL_NM_IREFD2_S   14
#define RF24_FSCA_ANADIV13XX_CTRL_NM_IREFD5_S   11
#define RF24_FSCA_ANADIV13XX_DIVIDER_LUT_S       7
#define RF24_FSCA_ANADIV13XX_ENSYNTH_S           6
#define RF24_FSCA_ANADIV13XX_ENADC_S             5
#define RF24_FSCA_ANADIV13XX_ENTX_PH180_S        4
#define RF24_FSCA_ANADIV13XX_ENTX_PH0_S          3
#define RF24_FSCA_ANADIV13XX_ENRX_Q_S            2
#define RF24_FSCA_ANADIV13XX_ENRX_I_S            1
#define RF24_FSCA_ANADIV13XX_DIVBUF_ENABLE_S     0

#define SYNT_490_MHZ_BAND_LOW 470
#define SYNT_490_MHZ_BAND_HIGH 510
#define SYNT_IN_490_MHZ_BAND(frequency) ((frequency) >= SYNT_490_MHZ_BAND_LOW &&                      \
                                         (frequency) <= SYNT_490_MHZ_BAND_HIGH)

////////////////////////////////////////////////////////////////////////////////////////////////
// Synth Configuration Constants
//
#define PI                      3.141592
#define FXTAL                 24000000.0                  // 24 MHz XTAL
#define FXTAL_IN_MHZ                24.0                  // 24 MHz XTAL
#define PLL_FREF_2_18          2181818.0                  // 2.18 MHz FREF Mode
#define PLL_FREF_2_66          2666666.0                  // 2.66 MHz FREF Mode
#define PLL_FREF_6_00          6000000.0                  // 6.00 MHz FREF Mode
#define PLL_FREF_8_00          8000000.0                  // 8.00 MHz FREF Mode


// Additional definitions for 48 MHz external XTALs
#define FXTAL48               48000000.0                 // 48 MHz XTAL
#define FXTAL48_IN_MHZ              48.0                  // 24 MHz XTAL

////////////////////////////////////////////////////////////////////////////////////////////////
// Start Section on Precomputed values
//
// /////////////  XTAL and M VALUES ////////////////////////////////////////////////////////////
//
#define FXTAL_PLL_FREF_2_18         11.0                    // FXTAL / PLL_FREF ratio
#define FXTAL_PLL_FREF_2_66          9.0
#define FXTAL_PLL_FREF_6_00          4.0
#define FXTAL_PLL_FREF_8_00          3.0
#define FXTAL_F_FINE_CALIB    FXTAL/F_FINE_CALIB
#define FXTAL_F_MID_SAR       FXTAL/F_MID_SAR
#define FXTAL_F_FREF_FAST     FXTAL/F_FREF_FAST

// Equivalent definitions for 48 MHz XTALs
#define FXTAL48_PLL_FREF_2_18         22.0
#define FXTAL48_PLL_FREF_2_66         18.0
#define FXTAL48_PLL_FREF_6_00          8.0
#define FXTAL48_PLL_FREF_8_00          6.0
#define FXTAL48_F_FINE_CALIB    FXTAL48/F_FINE_CALIB
#define FXTAL48_F_MID_SAR       FXTAL48/F_MID_SAR
#define FXTAL48_F_FREF_FAST     FXTAL48/F_FREF_FAST


// CC13xx, prelim settings for 868 MHz freq band
#pragma message("** Compiling with synthcal_lib settings for CC13xx / 868 and 490 MHz band")
   
// Latest settings from Baltimore, updated 2013-10-18.
#define F3DB                    125000.0                  // 125 kHz, also after lock
#define F3DB_BEFORE_LOCK        125000.0                  // 125 kHz
#define DAMPING_FACTOR               1.0                  //
#define F_FINE_CALIB             25000.0                  // 25 KHz fine Calib
#define F_MID_SAR               100000.0                  // 100 KHz Mid SAR
#define F_FREF_FAST            1000000.0                  // 1 MHz FREF FAST
#define FINE_BOT_CODE               64.0
#define FINE_TOP_CODE              160.0
#define FINE_BANK_START_CODE       128.0
   
// Select which Fref setting to use
#define PLL_FREF           PLL_FREF_8_00                  // Use Fref=8.00MHz
#define FXTAL_PLL_FREF     FXTAL_PLL_FREF_8_00            // Gives 3
#define FXTAL48_PLL_FREF   FXTAL48_PLL_FREF_8_00          // Gives 6

//
// Equation 1. Computing M_VALUE = ( Fch [Hz] * 2^11 ) / PLL_FREF [Hz]
//
// Since PLL_FREF = FXTAL / N, where N is a integer value
//
// M = ( Fch [Hz] * 2^11 * N ) / FXTAL [Hz] =  Fch [MHz] * ( 2^11 * N / FXTAL [MHz] )
//
// Note that if Fch and FXTAL are in MHz, the term (2^11 * N / FXTAL) becomes
// a manageble constant, so no division is really needed!
#define MK   (FXTAL_PLL_FREF*2048.0) / FXTAL_IN_MHZ
//
// Equation 2. Computing M2_VALUE = Fch [Hz] / F_MID_SAR [Hz] = Fch [MHz] * ( 1e6 /  F_MID_SAR [Hz])
//
#define M2K 1000000.0 / F_MID_SAR
//
// Equation 3. Computing M3_VALUE = Fch [Hz] / F_FREF_FAST [Hz] = Fch [MHz] * ( 1e6 /  F_FREF_FAST [Hz])
//
#define M3K 1000000.0 / F_FREF_FAST

//
// Equation X. Computing M4_VALUE = Fch [Hz] / F_FINE_CALIB [Hz] = Fch [MHz] * ( 1e6 /  F_FINE_CALIB [Hz])
//
#define M4K 1000000.0 / F_FINE_CALIB

//
// /////////////  KDCO, ALPHA, BETA VALUES ////////////////////////////////////////////////////
//
// Equation 1. Kt and 1/Kt
//
//  Kdco_est = DCO_SPAN * F_FINE_CALIB / (2^8*2^5*(FINE_TOP_CODE-FINE_BOT_CODE))
//
// but since in all the equations we are interested in its inverse, we would rather compute
//
//  2^21/Kdco_est = (2^34*(FINE_TOP_CODE-FINE_BOT_CODE)) / (DCO_SPAN * F_FINE_CALIB)
//
// From now on, we are calling this 2^21/Kt value IKT in the rest of the equations. DCO_SPAN
// is a feedback value, but the rest are constants, so:
//
// IKT = 2^21/Kdco_est = K1 / DCO_SPAN
//
#define K1         ((FINE_TOP_CODE-FINE_BOT_CODE)*17179869184.0)/F_FINE_CALIB

//
// Equation 2 and 2b.  PLL's Alpha
//
//  alpha = (f3db^2 pi^2)/(df^2 PLLFREF^2 KDCO) = ((f3db^2 pi^2 ) / (df^2 PLLFREF ))*( IKT / 2^21 )
//
// where f3db is has different values before and after lock. In other words:
//
//  alpha = ( K2 * IKT ) >> 21
//
#define K2BL        (F3DB_BEFORE_LOCK*F3DB_BEFORE_LOCK*PI*PI) / (PLL_FREF*DAMPING_FACTOR*DAMPING_FACTOR)
#define K2AL        (F3DB*F3DB*PI*PI) / (PLL_FREF*DAMPING_FACTOR*DAMPING_FACTOR)

//
// Equation 3 and 3b.  PLL's Beta
//
//  Beta = (f3db 2 pi)/(KDCO) = (f3db 2 pi )*( IKT / 2^21 )
//
// again f3db is has different values before and after lock. In other words:
//
//  Beta = ( K3 * IKT ) >> 21
//
#define K3BL        F3DB_BEFORE_LOCK*2.0*PI
#define K3AL        F3DB*2.0*PI
//
#define K5          15625               // 1e6/64 factor for DTX gain = fch*(1e6/64)/(kdco_est/2)
// End Section on Precomputed values
////////////////////////////////////////////////////////////////////////////////////////////////




////////////////////////////////////////////////////////////////////////////////////////////////
// Synth Configuration (i.e. user and/or channel defined)
//

typedef struct SynthConf_s {
   uint16_t  Mode;
   uint16_t  Fch;                        // Channel [2360-2500] integer number (MHz resolution)
   uint16_t  Fch_dec;
   uint16_t  TDC_SkipCalib;
   uint16_t  TDC_Precal;
   uint32_t  SynthReg00Shadow;           // SYNTHREG00 Shadow Register
   uint32_t  SynthRegTDCShadow;          // TDC Shadow Register
   uint32_t  SynthRegFSMControl;         // FSM Control Shadow Register
   uint16_t  pllhwfinecaliben;
   uint16_t  CoarsePrecal;
   uint16_t  MidPrecal;
   uint16_t  SkipCoarse;
   uint16_t  SkipMid;
   uint16_t  SkipTDC;
   uint16_t  OpenLoop1PT;
   uint32_t  XtalPeriod;
   uint32_t  fxtal;
   uint16_t  isTx;
   uint16_t  ControlDivBuffer;
   // More to come here [...]
} SynthConf_t;

volatile uint32_t calib_state;

/* Prototypes */
static void wait_for_ldo_ready( int LDO_ID );
static void WaitForSynthIRQ(void);
static void InitializeAllRegisters( SynthConf_t *cfg, int frequency );
static void WriteXtalRegInfo( SynthConf_t *cfg );
static void SoftwareSynthResetSequence( SynthConf_t *cfg );
static int SoftwareSynthTuneSequence( uint16_t df, uint16_t f3db, SynthConf_t *cfg );
static void synth_enable_buffers_tx( SynthConf_t *cfg, int frequency );
static void synth_enable_buffers_rx( SynthConf_t *cfg, int frequency );
static void synth_disable_buffers( void );
static void control_dco_trim_by_fw (uint8_t FW_FINE_CODE, uint8_t FW_SD_CODE, uint8_t FW_MID_CODE , uint8_t FW_COARSE_CODE, uint8_t FW_C_M_F_FORCE_EN, uint8_t FW_SD_FORCE_EN );

/////////////////////////////////////////////////////////////////////////////////////////////////////
// Turn on-off the synth, release resets
//
void wait_for_ldo_ready( int LDO_ID ) {
  int iter = 0;
  int maxiter = 16;
  uint8_t ready = 0;

  while(ready != LDO_ID) {
    //ready = adi1_Read(ADI_1_SYNTH_O_STAT*2) & LDO_ID;    //address taken from cc26xxWARE memory map doc
    ready = adi1_Read(ADI_1_SYNTH_O_STS*2) & LDO_ID;
    iter++;
    if (iter == maxiter) break;
  }
  //if (iter == maxiter) DiagPrintf( g_iHandle, "+++ WARNING!!! LDO not READY\n");
}

void turn_on_synth (int mode, int frequency) {

  // Power on the two LDOs (SLDO, VCOLDO) then release its resets
  if (mode == CC13XX_MODE) {
    /*if(SYNT_IN_490_MHZ_BAND(frequency))
    {
      adi1_FullWrite(ADI_1_SYNTH_O_CTL_LDOVCO_2*2, 0x1F);            // Resistor TRIM 0x1F
    }
    else
    {
      adi1_FullWrite(ADI_1_SYNTH_O_CTL_LDOVCO_2*2, 0x19);            // Resistor TRIM 0x19
    }
    
    adi1_FullWrite(ADI_1_SYNTH_O_SLDO_2*2, 0x1F);   */               // Resistor TRIM 0x1F
  } else {
    adi1_FullWrite(ADI_1_SYNTH_O_CTL_LDOVCO_2*2, 0x00);            // Resistor TRIM 0x00
    //adi1_FullWrite(ADI_1_SYNTH_O_VCOLDOCTL1*2, 0x00);            // Resistor TRIM 0x00
    adi1_FullWrite(ADI_1_SYNTH_O_SLDO_2*2, 0x00);                  // Resistor TRIM 0x00
  }
  adi1_FullWrite(ADI_1_SYNTH_O_CTL_LDOVCO_3*2, 0x0E);            // COMP_CAP = 6, COMP_RES = 1

  //Is SLDO_3 relevant to cc26xx?; cannot find in lib
  //adi1_FullWrite(ADI_1_SYNTH_O_SLDO_3*2, 0x0E);                  // COMP_CAP = 6, COMP_RES = 1
  adi1_FullWrite(ADI_1_SYNTH_O_CTL_LDOVCO_1*2, 0x05);            // LDOVCO enable, SCH_TRI = 1
  adi1_FullWrite(ADI_1_SYNTH_O_SLDO_1*2, 0x05);                  // SVCO enable, SCH_TRI = 1

  // Small delay
  for (int k = 0; k < 32; k++) __asm("nop");

  //#ifdef POLL_LDO
  wait_for_ldo_ready(1);
  //#endif

  //#ifdef POLL_LDO
  wait_for_ldo_ready(2);
  //#endif

  // Make sure any old FSCA irq flag is cleared
  //HWREG(RF24_DBELL_BASE + RF24_DBELL_O_RFHWIFG) = ~RF24_DBELL_RFHWIFG_FSCA_M;
    HWREG(RFC_DBELL_BASE + RFC_DBELL_O_RFHWIFG) = ~RFC_DBELL_RFHWIFG_FSCA_M;

  
  // Let some us for the clock to start ticking through, then release resets
  for (int k = 0; k < 32; k++) __asm("nop");

  //cc26xx libs don't seem to have a SLDO_4 Synth register
  // Release Reset for Synth

  //adi1_FullWrite(ADI_1_SYNTH_O_SLDO_4*2, 0x80);                  // Release Reset

  // Release reset to synth DDI Slave and the enable its clock
  //adi1_FullWrite(ADI_1_SYNTH_O_ADI1_SYNTHCONTROL_INIT*2, 0x01);
  adi1_FullWrite(ADI_1_SYNTH_O_ADI1_SYNTHCONTROL_INIT*2, 0x02);
  adi1_FullWrite(ADI_1_SYNTH_O_ADI1_SYNTHCONTROL_INIT*2, 0x03);
}

void turn_off_synth (void) {

  // Go into Reset
  adi1_FullWrite(ADI_1_SYNTH_O_ADI1_SYNTHCONTROL_INIT*2, 0x00);
  
  //Note: As above, cc26xx libs don't have a SLDO_4 register ?
  //adi1_FullWrite(ADI_1_SYNTH_O_SLDO_4*2, 0x00);

  // Power off the two LDOs (SLDO, VCOLDO) then release its resets
  adi1_FullWrite(ADI_1_SYNTH_O_CTL_LDOVCO_1*2, 0x00);
  adi1_FullWrite(ADI_1_SYNTH_O_SLDO_1*2, 0x00);
}

////////////////////////////////////////////////////////////////////////////////////////////////
// Wait For Synth, using polling instead of the normal IRQ
//

void WaitForSynthIRQ ( ) {
   int a = 0;
   int b = 0;
   
   //LH: Did I put these here?
   for (int i=0;i<128;i++) {
      a |= HWREG(RFC_DBELL_BASE + RFC_DBELL_O_RFHWIFG);
      b |= HWREG(RFC_DBELL_BASE + RFC_DBELL_O_RFCPEIFG);
   }
   
   while ((HWREG(RFC_DBELL_BASE + RFC_DBELL_O_RFHWIFG) & 0x0002) == 0);
   HWREG(RFC_DBELL_BASE + RFC_DBELL_O_RFHWIFG) = ~0x0002; // clear flag
   //spend some time
   //for (int i=0;i<128;i++) {
   //   a |= HWREG(RF24_DBELL_BASE + RF24_DBELL_O_RFHWIFG);
   //}
}

////////////////////////////////////////////////////////////////////////////////////////////////
// Initialize Status
// Assumes Reset has been deasserted by ADI1 access
//
void InitializeAllRegisters ( SynthConf_t *cfg, int frequency ) {
   uint32_t tdcprecal;

   //sets it to RX mode right now ?
   //compiles, question is if it will actually set it up correctly
   cfg->SynthReg00Shadow = 0x60000000;
     /*(( 0 << RF24_FSCA_SYNTHREG00_SYNTHTXRXZ_S           ) |                // Rx Mode
      ( 1 << RF24_FSCA_SYNTHREG00_HSDCLOCKMASTERENABLE_S ) |                   
      ( 1 << RF24_FSCA_SYNTHREG00_RETIMERCLRZMASTER_S    ) |
      ( 0 << RF24_FSCA_SYNTHREG00_IS32KHZXTAL_S          ) |
      ( 0 << RF24_FSCA_SYNTHREG00_IS24MHZXTAL_S          ) |
      ( 0 << RF24_FSCA_SYNTHREG00_SYNTHTUNEPHASE_S       ) );*/

   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREG00) = cfg->SynthReg00Shadow;

   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGPREDIV) = 0;       //reset value
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGPLLMVALUE) = 0;    //reset value
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGOTHERMVALUE) = 0;  //reset value
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGFINECALMVALUE) = 0; //reset value
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGFORCEDCO) = 0;     //reset value
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGDTSTCTRL) = 0;      //reset value

   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGSDCONTROL) = //0x80000000;
      (( 1 << RF24_FSCA_SYNTHREGSDCONTROL_SDMDLYDOUBLEEN_S ) |
       ( 0 << RF24_FSCA_SYNTHREGSDCONTROL_SDMDITHERMODE_S ));

   //Note: please double-check the bit shifting
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGDIGCFG2) =
     //(( (uint32_t)FINE_BOT_CODE << 24 ) |
     //( (uint32_t)FINE_TOP_CODE << 8));     
     (( (uint32_t)FINE_BOT_CODE << RF24_FSCA_SYNTHREGDIGCFG2_FINEBOTCODEDURINGCALIB_S ) |
      ( (uint32_t)FINE_TOP_CODE << RF24_FSCA_SYNTHREGDIGCFG2_FINETOPCODEDURINGCALIB_S));

   if (cfg->TDC_SkipCalib == 0) { tdcprecal = 0; } else { tdcprecal = cfg->TDC_Precal; }

   cfg->SynthRegTDCShadow =
     (( tdcprecal       << RF24_FSCA_SYNTHREGTDCTHRESH_MEMKTINV_S) |
      ( ( 75 << 6 )/100 << RF24_FSCA_SYNTHREGTDCTHRESH_EDGESELTDCTH2_S) |
      ( ( 25 << 6 )/100 << RF24_FSCA_SYNTHREGTDCTHRESH_EDGESELTDCTH1_S));
   
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGTDCTHRESH) = cfg->SynthRegTDCShadow;

   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGLOOPCOEFF) = 0;

   //!
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGPLLCONTROL) =
     (( 3                     << RF24_FSCA_SYNTHREGPLLCONTROL_DELAYRETIMERINP_S        ) | //bit shifting a decimal 3 by 31 bits results in one 1 bit going out of scope/the address?
      ( 0                     << RF24_FSCA_SYNTHREGPLLCONTROL_RECENTERDISABLE_S        ) |
      ( 2                     << RF24_FSCA_SYNTHREGPLLCONTROL_RECENTERTHRESHHOLD_S     ) |
      //from mem.map description (regarding PLLWFINECALIBEN_S) : "Software should not rely on the value of a reserved. Writing any other value than the reset value may result in undefined behavior.(RO std text)"
      ( cfg->pllhwfinecaliben << RF24_FSCA_SYNTHREGPLLCONTROL_PLLHWFINECALIBEN_S       ) |
      ( 0                     << RF24_FSCA_SYNTHREGPLLCONTROL_CKVD64LATENCYFORMPXCAN_S ) |
      ( 4                     << RF24_FSCA_SYNTHREGPLLCONTROL_CKVD16LATENCYFORMPXCAN_S ) | //strange bit shifting of decimal 4 again?
      ( 0                     << RF24_FSCA_SYNTHREGPLLCONTROL_REFCLKLATCHEDGESEL_S     ) |
      ( 0                     << RF24_FSCA_SYNTHREGPLLCONTROL_TDCSATENABLE_S           ) |
      ( 2                     << RF24_FSCA_SYNTHREGPLLCONTROL_TDCCALIBAVERAGE_S        ) );

  //!
   cfg->SynthRegFSMControl = (
      //( 0                 << RF24_FSCA_SYNTHREGFSMCONTROL_DYNAMICCLOCKSWITCH_S ) |
      ( 0                 << RF24_FSCA_SYNTHREGFSMCONTROL_RETIMERFREEZE_S      ) |
      ( 0                 << RF24_FSCA_SYNTHREGFSMCONTROL_PLLFREEZE_S          ) |
      ( 0                 << RF24_FSCA_SYNTHREGFSMCONTROL_FINECODEFREEZE_S     ) |
      ( 0                 << RF24_FSCA_SYNTHREGFSMCONTROL_TDCFREEZE_S          ) |
      //( 0                 << RF24_FSCA_SYNTHREGFSMCONTROL_PLLRESET_S           ) |
      //( 0                 << RF24_FSCA_SYNTHREGFSMCONTROL_SKIPCALIBSTENABLE_S  ) |
      ( 32                << RF24_FSCA_SYNTHREGFSMCONTROL_MIDSARINITVAL_S      ) |
      ( cfg->CoarsePrecal << RF24_FSCA_SYNTHREGFSMCONTROL_COARSEPRECALVAL_S    ) |
      ( cfg->MidPrecal    << RF24_FSCA_SYNTHREGFSMCONTROL_MIDPRECALVAL_S       ) |
      ( cfg->SkipCoarse   << RF24_FSCA_SYNTHREGFSMCONTROL_COARSECALSKIPEN_S    ) |
      ( cfg->SkipMid      << RF24_FSCA_SYNTHREGFSMCONTROL_MIDCALSKIPEN_S       ) |
      ( cfg->SkipTDC      << RF24_FSCA_SYNTHREGFSMCONTROL_TDCCALSKIPEN_S       ) );

   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGFSMCONTROL) = cfg->SynthRegFSMControl;

   if (cfg->Mode == CC13XX_MODE) {
     /* HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGPETHRESH) =
         (( 0x10 << RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORLOCKTHRESHCNT_S ) | // updated 2013-10-18
          (    8 << RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORLOCKTHRESH_S    ) | // updated 2013-10-18
          (    0 << RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORDISCARDENABLE_S ) |
          (    2 << RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORDISCARDCNT_S    ) |
          (    4 << RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORDISCARDTH_S     ) );
      
      if(SYNT_IN_490_MHZ_BAND(frequency))
      {
        HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGPLLCONTROL2) = 0x0000003F;
      }
      else
      {
        HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGPLLCONTROL2) =
           (( cfg->OpenLoop1PT << RF24_FSCA_SYNTHREGPLLCONTROL2_PLLOPENLOOPMODE1PTMOD_S ) |
            ( 0                << RF24_FSCA_SYNTHREGPLLCONTROL2_XTALIDFRAC_S            ) |
            ( 1                << RF24_FSCA_SYNTHREGPLLCONTROL2_POMIDSEL_S              ) |
            ( 1                << RF24_FSCA_SYNTHREGPLLCONTROL2_POFINESEL_S             ) |
            ( 0x9              << RF24_FSCA_SYNTHREGPLLCONTROL2_POTAILRESTRIM_S         ) );  // updated 2013-10-18
      }
      */
   } else {
     
     //!
      HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGPETHRESH) =
         (( 0x17 << RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORLOCKTHRESHCNT_S ) | 
          (    8 << RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORLOCKTHRESH_S    ) |
          (    0 << RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORDISCARDENABLE_S ) |
          (    2 << RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORDISCARDCNT_S    ) |
          (    4 << RF24_FSCA_SYNTHREGPETHRESH_PHASEERRORDISCARDTH_S     ) );
         
      HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGPLLCONTROL2) =
        ( ( cfg->OpenLoop1PT << RF24_FSCA_SYNTHREGPLLCONTROL2_PLLOPENLOOPMODE1PTMOD_S ) |
          ( 1                << RF24_FSCA_SYNTHREGPLLCONTROL2_XTALIDFRAC_S            ) |
          ( 1                << RF24_FSCA_SYNTHREGPLLCONTROL2_POMIDSEL_S              ) |
          ( 1                << RF24_FSCA_SYNTHREGPLLCONTROL2_POFINESEL_S             ) |
          ( 0x4              << RF24_FSCA_SYNTHREGPLLCONTROL2_POTAILRESTRIM_S         ) );
   }

   // Author: some guy at TI
   // No need to waste time writing the shape at this point, it will be rewritten later
   
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_MODISFCFG) = 0;
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGDTXGAIN) = 0;  //reset value

   if (cfg->Mode == CC13XX_MODE) {
     
/*     if(SYNT_IN_490_MHZ_BAND(frequency))
     {
       HWREG(RF24_FSCA_BASE + RF24_FSCA_O_SYNTHREGANADIV) = 0x006DB2D9;
     }
     else
     {
       HWREG(RF24_FSCA_BASE + RF24_FSCA_O_SYNTHREGANADIV) =
         (( 0                     << RF24_FSCA_ANADIV13XX_COARSECAP_S        ) |
          ( 4                     << RF24_FSCA_ANADIV13XX_CTRL_PM_IREFD2_S   ) | // updated 2013-10-18
          ( 0                     << RF24_FSCA_ANADIV13XX_CTRL_PM_IREFD5_S   ) | // div5 not used atm.
          ( 4                     << RF24_FSCA_ANADIV13XX_CTRL_NM_IREFD2_S   ) | // updated 2013-10-18
          ( 0                     << RF24_FSCA_ANADIV13XX_CTRL_NM_IREFD5_S   ) | // div5 not used atm.
          ( cfg->ControlDivBuffer << RF24_FSCA_ANADIV13XX_DIVIDER_LUT_S      ) |
          ( 1                     << RF24_FSCA_ANADIV13XX_ENSYNTH_S          ) |
          ( 0                     << RF24_FSCA_ANADIV13XX_ENADC_S            ) |
          ( 0                     << RF24_FSCA_ANADIV13XX_ENTX_PH180_S       ) |
          ( 0                     << RF24_FSCA_ANADIV13XX_ENTX_PH0_S         ) |
          ( 0                     << RF24_FSCA_ANADIV13XX_ENRX_Q_S           ) |
          ( 0                     << RF24_FSCA_ANADIV13XX_ENRX_I_S           ) |
          ( 1                     << RF24_FSCA_ANADIV13XX_DIVBUF_ENABLE_S    ) );
     }*/
   } else {
     HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGANADIV) =
       (( 0 << RF24_FSCA_SYNTHREGANADIV_RETIMERISO_S   ) |
        ( 4 << RF24_FSCA_SYNTHREGANADIV_CTRLNMIREF_S   ) |
        ( 4 << RF24_FSCA_SYNTHREGANADIV_CTRLPMIREF_S   ) |
        ( 0 << RF24_FSCA_SYNTHREGANADIV_ENADC_S        ) |
        ( 1 << RF24_FSCA_SYNTHREGANADIV_ENSYNTH_S      ) |
        ( 0 << RF24_FSCA_SYNTHREGANADIV_ENTXPH180_S    ) |
        ( 0 << RF24_FSCA_SYNTHREGANADIV_ENTXPH0_S      ) |
        ( 0 << RF24_FSCA_SYNTHREGANADIV_ENRXQ_S        ) |
        ( 0 << RF24_FSCA_SYNTHREGANADIV_ENRXI_S        ) |
        ( 1 << RF24_FSCA_SYNTHREGANADIV_DIVBUFENABLE_S ) );
   }

   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGPLLCONTROL3) = 0;  //reset value

   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGFSMCONTROL2) =
     ( FACT32(FINE_BANK_START_CODE) << RF24_FSCA_SYNTHREGFSMCONTROL2_FINESTARTCODE_S ) ;

   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGFSMCONTROL3) = 0;  //reset value

   // Initial value
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGTDCTHRESH) = 0x00003010;

}

////////////////////////////////////////////////////////////////////////////////////////////////
// WriteXtalRegInfo
//

void WriteXtalRegInfo ( SynthConf_t *cfg ) {
   uint32_t a,b,c,d;
   if (cfg->fxtal == 24){
      DBG_PRINT0( DBGSYS, "Doing WriteXtalRegInfo. Using 24 MHz XTAL");

      // Setting the 24 MHz bit
      // No idea what the bit is supposed to be set to and what its position is in the reg, hopefully 0 (reset value)
      // Can be any bit between 5,12-28
      // This sets it to the same value from above
      // NB!
      cfg->SynthReg00Shadow |= 0x60000000; // 0x60000000 ;//RF24_FSCA_SYNTHREG00_IS24MHZXTAL_M;
      cfg->XtalPeriod = 2*20833333;
      HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREG00) = cfg->SynthReg00Shadow;

      HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGPREDIV) =
        (( (uint32_t)((uint32_t)FXTAL_PLL_FREF)    << RF24_FSCA_SYNTHREGPREDIV_PLLPREDIVRATIO_S          ) |
        ( (uint32_t)((uint32_t)FXTAL_F_FINE_CALIB) << RF24_FSCA_SYNTHREGPREDIV_FINECALIBPREDIVRATIO_S    ) |
        ( (uint32_t)((uint32_t)FXTAL_F_MID_SAR)    << RF24_FSCA_SYNTHREGPREDIV_MIDCALIBPREDIVRATIO_S     ) |
        ( (uint32_t)((uint32_t)FXTAL_F_FREF_FAST)  << RF24_FSCA_SYNTHREGPREDIV_DEFAULTCALIBPREDIVRATIO_S )  );

   } 
      /*
      else if (cfg->fxtal == 48){

      // Clear the 24 MHz bit
      cfg->SynthReg00Shadow &= ~RF24_FSCA_SYNTHREG00_IS24MHZXTAL_M;
      cfg->XtalPeriod = 20833333;
      HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREG00) = cfg->SynthReg00Shadow;

      HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGPREDIV) =
        (( (uint32_t)((uint32_t)FXTAL48_PLL_FREF)    << RF24_FSCA_SYNTHREGPREDIV_PLLPREDIVRATIO_S          ) |
        ( (uint32_t)((uint32_t)FXTAL48_F_FINE_CALIB) << RF24_FSCA_SYNTHREGPREDIV_FINECALIBPREDIVRATIO_S    ) |
        ( (uint32_t)((uint32_t)FXTAL48_F_MID_SAR)    << RF24_FSCA_SYNTHREGPREDIV_MIDCALIBPREDIVRATIO_S     ) |
        ( (uint32_t)((uint32_t)FXTAL48_F_FREF_FAST)  << RF24_FSCA_SYNTHREGPREDIV_DEFAULTCALIBPREDIVRATIO_S )  );

   }*/

   // Step 2. Write Predivide Ratios. Note, the FXTAL_PLL_FREF is at the moment defined
   // as a constant, so we could add the option of selecting between different FREFs
   // later if needed
   // -haha

   // Step 3. Compute the M values according to the RF channel desired
   a = (cfg->Fch * FACT32(MK) ) + ((cfg->Fch_dec * FACT32(MK) ) >> 16);      // Constant MK is defined above
   b = (cfg->Fch * FACT32(M2K)) + ((cfg->Fch_dec * FACT32(M2K)) >> 16);      // Constant M2K is defined above
   c = (cfg->Fch * FACT32(M3K)) + ((cfg->Fch_dec * FACT32(M3K)) >> 16);      // Constant M3K is defined above
   d = (cfg->Fch * FACT32(M4K)) + ((cfg->Fch_dec * FACT32(M4K)) >> 16);      // Constant M4K is defined above

   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGPLLMVALUE) = (a << RF24_FSCA_SYNTHREGPLLMVALUE_PLLMVALUE_S );

   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGOTHERMVALUE) =
     (b << RF24_FSCA_SYNTHREGOTHERMVALUE_MIDMVALUE_S | c);
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGFINECALMVALUE) = d;

   //DiagPrintf( g_iHandle, "WriteXtalRegInfo Done");
}

////////////////////////////////////////////////////////////////////////////////////////////////
// SoftwareSynthResetSequence
//

void SoftwareSynthResetSequence ( SynthConf_t *cfg ) {
   //DiagPrintf( g_iHandle, "Doing Software Synth Reset Sequence");

   if (cfg->isTx == 1) {
     DBG_PRINT0( DBGSYS, "Synth is configured in TX mode");
     cfg->SynthReg00Shadow |= ( RF24_FSCA_SYNTHREG00_SYNTHTXRXZ_M );
   } else {
     DBG_PRINT0( DBGSYS, "Synth is configured in RX mode");
     cfg->SynthReg00Shadow &= ( ~RF24_FSCA_SYNTHREG00_SYNTHTXRXZ_M );
   }
   
   //clears all the synth tune bits
   cfg->SynthReg00Shadow &= ( ~RF24_FSCA_SYNTHREG00_SYNTHTUNEPHASE_M );
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREG00) = cfg->SynthReg00Shadow;

   for (int k = 0; k < 32; k++) __asm("nop");
   
   //sets the 1st Synth tune bit to 1
   cfg->SynthReg00Shadow |= (RF24_FSCA_SYNTHREG00_SYNTHTUNEPHASE_M & 1);
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREG00) = cfg->SynthReg00Shadow;
   //DiagPrintf( g_iHandle, "Software Synth Reset Sequence Done");
}


int SoftwareSynthTuneSequence( uint16_t df, uint16_t f3db, SynthConf_t *cfg ) {

   uint32_t a ;
   uint32_t ikt;
   uint32_t alpha, beta;
   uint32_t est_kt_avg;
   uint32_t dco_span;
   uint32_t fch_in_hz;
   //uint32_t G;
   uint64_t G_long;
   
   int j = 0;
   int b = 0;
   
   // Step 0. Remove the FREEZEs
   cfg->SynthRegFSMControl &= ~(RF24_FSCA_SYNTHREGFSMCONTROL_PLLFREEZE_M |
                                RF24_FSCA_SYNTHREGFSMCONTROL_RETIMERFREEZE_M |
                                RF24_FSCA_SYNTHREGFSMCONTROL_FINECODEFREEZE_M );
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGFSMCONTROL) = cfg->SynthRegFSMControl;

   // Step 1. Tune Phase change from 1 to 3
   DBG_PRINT0( DBGSYS, "Tune phase changing from 1 to 3 -- DIG is Enabled");
   
   cfg->SynthReg00Shadow |= (RF24_FSCA_SYNTHREG00_SYNTHTUNEPHASE_M & 3);
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREG00) = cfg->SynthReg00Shadow;

   // Step 2.
   // Wait for irq
   WaitForSynthIRQ();

   // Step 3. Continue by reading DCO Span and TDC Sum
   //DiagPrintf( g_iHandle, "Received ack : DONE WITH TDC CALIBRATION");

   //TDC data is un lower 16 bits of SYNTHSTATUS3
   est_kt_avg = HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHSTATUS3);
   
   //don't understand this right bit shift
   est_kt_avg = ((est_kt_avg & RF24_FSCA_SYNTHSTATUS3_TDCCALIBAVG_M) >> RF24_FSCA_SYNTHSTATUS3_TDCCALIBAVG_S);

   DBG_PRINT1( DBGSYS, "Reading SYNTHSTATUS3 = %d", est_kt_avg);

#ifdef USE_HW_DIVIDER
   // Launch the inversion in the divider
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_DIVIDEND) = (1 << 18);    // 2^18
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_DIVISOR)  = est_kt_avg;
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_DIVCTRL) = 1;           // Start the division operations in the background
   while (HWREG(RFC_FSCA_BASE + RF24_FSCA_O_DIVCTRL) & 1);   // Wait until completed
   a = HWREG(RFC_FSCA_BASE + RF24_FSCA_O_QUOTIENT);
#endif

#ifndef USE_HW_DIVIDER
   a = (1 << 18)/est_kt_avg;
#endif

   // Program 1/KT value, unless the calibration step is skipped
   if (cfg->TDC_SkipCalib == 0) {
      cfg->SynthRegTDCShadow |=
        ((a << RF24_FSCA_SYNTHREGTDCTHRESH_MEMKTINV_S) & RF24_FSCA_SYNTHREGTDCTHRESH_MEMKTINV_M);
      HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGTDCTHRESH) = cfg->SynthRegTDCShadow;
   } else {
      a = cfg->SynthRegTDCShadow >> RF24_FSCA_SYNTHREGTDCTHRESH_MEMKTINV_S;
   }

   for (int i=0;i<128;i++) {
      j |= HWREG(RFC_DBELL_BASE + RFC_DBELL_O_RFHWIFG);
      b |= HWREG(RFC_DBELL_BASE + RFC_DBELL_O_RFCPEIFG);
   }

   
   // Step 4. Tune Phase change from 3 to 7
   DBG_PRINT1(DBGSYS, "Tune phase changing from 3 to 7 -- 1/KT is loaded %d", a);

   cfg->SynthReg00Shadow |= (RF24_FSCA_SYNTHREG00_SYNTHTUNEPHASE_M & 7);
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREG00) = cfg->SynthReg00Shadow;

   // Precompute the fch*1e6/64 factor for now, to save time later
   fch_in_hz = (cfg->Fch * K5) + ((cfg->Fch_dec * K5) >> 16);      // fch*1e6/64
   fch_in_hz >>= 1;                                                // fch*1e6/128 in fact

   // Step 5. Wait for ACK
   WaitForSynthIRQ();

   // Step 6. Read DCO Span, compute ikt (2^21/Kdco) estimation
   //DiagPrintf( g_iHandle, "Received ACK: DONE WITH SPAN COMPUTATION");

   //DCO SPAN is read from status registers SYNTHSTATUS2
   dco_span = HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHSTATUS2);

#ifdef USE_HW_DIVIDER
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_DIVIDEND) = FACT32(K1);    //
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_DIVISOR)  = dco_span;
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_DIVCTRL) = 1;              // Start the division operations in the background
   while (HWREG(RFC_FSCA_BASE + RF24_FSCA_O_DIVCTRL) & 1);      // Wait until completed
   ikt = HWREG(RFC_FSCA_BASE + RF24_FSCA_O_QUOTIENT);           //
#endif

#ifndef USE_HW_DIVIDER
   ikt = FACT32(K1)/dco_span;
#endif

   // Enable dynamic clock switching to switch between 32Khz and FREF if needed */
   //cfg->SynthRegFSMControl |= (1 << RF24_FSCA_SYNTHREGFSMCONTROL_DYNAMICCLOCKSWITCH_S);
   //HWREG(RF24_FSCA_BASE + RF24_FSCA_O_SYNTHREGFSMCONTROL) = cfg->SynthRegFSMControl;

   // Step 7. Compute ALPHA & BETA now
   a = ikt * FACT32(K2BL);        // K2BL defined above
   alpha = ( a >> 21 );           // alpha
   a = ikt * FACT32(K3BL);        // K3BL defined above
   beta = ( a >> 21 );            // beta
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGLOOPCOEFF) =
     (( beta  << RF24_FSCA_SYNTHREGLOOPCOEFF_PLLBETA_S ) |
      ( alpha << RF24_FSCA_SYNTHREGLOOPCOEFF_PLLALPHA_S ));
   
   //NB!: Do not remove loop; delay is required for appropriate setup
   for (int i=0;i<128;i++) {
      j |= HWREG(RFC_DBELL_BASE + RFC_DBELL_O_RFHWIFG);
      b |= HWREG(RFC_DBELL_BASE + RFC_DBELL_O_RFCPEIFG);
   }

   
   // Step 8. Slope Calculation for FLL loop
   //fll_slope = fll_slope >> 18;
   //S_SYNTHREGFLLLOOP = fll_slope;

   // Step 9. Cancelation Path Gain on TX mode
   if (cfg->isTx == 1) {
      G_long = (uint64_t) ikt * (uint64_t) fch_in_hz;
      G_long = (G_long >> 21);
      HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGDTXGAIN) = (uint32_t) G_long;
      //DiagPrintf( g_iHandle, "TX mode: Calculated Path Gain is %d", G);
   }

   // Step 10. Increase TUNE phase value again
   cfg->SynthReg00Shadow |= (RF24_FSCA_SYNTHREG00_SYNTHTUNEPHASE_M & 15);
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREG00) = cfg->SynthReg00Shadow;

   DBG_PRINT1( DBGSYS, "Tune phase changing from 7 to 15. dco_span is %d", dco_span);
   DBG_PRINT1( DBGSYS, "ikt is %d", ikt);
   DBG_PRINT1( DBGSYS, "Calculated alpha is %d", alpha);
   DBG_PRINT1( DBGSYS, "Calculated beta is %d", beta);

   // Step 11. Pre-calculation of the alpha/beta values while waiting for the Lock signal
   a = ikt * FACT32(K2AL);        // K2AL defined above
   alpha = ( a >> 21 );           // alpha

   a = ikt * FACT32(K3AL );        // K3AL defined above
   beta = ( a >> 21 );             // beta

   //return 1;

   // Step 11. Wait for ACK, tune value = 3. Return error if timeout or not expected value
   
   //Gets stuck here
   //Judging by the message underneath- this means the PLL does not lock?
   
   WaitForSynthIRQ();
   //for (int k = 0; k < 32; k++) __asm("nop");
   DBG_PRINT0(DBGSYS, "PLL is LOCKED!!!");

   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGLOOPCOEFF) =
     (( 1U    << RF24_FSCA_SYNTHREGLOOPCOEFF_PLLCOEFFDYNCHANGE_S ) |
      ( beta  << RF24_FSCA_SYNTHREGLOOPCOEFF_PLLBETA_S           ) |
      ( alpha << RF24_FSCA_SYNTHREGLOOPCOEFF_PLLALPHA_S          )   );
   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGLOOPCOEFF) =
     (( 0     << RF24_FSCA_SYNTHREGLOOPCOEFF_PLLCOEFFDYNCHANGE_S ) |
      ( beta  << RF24_FSCA_SYNTHREGLOOPCOEFF_PLLBETA_S           ) |
      ( alpha << RF24_FSCA_SYNTHREGLOOPCOEFF_PLLALPHA_S          )   );
   return 0;
}

void synth_enable_buffers_tx( SynthConf_t *cfg, int frequency ) {
  if (cfg->Mode == CC13XX_MODE) {
    
    if(SYNT_IN_490_MHZ_BAND(frequency))
    {
      HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGANADIV) = 0x006DB2D9;
    }
    else
    {  
      HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGANADIV) =
         (( 0                     << RF24_FSCA_ANADIV13XX_COARSECAP_S        ) |
          ( 4                     << RF24_FSCA_ANADIV13XX_CTRL_PM_IREFD2_S   ) | // updated 2013-10-18
          ( 0                     << RF24_FSCA_ANADIV13XX_CTRL_PM_IREFD5_S   ) |
          ( 4                     << RF24_FSCA_ANADIV13XX_CTRL_NM_IREFD2_S   ) | // updated 2013-10-18
          ( 0                     << RF24_FSCA_ANADIV13XX_CTRL_NM_IREFD5_S   ) |
          ( cfg->ControlDivBuffer << RF24_FSCA_ANADIV13XX_DIVIDER_LUT_S      ) |
          ( 1                     << RF24_FSCA_ANADIV13XX_ENSYNTH_S          ) |
          ( 0                     << RF24_FSCA_ANADIV13XX_ENADC_S            ) |
          ( 1                     << RF24_FSCA_ANADIV13XX_ENTX_PH180_S       ) |
          ( 1                     << RF24_FSCA_ANADIV13XX_ENTX_PH0_S         ) |
          ( 0                     << RF24_FSCA_ANADIV13XX_ENRX_Q_S           ) |
          ( 0                     << RF24_FSCA_ANADIV13XX_ENRX_I_S           ) |
          ( 1                     << RF24_FSCA_ANADIV13XX_DIVBUF_ENABLE_S    ) );
    }
  } else {
    HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGANADIV) =
      (( 0 << RF24_FSCA_SYNTHREGANADIV_RETIMERISO_S   ) |
       ( 4 << RF24_FSCA_SYNTHREGANADIV_CTRLNMIREF_S   ) |
       ( 4 << RF24_FSCA_SYNTHREGANADIV_CTRLPMIREF_S   ) |
       ( 0 << RF24_FSCA_SYNTHREGANADIV_ENADC_S        ) |
       ( 1 << RF24_FSCA_SYNTHREGANADIV_ENSYNTH_S      ) |
       ( 1 << RF24_FSCA_SYNTHREGANADIV_ENTXPH180_S    ) |
       ( 1 << RF24_FSCA_SYNTHREGANADIV_ENTXPH0_S      ) |
       ( 0 << RF24_FSCA_SYNTHREGANADIV_ENRXQ_S        ) |
       ( 0 << RF24_FSCA_SYNTHREGANADIV_ENRXI_S        ) |
       ( 1 << RF24_FSCA_SYNTHREGANADIV_DIVBUFENABLE_S ) );
  }
}

void synth_enable_buffers_rx( SynthConf_t *cfg, int frequency ) {
  if (cfg->Mode == CC13XX_MODE) {
    
    if(SYNT_IN_490_MHZ_BAND(frequency))
    {
      HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGANADIV) = 0x006DB2E7;
    }
    else
    {
      HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGANADIV) =
       (( 0                     << RF24_FSCA_ANADIV13XX_COARSECAP_S        ) |
        ( 4                     << RF24_FSCA_ANADIV13XX_CTRL_PM_IREFD2_S   ) | // updated 2013-10-18
        ( 0                     << RF24_FSCA_ANADIV13XX_CTRL_PM_IREFD5_S   ) |
        ( 4                     << RF24_FSCA_ANADIV13XX_CTRL_NM_IREFD2_S   ) | // updated 2013-10-18
        ( 0                     << RF24_FSCA_ANADIV13XX_CTRL_NM_IREFD5_S   ) |
        ( cfg->ControlDivBuffer << RF24_FSCA_ANADIV13XX_DIVIDER_LUT_S      ) |
        ( 1                     << RF24_FSCA_ANADIV13XX_ENSYNTH_S          ) |
        ( 1                     << RF24_FSCA_ANADIV13XX_ENADC_S            ) |
        ( 0                     << RF24_FSCA_ANADIV13XX_ENTX_PH180_S       ) |
        ( 0                     << RF24_FSCA_ANADIV13XX_ENTX_PH0_S         ) |
        ( 1                     << RF24_FSCA_ANADIV13XX_ENRX_Q_S           ) |
        ( 1                     << RF24_FSCA_ANADIV13XX_ENRX_I_S           ) |
        ( 1                     << RF24_FSCA_ANADIV13XX_DIVBUF_ENABLE_S    ) );
    }
  } else {
    HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGANADIV) =
      (( 0 << RF24_FSCA_SYNTHREGANADIV_RETIMERISO_S   ) |
       ( 4 << RF24_FSCA_SYNTHREGANADIV_CTRLNMIREF_S   ) |
       ( 4 << RF24_FSCA_SYNTHREGANADIV_CTRLPMIREF_S   ) |
       ( 1 << RF24_FSCA_SYNTHREGANADIV_ENADC_S        ) |
       ( 1 << RF24_FSCA_SYNTHREGANADIV_ENSYNTH_S      ) |
       ( 0 << RF24_FSCA_SYNTHREGANADIV_ENTXPH180_S    ) |
       ( 0 << RF24_FSCA_SYNTHREGANADIV_ENTXPH0_S      ) |
       ( 1 << RF24_FSCA_SYNTHREGANADIV_ENRXQ_S        ) |
       ( 1 << RF24_FSCA_SYNTHREGANADIV_ENRXI_S        ) |
       ( 1 << RF24_FSCA_SYNTHREGANADIV_DIVBUFENABLE_S ) );
  }
}

void synth_disable_buffers( void ) {
  HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGANADIV) = 0;
}


////////////////////////////////////////////////////////////////////////////////////////////////
// Global Entry Point function
//
// mode             : 1 => CC26xx, 2 => CC13xx
// rf_channel       : RF Channel in MHz [150..2500]
// rf_channel_dec   : Decimal Part RF Channel 65536*floor(RF - RF [MHz] )
// divider_setting  : [2,5,6,10,12,15]
// isTx             : 1 => Tx, 0 => Rx
//
int calibrate_synth (int mode, int rf_channel, int rf_channel_dec, int divider_setting, int isTx, int xtal)
{
  uint32_t apparent_fch;
  SynthConf_t myConfig;
  int frequencyMhz = rf_channel;

   // Pre-processing according to the mode. The Synth internally sees a frequency
   // that is frf*N/2 (where N is the divider setting). In CC26xx mode N = 2, thus
   // the synth operates at the nominal RF frequency. In CC13xx modes, however, the
   // synth will see an "apparent" frequency which is different. For instance, for
   // a channel of 868.2 MHz, (div = 6) the apparent frequency becomes 2604.6 MHz
   if (mode == CC13XX_MODE) {
     apparent_fch = (rf_channel << 16) | rf_channel_dec;   // Put together as 32 bit first
     apparent_fch *= divider_setting;                      // Multiply by divider setting
     apparent_fch >>= 1;                                   // Divide by two
     myConfig.Fch     = (uint16_t) (apparent_fch >> 16);   // Split again into 16.16 format
     myConfig.Fch_dec = (uint16_t) (apparent_fch & 0xFFFF);
   } else {
     myConfig.Fch     = rf_channel;
     myConfig.Fch_dec = rf_channel_dec;
   }
   //DiagPrintf( g_iHandle, "Starting Synth Calibration @ %d.%d MHz\n",  myConfig.Fch,  (1000*myConfig.Fch_dec >> 16));

   // See DIV_BUF_2A spec
   switch (divider_setting) {
     //LH: case 0 added by me just in case
     case 0  : myConfig.ControlDivBuffer = 0; break;
     case 2  : myConfig.ControlDivBuffer = 0; break;
     case 5  : myConfig.ControlDivBuffer = 4; break;
     case 6  : myConfig.ControlDivBuffer = 2; break;
     case 10 : myConfig.ControlDivBuffer = 5; break;
     case 12 : myConfig.ControlDivBuffer = 3; break;
     case 15 : myConfig.ControlDivBuffer = 6; break;
   }

   myConfig.Mode              = mode;
   myConfig.isTx              = isTx;
   myConfig.TDC_SkipCalib     = 0;
   myConfig.TDC_Precal        = 0;
   myConfig.SynthReg00Shadow  = 0;
   myConfig.SynthRegTDCShadow = 0;
   myConfig.pllhwfinecaliben  = 0;
   myConfig.CoarsePrecal      = 0;
   myConfig.MidPrecal         = 0;
   myConfig.SkipCoarse        = 0;
   myConfig.SkipMid           = 0;
   myConfig.SkipTDC           = 0;
   myConfig.OpenLoop1PT       = 0;
   myConfig.XtalPeriod        = 0;
   myConfig.fxtal             = xtal;

   calib_state = 0;
   InitializeAllRegisters( &myConfig, frequencyMhz );
   WriteXtalRegInfo( &myConfig );
   SoftwareSynthResetSequence ( &myConfig );
   
   //are the two i/p arguments correct?
   SoftwareSynthTuneSequence( 100, 60000, &myConfig );
   if (isTx) synth_enable_buffers_tx( &myConfig, frequencyMhz );
   else      synth_enable_buffers_rx( &myConfig, frequencyMhz );
   return 0;
}


void control_dco_trim_by_fw (uint8_t FW_FINE_CODE, uint8_t FW_SD_CODE, uint8_t FW_MID_CODE , uint8_t FW_COARSE_CODE, uint8_t FW_C_M_F_FORCE_EN, uint8_t FW_SD_FORCE_EN   ) {

   HWREG(RFC_FSCA_BASE + RF24_FSCA_O_SYNTHREGFORCEDCO) =
     ((FW_FINE_CODE       << RF24_FSCA_SYNTHREGFORCEDCO_TSTDCOFINEREG_S    ) |
      (FW_SD_CODE         << RF24_FSCA_SYNTHREGFORCEDCO_TSTDCOSDREG_S      ) |
      (FW_MID_CODE        << RF24_FSCA_SYNTHREGFORCEDCO_TSTDCOMIDREG_S     ) |
      (FW_COARSE_CODE     << RF24_FSCA_SYNTHREGFORCEDCO_TSTDCOCOARSEREG_S  ) |
      (FW_C_M_F_FORCE_EN  << RF24_FSCA_SYNTHREGFORCEDCO_TSTFORCECMFCODES_S ) |
      (FW_SD_FORCE_EN     << RF24_FSCA_SYNTHREGFORCEDCO_TSTFORCESDCODE_S   )  );
}

