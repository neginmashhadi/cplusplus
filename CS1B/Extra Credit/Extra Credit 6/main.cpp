/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Lab #9			:	doubly linked list
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/11/2018
 * ****************************************************************************/
#include "header.h"

int main()
{
	LinkedListNode *head;
	LinkedListNode *tail;
	string fileName;
	ifstream inFile;
	MovieRec *movie;

	head = NULL;
	tail = NULL;
	movie = NULL;


	fileName = "inFile.txt";
	inFile.open(fileName);
	while(inFile)
	{
		movie = GetRec(inFile);
		LinkedList(head, tail, movie);
	}

	PrintList(head);

	RemoveMovie(head, tail);

	PrintList(head);


	return 0;
}
