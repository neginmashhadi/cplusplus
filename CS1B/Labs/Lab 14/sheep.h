/******************************************************************************
 * LAB #14			:	Arrays & Linked Lists of Sheep
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#ifndef SHEEP_H_
#define SHEEP_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct SheepData
{
	string name;
	int age;
	void OutputSheep();
	void PrintHeader();
};

struct sheepNode
{
	SheepData data;
	sheepNode *next;
};


#endif /* SHEEP_H_ */
