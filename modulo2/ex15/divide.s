.section .data
 .global op1
 .global op2

.section .text
  .global division

division: # op1 / op2
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl op1, %eax
    movl op2, %ebx
    movl $0, %edx

    idiv %ebx

    jmp fim

output_overflow:
    movl $0,%eax
    jmp fim

fim: # fim
    # epilogue
    movl %ebp, %esp
    popl %ebp

    ret
    