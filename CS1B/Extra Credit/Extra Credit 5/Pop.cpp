/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Lab #8			:	Linked list extra credit
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/04/2018
 * ****************************************************************************/
#include "header.h"
 studentNode *Pop(studentNode *head)
{
	 studentNode *ptr;		//CALC - Pointer
const int SIZE_FOR_NAME = 7;

	ptr = head;
	if(ptr != NULL)
	{
		cout << "\nPOPPING\n";
		cout << left << setw(SIZE_FOR_NAME);
		cout << "Name: " << head->name << '\n';
		cout << setw(SIZE_FOR_NAME);
		cout << "Major: " << head->major << '\n';
		cout << left << setw(SIZE_FOR_NAME);
		cout << "Age: " << head->age << '\n';
		cout << left << setw(SIZE_FOR_NAME);
		cout << "GPA:" << head->gpa << "\n\n";
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
