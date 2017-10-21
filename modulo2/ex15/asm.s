.section .data
 .global op1
 .global op2

.section .text
  .global sum
  .global subtract
  .global multiply
  .global divide
  .global modulus

sum: # op1 + op2
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl op1, %eax
    movl op2, %ebx

    addl %ebx, %eax
    jo output_overflow
    jmp fim

subtract: # op1 - op2
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl op1, %eax
    movl op2, %ebx

    subl %ebx, %eax
    jo output_overflow
    jmp fim

multiply: # op1 * op2
    #prologue
    pushl %ebp
    movl %esp,%ebp

    movl op1, %eax
    movl op2, %ebx

    imul %ebx, %eax
    jo output_overflow
    jmp fim

divide: # op1 / op2
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl op1, %eax
    movl op2, %ebx
    movl $0, %edx

    idiv %ebx

    jmp fim

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
