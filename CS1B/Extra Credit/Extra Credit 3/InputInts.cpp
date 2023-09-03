/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * EXTRA CREDIT		: 	Functions and Arrays
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	02/12/2018
 * ****************************************************************************/
#include "headerFile.h"
void InputInts	(string &fileName,
				 int 	arraySize,
				 int 	intgerAr[],
				 float	floatAr[])
{

	ifstream fin;
	int index;
	index = 0;

	fin.open(fileName.c_str());
	while(fin && index < arraySize)
	{
		fin >> intgerAr[index];
		fin >> floatAr [index];
		index++;
	}
	fin.close();

	cout << "\nThe numbers in the file are : \n";
	for(int i = 0; i <arraySize; i++)
	{
		cout << intgerAr[i];
		cout << endl;
		cout << floatAr[i];
		cout << endl;
	}

}
