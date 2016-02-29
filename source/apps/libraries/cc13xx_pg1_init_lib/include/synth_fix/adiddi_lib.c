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

#include "adiddi_lib.h"

#include <stdint.h>
#include <stdbool.h>

#include "hw_types.h"
#include "hw_sysctl.h"
//#include "hw_memmap.h"
//#include "cc26xxware/inc/hw_memmap_cc26xxware.h"

//#include "hw_rfc_pwr.h"
//#include "hw_rfc_dbell.h"
//#include "hw_rf24_mdm.h"
//#include "hw_rf24_rfe.h"
//#include "hw_rfc_rat.h"
//#include "hw_rf24_s2r.h"
//#include "hw_rf24_fsca.h"
//#include "hw_rf24_pha.h"

//#include "hw_adi_1_synth.h"
//#include "from_cc13xx_ex_app/hw_adi_1_synth_cc13xx.h"
//#include "inc/hw_adi_0_rf.h"


/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Full Write ADI0,ADI1
//
void adi0_FullWrite ( uint8_t adiAdd, uint8_t data ) {
  //HWREG(RFC_RFE_BASE + RF24_RFE_O_ADI0CTRL)     = 1;   // Full size writes
  //HWREG(RFC_RFE_BASE + RF24_RFE_O_ADI0ADDWDATA) = (adiAdd << 8) | data;
  //HWREG(RFC_RFE_BASE + RF24_RFE_O_ADI0CLK)      = 1;   // clock the adi slave once

  HWREG(RFC_RFE_BASE + TI_RFC_RFE_O_ADI0CTRL)     = 1;   // Full size writes
  HWREG(RFC_RFE_BASE + TI_RFC_RFE_O_ADI0ADDWDATA) = (adiAdd << 8) | data;
  HWREG(RFC_RFE_BASE + TI_RFC_RFE_O_ADI0CLK)      = 1;   // clock the adi slave once

}

