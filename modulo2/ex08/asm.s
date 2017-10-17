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
    
    # adicionar a eax o ebx
    addl %ebx,%eax
    # limpar ebx
    movl $0,%ebx

    # adicionar ambos valores 32bits a ebx
    movl op32a,%ebx
    movl op32b, %ecx
    subl %ebx,%eax
    addl %ecx, %eax


    movl %ebp,%esp
    popl %ebp

    # o retorno de 64 bits é
    # EDX:EAX
    # H:L
    ret 
    