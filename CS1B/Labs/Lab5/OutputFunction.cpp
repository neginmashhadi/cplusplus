

#include "Lab5Header.h"

void OutputFunction(const int INT_ARRAY[],
					const int AR_SIZE)
{
	int index;

	for (index = 0; index < AR_SIZE; index++)
	{
		cout << "Index #" << index << ": " << INT_ARRAY[index] << endl;
	}

	cout << endl;
}
