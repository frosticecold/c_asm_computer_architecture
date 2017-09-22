#include <stdio.h>

#define N 30

void fill_vector(int *vec) {
    int i = 0;
    printf("Insert 30 numbers (press Enter after each one):\n");
    // Enquanto não tiver 30 numeros pede sempre mais e coloca-os no vetor
    while(i<N) {
        scanf("%d", &vec[i]);
        i++;
    }
}