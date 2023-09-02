/******************************************************************************
 * LAB #14			:	Arrays & Linked Lists of Sheep
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#ifndef SHEEPLIST_H_
#define SHEEPLIST_H_

#include "sheep.h"
using namespace std;

class SheepList
{
	public:
	SheepList();		//CONSTRUCTOR
	~SheepList();		//DESTRUCTOR

	/***************
	 ** MUTATORS **
	 ***************/
	void AddSheep  (string sheepName, int sheepAge);
	void ClearList ();

	/***************
	 ** ACCESSORS **
	 ***************/
	bool 	  IsEmpty	()	const;
	void 	  Front	 	()	const;
	bool 	  Search	(string searchName)	const;
	int 	  Size	 	() 	const;
	void	  Output	() 	const;

	private:
	sheepNode *head;
	sheepNode *tail;
	int 	  sheepCount;

};


#endif /* SHEEPLIST_H_ */
