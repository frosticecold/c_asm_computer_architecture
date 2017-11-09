#include <stdio.h>
#include "asm.h"
int main(){
    int num = 6;
    int a = 4;
    int *b = &num;
    int c = 3;
    int res = calc(a,b,c);
    printf("%d\n",res);
    return 0;
}