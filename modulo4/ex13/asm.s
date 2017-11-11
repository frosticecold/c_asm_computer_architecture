.global activate_bits_asm
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

