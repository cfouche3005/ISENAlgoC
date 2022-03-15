//
// Created by cfouche on 15/03/2022.
//

#ifndef ISENALGOC_STACKARRAY_H
#define ISENALGOC_STACKARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 30
struct Stack{
    unsigned int size;
    int elems[MAX_SIZE];
};

struct Stack* createEmptyStack();
void push(struct Stack* s, int item, bool* valid);
int top(struct Stack* s, bool* valid);
int pop(struct Stack* s, bool* valid);
unsigned int stackSize(struct Stack* s);
bool isStackEmpty(struct Stack* s);
void printStack(struct Stack* s);
void deleteStack(struct Stack** s);

#endif //ISENALGOC_STACKARRAY_H
