/*******************************************************************************
 * AUTHOR 		: Negin Mashhadi
 * STUDENT ID 	: 1084104
 * Assignment#2	: Tic Tac Toe
 * CLASS 		: CS1B
 * SECTION 		: MW 6:30p
 * DUE DATE 	: 02/14/18
 ******************************************************************************/
#include "header.h"
/******************************************************************************
 * 	GetPlayers
 * -----------------------------------------------------------------------------
 * 		This function prompts the user and gets the input for the players’ names.
 * playerX will always contain the name of the player that is using the X token.
 * playerO will always contain the name of the player that is using the O token.
 *
 * 		RETURNS: the players names through the variables playerX and playerO.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS :
 * 				the following variables need to be passed by refrence
 * 				playerX	: player X’s name
 * 				playerO : player O’s name
 *
 * 	POST-CONDITION :
 * 		RETURNS: the players names through the variables playerX and playerO.
 ******************************************************************************/
void GetPlayers (string &playerX,	// OUT - player X’s name
			     string & playerO)	// OUT - player O’x name
{
	char token;		// IN   - The players character
	string name;	// IN   - The name of the player
	bool valid;		// CALC - Validates the correct input

	cout << "Please enter your name: ";
	getline(cin, name);

	do
	{
		cout << "Which token would you like to use? ( X or O): ";
		cin.get(token);
		cin.ignore(1000, '\n');

		token = toupper(token);

		valid = (token == 'X') || (token == 'O');
		if(!valid)
		{
			cout << "\n********* INVALID INPUT - Please enter X or O ******\n\n";
		}
	}while(!valid);

	if(token == 'X')
	{
		playerX = name;
	}
	else
	{
		playerO = name;
	}

	cout << "Please enter your name: ";
	getline(cin, name);

	if(token == 'X')
	{
		playerO = name;
	}
	else
	{
		playerX = name;
	}

	cout << endl << endl;

}
