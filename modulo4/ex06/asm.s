.global dec_cube

dec_cube:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    
    movl 8(%ebp), %ecx      # 1st parameter (num1)
    movl 12(%ebp), %eax     # 2nd parameter (num2)
    decl (%ecx)
    movl %eax, %edx
    imull %edx, %eax
    imull %edx, %eax
    # epilogue
    movl %ebp , %esp
    popl %ebp
    ret
