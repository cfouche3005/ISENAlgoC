
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "list.h"

struct Cell *createCell(int val) {
    struct Cell *c = malloc(sizeof(struct Cell));
    if (c != NULL) {
        c->value = val;
        c->next = NULL;
    }
    return c;
}

struct List *createEmptyList() {
    struct List *l = malloc(sizeof(struct List));
    if (l != NULL) {
        l->size = 0;
        l->head = NULL;
    }
    return l;
}

void addFirst(struct List *l, int value) {
    struct Cell *temp = l->head;
    l->head = createCell(value);
    l->head->next = temp;
    l->size++;
}

bool isListEmpty(struct List *l) {
    return l->head == NULL;
}

int getItemPos(struct List *l, unsigned int position, bool *valid) {
    struct Cell *iter = l->head;
    for (int i = 1; i < position; ++i) {
        iter = iter->next;
        if (iter == NULL) {
            valid = false;
            return 7274;
        }
    }
    valid = true;
    return iter->value;
}

void deleteFirst(struct List *l) {
    struct Cell *temp = l->head->next;
    free(l->head);
    l->head = temp;
    l->size - 1;
}

void printList(struct List *l) {
    struct Cell *iter = l->head;
    if (isListEmpty(l) == 1) {
        printf("NULL");
    } else {
        while (iter->next != NULL) {
            printf("%d -> ", iter->value);
            iter = iter->next;
        }
        printf("%d -> ", iter->value);
        printf("NULL");
    }
}

unsigned int listSize(struct List *l) {
    return l->size;
}

void addItemPos(struct List *l, int value, unsigned int position, bool *valid) {
    struct Cell *iter = l->head;
    if (position == 1) {
        return addFirst(l, value);
    } else {
        if (position < 0 && listSize(l) < position) {
            valid = false;
        } else {
            for (int i = 0; i < position - 1; ++i) {
                iter = iter->next;
            }
            struct Cell *new = createCell(value);
            new->next = iter->next;
            iter->next = new;
            l->size + 1;
        }
    }
}

void deleteItemPos(struct List *l, unsigned int position, bool *valid) {
    struct Cell *del = l->head;
    struct Cell *before = l->head;
    struct Cell *after = l->head;
    if (position == 1) {
        return deleteFirst(l);
    } else {
        if (position < 0 && listSize(l) < position) {
            valid = false;
        } else {
            for (int i = 0; i < position - 1; ++i) {
                del = del->next;
            }
            for (int i = 0; i < position; ++i) {
                after = after->next;
            }
            for (int i = 0; i < position - 2; ++i) {
                before = before->next;
            }
            free(del);
            before->next = after;
            l->size - 1;
        }
    }
}

void deleteList(struct List **l) {
    struct List *del = *l;
    for (unsigned int i = 0; i < del->size; ++i) {
        deleteFirst(del);
    }
    free(*l);
    *l = NULL;
}

struct List *createListFromArray(int A[], unsigned int size) {
    if (size == 0) {
        return NULL;
    }
    struct List *ListFromArray = createEmptyList();
    for (int i = size - 1; i >= 0; --i) {
        addFirst(ListFromArray, A[i - 1]);
    }
    return ListFromArray;
}