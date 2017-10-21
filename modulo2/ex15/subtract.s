.section .data
 .global op1
 .global op2

.section .text
  .global subtract

subtract: # op1 - op2
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl op1, %eax
    movl op2, %ebx

    subl %ebx, %eax
    jo output_overflow
    jmp fim

output_overflow:
    movl $0,%eax
    jmp fim

fim: # fim
    # epilogue
    movl %ebp, %esp
    popl %ebp

    ret
    