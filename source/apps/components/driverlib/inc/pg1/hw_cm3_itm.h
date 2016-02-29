
/******************************************************************************
*  Filename:       hw_cm3_itm.h
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
#ifndef __HW_CM3_ITM_H__
#define __HW_CM3_ITM_H__

//*****************************************************************************
//
// The following are defines for the CM3_ITM register offsets.
//
//*****************************************************************************
#define CM3_ITM_O_ITM_STIM0     0x00000000  // ITM Stimulus Port 0. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM1     0x00000004  // ITM Stimulus Port 1. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM2     0x00000008  // ITM Stimulus Port 2. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM3     0x0000000C  // ITM Stimulus Port 3. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM4     0x00000010  // ITM Stimulus Port 4. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM5     0x00000014  // ITM Stimulus Port 5. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM6     0x00000018  // ITM Stimulus Port 6. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM7     0x0000001C  // ITM Stimulus Port 7. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM8     0x00000020  // ITM Stimulus Port 8. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM9     0x00000024  // ITM Stimulus Port 9. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM10    0x00000028  // ITM Stimulus Port 10. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM11    0x0000002C  // ITM Stimulus Port 11. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM12    0x00000030  // ITM Stimulus Port 12. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM13    0x00000034  // ITM Stimulus Port 13. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM14    0x00000038  // ITM Stimulus Port 14. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM15    0x0000003C  // ITM Stimulus Port 15. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM16    0x00000040  // ITM Stimulus Port 16. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM17    0x00000044  // ITM Stimulus Port 17. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM18    0x00000048  // ITM Stimulus Port 18. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM19    0x0000004C  // ITM Stimulus Port 19. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM20    0x00000050  // ITM Stimulus Port 20. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM21    0x00000054  // ITM Stimulus Port 21. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM22    0x00000058  // ITM Stimulus Port 22. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM23    0x0000005C  // ITM Stimulus Port 23. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM24    0x00000060  // ITM Stimulus Port 24. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM25    0x00000064  // ITM Stimulus Port 25. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM26    0x00000068  // ITM Stimulus Port 26. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM27    0x0000006C  // ITM Stimulus Port 27. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM28    0x00000070  // ITM Stimulus Port 28. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM29    0x00000074  // ITM Stimulus Port 29. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM30    0x00000078  // ITM Stimulus Port 30. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_STIM31    0x0000007C  // ITM Stimulus Port 31. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 
#define CM3_ITM_O_ITM_TER       0x00000E00  // ITM Trace Enable Register. Use 
                                            // the Trace Enable Register to 
                                            // generate trace data by writing 
                                            // to the corresponding stimulus 
                                            // port. Note: Privileged writes 
                                            // are accepted to this register if 
                                            // ITMENA is set. User writes are 
                                            // accepted to this register if 
                                            // ITMENA is set and the 
                                            // appropriate privilege mask is 
                                            // cleared. Privileged access to 
                                            // the stimulus ports enables an 
                                            // RTOS kernel to guarantee 
                                            // instrumentation slots or 
                                            // bandwidth as required. 
#define CM3_ITM_O_ITM_TPR       0x00000E40  // ITM Trace Privilege Register. 
                                            // Use the ITM Trace Privilege 
                                            // Register to enable an operating 
                                            // system to control which stimulus 
                                            // ports are accessible by user 
                                            // code. Note: You can only write 
                                            // to this register in privileged 
                                            // mode. 
#define CM3_ITM_O_ITM_TCR       0x00000E80  // ITM Trace Control Register. Use 
                                            // this register to configure and 
                                            // control ITM transfers. Note 1: 
                                            // You can only write to this 
                                            // register in privilege mode. Note 
                                            // 2: DWT is not enabled in the ITM 
                                            // block. However, DWT stimulus 
                                            // entry into the FIFO is 
                                            // controlled by DWTENA. If DWT 
                                            // requires timestamping, the TSSEN 
                                            // bit must be set. 
#define CM3_ITM_O_ITM_IWR       0x00000EF8  // ITM Integration Write Register. 
                                            // Use this register to determine 
                                            // the behavior of the ATVALIDM 
                                            // bit. Note: Bit [0] drives 
                                            // ATVALIDM when mode is set. 
#define CM3_ITM_O_ITM_IMCR      0x00000F00  // ITM Integration Mode Control 
                                            // Register. Use this register to 
                                            // enable write accesses to the 
                                            // Control Register. 
#define CM3_ITM_O_ITM_LAR       0x00000FB0  // ITM Lock Access Register. Use 
                                            // this register to prevent write 
                                            // accesses to the Control 
                                            // Register. 
#define CM3_ITM_O_ITM_LSR       0x00000FB4  // ITM Lock Status Register. Use 
                                            // this register to enable write 
                                            // accesses to the Control 
                                            // Register. 
#define CM3_ITM_O_PID4          0x00000FD0  // Peripheral identification 
                                            // register (PID4). 
#define CM3_ITM_O_PID5          0x00000FD4  // Peripheral identification 
                                            // register (PID5). 
#define CM3_ITM_O_PID6          0x00000FD8  // Peripheral identification 
                                            // register (PID6). 
#define CM3_ITM_O_PID7          0x00000FDC  // Peripheral identification 
                                            // register (PID7). 
#define CM3_ITM_O_PID0          0x00000FE0  // Peripheral identification 
                                            // register Bits 7:0 (PID0). 
#define CM3_ITM_O_PID1          0x00000FE4  // Peripheral identification 
                                            // register Bits 15:8 (PID1). 
#define CM3_ITM_O_PID2          0x00000FE8  // Peripheral identification 
                                            // register Bits 23:16 (PID2). 
#define CM3_ITM_O_PID3          0x00000FEC  // Peripheral identification 
                                            // register Bits 31:24 (PID3). 
#define CM3_ITM_O_CID0          0x00000FF0  // Component identification 
                                            // register Bits 7:0 (CID0). 
#define CM3_ITM_O_CID1          0x00000FF4  // Component identification 
                                            // register Bits 15:8 (CID1). 
#define CM3_ITM_O_CID2          0x00000FF8  // Component identification 
                                            // register Bits 23:16 (CID2). 
#define CM3_ITM_O_CID3          0x00000FFC  // Component identification 
                                            // register Bits 31:24 (CID3). 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM0 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM0_ITM_STIM0_M \
                                0xFFFFFFFF  // ITM Stimulus Port 0. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM0_ITM_STIM0_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM1 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM1_ITM_STIM1_M \
                                0xFFFFFFFF  // ITM Stimulus Port 1. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM1_ITM_STIM1_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM2 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM2_ITM_STIM2_M \
                                0xFFFFFFFF  // ITM Stimulus Port 2. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM2_ITM_STIM2_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM3 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM3_ITM_STIM3_M \
                                0xFFFFFFFF  // ITM Stimulus Port 3. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM3_ITM_STIM3_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM4 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM4_ITM_STIM4_M \
                                0xFFFFFFFF  // ITM Stimulus Port 4. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM4_ITM_STIM4_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM5 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM5_ITM_STIM5_M \
                                0xFFFFFFFF  // ITM Stimulus Port 5. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM5_ITM_STIM5_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM6 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM6_ITM_STIM6_M \
                                0xFFFFFFFF  // ITM Stimulus Port 6. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM6_ITM_STIM6_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM7 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM7_ITM_STIM7_M \
                                0xFFFFFFFF  // ITM Stimulus Port 7. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM7_ITM_STIM7_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM8 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM8_ITM_STIM8_M \
                                0xFFFFFFFF  // ITM Stimulus Port 8. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM8_ITM_STIM8_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM9 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM9_ITM_STIM9_M \
                                0xFFFFFFFF  // ITM Stimulus Port 9. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM9_ITM_STIM9_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM10 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM10_ITM_STIM10_M \
                                0xFFFFFFFF  // ITM Stimulus Port 10. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM10_ITM_STIM10_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM11 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM11_ITM_STIM11_M \
                                0xFFFFFFFF  // ITM Stimulus Port 11. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM11_ITM_STIM11_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM12 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM12_ITM_STIM12_M \
                                0xFFFFFFFF  // ITM Stimulus Port 12. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM12_ITM_STIM12_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM13 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM13_ITM_STIM13_M \
                                0xFFFFFFFF  // ITM Stimulus Port 13. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM13_ITM_STIM13_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM14 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM14_ITM_STIM14_M \
                                0xFFFFFFFF  // ITM Stimulus Port 14. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM14_ITM_STIM14_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM15 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM15_ITM_STIM15_M \
                                0xFFFFFFFF  // ITM Stimulus Port 15. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM15_ITM_STIM15_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM16 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM16_ITM_STIM16_M \
                                0xFFFFFFFF  // ITM Stimulus Port 16. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM16_ITM_STIM16_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM17 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM17_ITM_STIM17_M \
                                0xFFFFFFFF  // ITM Stimulus Port 17. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM17_ITM_STIM17_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM18 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM18_ITM_STIM18_M \
                                0xFFFFFFFF  // ITM Stimulus Port 18. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM18_ITM_STIM18_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM19 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM19_ITM_STIM19_M \
                                0xFFFFFFFF  // ITM Stimulus Port 19. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM19_ITM_STIM19_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM20 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM20_ITM_STIM20_M \
                                0xFFFFFFFF  // ITM Stimulus Port 20. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM20_ITM_STIM20_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM21 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM21_ITM_STIM21_M \
                                0xFFFFFFFF  // ITM Stimulus Port 21. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM21_ITM_STIM21_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM22 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM22_ITM_STIM22_M \
                                0xFFFFFFFF  // ITM Stimulus Port 22. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM22_ITM_STIM22_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM23 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM23_ITM_STIM23_M \
                                0xFFFFFFFF  // ITM Stimulus Port 23. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM23_ITM_STIM23_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM24 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM24_ITM_STIM24_M \
                                0xFFFFFFFF  // ITM Stimulus Port 24. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM24_ITM_STIM24_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM25 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM25_ITM_STIM25_M \
                                0xFFFFFFFF  // ITM Stimulus Port 25. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM25_ITM_STIM25_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM26 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM26_ITM_STIM26_M \
                                0xFFFFFFFF  // ITM Stimulus Port 26. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM26_ITM_STIM26_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM27 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM27_ITM_STIM27_M \
                                0xFFFFFFFF  // ITM Stimulus Port 27. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM27_ITM_STIM27_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM28 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM28_ITM_STIM28_M \
                                0xFFFFFFFF  // ITM Stimulus Port 28. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM28_ITM_STIM28_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM29 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM29_ITM_STIM29_M \
                                0xFFFFFFFF  // ITM Stimulus Port 29. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM29_ITM_STIM29_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM30 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM30_ITM_STIM30_M \
                                0xFFFFFFFF  // ITM Stimulus Port 30. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM30_ITM_STIM30_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_STIM31 register.
//
//*****************************************************************************
#define CM3_ITM_ITM_STIM31_ITM_STIM31_M \
                                0xFFFFFFFF  // ITM Stimulus Port 31. Each of 
                                            // the 32 stimulus ports has its 
                                            // own address. A write to one of 
                                            // these locations causes data to 
                                            // be written into the FIFO if the 
                                            // corresponding bit in the Trace 
                                            // Enable Register is set. Reading 
                                            // from any of the stimulus ports 
                                            // returns the FIFO status in bit 
                                            // [0]: 0 = full, 1 = not full. The 
                                            // polled FIFO interface does not 
                                            // provide an atomic 
                                            // read-modify-write, so you must 
                                            // use the Cortex-M3 exclusive 
                                            // monitor if a polled printf is 
                                            // used concurrently with ITM usage 
                                            // by interrupts or other threads. 

#define CM3_ITM_ITM_STIM31_ITM_STIM31_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_TER register.
//
//*****************************************************************************
#define CM3_ITM_ITM_TER_STIMENA_M \
                                0xFFFFFFFF  // Bit mask to enable tracing on 
                                            // ITM stimulus ports. One bit per 
                                            // stimulus port. 

#define CM3_ITM_ITM_TER_STIMENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_TPR register.
//
//*****************************************************************************
#define CM3_ITM_ITM_TPR_PRIVMASK_M \
                                0x0000000F  // Bit mask to enable tracing on 
                                            // ITM stimulus ports: bit [0] = 
                                            // stimulus ports [7:0], bit [1] = 
                                            // stimulus ports [15:8], bit [2] = 
                                            // stimulus ports [23:16], bit [3] 
                                            // = stimulus ports [31:24]. 

#define CM3_ITM_ITM_TPR_PRIVMASK_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_TCR register.
//
//*****************************************************************************
#define CM3_ITM_ITM_TCR_BUSY    0x00800000  // Set when ITM events present and 
                                            // being drained. 
#define CM3_ITM_ITM_TCR_BUSY_M  0x00800000
#define CM3_ITM_ITM_TCR_BUSY_S  23
#define CM3_ITM_ITM_TCR_ATBID_M 0x007F0000  // ATB ID for CoreSight system. 
#define CM3_ITM_ITM_TCR_ATBID_S 16
#define CM3_ITM_ITM_TCR_TSPRESCALE_M \
                                0x00000300  // TSPrescale Timestamp prescaler. 
                                            // 0x0: No prescaling 0x1: Divide 
                                            // by 4 0x2: Divide by 16 0x3: 
                                            // Divide by 64 

#define CM3_ITM_ITM_TCR_TSPRESCALE_S 8
#define CM3_ITM_ITM_TCR_SWOENA  0x00000010  // Enables asynchronous clocking 
                                            // of the timestamp counter. 
#define CM3_ITM_ITM_TCR_SWOENA_M \
                                0x00000010
#define CM3_ITM_ITM_TCR_SWOENA_S 4
#define CM3_ITM_ITM_TCR_DWTENA  0x00000008  // Enables the DWT stimulus. 
#define CM3_ITM_ITM_TCR_DWTENA_M \
                                0x00000008
#define CM3_ITM_ITM_TCR_DWTENA_S 3
#define CM3_ITM_ITM_TCR_SYNCENA 0x00000004  // Enables sync packets for TPIU. 
#define CM3_ITM_ITM_TCR_SYNCENA_M \
                                0x00000004
#define CM3_ITM_ITM_TCR_SYNCENA_S 2
#define CM3_ITM_ITM_TCR_TSENA   0x00000002  // Enables differential 
                                            // timestamps. Differential 
                                            // timestamps are emitted when a 
                                            // packet is written to the FIFO 
                                            // with a non-zero timestamp 
                                            // counter, and when the timestamp 
                                            // counter overflows. Timestamps 
                                            // are emitted during idle times 
                                            // after a fixed number of two 
                                            // million cycles. This provides a 
                                            // time reference for packets and 
                                            // inter-packet gaps. If SWOENA 
                                            // (bit [4]) is set, timestamps are 
                                            // triggered by activity on the 
                                            // internal trace bus only. In this 
                                            // case there is no regular 
                                            // timestamp output when the ITM is 
                                            // idle. 
#define CM3_ITM_ITM_TCR_TSENA_M 0x00000002
#define CM3_ITM_ITM_TCR_TSENA_S 1
#define CM3_ITM_ITM_TCR_ITMENA  0x00000001  // Enable ITM. This is the master 
                                            // enable, and must be set before 
                                            // ITM Stimulus and Trace Enable 
                                            // registers can be written. 
#define CM3_ITM_ITM_TCR_ITMENA_M \
                                0x00000001
#define CM3_ITM_ITM_TCR_ITMENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_IWR register.
//
//*****************************************************************************
#define CM3_ITM_ITM_IWR_ATVALIDM \
                                0x00000001  // When the integration mode is 
                                            // set: 0 = ATVALIDM clear. 1 = 
                                            // ATVALIDM set. 0x0: ATVALIDM 
                                            // clear 0x1: ATVALIDM set 

#define CM3_ITM_ITM_IWR_ATVALIDM_M \
                                0x00000001
#define CM3_ITM_ITM_IWR_ATVALIDM_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_IMCR register.
//
//*****************************************************************************
#define CM3_ITM_ITM_IMCR_INTEGRATION \
                                0x00000001  // 0x0: ATVALIDM normal 0x1: 
                                            // ATVALIDM driven from Integration 
                                            // Write Register 

#define CM3_ITM_ITM_IMCR_INTEGRATION_M \
                                0x00000001
#define CM3_ITM_ITM_IMCR_INTEGRATION_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_LAR register.
//
//*****************************************************************************
#define CM3_ITM_ITM_LAR_LOCK_ACCESS_M \
                                0xFFFFFFFF  // A privileged write of 
                                            // 0xC5ACCE55 enables more write 
                                            // access to Control Register 
                                            // 0xE00::0xFFC. An invalid write 
                                            // removes write access. 

#define CM3_ITM_ITM_LAR_LOCK_ACCESS_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_ITM_O_ITM_LSR register.
//
//*****************************************************************************
#define CM3_ITM_ITM_LSR_BYTEACC 0x00000004  // You cannot implement 8-bit lock 
                                            // accesses. 
#define CM3_ITM_ITM_LSR_BYTEACC_M \
                                0x00000004
#define CM3_ITM_ITM_LSR_BYTEACC_S 2
#define CM3_ITM_ITM_LSR_ACCESS  0x00000002  // Write access to component is 
                                            // blocked. All writes are ignored, 
                                            // reads are permitted. 
#define CM3_ITM_ITM_LSR_ACCESS_M \
                                0x00000002
#define CM3_ITM_ITM_LSR_ACCESS_S 1
#define CM3_ITM_ITM_LSR_PRESENT 0x00000001  // Indicates that a lock mechanism 
                                            // exists for this component. 
#define CM3_ITM_ITM_LSR_PRESENT_M \
                                0x00000001
#define CM3_ITM_ITM_LSR_PRESENT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_ITM_O_PID4 register.
//
//*****************************************************************************
#define CM3_ITM_PID4_PID4_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID4). 
#define CM3_ITM_PID4_PID4_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_ITM_O_PID5 register.
//
//*****************************************************************************
#define CM3_ITM_PID5_PID5_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID5). 
#define CM3_ITM_PID5_PID5_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_ITM_O_PID6 register.
//
//*****************************************************************************
#define CM3_ITM_PID6_PID6_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID6). 
#define CM3_ITM_PID6_PID6_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_ITM_O_PID7 register.
//
//*****************************************************************************
#define CM3_ITM_PID7_PID7_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID7). 
#define CM3_ITM_PID7_PID7_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_ITM_O_PID0 register.
//
//*****************************************************************************
#define CM3_ITM_PID0_PID0_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 7:0 (PID0). 
#define CM3_ITM_PID0_PID0_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_ITM_O_PID1 register.
//
//*****************************************************************************
#define CM3_ITM_PID1_PID1_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 15:8 (PID1). 
#define CM3_ITM_PID1_PID1_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_ITM_O_PID2 register.
//
//*****************************************************************************
#define CM3_ITM_PID2_PID2_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 23:16 (PID2). 
#define CM3_ITM_PID2_PID2_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_ITM_O_PID3 register.
//
//*****************************************************************************
#define CM3_ITM_PID3_PID3_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 31:24 (PID3). 
#define CM3_ITM_PID3_PID3_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_ITM_O_CID0 register.
//
//*****************************************************************************
#define CM3_ITM_CID0_CID0_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 7:0 (CID0). 
#define CM3_ITM_CID0_CID0_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_ITM_O_CID1 register.
//
//*****************************************************************************
#define CM3_ITM_CID1_CID1_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 15:8 (CID1). 
#define CM3_ITM_CID1_CID1_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_ITM_O_CID2 register.
//
//*****************************************************************************
#define CM3_ITM_CID2_CID2_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 23:16 (CID2). 
#define CM3_ITM_CID2_CID2_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_ITM_O_CID3 register.
//
//*****************************************************************************
#define CM3_ITM_CID3_CID3_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 31:24 (CID3). 
#define CM3_ITM_CID3_CID3_S     0


#endif // __HW_CM3_ITM_H__

