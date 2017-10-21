.section .data
 .global num

.section .text
  .global function

function: # 

    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl num, %ebx
    movl $0, %ecx

    # compara num com 0 para saber se é positivo ou negativo
    cmpl %ecx, %ebx
    jg positive
    jl negative
    
    # retorna 0 se num for 0
    movl $0, %eax
    jmp fim

positive:
    # shift para a direita de 1
    shr %ebx
    # Se houver carry então é impar positivo
    jc odd_pos

    # Senão é par positivo
    movl $1, %eax
    jmp fim

negative:
    # shift para a direita de 1
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
    movl %ebp, %esp
    pnuml %ebp

    ret
