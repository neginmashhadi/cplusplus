/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#ifndef TIME_H_
#define TIME_H_

#include "header.h"

class Time
{
public:

	void SetTime(int hr, int min, int sec);
	int	 GetHour () const;
	int GetMinue () const;
	int GetSecond() const;

	Time();								//Default Constructer
	Time(int hr, int min, int sec);		//Alternate Constructer
	~Time();							//Destructer

private:
	int hours;
	int minutes;
	int seconds;
};



#endif /* TIME_H_ */
