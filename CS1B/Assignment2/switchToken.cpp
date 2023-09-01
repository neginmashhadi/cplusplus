/****************************************************************************
 * AUTHOR 		: Negin Mashhadi
 * STUDENT ID 	: 1084104
 * Assignment#2	: Tic Tac Toe
 * CLASS 		: CS1B
 * SECTION 		: MW 6:30p
 * DUE DATE 	: 02/14/18
 ****************************************************************************/
#include "header.h"
/*******************************************************************************
 * SwitchToken
 * -----------------------------------------------------------------------------
 * 		This function switches the active player.
 * It takes in a parameter representing the current player's token
 * as a character value (either an X or an O) and returns the opposite.
 * For example, if this function receives an X it returns an O. If it
 * receives and O it returns and X.
 *
 * 		RETURNS: the token opposite of the one in which it receives.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS:
 * 					token :  current player’s token ('X' or 'O')
 * POST-CONDITION:
 * 		RETURNS: the token opposite of the one in which it receives.
 ******************************************************************************/
char SwitchToken(char token) 	// IN - current player’s token ('X' or 'O')
{
	char newToken;				// CALC - The token that will be switched to

	newToken = (token == 'X'? 'O'
							: 'X');

	return newToken;
}
