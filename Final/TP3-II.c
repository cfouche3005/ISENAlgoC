#include<stdio.h>
#include<stdlib.h>

/*Déclaration Fonction*/

/*ex1*/
unsigned int iterativeFactorial(unsigned int n);
unsigned int recursiveFactorial(unsigned int n);
/*ex2*/
unsigned int iterativeFibonacci(unsigned int n); 
unsigned int recursiveFibonacci(unsigned int n);
/*ex3*/
float iterativePower(float x, unsigned int n);
float recursivePower(float x, unsigned int n);
/*ex4*/
unsigned int recursiveBinomialCoefficient(unsigned int n, unsigned int k);
unsigned int iterativeBinomialCoefficient(unsigned int n, unsigned int k);

/*Debut Programme*/

int main(){

    /*ex1*/
    printf("ex1\n");
    int x = 10;
	printf("%d\n",iterativeFactorial(x));
	printf("%d\n",recursiveFactorial(x));
    printf("\n");

    /*ex2*/
    printf("ex2\n");
    int nb = 18;
	printf("%d\n",recursiveFibonacci(nb));
	printf("%d\n",iterativeFactorial(nb));
    printf("\n");

    /*ext3*/
    printf("ex3\n");
    float nb3 = 3;
    int pw = 4;
	printf("%f\n",iterativePower(nb3, pw));
    printf("%f\n",recursivePower(nb3, pw));
    printf("\n");

    /*ex4*/
    printf("ex4\n");
    unsigned int n = 5;
    unsigned int k = 2;
    printf("%d\n",recursiveBinomialCoefficient(n,k));
    printf("%d\n",iterativeBinomialCoefficient(n,k));
    printf("\n");

	return 0;

}

/*Fonction*/

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

unsigned int iterativeFibonacci(unsigned int n) { 
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

float iterativePower(float x, unsigned int n) {
    float xp = x;
    for(int i = 1; i < n; i++){
        xp = xp*x;
    }
    return xp;
}

float recursivePower(float x, unsigned int n) {
    if(n==0){
		return 1;
	}
	if(n==1){
		return x;
	}
	else{
        return  x*recursivePower(x,n-1);
	}
}

unsigned int recursiveBinomialCoefficient(unsigned int n, unsigned int k) {
    if(k==0 || k==n ){
		return 1;
	}else{
        return recursiveBinomialCoefficient(n-1,k-1) + recursiveBinomialCoefficient(n-1,k);
        }
}

unsigned int iterativeBinomialCoefficient(unsigned int n, unsigned int k){
    int result = (recursiveFactorial(n)/(recursiveFactorial(k)*recursiveFactorial(n-k)));
    return result;
}