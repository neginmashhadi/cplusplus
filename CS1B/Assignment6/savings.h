/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
` * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#ifndef SAVINGS_H_
#define SAVINGS_H_

#include<iostream>
#include<iomanip>
#include<string>
#include"account.h"
using namespace std;

class Savings: public Account
{
public:
	/*****************************************************
	 CONSTRUCTORS & DESTRUCTOR
	 *****************************************************/
	Savings();
	Savings(Date openingDate, string name, int accountNum, float balance,
	 float intRate);
	virtual ~Savings();
	/*****************************************************
	 MUTATORS
	 *****************************************************/
	void SetAllValues(Date openingDate, string name, int accountNum, float balance,
					 float intRate);
	void SetInterestRate(float intRate);
	virtual bool Withdrawal(Date today, float amount);
	virtual void UpdateAcct(Date today);
	virtual void AddOpenTransaction();

	/******************************************************
	 ACCESSORS
	 ******************************************************/
	float GetInterestRate() const;
protected:
	float interestRate;
};


#endif /* SAVINGS_H_ */
