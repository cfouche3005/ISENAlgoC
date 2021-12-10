#include<stdio.h>
#include<stdlib.h>

unsigned int recursiveBinomialCoefficient(unsigned int n, unsigned int k);
unsigned int iterativeBinomialCoefficient(unsigned int n, unsigned int k);
unsigned int recursiveFactorial(unsigned int n);

int main () {
    unsigned int n = 5;
    unsigned int k = 2;
    printf("%d\n",recursiveBinomialCoefficient(n,k));
    printf("%d\n",iterativeBinomialCoefficient(n,k));
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


unsigned int recursiveFactorial(unsigned int n){
	if(n==1){
		return 1;
	}
	else
    {
	return recursiveFactorial(n-1);
    }
}