/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Lab #9			:	doubly linked list
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/11/2018
 * ****************************************************************************/
#include "header.h"
void LinkedList(LinkedListNode *&head,
				LinkedListNode *&tail,
				MovieRec *data)
{
	LinkedListNode *ptr;
	LinkedListNode *temp;

	if(data != NULL)
	{
		ptr = new LinkedListNode;
		ptr->data = data;

		if(head == NULL)
		{
			ptr->next = NULL;
			ptr->previous = NULL;
			head = ptr;
			tail = ptr;
		}
		else
		{
			temp = head;
			while(temp!=NULL && temp->data->movieTitle < data->movieTitle)
			{
				temp = temp->next;
			}

			if(temp == NULL)
			{
				ptr->previous = tail;
				ptr->next = NULL;
				tail->next = ptr;
				tail = ptr;
			}
			else if(temp == head)
			{
				head->previous = ptr;
				ptr->next = head;
				head = ptr;
			}
			else
			{
				temp->previous->next = ptr;
				ptr->next = temp;
				ptr->previous = temp->previous;
				temp->previous = ptr;
			}

		}
	}
}
