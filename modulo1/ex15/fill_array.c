#include <stdlib.h>

void fill_array(int *vec, int n) {
    int i;
    const int MAX_VALUE = 21;
    for(i=0; i<n; i++) {
        vec[i] = (rand()%MAX_VALUE);
    }
}