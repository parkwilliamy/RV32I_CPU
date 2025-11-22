    .globl _start

_start:
    addi x1, x2, 5          # x1 = x2 + 5
    


# riscv32-unknown-elf-as -march=rv32i -mabi=ilp32 asm/ADD.s -o obj/add.o
# riscv32-unknown-elf-ld -T ../../../scripts/link.ld obj/add.o -o elf/add.elf
# riscv32-unknown-elf-objcopy -O binary elf/add.elf bin/add.bin
# hexdump -v -e '1/1 "%02x\n"' bin/add.bin > hex/add.hex


