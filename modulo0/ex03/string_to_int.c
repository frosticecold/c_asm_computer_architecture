#include <stdio.h>
#include <stdlib.h>

int string_to_int(char *str) {
    int i = strtol(str, NULL, 10);
    return i;
}