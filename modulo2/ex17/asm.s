.section .data
 .global current
 .global desired

.section .text
  .global function

function: # 

    # prologue
    pushl %ebp
    movl %esp,%ebp

    movw current, %bx
    mov desired, %edx

    cmpw %bx, %dx
    jg increase
    je fim
    jl decrease

decrease:
    subw %dx,%bx
    movl %ebx, %eax
    movl $120, %ecx
    mul %ecx
    jmp fim

increase:
    subw %bx,%dx
    movl %edx, %eax
    movl $180, %ecx
    mul %ecx
    jmp fim

fim: # fim
    # epilogue
    # movl %ecx,%eax
    movl %ebp, %esp
    popl %ebp

    ret
