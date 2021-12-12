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
    int a = 2;
    int b = 1;
    int c = 9;
    printf("%d %d %d\n",a,b,c);
    sortThree(&a,&b,&c);
    printf("%d %d %d\n",a,b,c);

    
}