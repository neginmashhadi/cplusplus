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
 * OutputWinner
 * ----------------------------------------------------------------------------
 * 	 This function receives as input a character indicating which player won
 * or if the game was a tie and outputs an appropriate message. This function
 * does not return anything as it simply outputs the appropriate message to
 * the screen.
 *		RETURNS: nothing Displays the winner’s name
 *	----------------------------------------------------------------------------
 *	PRE-CONDITION:
 *					whoWon	: Character that has won the game
 *					playerX	: The name of the player for character X
 *					playerO	: The name of the player for character O
 *
 *	POST-CONDITION:
 *					RETURNS: nothing Displays the winner’s name
 ******************************************************************************/
void OutputWinner(char whoWon, 		// IN - represents the winner or a value
							   	    // indicating a tied game.
				  string playerX,   // OUT - player X’s name
				  string playerO)	// OUT - player O’x name
{

	if (whoWon == 'X')
	{
		cout << playerX << " has won the game!\n\n";
	}
	else if (whoWon == 'O')
	{
		cout << playerO << " has won the game!\n\n";
	}
	else if (whoWon == 'T')
	{
		cout << "The game is a tie!\n\n";
	}//END IF ELSE IF
}
