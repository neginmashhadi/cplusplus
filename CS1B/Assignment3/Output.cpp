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
 * Output
 * -----------------------------------------------------------------------------
 * 	This function will Output the sorted linked list. The function will recieve
 * 	the header and will output the data of each movie
 *------------------------------------------------------------------------------
 *	PRE-CONDITION
 *					head	: The head of the linked function
 *	POST_CONDITION
 *					<returns nothing and will output only>
 ******************************************************************************/
void Output(movieNode *head)
{
/*******************************************************************************
 * CONSTANTS
 * -----------------------------------------------------------------------------
 * USED FOR PROCESSING
 * -----------------------------------------------------------------------------
 *	MAX_LENGTH : the max length it can be displayed
 *	MOVIE_NAME : column length of the name of the movie
 *	TITLE_COL  : column for the length of title
 *	MOVIE_NUM  : column for the movie number
 *	YEAR_COL   : column for the year of the movie
 *	RATE_COL   : column for the rate of the movie
 *	NAME_COL   : column for the supporting of the movie
 *	ACTOR_NAME : column for the name of the actor of movie
 *	GENRE_COL  : column for the genre of the movie
 ******************************************************************************/
	const int MAX_LENGTH	= 76;
	const int MOVIE_NAME	= 9;
	const int TITLE_COL		= 7;
	const int MOVIE_NUM		= 9;
	const int YEAR_COL		= 6;
	const int NUM_COL		= 12;
	const int RATE_COL		= 8;
	const int NAME_COL		= 18;
	const int ACTOR_NAME	= 25;
	const int GENRE_COL		= 9;


	ofstream fout;
	string outputFile;
	string moviePlot;		// OUT 		- The movie plot in the struct
	string result;			// CALC&OUT - The movie plot string that was word
							//			  wrapped
	int count;				// CALC&OUT - counts the number of movies
	movieNode *ptr;			// CALC		- The pointer pointing to each member
							//			  of the struct

	/**INTIALIZING**/
	count=0;
	ptr = head;
	outputFile = "oFile.txt";

	fout.open(outputFile);

	PrintHeader (fout , "Movie List", 'A', 3);
	while(ptr != NULL)
	{
		fout << setfill('*') << setw(MAX_LENGTH) << '*' << endl;
		fout << setfill(' ');
		fout << left << setw(MOVIE_NAME) << "MOVIE #: "
					 << setw(MOVIE_NUM)  << count+1
					 << setw(TITLE_COL)  << "Title: "   << ptr -> data.movieName
					 << endl;
		fout << setfill('-')    << setw(MAX_LENGTH) << '-' << endl;
		fout << setfill(' ');
		fout << setw(YEAR_COL)	<< "Year: "   << setw(NUM_COL)
			 << ptr-> data.year
			 << setw(RATE_COL)  << "Rating: " << ptr -> data.rating << endl;
		fout << setfill('-') << setw(MAX_LENGTH) << '-' << endl;
		fout << setfill(' ');
		fout << setw(NAME_COL) <<  "Leading Actor: " << setw(ACTOR_NAME)
			 << ptr-> data.leadActor << setw(GENRE_COL) << "Genre 1: "
			 <<	ptr-> data.genre  << endl;

		fout << setw(NAME_COL) <<  "Supporting Actor: " << setw(ACTOR_NAME)
			 << ptr-> data.supportingActor << setw(GENRE_COL) << "Genre 2: "
			 <<	ptr-> data.alternateGenre  << endl;
		fout << setfill('-') << setw(MAX_LENGTH) << '-' << endl;
		fout << setfill(' ');
		fout << "PLOT:\n";
		moviePlot = ptr -> data.synopsis;
		result	  = WordWrap(moviePlot);
		fout << result << endl;
		fout << setfill('*') << setw(MAX_LENGTH) << '*' << endl << endl << endl;
		count++;
		ptr = ptr->next;
	}
	fout.close();
}
