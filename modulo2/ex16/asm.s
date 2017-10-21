.section .data
 .global i

 opa:
    .int 10
 opb:
    .int 5
 counter:
    .int 0

.section .text
  .global function

function: # Sum 0 -> i A/B

    # prologue
    pushl %ebp
    movl %esp,%ebp

    # limpar registos
    movl $0,%eax
    movl $0,%ebx
    movl $0,%ecx
    movl $0,%edx
    movl $0,counter

    # entra no loop
    jmp floop

    jmp fim

floop:
    # inicia processo de contagem
    movl counter,%ebx
    inc %ebx
    movl %ebx,counter

    # sumatorio
    addl %eax,%ecx

    # compara i com contador; termina se for maior
    cmpl i,%ebx
    jg fim

    # A e B
    movl opa,%eax
    movl opb,%ebx
    
    # divisao de A por B
    movl $0,%edx
    idivl %ebx
    
    # i * (A/B)
    movl counter,%ebx
    imul %ebx,%eax

    jo output_overflow
    # loop enquanto counter < i
    jmp floop 

output_overflow:
    movl $-1,%eax
    jmp fim

fim: # fim
    # epilogue
    movl %ecx,%eax
    movl %ebp, %esp
    popl %ebp

    ret
