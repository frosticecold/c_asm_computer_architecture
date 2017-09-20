#include <stdio.h>
#include "fill_vector.h"

#define VECTOR_SIZE 30

int main() {
    int vec[VECTOR_SIZE], sum = 0;

    fill_vector(vec);
    for(int i = 0; i<N; i++) {
        sum += vec[i];
    }
    printf("Average: %d\n", sum/VECTOR_SIZE);
    return 0;
}