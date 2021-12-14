#include<stdio.h>
#include<stdlib.h>


void punition(int n);

int main()
{
	int b;
	scanf("%d",&b);
	punition(b);

	return 0;
}




void punition(int n)
{
	int i;
	for(i = 1; i <=n; i++)
	{
		printf("Je dois apprendre mes cours\n");
	}
	printf("\n");
}

