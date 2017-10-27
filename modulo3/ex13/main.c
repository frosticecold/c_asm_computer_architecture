#include <stdio.h>
#include "asm.h"
int num=5;
int array[] = {-192,-182,4,-18,20};
int* ptrvec;

void print_vec(int array[num]) {
    for(int i=0; i<num; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    ptrvec=array;
    print_vec(array);
    vec_fill();
    print_vec(array);

    return 0;
}