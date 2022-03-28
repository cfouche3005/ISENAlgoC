#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "stackArray.h"

struct Stack* createEmptyStack(){
    struct Stack *s = malloc(sizeof(struct Stack));
    if (s != NULL) {
        s->size = 0;
    }
    return s;
}
void push(struct Stack* s, int item, bool* valid){
    if( s->size == MAX_SIZE)
        *valid = false;
    else {
        *valid = true;
        s-> elems[s->size] = item;
        s->size++;
    }
}

int top(struct Stack* s, bool* valid) {
    if (s->size == MAX_SIZE) {
        *valid = false;
    } else {
        *valid = true;
        return s->elems[stackSize(s) - 1];
    }
}

int pop(struct Stack* s, bool* valid){
    top(s,valid);
    s-> elems[stackSize(s) - 1] = 0;
    s-> size--;
}

unsigned int stackSize(struct Stack* s){
    return s ->size;
}

bool isStackEmpty(struct Stack* s){
    return s -> size == 0;
}

void printStack(struct Stack* s) {
    if (isStackEmpty(s) == 1) {
        printf("NULL <– top");
    }
    else{
        printf("%d  <– top\n",s->elems[0]);
        for (int i = 1; i < stackSize(s); i++){
            printf("%d\n",s->elems[i]);
        }
    }
}

void deleteStack(struct Stack** s){
    free(*s);
}