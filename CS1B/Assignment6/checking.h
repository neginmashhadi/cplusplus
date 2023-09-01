/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#ifndef CHECKING_H_
#define CHECKING_H_

#include<iostream>
#include<iomanip>
#include<string>
#include"account.h"
using namespace std;

const int MAX_OVER_DRAFT = 200;

class Checking: public Account
{
public:
	/*****************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 *****************************************************/
	Checking();
	Checking(Date openingDate, string name, int accountNum, float balance,
	 float overDraftFee);
	virtual ~Checking();
	/*****************************************************
	 MUTATORS
	 *****************************************************/
	void SetAllValues(Date openingDate, string name, int accountNum, float balance,
					  float overdraftFee);
	void SetOverdraftFee(float overdraftFee);
	virtual bool Withdrawal(Date today, float amount);
	virtual void UpdateAcct(Date today);
	virtual void AddOpenTransaction();
	virtual bool TransferFunds(Date today, Account *transferAcct, float amount);

	/******************************************************
	 ACCESSORS
	 ******************************************************/
	float GetOverdraftFee() const;
protected:
	float overDraftPenalty;
};
#endif /* CHECKING_H_ */
