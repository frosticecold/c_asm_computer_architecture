#include <stdio.h>
#include "changes.h"

int main(){

    int num = 3328;
    changes(&num);
    printf("%d",num);
    return 0;
}