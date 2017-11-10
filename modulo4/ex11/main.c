#include <stdio.h>
#include "asm.h"

int main(){

    int num = 1;
    int result = rotate_left(num,2);
    printf("Para %d Result:%d\n",num,result);
    result = rotate_left(4,2);
    printf("Para 4 Result:%d\n",result);

    num = 1024;
    result = rotate_right(num,2);
    printf("Para %d Result:%d\n",num,result);
    num = 2048;
    result = rotate_right(num,2);
    printf("Para %d Result:%d\n",num,result);
}