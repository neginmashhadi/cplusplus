/***********************************************************************
 * AUTHOR     : Jeffrey Adams & Negin Mashhadi
 * STUDENT ID : 1080576 & 1084104
 * LAB # 11   : Creating an Ordered List
 * CLASS      : CS1B
 * SECTION    : MW-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#include "CS1BL11.h"

/***********************************************************************
 * FUNCTION - PrintHeader
 * ---------------------------------------------------------------------
 * This function receives an assignments name, type, number, and
 * programmers names then outputs the appropriate header - returns
 * nothing.
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 	 prior to calling the function:
 * 	 asName : Assignment Name
 * 	 asNum	: Assignment Number
 * 	 asType	: Assignment Type ==> THIS SHOULD CONTAIN:
 * 	 							  'L' for labs
 * 	 							  'A' for assignments
 * POST-CONDITIONS
 * 	This function will output the class heading.
 **********************************************************************/
string PrintHeader(string asName,		//IN - Assignment Name
				   int    asNum,		    //IN - Assignment Number
				   string programmer,	//IN - Programmer Name
				   char   asType)		//IN - Assignment Type
 	 							  		//     'L' for labs
 	 							  		//	   'A' for assignments
{
	ostringstream outstr;

	outstr << left;
	outstr << "**************************************************\n";
	outstr << "*  PROGRAMMED BY : " << programmer << endl;
	outstr << "*  " << setw(14) << "CLASS" << ": CS1B" << endl;
	outstr << "*  " << setw(14) << "SECTION" << ": MW: 6:30PM" << endl;
	if(toupper(asType) == 'L')
	{
		outstr << "*  LAB #" << setw(9);
	}
	else
	{
		outstr << "*  ASSIGNMENT #" << setw(2);
	}
	outstr << asNum << ": " << asName << endl;
	outstr << "**************************************************\n\n";
	outstr << right;

	return outstr.str();
}



