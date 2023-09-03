/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW06
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/19/2018
 * ****************************************************************************/
#include "header.h"
/*******************************************************************************
 * This function will recieve a string and two indecies and swap the places
 * of the indicies
 *
 * PRE-CONDITIONS
 * 	str		: the string of characters
 * 	start	: the first indicies swap
 * 	end		: the last indicies of swap
 * POST_CONDITIONS
 * 	None- the function is void
 ******************************************************************************/
void Swap(string& str, int start, int end)
{
	char temp;

	temp = str[end];
	str[end] = str[start];
	str[start] = temp;
};
