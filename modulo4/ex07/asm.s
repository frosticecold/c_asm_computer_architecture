.global count_odd

count_odd:
    # prologue
    pushl %ebp
    movl %esp, %ebp

    pushl %ebx
    
    movl 8(%ebp), %esi      # 1st parameter (*vec)
    movl 12(%ebp), %ecx     # 2nd parameter (num)
    movl $0, %eax

iterate:
    movl (%esi), %ebx
    shr %ebx
    jnc isOdd
    addl $4, %esi
    loop iterate
    jmp end
    
isOdd:
    # epilogue
    incl %eax
    addl $4, %esi
    loop iterate
    jmp end

end:
    popl %ebx
    # epilogue
    movl %ebp, %esp
    popl %ebp
    ret
