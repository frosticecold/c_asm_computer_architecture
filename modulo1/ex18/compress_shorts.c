#include "compress_shorts.h"
#include <limits.h>
void compress_shorts(short *shorts, int n_shorts, int *integers) {

    //Shifts necessários para passar de short para int (8*2)
    const int shift = ((CHAR_BIT * (sizeof(int)/sizeof(short))));
    int i;
    int j = 0;
    //Ciclo para percorrer o vetor de shorts 2 a 2
    for(i =0; i < n_shorts;i+=2){
        //Preenche cada posicao do vetor de inteiros com 2 shorts
        integers[j]+= shorts[i];
        //Shift do primeiro short para a esquerda
        integers[j]= integers[j] << shift;
        integers[j]+=shorts[i+1];
        j++;
    }
}