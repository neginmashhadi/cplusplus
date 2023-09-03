/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * EXTRA CREDIT		: 	Enumerated Types
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	02/12/2018
 * ****************************************************************************/
#include "headerFile.h"
/******************************************************************************
 * Enumerated Types
 * ---------------------------------------------------------------------------
 * This function will prmompt the user to enter the day as a string and convert
 * it to DAYS type and then it will convert it back to string and output the
 * value.
 ******************************************************************************/
int main()
{
	string today;
	string dayFound;
	DAYS   dayWanted;
	bool   valid;

	PrintHeader(cout, "Enumerated Types", 'L', 5);

	do
	{
	cout << "What day is today? ";
	getline(cin, today);

	valid = (today == "Sunday")    ||
			(today == "Monday")    ||
			(today == "Tuesday")   ||
			(today == "Wednesday") ||
			(today == "Thursday")  ||
			(today == "Friday")	   ||
			(today == "Saturday");

	dayWanted = ConvertStringToDays (today);
	dayFound  = ConvertToString	(dayWanted);


	if(!valid)
	{
		cout << "**** Invalid day input! ****\n\n Today is INVALID!\n";
	}
	else
	{
		cout << "Today is " << dayFound << "!\n\n";
	}

	}while(valid);

	return 0;
}
