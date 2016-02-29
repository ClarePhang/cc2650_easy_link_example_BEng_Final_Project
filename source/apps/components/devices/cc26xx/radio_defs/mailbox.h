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
/// \file            mailbox.h
/// \brief           Definitions for interface between system and radio CPU
///
/// \author          Low Power RF Wireless Business Unit
///                  Helge Coward (h.coward@ti.com)
///
/// \date            Thu Nov 24 09:00:42 CET 2011
///
//-----------------------------------------------------------------------------

#ifndef _MAILBOX_H
#define _MAILBOX_H

#include <stdint.h>
#include <string.h>

/// Type definition for RAT
typedef uint32_t ratmr_t;



/// Type definition for a data queue
typedef struct {
   uint8_t *pCurrEntry;   ///< Pointer to the data queue entry to be used, NULL for an empty queue
   uint8_t *pLastEntry;   ///< Pointer to the last entry in the queue, NULL for a circular queue
} dataQueue_t;



/// \name CPE interrupt definitions
/// Interrupt masks for the CPE interrupt in RDBELL. Only commonly defined interrupts here; additional
/// interrupts are defined for each protocol.
///@{
#define IRQN_COMMAND_DONE           0           ///< Radio operation command finished
#define IRQN_LAST_COMMAND_DONE      1           ///< Last radio operation command in a chain finished
#define IRQN_FG_COMMAND_DONE        2           ///< FG level Radio operation command finished
#define IRQN_LAST_FG_COMMAND_DONE   3           ///< Last FG level radio operation command in a chain finished
#define IRQN_INTERNAL_ERROR         31          ///< Internal error observed

#define IRQ_COMMAND_DONE            (1U << IRQN_COMMAND_DONE)
#define IRQ_LAST_COMMAND_DONE       (1U << IRQN_LAST_COMMAND_DONE)
#define IRQ_FG_COMMAND_DONE         (1U << IRQN_FG_COMMAND_DONE)
#define IRQ_LAST_FG_COMMAND_DONE    (1U << IRQN_LAST_FG_COMMAND_DONE)
#define IRQ_INTERNAL_ERROR          (1U << IRQN_INTERNAL_ERROR)
///@}



/// \name CMDSTA values
/// Values returned in result byte of CMDSTA
///@{
#define CMDSTA_Pending 0x00              ///< The command has not yet been parsed
#define CMDSTA_Done 0x01                 ///< Command successfully parsed

#define CMDSTA_IllegalPointer 0x81       ///< The pointer signaled in CMDR is not valid
#define CMDSTA_UnknownCommand 0x82       ///< The command number in the command structure is unknown
#define CMDSTA_UnknownDirCommand 0x83    ///< The command number for a direct command is unknown, or the
                                         ///< command is not a direct command 
#define CMDSTA_ContextError 0x85         ///< An immediate or direct command was issued in a context
                                         ///< where it is not supported 
#define CMDSTA_SchedulingError 0x86      ///< A radio operation command was attempted to be scheduled
                                         ///< while another operation was already running in the RF core 
#define CMDSTA_ParError 0x87             ///< There were errors in the command parameters that are parsed
                                         ///< on submission. 
#define CMDSTA_QueueError 0x88           ///< An operation on a data entry queue was attempted that was
                                         ///< not supported by the queue in its current state 
#define CMDSTA_QueueBusy 0x89            ///< An operation on a data entry was attempted while that entry
                                         ///< was busy
///@}



/// \name Macros for use with command definition files
/// The script create_command.pl generates header files from command and structure definitions in the
/// *_def.txt files. These are the macros to access the definitions
///@{

