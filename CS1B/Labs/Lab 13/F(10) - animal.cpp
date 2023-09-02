/******************************************************************************
 * AURHOR			:	Negin Mashhadi &	Mohammed Taei
 * STUDENT ID		:	1084104 	   &	1019392
 * LAB #13			:	Intro to OOP
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/30/2018
 * ****************************************************************************/
#include "animal.h"

const int ANIMAL_COL = 11;
const int NAME_COL	 = 15;
const int AGE_COL	 = 3;
const int VAL_COL	 = 3;

/*******************************************************************************
* Animal ();
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
Animal::Animal()
{
	name.clear();
	type = NONE;
	age = 0;
	value = 0;
}

/******************************************************************************
* ~Animal ();
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
	age = animalAge;
}

/*******************************************************************************
* int GetAge () const;
*
* Accessor; This method will return the age attribute
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return: age (integer)
*******************************************************************************/
int Animal::GetAge() const
{
	return age;
}

/******************************************************************************
* SetName (string animalName);
*
* Mutator; This method will update the name attribute to the
* parameter name
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
* string GetName () const;
*
* Accessor; This method will return the name attribute
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return: name (string)
*******************************************************************************/
string Animal::GetName () const
{
	return name;
}

/******************************************************************************
* SetType (AnimalType animalType);
*
* Mutator; This method will update the type attribute to the
* parameter animalType
*-------------------------------------------------------------------------------
* Parameter: animalType (AnimalType) // IN – the type for the new attribute
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Animal::SetType(AnimalType animalType)
{
	type = animalType;
}

/*******************************************************************************
* AnimalType GetType () const;
*
* Accessor; This method will return the type attribute
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return: type (AnimalType)
*******************************************************************************/
AnimalType Animal::GetType() const
{
	return type;
}

/*******************************************************************************
* string GetStringType () const;
*
* Accessor; will acess the animal type and convert it to string
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return: string of the animal type
*******************************************************************************/
string Animal::GetStringType() const
{
	string Stringtype;
	switch(type)
	{
	case NONE: Stringtype = "Not set";
		break;
	case SHEEP: Stringtype = "Sheep";
		break;
	case PIG: Stringtype = "Pig";
		break;
	}
	return Stringtype;
}

/******************************************************************************
* SetValue (double animalValue);
*
* Mutator; This method will update the value attribute to the
* parameter animalValue
*-------------------------------------------------------------------------------
* Parameter: animalValue (double) // IN – the value for the new attribute
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Animal::SetValue(double animalValue)
{
	value = animalValue;
}

/*******************************************************************************
* double GetValue () const;
*
* Accessor; This method will return the value attribute
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return: type (double)
*******************************************************************************/
double Animal::GetValue() const
{
	return value;
}

/*******************************************************************************
* void Display () const;
*
* Accessor; This method will access all the information in the class and output
* 			it on a table
* ------------------------------------------------------------------------------
* Parameters: none
* ------------------------------------------------------------------------------
* Return: nothing
*******************************************************************************/
void Animal::Display() const
{
	cout << left << setw(ANIMAL_COL)  << GetStringType()
				 << setw(NAME_COL)    << GetName() << right
				 << setw(AGE_COL)  	  << GetAge()
				 << setw(VAL_COL)	  << setprecision(2) << fixed << ""
				 << GetValue() << endl;
}

