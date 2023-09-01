/******************************************************************************
 * LAB #10 		 : Implementing a queue
 * CLASS		 : CS1B
 * SECTION		 : MW - 6:30pm
 * DUE DATE		 : 4/9/18
 ******************************************************************************/
#include "MyHeader.h"


/******************************************************************************
* FUNCTION GetAndCheckInput
*------------------------------------------------------------------------------
* This function gets input and checks if the input is valid. If the input is
* 	invalid, a error message will output.
*------------------------------------------------------------------------------
* PRE-CONDITIONS
* No values passed in
*
* POST-CONDITIONS
* ==> Returns input selected by the user
******************************************************************************/
int GetAndCheckInput()
{
	const int LOWER_BOUND = 0;
	const int UPPER_BOUND = 6;
	const int OUTPUT_SIZE = 25;

	int  commandF;
	bool invalid;

	do
	{
		invalid = false;

		OutputMenu();

		cout << "Enter a command? ";
		cin >> commandF;


		if(!(cin))
		{
			cout << "\n**** Please input a number between 0 and 5 ****\n\n";
			cin.clear();

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		else if(commandF < LOWER_BOUND || commandF > UPPER_BOUND)
		{
			cout << left;
			cout << "\n**** The number " << commandF;
			cout << setw(OUTPUT_SIZE) << " is an invalid entry" << "****";

			cout << "\n**** Please input a number between 0 and 5 ****\n\n";

			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
	}while(invalid);

	cout << right;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	return commandF;
}
