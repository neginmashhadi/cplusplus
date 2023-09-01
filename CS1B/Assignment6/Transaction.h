/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include"date.h"
#include<iostream>
#include<iomanip>
using namespace std;

const int TRANS_TYPE   = 20;
const int DATE_TYPE    = 10 ;
const int NAME_COL	   = 22;
const int TRANS_AMOUNT = 8;
class Transaction
{
public:
	/*****************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 *****************************************************/
	Transaction();
	Transaction(string type, Date date, float amount, float balance);
	virtual ~Transaction();

	/*****************************************************
	 MUTATORS
	 *****************************************************/
	void SetAccountBalance		(float balance);
	virtual void Print			(int account, string name) ;

	/******************************************************
	 ACCESSORS
	 ******************************************************/
	string GetTransactionType	() const;
	Date GetTransactionDate	 	() const;
	float GetTransactionAmount	() const;
	float GetAccountBalance		() const;

private:
	string TransactionType;
	Date TransactionDate;
	float TransactionAmount;
	float AccountBalance;
};



#endif /* TRANSACTION_H_ */
