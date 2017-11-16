.section .text
    .global mixed_sum

mixed_sum:
    pushl %ebp
    movl %esp, %ebp

    pushl %ebx

    movl 8(%ebp), %eax  # a
    movl 12(%ebp), %ecx # b
    movl 16(%ebp), %edx # pos

    pushl %edx  # pos
    pushl %ecx  # b
    pushl %eax  # a
    call join_bits_asm  # (a,b,pos)
    movl %eax, %ebx
    addl $12, %esp

    movl 8(%ebp), %eax
    movl 12(%ebp), %ecx # b
    movl 16(%ebp), %edx # pos

    pushl %edx  # pos
    pushl %eax  # a
    pushl %ecx  # b
    call join_bits_asm  # (b,a,pos)
    addl $12, %esp
    addl %ebx, %eax

    popl %ebx
    
    movl %ebp, %esp
    popl %ebp
    ret
