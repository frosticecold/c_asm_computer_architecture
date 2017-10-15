.section .data
    numa:
        .int 10

    numb:
        .int 20

 .section .text
  .global getArea
getArea:
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl numa,%eax
    imul numb,%eax


    jmp fim

fim:
    # epilogue

    movl %ebp,%esp
    popl %ebp

    # o retorno é
    # EAX
    # H:L
    ret 
