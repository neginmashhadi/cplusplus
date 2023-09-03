/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * EXTRA CREDIT		: 	Functions and Arrays
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	02/12/2018
 * ****************************************************************************/
#include "headerFile.h"
int main()
{

	//VARIABLE DECLERATION
	string fileName;
	int sizeOfArray;
	int arraySize = 3;
	int index;
	int numAr[arraySize];
	float floAr[arraySize];
	//fileName = "file.txt";


	cout << "Welcome to my program!\n";
	cout << "Please enter the name of the input file you would like to use: ";
	getline(cin, fileName);
	cout << "\nenter the amount of numbers you would like to find "
			"the average of: ";
	cin	 >> sizeOfArray;
	int numberAr[sizeOfArray];

	for(index = 0; index < sizeOfArray; index++)
	{
		cout << "Please enter your number: ";
		cin >> numberAr[index];
	}

	AvgFunction(sizeOfArray, numberAr);
	InputInts(fileName, arraySize, numAr, floAr);

	return 0;
}
