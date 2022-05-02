#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "BinaryTree.h"

struct NodeTree* createEmptyTree(){
    return NULL;
}

struct NodeTree* bin(struct NodeTree* l, int val, struct NodeTree* r){
    struct NodeTree* A = malloc(sizeof(struct NodeTree));
    if (A != NULL){
        A->value = val;
        A->left = l;
        A->right = r;
    }
    return A;
}

bool isTreeEmpty(struct NodeTree* tree){
    return tree==NULL;
}

int root(struct NodeTree* tree){
    return tree->value;
}

struct NodeTree* left(struct NodeTree* tree){
    return tree->left;
}

struct NodeTree* right(struct NodeTree* tree){
    return tree->right;
}

void deleteLeaf(struct NodeTree** tree){
    if (isTreeEmpty(left(*tree)) && isTreeEmpty(right(*tree))){
        free(*tree);
    }else{
        if (isTreeEmpty(right(*tree))){
            deleteLeaf(&((*tree)->left));
        }else{
            if (isTreeEmpty(left(*tree))){
                deleteLeaf(&((*tree)->right));
            }
        }
    }
}


