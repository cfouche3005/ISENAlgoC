#include<stdio.h>
#include<stdlib.h>

unsigned int iterativeFactorial(unsigned int n);

int main (){
	int x;
	printf("entier ");
	scanf("%d", &x);

	iterativeFactorial(x);
}

unsigned int iterativeFactorial(unsigned int n){
	int b;
	b=n;
	do{	
		n=n-1;
		b=b*n;
	}
	while(n>1);
	printf("factoriel :%d\n", b);
}

unsigned int recursiveFactorial(unsigned int n){
	
}
