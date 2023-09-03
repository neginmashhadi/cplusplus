#include "Person.h"

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

void personType::SetName(string n)
{
	name = n;
}

void personType::SetAge(int a)
{
	age = a;
}

void personType::SetWeight(int w)
{
	weight = w;
}

void personType::SetHeight(double h)
{
	height = h;
}

void personType::SetIntialValue(string n, int a, int w, double h)
{

}

string personType::GetName() const
{
	return name;
}

int personType::GetAge() const
{
	return age;
}

int personType::GetWeight() const
{
	return weight;
}

double personType::GetHeight() const
{
	return height;
}
