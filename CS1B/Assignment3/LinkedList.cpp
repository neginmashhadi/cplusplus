/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * ASSIGNMENT#3		:	Movie List - Intro to linked ists
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	03/14/2018
 * ****************************************************************************/
#include "header.h"
/*******************************************************************************
 * LinkedList
 * 		This function will recieve the name of the input file and will create a
 * linked list based on the information that are in the file.
 * 		returns to the head of the linked list.
 * -----------------------------------------------------------------------------
 * PRE-CONDITION
 * 					inputFile : The name of the input file
 * 	POST-CONDITION
 * 					head	  : The head of the linked list
 ******************************************************************************/
movieNode *LinkedList(string inputFile)
{
	ifstream inFile;
	inFile.open(inputFile);

	movieNode *head;		// CALC - the head of the linked list
	movieNode *ptr;			// CALC - the pointer of the node
	movieNode *current;		// CALC - the node the pointer is pointing to

	head = NULL;
	current = new movieNode;

	while(inFile && current != NULL)
	{
		current = GetInput(inFile);

		if ( head == NULL)
		{
			head = current;
		}
		else
		{
			ptr->next = current;
		}
		ptr = current;
		current = new movieNode;
	}
	delete current;

	inFile.close();

	return head;

}
