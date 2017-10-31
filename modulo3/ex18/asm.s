.section .data
    .global ptrvec
.section .text
    .global count_seq

count_seq:
    pushl %ebp
    movl %esp,%ebp

    call iterate

    movl %ebp,%esp
    popl %ebp

    ret

iterate:
    pushl %ebp
    movl %esp,%ebp

    pushl %ebp
    pushl %esi
    
    movl $0,%eax
    movl $0,%edx # indice do array
    movl num,%ecx # contador
    cmpl $3,%ecx   # se tiver menos do que 3 numeros acabar
    jle iterate_end
    subl $2,%ecx # comparar -2 números
    movl ptrvec,%esi
loop_array:
    movl (%esi,%edx,4),%ebx # mover o primeiro numero para ebx
    incl %edx # incrementar o indice
    cmpl %ebx,(%esi,%edx,4) # comparar se o 1º número é menor que o a seguir
    jle reloop # senão volta ao loop
    movl (%esi,%edx,4),%ebx # senão mover o próximo número para o ebx
    incl %edx
    cmpl %ebx,(%esi,%edx,4) # comparar se o 2º segundo número é menor que o 3º
    jle reloop
    decl %edx
    incl %eax
    loop loop_array
    jmp iterate_end

reloop:
    decl %ecx
    incl %edx
    cmpl $0,%ecx
    jge loop_array
iterate_end:
    popl %esi
    popl %ebp

    movl %ebp,%esp
    popl %ebp
    ret
