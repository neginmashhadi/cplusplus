/*******************************************************************************
 * AUTHOR 		: Negin Mashhadi
 * STUDENT ID 	: 1084104
 * Assignment#2	: Tic Tac Toe
 * CLASS 		: CS1B
 * SECTION 		: MW 6:30p
 * DUE DATE 	: 02/14/18
 ******************************************************************************/
#include "header.h"
/*******************************************************************************
 *	CheckWin
 *	----------------------------------------------------------------------------
 *		This function checks to see if either player has run. Once it is
 * possible for a win condition to exist, this should run after each a
 * player makes a play.
 *
 * 		RETURNS the character value of the player that won or a value that
 * indicates a tie.
 *	----------------------------------------------------------------------------
 *	PRE-CONDITON:
 *					boardAr
 *	POST-CONDITION:
 *				RETURNS the character value of the player that won or a value
 *				 that indicates a tie.
 ******************************************************************************/
char CheckWin(const char boardAr[][NUM_COLS])
{
	char whoWon;		// CALC - The char being returned as winner
	bool gameOver;		// CALC - checks to see if any player has won game or
						//		  tie
	bool winner;		// CLAC - checks for winner
	int i;				// CLAC - Loop control variable
	int j;				// CLAC - Loop control variable


	//INTIALIZING
	whoWon   = ' ';
	gameOver = true;
	winner 	 = false;

	//Checks for wins in every row
	for (i= 0; i < NUM_COLS; i++)
	{
		if ( boardAr[0][i]== boardAr[1][i] &&
			 boardAr[0][i]== boardAr[2][i] &&
			 boardAr[0][i] != ' ')
		{
			winner = true;
			whoWon = boardAr[0][i];
		}
	}

	//Checks for winner in every column
	if(!winner)
	{
		for (j=0; j < NUM_COLS; j++)
		{
			if(boardAr[j][0] == boardAr[j][1] &&
			   boardAr[j][0] == boardAr[j][2] &&
			   boardAr[j][0] != ' ')
			{
				winner = true;
				whoWon = boardAr[j][0];
			}
		}
	}

	//Checks for winners in a diagnol
	if(!winner)
	{
		if(boardAr[0][0] == boardAr[1][1] &&
		   boardAr[0][0] == boardAr[2][2] &&
		   boardAr[0][0] != ' ')
		{
			winner = true;
			whoWon = boardAr[0][0];
		}
	}

	//Checks for second diagnol
	if(!winner)
	{
		if(boardAr[0][2] == boardAr[1][1] &&
		   boardAr[0][2] == boardAr[2][0] &&
		   boardAr[0][2] != ' ')
		{
			winner = true;
			whoWon = boardAr[0][2];
		}
	}

	gameOver = false;
	//Checks if the game has empty spaces
	if(!winner)
	{
		gameOver = true;
		for (i= 0; i < NUM_COLS; i++)
		{
			for (j=0; j < NUM_COLS; j++)
			{
				if (  boardAr[i][j] == ' ')
				gameOver = false;
			}
		}
	}
	if(gameOver)
	{
		whoWon = 'T';
	}
	return whoWon;
}
