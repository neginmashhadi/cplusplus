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
 *	ChangeVal
 * -----------------------------------------------------------------------------
 *	This function will get a new value from the user for and animal and it will
 *	change that value
 *			==> returns nothing
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		animalOption : the animal's value being changed
 *		fluffy		 : the sheep of the farm
 *		maa			 : the sheep of the farm
 *		babe 		 : the pig of the farm
 *
 * POST-CONDITIONS
 *		==> returns nothing
 ******************************************************************************/
void ChangeVal(int animalOption, Animal &fluffy, Animal &maa, Animal &babe)
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * 		LOWER_BOUND : The minimum input user can enter
	 * 		UPPER_BOUND : The maximum input user can enter
	 **************************************************************************/
	const int LOWER_BOUND = 0;
	const int UPPER_BOUND = 400000;

	float newVal;			// IN/OUT - the new value user inputs
	bool invalid;		// CALC   - validates the input

	do
	{
		cout << "\nNEW VALUE: ";
		cin  >> newVal;
		invalid = false;

		if(!cin)
		{
			cout << "\n**** Please enter a number between " << LOWER_BOUND
				 << " and " << UPPER_BOUND << "****\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		else if(newVal < LOWER_BOUND || newVal > UPPER_BOUND)
		{
			cout << "\n**** The number " << newVal << " is an invalid entery "
					"\t****";
			cout << "\n**** Please enter a number between " << LOWER_BOUND <<
					"and " << UPPER_BOUND << "\t****\n\n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
	}while(invalid);

	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	switch(animalOption)
	{
	 case 1: fluffy. SetValue(newVal);
	 	 	 cout << setprecision(2) << fixed << "\nChanging Fluffy's value to "
	 	 		  << newVal << " ...\n";
		 break;
	 case 2: maa. SetValue(newVal);
	 	 	 cout << setprecision(2) << fixed << "\nChanging Maa's value to "
	 	 		  << newVal << " ...\n";
		 break;
	 case 3: babe. SetValue(newVal);
	 	 	 cout << setprecision(2) << fixed << "\nChanging Babe's value to "
	 	 		  << newVal << " ...\n";
		break;
	}
}
