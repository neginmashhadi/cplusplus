/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#include"header.h"

void ChangeSfotwareArch(SoftwareArch currentSoftwareArch)
{
	string name;
	string superviosrsName;
	string newName;
	string newBoss;
	long departNum;
	long newDepartNum;
	double raise;
	double newRaise;
	int yearsOfExpreience;
	int newYearsOfExpreience;

	cout << "\nPlease enter the information:\n"
			"Name: ";
	getline(cin, name);
	cout << "Supervisor's Name: ";
	getline(cin, superviosrsName);
	cout << "Department Number: ";
	cin  >> departNum;
	cout << "Raise: ";
	cin  >> raise;
	cout << "Years of Experience: ";
	cin  >> yearsOfExpreience;

	currentSoftwareArch.SetEmployeeName(name);
	currentSoftwareArch.SetName(superviosrsName);
	currentSoftwareArch.SetDepartNum(departNum);
	currentSoftwareArch.SetSalaryIncrease(raise);
	currentSoftwareArch.SetExperience(yearsOfExpreience);


	newName = currentSoftwareArch.GetEmployeeName();
	newBoss = currentSoftwareArch.GetName();
	newDepartNum = currentSoftwareArch.GetDepartNum();
	newRaise = currentSoftwareArch.GetIncrease();
	newYearsOfExpreience = currentSoftwareArch.GetExperienceYears();

	if(newName == name && newBoss == superviosrsName && newDepartNum == departNum
	   && newRaise == raise && newYearsOfExpreience == yearsOfExpreience)
	{

		cout << "The programmer information has changed successfully\n\n";
		currentSoftwareArch.SoftwareArchPrintHeader();
		currentSoftwareArch.SoftwareArchPrint();
	}
	else
	{
		cout << "The information was not changed successfully";
	}


}
