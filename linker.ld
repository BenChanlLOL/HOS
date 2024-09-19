MEMORY
{
  /* Define memory regions */
  FLASH (rx) : ORIGIN = 0x00000000, LENGTH = 0x100000
  RAM (rwx) : ORIGIN = 0x100000000, LENGTH = 0x1000000
}

SECTIONS
{
  /* Program sections */
  .text :
  {
    *(.text)
  } > FLASH

  /* Data sections */
  .data :
  {
    *(.data)
  } > RAM AT > FLASH

  /* BSS section */
  .bss :
  {
    *(.bss)
  } > RAM AT > FLASH

  /* Stack section */
  .stack (NOLOAD) :
  {
    *(.stack)
  } > RAM

  /* Define the entry point */
  _start = KernelMain;
}