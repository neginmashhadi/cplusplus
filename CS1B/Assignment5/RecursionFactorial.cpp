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
 * RecursiveFactorial
 * -----------------------------------------------------------------------------
 * This function will calculate the factorial of a number using recursion
 * 		==> returns the factorial number of the number
 * -----------------------------------------------------------------------------
 * PRE-CONDITION
 * 				num : The number entered by the user to find factorial of
 * POST-CONDITON
 * 		==> returns the factorial number of the number
 ******************************************************************************/
long long RecursiveFactorial(int num)
{
	long long multiplyNumber;

	if(num > 1)
	{
		multiplyNumber = num*RecursiveFactorial(num-1);
	}
	else
	{
		multiplyNumber = 1;
	}

	return multiplyNumber;
}
