.section .text
.global greater_date_asm

greater_date_asm:
    pushl %ebp
    movl %esp,%ebp

    pushl %ebx

    movl 8(%ebp),%ebx # registo para a data1
    movl 12(%ebp),%ecx # registo para a data2

comparar_ano:
    andl $0b1111111111111111,%ebx
    andl $0b1111111111111111,%ecx
    cmpl %ebx,%ecx  # comparar datas
    jg ret_data2    # se a data2 for maior
    cmpl %ebx,%ecx  # comparar de novo
    jl ret_data1    # se a data1 for maior
                    # senao vamos comparar o mes
comparar_mes:
    movl 8(%ebp),%ebx   #registo para a data1
    movl 12(%ebp),%ecx  #registo para a data2
    andl $0b11111111000000000000000000000000,%ebx # vamos extrair o mes da data1
    andl $0b11111111000000000000000000000000,%ecx # vamos extrair o mes da data2
    cmpl %ebx,%ecx  # comparar datas
    jg ret_data2    # se a data2 for maior
    cmpl %ebx,%ecx  # comparar de novo
    jl ret_data1    # se a data1 for maior
                    # senao vamos comparar os dias
comparar_dia:
    movl 8(%ebp),%ebx   #registo para a data1
    movl 12(%ebp),%ecx  #registo para a data2
    andl $0b00000000111111110000000000000000,%ebx # vamos extrair o dia da data1
    andl $0b00000000111111110000000000000000,%ecx # vamos extrair o dia da data2
    cmpl %ebx,%ecx  # comparar datas
    jg ret_data2    # se a data2 for maior
    cmpl %ebx,%ecx  # comparar de novo
    jl ret_data1    # se a data1 for maior
                    # senao sao iguais qualquer um serve
    movl 8(%ebp),%eax # como é igual qualquer um serve
    jmp end

ret_data1:
    movl 8(%ebp),%eax
    jmp end
ret_data2:
    movl 12(%ebp),%eax
end:
    popl %ebx

    movl %ebp,%esp
    popl %ebp
    ret
