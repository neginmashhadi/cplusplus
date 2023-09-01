/****************************************************************************
 * AUTHOR 		: Negin Mashhadi
 * STUDENT ID 	: 1084104
 * Assignment#2	: Tic Tac Toe
 * CLASS 		: CS1B
 * SECTION 		: MW 6:30p
 * DUE DATE 	: 02/14/18
 ****************************************************************************/
#include "header.h"
/******************************************************************************
 * InitBoard
 * ----------------------------------------------------------------------------
 * This function initializes each spot in the board to a space ' '.
 *
 * RETURNS: Board initialized with all spaces
 * ----------------------------------------------------------------------------
 * PRE-CONDITION:
 * 					boardAr : The tic tac toe bored
 * POST-CONDITION:
 * 					<none assigned>
 *****************************************************************************/
void InitBoard(char boardAr[][NUM_COLS]) // IN - The tic tac toe bored
{
	int row;		// CALC - the row of the 2d array
	int col;		// CALC - the col of the 2d array

	for( row = 0; row < NUM_COLS; row++)
	{
		for( col = 0; col < NUM_COLS; col++)
		{
			boardAr[row][col] = ' ';
		}
	}


}
