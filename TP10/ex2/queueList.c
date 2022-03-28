#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "queueList.h"
#include "list.h"

struct Queue* createEmptyQueue(){
    struct Queue* q = malloc(sizeof(struct Queue));
    if (q != NULL) {
        q->l = createEmptyList();
    }
    return q;
}

void enqueue(struct Queue* q, int item, bool* valid){
    addFirst(q->l,item);
    valid = true;
}

int head(struct Queue* q, bool* valid){
    return getItemPos(q->l,queueSize(q),valid);
}

int dequeue(struct Queue* q, bool* valid){
    int result = getItemPos(q->l,queueSize(q),valid);
    deleteItemPos(q->l,queueSize(q), valid);
    return result;
}

unsigned int queueSize(struct Queue* q){
    return listSize(q->l);
}

bool isQueueEmpty(struct Queue* q){
    return queueSize == 0;
}

void printQueue(struct Queue* q){
    struct Cell *iter = q->l->head;
    if (iter == NULL){
        printf("NULL");
    }else{
        if (isQueueEmpty(q) == 1) {
            printf("rear –> NULL <– front");
        } else {
            printf("rear –> %d - ",iter->value);
            iter = iter->next;
            while (iter->next != NULL) {
                printf("%d - ", iter->value);
                iter = iter->next;
            }
            printf("%d <– front", iter->value);
        }
    }
}

void deleteQueue(struct Queue** q){
    deleteList(&((*q)->l));
    free(*q);
    q = NULL;
}