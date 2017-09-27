#include <stdio.h>
#include "array_sort.h"

int main() {

    //Iniciar variaveis para utilizacao
    int s = 7,i;
    int v[7] = {4,2,3,7,8,1,5};

    printf("\nNot Sorted:\n");
    for(i=0; i<s; i++) {
        printf("%d", v[i]);
    }
    printf("\n");
    //Sort
    array_sort_ptr(v, s);

    printf("\nSorted:\n");

    for(i=0; i<s; i++) {
        printf("%d", v[i]);
    }

    printf("\n");

    return 0;
}