#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "cell.h"
int main() {
    struct Cell* cell = createCell(50);
        for (int i = 51; i < 61; ++i) {
            cell = addFirst(cell, i);
        }

    printf("%i\n", isListEmpty(cell));

    bool test;
    for (int i = 1; i < 12; ++i) {
        printf("%i ", getItemPos(cell,i,&test));
        }
    printf("\n");

    cell = deleteFirst(cell);

    printList(cell);
    printf("\n");

    printf("%u\n", listSize(cell));

    cell = addItemPos(cell,79,5,&test);

    printList(cell);
    printf("\n");

    printf("%u\n", listSize(cell));

    cell = deleteItemPos(cell,5,&test)  ;

    printList(cell);
    printf("\n");

    printf("%u\n", listSize(cell));

    deleteAll(cell);
    printList(cell);
    printf("\n");

    printf("%u\n", listSize(cell));
}

