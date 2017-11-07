#include "asm.h"
#include <stdio.h>

int num, even;
int main() {
    int res = 0;
    even=10;
    
    res = test_even();
    printf("num:%d even:%d\n",even, res);       

    even=9;
    
    res = test_even();
    printf("num:%d even:%d\n",even, res);       

    even=1928;
    
    res = test_even();
    printf("num:%d even:%d\n",even, res);       

    even=0;
    
    res = test_even();
    printf("num:%d even:%d\n",even, res);       

    even=1919;
    
    res = test_even();
    printf("num:%d even:%d\n",even, res);       


    int vtr[] = {1,2,3,4,5,6};
    int i;
    printf("\n{");
    for(i = 0; i < 6 ;i++){
        printf("%d%s",vtr[i],(i<5)?", ":"}\n");
    }
    num = 6;
    ptrvec = vtr;
    res = vec_sum_even();
    printf("vec sum even: %d\n", res);

    int vtr1[] = {2,1,1,1,1,1};
    printf("{");
    for(i = 0; i < 6 ;i++){
        printf("%d%s",vtr1[i],(i<5)?", ":"}\n");
    }
    num = 6;
    ptrvec = vtr1;
    res = vec_sum_even();
    printf("vec sum even: %d\n", res);
}
