/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * ASSIGNMENT#3		:	Movie List - Intro to linked ists
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	03/14/2018
 * ****************************************************************************/
#include "header.h"
/*******************************************************************************
 * SortingFunction
 * This function will recieve the head of a linked list and it will sort
 * 	the list alphebetically.
 * 	 ==> returns the head of the sorted linked list
 * -----------------------------------------------------------------------------
 * PRE-CONDITON
 * 				head : The head of the linked list
 * POST-CONDITION
 * 				head : The head of the sorted linked list
 ******************************************************************************/
movieNode *SortingFunction(movieNode *head)
{
	movieNode *i;	//CALC - Loop control variable
	movieNode *j;	//CALC - Loop control variable
	movie temp;		//CALC - Temporary location to put an item in order to sort
					// 		 the list

	i = head;
	j = head;

	while(i->next  != NULL)
	{
		j = i -> next;
		while(j != NULL)
		{
			if(i->data.movieName > j->data.movieName)
			{
				temp = i->data;
				i-> data = j->data;
				j -> data = temp;
			}
			j =  j->next;
		}
		i = i -> next;
	}
	//// version 2 using flag to make sure if it's sorted exit the loop
	//	int swapped = 1;
	//	while ( swapped == 1 ) {
	//		j = head;
	//		swapped = 0;
	//		while(j->next  != NULL)
	//		{
	//			if(j ->data.movieName > j -> next->data.movieName)
	//			{
	//				temp = j->data;
	//				j -> data = j -> next ->data;
	//				j -> next -> data = temp;
	//				swapped = 1;
	//			}
	//			j =  j->next;
	//		}
	//
	//	}
	return head;
}
