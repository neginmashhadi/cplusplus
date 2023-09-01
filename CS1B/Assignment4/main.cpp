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
 * Searching linked lists
 * -----------------------------------------------------------------------------
 * This program will allow the user to choose an input file and will display a
 * menu until the user enters 0 to exit.
 * ----------------------------------------------------------------------------
 * INPUT
 * 			inFileName	: The name of the input file
 * 			oFileName	: The name of the output file
 * 			command 	: The choice of the user based on the menu
 * OUTPUT
 *
 *
 ******************************************************************************/
int main()
{
	string inFileName;
	string oFileName;
	int command;
	movieNode *head;
	movieNode *tail;
	ofstream oFile;

	head = NULL;
	tail = NULL;

	PrintHeader(cout, "Searching Linked List", 'A', 4);

	cout << "Which input file would you like to use (type d for defult file)? ";
	getline(cin, inFileName);
	cout << "Which output file would you like to use (type d for defult file)? ";
	getline(cin, oFileName);

	if(inFileName == "d")
	{
		inFileName = "inFile.txt";
	}
	if(oFileName == "d")
	{
		oFileName = "oFile.txt";
	}

	GetInput(inFileName, head, tail);
	oFile.open(oFileName);
	command = GetAndCheckInput();
	do
	{

		if(command == OUTPUT)
		{
			cout << "\nListing all movies!\n";
			Output(head, oFile);
		}
		else
		{
			Search(head, command, oFile);
		}
		command = GetAndCheckInput();
		} while(command != EXIT);


	cout << "\nThank you for using my program!";
	oFile.close();
	return 0;
}
