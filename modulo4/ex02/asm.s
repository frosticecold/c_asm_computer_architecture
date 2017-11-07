.global sum_n

sum_n:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    movl 8(%ebp), %ecx       # 1st parameter
    movl $0, %eax

sum:
    addl %ecx, %eax
    loop sum
    # epilogue
    movl %ebp , %esp
    popl %ebp
    ret


