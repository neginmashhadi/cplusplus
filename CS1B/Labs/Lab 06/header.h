#ifndef HEADER_H_
#define HEADER_H_

//processor directive go here
#include <iostream>
#include <iomanip>		/**setw**/
#include <string>		/**Strings**/
#include <fstream>		/**fout**/
#include <ostream>		/**cout or fout**/
#include <limits>
#include <ios>
using namespace std;


//GLOBAL CONSTANTS

struct information
	{
		string name;
		int	   ids;
		double balance;
	};

//PROTOTYPES

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


/******************************************************************************
* InputFunctin
* 	This function will receive an input file and read 3 sets of data from
* the file into an array of structs with members of name, Id and the balance.
* 	 ==> returns nothing - This will read data from input file.
*******************************************************************************/
 void InputFunctin ( string finFileName,			// IN - input file name
		 	 	 	 information peoplesInfoAr[],	// IN - The struct array
					const int AR_SIZE);				// IN - the size of the
 	 	 	 	 	 	 	 	 	 	 	 	 	//		array

/******************************************************************************
 * SearchBalance Function
 * 		This function will search for the largest or smallest balance in the
 * 	array of balances based on the user input. it will then return the index
 * 	of the desired balance of the user.
 * 		*==> returns the index of the largest or smallest number
 ******************************************************************************/
 int SearchBalance (information peoplesInfoAr[],	// IN - The struct array
					const int AR_SIZE);				// IN - The array size

/*******************************************************************************
 * SumAndAverage Function
 * 		This function will calculate the sum and average of all the balances in
 * 	 balance array based on the option the user chooses
 * 	*==> returns either the sum of all the balances or average
 ******************************************************************************/
 double SumFunction (information peoplesInfoAr[],	// IN - The struct array
					  const int AR_SIZE);  			// IN - The array size

/******************************************************************************
 * 	SearchName
 * 		This function will prompt the user to enter the name of the person they
 * 	 are looking for. The function will search search for the name through the
 * 	 name array.
 * 	 *==> returns the index of the name in the nameAr.
 ******************************************************************************/
 int SearchName( string searchName,					// IN - The name being
		 	 	 	 	 	 	 	 	 	 	 	//	    seached
		  	 	 information peoplesInfoAr[],		// IN - The struct array
		 	 	 const int AR_SIZE);				// IN - The array size
/*******************************************************************************
 * 	PrintOptions
 *		This function Will output the results of users search in to the output
 *	file. It will specifically output the results for find largest balance,
 *	smallest balance, and person.
 *			==> returns nothing - This will output the results.
 ******************************************************************************/
void PrintOptions(ofstream  &fout,				// IN/OUT - output file
				  information peoplesInfoAr[],	// IN	  - The struct array
				  int 	 index);				// CALC	  - The index of the
												//			array
/*******************************************************************************
 * 	PrintOptions
 *		This function Will output the results of users search in to the output
 *	file. It will specifically output the results for sum and average.
 *			==> returns nothing - This will output the results.
 ******************************************************************************/
void PrintSum (ofstream  &fout,			// IN/OUT - output file
			   double 	  fBalance,		// CALC	  - The sum or average
			   const string prompt);	// OUT	  - The prompt for output




#endif /* HEADER_H_ */
