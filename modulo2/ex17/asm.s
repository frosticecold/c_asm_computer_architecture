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
    subl %edx,%ebx
    movl %ebx, %eax
    movl VAR_DECREASE, %ecx
    imul %ecx
    jo output_overflow
    jmp fim

increase: # aumentar temperatura
    subl %ebx,%edx
    movl %edx, %eax
    movl VAR_INCREASE, %ecx
    imul %ecx
    jo output_overflow
    jmp fim

output_overflow:
    movl $0,%eax
    jmp fim

    ret
fim: # fim
    # epilogue
    movl %ebp, %esp
    popl %ebp

    ret
