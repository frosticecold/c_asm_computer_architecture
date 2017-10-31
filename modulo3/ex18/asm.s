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
    jle reloop # senão reloop
    movl (%esi,%edx,4),%ebx # senão mover o próximo número para o ebx
    incl %edx
    cmpl %ebx,(%esi,%edx,4) # comparar se o 2º segundo número é menor que o 3º
    jle reloop # se menor então reloop
    decl %edx # decrementa um indice
    incl %eax # então é porque encontra-mos uma sequencia, incrementar
    loop loop_array # loop
    jmp iterate_end # ir para o fim

reloop:
    decl %ecx # decrementar o contador
    incl %edx # incrementar edx para ser indíce para o próximo número
    cmpl $0,%ecx # se ecx = 0 então acabou senão, voltar ao loop
    jge loop_array
iterate_end:
    popl %esi
    popl %ebp

    movl %ebp,%esp
    popl %ebp
    ret
