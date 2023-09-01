#ifndef LAB7HEADER_H_
#define LAB7HEADER_H_


#include <iostream>
#include <iomanip>
#include <limits>
#include <ios>
using namespace std;


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


#endif /* LAB7HEADER_H_ */
