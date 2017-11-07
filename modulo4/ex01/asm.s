.global square

square:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    movl 8(%esp), %eax       # 1st parameter
    imull %eax, %eax
    # epilogue
    movl %ebp , %esp
    popl %ebp
    ret


