/******************************************************************************
 * AUTHOR			:	Negin Mashhadi	&	Maschal Mirzada
 * STUDENT ID		:	1084104			&	1044750
 * ASSIGNMENT#1		:	Functions and Arrays
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	2/07/2018
 * ****************************************************************************/
#include "lab3.h"

/******************************************************************************
 * FUNCTION printHeader2
 * -----------------------------------------------------------------------------
 * 	This function receives an assignment name, type and number then ostreams the
 * 		appropriate class heading.
 * 	==> returns string - The header file
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *			the following need a defined value pass in
 *			asName:	Assignment Name
 *			asType: Assignment Type
 *			asNum : Assignment Number
 *
 * POST-CONDITIONS
 * 		==> returns string - The header file
 ******************************************************************************/
string PrintHeader2 (string		asName,	//IN - assignment Name - used for ostream
	  	  	 char		asType, //IN - assignment Type
	   	   	   	   				//	 - (LAB or ASSIGN) - used for ostream
		 int		asNum)		//IN - assignment Name - used for ostream)
{
	ostringstream ostream;
	ostream << left;
	ostream << "*************************************************************\n";
	ostream << "* PROGRAMMED BY : Negin Mashhadi &	Maschal Mirzada\n";
	ostream << "* "	  << setw(14) << "STUDENT ID" << ": 1084104	 &	1044750\n";
	ostream << "* "      << setw(14) << "CLASS"      << ": CS1B - MW - 6:30pm\n";
	ostream << "* ";

	//PROCESSING - This will adjust setws and format appropriately based on if
	//				this is a lab 'L' or assignment

	if (toupper(asType) == 'L')
	{
		ostream << "LAB # " << setw(8);
	}
	else
	{
		ostream << "ASSIGNMENT #" << setw(2);
	}

	ostream << asNum << ": " << asName << endl;
	ostream << "*************************************************************\n\n";
	ostream << right<< endl;

	return ostream.str();
}
