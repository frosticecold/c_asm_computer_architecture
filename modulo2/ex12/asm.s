.section .data
    largura:
        .int 10

    comprimento:
        .int 20

.section .text
  .global getArea

getArea:
    # prologue
    pushl %ebp
    movl %esp,%ebp

    # area retangulo = comprimento * largura
    movl largura,%eax
    imul comprimento,%eax
    jo overflow
    
    jmp fim

overflow:
    movl $-1,%eax
    jmp fim
fim:
    # epilogue
    movl %ebp,%esp
    popl %ebp

    ret 
