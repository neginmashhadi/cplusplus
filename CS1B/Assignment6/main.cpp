/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#include "header.h"
/*******************************************************************************
 * Saddleback Bank
 * -----------------------------------------------------------------------------
 * 	will use object	oriented programming to	represent banking accounts and manage
 * banking activities.
 * -----------------------------------------------------------------------------
 * INPUT:
 * 		<NONE>
 * 	OUTPUT:
 * 		Will output all the transaction activites
 ******************************************************************************/
int main()
{
	ifstream inFile;			//CALC - fstream for input files
	Bank SaddlebackBank;		//CALC - the bank

	PrintHeader(cout, "Saddleback Bank", 'A', 6);
	PrintTableHeader();
	SaddlebackBank.initialize("AccoutnInputFile.txt");
	SaddlebackBank.initializeTransactions("TransactionInputFile.txt");

	return 0;
}
