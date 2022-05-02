
#ifndef ISENALGOC_BINARYTREE_H
#define ISENALGOC_BINARYTREE_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct NodeTree {
    int value;
    struct NodeTree* left;
    struct NodeTree* right;
};

struct NodeTree* createEmptyTree();
struct NodeTree* bin(struct NodeTree* l, int val, struct NodeTree* r);
bool isTreeEmpty(struct NodeTree* tree);
int root(struct NodeTree* tree);
struct NodeTree* left(struct NodeTree* tree);
struct NodeTree* right(struct NodeTree* tree);
void deleteLeaf(struct NodeTree** tree);
void deleteTree(struct NodeTree** tree);

#endif //ISENALGOC_BINARYTREE_H
