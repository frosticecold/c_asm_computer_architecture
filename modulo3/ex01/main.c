#include "asm.h"
#include <stdio.h>

char *ptr1;
int main() {

    printf("ptr = Isto vai testar o exercicio um\n");
    ptr1 = "Isto vai testar o exercicio um";
    int result = space_count();
    printf("Espaços: %d\n",result);

    printf("ptr = Aposto que nao tem mais de sete espacos\n");
    ptr1 = "Aposto que nao tem mais de sete espacos";
    result = space_count();
    printf("Espaços: %d\n",result);

    printf("ptr = Conta tres espacos\n");
    ptr1 = "Conta tres espacos .";
    result = space_count();
    printf("Espaços: %d\n",result);

}