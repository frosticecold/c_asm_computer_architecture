.global calculate

calculate:
    pushl %ebp
    movl %esp,%ebp

    pushl %ebx
    subl $8,%esp

    sum:
    movl 8(%ebp),%edx
    movl 12(%ebp),%ecx
    addl %edx,%ecx
    movl %ecx,-4(%ebp)
    pushl %ecx # push sum
    movl 12(%ebp),%ecx
    pushl %ecx # push b
    pushl %edx # push a
    movl $'+',%ecx 
    pushl %ecx # push operador
    call print_result
    subl $16,%esp

    mult:
    movl 12(%ebp),%ecx # mover valor b
    movl 8(%ebp),%eax # movar valor a
    imull %ecx,%eax # a*b
    movl %eax,-8(%ebp) # mover a multiplicacao para product

    pushl %eax # push product
    pushl %ecx # push b
    movl 8(%ebp),%eax
    pushl %eax # push a
    movl $'*',%eax
    pushl %eax # push operador *
    call print_result
    subl $16,%esp

    movl -4(%ebp),%eax # mover a somar
    movl -8(%ebp),%ecx # mover a multiplicacao
    subl %ecx,%eax
    
    addl $8,%esp
    popl %ebx

    movl %ebp,%esp
    popl %ebp
    ret
