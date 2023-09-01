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
* FUNCTION Pop
*------------------------------------------------------------------------------
* This function receives a head that points to the first element of a linked
* 	list, and deletes the last element added to the linked list.
*------------------------------------------------------------------------------
* PRE-CONDITIONS
* The following need a defined value passed in
* 		*headF : pointer variable that points to first element of linked list
*
* POST-CONDITIONS
* ==> Returns nothing - deletes element within linked list
******************************************************************************/
void Dequeue(PersonNode *&headF)	//IN & OUT - point to first element of linked
								// 			 list
{
	const int PROMPT_SIZE = 8;

	bool empty;
	PersonNode *ptr;

	empty = IsEmpty(headF);

	if(empty)
	{
		cout << "\nCan't DEQUEUE from an empty queue!\n\n";
	}
	else
	{
		cout << left;

		ptr = headF;

		cout << "\nDEQUEUEING\n";
		cout << setw(PROMPT_SIZE) << "Name:"   << ptr->name << endl;
		cout << setw(PROMPT_SIZE) << "Gender:" << ptr->gender << endl;
		cout << setw(PROMPT_SIZE) << "Age:"    << ptr->age << endl << endl;

		headF = ptr->next;

		delete ptr;
	}

}
