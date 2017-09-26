#include <stdio.h>
#include "fill_vector.h"
#include "even_number.h"
int main(){

    int vec[5];
    int VEC_SIZE = 5;
    int i;
    
    //Vamos preencher um vector
    fill_vec(vec,VEC_SIZE);

    //Vamos imprimir todos os números pares
    printEvenNumbers(vec,VEC_SIZE);
    return 0;
}