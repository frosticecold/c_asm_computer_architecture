#include <stdio.h>
#include "find_word.h"

int main() {

    char str[] = "Uma casa ali";
    char word[] = "casa";
    char * initial_addr;
    find_word(str, word, initial_addr);
    printf("%s\n", initial_addr);
    return 0;
}