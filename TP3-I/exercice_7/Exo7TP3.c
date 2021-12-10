#include<stdio.h>
#include<stdlib.h>

void averageMinMax(float* a, float* b, float* c);

int main () 
{
	float average,min,max;
	averageMinMax(&average, &min, &max);
	printf("Average mark: %.2f \n", average);
	printf("Minimum mark: %.2f \n", min);
	printf("Maximum mark: %.2f \n", max);

	return 0;
}

void averageMinMax(float* a, float* b, float* c)
{
	float n;
	float m;
	float i;
	float p;
	float g;
	p=30;
	g=0;
	m=0;
	i=0;
	do
	{
		printf("Enter the mark between 0 and 20 (negative to end): ");
		scanf("%f", &n);

		if(n>=0 && n<=20){
			m=m+n;
			i=i+1;
		
			if(n<p){
				p=n;
			}

			if(n>g){
				g=n;
			}
		}
		if(n>20){
			printf("Wrong input (mark sould be between 0 and 20)!!!\n");
		}
		
	}
	while(n>0);
		*a=m/i;
		*b=p;
		*c=g;
	return 0;
		
}
