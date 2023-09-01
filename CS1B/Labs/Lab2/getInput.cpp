/******************************************************************************
 * AURHOR			:	Negin Mashhadi & Travis Nguyen
 * STUDENT ID		:	1084104 & 1035825
 * LAB#2			:	Coin flip
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	1/31/2018
 * ****************************************************************************/
#include "lab2HeaderFile.h"

/******************************************************************************
 * Get Input
 * ----------------------------------------------------------------------------
 * 		This function will ask the use to input their information (their name
 * 	and gender). If the user is male The program will refre to them as mister
 * 	and if the use is female the program will refer to them as miss.
 * 		==> returns
 * -----------------------------------------------------------------------------
 *  PRE-CONDITIONS
 *			<Nothing>
 *  POST-CONDITIONS
 *  		==> returns nothing
 ******************************************************************************/
void GetInput()
{
/******************************************************************************
 * CONSTANTS
 * ---------------------------------------------------------------------------
 * PROCESSING - the following is used for the size of the arrays used in this
 * program
 * ---------------------------------------------------------------------------
 *	PROMPT_COL	: Column size for the prompt
 ******************************************************************************/
	const int PROMPT_COL = 27;

	string name;			// IN			- The name of the user
	char gender;			// IN			- The gender of the user
	string genderPrefix;	// CALC & OUT	- What the program will refer the
							//				  usesr as

	cout << left;
	cout << setw(PROMPT_COL) << "What is your name?";
	getline(cin, name);
	cout << left;
	cout << setw(PROMPT_COL) << "What is your gender (M/F):";
	cin.get(gender);
	gender = toupper(gender);
	cin.ignore(1000, '\n');

	if(gender == 'M')
	{
		genderPrefix = "Mr. ";
	}
	else
	{
		genderPrefix = "Ms. ";
	}

	cout << "\nTry to get 3 heads in a row. Good luck " << genderPrefix
		 << name << "!\n\n";
}

