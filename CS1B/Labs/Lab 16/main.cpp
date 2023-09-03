/******************************************************************************
 * Lab 16		 	: 	Polymorphism
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#include "header.h"
/*******************************************************************************
 * Recurrsion Performance
 * -----------------------------------------------------------------------------
 * This program allows the user to compare the performance of a  recursion
 * based algorithm against an irreteration based algorithm.
 *
 ******************************************************************************/
int main()
{
	int command;

	PrintHeader(cout, "Polymorphism", 'L', 16);

	cout << "****************************************\n"
			"*	WELCOME TO THE ANIMAL LIST MANAGER *\n"
			"***************************************\n";
	command = GetAndCheckInput();
	while(command != EXIT)
	{
		command = GetAndCheckInput();
	}

	return 0;
}


