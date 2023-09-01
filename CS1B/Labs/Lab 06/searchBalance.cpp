/******************************************************************************
 * LAB # 6			:	Structs
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	3/05/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * FUNCTION SearchBalance
 * -----------------------------------------------------------------------------
 * 		This function will search for the largest or smallest balance in the
 * 	array of balances based on the user input. it will then return the index
 * 	of the desired balance of the user.
 * 	 ==> returns the index of the largest or smallest number.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			peoplesInfoAr	: The struct array
 *			AR_SIZE			: Size of the array
 * POST-CONDITIONS
 * 		==> returns the index of the largest or smallest number
 ******************************************************************************/

int SearchBalance (information peoplesInfoAr[],		// IN - The struct array
				   const int AR_SIZE)				// IN - The array size
{
	int index;			// CALC 		- The index of the array
	int indexVal;		// CALC & OUT	- The index of the balance wanted
	double largest;		// CALC			- The largest Balance

	//Initializing
	largest	 = 0;

		for(index = 0; index <AR_SIZE; index++)
		{

			if (largest < peoplesInfoAr[index].balance)
			{
				largest = peoplesInfoAr[index].balance;
				indexVal = index;
			} //END IF FOR LARGEST BALANCE

		}//END FOR LOOP


	return indexVal;
}
