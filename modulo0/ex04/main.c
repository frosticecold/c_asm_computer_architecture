#include <stdio.h>
#include "fill_vector.h"

int main() {
    int vec[N], sum = 0;

    // Função para preencher o vetor
    fill_vector(vec);

    // Calcular a média do vetor
    for(int i = 0; i<N; i++) {
        sum += vec[i];
    }

    // Mostrar no ecrã a média calculada
    printf("Average: %d\n", sum/N);
    return 0;
}