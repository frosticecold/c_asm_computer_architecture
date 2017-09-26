#include <stdio.h>
#include "fill_vector.h"
int main(){

    int vector[20];
    int VEC_SIZE = 20;
    
    //Vamos inicializar o vector a -1;
    int i;
    for(i=0; i < VEC_SIZE; i++){
        vector[i] = -1;
    }

    //Vamos preencher o vector
    fill_vec(vector,VEC_SIZE);

    //Vamos escrever o vector;
    for(i=0;i<VEC_SIZE;i++){
        printf("vector[%d] is :%d\n",i,vector[i]);
    }

    return 0;
}