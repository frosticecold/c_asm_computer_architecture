.section .data
 .global op8
 .global op16
 .global op32a
 .global op32b

 .section .text
  .global specialsumunsig

specialsumunsig:
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
    
    # adicionar a A+B
    addw %bx,%ax
    # não é preciso verificar o carry pois é um registo de 32bits

    # (A+B-C) vamos subtrair a (A+B)-C
    movl op32a,%ebx
    subl %ebx,%eax
    cmpl $0,%eax # caso o número seja negativo, então erro
    jl erro_neg
    # (A+B-C)+D senão vamos somar 
    movl op32b, %ecx
    addl %ecx, %eax
    adc $0,%edx # caso houver carry, adicionar ao edx o carry

    jmp fim
erro_neg:
    movl $0,%eax
    movl $0,%ebx

    jmp fim
fim:
    movl %ebp,%esp
    popl %ebp

    # o retorno de 64 bits é
    # EDX:EAX
    # H:L
    ret 
    