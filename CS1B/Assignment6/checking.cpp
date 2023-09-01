/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
` * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#include"checking.h"
/*******************************************************************************
* Checking()
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
Checking::Checking()
{
	overDraftPenalty = 0;
}
/*******************************************************************************
* Checking(Date openingDate, string name, int accountNum, float balance,
* 		   float overDraftFee)
* Constructor; Initialize class attributes
* Parameters: Date openingDate, string name, int accountNum, float balance
* Return: none
*******************************************************************************/
Checking::Checking(Date openingDate, string name, int accountNum, float balance,
				  float overDraftFee)
:Account(openingDate, name, accountNum, balance)
{
 	overDraftPenalty = overDraftFee;
}
/******************************************************************************
* ~Checking();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
Checking::~Checking()
{

}
/******************************************************************************
* AddOpenTransaction()
*
* Mutator; This method will open a checking account
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Checking::AddOpenTransaction()
{
	Account::AddOpenTransaction("Open Checking");
}
/******************************************************************************
* SetAllValues(Date openingDate, string name, int accountNum, float balance,
* 			  float overDraftFee
*
* Mutator; This method will open a checking account
*-------------------------------------------------------------------------------
* Parameter: Date openingDate, string name, int accountNum, float balance,
* 			float overDraftFee
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Checking::SetAllValues(Date openingDate, string name, int accountNum,
							float balance, float overDraftFee)
{
	Account::SetAllValues(openingDate, name, accountNum, balance);
	SetOverdraftFee(overDraftFee);
}
/******************************************************************************
* SetOverdraftFee(float overDraftFee)
*
* Mutator; This method will open set the draft variable
*-------------------------------------------------------------------------------
* Parameter: float overDraftFee
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Checking::SetOverdraftFee(float overDraftFee)
{
	overDraftPenalty = overDraftFee;
}
/******************************************************************************
* GetOverdraftFee() const
*
* ACESSORS; This method get the draft penalty
*-------------------------------------------------------------------------------
* Parameter: float overDraftFee
*-------------------------------------------------------------------------------
* Return: return draft penalty
*******************************************************************************/
float Checking::GetOverdraftFee() const
{
	return overDraftPenalty;
}
/******************************************************************************
* Withdrawal(Date today, float amount)
*
* Mutator; This method will withdraw an amount
*-------------------------------------------------------------------------------
* Parameter: Date today, float amount
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
bool Checking::Withdrawal(Date today, float amount)
{
	bool valid;

	if(GetBalance() > amount)
	{
		valid = Account::Withdrawal(today, amount);
	}
	else
	{
		if(GetBalance() - amount < MAX_OVER_DRAFT)
		{
			SetLastTransDate(today);
			AddTransaction("Withdrawl",today,amount, GetBalance()-amount - GetOverdraftFee());
			SetValue(GetBalance() - amount - GetOverdraftFee());
			valid = true;
		}
		else
		{
			valid = false;
			cout << "\nWithdrawn can not be made\n";
		}
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

bool Checking::TransferFunds(Date today, Account *transferAcct, float amount)
{
	bool valid;								//CALC - validates transfer
	float newTransferAcctBalance;			//CALC - the new balance
	TransferTransaction *trnansaction;		//CALC - the pointer of transactions

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
			trnansaction =  new TransferTransaction("Transfer", today,
												amount, newTransferAcctBalance,
											GetAcctNum(),GetBalance() - amount);

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
					"***        DUE TO INSUFFICIENT FUNDS        ***\n" << endl;
			SetValue(GetBalance()- GetOverdraftFee());
			SetLastTransDate(today);

		}
	}
	return valid;
}
/******************************************************************************
* UpdateAcct(Date today)
*
* Mutator; This method will withdraw an amount
*-------------------------------------------------------------------------------
* Parameter: Date today, float amount
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Checking::UpdateAcct(Date today)
{
	int   diffMonth;
	Date  lastDate;
	float balance;
	float penalty;

	lastDate = GetLastTransDate();
	diffMonth = ((today.GetYear() *12) + today.GetMonth())
		- ((lastDate.GetYear() *12) + lastDate.GetMonth());

	balance = GetBalance();

	if ( balance < 0 && diffMonth > 1)
	{
		penalty = (diffMonth ) * GetOverdraftFee()  ;
		SetLastTransDate( today);
		SetValue(balance - penalty);
	}
}
