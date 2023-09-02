/***********************************************************************
 * LAB # 11   : Creating an Ordered List
 * CLASS      : CS1B
 * SECTION    : MW-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#include "CS1BL11.h"

/***********************************************************************
 * FUNCTION - NameSearch
 * ---------------------------------------------------------------------
 * This function will search for a name in the linked list and if
 * found will output infomation about the name
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 				head  - the head of linked list
 * 				tail  - the tail of linked list
 * 				name  - the name being searched
 *				found - validates if item is in the list
 * POST-CONDITIONS
 * 	This function will return a pointer
 **********************************************************************/
ListNode *NameSearch(ListNode *&head, //CALC - head of linked list
				     string   name,   //IN 	 - the name being searched
				     bool     &found) //CALC - validates if item is in the list
{
	ListNode  *ptr;

    // INITIALIZE
	ptr   = head;
    found = false;

    while(ptr != NULL && !found)
	{

			if(ptr -> data -> name == name)
			{
				found = true;
			}
			else
			{
				ptr = ptr -> next;
			}
	}

	return ptr;
}
