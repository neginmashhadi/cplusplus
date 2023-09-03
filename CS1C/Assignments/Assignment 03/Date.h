/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#ifndef DATE_H_
#define DATE_H_

#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class Date
{
public:
	Date();
	Date(unsigned short month, unsigned short day, unsigned short year);
	~Date();

	void SetDate(unsigned short month, unsigned short day, unsigned short year);

	unsigned short GetMonth() const;
	unsigned short GetDay  () const;
	unsigned short GetYear () const;
	void GetDate(unsigned short &month, unsigned short &day, unsigned short &year) const;
	string DisplayDate() const;
	void SetDefaultDate();

private:
	unsigned short GetDaysInMonth(unsigned short month, unsigned short year) const;
	bool IsLeapYear(unsigned short year) const;
	bool ValidMonth(unsigned short month) const;
	bool ValidDay(unsigned short month, unsigned short day, unsigned short year) const;
	bool ValidYear(unsigned short year) const;
	bool ValidDate(unsigned short month, unsigned short day, unsigned short year) const;


	unsigned short dateDay;
	unsigned short dateMonth;
	unsigned short dateYear;
};




#endif /* DATE_H_ */
