#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*Déclaration Fonction*/

void punishment1();
void punishment2();
float rectangleArea(float L, float l);
/*ex4*/
int isRightAngled(float a, float b, float c);
int isIsosceles(float a, float b, float c);
int isEquilateral(float a, float b, float c);
int isScalene(float a, float b, float c);
void checkTriangle(float a, float b, float c);

float mathex5(float a);
/*ex6*/
void Addition(int a, int b);
void Subtraction(int a, int b);
void  Multiplication(int a, int b);
void  Division(int a, int b);
/*ex7*/
void averageMinMax(float* a, float* b, float* c);

/*Debut Programme*/

int main(){
    /*ex1*/
    printf("ex1\n");
    punishment1();
    printf("\n");

    /*ex2*/
    printf("ex2\n");
    int nb = 15;
    punishment2(nb);
    printf("\n");

    /*ex3*/
    printf("ex3\n");
    float L = 10;
    float l = 5;
    printf("%f\n",rectangleArea(L,l));
    printf("\n");

    /*ex4*/
    printf("ex4\n");
    float cot_a = 3;
    float cot_b = 3;
    float cot_c = 3;
    checkTriangle(cot_a,cot_b,cot_c);
    printf("\n");

    /*ex5*/
    printf("ex5\n");
    float x = 6;
    printf("%f\n",mathex5(x));
    printf("\n");

    /*ex6*/
    printf("ex6\n");

    int aint;
	int bint;
	int user;
	printf("Integer operations\n\n");
	printf("Enter two integers : ");
	scanf("%d %d",&aint,&bint);
	
	printf("Menu: \n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Quit\n");
	printf("Choise : ");
	scanf("%d",&user);
	printf("\n");

    switch(user)
	{
		case 1 : Addition(aint,bint);
			 break;
		case 2 : Subtraction(aint,bint);
			 break;
		case 3 : Multiplication(aint,bint);
			 break;
		case 4 : Division(aint,bint);
			 break;
		default :
			 return 0;
	}

    printf("\n");

    /*ex7*/
    printf("ex7\n");
    float average,min,max;
	averageMinMax(&average, &min, &max);
	printf("Average mark: %.2f \n", average);
	printf("Minimum mark: %.2f \n", min);
	printf("Maximum mark: %.2f \n", max);
    printf("\n");

    return 0;
}

void punishment1()
{
	int i;
	for(i = 1; i <=10; i++)
	{
		printf("Je dois apprendre mes cours\n");
	}
	printf("\n");
}

void punishment2(int n)
{
	int i;
	for(i = 1; i <=n; i++)
	{
		printf("Je dois apprendre mes cours\n");
	}
	printf("\n");
}

float rectangleArea(float L, float l){
    int result = L*l;
    return result;
}

void checkTriangle(float a, float b, float c){
   printf("The triangle having sides %f,%f,%f is: ",a,b,c);
   if (isRightAngled(a,b,c)==1)
   {
       printf("Right-Angled ");
   }
   if (isIsosceles(a,b,c)==1)
   {
       printf("Isosceles ");
   }
   if (isEquilateral(a,b,c)==1)
   {
       printf("Equilateral ");
   }
   if (isScalene(a,b,c)==1)
   {
       printf("Scalene ");
   }
   printf("\n");
}

int isRightAngled(float a, float b, float c){
    if (((a*a)==((b*b)+(c*c))) || ((b*b)==((a*a)+(c*c))) || ((c*c)==((a*a)+(b*b))))
	{
        return 1;
	} else {
        return 0;
    }
}

int isIsosceles(float a, float b, float c){
    if( ((a==b) && (a!=c)) || ((a==c)&&(a!=b)) || ((b==c) && (b!=a)))
	{
		return 1;
	} else {
        return 0;
	}
}

int isEquilateral(float a, float b, float c){
    	if((a==b) && (b==c) && (a==c))
	{
		return 1;
	} else {
        return 0;
	}
}

int isScalene(float a, float b, float c){
    if ( (a!=b) && (a!=c) && (b!=c) )
	{
		return 1;
	} else {
        return 0;
	}
}

float mathex5(float a){
   float result = ((cos(a)*cos(a)*cos(a))/2);
   return result;
}

void Addition(int a, int b){
    int result = a+b;
    printf("The addition %d + %d gives: %d\n", a, b, result);
}

void Subtraction(int a, int b){
    int result = a-b;
    printf("The subtraction %d - %d gives: %d\n", a, b, result);
}

void  Multiplication(int a, int b){
    int result = a*b;
    printf("The multiplication %d * %d gives %d\n", a, b, result);
}
void  Division(int a, int b){
    int result = a/b;
    printf("The division %d / %d gives %d\n", a, b, result);
}

void averageMinMax(float* a, float* b, float* c){
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
}
