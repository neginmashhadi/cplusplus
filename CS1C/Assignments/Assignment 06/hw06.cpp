/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW06
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/19/2018
 * ****************************************************************************/
#include "header.h"

int main()
{
	string characters; //IN - will be intialized to abc
	int start;		   //IN - the first index of the string being swaped
	int end;		   //IN - the second index of the string being swaped

	Intialize(characters);
	cout << "Please enter the first indicies: ";
	cin  >> start;
	cout << "Please enter the first indicies: ";
	cin  >> end;
	Reverse(characters,start,end);
	cout << characters <<endl;
	Intialize(characters);
	cout << "\nPlease enter the first indicies: ";
	cin  >> start;
	cout << "Please enter the first indicies: ";
	cin  >> end;
	Reverse(characters,start,end);
	cout << characters <<endl;
	Intialize(characters);
	cout << "\nPlease enter the first indicies:";
	cin  >> start;
	cout << "Please enter the first indicies:";
	cin  >> end;
	Reverse(characters,start,end);
	cout << characters <<endl;


	cout << "\nFOR EXTRA CREDIT";
	Intialize(characters);
	cout << "\n\nPlease enter the first indicies:";
	cin  >> start;
	cout << "Please enter the first indicies:";
	cin  >> end;
	while(start < end)
	{
		Swap(characters, start++, end--);
	}
	cout << characters <<endl;



return 0;
}
