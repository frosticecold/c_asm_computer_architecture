.section .bss
 .comm ptrvec, 4
 .global ptrvec

.section .data
    .global num

.section .text
    .global vec_sum
    .global vec_avg

vec_avg:

    pushl %ebp
    movl %esp,%ebp

    pushl %ecx # preservar ecx
    pushl %edx # preserver edx

    call vec_sum # chamar a função vec_sum

    movl $0,%edx # limpar edx para efetuar divisão
    idivl num # dividir eax/num

    popl %edx # restaurar edx
    popl %ecx # restaurar ecx

    movl %ebp,%esp
    popl %ebp

    ret


vec_sum:
    pushl %ebp
    movl %esp,%ebp

    pushl %ebx
    pushl %esi
    pushl %edi

    movl ptrvec,%esi # mover a localização de memória de ptrvec para esi

    movl $0, %eax # acumulador
    movl $0, %ecx # contador
    jmp loop_vec_sum

loop_vec_sum:

    cmpl %ecx,num # comparar se chegamos ao limite
    jz end_vec_sum # se sim, salta paro fim
    addl (%esi),%eax # adicionar o valor do vetor a %eax
    addl $4,%esi # saltar para o próximo int
    incl %ecx; # incrementamos o contador
    jmp loop_vec_sum # repetir loop

end_vec_sum:
    popl %edi
    popl %esi
    popl %ebx

    movl %ebp,%esp
    popl %ebp

    ret
