/******************************************************************************
 * LAB #13			:	Intro to OOP
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/30/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * IntializingAnimals
 * -----------------------------------------------------------------------------
 * This function will ask the user whether they want to re-intialize the
 * 	the animals.
 * 		==> returns nothing
 * -----------------------------------------------------------------------------
 * PRE-CONDITION:
 * 		fluffy		 : the sheep of the farm
 *		maa			 : the sheep of the farm
 *		babe 		 : the pig of the farm
 * POST-CONDITION
 * 		 ==> returns nothing
 * ****************************************************************************/
void IntializingAnimals(Animal &fluffy, Animal &maa, Animal &babe)
{
	char choice;	// IN - the character entered by the user

	cout << "\nAre you sure you want to reinitialize (Y/N): ";
	cin.get(choice);

	choice = toupper(choice);
	while(choice != 'Y' && choice != 'N')
	{
		cout << "\n**** " << choice << " Animals have not been re-initialized!\n"
	 								   "**** Please input Y or N ****\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "\nAre you sure you want to reinitialize (Y/N): ";
		cin.get(choice);
		choice = toupper(choice);
	}

	switch(choice)
	{
	case 'Y': cout << "\nInitializing Fluffy, Maa, & Babe...\n";
					   Intializing(fluffy, maa, babe);
		break;
	case 'N': cout << "Animals have not been re-initialized!\n";
		break;
	}
}

