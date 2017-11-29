#include <stdlib.h>
#include "create_matrix.h"

int **create_matrix(int y,int k){ // matriz YxK
    int ** matrix = NULL;
    matrix = (int **) calloc(y,sizeof(int*));
    int i;
    for(i=0; i< k; i++){
        matrix[i] = (int *)calloc(k,sizeof(int));

    }
    return matrix;

}