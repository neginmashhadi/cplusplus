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
 *		This function will take in two numbers entered by the user and using
 *	 the Euclidean Algorithm which 	by using successive long divisions swapping
 *	 out the lowest	value with the remainder and the largest value with the
 *	 previous smallest value until	the	remainder is 0.
 *	 		==> returns a number that is the greatest divisor
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *			the following need a defined value pass in
 *			fNum1	:	The first number the user has entered
 *			fNum2	:	The second number the user has entered
 * POST-CONDITIONS
 * 			==> returns The greatest divisor
 ******************************************************************************/
int GCD(int fNum1,		// IN 	- The number entered by user
		int fNum2)		// IN 	- The number entered by user
{
	int remanider;		// CALC	- The remainder of th division

	while(fNum2 != 0)
	{
		remanider = fNum1 % fNum2;
		fNum1	  = fNum2;
		fNum2 	  = remanider;
	}
	return  fNum1;
}
