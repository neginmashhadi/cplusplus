/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * EXTRA CREDIT		: 	Date Class
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#ifndef MONEYMARKET_H_
#define MONEYMARKET_H_

#include<iostream>
#include<iomanip>
#include<string>
#include "account.h"
#include"savings.h"
#include "date.h"

using namespace std;

const float WITHDRAW_COST = 1.5;

class MoneyMarket: public Savings
{
public:
	/*****************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 *****************************************************/
	MoneyMarket();
	MoneyMarket(Date openingDate, string name, int accountNum, float balance,
	 float intRate, float withdrPenalty);
	virtual ~MoneyMarket();
	/*****************************************************
	 MUTATORS
	 *****************************************************/
	void SetAllValues(Date openingDate, string name, int accountNum, float balance,
	 float intRate, float withdrPenalty);
	void SetWithdrawalPenalty(float withdrPenalty);
	virtual bool Withdrawal(Date today, float amount);
	virtual bool TransferFunds(Date today, Account *transferAcct, float amount);
	virtual void AddOpenTransaction();

	/******************************************************
	 ACCESSORS
	 ******************************************************/
	float GetWithdrawalPenalty() const;
protected:
	float withDrawalPenalty;
};



#endif /* MONEYMARKET_H_ */
