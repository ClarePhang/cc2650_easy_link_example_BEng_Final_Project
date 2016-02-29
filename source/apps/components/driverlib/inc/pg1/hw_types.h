//*****************************************************************************
//
// hw_types.h - Common types and macros.
//
//*****************************************************************************

#ifndef __HW_TYPES_H__
#define __HW_TYPES_H__

#include <stdint.h>
#ifndef WIN32
#include <stdbool.h>
#endif

//*****************************************************************************
//
// This symbol forces simple driverlib functions to be inlined in the code
// instead of using function calls.
//
//*****************************************************************************
#ifndef __STATIC_INLINE
#define __STATIC_INLINE static inline
#endif

//*****************************************************************************
//
// C99 types only allows bitfield defintions on certain datatypes.
//
//*****************************************************************************
typedef unsigned int  __UINT32;

//*****************************************************************************
//
// Macros for hardware access, both direct and via the bit-band region.
//
//*****************************************************************************
#define HWREG(x)                                                              \
        (*((volatile unsigned long *)(x)))
#define HWREGH(x)                                                             \
        (*((volatile unsigned short *)(x)))
#define HWREGB(x)                                                             \
        (*((volatile unsigned char *)(x)))
#define HWREGBITW(x, b)                                                       \
        HWREG(((unsigned long)(x) & 0xF0000000) | 0x02000000 |                \
              (((unsigned long)(x) & 0x000FFFFF) << 5) | ((b) << 2))
#define HWREGBITH(x, b)                                                       \
        HWREGH(((unsigned long)(x) & 0xF0000000) | 0x02000000 |               \
               (((unsigned long)(x) & 0x000FFFFF) << 5) | ((b) << 2))
#define HWREGBITB(x, b)                                                       \
        HWREGB(((unsigned long)(x) & 0xF0000000) | 0x02000000 |               \
               (((unsigned long)(x) & 0x000FFFFF) << 5) | ((b) << 2))

#endif // __HW_TYPES_H__
