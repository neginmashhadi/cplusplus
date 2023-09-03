/******************************************************************************
 * AUTHOR		: Negin Mashhadi
 * STUDENT ID	: 1084104
 * LAB #0		: Eclipse Lab
 * CLASS		: CS1B
 * SECTION		: MW 6:30-9:50
 * DUE DATE		:
 ******************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	 * ------------------------------------------------------------------------
	 * PROGRAMMER	: Prpgrammer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 *************************************************************************/
	const char  PROGRAMMER[30]	= "Negin Mashhadi";
	const char	CLASS[5]		= "CS1B";
	const char	SECTION[25]		= "MW: 6:30p - 9:50p ";
	const int	LAB_NUM			= 0;
	const char	LAB_NAME[17]	= "Eclipse Lab";

	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************";
	cout << "\n* PROGRAMMED BY  : " << PROGRAMMER;
	cout << "\n* " << setw(14) << "CLASS" 	<< " : " << CLASS;
	cout << "\n* " << setw(14) << "SECTION" << " : " << SECTION;
	cout << "\n* LAB #" << setw(9) << LAB_NUM << " : " << LAB_NAME;
	cout << "\n***************************************************\n\n";
	cout << right;


	return 0;
}
