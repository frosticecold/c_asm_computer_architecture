#include <stdio.h>
#include "vec_sum.h"
int num = 5;
int vec[5] = {1,2,3,4,5};
int *ptrvec = vec;
int main(){
    
    int result = vec_sum();
    printf("Vec Sum de %d nums é: %d\n",num,result);
    

    result = vec_avg();
    printf("A média do vetor é:%d\n",result);
    return 0;
}