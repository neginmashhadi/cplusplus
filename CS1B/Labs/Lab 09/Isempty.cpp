/******************************************************************************
 * AUTHOR			:	Negin Mashhadi		& Wilson Pena
 * STUDENT ID		:	1084104				& 1086320
 * Lab #9			:	Implementing a stack
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/02/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * Pop
 * ----------------------------------------------------------------------------
 * 	This function will check if the linked list is empty or not
 * 		returns a bool which to tell whether the list is empty or no
 * -----------------------------------------------------------------------------
 * PRE-CONDITION
 * 					head : the  head of the linked list
 * POST-CONDITON
 * 		returns a bool which to tell whether the list is empty or no
 ******************************************************************************/
bool Isempty(personInfo *head)
{
	bool empty;		//CALC - checks if the list is empty

	if(head == NULL)
	{
		empty = true;
	}
	else
	{
		empty = false;
	}

	return empty;
}
