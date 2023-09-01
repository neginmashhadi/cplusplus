/******************************************************************************
 * LAB #10 		 : Implementing a queue
 * CLASS		 : CS1B
 * SECTION		 : MW - 6:30pm
 * DUE DATE		 : 4/9/18
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
* FUNCTION ConvertIntToMenu
*------------------------------------------------------------------------------
* This function receives an input and changes the value of the input to an
* 	enumerated type.
*------------------------------------------------------------------------------
* PRE-CONDITIONS
* The following need a defined value passed in
* 		commandF : input variable for menu selection
*
* POST-CONDITIONS
* ==> Returns enumerated type for input
******************************************************************************/
Menu ConvertIntToMenu(int commandF)	//IN - menu selection by user
{
	Menu operation;

	switch(commandF)
	{
		case 1: operation = ENQUEUE;
				break;
		case 2: operation = DEQUEUE;
				break;
		case 3: operation = ISEMPTY;
				break;
		case 4: operation = FRONT;
				break;
		case 5: operation = SIZE;
				break;
		case 6: operation = CLEAR;
	}

	return operation;
}
