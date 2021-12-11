#include<stdio.h>
#include<stdlib.h>

void sortThree(int* a, int* b, int* c);

int main () {

}

void sortThree(int* a, int* b, int* c){
    int temp;
	if(*a >= *b){
		swap(a, b);
	}
	if(*b >= *c){
		swap(a, c);
	}
	if(*a >= *c){
		swap(b, c);
	}
}