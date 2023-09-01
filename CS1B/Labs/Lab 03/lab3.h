#ifndef LAB3_H_
#define LAB3_H_

//processor directive go here
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <math.h>
using namespace std;


//GLOBAL CONSTANTS

//PROTOTYPES

/******************************************************************************
* PrintHeader
* 		This function receives an assignment name, type and number then outputs
* 	the appropriate header
*	 ==> returns nothing - This will output the class heading.
*******************************************************************************/
 void PrintHeader (ostream  &output,// IN/OUT - output file
				  string	asName,	//IN - assignment Name - used for output
				  char		asType, //IN - assignment Type
				   	   	   	   	   	//	 - (LAB or ASSIGN) - used for output
				  int		asNum);	//IN - assignment Name - used for output

 /******************************************************************************
 * PrintHeader2
 * 		This function receives an assignment name, type and number then outputs
 * 	the appropriate header
 *	 ==> returns string - The header file
 *******************************************************************************/
string PrintHeader2 (string		asName,	//IN - assignment Name - used for output
		  	  	  	 char		asType, //IN - assignment Type
		   	   	   	   	   				//	 - (LAB or ASSIGN) - used for output
					 int		asNum);	//IN - assignment Name - used for output);
/*******************************************************************************
 * inputFunction
 * 		This function will prompt the user to enter two numbers that the user
 * 	wants to find their gratest divisor
 * 		==> returns nothing - will pass the numbers entered by refrence
 ******************************************************************************/
void inputFunction(int &fNum1,		// IN - The first integer
				   int &fNum2);		// IN - The second integer
/*******************************************************************************
 * GCD
 * 		This function will take in the two numbers entered by the user and using
 * 	the Euclidean Algorithm it will calculate the Greatest common divisor
 * 		==> returns the greates divisor
 ******************************************************************************/
int GCD(int fNum1,					// IN - The first integer user entered
		int fNum2);					// IN - The second integer user entered
/*******************************************************************************
 * OutputFunction
 * 		This function will take in the numbers entered by user and their gratest
 * 	divisor and it will output a sentence to the filr which states the two
 * 	numbers and their gratest divisor.
 ******************************************************************************/
void OutputFunction(ofstream &fout,		// IN  - The outoput file variable
					int		fNum1,		// IN  - The first integer user entered
					int 	fNum2,		// IN  - The second integer user entered
					int 	fDivisor);	// CALC- The greatest common divisor


#endif /* LAB3_H_ */
