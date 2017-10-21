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
    imull comprimento,%eax
    
    jmp output

output:
    jo o_overflow
    jmp fim

o_carry:
    mov $0,%eax
    jo o_overflow
    jmp fim

o_overflow:
    mov $0,%eax
    jmp fim

fim:
    # epilogue
    movl %ebp,%esp
    popl %ebp

    ret 
