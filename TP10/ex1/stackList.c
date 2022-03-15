#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "stackList.h"
#include "list.h"

struct Stack* createEmptyStack(){
    struct Stack* s = malloc(sizeof(struct Stack));
    if (s != NULL) {
        s->l = createEmptyList();
    }
    return s;
}

void push(struct Stack* s, int item, bool* valid){
    addFirst(s->l,item);
    valid = true;
}

int top(struct Stack* s, bool* valid){
   int result = getItemPos(s->l,1,valid);
   return result;
}

int pop(struct Stack* s, bool* valid){
    int result = top(s->l,valid);
    deleteFirst(s->l);
    return result;
}

unsigned int stackSize(struct Stack* s){
    return listSize(s->l);
}

bool isStackEmpty(struct Stack* s){
    return isListEmpty(s->l);
}

void printStack(struct Stack* s){
    struct Cell *iter = s->l->head;
    if (isStackEmpty(s) == 1) {
        printf("NULL <– top");
    } else {
        printf("%d  <– top\n",iter->value);
        iter = iter->next;
        while (iter->next != NULL) {
            printf("%d\n", iter->value);
            iter = iter->next;
        }
        printf("%d\n", iter->value);
    }
}

void deleteStack(struct Stack** s){
    deleteList(*s->l);

}