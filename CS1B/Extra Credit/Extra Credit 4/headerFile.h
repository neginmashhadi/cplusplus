#ifndef HEADERFILE_H_
#define HEADERFILE_H_

//processor directive go here
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

enum DAYS{
			SUNDAY,		//0
			MONDAY,		//1
			TUESDAY,	//2
			WEDNESDAY,	//3
			THURSDAY,	//4
			FRIDAY,		//5
			SATURDAY	//6
		  };

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
/******************************************************************************
 * ConvertToDays
 * 	This function will recieve a string as a input and it will convert the
 * 	string to enum DAYS
 * 		==> returns the converted enum.
 ******************************************************************************/
 DAYS ConvertStringToDays(string fToday);	// IN - The day the user inputs
 /******************************************************************************
 * ConvertToString
 * 	This function recieves the enumerated Type days and it will conver it to
 * 	a string.
 * 		returns ==> string of the days
 ******************************************************************************/
string ConvertToString(int fDayWanted); // IN - The string of the user inputed


#endif /* HEADERFILE_H_ */
