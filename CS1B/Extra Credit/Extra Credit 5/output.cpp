/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Lab #8			:	Linked list extra credit
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/04/2018
 * ****************************************************************************/

#include "header.h"

void output(studentNode *head)
{
	studentNode *ptr;
	ptr = head;
	while(ptr != NULL)
	{
	 cout << ptr->name << endl << ptr->age << endl << ptr->major
		  << endl << ptr->gpa << endl << endl;
	 ptr = ptr->next;
	}

}
