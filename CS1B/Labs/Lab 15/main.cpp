/******************************************************************************
 * LAB #15		  : Inheritance, overloading, & redifining
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 05/14/18
 *****************************************************************************/
#include "header.h"
/******************************************************************************
 * Inheritance, overloading, & redifining
 * ----------------------------------------------------------------------------
 * This Program will read a list of sheeps and pigs from an input file into
 * a linked list and will allow the user to change the name of an animal
 * or re-intialize them.
 * ----------------------------------------------------------------------------
 * INPUT:
 * 			command 		: users choice of the first menu
 * 			command2		: users choice of the second menu
 * 			animalOption	: users choice of the animal to change age
 * 	OUTPUT:
 * 		will display a table with the data in it
 ******************************************************************************/
int main()
{
	int command;				//IN - users choice of the first menu
	int command2;				//IN - users choice of the second menu
	int animalOption;			//IN - users choice of the animal to change age
	Sheep mySheep ;				//CALC - the sheep derived from animal
	Pig thePig;					//CALC - the pig derived from animal
	SheepLinkedList sheepList;	//CALC - the linked list of sheeps
	PigLinkedList pigList;		//CALC - the linked list of pigs
	ifstream inFile;

	PrintHeader(cout, "Inheritance, overloading, & redifining", 'L', 15);
	command = GetAndCheckInput();
	if(command == 1)
	{
		command2 = GetAndCheckIntialInput();
		pigList = IntializePig();
		sheepList = IntializeSheep();
		while(command2 != EXIT)
		{
			switch(command2)
			{
			case INTIALIZESHEEP: sheepList = IntializeSheep();
								 cout << "\nThe list of sheeps has been "
										 "intialized!\n";

				break;
			case INTIALIZEPIG: pigList = IntializePig();
							   cout << "\nThe list of pigs has been "
									   "intialized!\n";

				break;

			case CHANGEAGE: cout << "\n1 - Sheep\n"
									"2 - Pig\n"
									"Please Enter which Animal's age would you "
									"like to change: ";
							cin	 >> animalOption;
							cin.ignore(1000, '\n');
							switch(animalOption)
							{
							case 1: sheepList.ChangeAge();
								break;
							case 2: pigList.ChangeAge();
								break;
							default: "\n*** Please enter either 1 or 2 ***\n";
								break;
							}

			break;
			case DISPLAY: cout << "\nThe List of Sheeps!\n\n";
						  sheepList.Display();
						  cout << "\n\nThe List of Pigs!\n\n";
						  pigList.Display();
						  cout << endl;
						break;
			}
			command2 = GetAndCheckIntialInput();
		}
	}
	else
	{
		cout << "\nThank you for using my Program\n";
	}



	return 0;
}
