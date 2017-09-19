#include <stdio.h>
#include "fill_vector.c"

int main() {
    int vec[30], sum = 0;

    fill_vector(vec);
    for(int i = 0; i<N; i++) {
        sum += vec[i];
    }
    printf("Average: %d", sum/30);
    return 0;
}