.section .data
 .global op

.section .text
  .global function

function: # (((((num - 1) * 3) + 12) / 3 ) + 5 ) - num
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl op, %eax
    movl %eax, %ebx

    # num -1
    decl %eax

    # (num - 1) * 3
    imul $3, %eax

    # ((num - 1) * 3) + 12
    addl $12, %eax

    # (((num - 1) * 3) + 12) / 3
    movl $3, %ecx
    movl $0, %edx
    idivl %ecx
    
    # ((((num - 1) * 3) + 12) / 3 ) + 5
    addl $5, %eax
    
    # (((((num - 1) * 3) + 12) / 3 ) + 5 ) - num
    subl %ebx, %eax

    jmp output

output:
    jo o_overflow
    jmp fim

o_carry:
    mov $0,%eax
    jo o_overflow
    jmp fim

o_overflow:
    mov $0,%eax
    jmp fim
fim:
    # epilogue
    movl %ebp,%esp
    popl %ebp

    ret 
    