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
 * IntializePig
 * -----------------------------------------------------------------------------
 * This function will intialize all the pigs
 * 		==> returns nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITION
 * 		inFile : the input file stream
 * POST-CONDITION
 * 		==> returns nothing
 ******************************************************************************/
PigLinkedList IntializePig()
{
	PigLinkedList pigList;
	ifstream inFile;
	Pig pig;

	inFile.open("pig.txt");
	while(inFile)
	{
		pigList.AddPig(GetPig(inFile)) ;
	}
	inFile.close();

	return pigList;
}

