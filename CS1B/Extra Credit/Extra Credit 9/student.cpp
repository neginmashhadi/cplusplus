#include "student.h"

studentType::studentType()
{

}

studentType::~studentType()
{

}

void studentType::SetIntialVal(string major, float gpa, classKind classType)
{
	SetMajor(major);
	SetGpa(gpa);
	SetClass(classType);
}

void studentType::SetMajor(string studentMajor)
{
	major = studentMajor;
}

void studentType::SetGpa(float studentGpa)
{
	gpa = studentGpa;
}

void studentType::SetClass(classKind studentClass)
{
	studentClass = classType;
}

string studentType::GetMajor() const
{
	return major;
}

float studentType::GetGpa() const
{
	return gpa;
}

classKind studentType::GetClass() const
{
	return classType;
}

