#include<stdio.h>
#include<stdlib.h>
#include <string.h>

char capitalLetters(char *capital);

int main (int argc, char** argv) {
    printf("%c/n",capitalLetters(*argv[1]));
}
char capitalLetters(char *capital){
    int i = 0;
    while (capital[i] != '\0')
    {
        if (capital[i]  >= 97 &&  capital[i] <= 122)
            capital[i] = capital[i] - 32;
        i++;
    }
    return capital;
}