#ifndef HEADERFILE_H_
#define HEADERFILE_H_

//processor directive go here
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;


//GLOBAL CONSTANTS

//PROTOTYPES

/******************************************************************************
* PrintHeader
* 	This function receives an assignment name, type and number then outputs
* 	the appropriate header
*	 ==> returns nothing - This will output the class heading.
*******************************************************************************/
 void PrintHeader (ostream &output,	// IN/OUT - output file
				  string	asName,	//IN - assignment Name - used for output
				  char		asType, //IN - assignment Type
				   	   	   	   	   	//	 - (LAB or ASSIGN) - used for output
				  int		asNum);	//IN - assignment Name - used for output








#endif /* HEADERFILE_H_ */
