/******************************************************************************
 * LAB #14			:	Arrays & Linked Lists of Sheep
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#include "sheepList.h"

const int NAME_COL = 15;
const int AGE_COL  = 4;

/*******************************************************************************
* Sheep();
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
SheepList::SheepList()
{
	sheepCount = 0;
	head 	   = NULL;
	tail 	   = NULL;
}

/******************************************************************************
* ~Sheep();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
SheepList::~SheepList()
{
	sheepNode *temp;
	temp = head;
	while(head != NULL)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
	head = NULL;
	tail = NULL;
	sheepCount = 0;

}

/******************************************************************************
* AddSheep (string sheepName, int sheepAge);
*
* Mutator; This method will add a sheep to the queue
*-------------------------------------------------------------------------------
* Parameter: sheepName (string) // IN – the name for the new sheep
* 			 sheepAge  (int)	// IN - the age for the new sheep
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void SheepList::AddSheep(string sheepName, 	// IN – the name for the new sheep
					 	 int 	sheepAge)	// IN - the age for the new sheep
{
	sheepNode *temp;		// CALC - the temporary pointer

	temp = new sheepNode;
	temp ->data.name = sheepName;
	temp ->data.age = sheepAge;
	temp ->next = NULL;

	if(temp != NULL)
	{
		if(head == NULL)
		{
			head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}
		sheepCount++;
	}
	else
	{
		cout << "\nCould not add new sheep - out of memory\n";
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
bool SheepList::IsEmpty() const
{
	bool empty;
	empty = false;

	if(head == NULL)
	{
		empty = true;
	}
	return empty;
}


/*******************************************************************************
* IsEmpty(sheepNode *head) const
* Accessor;	this method will output the first element of the list
* ------------------------------------------------------------------------------
* Parameters: head (sheepNode)	// CALC - the head of the list
* ------------------------------------------------------------------------------
* Return: empty (bool)
*******************************************************************************/
void SheepList::Front() const
{
	bool empty;
	empty = IsEmpty();

	if(empty)
	{
		cout << "\nNobody is in Front - the list is empty\n\n";
	}
	else
	{
		head->data.PrintHeader();
		head->data.OutputSheep();
		cout << endl;
	}
}

/*******************************************************************************
* Size() const
* Accessor;	this method will return the size of the list
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return: sheepCount (int)
*******************************************************************************/
int SheepList::Size() const
{
	return sheepCount;
}

/******************************************************************************
* ClearList()
* Mutator; This method will delete all the members of the linked list
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return   : none
*******************************************************************************/
void SheepList::ClearList()
{
	sheepNode *temp;

	temp = head;
	if(head == NULL)
	{
		cout << "\nThe list is empty!\n\n";
	}
	else
	{
		while(head != NULL)
		{
			temp = head;
			head = head->next;
			delete temp;
		}
		cout << "\nThe list has been clearned!\n\n";
	}

	head = NULL;
	tail = NULL;
	sheepCount = 0;
}

/*******************************************************************************
* Output() const
* Accessor;	this method will output the entire list
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return    : none
*******************************************************************************/
void SheepList::Output() const
{
	sheepNode *temp;

	temp = head;

	if(IsEmpty())
	{
		cout << "\nThe list is empty\n\n";
	}
	else
	{
		head->data.PrintHeader();
		while(temp != NULL)
		{
			temp->data.OutputSheep();
			temp = temp->next;
		}
		cout << endl;

	}

}

/*******************************************************************************
* Output() const
* Accessor;	this method will search through the linked list
* ------------------------------------------------------------------------------
* Parameters: string searchName
* ------------------------------------------------------------------------------
* Return    : found (bool)
*******************************************************************************/
bool SheepList::Search(string searchName) const
{
	bool found;
	sheepNode *temp;

	found = false;
	temp  = head;

	while(temp!=NULL && !found)
	{
		if(temp->data.name == searchName)
		{
			found = true;
		}
		else
		{
			temp = temp->next;
		}
	}

	if(found)
	{
		temp->data.PrintHeader();
		temp->data.OutputSheep();
		cout << endl;
	}
	else
	{
		cout << "\nSheep was not found\n";
	}
	return found;
}

