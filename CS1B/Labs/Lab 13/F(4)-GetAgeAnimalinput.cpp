/******************************************************************************
 * AURHOR			:	Negin Mashhadi &	Mohammed Taei
 * STUDENT ID		:	1084104 	   &	1019392
 * LAB #13			:	Intro to OOP
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/30/2018
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
int GetAgeAnimalInput()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * 		LOWER_BOUND : The minimum input user can enter
	 * 		UPPER_BOUND : The maximum input user can enter
	 **************************************************************************/
	const int LOWER_BOUND = 1;
	const int UPPER_BOUND = 3;

	int command;		// IN 	- option users inputed based on the menu
	bool invalid;		// CALC	- validates the input

	do
	{
		invalid = false;
		cout << "\nCHANGE AGE:";
		cout << ANIMAL_MENU;
		cin	 >> command;

		if(!cin >> command)
		{
			cout << "\n**** Please enter a number between " << LOWER_BOUND
				 << " and " << UPPER_BOUND << " ****\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		else if(command < LOWER_BOUND || command > UPPER_BOUND)
		{
			cout << "\n**** The number " << command << " is an invalid entery "
					"****";
			cout << "\n**** Please enter a number between " << LOWER_BOUND <<
					" and " << UPPER_BOUND << " ****\n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
	}while(invalid);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	return command;
}
