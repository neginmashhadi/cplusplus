/******************************************************************************
 * AUTHOR		  : Caroline Ta	& Negin Mashhadi
 * STUDENT ID	  : 1061262		& 1084104
 * LAB #15		  : Inheritance, overloading, & redifining
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 05/14/18
 *****************************************************************************/
#include "header.h"
/******************************************************************************
 * GetPig
 * -----------------------------------------------------------------------------
 * This function will read the data of a pig from the input file and will
 * set the data
 * 		==> returns the pig
 * ----------------------------------------------------------------------------
 * PRE-CONDITION
 * 		inFile : the input file stream
 * POST-CONDITION
 * 		==> returns the pig
 ******************************************************************************/
Pig GetPig(ifstream &inFile)
{
	Pig myPig;
	string name;
	int age;
	string tail;

	if(inFile)
	{
		getline(inFile, name);
		inFile >> age;
		inFile.ignore(1000,'\n');
		getline(inFile, tail);
		inFile.ignore(1000,'\n');

		myPig.Modify(age, name);
		myPig.SetTailString(tail);
	}
	return myPig;
}
