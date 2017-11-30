#include "stack.h"
#include <stdio.h>
#include <stdlib.h>

struct stack {
  int info;
  struct stack *link;
};
struct stack *start=NULL;

void push(int x)
{
  struct stack *new;

  new=(struct stack *)malloc(sizeof(struct stack));
  new->info = x;
  new->link=start;
  start=new;
}

int pop() {
  struct stack *temp;
  if(start == NULL) {
    printf("\nStack is empty\n");
    return 0;
  } else {
    temp=start;
    start=start->link;
    int value = temp->info;
    free(temp);
    return value;
  }
}

void display() {
  struct stack *temp;
  printf("\nSTACK\n");
  printf("_________");
  for(temp=start;temp!=NULL;temp=temp->link) {
    printf("\n|---%d---|",temp->info);
  }
  printf("\n**********\n");
}

void size() {
  int s = 0;
  struct stack *temp;
  for(temp=start;temp!=NULL;temp=temp->link) {
    s++;
  }
  printf("Stack Size: %d\n",s);
}