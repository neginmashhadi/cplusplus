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
 *	MenuOuput
 *	----------------------------------------------------------------------------
 *		This function ouputs a menu for the user and allows them to choose
 *	an option.
 *
 *		Returns the character that the user has chosen
 *	----------------------------------------------------------------------------
 *	PRE-CONDITIONS
 *					<NONE ASSIGNED>
 *	POST-CONDITON
 *		Returns the character that the user has chosen
 ******************************************************************************/
char MenuOuput()
{
	char playChoice;		// IN 	- users choice
	bool validChoice;		// CALC	- Validates users choice

	do
	{
	cout <<   "a. Exit\n"
			  "b. Set Player Names\n"
			  "c. Play in Two Player Mode\n"
			  "d. Play in One Player Mode\n"
			  "\nplease enter the mode desired: ";

	cin.get(playChoice);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	cout << endl;

	playChoice = toupper(playChoice);

	validChoice  =  (playChoice == 'A') ||
					(playChoice == 'B') ||
					(playChoice == 'C') ||
					(playChoice == 'D');

	if(!validChoice)
	{
		cout << "\n**********INVALID CHOICE - Please enter a, b, c or d *****\n"
				"\n";
	}

	}while(!validChoice);

	return playChoice;
}
