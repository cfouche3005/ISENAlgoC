#include<stdio.h>
#include<stdlib.h>

unsigned int  iterativeFibonacci(unsigned int n); 

unsigned int recursiveFibonacci(unsigned int n);

int main() {
	int nb = 18;
	printf("%d\n",recursiveFibonacci(nb));
	printf("%d\n",iterativeFactorial(nb));
	
}



unsigned int recursiveFibonacci(unsigned int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	else{
		return recursiveFibonacci(n-1)+recursiveFibonacci(n-2);
	}
}

unsigned int  iterativeFibonacci(unsigned int n) { 
	int a = 0;
	int b = 1; 
	int i; 
	int c ;
	for(i = 1; i < n; i++){
		c = a + b;
		a = b;
		b = c;
	}
	return c; 
}
