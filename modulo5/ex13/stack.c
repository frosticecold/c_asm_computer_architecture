#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

struct stack {			// Estrutura para simular a stack
  int info;				// Informação a ser guardada
  struct stack *link;	// Endereço de memoria do elemento anterior
};
struct stack *start=NULL; // Stack vazia

void push(int x)
{
  struct stack *new;

  new=(struct stack *)malloc(sizeof(struct stack));	// Novo espaço de memoria para alocar informação
  new->info=x;		// Informaçao a ser guardada
  new->link=start;	// Endereço do elemento anterior
  start=new;		// Topo da stack
}

int pop() {
  struct stack *temp;
  if(start == NULL) {		// Se o topo da stack for null a stack esta vazia
    printf("\nStack is empty\n");
    return 0;
  } else {
    temp=start;				// Guardar o elemento para ser enviado para uma variavel
    start=start->link;		// O topo da stack passa a ser o elemento anterior
    int value=temp->info;	// Valor que foi retirado
    free(temp);				// Libertar a memoria previamente alocada para o topo da stack
    return value;			// Retorna o valor removido
  }
}

void display() {
  struct stack *temp;
  printf("\nSTACK\n");
  printf("_________");
  for(temp=start;temp!=NULL;temp=temp->link) {	// Percorrer os endereços presentes na stack até que seja null
    printf("\n|---%d---|",temp->info);			// Apresentar o valor guardado na stack
  }
  printf("\n**********\n");
}

void size() {
  int s = 0;
  struct stack *temp;
  for(temp=start;temp!=NULL;temp=temp->link) {	// Percorrer os endereços presentes na stack até que seja null
    s++;
  }
  printf("Stack Size: %d\n",s);
}