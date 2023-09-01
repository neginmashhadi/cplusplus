
#include "Lab5Header.h"

int SearchBinary (const int INT_ARRAY[],
				  const int AR_SIZE,
				  int search)
{
	int middle;
	int top;
	int bottom;
	int index;
	bool found;

	found = false;

	index = -1;
	top = AR_SIZE - 1;
	bottom = 0;


	while (!found && bottom <= top)
	{
		middle = (bottom + top) / 2;


		if(INT_ARRAY[middle] == search)
		{
			found = true;
			index = middle;
		}
		else if (INT_ARRAY[middle] < search)
		{
			bottom = middle +1;
		}
		else
		{
			top = middle - 1;
		}
	}

	return index;
}
