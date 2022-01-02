#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main (int argc, char** argv) {
    int voyels[6] = {65,69,73,79,85,89};
    int vcount=0;
    int n = strlen(argv[1]);
    for(int j = 0; j <n ; j++) {
        for(int i=0; i<6 ; i++){
            if (argv[1][j]==voyels[i]||argv[1][j]==voyels[i]+32){
                vcount ++;
            }
        }
    }
    printf("The number of vowels of %s is: %d\n",argv[1],vcount);
    return 0;
}