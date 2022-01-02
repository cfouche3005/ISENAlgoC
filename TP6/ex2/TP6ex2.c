#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main (int argc, char** argv) {
    int nbmot = atoi(argv[1]);
    char mot;
    char result;
    for (int i = 0; i== nbmot; i++) {
        char temp;
        printf("Enter a string :");
        scanf("%s",temp);
        strcat (mot,temp);
    }
    for(int i = nbmot; i>0; i--){
        strcat(result, " ");
        strcat(result, mot[i]);
    }
    printf("The sentence is : %c",result);
    return 0
}