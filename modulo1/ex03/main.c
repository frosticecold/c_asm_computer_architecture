#include <stdio.h>
#include "fill_vector.h"
#include "even_number.h"
int main(){

    int vec[5];
    const int VEC_SIZE = 5;
        
    //Vamos preencher um vector
    fill_vec(vec,VEC_SIZE);

    //Vamos imprimir todos os números pares
    printf("Para o vetor 1:\n");
    printEvenNumbers(vec,VEC_SIZE);

    int vec2[10] = {1,2,3,4,5,6,7,8,9,10};
    const int VEC2_SIZE = 10;
    printf("Para o vetor 2: \n");
    printEvenNumbers(vec2,VEC2_SIZE);
    return 0;
}