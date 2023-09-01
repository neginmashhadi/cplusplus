/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
` * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#include"bank.h"
#include "TransferTransaction.h"
/*******************************************************************************
* Bank()
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
Bank::Bank()
{

}
/******************************************************************************
* ~Bank();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
Bank::~Bank()
{
}
/******************************************************************************
* OpenAccount(Account *newAcct)
*
* Mutator; This method will open a new bank account
*-------------------------------------------------------------------------------
* Parameter:
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Bank::OpenAccount(Account *newAcct)
{
	accountList.Add(newAcct);
	newAcct->AddOpenTransaction();
}
/******************************************************************************
* Deposit(Date transDate, int acctNum, float amount)
*
* Mutator; This method will deopsite money
*-------------------------------------------------------------------------------
* Parameter:Date transDate, int acctNum, float amount
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
bool Bank::Deposit(Date transDate, int acctNum, float amount)
{
	bool valid;			//CALC - validates deposite
	Account *acct;		//CALC - the pointer of the account

	valid = false;

	acct = FindAccountPtr(acctNum);
	if(acct != NULL)
	{
		acct->Deposit(transDate, amount);
		valid = true;
	}
	return valid;
}
/******************************************************************************
* Withdrawal(Date transDate, int acctNum, float amount)
*
* Mutator; This method will
*-------------------------------------------------------------------------------
* Parameter:
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
bool Bank::Withdrawal(Date transDate, int acctNum, float amount)
{
	bool valid;			//CALC - validates withdrawl
	Account *acct;		//CALC - the pointer of the account

	valid = false;
	acct = FindAccountPtr(acctNum);
	if(acct != NULL)
	{
		acct->Withdrawal(transDate, amount);
		valid = true;
	}
	return valid;
}
/******************************************************************************
* Transfer(Date transDate, int acctNum, float amount,  int transFromAcctNum)
*
* Mutator; This method will
*-------------------------------------------------------------------------------
* Parameter: Date transDate, int acctNum, float amount,  int transFromAcctNum
*-------------------------------------------------------------------------------
* Return: bool
*******************************************************************************/
bool Bank::Transfer(Date transDate, int acctNum, float amount,int transFromAcctNum)
{
	bool valid;			//CALC - validates transfer
	Account *acct;		//CALC - the pointer of the account
	Account *acct2;		//CALC - the pointer of the account

	valid = false;

	acct = FindAccountPtr(acctNum);
	if(acct != NULL)
	{
		acct2 = FindAccountPtr(transFromAcctNum);
		if(acct2 != NULL)
		{
			valid = true;
			acct->TransferFunds(transDate,acct2, amount);
		}
	}
	return valid;
}
/******************************************************************************
* FindAccountPtr(int acctNum)
*
* Mutator; This method will return a pointer
*-------------------------------------------------------------------------------
* Parameter: int acctNum //CALC - accout number
*-------------------------------------------------------------------------------
* Return: pointer
*******************************************************************************/
Account* Bank::FindAccountPtr(int acctNum)
{
	bool found;					//CALC - validates
	Account *result;			//CALC - pointer of the data
	NodeType<Account> *temp;	//CALC - pointer of the data

	found = false;
	temp = accountList.first;

	while(temp != NULL && !found)
	{
		if(temp->data->GetAcctNum() == acctNum)
		{
			found = true;
		}
		else
		{
			temp = temp->next;
		}
	}
	if ( temp != NULL)
	{
		result = temp->data;
	}
	else
		result = NULL;
	return result;
}
/******************************************************************************
* initialize(string fileName)
*
* Mutator; This method will read from inputfile
*-------------------------------------------------------------------------------
* Parameter: string fileName
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Bank::initialize(string fileName)
{
	Account *newAccount;	//CALC - the pointer of the account
	ifstream inFile;		//CALC - the infile

	inFile.open(fileName);
	while(inFile)
	{
		newAccount = GetAccount(inFile);
		if (newAccount != NULL)
		{
			OpenAccount(newAccount);
		}
	}
	inFile.close();
	cout << endl;
}
/******************************************************************************
* GetAccount(ifstream &inFile)
*
* Mutator; This method will read data from inputfile
*-------------------------------------------------------------------------------
* Parameter: string fileName
*-------------------------------------------------------------------------------
* Return: pointer
*******************************************************************************/
Account* Bank::GetAccount(ifstream &inFile)
{
	Account *currentAcct;	//CALC - the pointer of the account
	short day;				//CALC - day of the date
	short month;			//CALC - month of the date
	short year;				//CALC - year of the date
	int acctNum;			//CALC - the account number
	string acctType;		//CALC - the transaction type
	float balance;			//CALC - the balance of the account
	string name;			//CALC - the name of the
	Date openDate;			//CALC - the date of the transaction

	currentAcct = NULL;

	if (inFile )
	{
		inFile >> month >> day >> year >> acctNum >> acctType >> balance;
		getline(inFile, name);
		openDate = Date(month, day, year);

		if(acctType == "Checking")
		{
			currentAcct = new Checking(openDate, name, acctNum, balance,
									  OVER_DRAFT_FEE);
		}
		else if(acctType == "Savings")
		{
			currentAcct = new Savings(openDate, name, acctNum, balance,
									  INTEREST_RATE);
		}
		else if(acctType == "MM")
		{
			currentAcct =  new MoneyMarket(openDate, name, acctNum, balance,
										   MM_INTEREST_RATE, OVER_DRAFT_FEE);
		}
		else
		{
			currentAcct =  NULL;
		}
	}
	return currentAcct;
}
/******************************************************************************
* GetTrans(ifstream &inFile)
*
* Mutator; This method will read data from inputfile
*-------------------------------------------------------------------------------
* Parameter: ifstream &inFile
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Bank::GetTrans(ifstream &inFile)
{
	bool transactionResult;		//CALC - validates transaction
	short day;					//CALC - day of the date
	short month;				//CALC - month of the date
	short year;					//CALC - year of the date
	int acctNum;				//CALC - the account number
	string transactionType;		//CALC - the transaction type
	float amount;				//CALC - amount of transaction
	int transferAcctNum;		//CALC - the number account of transfer
	Date date;					//CALC - the date of the transaction

	if (inFile)
	{
		inFile >> month >> day >> year >> acctNum >> amount;
		getline(inFile, transactionType);

		date = Date(month, day, year);

		if(transactionType == " Transfer")
		{
			transferAcctNum = acctNum  ;
			inFile >> acctNum;
			inFile.ignore(1000, '\n');
			transactionResult = Transfer(date, acctNum, amount, transferAcctNum);
		}
		else if(transactionType == " Deposit")
		{
			transactionResult = Deposit(date, acctNum, amount);
		}
		else if(transactionType == " Withdrawal")
		{
			transactionResult = Withdrawal(date, acctNum, amount);
		}
	}
}
/******************************************************************************
* initializeTransactions(string fileName)
*
* Mutator; This method will read from inputfile
*-------------------------------------------------------------------------------
* Parameter: string fileName
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Bank::initializeTransactions(string fileName)
{
	ifstream inFile;
	inFile.open(fileName);
	while(inFile)
	{
		GetTrans(inFile);
	}
	inFile.close();
}
