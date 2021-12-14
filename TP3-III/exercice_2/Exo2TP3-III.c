#include<stdio.h>
#include<stdlib.h>

void sortThree(int* a, int* b, int* c);

int main () {

}

void sortThree(int* a, int* b, int* c){
    
	if(*a >= *b){
		swap(a, b);
	}
	if(*b >= *c){
		swap(b, c);
	}
	if(*a >= *c){
		swap(a, c);
	}
}