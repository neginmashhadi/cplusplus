/******************************************************************************
 * AUTHOR		  : Caroline Ta	& Negin Mashhadi
 * STUDENT ID	  : 1061262		& 1084104
 * LAB #15		  : Inheritance, overloading, & redifining
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 05/14/18
 *****************************************************************************/
#include "animal.h"
/*******************************************************************************
* Animal();
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
Animal::Animal()
{
	name.clear();
	age = 0;
}
/******************************************************************************
* ~Animal();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
Animal::~Animal()
{

}
/******************************************************************************
* SetAge (int animalAge);
*
* Mutator; This method will update the age attribute to the
* parameter age value
*-------------------------------------------------------------------------------
* Parameter: age (integer) // IN – the age for the new attribute
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Animal::SetAge(int animalAge)
{
	if(animalAge >= 1 && animalAge <= 10)
	{
		age = animalAge;
	}
}
/*******************************************************************************
* GetAge() const
* Accessor;	this method will get the age of the animal
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return: age (int)
*******************************************************************************/
int Animal::GetAge() const
{
	return age;
}
/******************************************************************************
* SetName (string animalName);
*
* Mutator; This method will update the name attribute to the
* parameter
*-------------------------------------------------------------------------------
* Parameter: animalName (string) // IN – the name for the new attribute
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Animal::SetName(string animalName)
{
	name = animalName;
}
/*******************************************************************************
* GetName() const
* Accessor;	this method will get the name of the animal
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return: name (string)
*******************************************************************************/
string Animal::GetName() const
{
	return name;
}
/******************************************************************************
* Modify (string newName);
*
* Mutator; This method will update the name attribute to the
* parameter
*-------------------------------------------------------------------------------
* Parameter: newName (string) // IN – the name for the new attribute
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Animal::Modify(string newName)
{
	SetName(newName);
}

/******************************************************************************
* Modify(int newAge)
*
* Mutator; This method will update the age attribute to the
* parameter
*-------------------------------------------------------------------------------
* Parameter: newAge (int) // IN – the age for the new attribute
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Animal::Modify(int newAge)
{
	SetAge(newAge);
}

/******************************************************************************
* Modify(int age, string name)
* Mutator; This method will update the age and name attribute to the
* parameter
*-------------------------------------------------------------------------------
* Parameter: age (int) 		// IN – the age for the new attribute
* 			 name (string) This method will update the name attribute to the
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Animal::Modify(int age, string name)
{
	Modify(age);
	Modify(name);
}
/******************************************************************************
* DisplayLine(string name, string age)
*
* Mutator; This method will display one line based on the data of the object
*-------------------------------------------------------------------------------
* Parameter: name  (string) IN - the name of the animal
* 			 age   (string) IN - the age of the animal
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Animal::DisplayLine(string name, string age)
{
	if (age.length() <  3)
		age =  " " + age ;
	cout << left << setw(NAME_COL) << name << " " << left
				 <<  setw(AGE_COL) << age << " " << right;
}
/******************************************************************************
* DisplaySepratorHeader()
*
* Mutator; This method will display lines which seperates header form the data
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Animal::DisplaySepratorHeader()
{
	DisplayLine("--------","---");
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
void Animal::DisplayHeader()
{
	DisplayLine("NAME", "AGE");

}
/******************************************************************************
* Display()
*
* Mutator; This method will display the data
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/

void Animal::Display()
{
	DisplayLine(GetName(), to_string(GetAge()));
}

