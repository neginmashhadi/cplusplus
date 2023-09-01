/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <ostream>
#include <string>
#include <limits>
#include <ios>
#include <chrono>
#include <ctime>
#include <cstdlib>
#include <fstream>
#include "account.h"
#include "checking.h"
#include "savings.h"
#include "date.h"
#include "LinkedList.h"
#include "Transaction.h"
#include "moneyMarket.h"
#include "bank.h"
using namespace std;
using namespace std::chrono;

/******************************************************************************
 * PrintHeader
 *	Outputs the header of the fucntion
 *		==> returns nothing
 ******************************************************************************/
void PrintHeader (ostream  	&output, // IN/OUT - output file
				  string	asName,	// IN 	  - assignment Name - used for output
				  char		asType, // IN 	  - assignment Type
				   	   	   	   	   	//	      - (LAB or ASSIGN) - used for output
				  int		asNum);	// IN     - assignment Name - used for output

/******************************************************************************
 * PrintHeader
 *	Outputs the header table of the transactions
 *		==> returns nothing
 ******************************************************************************/
void PrintTableHeader();

#endif /* HEADER_H_ */
