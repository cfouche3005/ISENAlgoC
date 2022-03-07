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
            printf("%d -> ", iter->value);
            iter = iter->next;
        }
        printf("%d -> ", iter->value);
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
    struct Cell* iter = head;
    if (pos == 1) {
        return addFirst(head, val);
    } else {
        if (pos<0 && listSize(head) < pos) {
            valid = false;
            return head;
        } else {
            for (int i = 0; i < pos-1; ++i) {
                iter = iter -> next;
            }
            struct Cell* new = createCell(val);
            new -> next = iter ->next;
            iter -> next = new;
            return head;
        }
    }
}

struct Cell* deleteItemPos(struct Cell* head, unsigned int position, bool* valid) {
    struct Cell* del = head;
    struct Cell* before = head;
    struct Cell* after = head;
    if (position == 1) {
        return deleteFirst(head);
    } else {
        if (position<0 && listSize(head) < position) {
            valid = false;
            return head;
        } else {
            for (int i = 0; i < position-1; ++i) {
                del = del -> next;
            }
            for (int i = 0; i < position; ++i) {
                after = after -> next;
            }
            for (int i = 0; i < position-2; ++i) {
                before = before -> next;
            }
            free(del);
            before -> next = after;
            return head;
        }
    }
}

void deleteAll(struct Cell** head){
    while(*head != NULL){
        *head = deleteFirst(*head);
    }
    *head = NULL;
}

struct Cell* createListFromArray(int A[], unsigned int size){
    if (size == 0) {
        return NULL;
    }
    struct Cell* ListFromArray = A[size-1];
    for (int i = size-1; i > 0; --i) {
        ListFromArray = addFirst(ListFromArray,A[i-1]);
    }
    return ListFromArray;
}

struct Cell* belong(struct Cell* head, int value) {
    while (head!=NULL && head->value!=value) {
        head = head->next;
    }
    return head;
}