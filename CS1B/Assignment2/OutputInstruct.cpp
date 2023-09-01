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
 *		This function outputs instructions to the users. There are no input
 * or output parameters for this function as it only displays text to
 * the screen.
 * 		==> returns nothing
 ******************************************************************************/
void OutputInstruct()
{
	const string MENU_OPTION = "Welcome to Tic-Tac-Toe\n\n"
							   "The object of this game is to get three in a"
							   " row.\nPlease choose a token and enter the space"
							   " you would like to place your token in ( row"
							   " first and then the column)\n"
							   "to enter your data please enter the row number"
							   " space and the column number!\n"
							   "Please enter your name before playing the "
							   "game\n\n";


	cout << MENU_OPTION;
}
