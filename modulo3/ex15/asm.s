.section .data
    .global ptrvec
.section .text
    .global array_sort

array_sort:
    pushl %ebp
    movl %esp,%ebp
    pushl %esi
    movl num,%ecx
    decl %ecx
    movl ptrvec,%esi
outerloop:
    pushl %ecx
    call innerfunction
    popl %ecx
    loop outerloop

outer_exit:
    popl %esi
    movl %ebp,%esp
    popl %ebp

    ret

innerfunction:
    pushl %ebp
    movl %esp,%ebp

    pushl %ebx
    pushl %esi
    pushl %edi

    movl $0,%edx  # indice do esi
    movl num,%ecx # ecx é o contador para o loop
    decl %ecx
    movl ptrvec,%esi
for_inner_loop:
    movl (%esi,%edx,4),%eax
    incl %edx
    movl (%esi,%edx,4),%ebx
    cmpl %eax,%ebx
    jl swap
    loop for_inner_loop
    jmp inner_end
swap:
    decl %edx
    movl %ebx,(%esi,%edx,4)
    incl %edx
    movl %eax,(%esi,%edx,4)
    loop for_inner_loop
inner_end:
    popl %edi
    popl %esi
    popl %ebx

    movl %ebp,%esp
    popl %ebp

    ret

