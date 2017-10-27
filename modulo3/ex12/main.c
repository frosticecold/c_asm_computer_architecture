#include <stdio.h>
#include "asm.h"
int num=5;
long int array[] = {1008,1000,998,162,1004};
long int* ptrvec;

void print_vec(long int array[num]) {
    for(int i=0; i<num; i++) {
        printf("%ld ", array[i]);
    }
    printf("\n");
}

int main() {
    ptrvec=array;
    print_vec(array);
    int res = vec_zero();
    printf("Elementos alterados: %d\n",res);
    print_vec(array);

    return 0;
}