#include "compress_shorts.h"
#include <limits.h>
void compress_shorts(short *shorts, int n_shorts, int *integers) {

    const int shift = (CHAR_BIT / (sizeof(int)/sizeof(short)));
    int i;
    int j = 0;
    for(i =0; i < n_shorts;i+=2){
        integers[j]+= shorts[i];
        integers[j]= integers[j] << shift;
        integers[j]+=shorts[i+1];
        j++;
    }
}