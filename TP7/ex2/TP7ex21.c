#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

int main (int argc, char** argv) {
    int* pair;
    int* impair;
    int taillepair = 0;
    int tailleimpair = 0;
    pair = malloc ((argc-1)*sizeof (int) ) ;
    impair = malloc ((argc-1)*sizeof (int) ) ;
    if (pair != NULL) {
        for (int i = 1; i < argc; ++i) {
            if (atoi(argv[i]) % 2 == 0) {
                pair[taillepair] = atoi(argv[i]);
                taillepair++;
            }
        }
    }
    if (impair != NULL) {
        for (int i = 1; i < argc; ++i) {
            if (atoi(argv[i]) % 2 != 0) {
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