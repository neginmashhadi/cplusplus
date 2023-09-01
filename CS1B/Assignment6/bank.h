/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#ifndef BANK_H_
#define BANK_H_

#include<iostream>
#include<iomanip>
#include <fstream>
#include<string>
#include"account.h"
#include "checking.h"
#include"LinkedList.h"
#include "savings.h"
#include "moneyMarket.h"
#include "opentransaction.h"
using namespace std;

const int OVER_DRAFT_FEE = 20;
const float INTEREST_RATE = 0.1;
const float MM_INTEREST_RATE = 0.2;
class Bank
{
public:
	/*****************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 *****************************************************/
	Bank();
	~Bank();

	/*****************************************************
	 MUTATORS
	 *****************************************************/
	void OpenAccount(Account *newAcct);
	bool Deposit(Date transDate, int acctNum, float amount);
	bool Withdrawal(Date transDate, int acctNum, float amount);
	bool Transfer(Date transDate, int acctNum, float amount, int transFromAcctNum);

	/******************************************************
	 ACCESSORS
	 ******************************************************/
	void initialize(string fileName);
	void initializeTransactions(string fileName);

protected:
	// Returns a pointer to an account
	Account *FindAccountPtr(int acctNum);


private:
		LinkedListType<Account> accountList;
		Account *GetAccount(ifstream &inFile);
		void GetTrans(ifstream &inFile);
};

#endif /* BANK_H_ */
