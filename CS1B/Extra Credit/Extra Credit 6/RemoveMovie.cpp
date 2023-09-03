/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Lab #9			:	doubly linked list
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/11/2018
 * ****************************************************************************/
#include "header.h"
void RemoveMovie(LinkedListNode *&head,
				 LinkedListNode *&tail)
{
	LinkedListNode *searchPtr;
	string movieName;

	cout << "\nWhat movie would you like to remove from the list: ";
	getline(cin, movieName);

	if(head == NULL)
	{
		cout << "\nCan't remove from an empty list!\n";
	}
	else
	{
		searchPtr = head;
		bool found = false;
		while(searchPtr != NULL && !found)
		{
			if (searchPtr->data->movieTitle == movieName)
				found = true;
			else
				searchPtr = searchPtr->next;

		}
		if(searchPtr != NULL)
		{
			if(searchPtr == head)
			{
				if(searchPtr == tail)
				{
					delete head;
					delete tail;
					head = NULL;
					tail = NULL;
				}
				else
				{
					searchPtr = head->next;
					searchPtr ->previous = NULL;
					delete head;
					head = searchPtr;
				}
			}
			else if(searchPtr == tail)
			{
				searchPtr = tail->previous;
				searchPtr ->next = NULL;
				delete tail;
				tail = searchPtr;
			}
			else
			{
				searchPtr->previous->next = searchPtr->next;
				searchPtr->next->previous = searchPtr->previous;
				delete searchPtr;
			}
		}
		else
		{
			cout << "\nThe movie not found!\n";
		}
	}
}




