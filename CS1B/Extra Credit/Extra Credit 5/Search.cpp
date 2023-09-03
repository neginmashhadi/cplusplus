/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Lab #8			:	Linked list extra credit
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/04/2018
 * ****************************************************************************/

#include "header.h"

 studentNode *SearchPerson(studentNode *&head,
		 	 	 	 	   string search)
 {
	studentNode *searchPtr;
	bool found;

	found = false;
	searchPtr = head;

	while(searchPtr != NULL && !found)
	{
		if(searchPtr->name == search)
		{
			found = true;
		}
		else
		{
			searchPtr = searchPtr->next;
		}
	}
	if(!found)
	{
		searchPtr = NULL;
		cout << "person was not found!\n\n";
	}
	return searchPtr;
 }
