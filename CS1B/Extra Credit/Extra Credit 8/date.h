/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * EXTRA CREDIT		: 	Date Class
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#ifndef DATE_H_
#define DATE_H_

#include <iostream>
#include <ctime>
#include <string>
using namespace std;

class Date
{
	public:
			Date();
			Date(unsigned	short month,
				 unsigned	short day,
				 unsigned	short year);
			~Date();

			void SetDate(unsigned	short month,
						 unsigned	short day,
						 unsigned	short year);


			void GetDate(unsigned	short &month,
						 unsigned	short &day,
						 unsigned	short &year)	const;
			unsigned short GetYear()	const;
			unsigned short GetMonth()	const;
			unsigned short GetDay()		const;
			string DisplayDate()	const;
	private:
			void setDefaultDate();
			unsigned short GetDaysInMonth(unsigned short month,	unsigned short year) const;
			bool IsLeapYear(unsigned short year) const;

			bool ValidateMonth(unsigned	short month) const;

			bool ValidateDay(unsigned short month,
							 unsigned short day,
							 unsigned short year) const;

			bool ValidateYear(unsigned short year) const;

			bool ValidateDate(unsigned short month,
							  unsigned short day,
							  unsigned short year) const;


			unsigned short dateMonth;
			unsigned short dateDay;
			unsigned short dateYear;

};



#endif /* DATE_H_ */
