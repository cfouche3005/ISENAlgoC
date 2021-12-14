#include<stdio.h>
#include<stdlib.h>

unsigned int iterativeFactorial(unsigned int n);
unsigned int recursiveFactorial(unsigned int n);

int main (){
	int x = 10;
	printf("%d\n",iterativeFactorial(x));
	printf("%d\n",recursiveFactorial(x));
}

unsigned int iterativeFactorial(unsigned int n){
	int b;
	b=n;
	do{	
		n=n-1;
		b=b*n;
	}
	while(n>1);
	return b;
}

unsigned int recursiveFactorial(unsigned int n){
	if(n==1){
		return 1 * n ;
	}
	else
{
	return n = n * recursiveFactorial(n-1);
}
}
