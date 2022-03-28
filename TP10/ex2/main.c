#include <stdio.h>

#include "queueList.h"

int main() {

    struct Queue *test;

    //1--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("1-Create Cell : ");
    test=createEmptyQueue();
    printf("\n");
    printQueue(test);
    printf("\n");

    //2--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("2-Add : \n");
    bool valid;
    printf("    * test : 69 then 8471\n");
    enqueue(test, 69, &valid);
    enqueue(test, 8471, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 1, &valid);
    enqueue(test, 80, &valid);
    enqueue(test, 99, &valid);
    enqueue(test, 100, &valid);


    printf("    * result : ");
    printQueue(test);
    printf("\n");
    //3--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("3-valeur front : ");
    printf("%d\n", head(test, &valid));

    //4--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("4-valeur front who's sup: ");
    printf("%d\n", dequeue(test, &valid));
    printf("    * result : ");
    printQueue(test);
    printf("\n");

    //5--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("5-Size : ");
    printf("%d\n", queueSize(test));


    //6--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("6-Empty : ");
    bool result = isQueueEmpty(test);
    if(result){
        printf("Yes\n");
    } else{
        printf("No\n");
    }


    //7--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("7-Print : \n");
    printf("    * result : ");
    printQueue(test);
    printf("\n");

    //8--------------------------------------------------------------------------------------------------------------------------------------------------

    printf("8-Delete all : \n");
    deleteQueue(&test);
    printf("    * result : ");
    printQueue(test);

    return 0;
}