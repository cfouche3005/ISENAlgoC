#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "list.h"

int main() {
    struct List *list = createEmptyList();
    for (int i = 51; i < 61; ++i) {
        addFirst(list, i);
    }

    deleteList(&list);

}