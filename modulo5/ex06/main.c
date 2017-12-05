#include <stdio.h>
#include "s1.h"
#include "save_data.h"

void printstruct(s1 *s){    //Método para imprimir a estrutura s1
    printf("s.i=%d\n",s->i);
    printf("s.c=%c\n",s->c);
    printf("s.j=%d\n",s->j);
    printf("s.d=%c\n",s->d);

}
int main(){
    s1 str;
    s1 *s = &str;   //Apontador para a estrutura s1
    save_data(s,200,'A',400,'Z');//Guardar a informação na estrutura s1
    printstruct(s);//Imprimir a estrutura

    printf("\n======\n\n");
    save_data(s,1337,'B',8888,'X');//Guardar a informação na estrutura s2
    printstruct(s);//Imprimir a estrutura


    return 0;
}