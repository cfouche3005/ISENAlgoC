#include<stdio.h>
#include<stdlib.h>

void rectangleArea(float a, float b);

int main (){
	float L;
	float l;
	printf("longueur :");
	scanf("%f", &L);
	printf("largeur :");
	scanf("%f", &l);
	printf("l'aire du rectangle est de :");
	rectangleArea(L, l);
}

void rectangleArea(float a, float b)
{
	printf("%f\n", a*b);
}

