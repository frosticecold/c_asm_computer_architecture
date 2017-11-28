.section .data
    .equ W_OFFSET,0
    .equ J_OFFSET,8
    .equ C_OFFSET,12
.section .text
# void save_data(s2 *s,short vw[3], int vj, char vc[3]);
.global save_data
save_data:
    # prologo
    pushl %ebp
    movl %esp,%ebp

    # callee save

    movl 8(%ebp),%eax   # mover a estrutura para eax
    movl $0,%ecx        # indice a percorrer o vetor
    movl 12(%ebp),%esi  # mover o vetor de shorts a copiar para a estrutura para esi

.loop_short:
    movw (%esi),%dx         # copiar o elemento do vetor de shorts para a estrutura
    movw %dx,(%eax,%ecx,2)  # calcular endereço para onde copiar o elemento do vetor de shorts para a estrutura
    incl %ecx               # próximo elemento
    addl $2,%esi            # passar para o próximo elemento a 2 bytes
    cmpl $3,%ecx            # comparar se copiamos os 3 elementos
    jne .loop_short         # senão repetir

    movl 16(%ebp),%edx        # copiar o vj para edx
    movl %edx,J_OFFSET(%eax) # copiar vj para o elemento j da estrutura

    movl $0,%ecx            # reiniciar o íncide de ecx
    movl 20(%ebp),%esi      # mover o vetor de chars para esi
.loop_char:
    movb (%esi),%dl         # copiar o caractére do vetor de chars para o registo dl
    movb %dl,C_OFFSET(%eax,%ecx,1)  # copiar o caractére para o vetor de chars na estrutura
    incl %esi               # próximo char
    incl %ecx               # próximo elemento
    cmpl $3,%ecx            # comparar se copiamos os 3 elementos
    jne .loop_char          # senão repetir



    # callee save
    # epilogo
    movl %ebp,%esp
    popl %ebp
    ret
    