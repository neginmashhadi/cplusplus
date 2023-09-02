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
 * FUNCTION - CreateList
 * ---------------------------------------------------------------------
 * This function will output the menu containing the options to
 * manipulate the stack using an enumerated type.
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 	*NONE*
 *
 * POST-CONDITIONS
 * 	This function will output the menu for the user.
 **********************************************************************/
PersonInfo *GetInfo(ifstream &InFile) // IN & OUT    - to the input file
{
	PersonInfo *ptr;
	ptr = NULL;
	ptr = new PersonInfo;

	if(InFile)
	{
		getline(InFile, ptr -> name);
		InFile.get(ptr -> gender);
		InFile >> ptr -> age;
		InFile.ignore(numeric_limits<streamsize>::max(), '\n');
		InFile.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	return ptr;
}
