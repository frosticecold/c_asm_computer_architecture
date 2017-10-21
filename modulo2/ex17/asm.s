.section .data
 .global current
 .global desired

 VAR_DECREASE:
    .int 120
 VAR_INCREASE:
    .int 180

.section .text
  .global function

function: # 
    # prologue
    pushl %ebp
    movl %esp,%ebp

    # limpa registos
    movl $0,%ebx
    movl $0,%edx

    movw current, %bx
    movw desired, %dx

    # comparar temperaturas
    cmpw %bx, %dx
    jg increase
    je fim
    jl decrease

decrease: # descer temperatura
    sub %edx,%ebx
    movl %ebx, %eax
    movl VAR_DECREASE, %ecx
    mul %ecx
    jmp fim

increase: # aumentar temperatura
    sub %ebx,%edx
    movl %edx, %eax
    movl VAR_INCREASE, %ecx
    mul %ecx
    jmp fim

fim: # fim
    # epilogue
    movl %ebp, %esp
    popl %ebp

    ret
