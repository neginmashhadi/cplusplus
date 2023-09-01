/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 5 	: 	Recurrsion Performance
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/01/2018
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
	const int EXIT = 0;
	int option;

	PrintHeader(cout, "Recurrsion Performance", 'A', 5);

	option = GetAndCheckInput();

	while(option != EXIT)
	{
		switch(option)
		{
			case 1: FindingFactorial();
				break;
			case 2: FindingFibonacciSeries();
				break;
			case 3: TimeComparison(option);
				break;
			case 4: TimeComparison(option);
				break;
		}

		option = GetAndCheckInput();
	}

	return 0;
}


