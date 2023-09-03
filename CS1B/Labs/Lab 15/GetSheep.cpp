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
 * GetSheep
 * -----------------------------------------------------------------------------
 * This function will read the data of a sheep from the input file and will
 * set the data
 * 		==> returns the sheep
 * ----------------------------------------------------------------------------
 * PRE-CONDITION
 * 		inFile : the input file stream
 * POST-CONDITION
 * 		==> returns the sheep
 ******************************************************************************/
Sheep GetSheep(ifstream &inFile)
{

	Sheep mySheep;
	string name;
	int age;
	string wool;
	string woolColor;
	if(inFile)
	{
		getline(inFile, name);
		inFile >> age;
		inFile.ignore(1000,'\n');
		getline(inFile, wool);
		getline(inFile, woolColor);
		inFile.ignore(1000,'\n');

		mySheep.Modify(age, name);
		mySheep.SetWoolTypeString(wool);
		mySheep.SetColor(woolColor);
	}
	return mySheep;
}
