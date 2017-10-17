.section .data
 .global op

.section .text
  .global function

function: # 

    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl op, %ebx
    movl $0, %ecx

    cmpl %ecx, %ebx
    jg positive
    jl negative

positive:
    shr %ebx
    jc odd_pos

    movl $1, %eax
    jmp fim

negative:
    shr %ebx
    jc odd_neg

    movl $2, %eax
    jmp fim

odd_pos:
    movl $3, %eax
    jmp fim

odd_neg:
    movl $4, %eax
    jmp fim

fim: # fim
    # epilogue
    # movl %ecx,%eax
    movl %ebp, %esp
    popl %ebp

    ret
