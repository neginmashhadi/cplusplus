/******************************************************************************
 * LAB #14			:	Arrays & Linked Lists of Sheep
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * GetAndCheckInput
 * -----------------------------------------------------------------------------
 * This function will validate the users input and will check if the input is
 * 	correct
 * 		==> returns the input
 * -----------------------------------------------------------------------------
 * PRE-CONDITION:
 * 				NONE
 * POST-CONDITION
 * 		 ==> returns the input
 * ****************************************************************************/
int GetAndCheckInput()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * 		LOWER_BOUND : The minimum input user can enter
	 * 		UPPER_BOUND : The maximum input user can enter
	 **************************************************************************/
	const int LOWER_BOUND = 0;
	const int UPPER_BOUND = 6;

	int  command;		// IN 	- option users inputed based on the menu
	bool invalid;		// CALC	- validates the input

	do
	{
		invalid = false;
		cout << MENU;
		cin	 >> command;

		if(!cin >> command)
		{
			cout << "\n**** Please enter a number between " << LOWER_BOUND
				 << " and " << UPPER_BOUND << " ****\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		else if(command < LOWER_BOUND || command > UPPER_BOUND)
		{
			cout << "\n**** The number " << command << " is an invalid entery "
					"****";
			cout << "\n**** Please enter a number between " << LOWER_BOUND <<
					" and " << UPPER_BOUND << "****\n\n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
	}while(invalid);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	return command;
}
