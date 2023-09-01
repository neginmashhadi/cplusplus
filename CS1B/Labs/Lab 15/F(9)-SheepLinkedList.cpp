/******************************************************************************
 * AUTHOR		  : Caroline Ta	& Negin Mashhadi
 * STUDENT ID	  : 1061262		& 1084104
 * LAB #15		  : Inheritance, overloading, & redifining
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 05/14/18
 *****************************************************************************/
#include "SheepLinkedList.h"
/*******************************************************************************
* SheepLinkedList();
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
SheepLinkedList::SheepLinkedList()
{
	head = NULL;
	tail = NULL;
	count = 0;
}
/******************************************************************************
* ~SheepLinkedList();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
SheepLinkedList::~SheepLinkedList()
{

}
/******************************************************************************
* AddSheep(Sheep sheep)
*
* Mutator; This method will add a sheep to the queue
*-------------------------------------------------------------------------------
* Parameter: sheep (Sheep) // CALC – the type of animal
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void SheepLinkedList::AddSheep(Sheep sheep)
{
	SheepNode *temp;
	temp = new SheepNode;
	temp->data = sheep;


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
		count++;
	}

}

/*******************************************************************************
* Search(string searchName, bool &found) const
* Accessor;	this method will search for the name of an animal
* ------------------------------------------------------------------------------
* Parameters: searchName (string) IN - the name of the animal
* 			  found		 (boo)    CALC - validates if its found or no
* ------------------------------------------------------------------------------
* Return: temp (SheepNode)
*******************************************************************************/
SheepNode *SheepLinkedList::Search(string searchName, bool &found) const
{
	Sheep sheep;
	SheepNode *temp;

	found = false;
	temp = head;


	while(temp!=NULL && !found)
	{
		sheep = temp->data;
		if(sheep.GetName() == searchName)
		{
			found = true;
		}
		else
		{
			temp = temp->next;
		}
	}

	return temp;
}

/*******************************************************************************
* Display() const
* Accessor;	Will display the data of the pig
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return: empty (bool)
*******************************************************************************/
void SheepLinkedList::Display() const
{
	SheepNode *temp;
	Sheep sheep;
	temp = head;

	sheep.DisplayHeader();
	while(temp!= NULL)
	{
		sheep = temp->data;

		sheep.Display();
		temp = temp->next;
	}
}
/*******************************************************************************
* ChangeAge()
* Mutator;	Will change the age of an animal
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void SheepLinkedList::ChangeAge()
{
	string name;
	int age;
	bool found;
	Sheep sheep;
	SheepNode *ptr;


	cout << "\nWhose age would you like to change? ";
	getline(cin, name);

	ptr = Search(name, found);
	if(!found)
	{
		cout << "\nSheep was not found\n";
	}
	else
	{
		cout << "\nEnter the new age: ";
		cin >> age;
		ptr->data.Modify(age);
		cout << endl;
		cout << "The age of the " << name << " has been changed!\n";
	}

}
