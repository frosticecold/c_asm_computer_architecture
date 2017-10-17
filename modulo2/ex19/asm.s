.section .data
 .global code
 .global currentSal

.section .text
  .global function

function: # 

    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl code, %ebx
    movl currentSal, %eax

    movl $101, %ecx
    cmpl %ebx, %ecx
    je code101

    movl $102, %ecx
    cmpl %ebx, %ecx
    je code102

    movl $103, %ecx
    cmpl %ebx, %ecx
    je code103
    
    jmp othercodes

code101:
    addl $100, %eax
    jmp fim

code102:
    addl $200, %eax
    jmp fim

code103:
    addl $150, %eax
    jmp fim

othercodes:
    addl $50, %eax
    jmp fim

fim: # fim
    # epilogue
    # movl %ecx,%eax
    movl %ebp, %esp
    popl %ebp

    ret
