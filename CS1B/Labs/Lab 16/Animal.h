#ifndef ANIMAL_H_
#define ANIMAL_H_

#include<iostream>
#include<iomanip>
using namespace std;

class Animal
{
public:
	Animal();		//CONSTRUCTOR
	~Animal();		//DESTRUCTOR

	void SetName(string animalName);
	void SetAge (int animalAge);

	string GetName() const;
	int    GetAge () const;

private:
	string name;
	int age;
};



#endif /* ANIMAL_H_ */
