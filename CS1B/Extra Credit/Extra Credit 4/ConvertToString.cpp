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
 * ConvertToString
 * ----------------------------------------------------------------------------
 * 	This function recieves the enumerated Type days and it will conver it to
 * 	a string.
 * 		returns ==> string of the days
 * ----------------------------------------------------------------------------
 * Pre-Conditions
 * 		fDayWanted	: The enumerated type of the day user entered
 * Post-Coditions
 * 		dayString	: The string of the day user entered
 ******************************************************************************/
string ConvertToString(int fDayWanted)
{
	string dayString;

	switch(fDayWanted)
	{
	case SUNDAY	: dayString = "SUNDAY";
				break;
	case MONDAY	: dayString = "MONDAY";
				break;
	case TUESDAY: dayString = "TUESDAY";
				break;
	case WEDNESDAY: dayString = "WEDNESDAY";
				break;
	case THURSDAY: dayString = "THURSDAY";
				break;
	case FRIDAY: dayString = "FRIDAY";
				break;
	case SATURDAY: dayString = "SATURDAY";
				break;
	}

	return dayString;
}
