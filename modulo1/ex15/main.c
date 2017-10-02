#include <stdio.h>
#include "fill_array.h"
#include "verify_condition.h"

int main() {
    int vec[100], count, i;
    fill_array(vec, 100);
    for(i=0; i<100; i++) {
        printf("%d ", vec[i]);
    }
    count = verify_condition(vec, 100);
    printf("\n\n%d\n", count);
    return 0;
}