.global sum_n

sum_n:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    movl 8(%esp), %ecx       # 1st parameter
    movl $0, %eax
    call sum
    # epilogue
    movl %ebp , %esp
    popl %ebp
    ret

sum:
    addl %ecx, %eax
    loop sum
    ret


