.section .data
 .global op1
 .global op2

.section .text
  .global modulus

modulus: # op1 % op2
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl op1,%eax
    movl op2,%ebx
    movl $0,%edx

    idiv %ebx
    movl %edx,%eax

    jmp fim

output_overflow:
    movl $-1,%eax
    jmp fim

fim: # fim
    # epilogue
    movl %ebp, %esp
    popl %ebp

    ret
