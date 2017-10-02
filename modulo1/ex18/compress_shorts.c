#include <stdio.h>

//Left shift 4 bits
// short 4 bits (2 bytes)
// int 8 bits (4 bytes)
#define pack_shorts(MSB,LSB) (((int) ((short) MSB)) & 255)<<4 | (((short) LSB)&255)

void compress_shorts(short *shorts, int n_shorts, int *integers) {
    int i,j=0;
    for(i=0; i<n_shorts; i++) {
        integers[j] = pack_shorts(shorts[i+1], shorts[i]); 
        j++;
        i++;
    }
}