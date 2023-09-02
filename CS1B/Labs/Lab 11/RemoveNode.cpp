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
 * FUNCTION - RemoveNode
 * ---------------------------------------------------------------------
 * This function will search for a name in the linked list and if
 * found will remove that item from the list
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 				head  - the head of linked list
 * 				tail  - the tail of linked list
 * 				name  - the name being searched
 *				found - validates if item is in the list
 * POST-CONDITIONS
 * 	This function returns nothing
 **********************************************************************/
void RemoveNode(ListNode *&head,	//CALC - head of linked list
		        ListNode *&tail,	//CALC - tail of linked list
				string   name,	    //IN   - the name being searched
				bool     &found)	//CALC - validates if item is in the list
{
	ListNode *searchPtr;	//CALC - pointer for the searching

	searchPtr = head;
	found = false;


	if(head == NULL)
	{
		cout << "\nCan't remove from an empty list!\n";
	}
	else
	{
		searchPtr = head;
		while(searchPtr != NULL && !found)
		{
			if (searchPtr->data->name == name)
			{
				found = true;
			}
			else
			{
				searchPtr = searchPtr->next;
			}
		}
		if(searchPtr != NULL)
		{
			if(searchPtr == head)
			{
				if(searchPtr == tail)
				{
					delete head;
					delete tail;
					head = NULL;
					tail = NULL;
				}
				else
				{
					searchPtr = head->next;
					searchPtr ->previous = NULL;
					delete head;
					head = searchPtr;
				}
			}
			else if(searchPtr == tail)
			{
				searchPtr = tail->previous;
				searchPtr ->next = NULL;
				delete tail;
				tail = searchPtr;
			}
			else
			{
				searchPtr->previous->next = searchPtr->next;
				searchPtr->next->previous = searchPtr->previous;
				delete searchPtr;
			}
		}
	}


//	 while (ptr != NULL && !found)
//	 {
//		 if(head -> data -> name == name)
//		 {
//			 found = true;
//
//			 ptr -> next -> previous = NULL;
//			 head = ptr -> next;
//			 delete ptr;
//			 ptr = NULL;
//
//		 }
//		 else if(tail -> data -> name == name)
//		 {
//			 found = true;
//
//			 ptr -> previous -> next = NULL;
//			 tail = ptr -> previous;
//			 delete ptr;
//			 ptr = NULL;
//		 }
//		 else if(ptr -> data -> name == name)
//		 {
//			 found = true;
//
//			 ptr -> next -> previous = ptr -> previous;
//			 ptr -> previous -> next = ptr -> next;
//			 delete ptr;
//			 ptr = NULL;
//
//		 }
//		 else
//		 {
//			 ptr = ptr->next;
//		 }
//
//	 }

}
