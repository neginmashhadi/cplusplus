/******************************************************************************
 * AURHOR			:	Negin Mashhadi &	Mohammed Taei
 * STUDENT ID		:	1084104 	   &	1019392
 * LAB #13			:	Intro to OOP
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/30/2018
 * ****************************************************************************/
#ifndef ANIMAL_H_
#define ANIMAL_H_

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

enum AnimalType
{
	NONE,	//0
	SHEEP,	//1
	PIG		//2
};

class Animal
{
public:
	Animal();			//CONSTRUCTOR
	~Animal();			//DESTRUCTOR

	/***************
	 ** MUTATORS **
	 ***************/
	void SetAge		(int animalAge);
	void SetName	(string animalName);
	void SetValue	(double animalValue);
	void SetType	(AnimalType animalType);

	/***************
	 ** ACCESSORS **
	 ***************/
	int    GetAge  		 () const;
	double GetValue		 () const;
	string GetName    	 () const;
	AnimalType GetType   ()const;
	string GetStringType () const;
	void   Display		 () const;

private:
	string 	   name;	// IN/OUT - the name of the animal
	AnimalType type;	// IN/OUT - the type of the animal
	int    	   age;		// IN/OUT - the age of the animal
	double 	   value;	// IN/OUT - the value of the animal
};



#endif /* ANIMAL_H_ */
