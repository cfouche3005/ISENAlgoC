#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

int main (int argc, char** argv) {
    int taille=strlen(argv[1]);
    printf("%s\n",argv[1]);

    char* copy1;
    copy1= malloc ((taille+1)*sizeof (char) ) ;
    if (copy1 != NULL){
        strcpy (copy1, argv[1]);
        int i = 0;
        while (copy1[i] != '\0')
        {
            if (copy1[i]  >= 97 &&  copy1[i] <= 122)
                copy1[i] = copy1[i] - 32;
            i++;
        }
        printf("%s\n",copy1);
        free(copy1);
    }
    char* copy2;
    copy2= malloc ((taille+1)*sizeof (char) ) ;
    if (copy2 != NULL){
        strcpy (copy2, argv[1]);
        int j = 0;
        while (copy2[j] != '\0')
        {
            if (copy2[j]  >= 65 &&  copy2[j] <= 90)
                copy2[j] = copy2[j] + 32;
            j++;
        }
        printf("%s\n",copy2);
        free(copy2);
    }

    return 0;
}