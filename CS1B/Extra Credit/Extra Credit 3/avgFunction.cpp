/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * EXTRA CREDIT		: 	Functions and Arrays
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	02/12/2018
 * ****************************************************************************/
#include "headerFile.h"

double AvgFunction (int sizeOfArray,
					int numAr[])
{
	double avg;
	int index;
	int sum;

	sum = 0;

	for(index = 0; index < sizeOfArray; index++)
	{
		sum += numAr[index];
	}

	avg = double(sum)/ sizeOfArray;
	cout << setprecision(2) << fixed;
	cout << endl << "avg is " <<  avg << endl;
	return avg;
}
