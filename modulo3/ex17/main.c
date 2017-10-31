#include <stdio.h>
#include "asm.h"
int array[16] = {5,10,15,20,11,11,11,12,13,5,4,3,3,2,2,1};
int num = 16;
int arrayfreq[21] = {0};
int* ptrgrades = array;
int* ptrfreq = arrayfreq;
int main(){

    frequencies();
    printf("{");
    int i;
    for(i=0;i < 20; i++){
        printf("%d%s",arrayfreq[i],(i<19)? "," : "}\n");
    }



    return 0;
}