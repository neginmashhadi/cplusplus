/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#ifndef EMPLOYE_H_
#define EMPLOYE_H_

#include<iostream>
#include<iomanip>
#include<string>
#include "Date.h"
using namespace std;

class Employee
{
	friend bool checkPhoneNumber(Employee& emp1,Employee& emp2);
	friend bool operator==(const Employee& emp1, Employee& emp2);
	friend ostream& operator<<(ostream& os,const Employee& emp);
	friend istream& operator>>(istream& in, Employee& emp);

public:
	//MUTATORS
	void SetEmployeeInfo (int age, long id, string phoneNum, Date hire, double salary, string name, string title, char gender);
	void SetEmployeeId(long id);
	void SetEmployeeName(string name);
	void SetEmployeeAge(int age);
	void SetEmployeePhoneNum(string phone);
	void SetDate(Date date);
	void SetSalary(double salary);
	void SetJobTitle(string title);
	void SetGender(char gender);
	void AddToAge(int addAge);
	void operator+(int addAge);
	Employee& operator++();
	Employee operator++(int);
	//ACCESSORS
	int GetEmployeeAge() const;
	long GetEmployeeId() const;
	string GetPhoneNum()  const;
	Date GetHireDate()  const;
	double GetSalary() const;
	string GetEmployeeName() const;
	string GetJobTitle() const;
	char GetGender() const;
	void PrintEmployeeInfo() const;
	void PrintHeader() const;

	Employee();
	Employee(int age, long id, string phoneNum, Date hire, double salary, string name, string title, char gender);
	~Employee();

protected:
	int employeeAge;
	char employeeGender;
	long employeeId;
	string employeePhoneNum;
	Date hireDate;
	double employeeSalary;
	string employeeName;
	string jobTitle;

};



#endif /* EMPLOYE_H_ */
