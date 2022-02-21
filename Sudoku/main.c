#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "sudoku.h"

#define SIZE 9
#define SQRTSIZE 3

void playTheGame();

int main(){

	srand(time(NULL));

	int option = 1;
	char input[3];

	while(option != 2){

		printf("Welcome to CIR1 ISEN NANTES Sudoku!\n\n");

		printf("Choose an option\n");
		printf("1 - Play Sudoku\n");
		printf("2 - Exit\n");

		fgets(input,3,stdin);
		option = atoi(input);
		switch(option){
			case 1:
				playTheGame();
				break;
			case 2:
				printf("Bye\n");
				break;
			default:
				printf("Please put a valid option!!\n\n");
		}
	}
	return 0;
}


void playTheGame(){

	printf("Let's play!!\n\n");

	char input[3];
	int diff;

	while(diff < 1 || diff >5){

		printf("Choose your difficulty!\n");
		printf("From 1 (easy) to 5 (hard)\n");

		fgets(input,3,stdin);
		diff = atoi(input);

		if(diff < 1 || diff > 5){
			printf("Please put a valid difficulty!!\n\n");
		}
	}

	struct Sudoku* s = createEmptySudoku();
	randomSudoku(s,diff);

	int option = 0;
	int row;
	int col;
	char val;

	while(option != 4){
		showSudoku(s);	
		if(getRemaining(s)==0){
			option = 0;
			if(checkIfSudokuIsValid(s)){
				printf("CONGRATULATIONS!!! YOU WON!!! :D\n\n");
				while(option != 1){
					printf("1 - Go back to main menu \n");
					fgets(input,3,stdin);
					option = atoi(input);
					if(option == 1){
						return;
					}
					printf("Please put a valid option!!\n\n");
				}				 
			}
			else{
				printf("NOOOOOO!!! YOU LOST!!! :(\n\n");
				while(option != 1){
					printf("1 - Go back to main menu \n");
					fgets(input,3,stdin);
					option = atoi(input);
					if(option == 1){
						return;
					}
					printf("Please put a valid option!!\n\n");
				}				 

			}
		}
		printf("Choose an option\n");
		printf("1 - Fill a coordinate \n");
		printf("2 - Get hints for a coordinate \n");
		printf("3 - Check if Sudoku still OK! \n");
		printf("4 - Go back to main menu \n");

		fgets(input,3,stdin);
		option = atoi(input);

		switch(option){
			case 1:
				printf("Please enter the row (0-8)\n");
				fgets(input,3,stdin);
				row = atoi(input);
				printf("Please enter the column (0-8)\n");
				fgets(input,3,stdin);
				col = atoi(input);
				printf("Please enter the value (1-9)\n");
				fgets(input,3,stdin);
				val = input[0];
				if(row<0 || row > 8 || col < 0 || col > 8 || val < '1' || val > '9' || getPosition(s,row,col)!='.'){
					printf("Invalid row-column-value!\n");
				}
				else{
					setPosition(s,row,col,val);
					setRemaining(s,getRemaining(s)-1);
				}
				break;
			case 2:
				printf("Please enter the row (0-8)\n");
				fgets(input,3,stdin);
				row = atoi(input);
				printf("Please enter the column (0-8)\n");
				fgets(input,3,stdin);
				col = atoi(input);
				if(row<0 || row >8 || col < 0 || col > 8){
					printf("Invalid row-column!\n");
				}
				else{
					proposeValidOptions(s,row,col);
				}
				break;
			case 3:
				if(checkIfSudokuIsValid(s)){
					printf("Yeah, all good so far!\n");				
				}
				else{
					printf("Nope...you cannot win...go back to main menu :(\n");				
				}
				break;
			case 4:
				deleteSudoku(s);
				return;
			default:
				printf("Please put a valid option!!\n");
		}
	}


}

