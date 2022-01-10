#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>

char capitalLetters(char *capital);
bool palindrome(char *argv);

int main (int argc, char** argv) {
    printf("%d", palindrome(argv[1]));
    return 0;
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
bool palindrome(char *argv){
    int i;
    int j;
    for(i=0,j=strlen(argv)-1;i<j;i++,j--){
        if(argv[i]!=argv[j]){
            return false;
        }
    }
    return true;
}