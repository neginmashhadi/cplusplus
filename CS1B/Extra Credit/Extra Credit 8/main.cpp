/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * EXTRA CREDIT		: 	Date Class
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#include "header.h"

int main()
{
	PrintHeader(cout, "Date Class", 'L', 11);

	unsigned short month;
	unsigned short day;
	unsigned short year;

	Date currentDate;
	Date currentDate1;

	cout << "Today's Date is: \n";
	cout << currentDate.DisplayDate();
	cout<< endl << endl;

	cout << "Please enter the month: ";
	cin  >> month;
	cout << "Please enter the day: ";
	cin  >> day;
	cout << "Please enter the year: ";
	cin  >> year;


	currentDate1= Date(month,day,year);
	cout << endl <<  currentDate1.DisplayDate();
	cout<< endl;


	return 0;
}
