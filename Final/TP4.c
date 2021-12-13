#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define N 5

/*Déclaration Fonction*/

/*ex1*/
void printArray(int arr[], unsigned int n);
/*ex2*/
void inverseArray(int arr[], unsigned int n);
/*ex3*/
void minMaxSearch(int arr[], unsigned int n, unsigned int* index_min, unsigned int* index_max);
/*ex4*/
void cleanZeros(int arr[], unsigned int* n);
/*ex5*/
bool isBounded(int arr[], unsigned int n);
bool capicua(int arr[], unsigned int n);
bool isSorted(int arr[], unsigned int n);
bool allPrimes(int arr[], unsigned int n);
bool allPrimesEvenIndexes(int arr[], unsigned int n);
bool allEquals(int arr[], unsigned int n);
bool noRepetitions(int arr[], unsigned int n);
/*ex6*/
void printMatrix(int matrix[N][N]);
/*ex7*/
void matrixSum(int A[N][N],int B[N][N],int C[N][N]);
/*ex8*/
void matrixMult(int A[N][N],int B[N][N],int C[N][N]);


/*Debut Programme*/

int main(){
    /*variable all*/
    unsigned int n = 14 ;
    int arr[14]={8,0,0,2,1,0,5,0,0,0,1,1,0,0};

    /*ex1*/
    printArray(arr, n);

    /*ex2*/
    inverseArray(arr, n);
    printArray(arr,n);

    /*ex3*/
    unsigned int index_min = 0 ;
    unsigned int index_max = 13 ;
    minMaxSearch(arr, n,&index_min,&index_max);

    /*ex4*/
    printf("ex4\n");
    cleanZeros(arr,&n);
    printArray(arr,n);
    
    /*ex5*/
    unsigned int n2 = 14 ;
    int arr2[14]={8,0,0,2,1,0,5,0,0,0,1,1,0,0};

    /*ex6*/
    printf("ex6\n");
    int matrix[N][N] = {{5,4,2,5,9},{3,1,2,3,4},{5,6,7,8,9},{5,6,4,8,2},{3,1,6,7,5}};
    printMatrix(matrix);
    printf("\n");

    /*ex7*/
    printf("ex7\n");
    int A[N][N] = {{5,4,2,5,9},{3,1,2,3,4},{5,6,7,8,9},{5,6,4,8,2},{3,1,6,7,5}};
    int B[N][N] = {{5,4,2,5,9},{3,1,2,3,4},{5,6,7,8,9},{5,6,4,8,2},{3,1,6,7,5}};
    int C[N][N] = {0};
    matrixSum(A,B,C);
    printMatrix(C);
    printf("\n");

    /*ex8*/
    printf("ex8\n");
    int C[N][N] = {0};
    matrixMult(A,B,C);
    printMatrix(C);
    printf("\n");

}

/*Fonction*/

/*ex1*/
void printArray(int arr[], unsigned int n){
    for(int i=0; i<n ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

/*ex2*/
void inverseArray(int arr[], unsigned int n){
    for(int i=0 ; i<(n/2) ; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
}

/*ex3*/
void minMaxSearch(int arr[], unsigned int n, unsigned int* index_min, unsigned int* index_max){
    int max=arr[n-1];
    int min=arr[0];

    for(int i=0; i<n ; i++){
        if (arr[i]<min){
            min = arr[i];
            *index_min = i;
        }
    }

    for(int i=0; i<n ; i++){
        if (arr[i]>max){
            max = arr[i];
            *index_max = i;
        }
    }
}

/*ex4*/
void cleanZeros(int arr[], unsigned int* n){
    unsigned int temp_taille = *n; 
    for(int i=0 ; i<temp_taille; i++){
        if (arr[i] == 0  ){
            *n=*n-1;
        }
    }
    for(int i=0 ; i<temp_taille; i++){
        if (arr[i] == 0  ){
            int posz = 1; 
            while (arr[i] == 0 &&  i+posz<temp_taille)
            {
            arr[i] = arr[i+posz];
            arr[i+posz] = 0;
            posz = posz +1;
            }
        }
    }
}

/*ex5*/
bool isBounded(int arr[], unsigned int n){
    int nb = 0;
    for(int i=0; i<n ; i++){
     nb++;
    }
    if (1<=nb && nb<=100)
    {
        return true;
    }else
    {
        return false;
    }
}

bool capicua(int arr[], unsigned int n){
     for(int i=0 ; i<(n/2) ; i++){
        if (arr[i] != arr[n-1-i])
        {
            return false;
        }
    }
    return true;
}

bool isSorted(int arr[], unsigned int n){
    for(int i=0; i<n ; i++){
        if (arr[i] > arr[i+1])
        {
            return false;
        }
    }
    return true;
}

bool allPrimes(int arr[], unsigned int n){
    for(int i=0; i<n ; i++){
        if (arr[i] <= 1){
            return false;
        }
        unsigned int k;
        for (k=2; k*k<=arr[i]; k++){
            if (arr[i] % k == 0){
                return false;
            }
        }
    }
    return true;
}

bool allPrimesEvenIndexes(int arr[], unsigned int n){
    int isPrime;
    for(int i=0; i<n ; i++){
        if (arr[i] <= 1){
            int isPrime = 0;
        }else{
        unsigned int k;
        for (k=2; k*k<=arr[i]; k++){
            if (arr[i] % k == 0){
                int isPrime = 0;
            }else{
                int isPrime = 1;
            }  
        }
        }
         if (isPrime == 1){
             if (i % 2 != 0)
             {
                return false;
             }
        }
    }
    return true;
}

bool allEquals(int arr[], unsigned int n){
    for(int i=0; i<n ; i++){
        if (arr[i] != arr[i+1])
        {
            return false;
        }
    }
    return true;
}

bool noRepetitions(int arr[], unsigned int n){
    for(int i=0; i<n ; i++){
        if (arr[i] == arr[i+1])
        {
            return false;
        }
    }
    return true;
}

/*ex6*/
void printMatrix(int matrix[N][N]){
    for(int i=0; i<N ; i++){
        for(int I=0; I<N ; I++){
        printf("%d ",matrix[i][I]);
        }
        printf("\n");
    }
}

void matrixSum(int A[N][N],int B[N][N],int C[N][N]){
    for(int i=0; i<N ; i++){
        for(int I=0; I<N ; I++){
            C[i][I] = A[i][I] + B[i][I];
        }
    }
}

void matrixMult(int A[N][N],int B[N][N],int C[N][N]){
    for(int i=0; i<N ; i++){
        for(int I=0; I<N ; I++){
            C[i][I] = A[i][I] * B[I][i];
        }
    }
}