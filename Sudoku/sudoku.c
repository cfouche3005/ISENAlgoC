#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "sudoku.h"

// Operations de creation


// --------------------------------------------
// Creates an empty sudoku, all cases with '.'
// --------------------------------------------
struct Sudoku* createEmptySudoku(){

//----------------------------------
//-1---TO DO------------------------
//----------------------------------
    struct Sudoku* s = malloc(sizeof(struct Sudoku));
    if(s==NULL) {
        return NULL;
    }
    s->board = malloc(sizeof(SIZE*sizeof(char*));
    if(s->board == NULL) {
        return NULL;
    }
    for(int i=0;i<SIZE;i++) {
        s->board[i] = malloc(sizeof(SIZE*sizeof(char));
        if(s->board[i] == NULL) {
            return NULL;
        }
    }
    s->diff = 0;
    s->remaining = 0;
}

// -------------------------------------
// Sets value of board in row,col to val
// -------------------------------------
void setPosition(struct Sudoku* s,int row,int col,char val){

//----------------------------------
//-2---TO DO------------------------
//----------------------------------

}

// -----------------------
// Sets difficulty to diff
// -----------------------
void setDifficulty(struct Sudoku* s,int diff){

//----------------------------------
//-3---TO DO------------------------
//----------------------------------

}

// ---------------------------------
// Sets remaining cases to fill to r
// ---------------------------------
void setRemaining(struct Sudoku* s,int r){

//----------------------------------
//-4---TO DO------------------------
//----------------------------------

}

// Access
// ----------------------------------
// Obtains the value of given row,col
// ----------------------------------
char getPosition(struct Sudoku* s,int row,int col){

//----------------------------------
//-5---TO DO------------------------
//----------------------------------

}

// ---------------------------
// Obtains sudoku's difficulty
// ---------------------------
int getDifficulty(struct Sudoku* s){

//----------------------------------
//-6---TO DO------------------------
//----------------------------------

}

// ---------------------------------------
// Obtains the number of uncompleted cases
// ---------------------------------------
int getRemaining(struct Sudoku* s){

//----------------------------------
//-7---TO DO------------------------
//----------------------------------

}

// Suppression
// ----------------------
// Frees memory of sudoku
// ----------------------
void deleteSudoku(struct Sudoku* s){

//----------------------------------
//-8---TO DO------------------------
//----------------------------------

}


// Other operations
// From here, remember encapsulation principle, meaning, don't use internal attributes of the struct (with -> operator)


bool fillRest(struct Sudoku* s,int i, int j); // auxiliary function defined below used in randomSudoku 

// ---------------------------------------------------
// Creates a valid random sudoku with given difficulty
// ---------------------------------------------------
void randomSudoku(struct Sudoku* s, int diff){

	int val;

	// we fill diag matrices
	for(int k=0;k<SIZE;k+=SQRTSIZE){
		for(int i=0;i<SQRTSIZE;i++){
			for(int j=0;j<SQRTSIZE;j++){
				val = rand()%SIZE;
				setPosition(s,k+i,k+j,'1'+val);	
				while(!checkIfSudokuIsValid(s)){
						val = rand()%SIZE;
						setPosition(s,k+i,k+j,'1'+val);
				}		
			}
		}
	}
	
	// we fill the rest
	fillRest(s,0,3);

	// we remove some values according to diff 1 easy, 5 hard
	// diff 1 removes 5 - 14
	// diff 2 removes 15 - 24
	// diff 3 removes 25 - 34
	// diff 4 removes 35 - 44
	// diff 5 removes 45 - 54
 

	int r = 10*diff - 5;
	r = r+rand()%10;

//------------------------------------
//-9---TO DO--------------------------
//------------------------------------
// Remove exactly r cases of the board
// and replace them with '.'




//------------------------------------
//------------------------------------
//------------------------------------

	// we set diff and remaining cases to actual sudoku
	setDifficulty(s,diff);
	setRemaining(s,r);
}


// -----------------------------------------------------------------------
// Prints the sudoku, its size, difficulty and number of uncompleted cases
// -----------------------------------------------------------------------
void showSudoku(struct Sudoku* s){

	printf("\n\t  SUDOKU: (size %dx%d)\n",SIZE,SIZE);
	printf("    Difficulty: %d - Remaining: %d\n\n",getDifficulty(s),getRemaining(s));
	
	printf("\t  ");
	for(int j=0;j<SIZE;j++){
				printf("%d ",j);
	}
	printf("\n");

	for(int i=0;i<SIZE;i++){	

		if(i%3==0){
			printf("\t ");
			for(int j=0;j<SIZE;j++){
				printf("--");
			}
			printf("-\n");
		}

		printf("\t%d",i);		
		for(int j=0;j<SIZE;j+=SQRTSIZE){
			printf("|%c %c %c",getPosition(s,i,j),getPosition(s,i,j+1),getPosition(s,i,j+2));
		}
		printf("|\n");
	}

	printf("\t");
	for(int i=0;i<SIZE;i++){
		printf("--");
	}
	printf("-\n\n");
}


// ------------------------------------
// Checks if sudoku is in a valid state
// ------------------------------------
bool checkIfSudokuIsValid(struct Sudoku* s){


//------------------------------------
//-10---TO DO-------------------------
//------------------------------------
// Check if each row is valid, meaning
// that values 1-9 should appear at 
// most one time in each row
	



//------------------------------------
//------------------------------------
//------------------------------------

//------------------------------------
//-11---TO DO-------------------------
//------------------------------------
// Check if each column is valid, that
// is, values 1-9 should appear at 
// most one time in each column




//------------------------------------
//------------------------------------
//------------------------------------

	// we check each small square	
	for(int i=0;i<SIZE;i+=SQRTSIZE){
		for(int j=0;j<SIZE;j+=SQRTSIZE){
			for(int k1=0;k1<SQRTSIZE;k1++){
				for(int k2=0;k2<SQRTSIZE;k2++){
					for(int l1=0;l1<SQRTSIZE;l1++){
						for(int l2=0;l2<SQRTSIZE;l2++){
							if(((k1 != k2) || (l1 != l2)) && 
								(getPosition(s,i+k1,j+l1) != '.') && (getPosition(s,i+k2,j+l2) != '.') && 
								(getPosition(s,i+k1,j+l1) != '.') && (getPosition(s,i+k1,j+l1) != '.') && 
								(getPosition(s,i+k1,j+l1) == getPosition(s,i+k2,j+l2))){
									return false;
							}
						}
					}
				}
			}
		}
	}
	return true;
}

// ---------------------------------------------------
// Prints all valid options to fill in a given row,col
// ---------------------------------------------------
void proposeValidOptions(struct Sudoku* s, int row, int col){

//----------------------------------
//-12---TO DO-----------------------
//----------------------------------


}

// ---------------------------------------
// Auxiliary function used in randomSudoku
// ---------------------------------------
bool fillRest(struct Sudoku* s,int i, int j){
    if (j>=SIZE && i<SIZE-1){
        i = i + 1;
        j = 0;
    }
    if (i>=SIZE && j>=SIZE){
        return true;
	}
    if (i < SQRTSIZE){
        if (j < SQRTSIZE){
            j = SQRTSIZE;
		}
    }
    else{ 
		if (i < SIZE-SQRTSIZE){
            if (j==(int)(i/SQRTSIZE)*SQRTSIZE){
                j =  j + SQRTSIZE;
			}
		}        
	    else{
	        if (j == SIZE-SQRTSIZE){
	            i = i + 1;
	            j = 0;
	            if (i>=SIZE){
	                return true;
				}
	        }
	    }
	}
    for(int num=1;num<=SIZE;num++){
		setPosition(s,i,j,'0'+num);
        if (checkIfSudokuIsValid(s)){
            if (fillRest(s,i,j+1)){
                return true;
			}
            setPosition(s,i,j,'.');
        }
		else{
            setPosition(s,i,j,'.');
		}
    }
    return false;
}






