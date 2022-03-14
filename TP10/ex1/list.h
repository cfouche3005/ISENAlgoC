//
// Created by cfouche on 08/03/2022.
//

#ifndef ISENALGOC_LIST_H
#define ISENALGOC_LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Cell{
    int value;
    struct Cell* next;
};
struct List{
    unsigned int size;
    struct Cell* head;
};

struct Cell* createCell(int val);
struct List* createEmptyList();
void addFirst(struct List* l, int value);
bool isListEmpty(struct List* l);
int getItemPos(struct List* l, unsigned int position, bool* valid);
void deleteFirst(struct List* l);
void printList(struct List* l);
unsigned int listSize(struct List* l);
void addItemPos(struct List* l, int value, unsigned int position, bool* valid);
void deleteItemPos(struct List* l, unsigned int position, bool* valid);
void deleteList(struct List** l);
struct List* createListFromArray(int A[], unsigned int size);
struct Cell* belongs(struct List* l, int value);
void reverse(struct List* l);


#endif //ISENALGOC_LIST_H
