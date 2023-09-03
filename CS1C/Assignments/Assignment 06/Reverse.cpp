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
 * This function will recieve a string and two indecies and will reverse the
 * order of the characters in the string based on the given indecies using
 * recursion
 *
 * PRE-CONDITIONS
 * 	str		: the string of characters
 * 	start	: the first indicies swap
 * 	end		: the last indicies of swap
 * POST_CONDITIONS
 * 	None- the function is void
 ******************************************************************************/
void Reverse(string& str, int start, int end)
{
	int size = str.length();

	if(start < end)
	{
	   if(start < 0)
	   {
		   cout << "Invalid Input\n";

	   }
		else if(end > size)
		{
			cout << "The indecies for the string are invalid\n";
		}
		else
		{
			Swap(str, start, end);
			Reverse(str, start+1, end-1);
		}
	}
}
