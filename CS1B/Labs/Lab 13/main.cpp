/******************************************************************************
 * LAB #13			:	Intro to OOP
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/30/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * Intro to OOP
 * -----------------------------------------------------------------------------
 * This program will implement Farmer Pete's animal class
 * -----------------------------------------------------------------------------
 * INPUT
 * 		option 		 : The option user choses from the main menu
 * 		intialOption : Users choice based on the intialization menu
 * 		animalOption : User choice of animal's age or value to change
 * OUTPUT
 * 		outputs the changes of the animals and will display each animal's
 * 	information
 * ****************************************************************************/
int main()
{
	const int EXIT = 0;

	int option;			// IN   - The option user choses from the main menu
	int intialOption;	// IN   - Users choice based on the intialization menu
	int animalOption;	// IN   - User choice of animal's age or value to change
	Animal fluffy;		// CALC - name of the sheep
	Animal maa;			// CALC - name of the sheep
	Animal babe;		// CALC - name of the pig


	PrintHeader(cout, "Intro to OPP", 'L', 13);

	//INTIALIZING NAMES
	fluffy.SetName("Fluffy");
	maa.SetName("Maa");
	babe.SetName("Babe");

	option = GetAndCheckInput();
	if(option == 1)
	{
		cout << "\nInitializing Fluffy, Maa, & Babe...\n";
		Intializing(fluffy, maa, babe);
		intialOption = GetAndCheckIntialInput();
		while(intialOption != EXIT)
		{
			switch(intialOption)
			{
				case INTIALIZE:  IntializingAnimals(fluffy, maa, babe);
					break;
				case CHANGEAGE:	 animalOption = GetAgeAnimalInput();
								 ChangeAge(animalOption, fluffy, maa, babe);
					break;
				case CHANEGVAL:	 animalOption = GetValueAnimalInput();
								 ChangeVal(animalOption, fluffy, maa, babe);
					break;
				case DISPLAY: DisplayAnimal(fluffy, maa, babe);
					break;
			}
			intialOption = GetAndCheckIntialInput();
		}
	}
	else if(option == EXIT)
	{
		cout << "\nThank you for using my program!";
	}

	return 0;
}
