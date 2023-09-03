/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * EXTRA CREDIT		: 	Enumerated Types
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	02/12/2018
 * ****************************************************************************/
#include "headerFile.h"
/*******************************************************************************
 * ConvertfTodays
 *-----------------------------------------------------------------------------
 * This function will recieve a string and will convert it to enum DAYS
 * ----------------------------------------------------------------------------
 * 		==> returns the enum DAYS
 * ----------------------------------------------------------------------------
 * Pre Conditions
 * 					ffToday	: The string the user inputs
 * Post Conditions
 * 		==> returns the enumerated type
 ******************************************************************************/
DAYS ConvertStringToDays (string fToday)
{
	DAYS dayDesired;		// CALC - The enumerated type for days

	switch(fToday[0])
			{
			case 'S': if (fToday[1] == 'u')
					{
						dayDesired = SUNDAY;
					}
					  else
					  {
						  dayDesired = SATURDAY;
					  }
					break;
			case 'M': 	dayDesired = MONDAY;
					break;
			case 'T': if (fToday[1] == 'u')
					{
						dayDesired = TUESDAY;
					}
					  else
					{
						  dayDesired = THURSDAY;
					}
					break;
			case 'W': dayDesired = WEDNESDAY;
					break;
			case 'F': dayDesired = FRIDAY;
					break;
			}


	return dayDesired;
}
