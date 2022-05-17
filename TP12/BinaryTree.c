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
    if(!isTreeEmpty(*tree)){
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
}

void deleteTree(struct NodeTree** tree){
    while (!isTreeEmpty(*tree)){
        deleteLeaf(tree);
    }
}

void preorder(struct NodeTree* tree){
    if (!isTreeEmpty(tree)){
        printf(root(tree));
        preorder(left(tree));
        preorder(right(tree));
    }
}

postorder(struct NodeTree* tree){
    if (!isTreeEmpty(tree)){
        postorder(left(tree));
        postorder(right(tree));
        printf(root(tree));
    }
}

void inorder(struct NodeTree* tree){
    if (!isTreeEmpty(tree)){
        inorder(left(tree));
        printf(root(tree));
        inorder(right(tree));
    }
}

unsigned int numberNodes(struct NodeTree* tree){
    if(!isTreeEmpty(tree)){
        if (isTreeEmpty(tree)){
            return 0;

        }else{
            return 1 + numberNodes(left(tree)) + numberNodes(right(tree));
        }

    }
}

unsigned int numberLeaves(struct NodeTree* tree){
    if(!isTreeEmpty(tree)){
        if (isTreeEmpty(left(tree)) && isTreeEmpty(right(tree))){
            return 1;
        }else{
            return numberLeaves(right(tree)) + numberLeaves(left(tree));
        }
    }
}

unsigned int numberInternalNodes(struct NodeTree* tree){
    return numberNodes(tree) - numberLeaves(tree);
}

int sumValues(struct NodeTree* tree){
    if(!isTreeEmpty(tree)){
        if (isTreeEmpty(tree)){
            return 0;

        }else{
            return root(tree) + sumValues(left(tree)) + sumValues(right(tree));
        }

    }
}


unsigned int height(struct NodeTree* tree){
    if(!isTreeEmpty(tree)){

    }
}

bool belongs(struct NodeTree* tree, int x){
    if(!isTreeEmpty(tree)){
        if (root(tree)==x){
            return true;
        }else{
            return belongs(right(tree),x) || belongs(left(tree),x);
        }
    }
    return false;
}
bool equals(struct NodeTree* tree1, struct NodeTree* tree2){
    if(isTreeEmpty(tree1)==isTreeEmpty(tree2)){
        return true;
    }else{
        if(isTreeEmpty(tree1)!=isTreeEmpty(tree2)){
            return false;
        }
        return root(tree1)==root(tree2) && equals(right(tree1),right(tree2)) && equals(left(tree1),left(tree2));
    }
}


unsigned int numberRepetitions(struct NodeTree* tree, int x){
    if(!isTreeEmpty(tree)){
        if (root(tree)==x){
            return 1 + numberRepetitions(right(tree),x) + numberRepetitions(left(tree),x);
        }else{
            return numberRepetitions(right(tree),x) + numberRepetitions(left(tree),x);
        }
    }
}