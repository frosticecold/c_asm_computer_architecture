.section .bss
    .comm ptrvec,4
    .global ptrvec

.section .data

    .global x
    .global num

.section .text
    .global exists
    .global vec_diff
exists:
    pushl %ebp
    movl %esp,%ebp

    pushl %ebx
    pushl %esi
    pushl %edi

    movl ptrvec,%esi
    movl num,%ecx
    movl $0,%edx 
    movl $0,%eax
    movl $0,%ebx

loop_exists:
    movw (%esi),%bx
    cmpw x,%bx
    je increment
    addl $2,%esi
    loop loop_exists
    jmp output

increment:
    incl %edx
    addl $2,%esi
    loop loop_exists
    jmp output
    jmp exists_fim
output:
    cmpl $1,%edx
    jg output_rep
    movl $0,%eax
    jmp exists_fim
output_rep:
    movl $1,%eax
    jmp exists_fim
exists_fim:
    popl %edi
    popl %esi
    popl %ebx

    movl %ebp,%esp
    popl %ebp

    ret
vec_diff:
    pushl %ebp
    movl %esp,%ebp

    pushl %esi

    movl ptrvec,%esi
    movl num,%ecx
    movl $0,%eax
    movl $0,%ebx
loop_diff:
    movw (%esi),%dx
    movw %dx,x

    pushl %ecx
    pushl %edx
    call exists
    popl %edx
    popl %ecx

    cmpl $0,%eax
    je increment_diff
    addl $2,%esi
    loop loop_diff
    jmp diff_exit


increment_diff:
    incl %ebx
    addl $2,%esi
    loop loop_diff
    jmp diff_exit

diff_exit:

    movl %ebx,%eax

    movl %ebp,%esp
    popl %ebp

    ret
