#ifndef _SUDOKU_H
#define _SUDOKU_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 9
#define SQRTSIZE 3

struct Sudoku{
	int diff;
	int remaining;
	char** board;
};


// Creation
struct Sudoku* createEmptySudoku();

void setPosition(struct Sudoku* s,int row,int col,char val);

void setDifficulty(struct Sudoku* s,int diff);

void setRemaining(struct Sudoku*,int r);

// Access
char getPosition(struct Sudoku* ,int row,int col);

int getDifficulty(struct Sudoku* s);

int getRemaining(struct Sudoku* s);


// Suppression
void deleteSudoku(struct Sudoku* s);


// Other operations
void randomSudoku(struct Sudoku* s, int diff);

void showSudoku(struct Sudoku* s);

bool checkIfSudokuIsValid(struct Sudoku* s);

void proposeValidOptions(struct Sudoku* s, int row, int col);



#endif // _SUDOKU_H

