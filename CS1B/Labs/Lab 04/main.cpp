/******************************************************************************
 * Lab#4			:	Introduction to Arrays
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	2/14/2018
 * ****************************************************************************/
#include "lab4HeaderFile.h"
/******************************************************************************
 * Introduction to Arrays
 * ----------------------------------------------------------------------------
 * 	This program will reads	in a list of 10	names as input from	a user and
 * 	places	them in	an array. The program will prompt for a	name and return
 * 	the	number of times	that name was entered in the list. The program should
 * 	output total number	of instances of	that name and then prompt for another
 * 	name until the word	done is	typed in.
 *  ---------------------------------------------------------------------------
 *  INPUT
 *			nameAr : The names in the file that will be read in the array
 *  OUTPUT
 *			will output a string that will say the number of instances the
 *			name has appeared in the list
 ******************************************************************************/
int main()
{
/******************************************************************************
 * CONSTANTS
 * ---------------------------------------------------------------------------
 * PROCESSING - the following is used for the size of the arrays used in this
 * program
 * ---------------------------------------------------------------------------
 * AR_SIZE 			 : The size of the array
 * COL_SIZE_PROMPT	 : The column size for the prompt
 *******************************************************************************/
	const int COL_SIZE_PROMPT	= 50;
	const int AR_SIZE			= 10;

	string nameAr[AR_SIZE];		// IN & CALC - The array for names
	string searchName;			// IN & CALC - The name the user will search for
	int index;					// CALC		 - The index in the array
	int instances;				// CALC		 - The number of instances of the
								//			   name user searches
	ifstream fin;				// CALC		 - The input file
	string fileName;			// CALC		 - The name of the file
	int nameCount;				// CALC 	 - The counter for instances

	/**INTIALIZING**/
	fileName 	= "inFile.txt";
	instances	= 0;
	index		= 0;

	//PROCESSING
	PrintHeader(cout, "Introduction to Arrays", 'L', 4);

	/**************************************************************************
	 * INPUT - Will read in the following input
	 * 				name
	 **************************************************************************/
	fin.open(fileName.c_str());

	while(fin && index < AR_SIZE)
	{
		getline(fin, nameAr[index]);
		index++;
	}

	fin.close();


	/**************************************************************************
	 * PROCESSING - Searching for the number of occurring instances of a name
	 * 				inside and array.
	 **************************************************************************/
	cout << left << setw(COL_SIZE_PROMPT);

	cout << "Who do you want to search for (enter done to exit)? ";
	getline(cin, searchName);

	index = 0;
	while( searchName != "done")
	{
		nameCount = 0;
		for(instances = 0; instances < AR_SIZE; instances++)
		{
			if(nameAr[instances] == searchName)
			{
				nameCount++;
			}//END IF
		}//END For

	/**************************************************************************
	 * OUTPUT - It will Output the number of occurring instances of a name
	 * 				inside and array.
	 **************************************************************************/

		if(nameCount == 1)
		{
			cout << "There is one instance of the name " << searchName
				 << ".\n\n";
		}
		else if (nameCount > 1)
		{
			cout << "There are " << nameCount << " instances of the name "
				 << searchName << ".\n\n";
		}
		else if (nameCount == 0)
		{
				cout << searchName << "\'s"
					 << " name does not exist in this list.\n\n";
		}
		cout << "Who do you want to search for (enter done to exit)? ";
		getline(cin, searchName);

	}//END WHILE
	cout << "\n\nThank you for using my program!";
	cout << right;
	return 0;
}
