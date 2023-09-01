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
 * FindingFibonacciSeries
 * -----------------------------------------------------------------------------
 *	This function will ask the user to input an integer and will validate the
 * user input then will output the fibonacci series of the number
 *		==> returns nothing
 * -----------------------------------------------------------------------------
 * PRE-CONDITION
 *		NONE
 * POST-CONDITION
 *		==> returns nothing
 ******************************************************************************/
void FindingFibonacciSeries()
{
	int num;				 // IN 		 - The integer being entered by the user
	long long fibonacciNum;	 // CALC/OUT - The fibonacci of the number inputed
	bool invalid;			 // CALC	 - Validates the user input

	do
	{
		cout << "\nEnter a number that your would like to find the fibinocci"
				" series of: ";
		cin  >> num;
		invalid = false;
		if(!cin >> num)
		{
			cout << "\n*** input entered is invalid ***"
					"\n*** Please enter a positive number ***\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			invalid = true;
		}
		else if(num < 0 )
		{
			cout << "\n*** Please enter a positive number ***\n";
			invalid = true;
		}
	}while(invalid);

	fibonacciNum = RecursiveFibonacci(num);
	cout << "\nThe fibonacci series of the number entered is " << fibonacciNum
		 << endl << endl;
}
