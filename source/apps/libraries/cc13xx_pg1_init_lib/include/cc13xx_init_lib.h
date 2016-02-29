/******************************************************************************
*  Filename:       cc13xx_init_lib.h
*  Revised:        $Date$
*  Revision:       $Revision$
*
*  Description:    cc13xx_init_lib header file
*
*  Copyright (C) 2013 Texas Instruments Incorporated - http://www.ti.com/
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

#ifndef __CC13XX_INIT_LIB_H__
#define __CC13XX_INIT_LIB_H__


/******************************************************************************
* If building with a C++ compiler, make all of the definitions in this header
* have a C binding.
******************************************************************************/
#ifdef __cplusplus
extern "C"
{
#endif


/******************************************************************************
* INCLUDES
*/
#include "stdint.h"

/******************************************************************************
* TYPEDEFS
*/
  
enum InitLibStatus {
  InitLibStatus_Ok,
  InitLibStatus_Error = 0x80,
  InitLibStatus_RadioCommunicationError,
};

enum InitLibSynthMode {
  InitLibSynthMode_RX,
  InitLibSynthMode_TX,
};

enum InitLibRadioMode {
  InitLibRadioMode_GenFsk,
  InitLibRadioMode_CW,
};

/******************************************************************************
* API
*/
extern void InitLib_startUpTrimming(void);
extern enum InitLibStatus InitLib_switchToXtal(void);
//extern 
enum InitLibStatus InitLib_startAndCalibrateSynth(uint32_t frequency, 
                                                         uint8_t divider,
                                                         enum InitLibRadioMode radioMode,
                                                         enum InitLibSynthMode synthMode,
                                                         uint32_t crystalFrequency);
extern void InitLib_shutdownSynth(void);

#ifdef __cplusplus
}
#endif
#endif // __PER_TEST_H__