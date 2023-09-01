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
 *  RecursiveFibonacci
 * -----------------------------------------------------------------------------
 * This function recieves a number and will calculate the fabonacci series of
 * the number using an iterative factorial
 * 		==> returns the factorial number
 * -----------------------------------------------------------------------------
 * PRE-CONDITION
 * 				num : The number entered by the user
 * POST-CONDITION
 * 			returns the fibonacci series
 ******************************************************************************/
long long RecursiveFibonacci(int num)
{
	long long fib;
	if(num > 1)
	{
		fib = RecursiveFibonacci(num-1) + RecursiveFibonacci(num-2);
	}
	else
	{
		fib = num;
	}

	return fib;
}
