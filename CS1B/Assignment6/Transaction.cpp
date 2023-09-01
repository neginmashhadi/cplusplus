/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
` * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#include"Transaction.h"
/*******************************************************************************
* Transaction()
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
Transaction::Transaction()
{
	TransactionType.clear();
	TransactionAmount = 0;
	AccountBalance 	  = 0;
}
/*******************************************************************************
* Transaction(string type, Date date, float amount,float balance)
* Constructor; Initialize class attributes
* Parameters: string type, Date date, float amount,float balance
* Return: none
*******************************************************************************/
Transaction::Transaction(string type, Date date, float amount,float balance)
{
	TransactionType 	= type;
	TransactionDate 	= date;
	TransactionAmount 	= amount;
	SetAccountBalance( balance);
}
/******************************************************************************
* ~Transaction()
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
Transaction::~Transaction()
{

}
/******************************************************************************
* Transaction::GetAccountBalance() const
*
* Accessor; This method will return the account balance
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: account balance
*******************************************************************************/
float Transaction::GetAccountBalance() const
{
	return AccountBalance;
}
/******************************************************************************
* GetAccountBalance() const
*
* Accessor; This method will return the account balance
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: account balance
*******************************************************************************/
void Transaction::SetAccountBalance(float balance)
{
	AccountBalance = balance;
}
/******************************************************************************
* GetTransactionAmount() const
*
* Accessor; This method will return the transaction amount
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: transaction amount
*******************************************************************************/
float Transaction::GetTransactionAmount() const
{
	return TransactionAmount;
}
/******************************************************************************
* GetTransactionType() const
*
* Accessor; This method will return the transaction type
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: transaction type
*******************************************************************************/
string Transaction::GetTransactionType() const
{
	return TransactionType;
}
/******************************************************************************
* GetTransactionDate() const
*
* Accessor; This method will return the transaction date
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: transaction date
*******************************************************************************/
Date Transaction::GetTransactionDate() const
{
	return TransactionDate;
}
/******************************************************************************
* Print(int account, string name)
*
* mutator; This method will return print the transactions
*-------------------------------------------------------------------------------
* Parameter: int account, string name
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Transaction::Print(int account, string name)
{
	cout << setprecision(2) << fixed;
	cout <<  " " << left   << setw(TRANS_TYPE) << GetTransactionType()
		 << " "  << setw(DATE_TYPE) << GetTransactionDate().DisplayDate()
		 << "  "  << account
		 << "  "  << setw(NAME_COL) << name
		 << " $ "  << setw(TRANS_AMOUNT) <<right<< GetTransactionAmount()
		 << " " << " $ "  << setw(TRANS_AMOUNT) <<right<< GetAccountBalance();
	cout  << right << endl;
}
