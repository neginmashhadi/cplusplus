#ifndef LAB2HEADERFILE_H_
#define LAB2HEADERFILE_H_

#include <ostream>
#include <iostream>
#include <iomanip>
#include <string>
#include<stdlib.h>
#include<time.h>
using namespace std;

/******************************************************************************
* PrintHeader
* 	This function receives an assignment name, type and number then outputs
* 	the appropriate header
*	 ==> returns nothing - This will output the class heading.
*******************************************************************************/
void PrintHeader (ostream  	&output,// IN/OUT - output file
				  string	asName,	// IN 	  - assignment Name - used for output
				  char		asType, // IN 	  - assignment Type
				   	   	   	   	   	//	      - (LAB or ASSIGN) - used for output
				  int		asNum);	// IN     - assignment Name - used for output

/******************************************************************************
 * getInput
 * 		This function will ask the use to input their information (their name
 * 	and gender). If the user is male The program will refre to them as mister
 * 	and if the use is female the program will refer to them as miss.
 * 		==> returns nothing
 ******************************************************************************/
void GetInput();
/*******************************************************************************
 * CoinFlip
 * 		This function will flip a coin and randomly choose between head or
 * 	tails. Every time the user enters enter on the keyboard the function will
 * 	flip the coin
 * 		==> return a bool(if heads true, if tails false)
 ******************************************************************************/
bool CoinFlip();
/*******************************************************************************
 * 	CoinAvg
 * 		This function will calculate the average amount of times a head has been
 *	shown when the coin was flipped.
 *		==> returns the average number of heads
 ******************************************************************************/
float CoinAvg(int fTotalFlips,		// IN - The total number of flips
			int   fTotalHeads);		// IN - The total number of heads
/*******************************************************************************
 * 	PrintOutput
 * 		This will output the number of tosses of heads and average number of
 * 	heads.
 *		==> returns nothing
 ******************************************************************************/
void PrintOutput(float fAvg,			// IN - The average number of heads
				 int fTotalFlips);		// IN - The total number of flips
#endif /* LAB2HEADERFILE_H_ */
