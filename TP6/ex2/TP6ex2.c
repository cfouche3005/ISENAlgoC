#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main (int argc, char** argv) {
    int nbmot = atoi(argv[1]);
    char mot[10][32];
    for (int i = 0; i<nbmot; i++) {
        printf("Enter a string :");
        scanf("%s",mot[i]);

    }
    printf("The sentence is :");
    for(int i = nbmot-1; i>=0; i--){
        printf(" %s",mot[i]);
    }

    return 0;
}