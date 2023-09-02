/******************************************************************************
 * LAB #14			:	Arrays & Linked Lists of Sheep
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 *	Arrays & Linked Lists of Sheep
 *------------------------------------------------------------------------------
 *	This program will Implement	the	Sheep Class	and	the	list class for arrays
 *	and	for	linked-lists.
 *------------------------------------------------------------------------------
 *	INPUT
 *			option 		: the option user enters
 *			sheepAge	: the age of the sheep
 *			sheepName	: the name of the sheep
 *	OUTPUT
 *	outputs the list of the sheep based on users choice
 ******************************************************************************/
int main()
{
	/***************************************************************************
	 * PROCESSING
	 * -------------------------------------------------------------------------
	 * COL_SIZE		: the column size for sheep age and name
	 * LOWER_BOUND	: the lowest age of the sheep
	 * UPPER_BOUND	: the hieghst age of the sheep
	 **************************************************************************/
	const int COL_SIZE	  = 12;
	const int LOWER_BOUND = 0;
	const int UPPER_BOUND = 9;

	SheepArray sheepAr;
	SheepList  sheepLinkedList;
	int option;			// IN 	- the option user enters based on the menu
	int sheepCount;		// CALC	- the number of  sheeps
	int sheepAge;		// IN	- the age of the sheep
	bool empty;			// CALC - validates if list is empty or no
	string sheepName;	// IN	- the name of the sheep


	PrintHeader(cout, "Arrays & Linked Lists of Sheep", 'L', 14);
	cout << "*************************************\n"
			"* WELCOME TO THE SHEEP LIST MANAGER *\n"
			"*************************************\n";

	option = GetAndCheckInput();
	while(option != EXIT)
	{
		switch(option)
		{
		case ADD:
				cout << left << setw(COL_SIZE) << "\nSheep Name: ";
				getline(cin, sheepName);
				cout << setw(COL_SIZE) << "Sheep Age: " << right;
				cin  >> sheepAge;
				if(!cin)
				{
					cout << "\n*** Invalid Input - please enter an age "
							"between " << LOWER_BOUND << " and " << UPPER_BOUND
							<< " ***\n"<< endl;
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Sheep Age: ";
					cin  >> sheepAge;
				}
				else if(sheepAge > UPPER_BOUND || sheepAge < LOWER_BOUND)
				{
					cout << "\n*** Invalid Input - please enter an age "
					"between " << LOWER_BOUND << " and " << UPPER_BOUND << " ***\n"<< endl;
					cout << "Sheep Age: ";
					cin  >> sheepAge;
				}
				else
				{
					sheepLinkedList.AddSheep(sheepName, sheepAge);
				}
				cout << left << "\nThe sheep...\n" << setw(COL_SIZE) <<
						"Sheep Name: " << sheepName << endl << setw(COL_SIZE) <<
						"Sheep Age:" << sheepAge << endl <<
						"Has been added!\n\n";
			break;
		case FRONT: sheepLinkedList.Front();
			break;
		case FIND:	empty = sheepLinkedList.IsEmpty();
					if(empty)
					{
						cout << "\nThere are no sheep to be found!\n\n";
					}
					else
					{
						cout << "\nWho are you looking for? ";
						getline(cin, sheepName);
						sheepLinkedList.Search(sheepName);
					}
				break;
		case SIZE:	sheepCount = sheepLinkedList.Size();
					if(sheepCount == 0)
					{
						cout << "\nThe list is empty!\n\n";
					}
					else
					{
						cout << "\nThere are " << sheepCount << " sheep in the"
								" list!\n\n";
					}
				break;
		case OUTPUTLIST:
						sheepLinkedList.Output();
						sheepCount = sheepLinkedList.Size();
						if(sheepCount != 0)
						{
							cout << "There are " << sheepCount << " sheep in the"
									" list!\n\n";
						}
				break;
		case CLEAR: sheepLinkedList.ClearList();
				break;
		}//END - Switch
		option = GetAndCheckInput();
	}//END - While

	cout << "\n\n*** TESTING FOR ARRAY ***\n\n\n";

	option = GetAndCheckInput();
	while(option != EXIT)
	{
		switch(option)
		{
		case ADD:
				cout << left << setw(COL_SIZE) << "\nSheep Name: ";
				getline(cin, sheepName);
				cout << setw(COL_SIZE) << "Sheep Age: " << right;
				cin  >> sheepAge;
				if(!cin)
				{
					cout << "\n*** Invalid Input - please enter an age "
							"between " << LOWER_BOUND << " and " << UPPER_BOUND
							<< " ***\n"<< endl;
					cin.clear();
					cin.ignore(1000, '\n');
					cout << "Sheep Age: ";
					cin  >> sheepAge;
				}
				else if(sheepAge > UPPER_BOUND || sheepAge < LOWER_BOUND)
				{
					cout << "\n*** Invalid Input - please enter an age "
					"between " << LOWER_BOUND << " and " << UPPER_BOUND << " ***\n"<< endl;
					cout << "Sheep Age: ";
					cin  >> sheepAge;
				}
				else
				{
					sheepAr.AddSheep(sheepName, sheepAge);
				}
				cout << left << "\nThe sheep...\n" << setw(COL_SIZE) <<
						"Sheep Name: " << sheepName << endl << setw(COL_SIZE) <<
						"Sheep Age:" << sheepAge << endl <<
						"Has been added!\n\n";
			break;
		case FRONT: sheepAr.Front();
			break;
		case FIND:	empty = sheepAr.IsEmpty();
					if(empty)
					{
						cout << "\nThere are no sheep to be found!\n\n";
					}
					else
					{
						cout << "\nWho are you looking for? ";
						getline(cin, sheepName);
						sheepAr.Search(sheepName);
					}
				break;
		case SIZE:	sheepCount = sheepAr.Size();
					if(sheepCount == 0)
					{
						cout << "\nThe list is empty!\n\n";
					}
					else
					{
						cout << "\nThere are " << sheepCount << " sheep in the"
								" list!\n\n";
					}
				break;
		case OUTPUTLIST:
						sheepAr.Output();
						sheepCount = sheepAr.Size();
						if(sheepCount != 0)
						{
							cout << "There are " << sheepCount << " sheep in the"
									" list!\n\n";
						}
				break;
		case CLEAR: sheepAr.ClearList();
				break;
		}//END - Switch
		option = GetAndCheckInput();
	}//END - While





	return 0;
}
