#include "header.h"
void PrintList(LinkedListNode *head)
{
	LinkedListNode *temp;

	temp = head;
	while(temp != NULL)
	{
		cout << "Movie Name: " << temp->data->movieTitle << '\t';
		cout << "genre: " 	   << temp->data->genre << '\t';
		cout << "year: " 	   << temp->data->year << endl;
		temp = temp->next;
	}
}
