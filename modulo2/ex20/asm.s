.section .data
 .global g
 .global i
 .global j

.section .text
  .global f
  .global f2
  .global f3
  .global f4

f:
    # prologue
    pushl %ebp
    movl %esp,%ebp

    movl i, %ebx
    movl j, %ecx

    cmpl %ebx, %ecx
    je equalf

    addl %ebx, %ecx
    movl %ecx, %eax
    
    jmp fim

equalf:
    subl %ecx, %ebx
    movl %ebx, %eax

    jmp fim

f2:
    # prologue
    pushl %ebp
    movl %esp, %ebp

    movl i, %eax
    movl j, %ebx

    cmpl %ebx, %eax
    jle f2inc

    inc %ebx
    mul %ebx

    jmp fim

f2inc:
    inc %eax
    mul %ebx

    jmp fim

f3:
    # prologue
    pushl %ebp
    movl %esp, %ebp

    movl i, %eax
    movl j, %ebx
    movl i, %ecx

    cmpl %ebx, %eax
    jge f3inc
    jl f3other

    jmp fim

f3inc:
    addl %ebx, %eax
    inc %ecx
    movl $0, %edx
    div %ecx

    jmp fim

f3other:
    mul %ebx

    addl %ecx, %ebx
    addl $2, %ebx

    div %ebx
    jmp fim

f4:
    # prologue
    pushl %ebp
    movl %esp, %ebp

    movl i, %eax
    movl j, %ebx
    movl j, %ecx

    addl %eax, %ebx
    movl $10, %edx
    cmpl %edx, %ebx

    jg f4greater

    movl %ecx, %eax
    movl $3, %ebx
    movl $0, %edx
    div %ebx

    jmp fim

f4greater:
    movl $2, %ebx
    mul %ebx

    jmp fim

fim: # fim
    # epilogue
    movl %ebp, %esp
    popl %ebp

    ret
