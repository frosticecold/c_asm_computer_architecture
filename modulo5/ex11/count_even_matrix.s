.section .text
# int count_even_matrix(int **m, int y, int k);
.global count_even_matrix
count_even_matrix:
    # prologo
    pushl %ebp
    movl %esp,%ebp

    # callee save
    #pushl %ebx
    pushl %esi
    pushl %edi

    cmpl $0,12(%ebp) # comparar se o número de linhas é válido
    jle end
    cmpl $0,16(%ebp) # comparar se o número de colunas é válido
    jle end

    movl $0,%eax        # acumulador de número de números pares
    movl 8(%ebp),%esi   # mover o apontador da matriz para esi
    movl $0,%ecx        # índice da linha
    movl $0,%edx        # índice de elemento do vetor

    movl (%esi),%edi    # mover o vetor inicial da matrix para edi
.loop_vec:
    cmpl 16(%ebp),%edx  # comparar se se chegou ao fim do vetor
    jge prox_vec        # então passar ao prox_vec
    testl $0b1,(%edi,%edx,4)   # testar se o número é par ou ímpar
    jz inc_par          # incrementar o número de pares se o número for par
    incl %edx           # próxima coluna
    jmp .loop_vec
inc_par:
    incl %eax           # incrementar o número de pares
    incl %edx           # incrementar o índice da coluna
    cmpl 16(%ebp),%edx  # comparar se chegamos ao fim do vetor
    jge prox_linha      # se sim passar para a próxima linha da matriz
    jmp .loop_vec
prox_linha:
    movl $0,%edx        # reiniciar o índice da coluna
    incl %ecx           # incrementar a linha
    cmpl 12(%ebp),%ecx  # comparar se já percorreu as linhas todas
    jge end
    jmp .loop_vec       # senão passar para a próxima linha
prox_vec:
    movl $0,%edx        # reiniciar o indice de edx
    incl %ecx           # próxima linha
    cmpl 12(%ebp),%ecx  # comparar se se chegou ao fim dos vetores
    jge end             # então acabar
    addl $4,%esi        # passar para o próximo vetor
    movl (%esi),%edi    # mover o vetor para registo edi
    jmp .loop_vec
end:
    # callee save
    #popl %ebx
    popl %esi
    popl %edi
    # epilogo
    movl %ebp,%esp
    popl %ebp
    ret
