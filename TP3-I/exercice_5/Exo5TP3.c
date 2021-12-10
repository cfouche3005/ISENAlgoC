#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void fonction(float a);

int main(){
	float x;
	printf("valeur de x :");
	scanf("%f", &x);
	fonction(x);
}

void fonction(float a)
{
	printf("%f", ((cos(a)*cos(a)*cos(a))/2));
}
