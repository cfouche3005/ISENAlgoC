#include<stdio.h>
#include<stdlib.h>

void operation(int a, int b, int c);

int main (){
	int x;
	int y;
	int z;


	printf("Integer operations\n\n");

	printf("Enter two integers : ");
	scanf("%d", &x);
	scanf("%d", &y);
	printf("Menu: \n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Quit\n");
	printf("Choise : ");
	scanf("%d", &z);
	printf("\n");

	operation(x, y, z);

}




void operation(int a, int b, int c){
	switch(c)
	{
		case 1 : printf("The addition %d + %d gives: %d\n", a, b, a+b);
			 break;
		case 2 : printf("The subtraction %d - %d gives: %d\n", a, b, a-b);
			 break;
		case 3 : printf("The multiplication %d * %d gives %d\n", a, b, a*b);
			 break;
		case 4 : printf("The division %d / %d gives %d\n", a, b, a/b);
			 break;
		default :
			 return 0;
	}
}
