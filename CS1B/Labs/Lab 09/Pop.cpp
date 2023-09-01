/******************************************************************************
 * Lab #9			:	Implementing a stack
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/02/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * Pop
 * ----------------------------------------------------------------------------
 * 	This function will remove a person from the linked list and will allow the
 * user to know who is being erased from the list
 * 		returns the  head of the linked list
 * -----------------------------------------------------------------------------
 * PRE-CONDITION
 * 					head : the  head of the linked list
 * POST-CONDITON
 * 		returns the head of the linked list
 ******************************************************************************/
personInfo *Pop(personInfo *head)
{
	personInfo *ptr;		//CALC - Pointer

	ptr = head;
	if(ptr != NULL)
	{
		cout << "\nPOPPING\n";
		cout << left << setw(SIZE_FOR_NAME);
		cout << "Name: " << head->name << '\n';
		cout << setw(SIZE_FOR_NAME);
		cout << "Gender: " << head->gender << '\n';
		cout << left << setw(SIZE_FOR_NAME);
		cout << "Age: " << head->age << '\n';
		cout << right;
		head = head->next;
		delete ptr;
		ptr = NULL;
	}
	else
	{
		cout << "\ncan't POP from an empty stack!\n";
	}
	return head;
}
