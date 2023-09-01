#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <fstream>
#include <ios>
#include <limits>
#include <string>
#include <ostream>
using namespace std;

struct movie
{
	string movieName;
	string leadActor;
	string supportingActor;
	string genre;
	string alternateGenre;
	int	   year;
	int    rating;
	string synopsis;
};

struct movieNode {
	movie data;
	movieNode *next;
};


/******************************************************************************
* PrintHeader
* 	This function receives an assignment name, type and number then outputs
* 	the appropriate header
*	 ==> returns nothing - This will output the class heading.
*******************************************************************************/
 void PrintHeader (ostream  &output,// IN/OUT - output file
				  string	asName,	//IN - assignment Name - used for output
				  char		asType, //IN - assignment Type
				   	   	   	   	   	//	 - (LAB or ASSIGN) - used for output
				  int		asNum);	//IN - assignment Name - used for output
/*******************************************************************************
 * 	GetInput
 * 		Will read the input from the given input file given by the user.
 * returns the pointer of the information read in.
 *  	returns the pointer
 ******************************************************************************/
movieNode *GetInput(ifstream &inFile);//IN - The output file variable
/*******************************************************************************
 * 	LinkedList
 * 		This function will recieve the name of the input file and will create a
 * 	linked list based on the information that are in the file.
 * 		returns to the head of the linked list.
 ******************************************************************************/
movieNode *LinkedList(string inputFile);
/*******************************************************************************
 * WordWrap
 * 		This function will recieve a string and if the string is greater than
 * 	the max size it will wrapp the string and displaye it in 2 or more lines
 * 		==> returns the new string that has been wrapped
 ******************************************************************************/
string WordWrap(string plot);
/*******************************************************************************
 * SortingFunction
 * 		This function will recieve the head of a linked list and it will sort
 * 	the list alphebetically.
 * 	 ==> returns the head of the sorted linked list
 ******************************************************************************/
movieNode *SortingFunction(movieNode *head);
/******************************************************************************
 * Output
 * 		This is function will output the information about each movie
 * 		==> returns nothing - This will output the class heading.
 ******************************************************************************/
void Output(movieNode *header);

#endif /* HEADER_H_ */
