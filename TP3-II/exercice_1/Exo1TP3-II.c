#include<stdio.h>
#include<stdlib.h>

unsigned int iterativeFactorial(unsigned int n);
unsigned int recursiveFactorial(unsigned int n);

int main (){
	int x = 5;
	printf("%d\n",iterativeFactorial(x));
	printf("%d\n",recursiveFactorial(x));
}

unsigned int iterativeFactorial(unsigned int n){
	int b;
	b=n;
	for (int i = 0; i < count; i++)
	{
		/* code */
	}
	{	
		n=n-1;
		b=b*n;
	}
}

unsigned int recursiveFactorial(unsigned int n){
	if(n==1){
		return 1;
	}
	else
{
	return recursiveFactorial(n-1);
}
}
