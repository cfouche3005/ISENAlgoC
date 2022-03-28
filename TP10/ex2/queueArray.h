
#ifndef ISENALGOC_QUEUEARRAY_H
#define ISENALGOC_QUEUEARRAY_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_SIZE 30
struct Queue{
    unsigned int size;
    unsigned int front;
    unsigned int rear;
    int elems[MAX_SIZE];
};

struct Queue* createEmptyQueue();
void enqueue(struct Queue* q, int item, bool* valid);
int head(struct Queue* q, bool* valid);
int dequeue(struct Queue* q, bool* valid);
unsigned int queueSize(struct Queue* q);
bool isQueueEmpty(struct Queue* q);
void printQueue(struct Queue* q);
void deleteQueue(struct Queue** q);

#endif //ISENALGOC_QUEUEARRAY_H
