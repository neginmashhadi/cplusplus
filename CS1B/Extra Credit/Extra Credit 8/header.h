/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * EXTRA CREDIT		: 	Date Class
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_


#include <iostream>
#include <iomanip>
#include <ostream>
#include "date.h"
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


#endif /* HEADER_H_ */
