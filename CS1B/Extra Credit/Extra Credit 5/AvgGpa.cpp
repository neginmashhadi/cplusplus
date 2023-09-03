/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Lab #8			:	Linked list extra credit
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/04/2018
 * ****************************************************************************/
#include "header.h"

float AvgGpa(studentNode *&head)
{
	int   size;
	float sum;
	float avgGpa;
	studentNode *ptr;

	ptr = head;
	avgGpa = 0;
	sum =0;

	while(ptr!=NULL)
	{
		size++;
		sum += ptr->gpa;
		ptr = ptr->next;
	}
	avgGpa = sum/double(size);

	return avgGpa;
}
