#include<stdio.h>
#include<stdlib.h>

/*Déclaration Fonction*/

/*ex1*/
void swap(int* n1, int* n2);
/*ex2*/
void sortThree(int* a, int* b, int* c);
/*ex3*/
int account1 = 1000;
int account2 = 2000;
int account3 = 1500;
int account4 = 3000;
int transfer(int* origin_account, int* destination_account, int amount);
void accountsBalances();

/*Debut Programme*/

int main (){
    
    /*ex1*/
    printf("ex1\n");
    int nb1 = 2;
    int nb2 = 6;
    printf("%d %d\n",nb1,nb2);
    swap(&nb1,&nb2);
    printf("%d %d\n",nb1,nb2);
    printf("\n");

    /*ex2*/
    printf("ex2\n");
    int a = 9;
    int b = 8;
    int c = 1;
    printf("%d %d %d\n",a,b,c);
    sortThree(&a,&b,&c);
    printf("%d %d %d\n",a,b,c);
    printf("\n");

    /*ex3*/
    printf("ex3\n");
    accountsBalances();
	transfer(&account1, &account3,1500000);
	accountsBalances();
    printf("\n");
    return 0;    
}

/*Fonction*/

/*ex1*/
void swap(int* nb1, int* nb2){
 int temp;
 temp = *nb1;
 *nb1 = *nb2;
 *nb2 = temp;
}

/*ex2*/
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

/*ex3*/
void accountsBalances(){
	printf("Accounts balances : \n");
	printf("Account 1 : %d \n",account1);
	printf("Account 2 : %d \n",account2);
	printf("Account 3 : %d \n",account3);
	printf("Account 4 : %d \n",account4);
}

int transfer(int* origin_account, int* destination_account, int amount){
	if(*origin_account < amount){
		return 0;
	}
	else{
		*origin_account = *origin_account - amount;
		*destination_account = *destination_account +amount;
		return 1;
	}
}