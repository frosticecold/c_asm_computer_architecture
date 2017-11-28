.section .data
    .equ I_OFFSET,0
    .equ C_OFFSET,4
    .equ J_OFFSET,8
    .equ D_OFFSET,12
.section .text
# void save_data(s1 *s, int vi, char vc, int vj, char vd);
.global save_data
    save_data:
    # prologo
    pushl %ebp
    movl %esp,%ebp

    # callee save

    movl 8(%ebp),%eax   # mover a estrutura para eax
    movl 12(%ebp),%edx  # mover vi para edx
    movl %edx,I_OFFSET(%eax)    # mover valor de vi para o offset I

    movl 16(%ebp),%edx  # mover o valor de vc para edx
    movb %dl,C_OFFSET(%eax) # mover o valor de vc para o offset C

    movl 20(%ebp),%edx  # mover o valor de vj para edx
    movl %edx,J_OFFSET(%eax)    # mover o valor de vj para o offset J

    movl 24(%ebp),%edx  # mover o valor de vd para edx
    movb %dl,D_OFFSET(%eax)
    # callee save
    # epilogo
    movl %ebp,%esp
    popl %ebp
    ret
    