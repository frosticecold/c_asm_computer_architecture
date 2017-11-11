.global activate_bits_asm
.global activate_invert_bits
activate_bits_asm:
    pushl %ebp
    movl %esp,%ebp

    
    movl 8(%ebp),%eax
    movl 12(%ebp),%ecx

    rorl %cl,%eax
    movl $32,%edx
    subl %ecx,%edx
    movl %edx,%ecx
mask_left:
    or $1,%eax
    rorl %eax
    loop mask_left
    movl 16(%ebp),%ecx
    decl %ecx
    pushl %ecx
mask_right:
    or $1,%eax
    rorl %eax
    loop mask_right
    popl %ecx
    roll %cl,%eax

    movl %ebp,%esp
    popl %ebp
    ret

activate_invert_bits:
    pushl %ebp
    movl %esp,%ebp

    pushl 16(%ebp)
    pushl 12(%ebp)
    pushl 8(%ebp)
    call activate_bits_asm
    addl $12,%esp

    notl %eax

    movl %ebp,%esp
    popl %ebp
    ret
