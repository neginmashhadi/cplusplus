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
* FUNCTION StackSize
*------------------------------------------------------------------------------
* This function receives a head that points to the first element of a linked
* 	list, and returns how many elements are within the linked list.
*------------------------------------------------------------------------------
* PRE-CONDITIONS
* The following need a defined value passed in
* 		*headF : pointer variable that points to first element of linked list
*
* POST-CONDITIONS
* ==> Returns nothing - returns how many elements are in the linked list
******************************************************************************/
int Size(PersonNode *headF)	//IN & OUT - point to first element of linked
									// 			 list
{
	PersonNode *ptr;
	int count;

	ptr = headF;
	count = 0;

	while(ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}

	return count;
}
