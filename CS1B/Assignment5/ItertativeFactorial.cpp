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
 * This function recieves a number and will calculate the factorial of the
 * number using an iterative factorial
 * 		==> returns the factorial number
 * -----------------------------------------------------------------------------
 * PRE-CONDITION:
 * 				num : the integer entered by the user
 * POST-CONDITION:
 * 		==> returns the factorial number
 ******************************************************************************/
long long IterativeFactorial(int num)
{
	long long factorial;
	int result;

	result = 1;

	if(num > 1)
	{
		while(num > 1)
		{
			result *= num;
			num--;
		}
	}
	else
	{
		factorial = 1;
	}

	return factorial;
}
