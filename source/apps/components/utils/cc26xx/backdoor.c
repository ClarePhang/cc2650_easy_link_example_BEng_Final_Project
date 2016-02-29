/******************************************************************************
*  Filename:       backdoor.c
*  Revised:        $Date: 2014-03-06 15:41:10 +0100 (to, 06 mar 2014) $
*  Revision:       $Revision: 12305 $
*
*  Description:    Backdoor implementation.
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

#include <stdbool.h>
#include <stdint.h>
#include "hw_types.h"
#include "hw_ints.h"
#include "cpu.h"
#include "prcm.h"
#include "ioc.h"
#include "gpio.h"
#include "backdoor.h"
#include "interrupt.h"

// We need intrinsic functions for IAR (if used in source code)
#ifdef __IAR_SYSTEMS_ICC__
#include <intrinsics.h>
#endif

//*****************************************************************************
//
//! \addtogroup backdoor_api
//! @{
//
//*****************************************************************************

typedef struct tBackdoor {
    uint32_t ui32Pin;
    uint32_t ui32Level;
} tBackdoor;

static tBackdoor g_tBackdoor; 
bool g_bBackdoorActivated;

//*****************************************************************************
//
//! Standard interrupt handler for the Flash development 'backdoor'.
//
//*****************************************************************************
void 
GPIOIntHandler(void)
{
    unsigned long ui32IoId;
    
    //
    // Convert the pin number go an IO Id
    //
#ifdef __IAR_SYSTEMS_ICC__
    ui32IoId = 31 - __CLZ(g_tBackdoor.ui32Pin);
#else
    ui32IoId = 0;
    while(!(g_tBackdoor.ui32Pin & (1 << ui32IoId)))
    {
    	ui32IoId++;
    }
#endif  
    
    //
    // Clear the interrupt
    // 
    IOCIntClear(ui32IoId);
    IOCIntDisable(ui32IoId);
    
    //
    // Activate the backdoor
    //
    BackdoorEnter();
}

//*****************************************************************************
//
//! Initializes a GPIO to function as backdoor. 
//!
//! \param ui32Pin is the pin to setup as backdoor
//! \param iu32TrigLevel is the pin value that triggers the backdoor.
//! \param iu32Mode is the pin value that triggers the backdoor.
//!
//! This function will initialize the specified GPIO to function as a backdoor.
//! The backdoor should be initialized and checked as the first thing the 
//! program does.
//!
//! The 'backdoor' can run in polled or interrupt mode. If using polled mode,
//! the program should query the backdoor before executing dobious code that 
//! might lock up the chip. If using interrupt mode, the backdoor can be 
//! triggered at any point in the program (before the chip locks...).
//! The two modes are selected using
//! - \b BACKDOOR_POLLED
//! - \b BACKDOOR_INTERRUPT
//!
//! The 'backdoor' is basically and endless loop, that conserves the chip in the
//! state it was in when the backdoor was triggered, allowing the debugger to 
//! access the device and erase faulty code.
//!
//! It is assumed that the caller has previously turned on the peripheral power
//! domain such that the GPIO module is powered.
//!
//! \return None.
//
//*****************************************************************************
void 
BackdoorInit(uint32_t ui32Pin, uint32_t ui32TrigLevel, uint32_t ui32Mode)
{
    uint32_t ui32IoConfig;
    uint32_t ui32IoId;
    
    //
    // Enable the GPIO peripheral module in run mode
    //
    PRCMPeripheralRunEnable(PRCM_PERIPH_GPIO);
    PRCMPeripheralSleepEnable(PRCM_PERIPH_GPIO);
    PRCMPeripheralDeepSleepEnable(PRCM_PERIPH_GPIO);
    PRCMLoadSet();
    while(!PRCMLoadGet())
    { }
    
    //
    // Convert the pin number to an IO Id
    //
#ifdef __IAR_SYSTEMS_ICC__
    ui32IoId = 31 - __CLZ(ui32Pin);
#else
    ui32IoId = 0;
    while(!(ui32Pin & (1 << ui32IoId)))
    {
    	ui32IoId++;
    }
#endif
    
    //
    // Disable and clear any pending interrupts
    //
    IOCIntDisable(ui32IoId);
    IOCIntClear(ui32IoId);
    
    //
    // Configure the IO...
    //
    ui32IoConfig = IOC_STD_INPUT & ~(IOC_NO_IOPULL | IOC_BOTH_EDGES);

    //
    // Check if using interrupt mode
    //
    if(ui32Mode == BACKDOOR_INTERRUPT)
    {
        g_bBackdoorActivated = false;     
        ui32IoConfig |= IOC_INT_ENABLE;
        if(ui32TrigLevel == 1) 
        {
            ui32IoConfig |= (IOC_RISING_EDGE | IOC_IOPULL_DOWN);
        }
        else 
        {
            ui32IoConfig |= (IOC_FALLING_EDGE | IOC_IOPULL_UP);
        }
        
        //
        // Enable global interrupts and edge interrupt
        //
        IntEnable(INT_EDGE_DETECT);
        IntMasterEnable();      
    }
    else
    {
        if(ui32TrigLevel == 1) 
        {
            ui32IoConfig |= IOC_IOPULL_DOWN;
        }
        else
        {
            ui32IoConfig |= IOC_IOPULL_UP;
        }
    }
    
    //
    // Write the configuration
    //
    GPIODirModeSet(ui32Pin, GPIO_DIR_MODE_IN);
    IOCPortConfigureSet(ui32IoId, IOC_PORT_GPIO, ui32IoConfig);
    
    //
    // Update the struct
    //
    g_tBackdoor.ui32Level = ui32TrigLevel;
    g_tBackdoor.ui32Pin = ui32Pin;
}

//*****************************************************************************
//
//! Query the state of the backdoor
//! 
//! If the backdoor is open, this function will never return.
//! 
//! \return None
//
//*****************************************************************************
void BackdoorOpen(void)
{
    //
    // Check backdoor
    //
    if((GPIOPinRead(g_tBackdoor.ui32Pin) ? 1 : 0) == g_tBackdoor.ui32Level)
    {
        BackdoorEnter();
    }
}

//*****************************************************************************
//
//! Endless 'backdoor' loop
//! 
//! \return Function will never return
//
//*****************************************************************************
void BackdoorEnter(void)
{
    //
    // Disable interrupts to ensure processor stays here...
    //
    IntMasterDisable();
    
    //
    // Loop forever
    //
    while(1)
    {
        PRCMSleep();
    }
}


//*****************************************************************************
//
//! Close the Doxygen group.
//! @}
//
//*****************************************************************************
