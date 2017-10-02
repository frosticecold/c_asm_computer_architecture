#include <stdlib.h>

void fill_array(int *vec, int n) {
    int i;
    for(i=0; i<n; i++) {
        vec[i] = (rand()%21);
    }
}