#include "asm.h"
#include <stdio.h>

int num=0;

void print_vec(int vec[], int num) {
    int i;
    for(i=0; i<num;i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");
}

int main() {
    num = 5;
    int str1[] = {1,2,3,4,5};
    print_vec(str1, num);
    ptrvec=str1;
    vec_inc();
    print_vec(str1, num);
    printf("\n");

    num = 5;
    int str2[] = {12,5,19,28,10};
    print_vec(str2, num);
    ptrvec=str2;
    vec_inc();
    print_vec(str2, num);
}
