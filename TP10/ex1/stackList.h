

#ifndef ISENALGOC_STACKLIST_H
#define ISENALGOC_STACKLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Stack{
    struct List* l;
};

struct Stack* createEmptyStack();
void push(struct Stack* s, int item, bool* valid);
int top(struct Stack* s, bool* valid);
int pop(struct Stack* s, bool* valid);
unsigned int stackSize(struct Stack* s);
bool isStackEmpty(struct Stack* s);
void printStack(struct Stack* s);
void deleteStack(struct Stack** s);

#endif //ISENALGOC_STACKLIST_H
