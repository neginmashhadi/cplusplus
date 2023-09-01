

#include "LAb5Header.h"

int SearchFunction (const int INT_ARRAY[],
					 const int AR_SIZE,
					 int search)
{
	int index;
	int count;
	bool found;

	found = false;
	index = 0;

		while (!found && index < AR_SIZE)
		{

			if (search == INT_ARRAY[index])
			{
				found = true;
			}
			else
			{
				index++;
			}//END If-Else
		}//END While

		if (found == false)
		{
			index = -1;
		}
	return index;
}
