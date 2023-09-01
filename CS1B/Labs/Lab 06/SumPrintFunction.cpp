/******************************************************************************
 * AURHOR			:	Negin Mashhadi &	 Mohammed Taei
 * STUDENT ID		:	1084104 	   & 	 1019392
 * LAB # 6			:	Structs
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	3/05/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * FUNCTION PrintOptions
 * -----------------------------------------------------------------------------
 * 	PrintOptions
 *		This function Will output the results of users search in to the output
 *	file. It will specifically output the results for sum and average.
 *			==> returns nothing - This will output the results.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			fout		: The output file
 *			fBalance	: The sum or average of the balancec
 *			prompt		: The output
 * POST-CONDITIONS
 * 		==> returns nothing - This will output the results.
 ******************************************************************************/

void PrintSum(ofstream     &fout,		// IN/OUT - output file
			  double 	   fBalance,	// CALC	  - The sum or average
			  const string prompt)		// OUT	  - The prompt for output
{
	fout << prompt;
	fout << setprecision(2) << fixed;
	fout << '$' << right << setw(9) << fBalance << endl << endl;
}
