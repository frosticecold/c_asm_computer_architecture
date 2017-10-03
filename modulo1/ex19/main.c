#include <stdio.h>
#include "find_word.h"

int main() {

    char str[] = "Uma CAsa ali";
    char word[] = "caSA";
    char * initial_addr = &str[0];
    
    printf("%p\n", find_word(str, word, initial_addr));
    printf("%p\n", &str[4]);
    return 0;
}