/// Get a field from a structure
//
/// Gets a field from a structure defined in a _def.txt file. This may be used both in assignments and
/// references (e.g. GET_FIELD(pCmd1, CMD_TEST, testParam) = GET_FIELD(pCmd2, CMD_DUMMY, dummyParam);)
/// \param[in]  ptr
///     Pointer to the structure
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
/// \param[in]  field
///     Name of the accessed field as defined in the _def.txt file
///
#define GET_FIELD(ptr, cmd, field) \
(*((_TYPE_##cmd##_##field *) (((uint8_t *)(ptr)) + (_POSITION_##cmd##_##field))))

/// Get a field from a structure, reading as volatile
//
/// Gets a field from a structure defined in a _def.txt file, reading it as a volatile parameter, which
/// takes into account that it may be changed by the other side. This may be used both in assignments and
/// references (e.g. GET_FIELD(pCmd1, CMD_TEST, testParam) = GET_FIELD(pCmd2, CMD_DUMMY, dummyParam);)
/// \param[in]  ptr
///     Pointer to the structure
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
/// \param[in]  field
///     Name of the accessed field as defined in the _def.txt file
///
#define GET_FIELD_V(ptr, cmd, field) \
(*((volatile _TYPE_##cmd##_##field *) (((uint8_t *)(ptr)) + (_POSITION_##cmd##_##field))))

/// Get the pointer to a field from a structure
//
/// Gets the pointer to a field from a structure defined in a _def.txt file.
/// \param[in]  ptr
///     Pointer to the structure
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
/// \param[in]  field
///     Name of the accessed field as defined in the _def.txt file
///
#define GET_FIELD_PTR(ptr, cmd, field) \
((_TYPE_##cmd##_##field *) (((uint8_t *)(ptr)) + (_POSITION_##cmd##_##field)))

/// Get the volatile pointer to a field from a structure
//
/// Gets the volatile pointer to a field from a structure defined in a _def.txt file.
/// \param[in]  ptr
///     Pointer to the structure
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
/// \param[in]  field
///     Name of the accessed field as defined in the _def.txt file
///
#define GET_FIELD_VPTR(ptr, cmd, field) \
((volatile _TYPE_##cmd##_##field *) (((uint8_t *)(ptr)) + (_POSITION_##cmd##_##field)))

/// Get bits from a bit field
//
/// Returns bits from a bit field defined in a _def.txt file.
/// \param[in]  value
///     The value of the entire field that contains the bit field
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
/// \param[in]  field
///     Name of the field that contains the bit field definition as defined in the _def.txt file
/// \param[in]  bitfield
///     Name of the bitfield as defined in the _def.txt file
///
#define GET_BITS(value, cmd, field, bitfield) \
(((value) >> (_BITPOS_##cmd##_##field##_##bitfield)) & \
            ((1U << (_NBITS_##cmd##_##field##_##bitfield)) - 1))

/// Get bits from a bit field as a signed value
//
/// Returns sign extended bits from a bit field defined in a _def.txt file.
/// \param[in]  value
///     The value of the entire field that contains the bit field
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
/// \param[in]  field
///     Name of the field that contains the bit field definition as defined in the _def.txt file
/// \param[in]  bitfield
///     Name of the bitfield as defined in the _def.txt file
///
#define GET_BITS_S(value, cmd, field, bitfield) \
(((int)(value) << (32 - ((_BITPOS_##cmd##_##field##_##bitfield) + (_NBITS_##cmd##_##field##_##bitfield)))) >> \
                    (32 - (_NBITS_##cmd##_##field##_##bitfield)))

/// Set bits in a bit field
//
/// Modifies a bit field defined in a _def.txt file.
/// \param[in,out]  value
///     The value of the entire field that contains the bit field
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
/// \param[in]  field
///     Name of the field that contains the bit field definition as defined in the _def.txt file
/// \param[in]  bitfield
///     Name of the bitfield as defined in the _def.txt file
/// \param[in]  bvalue
///     The value to set in the bitfield
///
#define SET_BITS(value, cmd, field, bitfield, bvalue) \
(((value) = ((value) & \
   (~(((1U << (_NBITS_##cmd##_##field##_##bitfield)) - 1) << (_BITPOS_##cmd##_##field##_##bitfield))) | \
   ((bvalue) << (_BITPOS_##cmd##_##field##_##bitfield)))))


/// Get bits from a bit field in a structure
//
/// Returns bits from a bit field in a structure defined in a _def.txt file.
/// \param[in]  ptr
///     Pointer to the structure
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
/// \param[in]  field
///     Name of the field that contains the bit field definition as defined in the _def.txt file
/// \param[in]  bitfield
///     Name of the bitfield as defined in the _def.txt file
///
#define GET_BITFIELD(ptr, cmd, field, bitfield) \
((*((_TYPE_##cmd##_##field *) ((((uint8_t *)(ptr)) + (_POSITION_##cmd##_##field)))) >> \
   ((_BITPOS_##cmd##_##field##_##bitfield)))  & \
   ((1U << (_NBITS_##cmd##_##field##_##bitfield)) - 1))

/// Get bits from a bit field in a structure, reading as volatile
//
/// Returns bits from a bit field in a structure defined in a _def.txt file, reading it as a
/// volatile parameter.
/// \param[in]  ptr
///     Pointer to the structure
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
/// \param[in]  field
///     Name of the field that contains the bit field definition as defined in the _def.txt file
/// \param[in]  bitfield
///     Name of the bitfield as defined in the _def.txt file
///
#define GET_BITFIELD_V(ptr, cmd, field, bitfield) \
((*((volatile _TYPE_##cmd##_##field *) ((((uint8_t *)(ptr)) + (_POSITION_##cmd##_##field)))) >> \
   ((_BITPOS_##cmd##_##field##_##bitfield)))  & \
   ((1U << (_NBITS_##cmd##_##field##_##bitfield)) - 1))


/// Set bits in a bit field in a structure
//
/// Modifies a bit field in a field in a structure defined in a _def.txt file.
/// \param[in]  ptr
///     Pointer to the structure
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
/// \param[in]  field
///     Name of the field that contains the bit field definition as defined in the _def.txt file
/// \param[in]  bitfield
///     Name of the bitfield as defined in the _def.txt file
/// \param[in]  value
///     The value to set in the bitfield
///
#define SET_BITFIELD(ptr, cmd, field, bitfield, value) \
((*((_TYPE_##cmd##_##field *) (((uint8_t *)(ptr)) + (_POSITION_##cmd##_##field)))) = \
   ((*((_TYPE_##cmd##_##field *) (((uint8_t *)(ptr)) + (_POSITION_##cmd##_##field)))) & \
   (~(((1U << (_NBITS_##cmd##_##field##_##bitfield)) - 1) << (_BITPOS_##cmd##_##field##_##bitfield))) | \
   (((uint32_t)(value)) << (_BITPOS_##cmd##_##field##_##bitfield))))

/// Set bits in a bit field in a structure, reading and writing as volatile
//
/// Modifies a bit field in a field in a structure defined in a _def.txt file, accessing it as a volatile
/// parameter.
/// \param[in]  ptr
///     Pointer to the structure
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
/// \param[in]  field
///     Name of the field that contains the bit field definition as defined in the _def.txt file
/// \param[in]  bitfield
///     Name of the bitfield as defined in the _def.txt file
/// \param[in]  value
///     The value to set in the bitfield
///
#define SET_BITFIELD_V(ptr, cmd, field, bitfield, value) \
((*((volatile _TYPE_##cmd##_##field *) (((uint8_t *)(ptr)) + (_POSITION_##cmd##_##field)))) = \
   ((*((volatile _TYPE_##cmd##_##field *) (((uint8_t *)(ptr)) + (_POSITION_##cmd##_##field)))) & \
   (~(((1U << (_NBITS_##cmd##_##field##_##bitfield)) - 1) << (_BITPOS_##cmd##_##field##_##bitfield))) | \
   (((uint32_t)(value)) << (_BITPOS_##cmd##_##field##_##bitfield))))

/// Get the value of specific bifield in a field with the remaining bits set to 0
//
/// Returns a bitfield so that the value of the full field can be obtained by bitwise
/// OR between these
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
/// \param[in]  field
///     Name of the field that contains the bit field definition as defined in the _def.txt file
/// \param[in]  bitfield
///     Name of the bitfield as defined in the _def.txt file
/// \param[in]  value
///     The value to use in the bitfield
///
#define BITVALUE(cmd, field, bitfield, value) \
((((uint32_t)(value)) & ((1U << (_NBITS_##cmd##_##field##_##bitfield)) - 1)) << \
 (_BITPOS_##cmd##_##field##_##bitfield))

/// Get the size of a structure
//
/// Gets the size of a structure defined in a _def.txt file.
///
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
///
#define SIZEOF_STRUCT(cmd) \
((_LAST_POSITION_##cmd) + sizeof(_LAST_TYPE_##cmd))

/// Get the size of a radio operation command structure
//
/// Gets the size of a radio operation command structure defined in a _def.txt file. If the command has
/// no own parameters, the size of the generic radio operation command is used
///
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
///
#define SIZEOF_RADIO_OP(cmd) \
((_LAST_POSITION_##cmd < 0) ? \
   ((_LAST_POSITION_radioOp) + sizeof(_LAST_TYPE_radioOp)) : \
   ((_LAST_POSITION_##cmd) + sizeof(_LAST_TYPE_##cmd)))

/// Initializes a structure to an initialization set
//
/// Sets the value of a structure to its given initialization values
/// \param[in]  ptr
///     Pointer to the structure, must be word aligned
/// \param[in]  cmd
///     Name of the command or structure as defined in the _def.txt file
/// \param[in]  set
///     Index of the set of initializations to use
///
#define INIT_STRUCT(ptr, cmd, set) \
(memcpy(((uint32_t *)(ptr)) + (_START_INIT_WIDX_##cmd), (__init_##cmd[(set)]), \
        (_N_INIT_WORDS_##cmd) * sizeof(uint32_t)))

///@}


/// \name Macros for sending direct commands
///@{
/// Direct command with no parameter
#define CMDR_DIR_CMD(cmdId) (((cmdId) << 16) | 1)

/// Direct command with 1-byte parameter
#define CMDR_DIR_CMD_1BYTE(cmdId, par) (((cmdId) << 16) | ((par) << 8) | 1)

/// Direct command with 2-byte parameter
#define CMDR_DIR_CMD_2BYTE(cmdId, par) (((cmdId) << 16) | ((par) & 0xFFFC) | 1)

///@}



/// \name Definitions for trigger types
///@{
#define TRIG_NOW 0            ///< Triggers immediately
#define TRIG_NEVER 1          ///< Never trigs
#define TRIG_ABSTIME 2        ///< Trigs at an absolute time
#define TRIG_REL_SUBMIT 3     ///< Trigs at a time relative to the command was submitted
#define TRIG_REL_START 4      ///< Trigs at a time relative to the command started
#define TRIG_REL_PREVSTART 5  ///< Trigs at a time relative to the previous command in the chain started
#define TRIG_REL_FIRSTSTART 6 ///< Trigs at a time relative to the first command in the chain started
#define TRIG_REL_PREVEND 7    ///< Trigs at a time relative to the previous command in the chain ended
#define TRIG_REL_EVT1 8       ///< Trigs at a time relative to the context defined "Event 1"
#define TRIG_REL_EVT2 9       ///< Trigs at a time relative to the context defined "Event 2"
#define TRIG_PAST_BM 0x80     ///< Bitmask for setting pastTrig bit in order to trig immediately if
                              ///< trigger happened in the past
///@}


/// \name Definitions for conditional execution
///@{
#define COND_ALWAYS 0         ///< Always run next command (except in case of Abort)
#define COND_NEVER 1          ///< Never run next command
#define COND_STOP_ON_FALSE 2  ///< Run next command if this command returned True, stop if it returned
                              ///< False
#define COND_STOP_ON_TRUE 3   ///< Stop if this command returned True, run next command if it returned
                              ///< False
#define COND_SKIP_ON_FALSE 4  ///< Run next command if this command returned True, skip a number of
                              ///< commands if it returned False 
#define COND_SKIP_ON_TRUE 5   ///< Skip a number of commands if this command returned True, run next
                              ///< command if it returned False
///@}



/// \name Radio operation status
/// Radio operation status format:
/// Bits 15:12: Protocol
///             0000: Common/Generic
///             0001: BLE
///             0010: IEEE 802.15.4
/// Bits 11:10: Type
///             00: Not finished
///             01: Done successfully
///             10: Done with error
/// Bits 9:0:   Identifier
///@{
/// \name Operation not finished
///@{
#define IDLE             0x0000   ///< Operation not started 
#define PENDING          0x0001   ///< Start of command is pending
#define ACTIVE           0x0002   ///< Running
#define SKIPPED          0x0003   ///< Operation skipped due to condition in another command
///@}
/// \name Operation finished normally
///@{
#define DONE_OK          0x0400   ///< Operation ended normally
#define DONE_COUNTDOWN   0x0401   ///< Counter reached zero
#define DONE_RXERR       0x0402   ///< Operation ended with CRC error
#define DONE_TIMEOUT     0x0403   ///< Operation ended with timeout
#define DONE_STOPPED     0x0404   ///< Operation stopped after CMD_STOP command
#define DONE_ABORT       0x0405   ///< Operation aborted by CMD_ABORT command
///@}
/// \name Operation finished with error
///@{
#define ERROR_PAST_START 0x0800   ///< The start trigger occurred in the past
#define ERROR_START_TRIG 0x0801   ///< Illegal start trigger parameter
#define ERROR_CONDITION  0x0802   ///< Illegal condition for next operation
#define ERROR_PAR        0x0803   ///< Error in a command specific parameter
#define ERROR_POINTER    0x0804   ///< Invalid pointer to next operation
#define ERROR_CMDID      0x0805   ///< Next operation has a command ID that is undefined or not a radio
                                  ///< operation command
#define ERROR_WRONG_BG   0x0806   ///< FG level command not compatible with running BG level command
#define ERROR_NO_SETUP   0x0807   ///< Operation using Rx or Tx attemted without CMD_RADIO_SETUP
#define ERROR_NO_FS      0x0808   ///< Operation using Rx or Tx attemted without frequency synth configured
#define ERROR_SYNTH_PROG 0x0809   ///< Synthesizer calibration failed
#define ERROR_TXUNF      0x080A   ///< Tx underflow observed
///@}
///@}


/// \name Data entry types
///@{
#define DATA_ENTRY_TYPE_GEN 0     ///< General type: Tx entry or single element Rx entry
#define DATA_ENTRY_TYPE_MULTI 1   ///< Multi-element Rx entry type
#define DATA_ENTRY_TYPE_PTR 2     ///< Pointer entry type
#define DATA_ENTRY_TYPE_PARTIAL 3 ///< Partial read entry type
///@


/// \name Data entry statuses
///@{
#define DATA_ENTRY_PENDING 0      ///< Entry not yet used
#define DATA_ENTRY_ACTIVE 1       ///< Entry in use by radio CPU
#define DATA_ENTRY_BUSY 2         ///< Entry being updated
#define DATA_ENTRY_FINISHED 3     ///< Radio CPU is finished accessing the entry
#define DATA_ENTRY_UNFINISHED 4   ///< Radio CPU is finished accessing the entry, but packet could not be finished
///@}

/// Difference between length and size of rxData field in multi-element Rx entry
#define DATA_ENTRY_MULTI_LEN_OFFSET (_POSITION_dataEntry_rxData - _POSITION_dataEntry_data)


/// \name Macros for RF register override
///@{
/// Macro for ADI half-size value-mask combination
#define ADI_VAL_MASK(addr, mask, value) \
(((addr) & 1) ? (((mask) & 0x0F) | (((value) & 0x0F) << 4)) : \
 ((((mask) & 0x0F) << 4) | ((value) & 0x0F)))
/// 32-bit write of 16-bit value
#define HW_REG_OVERRIDE(addr, val) ((((uintptr_t) (addr)) & 0xFFFC) | ((uint32_t)(val) << 16))
/// ADI register, full-size write
#define ADI_REG_OVERRIDE(adiNo, addr, val) (2 | ((uint32_t)(val) << 16) | \
(((addr) & 0x3F) << 24) | ((!!(adiNo)) << 31))
/// 2 ADI registers, full-size write
#define ADI_2REG_OVERRIDE(adiNo, addr, val, addr2, val2) \
(2 | ((uint32_t)(val2) << 2) | (((addr2) & 0x3F) << 10) | ((uint32_t)(val) << 16) | \
(((addr) & 0x3F) << 24) | ((!!(adiNo)) << 31))
/// ADI register, half-size read-modify-write
#define ADI_HALFREG_OVERRIDE(adiNo, addr, mask, val) (2 | (ADI_VAL_MASK(addr, mask, val) << 16) | \
(((addr) & 0x3F) << 24) | (1U << 30) | ((!!(adiNo)) << 31))
/// 2 ADI registers, half-size read-modify-write
#define ADI_2HALFREG_OVERRIDE(adiNo, addr, mask, val, addr2, mask2, val2) \
(2 | (ADI_VAL_MASK(addr2, mask2, val2) << 2) | (((addr2) & 0x3F) << 10) | \
(ADI_VAL_MASK(addr, mask, val) << 16) | (((addr) & 0x3F) << 24) | (1U << 30) | ((!!(adiNo)) << 31))
                                            
/// 16-bit SW register as defined in radio_par_def.txt
#define SW_REG_OVERRIDE(cmd, field, val) (3 | ((_POSITION_##cmd##_##field) << 4) | ((uint32_t)(val) << 16))
/// SW register as defined in radio_par_def.txt with added index (for use with registers > 16 bits).
#define SW_REG_IND_OVERRIDE(cmd, field, offset, val) (3 | \
(((_POSITION_##cmd##_##field) + ((offset) << 1)) << 4) | ((uint32_t)(val) << 16))
/// 8-bit SW register as defined in radio_par_def.txt
#define SW_REG_BYTE_OVERRIDE(cmd, field, val) (0x8003 | ((_POSITION_##cmd##_##field) << 4) | \
((uint32_t)(val) << 16))
/// Two 8-bit SW registers as defined in radio_par_def.txt; the one given by field and the next byte.
#define SW_REG_2BYTE_OVERRIDE(cmd, field, val0, val1) (3 | (((_POSITION_##cmd##_##field) & 0xFFFE) << 4) | \
                                                       (((uint32_t)(val0) << 16) & 0x00FF0000) | ((uint32_t)(val1) << 24))
#define HW16_ARRAY_OVERRIDE(addr, length) (1 | (((uintptr_t) (addr)) & 0xFFFC) | ((uint32_t)(length) << 16))
#define HW32_ARRAY_OVERRIDE(addr, length) (1 | (((uintptr_t) (addr)) & 0xFFFC) | \
((uint32_t)(length) << 16) | (1U << 30))
#define ADI_ARRAY_OVERRIDE(adiNo, addr, bHalfSize, length) (1 | ((((addr) & 0x3F) << 2)) | \
((!!(bHalfSize)) << 8) | ((!!(adiNo)) << 9) | ((uint32_t)(length) << 16) | (2U << 30))
#define SW_ARRAY_OVERRIDE(cmd, firstfield, length) (1 | (((_POSITION_##cmd##_##firstfield) >> 2) << 2) | \
((uint32_t)(length) << 16) | (3U << 30))
#define MCE_RFE_OVERRIDE(bMceRam, mceRomBank, mceMode, bRfeRam, rfeRomBank, rfeMode) \
   (7 | ((!!(bMceRam)) << 8) | (((mceRomBank) & 0x07) << 9) | ((!!(bRfeRam)) << 12) | (((rfeRomBank) & 0x07) << 13) | \
    (((mceMode) & 0x00FF) << 16) | (((rfeMode) & 0x00FF) << 24))

#define FWPAR_8BIT_ADDR(cmd, field) (0x1800 | (_POSITION_##cmd##_##field))
#define FWPAR_16BIT_ADDR(cmd, field) (0x1000 | (_POSITION_##cmd##_##field))
#define FWPAR_32BIT_ADDR(cmd, field) (0x0000 | (_POSITION_##cmd##_##field))

/// End of string for override register
#define END_OVERRIDE 0xFFFFFFFF

/// ADI address-value pair
#define ADI_ADDR_VAL(addr, value) ((((addr) & 0x7F) << 8) | ((value) & 0xFF))
#define ADI_ADDR_VAL_MASK(addr, mask, value) ((((addr) & 0x7F) << 8) | ADI_VAL_MASK(addr, mask, value))

/// Low half-word
#define LOWORD(value) ((value) & 0xFFFF)
/// High half-word
#define HIWORD(value) ((value) >> 16)
///@}


#endif
