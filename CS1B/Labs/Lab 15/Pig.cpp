/******************************************************************************
 * LAB #15		  : Inheritance, overloading, & redifining
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 05/14/18
 *****************************************************************************/
#include "pig.h"
/*******************************************************************************
* Pig();
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
Pig::Pig()
{

}
/******************************************************************************
* ~Pig();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
Pig::~Pig()
{

}

/******************************************************************************
* SetTail(TailType pigTail)
*
* Mutator; This method will set the tail
*-------------------------------------------------------------------------------
* Parameter: pigTail (TailType) // IN – the type of the tail
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Pig::SetTail(TailType pigTail)
{
	tail = pigTail;
}

/******************************************************************************
* GetTail() const
*
* Accessor; This method will return the tail
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: the tail of the pig
*******************************************************************************/
TailType Pig::GetTail() const
{
	return tail;
}

/******************************************************************************
* GetPigTailString()
*
* Mutator; This method will set tailType to string
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
string Pig::GetPigTailString()
{
	string tailString;
	switch(GetTail())
	{
	case STRAIGHT: tailString = "Straight";
		break;
	case CORKSCREW: tailString = "Crokscrew";
		break;
	case CURLUP: tailString = "Curl Up";
		break;
	case CURLRIGHT: tailString = "Curl Right";
		break;
	case CURLLEFT: tailString = "Curl left";
		break;
	default: tailString = "Unkonwn";
		break;
	}
	return tailString;
}

/******************************************************************************
* SetTailString(string tailType)
*
* Mutator; This method will set set the string to enum tail type
*-------------------------------------------------------------------------------
* Parameter: tailType (string) IN - read from the inputfile
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Pig::SetTailString(string tailType)
{
	if(tailType == "Straight")
	{
		SetTail(STRAIGHT);
	}
	else if(tailType == "Crokscrew")
	{
		SetTail(CORKSCREW);
	}
	else if(tailType == "Curl Up")
	{
		SetTail(CURLUP);
	}
	else if(tailType == "Curl Right")
	{
		SetTail(CURLRIGHT);
	}
	else if(tailType == "Curl Left")
	{
		SetTail(CURLLEFT);
	}
}

/******************************************************************************
* DisplayLine(string pigTail)
*
* Mutator; This method will display one line based on the data of the object
*-------------------------------------------------------------------------------
* Parameter: pigTail (string) IN - the tail of the pig
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Pig::DisplayLine(string pigTail)
{
	cout << left << setw(TAIL_COL) << pigTail << endl << right;

}

/******************************************************************************
* DisplayHeader()
*
* Mutator; This method will display header
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Pig::DisplayHeader()
{
	Animal::DisplayHeader();
	DisplayLine("TAILTYPE");
	Animal::DisplaySepratorHeader();
	DisplayLine("----------");
}

/******************************************************************************
* Display()
*
* Mutator; This method will display all the data of the pig
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Pig::Display()
{
	Animal::Display();
	DisplayLine(GetPigTailString());
}
