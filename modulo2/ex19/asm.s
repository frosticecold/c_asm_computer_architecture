.section .data
 .global code
 .global currentSal

.section .text
  .global function

function: # 

    # prologue
    pushl %ebp
    movl %esp,%ebp

    # mover o codigo para ebx
    movl code, %ebx
    # mover o salario para eax
    movl currentSal, %eax

    # caso seja codigo 101
    movl $101, %ecx
    cmpl %ebx, %ecx
    je code101

    # caso seja 102
    movl $102, %ecx
    cmpl %ebx, %ecx
    je code102

    # caso seja 103
    movl $103, %ecx
    cmpl %ebx, %ecx
    je code103
    
    # caso seja outrocodigo
    jmp othercodes
    
    
code101:
    addl $100, %eax
    jmp output

code102:
    addl $200, %eax
    jmp output

code103:
    addl $150, %eax
    jmp output

othercodes:
    addl $50, %eax
    jmp output
output:
    jc o_carry
    jo o_overflow
    jmp fim
o_carry:
    movl $-1,%eax
    jmp fim
o_overflow:
    movl $-1,%eax
    jmp fim
fim: # fim
    # epilogue
    # movl %ecx,%eax
    movl %ebp, %esp
    popl %ebp

    ret
