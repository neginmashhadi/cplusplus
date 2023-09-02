/******************************************************************************
 * AUTHOR			:	Negin Mashhadi & Oscar Lopez
 * STUDENT ID		:	1084104 & 1079497
 * EXTRA CREDIT		: 	Functions and Arrays
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	02/12/2018
 * ****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <ostream>
#include <limits>
#include <ios>
using namespace std;

/******************************************************************************
 * PrintHeaderToFile
 * This function receives an output file stream variable, an assignment name,
 * 		type and number then outputs the appropriate header to output file
 * 		==> returns nothing - This will output the class heading to output file.
 ******************************************************************************/
void PrintHeader (ostream  	&output, // IN/OUT - output file
				  string	asName,	// IN 	  - assignment Name - used for output
				  char		asType, // IN 	  - assignment Type
				   	   	   	   	   	//	      - (LAB or ASSIGN) - used for output
				  int		asNum);	// IN     - assignment Name - used for output

/******************************************************************************
 * Gcd
 *	This function receives two integers and will find the common divisor between
 * 	the two numbers.
 * 		==> returns the greatest common divisor of the two numbers
 ******************************************************************************/
int Gcd (int num1, 	//IN - The number entered by the user
		 int num2); //IN - The number entered by the user

#endif /* HEADER_H_ */
