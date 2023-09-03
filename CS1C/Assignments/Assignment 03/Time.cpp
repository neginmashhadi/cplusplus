/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#include"Time.h"

Time::Time()
{
	hours = 0;
	minutes = 0;
	seconds = 0;
}

Time::Time(int hr, int min, int sec)
{
	hours = hr;
	minutes = min;
	seconds = sec;
}

Time::~Time() {}

void Time::SetTime(int h, int m, int s)
{
	hours = h;
	minutes = m;
	seconds = s;
}

int Time::GetHour() const
{
	return hours;
}

int Time::GetMinue() const
{
	return minutes;
}

int Time::GetSecond() const
{
	return seconds;
}
