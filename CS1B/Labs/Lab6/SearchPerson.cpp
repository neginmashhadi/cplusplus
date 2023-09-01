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
 * FUNCTION SearchName
 * -----------------------------------------------------------------------------
 * 	This function will prompt the user to enter the name of the person they
 * 	 are looking for. The function will search search for the name through the
 * 	 name array.
 * 	 	==> returns the index of the name in the nameAr.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *		the following need a defined value pass in
 *			searchName 		: The name being searched
 *			peoplesInfoAr	: The array of struct
 *			AR_SIZE			: The array size
 * POST-CONDITIONS
 * 		==> returns the index of the name in the nameAr.
 ******************************************************************************/

int SearchName(	string searchName,					// IN - The name being
													//		searched
				information peoplesInfoAr[],		// IN - The array of struct
		 	 	const int AR_SIZE)					// IN - The array size


 {
	bool found;		// CALC		  - whether the name being searched is found
	int index;		// CALC		  - Loop Control variable used to search through
					//				the file
	int result;		// CALC & OUT - The index of the name being searched


	//intitalization
	result	= -1;
	index	= 0;
	found	= false;

	while (index < AR_SIZE && !found)
	{
		 if(peoplesInfoAr[index].name == searchName)
		 {
			 found = true;
			 cout << "Found.\n";
			 result = index;
		 } // END IF STATMENT
		 index++;
	 } // END WHILE LOOP

	 if(result == -1)
	 {
		 cout << searchName << " was not found.\n";
	 }//END IF STATMENT

	return result;
 }
