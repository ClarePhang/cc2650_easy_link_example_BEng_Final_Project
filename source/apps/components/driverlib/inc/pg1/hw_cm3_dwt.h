
/******************************************************************************
*  Filename:       hw_cm3_dwt.h
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
#ifndef __HW_CM3_DWT_H__
#define __HW_CM3_DWT_H__

//*****************************************************************************
//
// The following are defines for the CM3_DWT register offsets.
//
//*****************************************************************************
#define CM3_DWT_O_DWT_CTRL      0x00000000  // DWT Control Register. Use the 
                                            // DWT Control Register to enable 
                                            // the DWT unit. 
#define CM3_DWT_O_DWT_CYCCNT    0x00000004  // DWT Current PC Sampler Cycle 
                                            // Count Register. Use the DWT 
                                            // Current PC Sampler Cycle Count 
                                            // Register to count the number of 
                                            // core cycles. This count can 
                                            // measure elapsed execution time. 
                                            // This is a free-running counter. 
                                            // The counter has three functions: 
                                            // (1) When PCSAMPLENA is set, the 
                                            // PC is sampled and emitted when 
                                            // the selected tapped bit changes 
                                            // value (0 to 1 or 1 to 0) and any 
                                            // post-scalar value counts to 0. 
                                            // (2) When CYCEVTENA is set (and 
                                            // PCSAMPLENA is clear), an event 
                                            // is emitted when the selected 
                                            // tapped bit changes value (0 to 1 
                                            // or 1 to 0) and any post-scalar 
                                            // value counts to 0. (3) 
                                            // Applications and debuggers can 
                                            // use the counter to measure 
                                            // elapsed execution time. By 
                                            // subtracting a start and an end 
                                            // time, an application can measure 
                                            // time between in-core clocks 
                                            // (other than when Halted in 
                                            // debug). This is valid to 232 
                                            // core clock cycles (for example, 
                                            // almost 86 seconds at 50MHz). 
#define CM3_DWT_O_DWT_CPICNT    0x00000008  // DWT CPI Count Register. Use the 
                                            // DWT CPI Count Register to count 
                                            // the total number of instruction 
                                            // cycles beyond the first cycle. 
#define CM3_DWT_O_DWT_EXCCNT    0x0000000C  // DWT Exception Overhead Count 
                                            // Register. Use the DWT Exception 
                                            // Overhead Count Register to count 
                                            // the total cycles spent in 
                                            // interrupt processing. 
#define CM3_DWT_O_DWT_SLEEPCNT  0x00000010  // DWT Sleep Count Register. Use 
                                            // the DWT Sleep Count Register to 
                                            // count the total number of cycles 
                                            // during which the processor is 
                                            // sleeping. 
#define CM3_DWT_O_DWT_LSUCNT    0x00000014  // DWT LSU Count Register. Use the 
                                            // DWT LSU Count Register to count 
                                            // the total number of cycles 
                                            // during which the processor is 
                                            // processing an LSU operation 
                                            // beyond the first cycle. 
#define CM3_DWT_O_DWT_FOLDCNT   0x00000018  // DWT Fold Count Register. Use 
                                            // the DWT Fold Count Register to 
                                            // count the total number of folded 
                                            // instructions. This counts 1 for 
                                            // each instruction that takes 0 
                                            // cycles. 
#define CM3_DWT_O_DWT_PCSR      0x0000001C  // DWT Program Counter Sample 
                                            // Register. Use the DWT Program 
                                            // Counter Sample Register (PCSR) 
                                            // to enable coarse-grained 
                                            // software profiling using a debug 
                                            // agent, without changing the 
                                            // currently executing code. If the 
                                            // core is not in debug state, the 
                                            // value returned is the 
                                            // instruction address of a 
                                            // recently executed instruction. 
                                            // If the core is in debug state, 
                                            // the value returned is 
                                            // 0xFFFFFFFF. 
#define CM3_DWT_O_DWT_COMP0     0x00000020  // DWT Comparator Register 0. Use 
                                            // the DWT Comparator Registers 0-3 
                                            // to write the values that trigger 
                                            // watchpoint events. 
#define CM3_DWT_O_DWT_MASK0     0x00000024  // DWT Mask Register 0. Use the 
                                            // DWT Mask Registers 0-3 to apply 
                                            // a mask to data addresses when 
                                            // matching against COMP. 
#define CM3_DWT_O_DWT_FUNCTION0 0x00000028  // DWT Function Register 0. Use 
                                            // the DWT Function Registers 0-3 
                                            // to control the operation of the 
                                            // comparator. Each comparator can: 
                                            // 1. Match against either the PC 
                                            // or the data address. This is 
                                            // controlled by CYCMATCH. This 
                                            // function is only available for 
                                            // comparator 0 (DWT_COMP0). 2. 
                                            // Perform data value comparisons 
                                            // if associated address 
                                            // comparators have performed an 
                                            // address match. This function is 
                                            // only available for comparator 1 
                                            // (DWT_COMP1). 3. Emit data or PC 
                                            // couples, trigger the ETM, or 
                                            // generate a watchpoint depending 
                                            // on the operation defined by 
                                            // FUNCTION. 
#define CM3_DWT_O_DWT_COMP1     0x00000030  // DWT Comparator Register 1. Use 
                                            // the DWT Comparator Registers 0-3 
                                            // to write the values that trigger 
                                            // watchpoint events. 
#define CM3_DWT_O_DWT_MASK1     0x00000034  // DWT Mask Register 1. Use the 
                                            // DWT Mask Registers 0-3 to apply 
                                            // a mask to data addresses when 
                                            // matching against COMP. 
#define CM3_DWT_O_DWT_FUNCTION1 0x00000038  // DWT Function Register 1. Use 
                                            // the DWT Function Registers 0-3 
                                            // to control the operation of the 
                                            // comparator. Each comparator can: 
                                            // 1. Match against either the PC 
                                            // or the data address. This is 
                                            // controlled by CYCMATCH. This 
                                            // function is only available for 
                                            // comparator 0 (DWT_COMP0). 2. 
                                            // Perform data value comparisons 
                                            // if associated address 
                                            // comparators have performed an 
                                            // address match. This function is 
                                            // only available for comparator 1 
                                            // (DWT_COMP1). 3. Emit data or PC 
                                            // couples, trigger the ETM, or 
                                            // generate a watchpoint depending 
                                            // on the operation defined by 
                                            // FUNCTION. 
#define CM3_DWT_O_DWT_COMP2     0x00000040  // DWT Comparator Register 2. Use 
                                            // the DWT Comparator Registers 0-3 
                                            // to write the values that trigger 
                                            // watchpoint events. 
#define CM3_DWT_O_DWT_MASK2     0x00000044  // DWT Mask Register 2. Use the 
                                            // DWT Mask Registers 0-3 to apply 
                                            // a mask to data addresses when 
                                            // matching against COMP. 
#define CM3_DWT_O_DWT_FUNCTION2 0x00000048  // DWT Function Register 2. Use 
                                            // the DWT Function Registers 0-3 
                                            // to control the operation of the 
                                            // comparator. Each comparator can: 
                                            // 1. Match against either the PC 
                                            // or the data address. This is 
                                            // controlled by CYCMATCH. This 
                                            // function is only available for 
                                            // comparator 0 (DWT_COMP0). 2. 
                                            // Perform data value comparisons 
                                            // if associated address 
                                            // comparators have performed an 
                                            // address match. This function is 
                                            // only available for comparator 1 
                                            // (DWT_COMP1). 3. Emit data or PC 
                                            // couples, trigger the ETM, or 
                                            // generate a watchpoint depending 
                                            // on the operation defined by 
                                            // FUNCTION. 
#define CM3_DWT_O_DWT_COMP3     0x00000050  // DWT Comparator Register 3. Use 
                                            // the DWT Comparator Registers 0-3 
                                            // to write the values that trigger 
                                            // watchpoint events. 
#define CM3_DWT_O_DWT_MASK3     0x00000054  // DWT Mask Register 3. Use the 
                                            // DWT Mask Registers 0-3 to apply 
                                            // a mask to data addresses when 
                                            // matching against COMP. 
#define CM3_DWT_O_DWT_FUNCTION3 0x00000058  // DWT Function Register 3. Use 
                                            // the DWT Function Registers 0-3 
                                            // to control the operation of the 
                                            // comparator. Each comparator can: 
                                            // 1. Match against either the PC 
                                            // or the data address. This is 
                                            // controlled by CYCMATCH. This 
                                            // function is only available for 
                                            // comparator 0 (DWT_COMP0). 2. 
                                            // Perform data value comparisons 
                                            // if associated address 
                                            // comparators have performed an 
                                            // address match. This function is 
                                            // only available for comparator 1 
                                            // (DWT_COMP1). 3. Emit data or PC 
                                            // couples, trigger the ETM, or 
                                            // generate a watchpoint depending 
                                            // on the operation defined by 
                                            // FUNCTION. 
#define CM3_DWT_O_PID4          0x00000FD0  // Peripheral identification 
                                            // register (PID4). 
#define CM3_DWT_O_PID5          0x00000FD4  // Peripheral identification 
                                            // register (PID5). 
#define CM3_DWT_O_PID6          0x00000FD8  // Peripheral identification 
                                            // register (PID6). 
#define CM3_DWT_O_PID7          0x00000FDC  // Peripheral identification 
                                            // register (PID7). 
#define CM3_DWT_O_PID0          0x00000FE0  // Peripheral identification 
                                            // register Bits 7:0 (PID0). 
#define CM3_DWT_O_PID1          0x00000FE4  // Peripheral identification 
                                            // register Bits 15:8 (PID1). 
#define CM3_DWT_O_PID2          0x00000FE8  // Peripheral identification 
                                            // register Bits 23:16 (PID2). 
#define CM3_DWT_O_PID3          0x00000FEC  // Peripheral identification 
                                            // register Bits 31:24 (PID3). 
#define CM3_DWT_O_CID0          0x00000FF0  // Component identification 
                                            // register Bits 7:0 (CID0). 
#define CM3_DWT_O_CID1          0x00000FF4  // Component identification 
                                            // register Bits 15:8 (CID1). 
#define CM3_DWT_O_CID2          0x00000FF8  // Component identification 
                                            // register Bits 23:16 (CID2). 
#define CM3_DWT_O_CID3          0x00000FFC  // Component identification 
                                            // register Bits 31:24 (CID3). 


//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_CTRL register.
//
//*****************************************************************************
#define CM3_DWT_DWT_CTRL_NOCYCCNT \
                                0x02000000  // When set, DWT_CYCCNT is not 
                                            // supported. 

#define CM3_DWT_DWT_CTRL_NOCYCCNT_M \
                                0x02000000
#define CM3_DWT_DWT_CTRL_NOCYCCNT_S 25
#define CM3_DWT_DWT_CTRL_NOPRFCNT \
                                0x01000000  // When set, DWT_FOLDCNT, 
                                            // DWT_LSUCNT, DWT_SLEEPCNT, 
                                            // DWT_EXCCNT, and DWT_CPICNT are 
                                            // not supported. 

#define CM3_DWT_DWT_CTRL_NOPRFCNT_M \
                                0x01000000
#define CM3_DWT_DWT_CTRL_NOPRFCNT_S 24
#define CM3_DWT_DWT_CTRL_CYCEVTENA \
                                0x00400000  // Enables Cycle count event. 
                                            // Emits an event when the POSTCNT 
                                            // counter triggers it. See CYCTAP 
                                            // (bit [9]) and POSTPRESET, bits 
                                            // [4:1], for details. This event 
                                            // is only emitted if PCSAMPLENA, 
                                            // bit [12], is disabled. 
                                            // PCSAMPLENA overrides the setting 
                                            // of this bit. Reset clears the 
                                            // CYCEVTENA bit. 0x0: Cycle count 
                                            // events disabled. 0x1: Cycle 
                                            // count events enabled. 

#define CM3_DWT_DWT_CTRL_CYCEVTENA_M \
                                0x00400000
#define CM3_DWT_DWT_CTRL_CYCEVTENA_S 22
#define CM3_DWT_DWT_CTRL_FOLDEVTENA \
                                0x00200000  // Enables Folded instruction 
                                            // count event. Emits an event when 
                                            // DWT_FOLDCNT overflows (every 256 
                                            // cycles of folded instructions). 
                                            // A folded instruction is one that 
                                            // does not incur even one cycle to 
                                            // execute. For example, an IT 
                                            // instruction is folded away and 
                                            // so does not use up one cycle. 
                                            // Reset clears the FOLDEVTENA bit. 
                                            // 0x0: Folded instruction count 
                                            // events disabled. 0x1: Folded 
                                            // instruction count events 
                                            // enabled. 

#define CM3_DWT_DWT_CTRL_FOLDEVTENA_M \
                                0x00200000
#define CM3_DWT_DWT_CTRL_FOLDEVTENA_S 21
#define CM3_DWT_DWT_CTRL_LSUEVTENA \
                                0x00100000  // Enables LSU count event. Emits 
                                            // an event when DWT_LSUCNT 
                                            // overflows (every 256 cycles of 
                                            // LSU operation). LSU counts 
                                            // include all LSU costs after the 
                                            // initial cycle for the 
                                            // instruction. Reset clears the 
                                            // LSUEVTENA bit. 0x0: LSU count 
                                            // events disabled. 0x1: LSU count 
                                            // events enabled. 

#define CM3_DWT_DWT_CTRL_LSUEVTENA_M \
                                0x00100000
#define CM3_DWT_DWT_CTRL_LSUEVTENA_S 20
#define CM3_DWT_DWT_CTRL_SLEEPEVTENA \
                                0x00080000  // Enables Sleep count event. 
                                            // Emits an event when DWT_SLEEPCNT 
                                            // overflows (every 256 cycles that 
                                            // the processor is sleeping). 
                                            // Reset clears the SLEEPEVTENA 
                                            // bit. 0x0: Sleep count events 
                                            // disabled. 0x1: Sleep count 
                                            // events enabled. 

#define CM3_DWT_DWT_CTRL_SLEEPEVTENA_M \
                                0x00080000
#define CM3_DWT_DWT_CTRL_SLEEPEVTENA_S 19
#define CM3_DWT_DWT_CTRL_EXCEVTENA \
                                0x00040000  // Enables Interrupt overhead 
                                            // event. Emits an event when 
                                            // DWT_EXCCNT overflows (every 256 
                                            // cycles of interrupt overhead). 
                                            // Reset clears the EXCEVTENA bit. 
                                            // 0x0: Interrupt overhead event 
                                            // disabled. 0x1: Interrupt 
                                            // overhead event enabled. 

#define CM3_DWT_DWT_CTRL_EXCEVTENA_M \
                                0x00040000
#define CM3_DWT_DWT_CTRL_EXCEVTENA_S 18
#define CM3_DWT_DWT_CTRL_CPIEVTENA \
                                0x00020000  // Enables CPI count event. Emits 
                                            // an event when DWT_CPICNT 
                                            // overflows (every 256 cycles of 
                                            // multi-cycle instructions). Reset 
                                            // clears the CPIEVTENA bit. 0x0: 
                                            // CPI counter events disabled. 
                                            // 0x1: CPI counter events enabled. 

#define CM3_DWT_DWT_CTRL_CPIEVTENA_M \
                                0x00020000
#define CM3_DWT_DWT_CTRL_CPIEVTENA_S 17
#define CM3_DWT_DWT_CTRL_EXCTRCENA \
                                0x00010000  // Enables Interrupt event 
                                            // tracing. Reset clears the 
                                            // EXCEVTENA bit. 0x0: Interrupt 
                                            // event trace disabled. 0x1: 
                                            // Interrupt event trace enabled. 

#define CM3_DWT_DWT_CTRL_EXCTRCENA_M \
                                0x00010000
#define CM3_DWT_DWT_CTRL_EXCTRCENA_S 16
#define CM3_DWT_DWT_CTRL_PCSAMPLEENA \
                                0x00001000  // Enables PC Sampling event. A PC 
                                            // sample event is emitted when the 
                                            // POSTCNT counter triggers it. See 
                                            // CYCTAP, bit [9], and POSTPRESET, 
                                            // bits [4:1], for details. 
                                            // Enabling this bit overrides 
                                            // CYCEVTENA (bit [20]). Reset 
                                            // clears the PCSAMPLENA bit. 0x0: 
                                            // PC Sampling event disabled. 0x1: 
                                            // Sampling event enabled. 

#define CM3_DWT_DWT_CTRL_PCSAMPLEENA_M \
                                0x00001000
#define CM3_DWT_DWT_CTRL_PCSAMPLEENA_S 12
#define CM3_DWT_DWT_CTRL_SYNCTAP_M \
                                0x00000C00  // Feeds a synchronization pulse 
                                            // to the ITM SYNCENA control. The 
                                            // value selected here picks the 
                                            // rate (approximately 1/second or 
                                            // less) by selecting a tap on the 
                                            // DWT_CYCCNT register. To use 
                                            // synchronization (heartbeat and 
                                            // hot-connect synchronization), 
                                            // CYCCNTENA must be set to 1, 
                                            // SYNCTAP must be set to one of 
                                            // its values, and SYNCENA must be 
                                            // set to 1. 0x0: Disabled. No 
                                            // synch counting. 0x1: Tap at 
                                            // CYCCNT bit 24. 0x2: Tap at 
                                            // CYCCNT bit 26. 0x3: Tap at 
                                            // CYCCNT bit 28. 

#define CM3_DWT_DWT_CTRL_SYNCTAP_S 10
#define CM3_DWT_DWT_CTRL_CYCTAP 0x00000200  // Selects a tap on the DWT_CYCCNT 
                                            // register. These are spaced at 
                                            // bits [6] and [10]. When the 
                                            // selected bit in the CYCCNT 
                                            // register changes from 0 to 1 or 
                                            // 1 to 0, it emits into the 
                                            // POSTCNT, bits [8:5], post-scalar 
                                            // counter. That counter then 
                                            // counts down. On a bit change 
                                            // when post-scalar is 0, it 
                                            // triggers an event for PC 
                                            // sampling or CYCEVTCNT. 0x0: 
                                            // Selects bit [6] to tap 0x1: 
                                            // Selects bit [10] to tap. 
#define CM3_DWT_DWT_CTRL_CYCTAP_M \
                                0x00000200
#define CM3_DWT_DWT_CTRL_CYCTAP_S 9
#define CM3_DWT_DWT_CTRL_POSTCNT_M \
                                0x000001E0  // Post-scalar counter for CYCTAP. 
                                            // When the selected tapped bit 
                                            // changes from 0 to 1 or 1 to 0, 
                                            // the post scalar counter is 
                                            // down-counted when not 0. If 0, 
                                            // it triggers an event for 
                                            // PCSAMPLENA or CYCEVTENA use. It 
                                            // also reloads with the value from 
                                            // POSTPRESET (bits [4:1]). 

#define CM3_DWT_DWT_CTRL_POSTCNT_S 5
#define CM3_DWT_DWT_CTRL_POSTPRESET_M \
                                0x0000001E  // Reload value for POSTCNT, bits 
                                            // [8:5], post-scalar counter. If 
                                            // this value is 0, events are 
                                            // triggered on each tap change (a 
                                            // power of 2). If this field has a 
                                            // non-0 value, this forms a 
                                            // count-down value, to be reloaded 
                                            // into POSTCNT each time it 
                                            // reaches 0. For example, a value 
                                            // 1 in this register means an 
                                            // event is formed every other tap 
                                            // change. 

#define CM3_DWT_DWT_CTRL_POSTPRESET_S 1
#define CM3_DWT_DWT_CTRL_CYCCNTENA \
                                0x00000001  // Enable the CYCCNT counter. If 
                                            // not enabled, the counter does 
                                            // not count and no event is 
                                            // generated for PS sampling or 
                                            // CYCCNTENA. In normal use, the 
                                            // debugger must initialize the 
                                            // CYCCNT counter to 0. 

#define CM3_DWT_DWT_CTRL_CYCCNTENA_M \
                                0x00000001
#define CM3_DWT_DWT_CTRL_CYCCNTENA_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_CYCCNT register.
//
//*****************************************************************************
#define CM3_DWT_DWT_CYCCNT_CYCCNT_M \
                                0xFFFFFFFF  // Current PC Sampler Cycle 
                                            // Counter count value. When 
                                            // enabled, this counter counts the 
                                            // number of core cycles, except 
                                            // when the core is halted. CYCCNT 
                                            // is a free running counter, 
                                            // counting upwards. It wraps 
                                            // around to 0 on overflow. The 
                                            // debugger must initialize this to 
                                            // 0 when first enabling. 

#define CM3_DWT_DWT_CYCCNT_CYCCNT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_CPICNT register.
//
//*****************************************************************************
#define CM3_DWT_DWT_CPICNT_CPICNT_M \
                                0x000000FF  // Current CPI counter value. 
                                            // Increments on the additional 
                                            // cycles (the first cycle is not 
                                            // counted) required to execute all 
                                            // instructions except those 
                                            // recorded by DWT_LSUCNT. This 
                                            // counter also increments on all 
                                            // instruction fetch stalls. If 
                                            // CPIEVTENA is set, an event is 
                                            // emitted when the counter 
                                            // overflows. Clears to 0 on 
                                            // enabling. 

#define CM3_DWT_DWT_CPICNT_CPICNT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_EXCCNT register.
//
//*****************************************************************************
#define CM3_DWT_DWT_EXCCNT_EXCCNT_M \
                                0x000000FF  // Current interrupt overhead 
                                            // counter value. Counts the total 
                                            // cycles spent in interrupt 
                                            // processing (for example entry 
                                            // stacking, return unstacking, 
                                            // pre-emption). An event is 
                                            // emitted on counter overflow 
                                            // (every 256 cycles). This counter 
                                            // initializes to 0 when enabled. 
                                            // Clears to 0 on enabling. 

#define CM3_DWT_DWT_EXCCNT_EXCCNT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_SLEEPCNT register.
//
//*****************************************************************************
#define CM3_DWT_DWT_SLEEPCNT_SLEEPCNT_M \
                                0x000000FF  // Sleep counter. Counts the 
                                            // number of cycles during which 
                                            // the processor is sleeping. An 
                                            // event is emitted on counter 
                                            // overflow (every 256 cycles). 
                                            // This counter initializes to 0 
                                            // when enabled. Note that SLEEPCNT 
                                            // is clocked using FCLK. It is 
                                            // possible that the frequency of 
                                            // FCLK might be reduced while the 
                                            // processor is sleeping to 
                                            // minimize power consumption. This 
                                            // means that sleep duration must 
                                            // be calculated with the frequency 
                                            // of FCLK during sleep. 

#define CM3_DWT_DWT_SLEEPCNT_SLEEPCNT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_LSUCNT register.
//
//*****************************************************************************
#define CM3_DWT_DWT_LSUCNT_LSUCNT_M \
                                0x000000FF  // LSU counter. This counts the 
                                            // total number of cycles that the 
                                            // processor is processing an LSU 
                                            // operation. The initial execution 
                                            // cost of the instruction is not 
                                            // counted. For example, an LDR 
                                            // that takes two cycles to 
                                            // complete increments this counter 
                                            // one cycle. Equivalently, an LDR 
                                            // that stalls for two cycles (and 
                                            // so takes four cycles), 
                                            // increments this counter three 
                                            // times. An event is emitted on 
                                            // counter overflow (every 256 
                                            // cycles). Clears to 0 on 
                                            // enabling. 

#define CM3_DWT_DWT_LSUCNT_LSUCNT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_FOLDCNT register.
//
//*****************************************************************************
#define CM3_DWT_DWT_FOLDCNT_FOLDCNT_M \
                                0x000000FF  // This counts the total number 
                                            // folded instructions. This 
                                            // counter initializes to 0 when 
                                            // enabled. 

#define CM3_DWT_DWT_FOLDCNT_FOLDCNT_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_PCSR register.
//
//*****************************************************************************
#define CM3_DWT_DWT_PCSR_EIASAMPLE_M \
                                0xFFFFFFFF  // Execution instruction address 
                                            // sample, or 0xFFFFFFFF if the 
                                            // core is halted. 

#define CM3_DWT_DWT_PCSR_EIASAMPLE_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_COMP0 register.
//
//*****************************************************************************
#define CM3_DWT_DWT_COMP0_COMP_M \
                                0xFFFFFFFF  // Data value to compare against 
                                            // PC and the data address as given 
                                            // by DWT_FUNCTION0. DWT_COMP0 can 
                                            // also compare against the value 
                                            // of the PC Sampler Counter 
                                            // (DWT_CYCCNT). 

#define CM3_DWT_DWT_COMP0_COMP_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_MASK0 register.
//
//*****************************************************************************
#define CM3_DWT_DWT_MASK0_MASK_M \
                                0x0000000F  // Mask on data address when 
                                            // matching against COMP. This is 
                                            // the size of the ignore mask. hat 
                                            // is, DWT matching is performed 
                                            // as:(ADDR ANDed with (~0 left 
                                            // bit-shifted by MASK)) == COMP. 
                                            // However, the actual comparison 
                                            // is slightly more complex to 
                                            // enable matching an address 
                                            // wherever it appears on a bus. 
                                            // So, if COMP is 3, this matches a 
                                            // word access of 0, because 3 
                                            // would be within the word. 

#define CM3_DWT_DWT_MASK0_MASK_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_FUNCTION0 register.
//
//*****************************************************************************
#define CM3_DWT_DWT_FUNCTION0_MATCHED \
                                0x01000000  // This bit is set when the 
                                            // comparator matches, and 
                                            // indicates that the operation 
                                            // defined by FUNCTION has occurred 
                                            // since this bit was last read. 
                                            // This bit is cleared on read. 

#define CM3_DWT_DWT_FUNCTION0_MATCHED_M \
                                0x01000000
#define CM3_DWT_DWT_FUNCTION0_MATCHED_S 24
#define CM3_DWT_DWT_FUNCTION0_DATAVADDR1_M \
                                0x000F0000  // Identity of a second linked 
                                            // address comparator for data 
                                            // value matching when DATAVMATCH 
                                            // == 1 and LNK1ENA == 1. 

#define CM3_DWT_DWT_FUNCTION0_DATAVADDR1_S 16
#define CM3_DWT_DWT_FUNCTION0_DATAVADDR0_M \
                                0x0000F000  // Identity of a linked address 
                                            // comparator for data value 
                                            // matching when DATAVMATCH == 1. 

#define CM3_DWT_DWT_FUNCTION0_DATAVADDR0_S 12
#define CM3_DWT_DWT_FUNCTION0_DATAVSIZE_M \
                                0x00000C00  // Defines the size of the data in 
                                            // the COMP register that is to be 
                                            // matched: 0x0: Byte 0x1: Halfword 
                                            // 0x2: Word 0x3: Unpredictable. 

#define CM3_DWT_DWT_FUNCTION0_DATAVSIZE_S 10
#define CM3_DWT_DWT_FUNCTION0_LNK1ENA \
                                0x00000200  // 0x0: DATAVADDR1 not supported 
                                            // 0x1: DATAVADDR1 supported 
                                            // (enabled). 

#define CM3_DWT_DWT_FUNCTION0_LNK1ENA_M \
                                0x00000200
#define CM3_DWT_DWT_FUNCTION0_LNK1ENA_S 9
#define CM3_DWT_DWT_FUNCTION0_DATAVMATCH \
                                0x00000100  // This bit is only available in 
                                            // comparator 1. When DATAVMATCH is 
                                            // set, this comparator performs 
                                            // data value compares. The 
                                            // comparators given by DATAVADDR0 
                                            // and DATAVADDR1provide the 
                                            // address for the data comparison. 
                                            // If DATAVMATCH is set in 
                                            // DWT_FUNCTION1, the FUNCTION 
                                            // setting for the comparators 
                                            // given by DATAVADDR0 and 
                                            // DATAVADDR1 are overridden and 
                                            // those comparators only provide 
                                            // the address match for the data 
                                            // comparison. 

#define CM3_DWT_DWT_FUNCTION0_DATAVMATCH_M \
                                0x00000100
#define CM3_DWT_DWT_FUNCTION0_DATAVMATCH_S 8
#define CM3_DWT_DWT_FUNCTION0_EMITRANGE \
                                0x00000020  // Emit range field. Reserved to 
                                            // permit emitting offset when 
                                            // range match occurs. Reset clears 
                                            // the EMITRANGE bit. PC sampling 
                                            // is not supported when EMITRANGE 
                                            // is enabled. EMITRANGE only 
                                            // applies for: FUNCTION = b0001, 
                                            // b0010, b0011, b1100, b1101, 
                                            // b1110, and b1111. 

#define CM3_DWT_DWT_FUNCTION0_EMITRANGE_M \
                                0x00000020
#define CM3_DWT_DWT_FUNCTION0_EMITRANGE_S 5
#define CM3_DWT_DWT_FUNCTION0_FUNCTION_M \
                                0x0000000F  // Function settings. Note 1: If 
                                            // the ETM is not fitted, then ETM 
                                            // trigger is not possible. Note 2: 
                                            // Data value is only sampled for 
                                            // accesses that do not fault (MPU 
                                            // or bus fault). The PC is sampled 
                                            // irrespective of any faults. The 
                                            // PC is only sampled for the first 
                                            // address of a burst. Note 3: PC 
                                            // match is not recommended for 
                                            // watchpoints because it stops 
                                            // after the instruction. It mainly 
                                            // guards and triggers the ETM. 
                                            // 0x0: Disabled 0x1: EMITRANGE = 
                                            // 0, sample and emit PC through 
                                            // ITM. EMITRANGE = 1, emit address 
                                            // offset through ITM 0x2: 
                                            // EMITRANGE = 0, emit data through 
                                            // ITM on read and write. EMITRANGE 
                                            // = 1, emit data and address 
                                            // offset through ITM on read or 
                                            // write. 0x3: EMITRANGE = 0, 
                                            // sample PC and data value through 
                                            // ITM on read or write. EMITRANGE 
                                            // = 1, emit address offset and 
                                            // data value through ITM on read 
                                            // or write. 0x4: Watchpoint on PC 
                                            // match. 0x5: Watchpoint on read. 
                                            // 0x6: Watchpoint on write. 0x7: 
                                            // Watchpoint on read or write. 
                                            // 0x8: ETM trigger on PC match 
                                            // 0x9: ETM trigger on read 0xA: 
                                            // ETM trigger on write 0xB: ETM 
                                            // trigger on read or write 0xC: 
                                            // EMITRANGE = 0, sample data for 
                                            // read transfers. EMITRANGE = 1, 
                                            // sample Daddr [15:0] for read 
                                            // transfers 0xD: EMITRANGE = 0, 
                                            // sample data for write transfers. 
                                            // EMITRANGE = 1, sample Daddr 
                                            // [15:0] for write transfers 0xE: 
                                            // EMITRANGE = 0, sample PC + data 
                                            // for read transfers. EMITRANGE = 
                                            // 1, sample Daddr [15:0] + data 
                                            // for read transfers 0XF: 
                                            // EMITRANGE = 0, sample PC + data 
                                            // for write transfers. EMITRANGE = 
                                            // 1, sample Daddr [15:0] + data 
                                            // for write transfers 

#define CM3_DWT_DWT_FUNCTION0_FUNCTION_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_COMP1 register.
//
//*****************************************************************************
#define CM3_DWT_DWT_COMP1_COMP_M \
                                0xFFFFFFFF  // Data value to compare against 
                                            // PC and the data address as given 
                                            // by DWT_FUNCTION1. 

#define CM3_DWT_DWT_COMP1_COMP_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_MASK1 register.
//
//*****************************************************************************
#define CM3_DWT_DWT_MASK1_MASK_M \
                                0x0000000F  // Mask on data address when 
                                            // matching against COMP. This is 
                                            // the size of the ignore mask. hat 
                                            // is, DWT matching is performed 
                                            // as:(ADDR ANDed with (~0 left 
                                            // bit-shifted by MASK)) == COMP. 
                                            // However, the actual comparison 
                                            // is slightly more complex to 
                                            // enable matching an address 
                                            // wherever it appears on a bus. 
                                            // So, if COMP is 3, this matches a 
                                            // word access of 0, because 3 
                                            // would be within the word. 

#define CM3_DWT_DWT_MASK1_MASK_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_FUNCTION1 register.
//
//*****************************************************************************
#define CM3_DWT_DWT_FUNCTION1_MATCHED \
                                0x01000000  // This bit is set when the 
                                            // comparator matches, and 
                                            // indicates that the operation 
                                            // defined by FUNCTION has occurred 
                                            // since this bit was last read. 
                                            // This bit is cleared on read. 

#define CM3_DWT_DWT_FUNCTION1_MATCHED_M \
                                0x01000000
#define CM3_DWT_DWT_FUNCTION1_MATCHED_S 24
#define CM3_DWT_DWT_FUNCTION1_DATAVADDR1_M \
                                0x000F0000  // Identity of a second linked 
                                            // address comparator for data 
                                            // value matching when DATAVMATCH 
                                            // == 1 and LNK1ENA == 1. 

#define CM3_DWT_DWT_FUNCTION1_DATAVADDR1_S 16
#define CM3_DWT_DWT_FUNCTION1_DATAVADDR0_M \
                                0x0000F000  // Identity of a linked address 
                                            // comparator for data value 
                                            // matching when DATAVMATCH == 1. 

#define CM3_DWT_DWT_FUNCTION1_DATAVADDR0_S 12
#define CM3_DWT_DWT_FUNCTION1_DATAVSIZE_M \
                                0x00000C00  // Defines the size of the data in 
                                            // the COMP register that is to be 
                                            // matched: 0x0: Byte 0x1: Halfword 
                                            // 0x2: Word 0x3: Unpredictable. 

#define CM3_DWT_DWT_FUNCTION1_DATAVSIZE_S 10
#define CM3_DWT_DWT_FUNCTION1_LNK1ENA \
                                0x00000200  // 0x0: DATAVADDR1 not supported 
                                            // 0x1: DATAVADDR1 supported 
                                            // (enabled). 

#define CM3_DWT_DWT_FUNCTION1_LNK1ENA_M \
                                0x00000200
#define CM3_DWT_DWT_FUNCTION1_LNK1ENA_S 9
#define CM3_DWT_DWT_FUNCTION1_DATAVMATCH \
                                0x00000100  // This bit is only available in 
                                            // comparator 1. When DATAVMATCH is 
                                            // set, this comparator performs 
                                            // data value compares. The 
                                            // comparators given by DATAVADDR0 
                                            // and DATAVADDR1provide the 
                                            // address for the data comparison. 
                                            // If DATAVMATCH is set in 
                                            // DWT_FUNCTION1, the FUNCTION 
                                            // setting for the comparators 
                                            // given by DATAVADDR0 and 
                                            // DATAVADDR1 are overridden and 
                                            // those comparators only provide 
                                            // the address match for the data 
                                            // comparison. 

#define CM3_DWT_DWT_FUNCTION1_DATAVMATCH_M \
                                0x00000100
#define CM3_DWT_DWT_FUNCTION1_DATAVMATCH_S 8
#define CM3_DWT_DWT_FUNCTION1_CYCMATCH \
                                0x00000080  // Only available in comparator 0. 
                                            // When set, this comparator 
                                            // compares against the clock cycle 
                                            // counter. 

#define CM3_DWT_DWT_FUNCTION1_CYCMATCH_M \
                                0x00000080
#define CM3_DWT_DWT_FUNCTION1_CYCMATCH_S 7
#define CM3_DWT_DWT_FUNCTION1_EMITRANGE \
                                0x00000020  // Emit range field. Reserved to 
                                            // permit emitting offset when 
                                            // range match occurs. Reset clears 
                                            // the EMITRANGE bit. PC sampling 
                                            // is not supported when EMITRANGE 
                                            // is enabled. EMITRANGE only 
                                            // applies for: FUNCTION = b0001, 
                                            // b0010, b0011, b1100, b1101, 
                                            // b1110, and b1111. 

#define CM3_DWT_DWT_FUNCTION1_EMITRANGE_M \
                                0x00000020
#define CM3_DWT_DWT_FUNCTION1_EMITRANGE_S 5
#define CM3_DWT_DWT_FUNCTION1_FUNCTION_M \
                                0x0000000F  // Function settings. Note 1: If 
                                            // the ETM is not fitted, then ETM 
                                            // trigger is not possible. Note 2: 
                                            // Data value is only sampled for 
                                            // accesses that do not fault (MPU 
                                            // or bus fault). The PC is sampled 
                                            // irrespective of any faults. The 
                                            // PC is only sampled for the first 
                                            // address of a burst. Note 3: 
                                            // FUNCTION is overridden for 
                                            // comparators given by DATAVADDR0 
                                            // and DATAVADDR1 in 
                                            // DWT_FUNCTION1if DATAVMATCH is 
                                            // also set in DWT_FUNCTION1. The 
                                            // comparators given by DATAVADDR0 
                                            // and DATAVADDR1 can then only 
                                            // perform address comparator 
                                            // matches for comparator 1 data 
                                            // matches. Note 4: If the data 
                                            // matching functionality is not 
                                            // included during implementation 
                                            // it is not possible to set 
                                            // DATAVADDR0, DATAVADDR1, or 
                                            // DATAVMATCH in DWT_FUNCTION1. 
                                            // This means that the data 
                                            // matching functionality is not 
                                            // available in the implementation. 
                                            // Test the availability of data 
                                            // matching by writing and reading 
                                            // the DATAVMATCH bit in 
                                            // DWT_FUNCTION1. If it is not 
                                            // settable then data matching is 
                                            // unavailable. Note 5: PC match is 
                                            // not recommended for watchpoints 
                                            // because it stops after the 
                                            // instruction. It mainly guards 
                                            // and triggers the ETM. 0x0: 
                                            // Disabled 0x1: EMITRANGE = 0, 
                                            // sample and emit PC through ITM. 
                                            // EMITRANGE = 1, emit address 
                                            // offset through ITM 0x2: 
                                            // EMITRANGE = 0, emit data through 
                                            // ITM on read and write. EMITRANGE 
                                            // = 1, emit data and address 
                                            // offset through ITM on read or 
                                            // write. 0x3: EMITRANGE = 0, 
                                            // sample PC and data value through 
                                            // ITM on read or write. EMITRANGE 
                                            // = 1, emit address offset and 
                                            // data value through ITM on read 
                                            // or write. 0x4: Watchpoint on PC 
                                            // match. 0x5: Watchpoint on read. 
                                            // 0x6: Watchpoint on write. 0x7: 
                                            // Watchpoint on read or write. 
                                            // 0x8: ETM trigger on PC match 
                                            // 0x9: ETM trigger on read 0xA: 
                                            // ETM trigger on write 0xB: ETM 
                                            // trigger on read or write 0xC: 
                                            // EMITRANGE = 0, sample data for 
                                            // read transfers. EMITRANGE = 1, 
                                            // sample Daddr [15:0] for read 
                                            // transfers 0xD: EMITRANGE = 0, 
                                            // sample data for write transfers. 
                                            // EMITRANGE = 1, sample Daddr 
                                            // [15:0] for write transfers 0xE: 
                                            // EMITRANGE = 0, sample PC + data 
                                            // for read transfers. EMITRANGE = 
                                            // 1, sample Daddr [15:0] + data 
                                            // for read transfers 0XF: 
                                            // EMITRANGE = 0, sample PC + data 
                                            // for write transfers. EMITRANGE = 
                                            // 1, sample Daddr [15:0] + data 
                                            // for write transfers 

#define CM3_DWT_DWT_FUNCTION1_FUNCTION_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_COMP2 register.
//
//*****************************************************************************
#define CM3_DWT_DWT_COMP2_COMP_M \
                                0xFFFFFFFF  // Data value to compare against 
                                            // PC and the data address as given 
                                            // by DWT_FUNCTION2. 

#define CM3_DWT_DWT_COMP2_COMP_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_MASK2 register.
//
//*****************************************************************************
#define CM3_DWT_DWT_MASK2_MASK_M \
                                0x0000000F  // Mask on data address when 
                                            // matching against COMP. This is 
                                            // the size of the ignore mask. hat 
                                            // is, DWT matching is performed 
                                            // as:(ADDR ANDed with (~0 left 
                                            // bit-shifted by MASK)) == COMP. 
                                            // However, the actual comparison 
                                            // is slightly more complex to 
                                            // enable matching an address 
                                            // wherever it appears on a bus. 
                                            // So, if COMP is 3, this matches a 
                                            // word access of 0, because 3 
                                            // would be within the word. 

#define CM3_DWT_DWT_MASK2_MASK_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_FUNCTION2 register.
//
//*****************************************************************************
#define CM3_DWT_DWT_FUNCTION2_MATCHED \
                                0x01000000  // This bit is set when the 
                                            // comparator matches, and 
                                            // indicates that the operation 
                                            // defined by FUNCTION has occurred 
                                            // since this bit was last read. 
                                            // This bit is cleared on read. 

#define CM3_DWT_DWT_FUNCTION2_MATCHED_M \
                                0x01000000
#define CM3_DWT_DWT_FUNCTION2_MATCHED_S 24
#define CM3_DWT_DWT_FUNCTION2_DATAVADDR1_M \
                                0x000F0000  // Identity of a second linked 
                                            // address comparator for data 
                                            // value matching when DATAVMATCH 
                                            // == 1 and LNK1ENA == 1. 

#define CM3_DWT_DWT_FUNCTION2_DATAVADDR1_S 16
#define CM3_DWT_DWT_FUNCTION2_DATAVADDR0_M \
                                0x0000F000  // Identity of a linked address 
                                            // comparator for data value 
                                            // matching when DATAVMATCH == 1. 

#define CM3_DWT_DWT_FUNCTION2_DATAVADDR0_S 12
#define CM3_DWT_DWT_FUNCTION2_DATAVSIZE_M \
                                0x00000C00  // Defines the size of the data in 
                                            // the COMP register that is to be 
                                            // matched: 0x0: Byte 0x1: Halfword 
                                            // 0x2: Word 0x3: Unpredictable. 

#define CM3_DWT_DWT_FUNCTION2_DATAVSIZE_S 10
#define CM3_DWT_DWT_FUNCTION2_LNK1ENA \
                                0x00000200  // 0x0: DATAVADDR1 not supported 
                                            // 0x1: DATAVADDR1 supported 
                                            // (enabled). 

#define CM3_DWT_DWT_FUNCTION2_LNK1ENA_M \
                                0x00000200
#define CM3_DWT_DWT_FUNCTION2_LNK1ENA_S 9
#define CM3_DWT_DWT_FUNCTION2_DATAVMATCH \
                                0x00000100  // This bit is only available in 
                                            // comparator 1. When DATAVMATCH is 
                                            // set, this comparator performs 
                                            // data value compares. The 
                                            // comparators given by DATAVADDR0 
                                            // and DATAVADDR1provide the 
                                            // address for the data comparison. 
                                            // If DATAVMATCH is set in 
                                            // DWT_FUNCTION1, the FUNCTION 
                                            // setting for the comparators 
                                            // given by DATAVADDR0 and 
                                            // DATAVADDR1 are overridden and 
                                            // those comparators only provide 
                                            // the address match for the data 
                                            // comparison. 

#define CM3_DWT_DWT_FUNCTION2_DATAVMATCH_M \
                                0x00000100
#define CM3_DWT_DWT_FUNCTION2_DATAVMATCH_S 8
#define CM3_DWT_DWT_FUNCTION2_EMITRANGE \
                                0x00000020  // Emit range field. Reserved to 
                                            // permit emitting offset when 
                                            // range match occurs. Reset clears 
                                            // the EMITRANGE bit. PC sampling 
                                            // is not supported when EMITRANGE 
                                            // is enabled. EMITRANGE only 
                                            // applies for: FUNCTION = b0001, 
                                            // b0010, b0011, b1100, b1101, 
                                            // b1110, and b1111. 

#define CM3_DWT_DWT_FUNCTION2_EMITRANGE_M \
                                0x00000020
#define CM3_DWT_DWT_FUNCTION2_EMITRANGE_S 5
#define CM3_DWT_DWT_FUNCTION2_FUNCTION_M \
                                0x0000000F  // Function settings. Note 1: If 
                                            // the ETM is not fitted, then ETM 
                                            // trigger is not possible. Note 2: 
                                            // Data value is only sampled for 
                                            // accesses that do not fault (MPU 
                                            // or bus fault). The PC is sampled 
                                            // irrespective of any faults. The 
                                            // PC is only sampled for the first 
                                            // address of a burst. Note 3: PC 
                                            // match is not recommended for 
                                            // watchpoints because it stops 
                                            // after the instruction. It mainly 
                                            // guards and triggers the ETM. 
                                            // 0x0: Disabled 0x1: EMITRANGE = 
                                            // 0, sample and emit PC through 
                                            // ITM. EMITRANGE = 1, emit address 
                                            // offset through ITM 0x2: 
                                            // EMITRANGE = 0, emit data through 
                                            // ITM on read and write. EMITRANGE 
                                            // = 1, emit data and address 
                                            // offset through ITM on read or 
                                            // write. 0x3: EMITRANGE = 0, 
                                            // sample PC and data value through 
                                            // ITM on read or write. EMITRANGE 
                                            // = 1, emit address offset and 
                                            // data value through ITM on read 
                                            // or write. 0x4: Watchpoint on PC 
                                            // match. 0x5: Watchpoint on read. 
                                            // 0x6: Watchpoint on write. 0x7: 
                                            // Watchpoint on read or write. 
                                            // 0x8: ETM trigger on PC match 
                                            // 0x9: ETM trigger on read 0xA: 
                                            // ETM trigger on write 0xB: ETM 
                                            // trigger on read or write 0xC: 
                                            // EMITRANGE = 0, sample data for 
                                            // read transfers. EMITRANGE = 1, 
                                            // sample Daddr [15:0] for read 
                                            // transfers 0xD: EMITRANGE = 0, 
                                            // sample data for write transfers. 
                                            // EMITRANGE = 1, sample Daddr 
                                            // [15:0] for write transfers 0xE: 
                                            // EMITRANGE = 0, sample PC + data 
                                            // for read transfers. EMITRANGE = 
                                            // 1, sample Daddr [15:0] + data 
                                            // for read transfers 0XF: 
                                            // EMITRANGE = 0, sample PC + data 
                                            // for write transfers. EMITRANGE = 
                                            // 1, sample Daddr [15:0] + data 
                                            // for write transfers 

#define CM3_DWT_DWT_FUNCTION2_FUNCTION_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_COMP3 register.
//
//*****************************************************************************
#define CM3_DWT_DWT_COMP3_COMP_M \
                                0xFFFFFFFF  // Data value to compare against 
                                            // PC and the data address as given 
                                            // by DWT_FUNCTION3. 

#define CM3_DWT_DWT_COMP3_COMP_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_MASK3 register.
//
//*****************************************************************************
#define CM3_DWT_DWT_MASK3_MASK_M \
                                0x0000000F  // Mask on data address when 
                                            // matching against COMP. This is 
                                            // the size of the ignore mask. hat 
                                            // is, DWT matching is performed 
                                            // as:(ADDR ANDed with (~0 left 
                                            // bit-shifted by MASK)) == COMP. 
                                            // However, the actual comparison 
                                            // is slightly more complex to 
                                            // enable matching an address 
                                            // wherever it appears on a bus. 
                                            // So, if COMP is 3, this matches a 
                                            // word access of 0, because 3 
                                            // would be within the word. 

#define CM3_DWT_DWT_MASK3_MASK_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the 
// CM3_DWT_O_DWT_FUNCTION3 register.
//
//*****************************************************************************
#define CM3_DWT_DWT_FUNCTION3_MATCHED \
                                0x01000000  // This bit is set when the 
                                            // comparator matches, and 
                                            // indicates that the operation 
                                            // defined by FUNCTION has occurred 
                                            // since this bit was last read. 
                                            // This bit is cleared on read. 

#define CM3_DWT_DWT_FUNCTION3_MATCHED_M \
                                0x01000000
#define CM3_DWT_DWT_FUNCTION3_MATCHED_S 24
#define CM3_DWT_DWT_FUNCTION3_DATAVADDR1_M \
                                0x000F0000  // Identity of a second linked 
                                            // address comparator for data 
                                            // value matching when DATAVMATCH 
                                            // == 1 and LNK1ENA == 1. 

#define CM3_DWT_DWT_FUNCTION3_DATAVADDR1_S 16
#define CM3_DWT_DWT_FUNCTION3_DATAVADDR0_M \
                                0x0000F000  // Identity of a linked address 
                                            // comparator for data value 
                                            // matching when DATAVMATCH == 1. 

#define CM3_DWT_DWT_FUNCTION3_DATAVADDR0_S 12
#define CM3_DWT_DWT_FUNCTION3_DATAVSIZE_M \
                                0x00000C00  // Defines the size of the data in 
                                            // the COMP register that is to be 
                                            // matched: 0x0: Byte 0x1: Halfword 
                                            // 0x2: Word 0x3: Unpredictable. 

#define CM3_DWT_DWT_FUNCTION3_DATAVSIZE_S 10
#define CM3_DWT_DWT_FUNCTION3_LNK1ENA \
                                0x00000200  // 0x0: DATAVADDR1 not supported 
                                            // 0x1: DATAVADDR1 supported 
                                            // (enabled). 

#define CM3_DWT_DWT_FUNCTION3_LNK1ENA_M \
                                0x00000200
#define CM3_DWT_DWT_FUNCTION3_LNK1ENA_S 9
#define CM3_DWT_DWT_FUNCTION3_DATAVMATCH \
                                0x00000100  // This bit is only available in 
                                            // comparator 1. When DATAVMATCH is 
                                            // set, this comparator performs 
                                            // data value compares. The 
                                            // comparators given by DATAVADDR0 
                                            // and DATAVADDR1provide the 
                                            // address for the data comparison. 
                                            // If DATAVMATCH is set in 
                                            // DWT_FUNCTION1, the FUNCTION 
                                            // setting for the comparators 
                                            // given by DATAVADDR0 and 
                                            // DATAVADDR1 are overridden and 
                                            // those comparators only provide 
                                            // the address match for the data 
                                            // comparison. 

#define CM3_DWT_DWT_FUNCTION3_DATAVMATCH_M \
                                0x00000100
#define CM3_DWT_DWT_FUNCTION3_DATAVMATCH_S 8
#define CM3_DWT_DWT_FUNCTION3_EMITRANGE \
                                0x00000020  // Emit range field. Reserved to 
                                            // permit emitting offset when 
                                            // range match occurs. Reset clears 
                                            // the EMITRANGE bit. PC sampling 
                                            // is not supported when EMITRANGE 
                                            // is enabled. EMITRANGE only 
                                            // applies for: FUNCTION = b0001, 
                                            // b0010, b0011, b1100, b1101, 
                                            // b1110, and b1111. 

#define CM3_DWT_DWT_FUNCTION3_EMITRANGE_M \
                                0x00000020
#define CM3_DWT_DWT_FUNCTION3_EMITRANGE_S 5
#define CM3_DWT_DWT_FUNCTION3_FUNCTION_M \
                                0x0000000F  // Function settings. Note 1: If 
                                            // the ETM is not fitted, then ETM 
                                            // trigger is not possible. Note 2: 
                                            // Data value is only sampled for 
                                            // accesses that do not fault (MPU 
                                            // or bus fault). The PC is sampled 
                                            // irrespective of any faults. The 
                                            // PC is only sampled for the first 
                                            // address of a burst. Note 3: PC 
                                            // match is not recommended for 
                                            // watchpoints because it stops 
                                            // after the instruction. It mainly 
                                            // guards and triggers the ETM. 
                                            // 0x0: Disabled 0x1: EMITRANGE = 
                                            // 0, sample and emit PC through 
                                            // ITM. EMITRANGE = 1, emit address 
                                            // offset through ITM 0x2: 
                                            // EMITRANGE = 0, emit data through 
                                            // ITM on read and write. EMITRANGE 
                                            // = 1, emit data and address 
                                            // offset through ITM on read or 
                                            // write. 0x3: EMITRANGE = 0, 
                                            // sample PC and data value through 
                                            // ITM on read or write. EMITRANGE 
                                            // = 1, emit address offset and 
                                            // data value through ITM on read 
                                            // or write. 0x4: Watchpoint on PC 
                                            // match. 0x5: Watchpoint on read. 
                                            // 0x6: Watchpoint on write. 0x7: 
                                            // Watchpoint on read or write. 
                                            // 0x8: ETM trigger on PC match 
                                            // 0x9: ETM trigger on read 0xA: 
                                            // ETM trigger on write 0xB: ETM 
                                            // trigger on read or write 0xC: 
                                            // EMITRANGE = 0, sample data for 
                                            // read transfers. EMITRANGE = 1, 
                                            // sample Daddr [15:0] for read 
                                            // transfers 0xD: EMITRANGE = 0, 
                                            // sample data for write transfers. 
                                            // EMITRANGE = 1, sample Daddr 
                                            // [15:0] for write transfers 0xE: 
                                            // EMITRANGE = 0, sample PC + data 
                                            // for read transfers. EMITRANGE = 
                                            // 1, sample Daddr [15:0] + data 
                                            // for read transfers 0XF: 
                                            // EMITRANGE = 0, sample PC + data 
                                            // for write transfers. EMITRANGE = 
                                            // 1, sample Daddr [15:0] + data 
                                            // for write transfers 

#define CM3_DWT_DWT_FUNCTION3_FUNCTION_S 0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_DWT_O_PID4 register.
//
//*****************************************************************************
#define CM3_DWT_PID4_PID4_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID4). 
#define CM3_DWT_PID4_PID4_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_DWT_O_PID5 register.
//
//*****************************************************************************
#define CM3_DWT_PID5_PID5_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID5). 
#define CM3_DWT_PID5_PID5_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_DWT_O_PID6 register.
//
//*****************************************************************************
#define CM3_DWT_PID6_PID6_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID6). 
#define CM3_DWT_PID6_PID6_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_DWT_O_PID7 register.
//
//*****************************************************************************
#define CM3_DWT_PID7_PID7_M     0xFFFFFFFF  // Peripheral identification 
                                            // register (PID7). 
#define CM3_DWT_PID7_PID7_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_DWT_O_PID0 register.
//
//*****************************************************************************
#define CM3_DWT_PID0_PID0_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 7:0 (PID0). 
#define CM3_DWT_PID0_PID0_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_DWT_O_PID1 register.
//
//*****************************************************************************
#define CM3_DWT_PID1_PID1_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 15:8 (PID1). 
#define CM3_DWT_PID1_PID1_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_DWT_O_PID2 register.
//
//*****************************************************************************
#define CM3_DWT_PID2_PID2_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 23:16 (PID2). 
#define CM3_DWT_PID2_PID2_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_DWT_O_PID3 register.
//
//*****************************************************************************
#define CM3_DWT_PID3_PID3_M     0xFFFFFFFF  // Peripheral identification 
                                            // register Bits 31:24 (PID3). 
#define CM3_DWT_PID3_PID3_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_DWT_O_CID0 register.
//
//*****************************************************************************
#define CM3_DWT_CID0_CID0_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 7:0 (CID0). 
#define CM3_DWT_CID0_CID0_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_DWT_O_CID1 register.
//
//*****************************************************************************
#define CM3_DWT_CID1_CID1_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 15:8 (CID1). 
#define CM3_DWT_CID1_CID1_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_DWT_O_CID2 register.
//
//*****************************************************************************
#define CM3_DWT_CID2_CID2_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 23:16 (CID2). 
#define CM3_DWT_CID2_CID2_S     0
//*****************************************************************************
//
// The following are defines for the bit fields in the CM3_DWT_O_CID3 register.
//
//*****************************************************************************
#define CM3_DWT_CID3_CID3_M     0xFFFFFFFF  // Component identification 
                                            // register Bits 31:24 (CID3). 
#define CM3_DWT_CID3_CID3_S     0


#endif // __HW_CM3_DWT_H__

