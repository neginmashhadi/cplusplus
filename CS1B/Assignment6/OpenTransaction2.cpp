/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
` * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#include"OpenTransaction.h"
/*******************************************************************************
* OpenTransaction()
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
OpenTransaction::OpenTransaction()
{

}
/*******************************************************************************
* OpenTransaction(string type, Date date, float amount,float balance)
* Constructor; Initialize class attributes
* Parameters: string type, Date date, float amount,float balance
* Return: none
*******************************************************************************/
OpenTransaction::OpenTransaction(string type, Date date, float amount,float balance)
:Transaction(type,date,amount,balance)
{

}
/******************************************************************************
* ~OpenTransaction()
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
OpenTransaction::~OpenTransaction()
{

}
/******************************************************************************
* Print(int account, string name)
*
* Mutator; This method will output the transactions
*-------------------------------------------------------------------------------
* Parameter: int account, //OUT - account number
* 			 string name  //OUT - name of account holder
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void OpenTransaction::Print(int account, string name)
{
	cout << setprecision(2) << fixed;
	cout << left   << setw(TRANS_TYPE)	 << GetTransactionType()
		 << "  "   << GetTransactionDate().DisplayDate()
		 << "  "   << account
		 << "  "   << setw(NAME_COL) 	 << name
		 << " $ "  << setw(TRANS_AMOUNT) <<right   << GetTransactionAmount()
		 << " "	   << " $ "  << setw(TRANS_AMOUNT) <<right << GetAccountBalance()
		 << right << endl;
}
