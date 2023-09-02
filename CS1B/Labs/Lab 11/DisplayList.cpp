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
 * FUNCTION - Display List
 * ---------------------------------------------------------------------
 * This function will display the linked list in a format.
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 	*NONE*
 *
 * POST-CONDITIONS
 * 	This function will output the menu for the user.
 **********************************************************************/
void DisplayList(ListNode *&head) //CALC - head of linked list
{
	//CONSTANTS
	const int NUM_COL = 4;

	//VARIABLES
	ListNode *ptr;
	int      counter;

	//INITIALIZATION
	ptr = head;
	counter = 0;

	if(head == NULL)
	{
		cout << "\nCan't display an empty list\n\n";
	}
	else
	{
		cout << right;
		cout << setw(NUM_COL) << "#" << setw(4) << ' ';
		cout << left;
		cout << setw(28)      << "NAME";
		cout << setw(9)       << "GENDER";
		cout << setw(NUM_COL) << "AGE";
		cout << endl;

		cout << setfill('-') << setw(7)  << '-' << ' ';
		cout << setfill('-') << setw(25) << '-' << ' ' << ' ';
		cout << setfill('-') << setw(8)  << '-' << ' ';
		cout << setfill('-') << setw(5)  << '-' << ' ';
		cout << setfill(' ');
		cout << endl;

		while(ptr != NULL)
		{
			cout << right;
			cout << setw(NUM_COL) << ++counter << setw(4) << ' ';
			cout << left;
			cout << setw(30)      << ptr -> data -> name;
			ptr  -> data -> gender = toupper(ptr -> data -> gender);
			cout << setw(7)       << ptr -> data -> gender;
			cout << setw(NUM_COL) << ptr -> data -> age;
			cout << endl;

			ptr = ptr -> next;

		}

	}

	cout << endl;
}
