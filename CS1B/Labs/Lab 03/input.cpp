/******************************************************************************
 * AUTHOR			:	Negin Mashhadi	&	Maschal Mirzada
 * STUDENT ID		:	1084104			&	1044750
 * ASSIGNMENT#1		:	Functions and Arrays
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	2/07/2018
 * ****************************************************************************/
#include "lab3.h"
/******************************************************************************
 * FUNCTION input Function
 * -----------------------------------------------------------------------------
 *		This function will prompt the user to enter two numbers that the user
 * 	wants to find their gratest divisor
 * 		==> returns nothing - will pass the numbers entered by refrence
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *			the following need a refrenced value pass in
 *			fNum1	:	The fisr integer entered by the user
 *			fNum2	:	The second integer entered by the user
 * POST-CONDITIONS
 * 		==> returns nothing - will pass the numbers entered by refrence
 ******************************************************************************/
void inputFunction(int &fNum1,		// IN - The first integer
				   int &fNum2)		// IN - The second integer
{
/*******************************************************************************
* CONSTANTS
* -----------------------------------------------------------------------------
* USE FOR PROCESSING
* -----------------------------------------------------------------------------
* 	PROMPT_COL : Setw for the Prompt column
*******************************************************************************/
	const int PROMPT_COL = 25;

	cout << left;
	cout << setw(PROMPT_COL) << "Enter the first integer:";
	cin	 >> fNum1;
	cout << setw(PROMPT_COL) << "Enter the second integer:";
	cin	 >> fNum2;
	cout << endl;
}
