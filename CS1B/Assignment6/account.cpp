/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
` * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#include"account.h"
/*******************************************************************************
* Account()
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
Account::Account()
{
	clientName.clear();
	acctNumber = 0;
	currentBalance = 0;
}
/*******************************************************************************
* Account(Date openingDate, string name, int accountNum, float balance)
* Constructor; Initialize class attributes
* Parameters: Date openingDate, string name, int accountNum, float balance
* Return: none
*******************************************************************************/
Account::Account(Date openingDate, string name, int accountNum, float balance)
{
	SetAllValues(openingDate, name, accountNum, balance);
}
/******************************************************************************
* ~Account();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
Account::~Account()
{

}
/******************************************************************************
* SetValue(string accountantName)
*
* Mutator; This method will set the name
*-------------------------------------------------------------------------------
* Parameter: accountantName (string) // IN – the name of the owner of the account
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Account::SetValue(string name)
{
	clientName = name;
}
/******************************************************************************
* GetName() const
*
* Accessor; This method will return the name of the owner of the account
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: the name of the owner
*******************************************************************************/
string Account::GetName() const
{
	return clientName;
}

/******************************************************************************
* SetValue(int accountNum)
*
* Mutator; This method will set the account number
*-------------------------------------------------------------------------------
* Parameter: accountNum (int) // IN – the account number
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Account::SetValue(int accountNum)
{
	acctNumber = accountNum;
}
/******************************************************************************
* GetAcctNum() const
*
* Accessor; This method will return the account number
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: the account number
*******************************************************************************/
int Account::GetAcctNum() const
{
	return acctNumber;
}

/******************************************************************************
* SetValue(float balance)
*
* Mutator; This method will set the balance of the account
*-------------------------------------------------------------------------------
* Parameter: accountBalance (double) // IN – the account balance
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Account::SetValue(float balance)
{
	currentBalance = balance;
}
/******************************************************************************
* GetOpenDate() const
*
* Accessor; This method will return the account's open date
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: the account's open date
*******************************************************************************/
Date Account::GetOpenDate() const
{
	return openDate;
}
/******************************************************************************
* GetBalance() const
*
* Accessor; This method will return the balance of the account
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: the account number
*******************************************************************************/
float Account::GetBalance() const
{
	return currentBalance;
}
/******************************************************************************
* SetValue(Date openingDate)
*
* Mutator; This method will
*-------------------------------------------------------------------------------
* Parameter: Date openingDate
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Account::SetValue(Date openingDate)
{
	openDate = openingDate;
}

/******************************************************************************
* SetAllValues(Date openingDate, string name, int accountNum, float balance)
*
* Mutator; This method will set all the values
*-------------------------------------------------------------------------------
* Parameter: Date openingDate, string name, int accountNum, float balance
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Account::SetAllValues(Date openingDate, string name, int accountNum,
						  float balance)
{
	SetValue(openingDate);
	SetValue(name);
	SetValue(accountNum);
	SetValue(balance);
}
/******************************************************************************
* AddOpenTransaction()
*
* Mutator; This method will set all the values
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Account::AddOpenTransaction()
{

}
/******************************************************************************
* AddOpenTransaction(string transactionType)
*
* Mutator; This method will add transaction
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Account::AddOpenTransaction(string transactionType)
{
	OpenTransaction *transaction;
	transaction = new OpenTransaction(transactionType, GetOpenDate(),
									  GetBalance(), GetBalance());
	AddTransaction(transaction);
}
/******************************************************************************
* Deposit(Date today, float amount)
*
* Mutator; This method will deopsite money
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Account::Deposit(Date today, float amount)
{
	UpdateAcct(today);
	AddTransaction("Deposit",today,amount, GetBalance() + amount);
	SetValue(GetBalance()+ amount);
}
/******************************************************************************
* Withdrawal(Date today, float amount)
*
* Mutator; This method will withdraw money
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
bool Account::Withdrawal(Date today, float amount)
{
	bool valid;
	valid = false;
	if(GetBalance() > amount)
	{
		AddTransaction("Withdrawl",today,amount, GetBalance()- amount);
		SetValue(GetBalance()- amount);
		SetLastTransDate(today);
		valid = true;
	}
	return valid;
}
/******************************************************************************
* TransferFunds(Date today, Account *transferAcct, float amount)
*
* Mutator; This method will transfer the money
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
bool Account::TransferFunds(Date today, Account *transferAcct, float amount)
{
	bool valid;							//CALC - validates funds
	TransferTransaction *trnansaction;  //CALC - the pointer of transactions
	float newTransferAcctBalance;		//CALC - the new account balance

	valid = false;


	if (GetAcctNum()== transferAcct->GetAcctNum())
	{
		cout << "\n*** ERROR - CAN'T TRANSFER INTO THE SAME ACCOUNT ***\n";
	}
	else
	{
		UpdateAcct(today);
		transferAcct->UpdateAcct(today);
		if(GetBalance() > amount)
		{
			newTransferAcctBalance = transferAcct->GetBalance() + amount;
			trnansaction=  new TransferTransaction("Transfer", today, amount,
													newTransferAcctBalance,
											GetAcctNum(),GetBalance()- amount);

			transferAcct->AddTransaction(trnansaction);
			transferAcct->SetLastTransDate(today);
			transferAcct->SetValue(transferAcct->GetBalance() + amount);

			SetValue(GetBalance()-amount);
			SetLastTransDate(today);
			valid = true;
		}
		else
		{
			cout << "\n*** Transfer from " << GetAcctNum() << " To " <<
					transferAcct->GetAcctNum() << " Not ALLOWED! ***\n"
					"***        DUE TO INSUFFICIENT FUNDS        ***\n\n";
		}
	}
	return valid;
}
/******************************************************************************
* GetLastTransDate() const
*
* ACESSORS; This method will retunrn the date of account last accessed
*-------------------------------------------------------------------------------
* Return: the access date
*******************************************************************************/
Date Account::GetLastTransDate() const
{
	return lastAccessDate;
}

void Account::SetLastTransDate(Date date)
{
	lastAccessDate  = date;
}
/******************************************************************************
* UpdateAcct(Date today)
*
* ACESSORS; This method will retunrn the date of account last accessed
*-------------------------------------------------------------------------------
* Return: the access date
*******************************************************************************/
void Account::UpdateAcct(Date today)
{

}
/******************************************************************************
* AddTransaction(Transaction *transaction )
*
* Mutator; This method will add a transaction
*-------------------------------------------------------------------------------
* Return: the access date
*******************************************************************************/
void Account::AddTransaction(Transaction *transaction)

{
	float prevBalance;	//CALC - balance before transaction
	float newBalance;	//CALC - balance after transaction

	if (transaction->GetTransactionDate().GetMonth() !=
		GetLastTransDate().GetMonth() && transactionList.Count() != 0 )
	{
		prevBalance = GetBalance();
		UpdateAcct(transaction->GetTransactionDate());
		newBalance = GetBalance();
		if ( prevBalance != newBalance )
		{
			transaction->SetAccountBalance(transaction->GetAccountBalance() +
										  ( newBalance - prevBalance));
		}
	}
	transactionList.Add(transaction);
	UpdateAcct(transaction->GetTransactionDate());
	PrintTransaction(transaction);
}
/******************************************************************************
* AddTransaction(string type,Date today,float amount, float balance)
*
* Mutator; This method will add a transaction
*-------------------------------------------------------------------------------
* Return: the access date
*******************************************************************************/
void Account::AddTransaction(string type,Date today,float amount, float balance)

{
	Transaction *transaction;	//CALC - pointer for transactions
	transaction = new Transaction(type,today,amount, balance);
	AddTransaction(transaction);
}

/******************************************************************************
* Print()
*
* Mutator; this method will output the data
*-------------------------------------------------------------------------------
* Return: the access date
*******************************************************************************/
void Account::Print()
{
	NodeType<Transaction> *temp; //CALC - pointer for transactions
	Transaction *t;				 //CALC - pointer for transactions

	temp = transactionList.first;

	cout << left << setw(TRANS_COL) << "Transacction"
				 << setw(DATE_COL)  << "Date" << endl;;
	while( temp != NULL)
	{
		t = temp->data;
		cout<< t->GetTransactionType() 				 << " "
		    << t->GetTransactionDate().DisplayDate() <<  " "
			<< t->GetTransactionAmount() <<endl;
		temp = temp->next;
	}
}
/******************************************************************************
* PrintTransaction(Transaction *transaction)
*
* Mutator; this method will output the transaction
*-------------------------------------------------------------------------------
* Return: the access date
*******************************************************************************/
void Account::PrintTransaction(Transaction *transaction)
{
	transaction->Print(GetAcctNum(),GetName());
}
