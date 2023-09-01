/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * ASSIGNMENT#3		:	Movie List - Intro to linked ists
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	03/16/2018
 * ****************************************************************************/
#include "header.h"
/*******************************************************************************
 * Movie List - Intro to linked ists
 * -----------------------------------------------------------------------------
 * 		This program that allows a user to track their DVDs. The program will
 * 	 read the data from the file. Create a linked list and sort the list then
 * 	 output the sorted movies
 * -----------------------------------------------------------------------------
 * INPUT
 *			inputFile	: The name of the input file
 * OUTPUT
 *		outputs the movies and their information sorted
 ******************************************************************************/
int main()
{
/*******************************************************************************
 * CONSTANTS
 * -----------------------------------------------------------------------------
 * USED FOR PROCESSING
 * -----------------------------------------------------------------------------
 *	NONE ASSIGNED
 ******************************************************************************/
	movieNode movieWanted;	//CALC - The struct containing the data of the movies
	string inputFile;		//IN   - The name of the input file
	ifstream inFile;		//CALC - input of the fstream
	movieNode *head;		//CALC - The head of the linked list

	/**INTIALIZING**/
	string line;
	head = NULL;

	PrintHeader (cout , "Movie List", 'A', 3);
	//INPUT
	cout << "Please enter the name of yor input file: ";
	getline(cin, inputFile);
	cout << endl << endl;
	//PROCESSING
	head = LinkedList(inputFile);
	head = SortingFunction(head);
	//OUTPUT
	Output(head);
	return 0;
}
