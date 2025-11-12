    .globl _start

    .section .text
_start:
    
    jalr x1, x0, 16           # if (x1==x2) branch to test1

    la  x5, my_data         # x5 = base address of .data section (0x5000)
    j halt
    
test1:
    add x6, x7, x8;         # x6 = x7+x8
    la  x5, my_data         # x5 = base address of .data section (0x5000)
    j halt
    
    .section .data
my_data:
    .word 0                 # reserve 4 bytes for x4

    .section .text
halt:
    li  x4, 1               # x4 = 1
    sw  x4, 0(x5)           # store x4 -> my_data
    j halt




