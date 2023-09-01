/******************************************************************************
 * AUTHOR		  : Caroline Ta	& Negin Mashhadi
 * STUDENT ID	  : 1061262		& 1084104
 * LAB #15		  : Inheritance, overloading, & redifining
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 05/14/18
 *****************************************************************************/
#ifndef SHEEPLINKEDLIST_H_
#define SHEEPLINKEDLIST_H_

#include"Animal.h"
#include"sheep.h"

struct SheepNode
{
	Sheep data;
	SheepNode *next;
};

class SheepLinkedList
{
public:
	SheepLinkedList();		//CONSTRUCTOR
	~SheepLinkedList();		//DESTRUCTOR

	/***************
	 ** MUTATORS **
	 ***************/
	void AddSheep	(Sheep animl);
	void ChangeAge	();

	/***************
	 ** ACCESSORS **
	 ***************/
	SheepNode *Search(string searchName, bool &found) const;
	void 	   Display()const;
private:
	SheepNode *head;
	SheepNode *tail;
	int 	   count;
};


#endif /* SHEEPLINKEDLIST_H_ */
