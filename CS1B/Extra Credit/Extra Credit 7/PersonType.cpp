/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * EXTRA CREDIT		: 	Define a class
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/25/2018
 * ****************************************************************************/
#include "person.h"

void personType::SetName(string personName)
{
	name = personName;
}

string personType::GetName() const
{
	return name;
}

void personType::SetAge(int personAge)
{
	age = personAge;
}

int personType::GetAge() const
{
	return age;
}

void personType::SetWeight(int personWeight)
{
	weight = personWeight;
}

int personType::GetWeight() const
{
	return weight;
}

void personType::SetHeight(float personHeight)
{
	height = personHeight;
}

float personType::GetHeight() const
{
	return height;
}

void personType::output() const
{
	cout << '\n'<< left <<  setw(COL_SIZE)<< "Name:" << GetName() << endl
		 << setw(COL_SIZE) << "Age:"  << GetAge() << endl
		 << setw(COL_SIZE) << "Height:" << GetHeight() << endl
		 << setw(COL_SIZE) << "Weight:" << GetWeight() << endl;
}

personType::personType()
{
	name.clear();
	age = 0;
	weight = 0;
	height = 0;
}

personType::~personType()
{

}
