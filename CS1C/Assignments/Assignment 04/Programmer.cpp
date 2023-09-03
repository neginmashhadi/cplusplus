/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#include"Programmer.h"
#include"Employe.h"

Programmer::Programmer()
{
	departmentNum = 0;
	supervisorName.clear();
	salaryIncrease = 0;
	cplusplus = false;
	java = false;
}

Programmer::Programmer(int age, long id, string phoneNum, Date hire,
					   double salary, string employeeName, string title, char gender,
					   long num, string Bossname, double percentage,
					   bool c, bool j)
:Employee(age, id, phoneNum, hire, salary, employeeName, title, gender)
{
	SetValues(num, Bossname, percentage, c, j, employeeName);
}

Programmer::~Programmer()
{

}

void Programmer::SetValues(long num, string name, double percentage, bool c, bool j, string empName)
{
	departmentNum = num;
	supervisorName = name;
	salaryIncrease = percentage;
	cplusplus = c;
	java = j;
	employeeName = empName;
}

void Programmer::SetDepartNum(long num)
{
	departmentNum = num;
}

long Programmer::GetDepartNum() const
{
	return departmentNum;
}

void Programmer::SetBossName(string name)
{
	supervisorName = name;
}

string Programmer::GetName() const
{
	return supervisorName;
}

void Programmer::SetSalaryIncrease(double precent)
{
	salaryIncrease = precent;
}

double Programmer::GetSalaryPercent() const
{
	return salaryIncrease;
}

void Programmer::SetKnowledgeCpp(bool cpp)
{
	cplusplus = cpp;
}

bool Programmer::GetLanguageC() const
{
	return cplusplus;
}

void Programmer::SetKnowledgeJava(bool j)
{
	java = j;
}

bool Programmer::GetLanguageJ() const
{
	return java;
}

void Programmer::PrintHeaderProgrammer() const
{
	cout << left << setw(18) << "Name" << setw(12) << "Department" << setw(10) << "Raise %"
		 << setw(15) << "C++ knowledge" << "Java knowledge\n" <<
		 "______________________________________________________________________\n";
}

void Programmer::Print() const
{
	cout << setw(20) << employeeName << setw(12) << departmentNum << setw(15)
		 << salaryIncrease << setw(15);

		if(cplusplus == true)
		{
		  cout << "Yes";
		}
		else
		{
			cout << "NO";
		}

		if(java == true)
		{
		  cout << "Yes";
		}
		else
		{
			cout << "NO";
		}

	cout << endl;
}
