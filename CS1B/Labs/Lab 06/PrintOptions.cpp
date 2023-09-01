/******************************************************************************
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
 *	file. It will specifically output the results for find largest balance,
 *	smallest balance, and person.
 *			==> returns nothing - This will output the results.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			fout			: The output file
 *			peoplesInfoAr	: The struct array
 *			index			: The index of the searched item
 * POST-CONDITIONS
 * 		==> returns nothing - This will output the results.
 ******************************************************************************/

void PrintOptions(ofstream  &fout,				// IN/OUT - output file
				  information peoplesInfoAr[],	// IN 	  - The struct array
				  int index)					// CALC	  - The index of the
												//			array

{
	const int IDS_COL	= 9;
	const int NAME_COL	= 25;
	const int BA_COL	= 10;


	fout << left << setw(IDS_COL) << "ID #";
	fout << setw(NAME_COL) << "NAME";
	fout << right << setw(BA_COL) << "BALANCE DUE" << endl;
	fout << left << setw(IDS_COL) << "----";
	fout << setw(NAME_COL) << "--------------------";
	fout << right << setw(BA_COL) << "-----------" << endl;
	fout << left << setw(IDS_COL) << peoplesInfoAr[index].ids;
	fout << setw(NAME_COL) << peoplesInfoAr[index].name;
	fout << '$' << setw(BA_COL) << right << peoplesInfoAr[index].balance
	     << endl;

	}


