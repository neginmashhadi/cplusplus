/******************************************************************************
 * LAB # 6			:	Structs
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	3/05/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * FUNCTION InputFunctin
 * -----------------------------------------------------------------------------
 * 	This function will receive an input file and read 3 sets of data from
 * the file into an array of structs with members of name, Id and the balance.
 * 	 ==> returns nothing - This will read data from input file.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			peoplesInfoAr :	The struct array
 *			AR_SIZE		  : The size of the array
 * POST-CONDITIONS
 * 		==>	Returns nothing - This will read data from input file.
 ******************************************************************************/

void InputFunctin ( string finFileName,				// IN - the name of the file
					information peoplesInfoAr[],	// IN - The struct array
					const int AR_SIZE)  			// IN - the size of the
													//		array
{

	ifstream fin;		// IN	 - Input file stream
	int index;			// CALC	 - The loop control variable

	/**INITIALIZATION**/
	index=0;

	fin.open(finFileName.c_str());

	while ( fin &&  index < AR_SIZE)
	{
		getline(fin, peoplesInfoAr[index].name);
		fin >> peoplesInfoAr[index].ids;
		fin >> peoplesInfoAr[index].balance;
		fin.ignore(numeric_limits<streamsize>::max(), '\n');
		index++;
	}//END WHILE

	//closes input file
	fin.close();
}
