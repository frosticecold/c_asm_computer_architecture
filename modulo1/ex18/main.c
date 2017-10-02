#include <stdio.h>
#include "compress_shorts.h"

int main() {
    short shorts[10] = {0,1,2,3,4,5,6,7,8,9};
    int integers[5];

    compress_shorts(shorts, 10, integers);

    for(int i=0; i<5; i++) {
        printf("%d ", integers[i]);
    }
    printf ("\n");

    return 0;
}