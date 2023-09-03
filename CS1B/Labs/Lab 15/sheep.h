/******************************************************************************
 * LAB #15		  : Inheritance, overloading, & redifining
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 05/14/18
 *****************************************************************************/
#ifndef SHEEP_H_
#define SHEEP_H_

#include "animal.h"

const int WOOL_COL = 9;
const int COLOR_COL =6;

enum WoolType
{
	LONG,
	MEDIUM,
	FINE,
	CARPET
};

class Sheep: public Animal	//drived class
{
	public:
	Sheep();   //CONSTRUCTOR
	~Sheep();  //DESTRUCTOR

	/***************
	 ** MUTATORS **
	 ***************/
	void SetWool	   		(WoolType wool);
	void SetColor	   		(string color);
	void SetWool	   		(WoolType wool, string woolcolor);
	void SetWoolTypeString	(string woolType);
	void DisplayLine   		(string wool, string color);
	void DisplayHeader 		();
	void Display	   		();

	/***************
	 ** ACCESSORS **
	 ***************/
	WoolType GetWool		() const;
	string 	 GetColor		() const;

	private:
	WoolType sheepWool;
	string 	 woolColor;
	string  GetWoolTypeString();
};

#endif /* SHEEP_H_ */
