/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#include"TransferTransaction.h"
/*******************************************************************************
* TransferTransaction()
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
TransferTransaction::TransferTransaction()
{
	fromAccountBalance = 0;
	fromAccount 	   = 0;
}
/*******************************************************************************
* TransferTransaction(string type, Date date, float amount,
*					  float balance, int fromAccount, float fromAccountBalance)
*
* Constructor; Initialize class attributes
* Parameters: Date openingDate, string name, int accountNum, float balance
* Return: none
*******************************************************************************/
TransferTransaction::TransferTransaction(string type, Date date, float amount,
										float balance, int fromAccount,
										float fromAccountBalance)
:Transaction(type,date,amount,balance)
{
	SetFromAccount(fromAccount);
	SetFromAccountBalance(fromAccountBalance);
}
/******************************************************************************
* ~Account();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
TransferTransaction::~TransferTransaction()
{

}
/******************************************************************************
* SetFromAccount(int account)
*
* Mutator; This method will set the account number
*-------------------------------------------------------------------------------
* Parameter: int account // the account number
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void TransferTransaction::SetFromAccount(int account)
{
	fromAccount  = account;
}
/******************************************************************************
* GetFromAccount() const
*
* Accessor; This method will return the account number
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: the account number
*******************************************************************************/
int TransferTransaction::GetFromAccount() const
{
	return fromAccount;
}
/******************************************************************************
* SetFromAccountBalance(float balance)
*
* Mutator; This method will set the balance account
*-------------------------------------------------------------------------------
* Parameter: float balance // the account number
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void TransferTransaction::SetFromAccountBalance(float balance)
{
	fromAccountBalance = balance;
}
/******************************************************************************
* GetFromAccountBalance() const
*
* Accessor; This method will return the second account number
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: the second account number
*******************************************************************************/
float TransferTransaction::GetFromAccountBalance() const
{
	return fromAccountBalance;
}
/******************************************************************************
* Print(int account, string name)
*
* Mutator; This method will set the balance account
*-------------------------------------------------------------------------------
* Parameter: float balance // the account number
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void TransferTransaction::Print(int account, string name)
{
	cout << setprecision(2) << fixed;
	cout <<  " " << left << setw(COL_T) 	 	 << GetTransactionType()
						 << setw(DATE_COL1) 	 << GetTransactionDate().DisplayDate()
		 << "  " 		 << setw(COUNT_COL)  	 << account
		 	 	 	 	 << setw(NAME_COL)  	 << name
		 << " $" 		 << setw(AMOUNT_COL-1)   <<right<< GetTransactionAmount()
		 << "  $" 		 << setw(AMOUNT_COL-1)   << GetAccountBalance()
		 << " " 		 << setw(OTHER_ACCT_COL) << GetFromAccount()
		 << "     $" 	 << setw(AMOUNT_COL)     << GetFromAccountBalance()
		 << right 		 << endl;
}
