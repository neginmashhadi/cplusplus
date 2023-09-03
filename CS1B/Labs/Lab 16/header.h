/******************************************************************************
 * Lab 16		 	: 	Polymorphism
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/01/2018
 * ****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <ostream>
#include <string>
#include <limits>
#include <ios>
#include <chrono>
#include <ctime>
#include <cstdlib>
using namespace std;
using namespace std::chrono;

enum MenuOptions
{
	EXIT,	//0
	ADD,	//1
	REMOVE, //2
	FIRST,	//3
	FIND,	//4
	SIZE,   //5
	DISPLAY,//6
	CLEAR,  //7
};


const string MENU = "1 - Add Animal\n"
					"2 - Remove Animal\n"
					"3 - Output 1st Animal\n"
					"4 - Find Animal\n"
					"5 - List Size\n"
					"6 - Display Table\n"
					"7 - Clear List\n"
					"0 - EXIT\n"
					"Enter a commmand : ";



/******************************************************************************
 * PrintHeader
 *	Outputs the header of the fucntion
 *		==> returnsn nothing
 ******************************************************************************/
void PrintHeader (ostream  	&output, // IN/OUT - output file
				  string	asName,	// IN 	  - assignment Name - used for output
				  char		asType, // IN 	  - assignment Type
				   	   	   	   	   	//	      - (LAB or ASSIGN) - used for output
				  int		asNum);	// IN     - assignment Name - used for output

/******************************************************************************
 * GetAndCheckInput
 * This function gets input and checks if the input is valid. If the input is
 * 	invalid, a error message will output
 * 		==> returns the input
 ******************************************************************************/
int GetAndCheckInput();

#endif /* HEADER_H_ */
