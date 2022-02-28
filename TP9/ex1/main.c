#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "cell.h"

    int main(int argc, char** argv) {
    struct Cell* cell = createCell(53);
    cell = addFirst(cell, 52);
    cell = addFirst(cell, 51);

    bool test;

    printf("%i\n", getItemPos(cell,1,&test));
    printf("%i\n", getItemPos(cell,2,&test));
    printf("%i\n", getItemPos(cell,3,&test));
    printf("%i\n", getItemPos(cell,4,&test));

}