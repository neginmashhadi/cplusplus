/***********************************************************************
 * LAB # 11   : Creating an Ordered List
 * CLASS      : CS1B
 * SECTION    : MW-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#include "CS1BL11.h"

/***********************************************************************
 * FUNCTION - Clear
 * ---------------------------------------------------------------------
 * This function will remove an element from the front of the linked
 * list.
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 	head - head of linked list
 *
 * POST-CONDITIONS
 * 	This function will return nothing.
 **********************************************************************/
void Clear(ListNode   *&head,	//CALC - head of linked list
		   ListNode   *&tail,	//CALC - tail of the linked list
		   PersonInfo *data)	//CALC - the data in the linked list
{
	ListNode *temp;    //CALC - temporary pointer to delete list

	if(head == NULL)
	{
		cout << "The list has been cleared!\n\n";
	}
	else
	{
		cout << "CLEARING LIST\n";
		while(head!=NULL)
		{
			temp = head;
			head = head->next;
			cout << "Removing " << temp->data->name << "!" << endl;
			delete temp;
		}
		head = NULL;
		tail = NULL;
		cout << "\nThe list has been cleared!\n\n";
	}



//	perPtr = head;
//
//
//	if(perPtr != NULL)
//	{
//		cout << "CLEARING LIST\n";
//
//		while(perPtr != NULL)
//		{
//			temp = perPtr -> next;
//			cout << "Removing ";
//			cout << perPtr -> data -> name << "!" << endl;
//			delete perPtr;
//			perPtr = perPtr -> next;
//
//		}	//END while(perPtr != NULL)
//
//		head = NULL;
//		cout << endl;
//		cout << "The list has been cleared!\n\n";
//
//	}
//	else
//	{
//		cout << "The list has been cleared!\n\n";
//
//	}	//END if(perPtr != NULL)
//
//
}
