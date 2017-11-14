.section .text
.global join_bits_asm
join_bits_asm:
    pushl %ebp
    movl %esp,%ebp

    pushl %ebx
    movl $0,%eax
    movl 12(%ebp),%ebx # int b
    movl 16(%ebp),%ecx # int pos
    

    # rorl %cl,%ebx # rodar para a direita n casas
    rorl %cl,%eax
    pushl %ecx # guardar as n casas
    movl $32,%edx # guardar em edx o tamanho de um int
    subl %ecx,%edx # subtrair 32 a n
    movl %edx,%ecx # mover para ecx o numero de vezes a rodar
    pushl %ecx
mask_b:
    addl $1,%eax # adicionar o bit menos significativo a 1
    rorl %eax # rodar para a direita
    loop mask_b # loop enquanto podermos rodar 
    
    popl %ecx # restaurar quantas vezes rodamos
    roll %eax # rodar para a esquerda n vezes
    popl %ecx # restaurar quantas vezes rodamos inicialmente
    roll %eax # rodar para a esquerda n vezes para obter número inicial
    movl %eax,%edx # copiar a máscara para edx
    notl %edx # negar a máscara

    movl 8(%ebp),%ecx # int a
    andl %eax,%ebx # aplicar a mascara a b
    andl %edx,%ecx # aplicar a mascara a A
    orl %ebx,%ecx # fazer o OR A | B
    movl %ecx,%eax # mover o resultado que está em ecx para eax

    popl %ebx

    movl %ebp,%esp
    popl %ebp
    
    ret
