/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#include"header.h"

void ChangeEmployee(Employee theEmployee)
{
	string name, newName;
	int age, newAge;
	long idNum, newIdNum;
	Date hireDate, newHireDate;
	string phoneNum, newPhoneNum;
	double salary,newSalary;
	string jobTitle, newJobTitle;
	char gender, newGender;
	int month, day, year;

	cout << "\nPlease enter the information for the Employee: \n"
			"Name: ";
	getline(cin, name);
	cout << "Age: ";
	cin  >> age;
	cin.ignore(1000, '\n');
	cout << "Id Number: ";
	cin  >> idNum;
	cin.ignore(1000, '\n');
	cout << "PLease enter the month, day, and year of the hire date of the employee\n"
			"Month: ";
	cin  >> month;
	cout << "Day: ";
	cin  >> day;
	cout << "Year: ";
	cin  >> year;
	hireDate = Date(month, day, year);
	cin.ignore(1000, '\n');
	cout << "Phone: ";
	getline(cin, phoneNum);
	cout << "Salary: ";
	cin  >> salary;
	cin.ignore(1000, '\n');
	cout << "Job title: ";
	getline(cin, jobTitle);
	cout << "Gender: ";
	cin.get(gender);
	cin.ignore(1000, '\n');


	theEmployee.SetEmployeeName(name);
	theEmployee.SetEmployeeAge(age);
	theEmployee.SetEmployeeId(idNum);
	theEmployee.SetEmployeePhoneNum(phoneNum);
	theEmployee.SetDate(hireDate);
	theEmployee.SetSalary(salary);
	theEmployee.SetJobTitle(jobTitle);
	theEmployee.SetGender(gender);

	newName = theEmployee.GetEmployeeName();
	newAge = theEmployee.GetEmployeeAge();
	newIdNum = theEmployee.GetEmployeeId();
	newHireDate = theEmployee.GetHireDate();
	newPhoneNum = theEmployee.GetPhoneNum();
	newJobTitle = theEmployee.GetJobTitle();
	newSalary = theEmployee.GetSalary();
	newGender = theEmployee.GetGender();

	if((newName == name) && (newIdNum == idNum) && age == newAge &&
	   newPhoneNum == phoneNum && newJobTitle == jobTitle &&
	   newSalary == salary && newGender == gender)
	{
		cout << "The Employee information has changed successfully\n\n";
		theEmployee.PrintHeader();
		theEmployee.PrintEmployeeInfo();
	}
	else
	{
		cout << "Employee information change was not successful\n";
	}

}
