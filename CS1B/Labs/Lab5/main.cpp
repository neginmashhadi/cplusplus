

#include "Lab5Header.h"

int main()
{
	const int MAX_AR = 8;

	int intArray[MAX_AR] = {4, 1, 7, 12, 8, 13, 9, 21};
	int count;
	int search;
	int index;



	OutputFunction (intArray, MAX_AR);

	for (count = 0; count < 4; count++)
	{
		cout << "Enter an integer to search for: ";
		cin  >> search;

		index = SearchFunction (intArray, MAX_AR, search);

		if (index > -1)
		{
			cout << "The integer " << search << " was found in index #"
				 << index << ".\n\n";
		}
		else
		{
			cout << search << " was not found!\n\n";
		}

	}

	cout << "\n\nPerforming Insertion Sort!\n\n";

	SortingFunction (MAX_AR, intArray);

	OutputFunction (intArray, MAX_AR);

	for (count = 0; count < 4; count++)
	{
		cout << "Enter an integer to search for: ";
		cin  >> search;

		index = SearchBinary (intArray, MAX_AR, search);

		if(index > - 1)
		{
		cout << "The integer " << search << " was found in index# "
			 << index << ".\n\n";
		}
		else
		{
			cout << search << " was not Found!\n\n";
		}

	}

	return 0;
}
