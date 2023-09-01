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
 * FUNCTION TitleSearch
 * -----------------------------------------------------------------------------
 * 	This function receives the head of the linked list and the name of the movie
 * 	being searched. if found it will output the movie in the output file
 * 		==> returns nothing
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *				head 	: The head of the function
 *				search 	: Item being searched
 *				oFile 	: The output file
 * POST-CONDITIONS
 * 		==>	Returns nothing - this function output the class heading.
 ******************************************************************************/
void TitleSearch(movieNode *head,
		  	  	 string search,
				 ofstream &oFile)
{
	const int MAX_LEN 	 = 75;
	const int TITLE_COL  = 7;
	const int YEAR_COL   = 6;
	const int NUM_COL	 = 12;
	const int RATE_COL   = 8;
	const int NAME_COL   = 18;
	const int ACTOR_NAME = 25;
	const int GENRE_COL	 = 9;

	string moviePlot;
	string result;
	movieNode *searchPtr;
	bool found;

	found = false;

	cout << "\nSearching for the title " << search;
	searchPtr = head;
	while(searchPtr != NULL && !found)
	{
		if(searchPtr->movieName == search)
		{
			found = true;
			cout << "\nFound the movie " << search << '!' << endl;
			oFile << setfill('*') << setw(MAX_LEN) << '*' << endl;
			oFile << setfill (' ');
			oFile << left << setw(TITLE_COL) << "Title: " << searchPtr->movieName << endl;
			oFile << setfill('-') << setw(MAX_LEN) << '-' << endl;
			oFile << setfill (' ');
			oFile << setw(YEAR_COL) << "Year: "   << setw(NUM_COL) << searchPtr->year
				 << setw(RATE_COL) << "Rating: " << searchPtr->rating   << endl;
			oFile << setfill('-') << setw(MAX_LEN) << '-' << endl;
			oFile << setfill (' ');
			oFile << setw(NAME_COL) << "Leading Actor: " << setw(ACTOR_NAME)
				 << searchPtr->leadActor << setw(GENRE_COL) << "Genre 1: "
				 << searchPtr->genre << endl;
			oFile << setw(NAME_COL) << "Supporting Actor: " << setw(ACTOR_NAME)
				 << searchPtr->supportingActor << setw(GENRE_COL) << "Genre 2: "
				 << searchPtr->alternateGenre  << endl;
			oFile << setfill('-') << setw(MAX_LEN) << '-' << endl;
			oFile << setfill(' ');
			oFile << "PLOT:\n";
			moviePlot = searchPtr->synopsis;
			result	 = WordWrap(moviePlot);
			oFile << result << endl;
			oFile << setfill('*') << setw(MAX_LEN) << '*' << endl << endl << endl;
			oFile << setfill(' ');
			searchPtr = searchPtr->next;
		}
		else
		{
			searchPtr = searchPtr->next;
		}
	}
	if(!found)
	{
		cout << "\nSorry, the movie " << "\'\'" << search << "\'\' was "
						"not found.\n\n";
	}

}
