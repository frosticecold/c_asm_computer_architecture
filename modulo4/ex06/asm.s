.global test_equal

test_equal:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    
    movl 8(%ebp), %esi      # 1st parameter (*a)
    movl 12(%ebp), %edi     # 2nd parameter (*b)
    
iterate:
    movl $0, %edx
    cmpl $0, (%esi)
    jz endEqual
    movl (%edi), %edx
    cmpl (%esi), %edx
    jne endNotEqual
    incl %esi
    incl %edi
    jmp iterate
    
endEqual:
    # epilogue
    movl $1, %eax
    movl %ebp, %esp
    popl %ebp
    ret

endNotEqual:
    # epilogue
    movl $0, %eax
    movl %ebp, %esp
    popl %ebp
    ret
