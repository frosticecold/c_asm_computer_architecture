.global sub_greater

sub_greater:
    # prologue
    pushl %ebp
    movl %esp, %ebp
    
    movl 8(%ebp), %eax      # 1st parameter (num1)
    movl 12(%ebp), %ecx     # 2nd parameter (num2)
    movl 16(%ebp), %edx     # 3rd parameter (*smaller)
    cmpl %ecx, %eax
    jl eaxissmaller
    movl %ecx, (%edx)
    jmp end

eaxissmaller:
    movl %eax, (%edx)

end:
    subl %ecx, %eax
    # epilogue
    movl %ebp , %esp
    popl %ebp
    ret
