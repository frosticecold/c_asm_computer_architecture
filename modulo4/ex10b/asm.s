.global count_bits_zero_assembly
.global vec_count_bits_zero
count_bits_zero_assembly:
    pushl %ebp
    movl %esp, %ebp

    subl $4,%esp

    movl $0,-4(%ebp)

    movl 8(%ebp), %eax
    movl $32, %ecx

shifting:
    shll %eax
    jc skip_inc
    incl -4(%ebp)

skip_inc:
    loop shifting

    movl -4(%ebp),%eax
    addl $4,%esp
    movl %ebp, %esp
    popl %ebp
    ret

vec_count_bits_zero:
    pushl %ebp
    movl %esp,%ebp

    pushl %esi

    movl 8(%ebp),%esi
    movl 12(%ebp),%ecx
    movl $0,%edx

loop_vec:
    pushl %ecx
    pushl %edx
    pushl (%esi)
    call count_bits_zero_assembly
    addl $4,%esp
    popl %edx
    popl %ecx
    addl %eax,%edx
    addl $4,%esi
    loop loop_vec

    movl %edx,%eax
    popl %esi


    movl %ebp,%esp
    popl %ebp
    ret
