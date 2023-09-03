/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#include "Employe.h"

Employee::Employee()
{
	employeeAge = 0;
	employeeId = 0;
	employeeGender = ' ';
	employeePhoneNum.clear();
	hireDate.SetDefaultDate();
	employeeSalary = 0;
	employeeName.clear();
	jobTitle.clear();
}

Employee::Employee(int age, long id, string phoneNum, Date hire, double salary, string name, string title, char gender)
{
	SetEmployeeInfo(age, id, phoneNum, hire, salary, name, title, gender);
}

Employee::~Employee() {}

void Employee::SetEmployeeInfo(int age, long id, string phoneNum, Date hire, double salary, string name, string title, char gender)
{
	 employeeAge = age;
	 employeeId	= id;
	 employeePhoneNum = phoneNum;
	 hireDate = hire;
	 employeeSalary = salary;
	 employeeName = name;
	 jobTitle = title;
	 employeeGender = gender;
}

void Employee::SetEmployeeAge(int age)
{
	employeeAge = age;
}

int Employee::GetEmployeeAge() const
{
	return employeeAge;
}

void Employee::SetEmployeeId(long id)
{
	employeeId = id;
}

long Employee::GetEmployeeId() const
{
	return employeeId;
}

void Employee::SetEmployeePhoneNum(string phone)
{
	employeePhoneNum = phone;
}

string Employee::GetPhoneNum() const
{
	return employeePhoneNum;
}

void Employee::SetDate(Date date)
{
	hireDate = date;
}

Date Employee::GetHireDate()  const
{
	return hireDate;
}

void Employee::SetSalary(double salary)
{
	employeeSalary = salary;
}

double Employee::GetSalary() const
{
	return employeeSalary;
}

void Employee::SetEmployeeName(string name)
{
	employeeName = name;
}

string Employee::GetEmployeeName() const
{
	return employeeName;
}

void Employee::SetJobTitle(string title)
{
	jobTitle = title;
}

string Employee::GetJobTitle() const
{
	return jobTitle;
}

void Employee::SetGender(char gender)
{
	employeeGender = gender;
}

char Employee::GetGender() const
{
	return employeeGender;
}

void Employee::PrintHeader() const
{
	cout << left;
	cout << setw(18) << "Name " << setw(15) << "Employee's Id"
	 << setw(13) << " phone " << setw(6) << "Age" << setw(8)
	 << "Gender" << setw(15) << "Job Title" << setw(10) << "Salary"
	 << "Hire Date\n"
	 << "______________________________________________________"
		"_____________________________________________" << endl << right;
}

void Employee::PrintEmployeeInfo() const
{
	cout << left << setw(18) << employeeName <<  setw(15) << employeeId
		 << setw(13) << employeePhoneNum << setw(8) << employeeAge
		 << setw(6) << employeeGender << setw(15) << jobTitle << setw(10)
		 << employeeSalary << hireDate.DisplayDate() << endl << right;
}

bool checkPhoneNumber(Employee& emp1,Employee& emp2)
{
	bool check;
	check = emp1.GetPhoneNum() == emp2.GetPhoneNum();
	return check;
}

bool operator==(const Employee& emp1, Employee& emp2)
{
	bool check;
	check = emp1.GetPhoneNum() == emp2.GetPhoneNum();
	return check;

}

void Employee::AddToAge(int addAge)
{
	employeeAge += addAge;
	cout << endl << addAge << " years has been added to the age of the employee\n"
							  "The new age is " << employeeAge << endl;
}


void Employee::operator+(int addAge)
{
	employeeAge += addAge;
}

ostream& operator<<(ostream& os,const Employee& emp)
{
	os << left << setw(18) << emp.employeeName <<  setw(15) << emp.employeeId
			 << setw(13) << emp.employeePhoneNum << setw(8) << emp.employeeAge
			 << setw(6) << emp.employeeGender << setw(13) << emp.jobTitle
			 << setw(10) << emp.employeeSalary << emp.hireDate.DisplayDate()
			 << endl << right;
	return os;
}

istream& operator>>(istream& in, Employee& emp)
{
	in   >> emp.employeeName >> emp.employeeId >> emp.employeePhoneNum
		 >> emp.employeeAge  >> emp.employeeGender >> emp.jobTitle
		 >> emp.employeeSalary >> emp.hireDate;
	return in;
}

Employee& Employee::operator++()
{
	employeeAge++;
	return *this;

}

Employee Employee::operator++(int)
{
	Employee tmp(*this);
	operator++(); // prefix-increment this instance
	return tmp;   // return value before i
}
