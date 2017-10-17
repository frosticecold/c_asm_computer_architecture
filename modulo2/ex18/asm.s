.section .data
 .global op

.section .text
  .global function

function: # 

    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl op, %ebx
    movl $0, %ecx

    cmpl %ecx, %ebx
    jg positive
    jl negative

positive:
    shr %ebx
    # Se houver carry então é impar positivo
    jc odd_pos

    # Senão é par positivo
    movl $1, %eax
    jmp fim

negative:
    shr %ebx
    # Se houver carry então é ímpar negativo
    jc odd_neg

    # Se não é par negativo
    movl $2, %eax
    jmp fim

odd_pos:
    # É impar positivo
    movl $3, %eax
    jmp fim

odd_neg:
    # é impar negativo
    movl $4, %eax
    jmp fim

fim: # fim
    # epilogue
    # movl %ecx,%eax
    movl %ebp, %esp
    popl %ebp

    ret
