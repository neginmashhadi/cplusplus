/******************************************************************************
 * LAB #15		  : Inheritance, overloading, & redifining
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 05/14/18
 *****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include<ostream>
#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<fstream>
#include<stdlib.h>
#include<time.h>
#include<limits>
#include<ios>
#include"pig.h"
#include"animal.h"
#include"Sheep.h"
#include"SheepLinkedList.h"
#include"PigLinkedList.h"
using namespace std;

const string MENU = "\n1 - Intialize Animals\n"
					"0 - EXIT\n"
					"Enter a selection: ";

const string INTIALMENU = "\n1 - Re-Initialize Sheep\n"
						  "2 - Re-Initialize Pigs\n"
						  "3 - Change Age\n"
						  "4 - Display\n"
						  "0 - Exit\n"
						  "Enter a selection: ";

enum OPTION
{
	EXIT,
	INTIALIZESHEEP,
	INTIALIZEPIG,
	CHANGEAGE,
	DISPLAY,
};


/******************************************************************************
 * FUNCTION 0 - PrintHeader
 * ---------------------------------------------------------------------------
 * 		This function receives an assignment name, type and number then
 * 			 outputs the appropriate class heading.
 * 		=> Returns nothing - This will output the class heading.
 *****************************************************************************/
void PrintHeader (ostream  &output,	// IN/OUT - output file
				  string	asName,	// IN 	  - assignment Name - used for output
				  char		asType, // IN 	  - assignment Type
				   	   	   	   	   	//	      - (LAB or ASSIGN) - used for output
				  int		asNum);	// IN     - assignment Name - used for output

/******************************************************************************
 * GetAndCheckInput
 * ---------------------------------------------------------------------------
 * 		This function will output the intial menu and will ask the user to
 * 		enter an option. Then it will check the option of the user
 * 			==> returns the option
 *****************************************************************************/
int GetAndCheckInput();

/******************************************************************************
 * GetAndCheckIntialInput
 * ---------------------------------------------------------------------------
 * 		This function will validate the user input
 * 			==> returns the option
 *****************************************************************************/
int GetAndCheckIntialInput();

/*******************************************************************************
 * GetSheep
 * This function will read the data of a sheep from the input file and will
 * set the data
 * 		==> returns the sheep
 ******************************************************************************/
Sheep GetSheep(ifstream &inFile);

/*******************************************************************************
 * GetPig
 * This function will read the data of a pig from the input file and will
 * set the data
 * 		==> returns the sheep
 ******************************************************************************/
Pig GetPig(ifstream &inFile);

/*******************************************************************************
 * IntializeSheep
 * This function will intialize all the sheeps
 * 		==> returns nothing
 ******************************************************************************/
SheepLinkedList IntializeSheep();

/*******************************************************************************
 * IntializePig
 * This function will intialize all the pigs
 * 		==> returns nothing
 ******************************************************************************/
PigLinkedList IntializePig();

/*******************************************************************************
 * ChangeAge
 * This function will ask the user whose age they want to change and will
 * change the age of that animal.
 * 		==> returns nothing
 ******************************************************************************/
void ChangeAge();

#endif /* HEADER_H_ */
