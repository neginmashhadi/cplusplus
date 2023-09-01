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
 * GetInput
 *	Will read the input from the given input file given by the user.
 * returns the pointer of the information read in.
 *  	returns the pointer
 * -----------------------------------------------------------------------------
 * PRE-CONDITION
 * 					inFile : The output file variable
 * POST-CONDITION
 * 					ptr    : The pointer pointing to the data
 ******************************************************************************/
movieNode *GetInput(ifstream &inFile) //IN - The output file variable
 {
	movieNode *ptr;		// CALC - The pointer

	ptr = new movieNode();
	getline(inFile, ptr-> data.movieName);
	getline(inFile, ptr-> data.leadActor);
	getline(inFile, ptr-> data.supportingActor);
	getline(inFile, ptr-> data.genre);
	getline(inFile, ptr-> data.alternateGenre);
	inFile >>ptr-> data.year;
	inFile >> ptr-> data.rating;
	inFile.ignore(100000,'\n');
	getline(inFile, ptr-> data.synopsis);
	inFile.ignore(100000,'\n');
	ptr -> next = NULL;

	return ptr;
 }
