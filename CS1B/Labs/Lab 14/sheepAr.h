/******************************************************************************
 * AURHOR			:	Negin Mashhadi &	Travis Nguyen
 * STUDENT ID		:	1084104 	   &	1035825
 * LAB #14			:	Arrays & Linked Lists of Sheep
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#ifndef SHEEPAR_H_
#define SHEEPAR_H_

#include <iostream>
#include <iomanip>
#include <string>
#include "sheep.h"
using namespace std;

const int AR_SIZE = 10;

class SheepArray
{
	public:
	SheepArray();		//CONSTRUCTOR
	~SheepArray();		//DESTRUCTOR

	/***************
	 ** MUTATORS **
	 ***************/
	void AddSheep	(string sheepName, int sheepAge);
	bool Search		(string searchName);
	void ClearList  ();
	void Output		();
	void Front	 	();
	/***************
	 ** ACCESSORS **
	 ***************/
	bool IsEmpty	()	const;
	int  Size	 	() 	const;

	private:
	int index;
	SheepData sheepAr[AR_SIZE];

};

#endif /* SHEEPAR_H_ */
