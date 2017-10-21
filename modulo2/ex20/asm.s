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

    cmpl %ebx, %ecx # (i==j)
    je equalf

    # senão h = i +j
    addl %ebx, %ecx
    movl %ecx, %eax
    
    jmp fim

equalf: # h = i-j
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
    jle f2inc # se i <= j

    inc %ebx # incrementar o i
    imull %ebx # multiplicar i por j

    jmp fim

f2inc: # se i <= j
    inc %eax # incrementar o i
    imull %ebx # h= i * j

    jmp fim

f3:
    # prologue
    pushl %ebp
    movl %esp, %ebp

    movl i, %eax 
    movl j, %ebx
    movl i, %ecx

    cmpl %ebx, %eax # se i >= j
    jge f3inc 
    jl f3other # senão

    jmp fim

f3inc: 
    addl %ebx, %eax # h = i + j
    inc %ecx # g = i + 1
    movl $0, %edx # limpar o registo edx
    idivl %ecx # r = h/g

    jmp fim

f3other:
    imull %ebx # h = i*j

    addl %ecx, %ebx # g = i + j
    addl $2, %ebx #  g= g + 2

    idivl %ebx # r = h/g
    jmp fim

f4:
    # prologue
    pushl %ebp
    movl %esp, %ebp

    movl i, %eax
    movl j, %ebx
    movl j, %ecx

    addl %eax, %ebx # i + j
    movl $10, %edx
    cmpl %edx, %ebx # se i + j > 10

    jg f4greater # então h = 2 * i

    movl %ecx, %eax # se não h=j/3
    movl $3, %ebx
    movl $0, %edx
    idivl %ebx

    jmp fim

f4greater:
    movl $2, %ebx 
    imull %ebx # h = 2 * i

    jmp fim

overflow:
    movl $-1,%eax
    
    movl %ebp, %esp
    popl %ebp
    
    ret

fim: # fim
    jo overflow
    # epilogue
    movl %ebp, %esp
    popl %ebp

    ret
