#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

int** matrixSum(int** A, int** B, unsigned int n);

int main (int argc, char** argv) {
    int* pair;
    int* impair;
    int taillepair = 0;
    int tailleimpair = 0;
    int taillepairalloc = 0;
    int tailleimpairalloc =0;


    for (int i = 1; i < argc; ++i) {
        if (atoi(argv[i]) % 2 == 0) {
            taillepairalloc++;
        } else {
            tailleimpairalloc++;
        }
    }

    pair = malloc ((taillepairalloc)*sizeof (int) ) ;
    impair = malloc ((tailleimpairalloc)*sizeof (int) ) ;

    if ((pair != NULL) && (impair != NULL)) {
        for (int i = 1; i < argc; ++i) {
            if (atoi(argv[i]) % 2 == 0) {
                pair[taillepair] = atoi(argv[i]);
                taillepair++;
            } else {
                impair[tailleimpair] = atoi(argv[i]);
                tailleimpair++;
            }
        }
    }

    for(int i = 0; i< taillepair; i++){
        printf("%d ",pair[i]);
    }
    printf("\n");
    for(int i = 0; i< tailleimpair; i++){
        printf("%d ",impair[i]);
    }

    free(pair);
    free(impair);

    return 0;
}