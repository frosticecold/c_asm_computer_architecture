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

    # epilogue

    movl %ebp,%esp
    popl %ebp

    ret

subtract: # op1 - op2
    pushl %ebp
    movl %esp,%ebp

    movl op1, %eax
    movl op2, %ebx

    subl %ebx, %eax

    movl %ebp, %esp
    popl %ebp

    ret

multiply: # op1 * op2

    pushl %ebp
    movl %esp,%ebp

    movl op1, %eax
    movl op2, %ebx

    imul %ebx, %eax

    ret

divide: # op1 / op2

    pushl %ebp
    movl %esp,%ebp

    movl op1, %eax
    movl op2, %ebx

    divl %ebx

    ret
