.section .text
.global join_bits_asm
join_bits_asm:
    pushl %ebp
    movl %esp,%ebp

    movl 12(%ebp), %eax
    movl 16(%ebp), %ecx

    sarl %cl, %eax
    sall %cl, %eax

    pushl %eax

    movl 8(%ebp), %eax

    movl $32, %edx
    subl %ecx, %edx
    movl %edx, %ecx

    sall %cl, %eax
    shrl %cl, %eax

    popl %ecx

    orl %ecx,%eax


    movl %ebp,%esp
    popl %ebp
    
    ret
