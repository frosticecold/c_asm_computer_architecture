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
    mov op16,%ax
    mov op8,%dl
    
    # adicionar a eax o edx
    addl %edx,%eax
    # limpar edx
    movl $0,%edx
    
    # adicionar o carry a edx
    adcl $0,%edx

    # adicionar ambos valores 32bits a ebx
    movl op32a,%ebx
    addl op32b,%ebx
    # adicionar o carry a ecx
    adcl $0,%ecx

    # subtrair a eax ebx
    subl %ebx,%eax
    # subtrair o carry de edx a ecx
    sbbl %ecx,%edx


    movl %ebp,%esp
    popl %ebp

    # o retorno de 64 bits é
    # EDX:EAX
    # H:L
    ret 
    