/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * ASSIGNMENT#4		:	Searching linked lists
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	03/14/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * FUNCTION SearchYear
 * -----------------------------------------------------------------------------
 * 	This function will recieve the head of the linked list and the year being
 * 	searched. then it will search through the function for movies that were
 * 	released on the year
 * 		==> returns nothing
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *				head 	: The head of the function
 *				search 	: Item being searched
 *				oFile 	: The output file
 * POST-CONDITIONS
 * 		==>	Returns nothing
 ******************************************************************************/
void YearSearch(movieNode *head,
				int search,
				ofstream &oFile)
{
	movieNode *searchPtr;
	int instances;

	searchPtr = head;
	instances = 0;

	cout << "\nSearching for the year " << search;
	while(searchPtr != NULL)
	{
		if(searchPtr->year == search)
		{
			instances++;
			if(instances == 1)
			{
				oFile << "\nSearch by Year for " << search << " Found:\n";
			}
			outputSearch(searchPtr, instances, oFile);
		}
		searchPtr = searchPtr->next;
	}

	if(instances == 0)
	{
		cout << "\nSorry, no movies for the year, " << search << " were found.\n";
	}
	else
	{
		cout << "\nFound " << instances << " movies for the year " << search
			 << '!' << endl;
	}

}
