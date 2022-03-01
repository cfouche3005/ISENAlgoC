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
    return head == NULL;
}

int getItemPos(struct Cell* head, unsigned int position, bool* valid){
    struct Cell* iter = head;
    for (int i = 1; i < position; ++i) {
        iter = iter -> next;
        if (iter == NULL){
            valid = false;
            return 7274;
        }
    }
    valid = true;
    return iter ->value;
}

struct Cell* deleteFirst(struct Cell* head){
    struct Cell* temp = head -> next;
    free(head);
    return temp;
}

void printList(struct Cell* head){
    struct Cell* iter = head;
    if (isListEmpty(head) == 1){
        printf("NULL");
    }else {
        while (iter->next != NULL) {
            printf("%i -> ", iter->value);
            iter = iter->next;
        }
        printf("%i -> ", iter->value);
        printf("NULL");
    }
}

unsigned int listSize(struct Cell* head){
    struct Cell* iter = head;
    unsigned int i = 0 ;
    if (isListEmpty(head)){
        return 0;
    }else {
        while (iter->next != NULL) {
            i++;
            iter = iter->next;
        }
    }
    i++;
    return i;
}

struct Cell* addItemPos(struct Cell* head, int val, unsigned int pos, bool* valid) {
    if(listSize(head)<pos){
        valid = false;

    }
}