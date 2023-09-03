/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Lab #8			:	Linked list extra credit
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/04/2018
 * ****************************************************************************/
#include "header.h"
void LinkedList(string inFileName,
				 studentNode *&head,
				 studentNode *&tail)
{
	ifstream inFile;
	studentNode *current;

	inFile.open(inFileName);

	current	 = new studentNode;
	while(inFile && current !=NULL)
	{
		getline(inFile, current->name);

		inFile >> current->age;
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');

		getline(inFile, current->major);

		inFile >> current->gpa;
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');

		inFile.ignore(numeric_limits<streamsize>::max(), '\n');
		current->next = NULL;

		if(head == NULL)
		{
			head = current;
		}
		else
		{
			tail->next = current;
		}
		tail = current;

		current = new studentNode;
	}
	delete current;
	inFile.close();
}
