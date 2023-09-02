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
 * FUNCTION - IsEmpty
 * ---------------------------------------------------------------------
 * This function will check if head points to NULL.
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 	head - head of linked list
 *
 * POST-CONDITIONS
 * 	This function will return boolean empty.
 **********************************************************************/
bool IsEmpty(ListNode *head)
{
	bool empty;  //CALC & OUT - boolean used to return empty or not

	if(head == NULL)
	{
		empty = true;

	}
	else
	{
		empty = false;

	}	//END if(head == NULL)

	return empty;
}
