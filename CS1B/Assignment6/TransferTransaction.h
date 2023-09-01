/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#ifndef TRANSFERTRANSACTION_H_
#define TRANSFERTRANSACTION_H_

#include"date.h"
#include "Transaction.h"
#include<iostream>
using namespace std;

const int COL_T = 21;
const int DATE_COL1 = 10;
const int COUNT_COL = 6;
const int AMOUNT_COL = 10;
const int OTHER_ACCT_COL = 14;

class TransferTransaction: public Transaction
{
public:
	/*****************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 *****************************************************/
	TransferTransaction();
	TransferTransaction(string type,
						Date date,
						float amount,
						float balance,
						int fromAccount,
						float fromAccountBalance);
	~TransferTransaction();

	/*****************************************************
	 MUTATORS
	 *****************************************************/
	void SetFromAccount			(int account);
	void SetFromAccountBalance  (float balance);
	virtual void Print			(int account, string name);
	/******************************************************
	 ACCESSORS
	 ******************************************************/
	int GetFromAccount			() const;
	float GetFromAccountBalance () const;

private:
	int   fromAccount;
	float fromAccountBalance;
};



#endif /* TRANSFERTRANSACTION_H_ */
