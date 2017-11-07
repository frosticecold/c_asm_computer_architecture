#include <stdio.h>
#include "asm.h"
int num = 10;
int array[10] = {1,2,3,4,3,2,1,2,3,4};
int* ptrvec = array;
int main(){
    int i;
    printf("{");
    for(i=0; i < num; i++){
        printf("%d%s",array[i],(i<num-1)?", ":"}\n");
    }
    int result = count_seq();
    printf("O número de sequências é:%d\n",result);

    return 0;
}