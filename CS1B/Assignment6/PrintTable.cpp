/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#include "header.h"
/*****************************************************************************
 * FUNCTION printHeader
 * -----------------------------------------------------------------------------
 * 	This function will output the transaction header table
 * ==> returns nothing - this function output the class heading.
 * -----------------------------------------------------------------------------
 * PRE-CONDITIONS
 *			<NONE>
 *
 * POST-CONDITIONS
 * 		==>	Returns nothing - will output the transaction header table
 ******************************************************************************/
void PrintTableHeader()
{
	cout <<  left 	<< setw(COL_T) 			<< "TRANSACTION"
		 << " "   	<< setw(DATE_COL1) 		<< "DATE"
		 << "  " 	<< setw(COUNT_COL) 		<< "ACCT #"
		 << " "   	<< setw(NAME_COL)	 	<< "ACCT NAME"
		 	 	  	<< setw(AMOUNT_COL)  	<< right<< "AMOUNT"
		 << "  "  	<< setw(AMOUNT_COL) 	<< right<< "BALANCE"
		 << " "    	<< setw(OTHER_ACCT_COL) << "FROM ACCT#"
		 << "     " << setw(OTHER_ACCT_COL) << "FROM ACCT BAL"
		 << right   << endl;
	cout <<  left 	<< setw(COL_T) 		 	<< "-----------"
		<< " " 	    << setw(DATE_COL1)   	<< "----------"
		<< "  " 	<< setw(COUNT_COL) 	 	<< "------"
		<< " " 		<< setw(NAME_COL) 	 	<< "--------------------"
					<< setw(AMOUNT_COL) 	<< right<< "----------"
		<< "  " 	<< setw(AMOUNT_COL)     << right<< "----------"
		<< " " 		<< setw(OTHER_ACCT_COL) << "----------"
		<< "     " 	<< setw(OTHER_ACCT_COL) << "-------------"
		<< right 	<< endl;
}



