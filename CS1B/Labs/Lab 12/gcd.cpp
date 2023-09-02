/*******************************************************************************
 * AUTHOR     : Negin Mashhadi
 * STUDENT ID : 1084104
 * LAB # 12   : Recursion GCD
 * CLASS      : CS1B
 * SECTION    : MW-6:30 PM
 * DUE DATE   : 4/23/18
 ******************************************************************************/
#include "header.h"
/******************************************************************************
 * FUNCTION Gcd
 * -----------------------------------------------------------------------------
 * 	This function receives two integers and will find the common divisor between
 * 	the two numbers.
 * 		==> returns the greatest common divisor of the two numbers
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *			num1 : The first integer entered by the user
 *			num2 : The second integer entered by the user
 * POST-CONDITIONS
 * 		==> returns the greatest common divisor of the two numbers
 ******************************************************************************/

int Gcd (int num1,	//IN - The number entered by the user
		 int num2)	//IN - The number entered by the user
{
	int divisor;	//CALC & OUT - the divisor of two numbers
	int remainder;	//CALC 		 - the remainder of the divison

	/**INTIALIZING*/
	divisor = 0;

	if(num2 != 0)
	{
		remainder = num1 % num2;
		if(remainder == 0)
		{
			divisor = num2;
		}
		else
		{
			divisor = Gcd(num2, remainder);
		}
	}
	if(divisor < 0)
	{
		divisor *= -1;
	}
	return divisor;
}
