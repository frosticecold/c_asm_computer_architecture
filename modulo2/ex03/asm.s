.section .data
 .global op1
 .global op2
 .global op3
 .global res

.section .text
 .global sum # int sum(void)
 .global sumsub # int sumsub(void)
 sum:
    # prologue
    pushl %ebp # save previous stack frame pointer
    movl %esp, %ebp # the stack frame pointer for sum function
    movl op1, %ebx # place op1 in ebx
    movl op2, %eax # place op2 in eax
    addl %ebx, %eax # add ebx to eax. Result is in eax
    # movl %eax, res # copy the result to res
    # epilogue
    movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
    popl %ebp # restore the previous stack frame pointer
    ret

sumsub:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    movl op1, %ebx # mover o operador 1 para ebx
    movl op2, %eax # mover o operador 2 para eax
    movl op3, %ecx # mover o operador 3 para ecx
    addl %ebx, %eax # op1 + op2
    subl %ecx, %eax # (op1 + op2) - op3

    movl %ebp, %esp # restore the previous stack pointer ("clear" the stack)
    popl %ebp # restore the previous stack frame pointer
    ret
