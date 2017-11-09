.global count_bits_zero_assembly

count_bits_zero_assembly:
    pushl %ebp
    movl %esp, %ebp

    subl $4,%esp

    movl $0,-4(%ebp)

    movl 8(%ebp), %eax
    movl $32, %ecx

shifting:
    shl %eax
    jc skip_inc
    incl -4(%ebp)

skip_inc:
    loop shifting

    movl -4(%ebp),%eax
    addl $4,%esp
    movl %ebp, %esp
    popl %ebp
    ret