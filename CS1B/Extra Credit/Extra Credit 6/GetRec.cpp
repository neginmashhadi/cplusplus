/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Lab #9			:	doubly linked list
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/11/2018
 * ****************************************************************************/
#include "header.h"
MovieRec *GetRec(ifstream &inFile)
{
	MovieRec *ptr;
	if(inFile)
	{
		ptr = new MovieRec;
		getline(inFile, ptr->movieTitle);
		getline(inFile, ptr->genre);
		inFile >> ptr->year;
		inFile.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	else
	{
		ptr = NULL;
	}

	return ptr;
}
