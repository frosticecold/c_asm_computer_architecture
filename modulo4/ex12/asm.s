.global activate_bit_asm
.global activate_2bits
activate_bit_asm:
    # prologo
    pushl %ebp
    movl %esp,%ebp

    pushl %ebx # callee save

    movl 8(%ebp),%ebx # vamos guardar o apontador ptr em ebx
    movl 12(%ebp),%ecx # vamos guardar o número de rotações para ecx
    movl (%ebx),%edx # vamos mover para uma variável temporaria o valor do apontador
    movl $0,%eax # contador de vezes que se alterou o bit

    rorl %cl,%edx # Vamos rodar o número temporário para a direita
    andl $1,%edx # fazer um AND com 1 para ver se o bit menos significativo
    jnz end     # é 1 ou zero, se não for 1 então acaba, senão
    incl %eax   # incrementamos eax
    rorl %cl,(%ebx) # rodamos o valor do apontador
    addl $1,(%ebx) # adicionamos um ao bit menos singificativo que estava a zero
    roll %cl,(%ebx) # voltamos a por como estava o apontador
end:
    # callee pop
    popl %ebx

    # epilogo
    movl %ebp,%esp
    popl %ebp
    ret

activate_2bits:
    # prologo
    pushl %ebp
    movl %esp,%ebp

    pushl 12(%ebp) # vamos puxar para a stack a pos de bits a ativar
    pushl 8(%ebp) # vamos puxar para a stack o apontador
    call activate_bit_asm
    addl $4,%esp # vamos "limpar" a stack

    movl 12(%ebp),%edx # vamos mover o número de bits a ativar para edx
    pushl $31 # vamos puxar 31 para a stack
    subl %edx,(%esp) # vamos subtrair 31 - edx
    pushl 8(%ebp) # vamos puxar para a stack o apontador
    call activate_bit_asm # chamar a funcao
    addl $4,%esp # limpar a stack


    # epilogo
    movl %ebp,%esp
    popl %ebp
    ret

