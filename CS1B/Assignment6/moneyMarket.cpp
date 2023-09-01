/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignment 6 	: 	Saddleback Bank
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/21/2018
 * ****************************************************************************/
#include"moneyMarket.h"
/*******************************************************************************
* MoneyMarket()
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
MoneyMarket::MoneyMarket()
{
	withDrawalPenalty = 0;
}
/*******************************************************************************
* MoneyMarket(Date openingDate, string name, int accountNum, float balance,
			  float intRate, float withdrPenalty)
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
MoneyMarket::MoneyMarket(Date openingDate, string name, int accountNum,
						float balance, float intRate, float withdrPenalty)
:Savings(openingDate, name, accountNum, balance, intRate)
{
	SetWithdrawalPenalty(withdrPenalty);
}
/******************************************************************************
* ~MoneyMarket();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
MoneyMarket::~MoneyMarket()
{

}
/******************************************************************************
* AddOpenTransaction()
*
* Mutator; This method will open the add transaction
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void MoneyMarket::AddOpenTransaction()
{
	Account::AddOpenTransaction("Open Money Market");
}
/******************************************************************************
* SetAllValues(Date openingDate, string name, int accountNum, float balance,
* 			  float intRate, float withdrPenalty)
*
* Mutator; This method will set all the values
*-------------------------------------------------------------------------------
* Parameter: Date openingDate 		// CALC - the opening date
* 			 string name	  		// CALC - the name of the person who the
* 			 					 			  account belongs to
* 			 int accountNum   		// CALC - the accounts number
* 			 float balance    		// CALC - the balance of the account
* 			 float intRate	  		// CALC - the interest rate
* 			 float withdrPenalty	// CALC - the penealty rate
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void MoneyMarket::SetAllValues(Date openingDate, string name, int accountNum,
							  float balance, float intRate, float withdrPenalty)
{
	Savings::SetAllValues(openingDate, name, accountNum, balance, intRate);
	SetWithdrawalPenalty(withdrPenalty);
}
/******************************************************************************
* SetWithdrawalPenalty(float withdrPentalty)
*
* Mutator; This method will print the header for the transaction
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void MoneyMarket::SetWithdrawalPenalty(float withdrPentalty)
{
	withDrawalPenalty = withdrPentalty;
}
/******************************************************************************
* GetWithdrawalPenalty() const
*
* Accessor; This method will return the withDrawal penalty
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: withDrawal penalty
*******************************************************************************/
float MoneyMarket::GetWithdrawalPenalty() const
{
	return withDrawalPenalty;
}
/******************************************************************************
* bool MoneyMarket::Withdrawal(Date today, float amount)
*
* Mutator; This method will validate withdraw transaction
*-------------------------------------------------------------------------------
* Parameter: Date  today 	// CALC - date of transaction
* 			 float amount	// CALC - the amount of transaction
*-------------------------------------------------------------------------------
* Return: bool validate withdraw transaction
*******************************************************************************/
bool MoneyMarket::Withdrawal(Date today, float amount)
{
	bool valid;			//CALC - validates withdraw
	valid = false;
	if(GetBalance() > amount)
	{
		AddTransaction("Withdrawl",today,amount, GetBalance()-amount - WITHDRAW_COST);
		SetValue(GetBalance()- amount- WITHDRAW_COST);
		UpdateAcct(today);
		valid = true;
	}
	return valid;
}
/******************************************************************************
* bool MoneyMarket::Withdrawal(Date today, float amount)
*
* Mutator; This method will validate withdraw transaction
*-------------------------------------------------------------------------------
* Parameter: Date  today 	// CALC - date of transaction
* 			 float amount	// CALC - the amount of transaction
*-------------------------------------------------------------------------------
* Return: bool validate withdraw transaction
*******************************************************************************/
bool MoneyMarket::TransferFunds(Date today, Account *transferAcct, float amount)
{
	float newTransferAcctBalance;		//CALC - the transfer balance
	float newBalance;					//CALC - the new balance
	TransferTransaction *trnansaction;	//CALC - the pointer transaction
	bool valid;							//CALC - validates transfer
	valid = false;

	if (GetAcctNum()== transferAcct->GetAcctNum())
	{
		cout << "\n***CAN'T TRANSFER INTO THE SAME ACCOUNT ***\n";
	}
	else
	{
		UpdateAcct(today);
		transferAcct->UpdateAcct(today);
		if(GetBalance() > amount)
		{

			newTransferAcctBalance = transferAcct->GetBalance() + amount;
			newBalance = GetBalance() - amount - WITHDRAW_COST;
			trnansaction=  new TransferTransaction("Transfer", today, amount,
													newTransferAcctBalance,
													GetAcctNum(), newBalance);

			transferAcct->AddTransaction(trnansaction);
			transferAcct->SetValue(transferAcct->GetBalance() + amount);
			transferAcct->SetLastTransDate(today);

			if ( transferAcct->GetAcctNum() == 3434)
			{
				cout << "--------------------------------" << endl;
				cout << transferAcct->GetBalance() << endl				;
			}
			SetLastTransDate(today);
			SetValue(newBalance);
			valid = true;
		}
		else
		{
			cout << "\n*** Transfer from " << GetAcctNum() << " To " <<
					transferAcct->GetAcctNum() << " Not ALLOWED! ***\n"
					"***        DUE TO INSUFFICIENT FUNDS        ***\n" << endl;
		}
	}
	return valid;
}
