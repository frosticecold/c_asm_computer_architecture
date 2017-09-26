#include <stdio.h>
#include "even_number.h"

void printEvenNumbers(int* vec,int n){

    int i;
    for(i=0; i < n; i++){
        if(vec[i] % 2 == 0){
            printf("The number %d is even\n",vec[i]);
        }

    }


}