#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main (int argc, char** argv) {
    int nbmot = atoi(argv[1]);
    char mot[nbmot][32];
    for (int i = 0; i== nbmot; i++) {
        printf("Enter a string :");
        scanf("%s",&mot[i]);

    }
    int motlong = 0;
    for(int i = 0; i<nbmot; i++){
        motlong += strlen(mot[i])+1;
    }
    char result[motlong];
    for(int i = nbmot-1; i>=0; i--){
        strcat(result, " ");
        strcat(result, mot[i]);
    }
    printf("The sentence is : %c",result);
    return 0;
}