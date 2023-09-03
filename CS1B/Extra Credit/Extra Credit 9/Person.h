#ifndef PERSON_H_
#define PERSON_H_

#include"header.h"
#include<string>
using namespace std;

class personType
{
public:
		personType();
		~personType();

		void SetIntialValue(string n, int a, int w, double h);
		void SetName(string n);
		void SetAge(int a);
		void SetWeight(int w);
		void SetHeight(double h);

		void Print()	const;
		string GetName() const;
		int GetAge() const;
		int GetWeight() const;
		double GetHeight() const;
private:
		string name;
		int age;
		int weight;
		double height;
};


#endif /* PERSON_H_ */
