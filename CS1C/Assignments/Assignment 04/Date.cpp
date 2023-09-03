/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#include "Date.h"

const unsigned short CURRENT_YEAR =2018;

Date::Date()
{
	SetDefaultDate();
}

Date::Date(unsigned short month, unsigned short day, unsigned short year)
{
	if(ValidDate(month, day, year))
	{
		SetDate(month, day, year);
	}
	else
	{
		SetDefaultDate();
	}
}

Date::~Date() {}

void Date::SetDate(unsigned short month, unsigned short day, unsigned short year)
{
	dateMonth = month;
	dateDay   = day;
	dateYear  = year;
}

void Date::SetDefaultDate()
{
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
	SetDate(timePtr->tm_mon+1, timePtr->tm_mday, timePtr->tm_year+1900);
}

void Date::GetDate(unsigned short &month, unsigned short &day,
				   unsigned short &year) const
{
	month = dateMonth;
	day	  = dateDay;
	year  = dateYear;
}

unsigned short Date::GetMonth() const
{
	return dateMonth;
}

unsigned short Date::GetDay() const
{
	return dateDay;
}

unsigned short Date::GetYear() const
{
	return dateYear;
}

bool Date::IsLeapYear(unsigned short year) const
{
	bool leapYear = false;
	if(ValidYear(year))
	{
		if((year % 4 == 0) && !(year % 100 == 0))
		{
			leapYear = true;
		}
		else if((year % 400 == 0))
		{
			leapYear = true;
		}//END IF ELSE IF
	}//END IF

	return leapYear;
}

unsigned short Date::GetDaysInMonth(unsigned short month, unsigned short year) const
{
	unsigned short numOfDays;
	bool leapYear;
	if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		numOfDays = 30;
	}
	else if (month == 2)
	{
		leapYear = IsLeapYear(year);
		if(leapYear)
		{
			numOfDays = 28;
		}
		else
		{
			numOfDays = 29;
		}//END IF FOR LEAPYEAR of feburary
	}
	else
	{
		numOfDays = 31;
	}//end if else if of days
	return numOfDays;
}

bool Date::ValidMonth(unsigned short month) const
{
	const int MIN_MONTH = 1;
	const int MAX_MONTH = 12;
	bool validMonth = true;
	if(month < MIN_MONTH || month > MAX_MONTH)
	{
		validMonth = false;
	}
	return validMonth;
}

bool Date::ValidDay(unsigned short month, unsigned short day, unsigned short year) const
{
	bool valid31D;
	bool valid30D;
	bool validFebD;
	bool dateValidate;
	bool leapYear;

	leapYear = IsLeapYear(year);

	valid30D = ((month ==1  || month == 3  || month == 5 || month == 7 ||
				 month == 8 || month == 10 || month == 12) &&
				 day >= 1 && day <= 31);
	valid31D = ((month == 4 || month == 6 || month == 9 || month == 11) &&
				 day >= 1 && day <= 30);
	validFebD = (leapYear  && (day >= 1 && day <= 29)) ||
			    (!leapYear && (day >= 1 && day <= 28));

	dateValidate = valid30D || valid31D || validFebD;

	return dateValidate;
}

bool Date::ValidYear(unsigned short year) const
{
	const unsigned short MIN_YR = 1900;
	bool validYr;

	validYr = true;
	if(year < MIN_YR || year > CURRENT_YEAR)
	{
		validYr = false;
	}
	return validYr;
}


bool Date::ValidDate(unsigned short month, unsigned short day, unsigned short year) const
{
	bool validDate;

	validDate = (ValidMonth(month)			 &&
				 ValidDay(month, day, year)  &&
				 ValidYear(year));

	return validDate;
}

string Date::DisplayDate()	const
{
	string date = to_string(GetMonth()) + "/" + to_string(GetDay()) + "/" + to_string(GetYear());
	return date;
}

istream& operator>>(istream& in, Date& dt)
{

	in   >> dt.dateDay >> dt.dateMonth >> dt.dateYear;
	return in;
}