void adi1_FullWrite ( uint8_t adiAdd, uint8_t data ) {
   //HWREG(RFC_FSCA_BASE + RF24_FSCA_O_ADI1CTRL)     = 1;   // Full size writes
   //HWREG(RFC_FSCA_BASE + RF24_FSCA_O_ADI1ADDWDATA) = (adiAdd << 8) | data;
   //HWREG(RFC_FSCA_BASE + RF24_FSCA_O_ADI1CLK)      = 1;   // clock the adi slave once
   
   HWREG(RFC_FSCA_BASE + TI_RFC_FSCA_O_ADI1CTRL)     = 1;   // Full size writes
   HWREG(RFC_FSCA_BASE + TI_RFC_FSCA_O_ADI1ADDWDATA) = (adiAdd << 8) | data;
   HWREG(RFC_FSCA_BASE + TI_RFC_FSCA_O_ADI1CLK)      = 1;   // clock the adi slave once
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Half writes ADI0, ADI1
//
void adi0_HalfWrite ( uint8_t adiAdd, uint8_t data) {
  //HWREG(RFC_RFE_BASE + RF24_RFE_O_ADI0CTRL)     = 3;   // Half size writes
  //HWREG(RFC_RFE_BASE + RF24_RFE_O_ADI0ADDWDATA) = (adiAdd << 8) | data;
  //HWREG(RFC_RFE_BASE + RF24_RFE_O_ADI0CLK)      = 1;   // clock the adi slave once

  HWREG(RFC_RFE_BASE + TI_RFC_RFE_O_ADI0CTRL)     = 3;   // Half size writes
  HWREG(RFC_RFE_BASE + TI_RFC_RFE_O_ADI0ADDWDATA) = (adiAdd << 8) | data;
  HWREG(RFC_RFE_BASE + TI_RFC_RFE_O_ADI0CLK)      = 1;   // clock the adi slave once

}

void adi1_HalfWrite ( uint8_t adiAdd, uint8_t data) {
  //HWREG(RFC_FSCA_BASE + RF24_FSCA_O_ADI1CTRL)     = 3;   // Half size writes
  //HWREG(RFC_FSCA_BASE + RF24_FSCA_O_ADI1ADDWDATA) = (adiAdd << 8) | data;
  //HWREG(RFC_FSCA_BASE + RF24_FSCA_O_ADI1CLK)      = 1;   // clock the adi slave once

  HWREG(RFC_FSCA_BASE + TI_RFC_FSCA_O_ADI1CTRL)     = 3;   // Half size writes
  HWREG(RFC_FSCA_BASE + TI_RFC_FSCA_O_ADI1ADDWDATA) = (adiAdd << 8) | data;
  HWREG(RFC_FSCA_BASE + TI_RFC_FSCA_O_ADI1CLK)      = 1;   // clock the adi slave once
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Reads ADI0, ADI1
//
uint8_t adi0_Read ( uint8_t adiAdd) {
  uint8_t d;

  //HWREG(RFC_RFE_BASE  + RF24_RFE_O_ADI0CTRL)       = 2;   // Half size reads
  //HWREG(RFC_RFE_BASE  + RF24_RFE_O_ADI0ADDWDATA)   = (adiAdd << 8);
  //HWREG(RFC_RFE_BASE  + RF24_RFE_O_ADI0CLK)        = 1;   // clock the adi slave once
  
  HWREG(RFC_RFE_BASE  + TI_RFC_RFE_O_ADI0CTRL)       = 2;   // Half size reads
  HWREG(RFC_RFE_BASE  + TI_RFC_RFE_O_ADI0ADDWDATA)   = (adiAdd << 8);
  HWREG(RFC_RFE_BASE  + TI_RFC_RFE_O_ADI0CLK)        = 1;   // clock the adi slave once
  //do {
    d = HWREG(RFC_RFE_BASE + RF24_RFE_O_ADI0RD);
  //} while (!(d & RF24_RFE_ADI0RD_ACK));
  return (d & RF24_RFE_ADI0RD_RDATA_M);    
}

uint8_t adi1_Read ( uint8_t adiAdd ) {
   uint8_t d;
   
   //HWREG(RFC_FSCA_BASE + RF24_FSCA_O_ADI1CTRL)     = 2;   // Half Size Reads
   //HWREG(RFC_FSCA_BASE + RF24_FSCA_O_ADI1ADDWDATA) = (adiAdd << 8);   
   //HWREG(RFC_FSCA_BASE + RF24_FSCA_O_ADI1CLK)      = 1;   // clock the adi slave once
   
   HWREG(RFC_FSCA_BASE + TI_RFC_FSCA_O_ADI1CTRL)     = 2;   // Half Size Reads
   HWREG(RFC_FSCA_BASE + TI_RFC_FSCA_O_ADI1ADDWDATA) = (adiAdd << 8);   
   HWREG(RFC_FSCA_BASE + TI_RFC_FSCA_O_ADI1CLK)      = 1;   // clock the adi slave once
   //do {
      d = HWREG(RFC_FSCA_BASE + RF24_FSCA_O_ADI1RD);
   //} while (!(d & RF24_FSCA_ADI1RD_ACK));   
   return (d & RF24_FSCA_ADI1RD_RDATA_M);    
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SafePark functions
//
void adi0_SafePark ( uint8_t adiAdd) {
  //HWREG(RFC_RFE_BASE  + RF24_RFE_O_ADI0CTRL)       = 0;   // Full size reads
  HWREG(RFC_RFE_BASE  + TI_RFC_RFE_O_ADI0CTRL)       = 0;   // Full size reads

}

void adi1_SafePark ( uint8_t adiAdd) {
  //HWREG(RFC_FSCA_BASE  + RF24_FSCA_O_ADI1CTRL)     = 0;   // Full size reads
  HWREG(RFC_FSCA_BASE  + TI_RFC_FSCA_O_ADI1CTRL)     = 0;   // Full size reads

}
