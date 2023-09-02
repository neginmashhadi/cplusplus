/***********************************************************************
 * AUTHOR     : Jeffrey Adams & Negin Mashhadi
 * STUDENT ID : 1080576 & 1084104
 * LAB # 11   : Creating an Ordered List
 * CLASS      : CS1B
 * SECTION    : MW-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#include "CS1BL11.h"

/***********************************************************************
 * Creating an Ordered List
 * ---------------------------------------------------------------------
 * This program that implements a doubly linked-list, which is created
 * alphabetically. It will Use the input file provided and will get the
 * data needed from the file. It will provide a menu for the user and
 * allows the user to chose from the menu.
 * --------------------------------------------------------------------
 * Input
 * 		menuChoiceEnum : users choice based on the menu
 * 		name		   : the name of the person being searched
 * output
 * 		it will output a table of the data, ther person being searched
 * 		or removed and if clearing the entire list it will show it.
 **********************************************************************/

int main()
{
	/*******************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -----------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * LAB_NUM    : Lab Number (specific to this lab)
	 * LAB_NAME   : Title of the lab
	 * ASSIG_TYPE : Type of assignment (L for lab or A for Assignment)
	 * -----------------------------------------------------------------
	 ******************************************************************/
	// CONSTANTS - FOR CLASS HEADING
	const string PROGRAMMER = "Jeffrey Adams & Negin Mashhadi";
	const int    LAB_NUM    = 11;
	const string LAB_NAME   = "Creating an Ordered List";
	const char   ASSIG_TYPE = 'L';

	//CONSTANTS
	const int PROMPT_COL = 8;

	//VARIABLES
	ifstream   InFile;
	StackMenu  menuChoiceEnum;  //IN     - menu choice enum
	ListNode   *head;           //CALC   - head of linked list
	ListNode   *tail;           //CALC   - tail of linked list
	ListNode   *ptr;			//CALC 	 - the pointer
	PersonInfo *person;			//CALC   - the person's information
	string     name;			//IN/OUT -
	bool       empty;           //CALC   - bool of empty
	bool       found;			//CALC 	 - validating if item was found or no

	// OUTPUT - CLASS HEADER IN CONSOLE
	cout << PrintHeader(LAB_NAME, LAB_NUM, PROGRAMMER, ASSIG_TYPE);

	//INITIALIZATION
	head     = NULL;
	tail     = NULL;
	person   = NULL;

	//OUTPUT - THE MENU
	menuChoiceEnum = Menu();

	while (menuChoiceEnum != EXIT)
	{
		switch (menuChoiceEnum)
		{
		case EXIT:
			break;
		case CREATE:
			//OPEN INPUT FILE
			InFile.open("InFile.txt");

			while(InFile)
			{
				person = GetInfo(InFile);

				if(person != NULL)
				{
					cout << "Adding : ";
					cout << person -> name << endl;
				}

				AddNode(head, tail, person);

			}
			cout << endl;

			//CLOSE INPUT FILE
			InFile.close();
			break;
		case DISPLAY:
			DisplayList(head);
			break;
		case ISEMPTY:
			empty = IsEmpty(head);
			if(!empty)
			{
				cout << "No, the list is NOT empty.\n\n";
			}
			else
			{
				cout << "Yes, the list is empty.\n\n";
			}	//END if(!empty)
			break;
		case SEARCH:
			if(head == NULL)
			{
				cout << "\nCan't search from an empty list\n\n\n";
			}
			else
			{
				cout << "Who would you like to search for? ";
				getline(cin, name);
				cout << endl;
				cout << "Searching for " << name << "...";
				cout << endl << endl;

				ptr = NameSearch(head, name, found);

				if(found)
				{
					cout << left;
					cout << setw(PROMPT_COL) << "Name: "
						 << ptr -> data -> name;
					cout << endl;
					cout << setw(PROMPT_COL) << "Gender: "
						 << ptr -> data -> gender;
					cout << endl;
					cout << setw(PROMPT_COL) << "Age: "
						 << ptr -> data -> age;
					cout << endl << endl;
				}
				else
				{
					cout << "I'm sorry, \"" << name << "\" was NOT found!";
					cout << endl << endl;
				}
			}
			break;
		case REMOVE:
			if(head == NULL)
			{
				cout << "Can't remove from an empty list\n\n";
			}
			else
			{
				cout << "Who would you like to remove? ";
				getline(cin, name);
				cout << endl;
				cout << "Searching for " << name << "...";
				cout << endl;

				RemoveNode(head, tail, name, found);

				if(found)
				{
					cout << "Removing " << name << "!";
					cout << endl << endl;
				}
				else
				{
					cout << "I'm sorry, \"" << name << "\" was NOT found!";
					cout << endl << endl;
				}
			}
			break;
		case CLEAR:
			Clear(head, tail,person);
			break;
		default:
			cout << "ERROR!!!";
			break;
		}	//END switch(menuChoiceEnum)

		//OUTPUT - THE MENU
		menuChoiceEnum = Menu();

	}	//END while(menuChoiceEnum != EXIT)

	return 0;
}
