

#include "Lab5Header.h"

void SortingFunction (const int AR_SIZE,
					  int intArray[])
{
	int count;
	int index;
	int temp;

	for (count = 1; count < AR_SIZE; count++)
	{
		temp = intArray[count];

		index = count -1;

		while(index >= 0 && intArray[index] > temp)
		{

			intArray[index + 1] = intArray[index];
			index = index - 1;

		}

		intArray[index + 1] = temp;
	}
}
