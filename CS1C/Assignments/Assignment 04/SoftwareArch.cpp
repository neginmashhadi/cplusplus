/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#include"SoftwareArch.h"

SoftwareArch::SoftwareArch()
{
	departmentNum = 0;
	supervisorName.clear();
	salaryIncrease = 0;
	experienceYears = 0;
}

SoftwareArch::SoftwareArch(int age, long id, string phoneNum, Date hire, double salary,
		   string employeeName ,string title,  char gender,
		   long num, string Bossname, double percent, int years)
	:Employee(age, id, phoneNum, hire, salary, employeeName, title, gender)
{
	SetValues(num, Bossname, percent, years, employeeName);
}

SoftwareArch::~SoftwareArch()
{

}

void SoftwareArch::SetValues(long num, string name, double percent, int years, string archName)
{
	departmentNum = num;
	supervisorName = name;
	salaryIncrease = percent;
	experienceYears = years;
	employeeName = archName;
}

void SoftwareArch::SetDepartNum(long num)
{
	departmentNum = num;
}

long SoftwareArch::GetDepartNum() const
{
	return departmentNum;
}

void SoftwareArch::SetName(string name)
{
	supervisorName = name;
}

string SoftwareArch::GetName() const
{
	return supervisorName;
}

void SoftwareArch::SetSalaryIncrease(double percent)
{
	salaryIncrease = percent;
}

double SoftwareArch::GetIncrease() const
{
	return salaryIncrease;
}

void SoftwareArch::SetExperience(int year)
{
	experienceYears = year;
}

int SoftwareArch::GetExperienceYears() const
{
	return experienceYears;
}

void SoftwareArch::SoftwareArchPrintHeader() const
{
	cout << left << setw(18) << "Name" << setw(12) << "Department" <<
		 setw(18) << "supervisor's name" << setw(10) << "raise %"
		 << "Years of experience\n" <<
		 "_____________________________________________________________________________\n"
		 << right;
}

void SoftwareArch::SoftwareArchPrint() const
{
	cout << left << setw(18) << employeeName << setw(12) << departmentNum << setw(20)
		 << supervisorName << setw(12) << salaryIncrease << experienceYears
		 << right << endl;
}
