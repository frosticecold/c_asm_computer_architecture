#include <stdio.h>
#include "calculate.h"
int main(){
    int a = 4;
    int b = 8;
    int c = calculate(a,b);
    printf("(%d+%d) - (%d*%d) = %d\n",a,b,a,b,c);
    return 0;
}

void print_result(char op, int o1, int o2, int res){

    printf("%d %c %d = %d\n",o1,op,o2,res);

}