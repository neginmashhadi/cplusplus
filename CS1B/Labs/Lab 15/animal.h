/******************************************************************************
 * LAB #15		  : Inheritance, overloading, & redifining
 * CLASS		  : CS1B
 * SECTION		  : MW - 6.30PM
 * DUE DATE		  : 05/14/18
 *****************************************************************************/

#ifndef ANIMAL_H_
#define ANIMAL_H_

#include<ostream>
#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<fstream>
#include<stdlib.h>
#include<time.h>
using namespace std;

const int NAME_COL = 8;
const int AGE_COL  = 3;

class Animal
{
	public:
	Animal();		//CONSTRUCTOR
	~Animal();		//DESTRUCTOR

	/***************
	 ** MUTATORS **
	 ***************/
	void SetName(string animalName);
	void SetAge (int animalAge);
	void Modify	(int newAge);
	void Modify	(string newName);
	void Modify	(int age, string name);
	void Display();
	void DisplayHeader();
	void DisplaySepratorHeader();
	void DisplayLine(string name, string age);


	/***************
	 ** ACCESSORS **
	 ***************/
	int 	GetAge()	const;
	string  GetName()	const;

	private:
	string name;
	int    age;
};

#endif /* ANIMAL_H_ */
