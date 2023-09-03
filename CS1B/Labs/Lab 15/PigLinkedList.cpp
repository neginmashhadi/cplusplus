/******************************************************************************
 * LAB #15		  : Inheritance, overloading, & redifining
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 05/14/18
 *****************************************************************************/
#include"PigLinkedList.h"
/*******************************************************************************
* PigLinkedList();
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
PigLinkedList::PigLinkedList()
{
	count = 0;
	head = NULL;
	tail = NULL;
}
/******************************************************************************
* ~PigLinkedList();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
PigLinkedList::~PigLinkedList()
{

}
/******************************************************************************
* AddPig (Pig pig);
*
* Mutator; This method will add a sheep to the queue
*-------------------------------------------------------------------------------
* Parameter: pig (Pig) // CALC – the type of animal
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void PigLinkedList::AddPig(Pig pig)
{
	PigNode *temp;
	temp = new PigNode;
	temp->data = pig;

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
* Return: temp (PigNode)
*******************************************************************************/
PigNode *PigLinkedList::Search(string searchName, bool &found) const
{
	Pig pig;
	PigNode *temp;

	found = false;
	temp = head;


	while(temp!=NULL && !found)
	{
		pig = temp->data;
		if(pig.GetName() == searchName)
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
void PigLinkedList::Display() const
{
	PigNode *temp;
	Pig pig;
	temp = head;

	pig.DisplayHeader();
	while(temp!= NULL)
	{
		pig = temp->data;

		pig.Display();
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
void PigLinkedList::ChangeAge()
{
	string name;
	int age;
	bool found;
	Pig pig;
	PigNode *ptr;

	cout << "\nWhose age would you like to change? ";
	getline(cin, name);

	ptr = Search(name, found);
	if(!found)
	{
		cout << "\nPig was not found\n";
	}
	else
	{
		cout << "\nEnter the new age: ";
		cin >> age;
		ptr->data.Modify(age);
		cout << endl;
		cout << "\nThe age of the " << name << " has been changed!\n";
	}

}


