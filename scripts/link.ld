OUTPUT_ARCH( "riscv" )

SECTIONS
{
  . = 0x00000000;
  .text : { *(.text) }
  . = 0x00035000;
  .data : { *(.data) }
}

