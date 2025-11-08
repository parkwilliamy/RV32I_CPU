    .globl _start

    .section .text
_start:
    add x1, x2, x3          # x1 = x2 + x3

    la  x5, my_data         # x5 = base address of .data section (0x5000)
    sw  x1, 4(x5)           # store x1 -> my_data+4
    j halt
    
    
    .section .data
my_data:
    .word 0                 # reserve 4 bytes for x1
    .word 0                 # reserve 4 bytes for x4

    .section .text
halt:
    li  x4, 1               # x4 = 1
    sw  x4, 0(x5)           # store x4 -> my_data
    j halt


# riscv32-unknown-elf-as -march=rv32i -mabi=ilp32 asm/ADD.s -o /obj/add.o
# riscv32-unknown-elf-ld -T ../../../scripts/link.ld obj/add.o -o elf/add.elf
# riscv32-unknown-elf-objcopy -O binary elf/add.elf bin/add.bin
# hexdump -v -e '1/1 "%02x\n"' bin/add.bin > hex/add.hex


