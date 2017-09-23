#include "multiplication_table.h"
#include "line.h"


void multiplication_table_n(int n){
    const int li = 1, ls = 10;
    for(int i = li; i <= ls; i++){
        line(n,i);
    }
}