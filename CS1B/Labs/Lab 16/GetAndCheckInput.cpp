/******************************************************************************
 * Lab 16		 	: 	Polymorphism
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/01/2018
 * ****************************************************************************/
#include "header.h"
/*******************************************************************************
 *  GetAndCheckInout
 * -----------------------------------------------------------------------------
 * This function gets input and checks if the input is valid. If the input is
 * invalid, a error message will output
 * -----------------------------------------------------------------------------
 * PRE-CONDITION
 * 				none
 * POST-CONDITION
 * 			==> returns the input by the user
 ******************************************************************************/
int GetAndCheckInput()
{
	const int LOWER_BOUND = 0;
	const int UPPER_BOUND = 7;

	int  command;
	bool invalid;

	invalid = false;

	do
	{
		cout << MENU;
		cin	 >> command;

		if(!cin >> command)
		{
			cout << "\n**** Please input a number between 0 and 4 ****\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		else if(command < LOWER_BOUND || command > UPPER_BOUND)
		{
			cout << "\n**** The number " << command << " is an invalid entery "
					"****";
			cout << "\n**** Please enter a number between " << LOWER_BOUND <<
					"and " << UPPER_BOUND << "****\n\n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
	}while(invalid);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	return command;
}
