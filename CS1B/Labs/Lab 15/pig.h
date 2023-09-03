/******************************************************************************
 * LAB #15		  : Inheritance, overloading, & redifining
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 05/14/18
 *****************************************************************************/
#ifndef PIG_H_
#define PIG_H_

#include "animal.h"

const int TAIL_COL = 10;

enum TailType
{
	STRAIGHT,
	CORKSCREW,
	CURLUP,
	CURLRIGHT,
	CURLLEFT
};

class Pig: public Animal
{
	public:
	Pig();		//CONSTRUCTOR
	~Pig();		//DESTRUCTOR

	/***************
	 ** MUTATORS **
	 ***************/
	void SetTail		(TailType pigTail);
	void SetTailString	(string tailType);
	void DisplayLine	(string pigTail);
	void DisplayHeader	();
	void Display		();

	/***************
	 ** ACCESSORS **
	 ***************/
	TailType GetTail	() const;

	private:
	TailType tail;
	string GetPigTailString();
};



#endif /* PIG_H_ */
