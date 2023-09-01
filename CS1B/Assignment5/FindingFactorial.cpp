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
 *	FindingFactorial
 * -----------------------------------------------------------------------------
 *	This function will ask the user to input an integer and will validate the
 *	user input then will output the factorial of the number
 *		==> returns nothing
 * -----------------------------------------------------------------------------
 * PRE-CONDITION
 *		NONE
 * POST-CONDITION
 *		==> returns nothing
 ******************************************************************************/
void FindingFactorial()
{
	int num;				// IN 		- The integer being entered by the user
	long long factorial;	// CALC/OUT - The factorial of the number inputed
	bool invalid;			// CALC		- Validates the user input

	do
	{
		cout << "\nEnter a number that you would like to find a factorial of: ";
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

	factorial = RecursiveFactorial(num);
	cout << "\nThe factorial of the number entered is " << factorial << endl << endl;
}
