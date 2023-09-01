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
* FUNCTION IsEmpty
*------------------------------------------------------------------------------
* This function receives a head that points to the first element of a linked
* 	list, and checks if whether or not there are any elements within the linked
* 	list.
*------------------------------------------------------------------------------
* PRE-CONDITIONS
* The following need a defined value passed in
* 		*headF : pointer variable that points to first element of linked list
*
* POST-CONDITIONS
* ==> Returns boolean variable
******************************************************************************/
bool IsEmpty(PersonNode *headF)	//IN & OUT - point to first element of linked
								// 			 list
{
	bool empty;

	empty = false;

	if(headF == NULL)
	{
		empty = true;
	}

	return empty;
}
