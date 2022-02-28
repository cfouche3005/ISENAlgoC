

#ifndef _CHAINEDLIST_H
#define _CHAINEDLIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Cell{
    int value;
    struct Cell* next;
};

struct Cell* createCell(int val);
struct Cell* addFirst(struct Cell* head, int value);
bool isListEmpty(struct Cell* head);
int getItemPos(struct Cell* head, unsigned int position, bool* valid);
struct Cell* deleteFirst(struct Cell* head);
void printList(struct Cell* head);
unsigned int listSize(struct Cell* head);
struct Cell* addItemPos(struct Cell* head, int val, unsigned int pos, bool* valid);
struct Cell* deleteItemPos(struct Cell* head, unsigned int position, bool* valid);
void deleteAll(struct Cell** head);
struct Cell* createListFromArray(int A[], unsigned int size);
struct Cell* belongs(struct Cell* head, int value);


#endif //_CHAINEDLIST_H
