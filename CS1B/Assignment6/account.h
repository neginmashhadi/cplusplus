/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include<iostream>
#include<iomanip>
#include<string>
#include"date.h"
#include"LinkedList.h"
#include"Transaction.h"
#include"OpenTransaction.h"
#include"TransferTransaction.h"
using namespace std;

const int TRANS_COL = 15;
const int DATE_COL  = 10;

class Account
{
public:
	/*****************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 *****************************************************/
	Account();
	Account(Date openingDate, string name, int accountNum, float balance);
	virtual ~Account();

	/*****************************************************
	 MUTATORS
	 *****************************************************/
	void SetAllValues(Date openingDate, string name, int accountNum, float balance);
	void SetValue(string name);
	void SetValue(int accountNum);
	void SetValue(float balance);
	void SetValue(Date openingDate);

	/*********************************************************************
	 * Deposit
	 * -------------------------------------------------------------------
	 * Adds the amount into the account
	 **********************************************************************/
	virtual void Deposit(Date today, float amount);
	virtual void AddOpenTransaction(string transactionType);
	virtual void AddOpenTransaction();

	/*********************************************************************
	 * Withdrawal
	 * ------------------------------------------------------------------
	 * Deducts amount from account unless there are insufficient funds
	 * - returns FALSE if withdrawal can't be perform
	 *********************************************************************/
	virtual bool Withdrawal(Date today, float amount);

	/*********************************************************************
	 * TransferFunds
	 * ------------------------------------------------------------------
	 * Transfers amount from the transferAcct to this account
	 * (Withdrawal from transferAcct - Deposit to this Acct
	 * - returns FALSE if the transfer can't be performed
	 * either due to invalid account options or insuffcient
	 * funds in the transferAcct
	 * - returns TRUE if transfer is completed
	 *********************************************************************/
	virtual bool TransferFunds(Date today, Account *transferAcct, float amount);

	/*********************************************************************
	 * Update Acct -
	 * ------------------------------------------------------------------
	 * Updates interest and overdraft charges
	 * based on the difference in months between the
	 * lastAccessDate and today
	 * This should be called with each transaction
	 ********************************************************************/
	virtual void UpdateAcct(Date today);
	void SetLastTransDate  (Date date) ;
	void AddTransaction    (Transaction *transaction);
	void AddTransaction	   (string type,Date today,float amount, float balance);
	virtual void Print	   ();
	LinkedListType<Transaction> transactionList;
	virtual void PrintTransaction(Transaction *transaction);

	/******************************************************
	 ACCESSORS
	 ******************************************************/
	Date GetOpenDate 	 () const;
	string GetName	 	 () const;
	int GetAcctNum	 	 () const;
	float GetBalance 	 () const;
	Date GetLastTransDate() const;


protected:
	string clientName;
	int acctNumber;
	float currentBalance;
	Date openDate;
	Date lastAccessDate;
};


#endif /* ACCOUNT_H_ */
