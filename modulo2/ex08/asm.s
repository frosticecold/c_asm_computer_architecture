.section .data
 .global op8
 .global op16
 .global op32a
 .global op32b

 .section .text
  .global specialsum

specialsum:
    # prologue
    pushl %ebp
    movl %esp,%ebp

    # inicializar tudo a zero
    movl $0,%eax
    movl $0,%ebx
    movl $0,%ecx
    movl $0,%edx

    # carregar os valores para os registos
    movb op8,%al
    movw op16,%bx
    jo output_overflow
    
    # adicionar a A+B
    addl %ebx,%eax
    jo output_overflow

    # (A+B-C)
    movl op32a,%ebx
    subl %ebx,%eax
    jo output_overflow

    # (A+B-C)+D
    movl op32b, %ecx
    addl %ecx, %eax

    jmp fim

output_overflow:
    movl $0,%eax
    movl $0,%edx
    jmp fim

fim:
    movl %ebp,%esp
    popl %ebp

    # o retorno de 64 bits é
    # EDX:EAX
    # H:L
    ret 
    