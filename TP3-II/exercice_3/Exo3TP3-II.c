#include<stdio.h>
#include<stdlib.h>

float iterativePower(float x, unsigned int n);

float recursivePower(float x, unsigned int n);

int main() {
	float nb = 3;
    int pw = 4;
	printf("%f\n",iterativePower(nb, pw));
    printf("%f\n",recursivePower(nb, pw));
	
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