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
* FUNCTION Peek
*------------------------------------------------------------------------------
* This function receives a head that points to the first element of a linked
* 	list, and outputs the current contents of the linked list.
*------------------------------------------------------------------------------
* PRE-CONDITIONS
* The following need a defined value passed in
* 		*headF : pointer variable that points to first element of linked list
*
* POST-CONDITIONS
* ==> Returns nothing - outputs contents of linked list
******************************************************************************/
void Front(PersonNode *headF)	//IN & OUT - point to first element of linked
								// 			 list
{
	const int PROMPT_SIZE = 8;
	bool empty;

	empty = IsEmpty(headF);

	if(empty)
	{
		cout << "\nNobody in FRONT, the queue is empty!!\n\n";
	}
	else
	{
		cout << "\nThe first person in the queue is:\n";

		cout << left;
		cout << setw(PROMPT_SIZE) << "Name:"   << headF->name << endl;
		cout << setw(PROMPT_SIZE) << "Gender:" << headF->gender << endl;
		cout << setw(PROMPT_SIZE) << "Age:"    << headF->age << endl << endl;
	}
}
