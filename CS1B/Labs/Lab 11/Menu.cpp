/***********************************************************************
 * LAB # 11   : Creating an Ordered List
 * CLASS      : CS1B
 * SECTION    : MW-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#include "CS1BL11.h"

/***********************************************************************
 * FUNCTION - Menu
 * ---------------------------------------------------------------------
 * This function will output the menu containing the options to
 * manipulate the stack using an enumerated type.
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 	*NONE*
 *
 * POST-CONDITIONS
 * 	This function will output the menu for the user.
 **********************************************************************/
StackMenu Menu()
{
	int       menuChoice;     //IN - the menu choice by user
	StackMenu menuChoiceEnum; //CALC - menu choice enum
	bool      invalid;        //CALC - bool of invalid

	do
	{
		invalid = false;

		cout << "LIST MENU:\n"
				 << "1 - Create List\n"
				 << "2 - Display List\n"
				 << "3 - Is the list empty?\n"
				 << "4 - Search by name\n"
				 << "5 - Remove Node\n"
				 << "6 - Clear List\n"
				 << "0 - to Exit\n"
				 << "Enter a command (0 to exit): ";
		if(!(cin >> menuChoice))
		{
			cout << "\nPlease input a number between 0 and 6!\n\n";
			cin.clear();
			cin.ignore(1000,'\n');
			invalid = true;
		}	//END if(!(cin >> menuChoice))
		else if (menuChoice < 0 || menuChoice > 6)
		{
			cout << "\nThe number " << menuChoice << " is invalid!\n";
			cout << "Please input a number between 0 and 6!\n\n";
			invalid = true;
		}	//END else if (menuChoice < 0 || menuChoice > 5)
	}while(invalid);

	cout << endl;
	cin.ignore(1000, '\n');

	switch(menuChoice)
	{
	case 0: menuChoiceEnum = EXIT;
	break;
	case 1: menuChoiceEnum = CREATE;
	break;
	case 2: menuChoiceEnum = DISPLAY;
	break;
	case 3: menuChoiceEnum = ISEMPTY;
	break;
	case 4: menuChoiceEnum = SEARCH;
	break;
	case 5: menuChoiceEnum = REMOVE;
	break;
	case 6: menuChoiceEnum = CLEAR;
	break;
	}	//END switch(menuChoice)

	return menuChoiceEnum;
}
