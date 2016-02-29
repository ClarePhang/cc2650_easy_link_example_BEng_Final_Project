/******************************************************************************
 *
 *
 * cc26xx_gcc.cmd - GCC linker configuration file for cc26xx.
 *
 *
 *****************************************************************************/

/*. Entry Point *./
ENTRY( ResetIsr )

/* System memory map */
MEMORY
{
    /* Application stored in and executes from internal flash */
    /* Flash Size 128 KB */
    FLASH (RX) : ORIGIN = 0x0, LENGTH = 0x0001FFB4
    /* Customer Configuration Area and Bootloader Backdoor configuration in flash, up to 76 bytes*/
    FLASH_CCFG (RX) : ORIGIN = 0x1FFB4, LENGTH = 76
    /* Application uses internal RAM for data */
    /* RAM Size 16 KB */
    SRAM (RWX) : ORIGIN = 0x20000000, LENGTH = 0x4000
}

/*. Highest address of the stack. Used in startup file .*/
_estack = ORIGIN(SRAM) + LENGTH(SRAM); /*end of SRAM .*/

/*. Generate a link error if heap and stack don’t fit into RAM .*/
_Min_Heap_Size = 0;
_Min_Stack_Size = 0x100;


/* Section allocation in memory */
SECTIONS
{
    .text :
    {
        _text = .;
        KEEP(*(.vectors))
        *(.text*)
        *(.rodata*)
        _etext = .;
    } > FLASH= 0
    .data : AT(ADDR(.text) + SIZEOF(.text))
    {
        _data = .;
        *(vtable)
        *(.data*)
        _edata = .;
    } > SRAM
    .bss :
    {
        _bss = .;
        *(.bss*)
        *(COMMON)
        _ebss = .;
    } > SRAM
    .ccfg :
    { 
    } > FLASH_CCFG
    /* User_heap_stack section, used to check that there is enough RAM left */
    ._user_heap_stack :
    {
      . = ALIGN(4);
      . = . + _Min_Heap_Size;
      . = . + _Min_Stack_Size;
      . = ALIGN(4);
    } >SRAM
}


