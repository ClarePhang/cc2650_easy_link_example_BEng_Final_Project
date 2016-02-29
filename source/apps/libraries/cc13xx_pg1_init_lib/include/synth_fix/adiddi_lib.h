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
/// \file            adiddi_libs.c
/// \brief           ADI and DDI low level functions
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

#ifndef _ADIDDILIB_H
#define _ADIDDILIB_H

#include <stdint.h>
#include <stdbool.h>

#include "hw_types.h"
#include "hw_sysctl.h"
//#include "hw_memmap.h"
//#include "cc26xxware/inc/hw_memmap_cc26xxware.h"
#include <inc/hw_memmap.h>


//#include "hw_rf24_pwr.h"
#include "hw_rfc_pwr.h"
//#include "hw_rf24_dbell.h"
#include "hw_rfc_dbell.h"
//#include "hw_rf24_mdm.h"
//#include "hw_rf24_rfe.h"
//#include "hw_rf24_rat.h"
#include "hw_rfc_rat.h"
//#include "hw_rf24_s2r.h"
//#include "hw_rf24_fsca.h"
//#include "hw_rf24_pha.h"

//#include "hw_adi_1_synth.h"
//#include "hw_adi_0_rf.h"
//#include "from_cc13xx_ex_app/hw_adi_1_synth_cc13xx.h"

#include <inc/hw_adi_1_synth.h>
#include "inc/hw_adi_0_rf.h"

//*****************************************************************************
//
// The following are defines for the bit field offsets in the 
// RF24_FSCA/RF24_RFE registers.
// Note: Cannot seem to find any FSCA/RFE registers and defines in the CC26xx libs
//
//*****************************************************************************


#define TI_RFC_FSCA_O_ADI1CTRL          0x00000108  // ADI Interface 1 Control
#define TI_RFC_FSCA_O_ADI1CLK           0x0000010C  // ADI Interface 1 Clock
#define TI_RFC_FSCA_O_ADI1ADDWDATA      0x00000114  // ADI Interface 1 Address and
                                                    // Write Data
#define TI_RFC_RFE_O_ADI0CTRL           0x00000040  // ADI Interface 0 Control
                                                    // Register
#define TI_RFC_RFE_O_ADI0ADDWDATA       0x0000004C  // ADI Interface 0 Address and
                                                    // Write Data
#define TI_RFC_RFE_O_ADI0CLK            0x00000044  // ADI Interface 0 Clock

#define RF24_RFE_O_ADI0RD               0x00000050
#define RF24_FSCA_O_ADI1RD              0x00000118
                                    
#define RF24_RFE_ADI0RD_RDATA_M         0x00000007
#define RF24_FSCA_ADI1RD_RDATA_M        0x00000007                                  
                                  

                                  
/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Full Write ADI0,ADI1
//
void adi0_FullWrite ( uint8_t adiAdd, uint8_t data );
void adi1_FullWrite ( uint8_t adiAdd, uint8_t data );

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Half writes ADI0, ADI1
//
void adi0_HalfWrite ( uint8_t adiAdd, uint8_t data);
void adi1_HalfWrite ( uint8_t adiAdd, uint8_t data);

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Reads ADI0, ADI1
//
uint8_t adi0_Read ( uint8_t adiAdd);
uint8_t adi1_Read ( uint8_t adiAdd );

/////////////////////////////////////////////////////////////////////////////////////////////////////////////
// SafePark functions
//
void    adi0_SafePark ( uint8_t adiAdd);
void    adi1_SafePark ( uint8_t adiAdd);

#endif
