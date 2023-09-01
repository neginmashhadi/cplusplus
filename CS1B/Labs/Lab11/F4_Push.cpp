/******************************************************************************
 * AUTHOR		 : Negin Mashhadi & James Pelligra
 * STUDENT ID	 : 1084104 & 389711
 * LAB #10 		 : Implementing a queue
 * CLASS		 : CS1B
 * SECTION		 : MW - 6:30pm
 * DUE DATE		 : 4/9/18
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
* FUNCTION Push
*------------------------------------------------------------------------------
* This function receives a head that points to the first element of a linked
* 	list, and adds new elements to the list.
*------------------------------------------------------------------------------
* PRE-CONDITIONS
* The following need a defined value passed in
* 		*headF : pointer variable that points to first element of linked list
*
* POST-CONDITIONS
* ==> Returns nothing - Adds new elements to a linked list
******************************************************************************/
void Enqueue(PersonNode *&headF,	//IN & OUT - point to first element of linked
		  PersonNode *&tailF)						// 			 list
{
	const int PROMPT_SIZE = 14;

	PersonNode *ptr;

	ptr = new PersonNode;

	cout << endl;
	cout << left;

	if(ptr != NULL)
	{
		cout << setw(PROMPT_SIZE) << "Enter Name:";
		getline(cin, ptr->name);

		cout << setw(PROMPT_SIZE) << "Enter Gender:";
		cin.get(ptr->gender);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << setw(PROMPT_SIZE) << "Enter Age:";
		cin >> ptr->age;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	if(headF == NULL)
	{
		ptr->next = headF;
		headF = ptr;
		tailF = ptr;
		ptr = NULL;
	}
	else
	{
		ptr->next = NULL;
		tailF->next = ptr;
		tailF = ptr;
		ptr = NULL;
	}

	cout << right;
	cout << endl;
}
