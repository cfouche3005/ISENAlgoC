//
// Created by cfouche on 28/03/2022.
//

#ifndef ISENALGOC_QUEUELIST_H
#define ISENALGOC_QUEUELIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct Queue{
    struct List* l;
};

struct Queue* createEmptyQueue();
void enqueue(struct Queue* q, int item, bool* valid);
int head(struct Queue* q, bool* valid);
int dequeue(struct Queue* q, bool* valid);
unsigned int queueSize(struct Queue* q);
bool isQueueEmpty(struct Queue* q);
void printQueue(struct Queue* q);
void deleteQueue(struct Queue** q);

#endif //ISENALGOC_QUEUELIST_H
