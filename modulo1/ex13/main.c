#include <stdio.h>
#include "find_character.h"

int main() {
    char str[] = "Ola uma pata";
    char c = 'a';
    int vec[5], i;
    find_character(str, c, vec);
    for(i=0; i<4; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");
    return 0;
}