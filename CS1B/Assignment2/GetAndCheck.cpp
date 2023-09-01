/******************************************************************************
 * AUTHOR 		: Negin Mashhadi
 * STUDENT ID 	: 1084104
 * Assignment#2	: Tic Tac Toe
 * CLASS 		: CS1B
 * SECTION 		: MW 6:30p
 * DUE DATE 	: 02/14/18
 ******************************************************************************/
#include "header.h"
/*******************************************************************************
 *	GetAndCheckInp
 *	----------------------------------------------------------------------------
 *		This function determins which spot the user wants to play in. They must
 * type in the row and the column. The function obtains the input and verifies
 * that the row and column are in the range and spot is not taken. assume all
 * the elements in the array were intialized to blank spaces.
 *
 * 		RETURNS NOTHING
 *	----------------------------------------------------------------------------
 *	PRE-CONDITON:
 *					boardAr
 *					token
 *					playerX
 *					playerO
 *	POST-CONDITION:
 *					RETURNS NOTHING
 ******************************************************************************/
void GetAndCheckInp( char baordAr[][NUM_COLS],
					 char token,
					 string playerX,
					 string playerO)
{
	int row;		// CALC - Checks the rows of the 2d array
	int col;		// CALC	- Checks the columns of the 2d array
	bool valid;		// CALC - Validates the correct spot
	char space;		// CALC - The empty spaces on the board
	bool doIgnore;	// CALC - Clears input buffer



	/**INTIALIZATION**/
	space = ' ';
	valid = false;
	doIgnore = false;

	do
	{
		if(token == 'X')
		{
			cout << playerX;
		}
		else
		{
			cout << playerO;
		}
		cout << "\'s turn! what is your play?: ";

		if(playerO == "computer" && token == 'O')
		{
			//PROCESSING - gets computer to play
			ComputerPlay(baordAr, row, col);
			cout << row+1 << " " << col+1 << endl;
		}
		else
		{
			doIgnore = true;
			cin  >> row >> col;
			row--;
			col--;
		}//END IF ELSE IF

		//VALIDATING THE CORRCT INPUT BY THE USER
		if(row > NUM_COLS-1 || row < 0)
		{
			cout << "invalid row - please try again\n";
		}
		else if (col > NUM_COLS-1 || col < 0)
		{
			cout << "invalid column - please try again\n";
		}
		else if(baordAr[row][col] != space)
		{
			cout << "This space is taken - please try again\n";
		}
		else
		{
			valid = true;
		}//END IF ELSE IF


	}while(!valid);

	baordAr[row][col] = token;

	if (doIgnore)
	{
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}//END WHILE

}


