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
 *	ChangeAge
 * -----------------------------------------------------------------------------
 *	This function will get a new age from the user and it will change the
 *	age of the animals based on user's input
 *			==> returns nothing
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		animalOption : the animal's age being changed
 *		fluffy		 : the sheep of the farm
 *		maa			 : the sheep of the farm
 *		babe 		 : the pig of the farm
 * POST-CONDITIONS
 *		==> returns nothing
 ******************************************************************************/
void ChangeAge(int animalOption, Animal &fluffy, Animal &maa, Animal &babe)
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * 		LOWER_BOUND : The minimum input user can enter
	 * 		UPPER_BOUND : The maximum input user can enter
	 **************************************************************************/
	const int LOWER_BOUND = 0;
	const int UPPER_BOUND = 10;

	int newAge;		// IN/OUT - the new age user inputs
	bool invalid;	// CALC   - validates the user input

	do
	{
		cout << "\nNEW AGE: ";
		cin  >> newAge;
		invalid = false;

		if(!cin >> newAge)
		{
			cout << "\n**** Please enter a number between " << LOWER_BOUND
				 << " and " << UPPER_BOUND << "****\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		else if(newAge < LOWER_BOUND || newAge > UPPER_BOUND)
		{
			cout << "\n**** The number " << newAge << " is an invalid entery "
					"****";
			cout << "\n**** Please enter a number between " << LOWER_BOUND <<
					" and " << UPPER_BOUND << "****\n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
	}while(invalid);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	switch(animalOption)
	{
	 case 1: fluffy. SetAge(newAge);
	 	 	 cout << "\nChanging Fluffy's age to " << newAge << " ...\n";
		 break;
	 case 2: maa. SetAge(newAge);
	 	 	 cout << "\nChanging Maa's age to " << newAge << " ...\n";
		 break;
	 case 3: babe. SetAge(newAge);
	 	 	 cout << "\nChanging Babe's age to " << newAge << " ...\n";
		break;
	}
}
