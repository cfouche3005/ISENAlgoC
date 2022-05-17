#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "BinaryTree.h"

int main() {

    struct NodeTree* n = createEmptyTree();

    struct NodeTree* t4 = bin(n, 4, n);
    struct NodeTree* t5 = bin(n, 5, n);
    struct NodeTree* t7 = bin(n, 7, n);
    struct NodeTree* t6 = bin(t7, 6, n);
    struct NodeTree* t3 = bin(n, 3, t6);
    struct NodeTree* t2 = bin(t4, 2, t5);
    struct NodeTree* t1 = bin(t2, 1, t3);





    deleteTree(&t1);

    return 0;
}