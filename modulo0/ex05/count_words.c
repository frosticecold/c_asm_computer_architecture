#include <stdio.h>
#include <string.h>

int count_words(char *str) {
    int count = 0,i,len;
    char lastC;
    len=strlen(str);
    if(len > 0){
        lastC = str[0];
    }
    for(i=0; i<=len; i++){
        if(str[i]==' ' && lastC != ' ') {
            count++;
        }
        lastC = str[i];
    }
    return count;
}