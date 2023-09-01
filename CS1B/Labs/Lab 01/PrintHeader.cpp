/******************************************************************************
 * LAB #1		  : Theme Park Day Planner
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 01/24/18
 *****************************************************************************/
#include "Lab1.h"

/******************************************************************************
 * FUNCTION 0 - PrintHeader
 * ---------------------------------------------------------------------------
 * 		This function receives an assignment name, type and number then
 * 			 outputs the appropriate class heading.
 * 		=> Returns nothing - This will output the class heading.
 * ---------------------------------------------------------------------------
 * PRE-CONDITIONS
 * 		The following need a defined value passed in
 * 			asName	:	Assignment Name
 * 			asType	:	Assignment Type
 * 			asNum	: 	Assignment Number
 *
 * POST-CONDITIONS
 * 		=> Returns nothing - This function will output the class heading.
 *****************************************************************************/
void PrintHeader (string asName, // IN - Assignment Name
				  int	 asNum,  // IN - Assignment Number
				  char	 asType) // IN - Assignment type ('L' = Lab,
								 //						  'A' = Assignment)
{
	cout << left;
	cout << "************************************************************\n";
	cout << "*	PROGRAMMED BY : Caroline Ta & Negin Mashhadi\n";
	cout << "*	" << setw(14) << "STUDENT ID" << ": 1061262     & 1084104\n";
	cout << "*	" << setw(14) << "CLASS" << ": CS1B - MW - 6.30PM\n";
	cout << "*	";

	/*************************************************************************
	 * PROCESSING - This will adjust setws and format appropriately
	 *				based on if this is a lab 'L' or assignment 'A'.
	**************************************************************************/
	if (toupper(asType) == 'L')
	{
		cout << "LAB #" << setw(9);
	}
	else
	{
		cout << "ASSIGNMENT #" << setw(2);
	}
	cout << asNum << ": " << asName << endl;
	cout << "************************************************************\n\n";
	cout << right;
}
