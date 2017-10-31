.section .data
    .global ptrgrades
    .global ptrfreq
.section .text
    .global frequencies

frequencies:
    pushl %ebp
    movl %esp,%ebp

    pushl %ebx
    pushl %esi
    pushl %edi

    movl ptrgrades,%esi
    movl ptrfreq,%edi
    movl num,%ecx
    decl %ecx

freq_loop:
    movl (%esi),%edx
    movl (%edi,%edx,4), %ebx
    incl %ebx
    movl %ebx,(%edi,%edx,4)
    addl $4,%esi
    loop freq_loop

end_freq:
    popl %edi
    popl %esi
    popl %ebx

    movl %ebp,%esp
    popl %ebp

    ret
