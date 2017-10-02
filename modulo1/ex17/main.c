#include <stdio.h>
#include "swap.h"

int main() {
    int i;
    int vec1[10] = {0,1,2,3,4,5,6,7,8,9};
    int vec2[10] = {9,8,7,6,5,4,3,2,1,0};
    printf("Vec 1:\n");
    for(i=0; i<10; i++) {
        printf("%d ", vec1[i]);
    }
    printf("\nVec 2:\n");
    for(i=0; i<10; i++) {
        printf("%d ", vec2[i]);
    }
    swap(vec1, vec2, 10);
    printf("\n\nVec 1:\n");
    for(i=0; i<10; i++) {
        printf("%d ", vec1[i]);
    }
    printf("\nVec 2:\n");
    for(i=0; i<10; i++) {
        printf("%d ", vec2[i]);
    }
    printf("\n");
    return 0;
}