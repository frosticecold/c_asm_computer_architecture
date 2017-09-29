#include <string.h>
#include <ctype.h>

void capitalize(char *str) {
    int i=0;
    str[i] = toupper(str[i]);
    while(str[i] != '\0') {
        if(str[i] == ' ') {
            str[i+1] = toupper(str[i+1]);
            i+=2;
        } else {
            i++;
        }
    }
}