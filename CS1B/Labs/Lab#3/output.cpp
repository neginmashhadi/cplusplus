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
 * FUNCTION printHeader
 * -----------------------------------------------------------------------------
 * 	This function receives an assignment name, type and number then outputs the
 * 		appropriate class heading.
 * ==> returns nothing - this function output the class heading.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *			the following need a defined value pass in
 *			fout	: The output file
 *			fNum1	: The first number entered by the user
 *			fNum2	: The second number entered by the user
 *			fDivisor: The greates common divisor of the two numbers
 * POST-CONDITIONS
 * 		==>	Returns nothing - this function output the GCD
 ******************************************************************************/
void OutputFunction(ofstream &fout,		// IN  - The outoput file variable
					int		fNum1,		// IN  - The first integer user entered
					int 	fNum2,		// IN  - The second integer user entered
					int 	fDivisor)	// CALC- The greatest common divisor
{
		fout << "The GCD for " << fNum1 << " & " << fNum2 << " = " << fDivisor;
		fout << endl << endl;
}
