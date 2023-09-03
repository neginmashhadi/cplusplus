#include"animal.h"

Animal::Animal()
{
	name.clear();
	age = 0;
}

Animal::~Animal()
{

}

void Animal::SetName(string animalName)
{
	name = animalName;
}

string Animal::GetName() const
{
	return name;
}

void Animal::SetAge(int animalAge)
{
	age = animalAge;
}

int Animal::GetAge() const
{
	return age;
}

