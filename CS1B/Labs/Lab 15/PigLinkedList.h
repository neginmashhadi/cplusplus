/******************************************************************************
 * LAB #15		  : Inheritance, overloading, & redifining
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 05/14/18
 *****************************************************************************/
#ifndef PIGLINKEDLIST_H_
#define PIGLINKEDLIST_H_

#include"pig.h"
#include"animal.h"

struct PigNode
{
	Pig data;
	PigNode *next;
};

class PigLinkedList
{
public:
	PigLinkedList();		//CONSTRUCTOR
	~PigLinkedList();		//DESTRUCTOR

	/***************
	 ** MUTATORS **
	 ***************/
	void AddPig(Pig pig);
	void ChangeAge();

	/***************
	 ** ACCESSORS **
	 ***************/
	PigNode *Search(string searchName, bool &found) const;
	void 	 Display() const;

private:
	PigNode *head;
	PigNode *tail;
	int 	 count;
};



#endif /* PIGLINKEDLIST_H_ */
