#include<stdio.h>
#include<stdlib.h>

/*Déclaration Fonction*/

/*ex1*/
void swap(int* n1, int* n2);
/*ex2*/
void sortThree(int* a, int* b, int* c);
/*ex3*/
int transfer(int* origin_account, int* destination_account, int amount);
void accountsBalances();

/*Debut Programme*/

int main (){
    
    /*ex1*/
    int nb1 = 2;
    int nb2 = 6;
    printf("%d %d\n",nb1,nb2);
    swap(&nb1,&nb2);
    printf("%d %d\n",nb1,nb2);

    /*ex2*/
    int a = 9;
    int b = 8;
    int c = 1;
    printf("%d %d %d\n",a,b,c);
    sortThree(&a,&b,&c);
    printf("%d %d %d\n",a,b,c);



    return 0;    
}

void swap(int* nb1, int* nb2){
 int temp;
 temp = *nb1;
 *nb1 = *nb2;
 *nb2 = temp;
}

/*Fonction*/

void sortThree(int* a, int* b, int* c){
    
	if(*a >= *b){
		swap(a, b);
	}
	if(*a >= *c){
		swap(a, c);
	}
	if(*b >= *c){
		swap(b, c);
	}
}