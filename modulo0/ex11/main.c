#include <stdio.h>
#include "coef.h"
#include "table.h"

int main() {
    const int n=10,k=10;
    printf("coef: %d\n", coef(n,k));

    createPascalTriangle(n,k);
    return 0;
}