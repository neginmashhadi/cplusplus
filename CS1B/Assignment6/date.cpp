/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
` * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#include "date.h"

const unsigned short CURRENT_YR = 2018;
/*******************************************************************************
* Date()
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
Date::Date()
{
	setDefaultDate();
}
/*******************************************************************************
* Date(unsigned	short month, unsigned	short day, unsigned	short year)
* Constructor; Initialize class attributes
* Parameters: Date openingDate, string name, int accountNum, float balance
* Return: none
*******************************************************************************/
Date::Date(unsigned	short month, unsigned short day, unsigned short year)
{
	if(ValidateDate(month, day, year))
	{
		SetDate(month, day, year);
	}
	else {
		setDefaultDate();
	}
}
/******************************************************************************
* ~Date();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
Date::~Date()
{

}
/******************************************************************************
* setDefaultDate()
*
* Mutator; This method will set the date to current date
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Date::setDefaultDate()
{
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);
    SetDate(timePtr->tm_mon+1,timePtr->tm_mday,timePtr->tm_year+1900 );
}
/******************************************************************************
* SetDate(unsigned	short month, unsigned short day, unsigned short year)
*
* Mutator; This method will set the date
*-------------------------------------------------------------------------------
* Parameter: unsigned short month, unsigned short day, unsigned short year
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Date::SetDate(unsigned	short month, unsigned short day, unsigned short year)
{
	dateYear = year;
	dateDay = day;
	dateMonth = month;
}
/******************************************************************************
* GetDate(unsigned	short &month, unsigned short &day,
				   unsigned	short &year) const
*
* Accessor; This method will get the date
*-------------------------------------------------------------------------------
* Parameter: unsigned short month, unsigned short day, unsigned short year
*-------------------------------------------------------------------------------
* Return: date
*******************************************************************************/
void Date::GetDate(unsigned	short &month, unsigned short &day,
				   unsigned	short &year)	const
{
	month = dateMonth;
	day	  = dateDay;
	year  = dateYear;
}
/******************************************************************************
* GetYear() const
*
* Accessor; This method will get the date
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: year
*******************************************************************************/
unsigned short Date::GetYear() const
{
	return dateYear;
}
/******************************************************************************
* GetMonth() const
*
* Accessor; This method will get the date
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: month
*******************************************************************************/
unsigned short Date::GetMonth()	const
{
	return dateMonth;
}
/******************************************************************************
* GetDay() const
*
* Accessor; This method will get the date
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: day
*******************************************************************************/
unsigned short Date::GetDay()	const
{
	return dateDay;
}
/******************************************************************************
* IsLeapYear(unsigned short year) const
*
* Accessor; This method will get the leap year
*-------------------------------------------------------------------------------
* Parameter: unsigned short year
*-------------------------------------------------------------------------------
* Return: bool true if leap year else false
*******************************************************************************/
bool Date::IsLeapYear(unsigned short year) const
{
	bool leapYear;
	leapYear = false;
	if ( ValidateYear(year))
	{
		if ((year % 4 == 0) && !(year % 100 == 0))
		{
				leapYear = true;
		}
    	else if (year % 400 == 0){
    		// year divisible by 4 but not by 100
    		leapYear = true;
		}
	}
	return leapYear;
}
/******************************************************************************
* IsLeapYear(unsigned short year) const
*
* Accessor; This method will get the leap year
*-------------------------------------------------------------------------------
* Parameter: unsigned short year
*-------------------------------------------------------------------------------
* Return: bool true if leap year else false
*******************************************************************************/
unsigned short Date::GetDaysInMonth(unsigned short month, unsigned short year) const
{
	unsigned short days;
	bool leapYear;

	if(month == 4 || month == 6 || month == 9 || month == 11)
	{
		days = 31;
	}
	else if(month == 2)
	{
		leapYear  = IsLeapYear(year);
		if(leapYear)
		{
			days = 28;
		}
		else
		{
			days = 29;
		}
	}
	else
	{
		days = 31;
	}
	return days;
}
/******************************************************************************
* ValidateMonth(unsigned short month) const
*
* Accessor; This method will make sure it is the right month
*-------------------------------------------------------------------------------
* Parameter: unsigned short month
*-------------------------------------------------------------------------------
* Return: bool true for correct month and false for else
*******************************************************************************/
bool Date::ValidateMonth(unsigned short month) const
{
	const int MIN_MON = 1;
	const int MAX_MON = 12;

	bool validMonth;

	validMonth = true;

	if(month < MIN_MON || month > MAX_MON)
	{
		validMonth = false;
	}

	return validMonth;
}
/******************************************************************************
* bool Date::ValidateDay(unsigned short month, unsigned short day,
*					   unsigned short year) const
*
* Accessor; This method will make sure it is the right month
*-------------------------------------------------------------------------------
* Parameter: unsigned short month
*-------------------------------------------------------------------------------
* Return: bool true for correct month and false for else
*******************************************************************************/
bool Date::ValidateDay(unsigned short month,
					   unsigned short day,
					   unsigned short year) const
{
	bool valid31D;
	bool valid30D;
	bool validFebD;
	bool dateValidate;

	valid31D = ((month == 1 ||  month == 3 || month == 5  || month ==7
							|| month == 8  || month == 10 || month == 12)
				&& day >= 1 && day <= 30);

	valid30D = ((month == 4 || month == 6 || month == 9 || month == 11) &&
					(day >= 1 && day <= 30));

	validFebD = ((IsLeapYear(year) && (day >= 1 && day <= 29)) ||
				(!IsLeapYear(year) && (day >= 1 && day <= 28)));

	dateValidate = valid31D || valid30D || validFebD;

	return dateValidate;
}
/******************************************************************************
* ValidateYear(unsigned short year) const
*
* Accessor; This method will make sure it is the right year
*-------------------------------------------------------------------------------
* Parameter: unsigned short year
*-------------------------------------------------------------------------------
* Return: bool true for correct year and false for else
*******************************************************************************/
bool Date::ValidateYear(unsigned short year) const
{
	const unsigned short MIN_YR = 1900;
	bool validYr;

	validYr = true;
	if(year < MIN_YR || year > CURRENT_YR)
	{
		validYr = false;
	}
	return validYr;
}
/******************************************************************************
* ValidateDate(unsigned short month, unsigned short day, unsigned short year)
* 			   const
*
* Accessor; This method will make sure it is the right date
*-------------------------------------------------------------------------------
* Parameter: unsigned short month, unsigned short day, unsigned short year
*-------------------------------------------------------------------------------
* Return: bool true for correct year and false for else
*******************************************************************************/
bool Date::ValidateDate(unsigned short month, unsigned short day,
						unsigned short year) const
{
	bool validDate;

	validDate = (ValidateMonth(month) &&
				 ValidateDay(month, day, year) 	  &&
				 ValidateYear(year));

	return validDate;
}
/******************************************************************************
* DisplayDate()	const
*
* Accessor; This method will display date
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: string
*******************************************************************************/
string Date::DisplayDate() const
{
	string display;
	string month;
	string day;

	month = GetMonth() < 10 ? "0" + to_string(GetMonth()) : to_string(GetMonth());
	day = GetDay() < 10 ? "0" + to_string(GetDay()) :to_string(GetDay());
	display = month  + "/" + day + "/" +
			  to_string(GetYear());
	return display;
}

