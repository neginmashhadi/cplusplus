/******************************************************************************
 * AUTHOR		  : Caroline Ta	& Negin Mashhadi
 * STUDENT ID	  : 1061262		& 1084104
 * LAB #1		  : Theme Park Day Planner
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 01/24/18
 *****************************************************************************/
#ifndef LAB1_H_
#define LAB1_H_

#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<fstream>
#include<stdlib.h>
#include<time.h>
using namespace std;

/******************************************************************************
 * FUNCTION 0 - PrintHeader
 * ---------------------------------------------------------------------------
 * 		This function receives an assignment name, type and number then
 * 			 outputs the appropriate class heading.
 * 		=> Returns nothing - This will output the class heading.
 *****************************************************************************/
void PrintHeader (string asName,  // IN - Assignment Name
				  int	 asNum,   // IN - Assignment Number
				  char	 asType); // IN - Assignment type ('L' = Lab,
								  // 					   'A' = Assignment)

#endif /* LAB1_H_ */
