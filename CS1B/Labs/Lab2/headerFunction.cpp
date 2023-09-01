/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * ASSIGNMENT#1		:	Functions and Arrays
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	1/29/2018
 * ****************************************************************************/

#include <string>
#include <iostream>
#include <iomanip>		/**setw**/
#include <fstream>		/**output**/
#include <ostream>
using namespace std;

/******************************************************************************
 * FUNCTION printHeader
 * -----------------------------------------------------------------------------
 * 	This function receives an assignment name, type and number then outputs the
 * 		appropriate class heading.
 * ==> returns nothing - this function output the class heading.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *			the following need a defined value pass in
 *			output  : The output file
 *			asName:	Assignment Name
 *			asType: Assignment Type
 *			asNum : Assignment Number
 *
 * POST-CONDITIONS
 * 		==>	Returns nothing - this function output the class heading.
 ******************************************************************************/

void PrintHeader (ostream  	&output,// IN/OUT - output file
				  string	asName,	// IN 	  - assignment Name - used for output
				  char		asType, // IN 	  - assignment Type
				   	   	   	   	   	//	      - (LAB or ASSIGN) - used for output
				  int		asNum)	// IN     - assignment Name - used for output

{
	output << left;
	output << "*************************************************************\n";
	output << "* PROGRAMMED BY : Negin Mashhadi & Travis Nguyen\n";
	output << "* "	  << setw(14) << "STUDENT ID" << ": 1084104 & 1035825\n";
	output << "* "      << setw(14) << "CLASS"      << ": CS1B - MW - 6:30pm\n";
	output << "* ";

	//PROCESSING - This will adjust setws and format appropriately based on if
	//				this is a lab 'L' or assignment

	if (toupper(asType) == 'L')
	{
		output << "LAB #" << setw(9);
	}
	else
	{
		output << "ASSIGNMENT #" << setw(2);
	}

	output << asNum << ": " << asName << endl;
	output << "*************************************************************\n\n";
	output << right<< endl;

}
