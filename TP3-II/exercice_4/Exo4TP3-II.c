#include<stdio.h>
#include<stdlib.h>

unsigned int recursiveBinomialCoefficient(unsigned int n, unsigned int k);

int main () {
    unsigned int n = 5;
    unsigned int k = 2;
    printf("%d\n",recursiveBinomialCoefficient(n,k));
}

unsigned int recursiveBinomialCoefficient(unsigned int n, unsigned int k) {
    if(k==0 || k==n ){
		return 1;
	}else{
        return recursiveBinomialCoefficient(n-1,k-1) + recursiveBinomialCoefficient(n-1,k);
        }
   
}