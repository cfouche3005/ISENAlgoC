#include<stdio.h>
#include<stdlib.h>

void swap(int* n1, int* n2);

int main (){
int n1 = 2;
int n2 = 6;
}

void swap(int* n1, int* n2){
 int temp;
 temp = *n1;
 *n1 = *n2;
 *n2 = temp;
}