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
 * IntializeSheep
 * -----------------------------------------------------------------------------
 * This function will intialize all the sheeps
 * 		==> returns nothing
 * ----------------------------------------------------------------------------
 * PRE-CONDITION
 * 		inFile : the input file stream
 * POST-CONDITION
 * 		==> returns nothing
 ******************************************************************************/
SheepLinkedList IntializeSheep()
{
	ifstream inFile;
	SheepLinkedList sheepList;
	inFile.open("sheep.txt");
	while(inFile)
	{
		sheepList.AddSheep(GetSheep(inFile));
	}
	inFile.close();

	return sheepList;
}
