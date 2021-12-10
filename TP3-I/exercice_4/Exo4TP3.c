#include<stdio.h>
#include<stdlib.h>

void triangles(float a, float b, float c);

int main(){
	float x;
	float y;
	float z;

	printf("longueur du premier coté :");
	scanf("%f", &x);

	printf("longueur du deuxième coté :");
	scanf("%f", &y);

	printf("longueur du troisième coté :");
	scanf("%f", &z);

	printf("\nTriangles:\n\n");
	triangles(x, y, z);

}

void triangles(float a, float b, float c){
	if((a==b) && (b==c))
	{
		printf("Equilatéral\n");
	}
	
	if( ((a==b) && (a!=c)) || ((a==c)&&(a!=b)) || ((b==c) && (b!=a)))
	{
		printf("Isocèle\n");
	}
	if ( (a!=b) && (a!=c) && (b!=c) )
	{
		printf("Scalène\n");
	}
	if ( ((a*a)==((b*b)+(c*c))) || ((b*b)==((a*a)+(c*c))) || ((c*c)==((a*a)+(b*b))) )
	{
		printf("Rectangle\n");
	}

}

