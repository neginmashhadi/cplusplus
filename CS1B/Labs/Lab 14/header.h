/******************************************************************************
 * LAB #14			:	Arrays & Linked Lists of Sheep
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <ostream>
#include <string>
#include <ios>
#include <limits>
#include "sheep.h"
#include "sheepList.h"
#include "sheepAr.h"
using namespace std;


const string MENU = "SHEEP LIST MANAGER\n"
					"1 - Add Sheep\n"
					"2 - Outout 1st Sheep\n"
					"3 - Find Sheep\n"
					"4 - List Size\n"
					"5 - Output List\n"
					"6 - Clear List\n"
					"0 - Exit\n"
					"Enter a command: ";

enum MenuOption
{
	EXIT,			// 0
	ADD,			// 1
	FRONT,			// 2
	FIND,			// 3
	SIZE,			// 4
	OUTPUTLIST,		// 5
	CLEAR,			//6
};


/******************************************************************************
* PrintHeader
* 	This function receives an assignment name, type and number then outputs
* 	the appropriate header
*	 ==> returns nothing - This will output the class heading.
*******************************************************************************/
void PrintHeader (ostream  &output,	// IN/OUT - output file
				  string	asName,	// IN 	  - assignment Name - used for output
				  char		asType, // IN 	  - assignment Type
				   	   	   	   	   	//	      - (LAB or ASSIGN) - used for output
				  int		asNum);	// IN     - assignment Name - used for output

/*******************************************************************************
 * GetAndCheckInput
 * 	This function will validate the users input and will check if the input is
 * 	correct
 * 		==> returns the input
 ******************************************************************************/
 int GetAndCheckInput();

#endif /* HEADER_H_ */
