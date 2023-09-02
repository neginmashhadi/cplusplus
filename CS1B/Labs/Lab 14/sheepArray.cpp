/******************************************************************************
 * LAB #14			:	Arrays & Linked Lists of Sheep
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#include "sheepAr.h"

const int NAME_COL = 15;
const int AGE_COL  = 4;

/*******************************************************************************
* Sheep();
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
SheepArray::SheepArray()
{
	index	   = 0;
}

/******************************************************************************
* ~Sheep();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
SheepArray::~SheepArray()
{

}

/******************************************************************************
* AddSheep (string sheepName, int sheepAge);
*
* Mutator; This method will add a sheep to the array
*-------------------------------------------------------------------------------
* Parameter: sheepName (string) // IN – the name for the new sheep
* 			 sheepAge  (int)	// IN - the age for the new sheep
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void SheepArray::AddSheep(string sheepName, 	// IN – the name for the new sheep
					 	  int 	sheepAge)	// IN - the age for the new sheep
{
	if(index < AR_SIZE)
	{
		sheepAr[index].name = sheepName;
		sheepAr[index].age	= sheepAge;
		index++;
	}
	else
	{
		cout << "\n*** Out of memory ***\n";
	}

}
/*******************************************************************************
* IsEmpty(sheepNode *head) const
* Accessor;	this method will validate if the list is empty
* ------------------------------------------------------------------------------
* Parameters: head (sheepNode)	// CALC - the head of the list
* ------------------------------------------------------------------------------
* Return: empty (bool)
*******************************************************************************/
bool SheepArray::IsEmpty() const
{
	bool empty;
	empty = index == 0;
	return empty;
}


/*******************************************************************************
* void SheepArray::Front()
* Mutator;	this method will output the first element of the list
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return	: none
*******************************************************************************/
void SheepArray::Front()
{
	bool empty;
	empty = IsEmpty();

	if(empty)
	{
		cout << "\nNobody is in Front\n\n";
	}
	else
	{
		sheepAr[0].PrintHeader();
		sheepAr[0].OutputSheep();
		cout << endl;
	}
}

/*******************************************************************************
* IsEmpty(sheepNode *head) const
* Accessor;	this method will output the first element of the list
* ------------------------------------------------------------------------------
* Parameters: head (sheepNode)	// CALC - the head of the list
* ------------------------------------------------------------------------------
* Return: empty (bool)
*******************************************************************************/
int SheepArray::Size() const
{
	return index;
}

/******************************************************************************
* ClearList()
* Mutator; This method will delete all the members of the list
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return   : none
*******************************************************************************/
void SheepArray::ClearList()
{
	if(index == 0 )
	{
		cout << "\nThe list is empty\n\n";
	}
	else
	{
		index = 0;
		cout << "\nThe list has been cleared!\n\n";
	}
}
/*******************************************************************************
* Output()
* Accessor;	this method will output the entire list
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return    : none
*******************************************************************************/
void SheepArray::Output()
{
	SheepData sheep;
	int count;
	if(IsEmpty())
	{
		cout << "\nThe list is empty\n\n";
	}
	else
	{
		sheep = sheepAr[0];
		sheep.PrintHeader();
		for(count = 0; count < index; count++)
		{
			sheepAr[count].OutputSheep();
		}
		cout << endl;
	}
}

/*******************************************************************************
* Search(string searchName)
* Mutator;	this method will search through the linked list
* ------------------------------------------------------------------------------
* Parameters: string searchName
* ------------------------------------------------------------------------------
* Return    : found (bool)
*******************************************************************************/
bool SheepArray::Search(string searchName)
{
	SheepData result;
	bool found;
	int search;

	found = false;
	search = 0;

	while(search < index && !found)
	{
		if(sheepAr[search].name == searchName)
		{
			found = true;
			result = sheepAr[search];
		}
		else
		{
			search++;
		}
	}
	if(found)
	{
		result.PrintHeader();
		result.OutputSheep();
		cout << endl;
	}
	else
	{
		cout << "\nThere are no sheep to be found!\n";
	}
	return found;
}
