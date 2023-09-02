/***********************************************************************
 * LAB # 11   : Creating an Ordered List
 * CLASS      : CS1B
 * SECTION    : MW-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#include "CS1BL11.h"

/***********************************************************************
 * FUNCTION - AddNode
 * ---------------------------------------------------------------------
 * This function will add a node to the linked list that was read form \
 * a file.
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 					head - the head of linked list
 * 					tail - the tail of the linked list
 * 					data - the data of the linked list
 * POST-CONDITIONS
 * This function returns nothing
 **********************************************************************/
void AddNode(ListNode   *&head, //CALC - head of linked list
		     ListNode   *&tail, //CALC - tail of linked list
	         PersonInfo *data)  //CALC - data of linked list
{
	ListNode *ptr;
	ListNode *temp;

	if(data != NULL)
	{
		ptr =  new ListNode;
		ptr -> data = data;

		if(head == NULL)
		{
			ptr -> next     = NULL;
			ptr -> previous = NULL;
			head = ptr;
			tail = ptr;
		}
		else
		{
			temp = head;
			while(temp != NULL && temp -> data -> name < data -> name)
			{
				temp = temp -> next;
			}

			if(temp == NULL)
			{
				ptr ->  previous = tail;
				ptr ->  next     = NULL;
				tail -> next     = ptr;
				tail =  ptr;
			}
			else if(temp == head)
			{
				head -> previous = ptr;
				ptr  -> next     = head;
				head =  ptr;
			}
			else
			{
				temp -> previous -> next = ptr;
				ptr ->  next     = temp;
				ptr ->  previous = temp -> previous;
				temp -> previous = ptr;
			}

		}
	}
}
