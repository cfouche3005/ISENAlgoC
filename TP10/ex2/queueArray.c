#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "queueArray.h"

struct Queue* createEmptyQueue(){
    struct Queue *q = malloc(sizeof(struct Queue));
    if (q != NULL) {
        q->size = 0;
        q->front = 0;
        q->rear = 0;
    }
    return q;
}
void enqueue(struct Queue* q, int item, bool* valid){
    if( q->size == MAX_SIZE)
        *valid = false;
    else {
        *valid = true;
        q->rear = q->rear+1;
        q-> elems[q->rear] = item;
        q->size++;
    }
}

int head(struct Queue* q, bool* valid){
    return q-> elems[q->front];
}

int dequeue(struct Queue* q, bool* valid){
    int result = head(q,valid);
    for (int i = q->front; i < q -> rear ; ++i) {
        q-> elems[i]=q-> elems[i+1];
    }
    q -> rear--;
    q-> size --;
    return result;
}

unsigned int queueSize(struct Queue* q){
    return q ->size;
}

bool isQueueEmpty(struct Queue* q){
    return q -> size == 0;
}

void printQueue(struct Queue* q){
    if(q==NULL){
        printf("NULL");
    }else{
        if (isQueueEmpty(q) == 1) {
            printf("rear –> NULL <– front");
        }
        else{
            printf("rear –> %d - ",q->elems[q->rear]);
            for (int i = q -> rear; i > q -> front; i--){
                printf("%d - ",q->elems[i]);
            }
            printf("%d <– front",q->elems[q->front]);
        }
    }
}

void deleteQueue(struct Queue** q){
    free(*q);
    *q=NULL;
}