#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "cell.h"

struct Cell* createCell(int val){
    struct Cell* c = malloc(sizeof(struct Cell));
    if(c != NULL){
        c -> value = val;
        c -> next = NULL;
    }
    return c;
}

struct Cell* addFirst(struct Cell* head, int value){
    struct Cell* new = createCell(value);
    new -> next = head;
    return new;
}

bool isListEmpty(struct Cell* head){
    return head = NULL;
}

int getItemPos(struct Cell* head, unsigned int position, bool* valid){
    struct Cell* iter = head;
    for (int i = 0; i < position; ++i) {
        iter = iter -> next;
        if (iter == NULL){
            valid = false;
            return 7274;
        }
    }
    valid = true;
    return iter ->value;
}