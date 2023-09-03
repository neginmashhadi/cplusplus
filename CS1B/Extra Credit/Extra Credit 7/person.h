/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * EXTRA CREDIT		: 	Define a class
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/25/2018
 * ****************************************************************************/
#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int COL_SIZE = 8;

class personType
{
	public :
	personType ();
	~personType ();

	void SetName(string personName);
	void SetAge(int personAge);
	void SetWeight(int personWeight);
	void SetHeight(float personHeight);

	string GetName() const;
	int	   GetAge() const;
	int	   GetWeight() const;
	float  GetHeight() const;
	void   output() const;


	private:
	string name;
	int    age;
	int    weight;
	float  height;
};



#endif /* PERSON_H_ */
