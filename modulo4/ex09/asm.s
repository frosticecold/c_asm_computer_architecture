.global calc

calc:
    pushl %ebp
    movl %esp,%ebp

    subl $4,%esp

    movl 8(%ebp),%edx
    movl 12(%ebp),%ecx
    movl (%ecx),%eax
    movl %eax,%ecx
    subl %edx,%ecx
    movl %ecx,-4(%ebp)
    movl 16(%ebp),%eax
    imull -4(%ebp)

    addl $4,%esp

    movl %ebp,%esp
    popl %ebp
    ret
