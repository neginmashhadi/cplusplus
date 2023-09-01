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
 * FUNCTION ActorSearch
 * -----------------------------------------------------------------------------
 * 	This function will recieve the head of the linked list and the actor being
 * 	search. then it will search through the linked list for the actor
 * 		==> returns nothing
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *				head 	: The head of the function
 *				search 	: Item being searched
 *				oFile 	: The output file
 * POST-CONDITIONS
 * 		==>	Returns nothing
 ******************************************************************************/
void ActorSearch(movieNode *head,
			     string search,
				 ofstream &oFile)
{
	movieNode *searchPtr;
	int instances;

	searchPtr = head;
	instances = 0;

	cout << "\nSearching for the actor " << search;
	while(searchPtr != NULL)
	{
		if(searchPtr->leadActor == search ||
		   searchPtr->supportingActor == search)
		{
			instances++;
			if(instances == 1)
			{
				oFile << "\nSearch by actor for " << search << " Found:\n";
			}
			outputSearch(searchPtr, instances, oFile);
		}
		searchPtr = searchPtr->next;
	}

	if(instances == 0)
	{
		cout << "\nSorry, no movies for the actor, " << search << " were found\n";
	}
	else
	{
		cout << "\nFound " << instances << " movies for the actor " << search
			 << '!' << endl;
	}
}
