/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#ifndef OPEN_TRANSACTION_H_
#define OPEN_TRANSACTION_H_

#include "date.h"
#include "Transaction.h"
#include <iostream>
#include <iomanip>
using namespace std;

class OpenTransaction: public Transaction
{
public:
	/*****************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 *****************************************************/
	OpenTransaction();
	OpenTransaction(string type, Date date, float amount, float balance);
	virtual ~OpenTransaction();
	/*****************************************************
	 MUTATORS
	 *****************************************************/
	virtual void Print			(int account, string name) ;
};



#endif /* OPEN_TRANSACTION_H_ */
