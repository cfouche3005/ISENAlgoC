#include<stdio.h>
#include<stdlib.h>

void sortThree(int* a, int* b, int* c);

int main () {

}

void sortThree(int* a, int* b, int* c){
    int temp;
    if ( *a <= *b && *b <= *c) {
        *a = *a;
        *b = *b;
        *c = *c;
    }
    if ( *a <= *b && *c <= *b) {
        *a = *a;
        temp = *b;
        *b = *c;
        *b = temp;
    }
    if ( *b <= *a && *b <= *c) {
        *c = *c;
        temp = *a;
        *a = *b;
        *b = temp;
    }
}