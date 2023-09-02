/******************************************************************************
 * LAB #15		  : Inheritance, overloading, & redifining
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 05/14/18
 *****************************************************************************/
#include "sheep.h"
/*******************************************************************************
* Sheep();
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
Sheep::Sheep()
{

}
/******************************************************************************
* ~Sheep();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
Sheep::~Sheep()
{

}

/******************************************************************************
*	SetWool(WoolType wool)
*
* Mutator; This method will set the wool
*-------------------------------------------------------------------------------
* Parameter: wool (WoolType) // IN – the type of the wool
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Sheep::SetWool(WoolType wool)
{
	sheepWool = wool;
}

/******************************************************************************
* GetWool() const
*
* Accessor; This method will return the wool
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: the wool of the sheep
*******************************************************************************/
WoolType Sheep::GetWool() const
{
	return sheepWool;
}

/******************************************************************************
* SetColor(string color)
*
* Mutator; This method will set the color of the wool
*-------------------------------------------------------------------------------
* Parameter: color (string) // IN – the color of the wool
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Sheep::SetColor(string color)
{
	woolColor = color;
}

/******************************************************************************
* GetColor() const
*
* Accessor; This method will return the color
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: the color of wool of the sheep
*******************************************************************************/
string Sheep::GetColor() const
{
	return woolColor;
}

/******************************************************************************
* SetColor(WoolType wool, string woolColor)
*
* Mutator; This method will set the type of the wool and it's color
*-------------------------------------------------------------------------------
* Parameter: wool 	   (WoolType) 	// IN - the type of the wool
* 			 woolColor (string) 	// IN – the color of the wool
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Sheep::SetWool(WoolType wool, string woolColor)
{
	SetWool(wool);
	SetColor(woolColor);
}

/******************************************************************************
* DisplayLine(string wool, string color)
*
* Mutator; This method will display one line based on the data of the object
*-------------------------------------------------------------------------------
* Parameter: wool  (string) IN - the wool of the sheep
* 			 color (string) IN - the color of the wool
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Sheep::DisplayLine(string wool, string color)
{
	cout << left << setw(WOOL_COL) << wool
				 << setw(COLOR_COL) << color << right<< endl;
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
void Sheep::DisplayHeader()
{
	Animal::DisplayHeader();
	DisplayLine("WOOLTYPE","COLOR");
	Animal::DisplaySepratorHeader();
	DisplayLine("--------","-----");
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
void Sheep::Display()
{
	Animal::Display();
	DisplayLine(GetWoolTypeString(), GetColor());
}

/******************************************************************************
* GetWoolTypeString()
*
* Mutator; This method will switch enum to string
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
string Sheep::GetWoolTypeString()
{
	string woolType;

	switch(GetWool())
	{
		case LONG: 	 woolType = "Long";
			break;
		case MEDIUM: woolType = "Medium";
			break;
		case FINE: 	 woolType = "Fine";
			break;
		case CARPET: woolType =  "Carpet";
			break;
		default: 	 woolType = "Unknown";
			break;
	}
	return woolType;
}
/******************************************************************************
* GetWoolTypeString()
*
* Mutator; This method will switch string to enum
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
void Sheep::SetWoolTypeString(string woolType)
{
	if(woolType == "Long")
	{
		SetWool(LONG);
	}
	else if(woolType == "Medium")
	{
		SetWool(MEDIUM);
	}
	else if(woolType == "Fine")
	{
		SetWool(FINE);
	}
	else if(woolType == "Carpet")
	{
		SetWool(CARPET);
	}
}

