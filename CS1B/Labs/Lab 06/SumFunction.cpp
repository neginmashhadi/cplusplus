/******************************************************************************
 * AURHOR			:	Negin Mashhadi &	 Mohammed Taei
 * STUDENT ID		:	1084104 	   & 	 1019392
 * LAB # 6			:	Structs
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	3/05/2018
 * ****************************************************************************/
#include "header.h"
/*******************************************************************************
 * SumFunction
 * -----------------------------------------------------------------------------
 * 		This function will take in the array of struct and it will sum all
 * 	of the balances that are inside the array
 * 		returns the sum of all the balances in the struct array
 * -----------------------------------------------------------------------------
 * PRE-CONDITION:
 * 					peoplesInfoAr	: The struct array
 * 					AR_SIZE			: The array size
 * POST-CONDITION
 * 		returns the sum of all the balances in the struct array
 ******************************************************************************/
double SumFunction (information peoplesInfoAr[],	// IN - The struct array
					const int AR_SIZE)   			// IN - The array size
{

	double sum;						// CALC - The sum of all balances
	int index;						// CALC - The index of the array

	//Initializing variables
	sum = 0;

	for(index = 0; index < AR_SIZE; index++)
	{
		sum += peoplesInfoAr[index].balance;
	}


	return sum;
}
