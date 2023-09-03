#ifndef STUDENT_H_
#define STUDENT_H_

#include"person.h"
#include<iomanip>
#include<string>
using namespace std;

enum classKind
{
	NONE,
	FRESHMAN,
	SOPHMORE,
	JUNIOR,
	SENIOR
};

class studentType//: public personType
{
public:
	studentType();
	~studentType();

	void SetMajor(string studentMajor);
	void SetGpa(float studentGpa);
	void SetClass(classKind studentClass);
	void SetIntialVal(string major, float gpa, classKind classType);

	string GetMajor() const;
	float GetGpa() const;
	classKind GetClass() const;

private:
	string major;
	float gpa;
	classKind classType;

};



#endif /* STUDENT_H_ */
