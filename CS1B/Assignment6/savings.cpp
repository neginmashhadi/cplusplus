/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
` * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#include"savings.h"
/*******************************************************************************
* Savings()
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
Savings::Savings()
{
	interestRate = 0;
}
/*******************************************************************************
* Savings(Date openingDate, string name, int accountNum, float balance,
* 		 float intRate)
* Constructor; Initialize class attributes
* Parameters: Date openingDate, string name, int accountNum, float balance
* Return: none
*******************************************************************************/
Savings::Savings(Date openingDate, string name, int accountNum,float balance,
				float intRate)
:Account(openingDate, name, accountNum, balance)
{
	SetInterestRate(intRate);
}
/******************************************************************************
* ~Savings();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
Savings::~Savings()
{

}
/******************************************************************************
* SetAllValues(Date openingDate, string name, int accountNum,
*						  float balance, float intRate)
*
*
* Mutator; This method will set all of the values
*-------------------------------------------------------------------------------
* Parameter: Date openingDate, string name, int accountNum,
			 float balance, float intRate
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Savings::SetAllValues(Date openingDate, string name, int accountNum,
						  float balance, float intRate)
{
	Account::SetAllValues(openingDate, name, accountNum, balance);
	SetInterestRate(intRate);
}
/******************************************************************************
* AddOpenTransaction()
*
* Mutator; This method will set all of the values
*-------------------------------------------------------------------------------
* Parameter: Date openingDate, string name, int accountNum,
			 float balance, float intRate
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Savings::AddOpenTransaction()
{
	Account::AddOpenTransaction("Open Savings");
}
/******************************************************************************
* SetInterestRate(float intRate)
*
* Mutator; This method will set all of the values
*-------------------------------------------------------------------------------
* Parameter: float intRate
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Savings::SetInterestRate(float intRate)
{
	interestRate = intRate;
}
/******************************************************************************
* GetInterestRate() const
*
* Accessor; This method will set all of the values
*-------------------------------------------------------------------------------
* Parameter: float intRate
*-------------------------------------------------------------------------------
* Return: the interest rate
*******************************************************************************/
float Savings::GetInterestRate() const
{
	return interestRate;
}
/******************************************************************************
* Withdrawal(Date today, float amount)
*
* Mutator; This method will check if withdraw is valid if so it will return it
*-------------------------------------------------------------------------------
* Parameter: Date today, float amount
*-------------------------------------------------------------------------------
* Return: the valid withdraw
*******************************************************************************/
bool Savings::Withdrawal(Date today, float amount)
{
	bool validWithdraw;
	validWithdraw = Account::Withdrawal(today, amount);
	return validWithdraw ;
}
/******************************************************************************
* UpdateAcct(Date today)
*
* Mutator; This method update the account access date
*-------------------------------------------------------------------------------
* Parameter: Date today
*-------------------------------------------------------------------------------
* Return: nothing
*******************************************************************************/
void Savings::UpdateAcct(Date today)
{
	int   diffMonth;
	Date  lastDate;
	float balance;
	float interest;
	int   monthCount;

	lastDate = GetLastTransDate();
	diffMonth = ((today.GetYear() *12) + today.GetMonth())
		- ((lastDate.GetYear() *12) + lastDate.GetMonth());

	balance = GetBalance() ;
	if ( balance > 0 )
	{
		for (monthCount = 1; monthCount<= diffMonth;monthCount++)
		{
			balance += balance * GetInterestRate();
		}
	}

	interest = balance - GetBalance();
	SetLastTransDate( today);
	SetValue(GetBalance() + interest);
}
