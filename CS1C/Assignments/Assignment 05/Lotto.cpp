/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW05
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/13/2018
 * ****************************************************************************/
#include "header.h"

vector<int> Lotto(int numberRandom, int numOfSpaces)
{
	srand(unsigned (time(NULL)));
	vector<int> num;

	for(int i=1; i <= numberRandom; i++)
	{
		num.push_back(i);
	}

	random_shuffle(num.begin(), num.end());
	random_shuffle(num.begin(), num.end(), RandomShuffle);
	cout << "The card selected contains the numbers: \n";
	for (vector<int>::iterator i =num.begin(); i != num.end(); i++)
	{
		 cout << ' ' << *i << ',';
	}

	cout << "\n\nthe winning numbers are: \n";
	for(int lotto = 1; lotto<numOfSpaces; lotto++)
	{
		random_shuffle(num.begin(), num.end());
		cout << rand() % numberRandom << ", ";
	}

	return num;
}
