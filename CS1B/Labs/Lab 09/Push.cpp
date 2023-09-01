/******************************************************************************
 * Lab #9			:	Implementing a stack
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/02/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * Push
 * ----------------------------------------------------------------------------
 *		This function will add an element to the top of the stack
 * 			returns the head
 * -----------------------------------------------------------------------------
 *  PRE-CONDITION
 * 					head : the  head of the linked list
 * POST-CONDITON
 * 			returns the head
 ******************************************************************************/
personInfo *Push(personInfo *head)
{
	personInfo *ptr;	//CALC - The pointer

	ptr = new personInfo;
	if(ptr != NULL)
	{
		cout << "\nWho would you like to add?\n";
		cout << left << setw(COL_SIZE);
		cout << "Enter Name: ";
		getline(cin, ptr->name);
		cout << setw(COL_SIZE);
		cout << "Enter Gender: ";
		cin.get(ptr->gender);
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << setw(COL_SIZE);
		cout << "Enter Age: ";
		cout << right;
		cin  >> ptr->age;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	if (head != NULL)
	{
		ptr->next = head;
		head = ptr;
	}
	else
	{
		ptr->next = NULL;
		head = ptr;
	}
	return head;
}
