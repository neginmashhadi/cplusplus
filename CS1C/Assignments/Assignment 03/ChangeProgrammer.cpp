/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#include"header.h"

void ChangeProgrammer(Programmer currentProgrammer)
{
	string name;
	string superviosrsName;
	string newName;
	string newBoss;
	long departNum;
	long newDepartNum;
	double raise;
	double newRaise;
	bool cpp;
	bool newCpp;
	bool java;
	bool newJava;
	char option;

	cout << "\nPlease enter the information:\n"
			"Name: ";
	getline(cin, name);
	cout << "Supervisor's Name: ";
	getline(cin, superviosrsName);
	cout << "Department Number: ";
	cin  >> departNum;
	cout << "Raise: ";
	cin  >> raise;
	cin.ignore(1000, '\n');
	cout << "Does the programmer have c++ knowledge(Y/N)? ";
	cin.get(option);

	if(toupper(option) == 'Y')
	{
		cpp = true;
	}
	else if (option == 'N')
	{
		cpp = false;
	}
	else
	{
		cout << "incorrect Input\n";
		cpp = false;
	}

	cin.ignore(1000, '\n');
	cout << "Does the programmer have java knowledge(Y/N)? ";
	cin.get(option);
	cin.ignore(1000, '\n');

	if(toupper(option) == 'Y')
	{
		java = true;
	}
	else if (option == 'N')
	{
		java = false;
	}
	else
	{
		cout << "incorrect Input\n";
		java = false;
	}

	currentProgrammer.SetEmployeeName(name);
	currentProgrammer.SetBossName(superviosrsName);
	currentProgrammer.SetDepartNum(departNum);
	currentProgrammer.SetSalaryIncrease(raise);
	currentProgrammer.SetKnowledgeCpp(cpp);
	currentProgrammer.SetKnowledgeJava(java);

	newName = currentProgrammer.GetEmployeeName();
	newBoss = currentProgrammer.GetName();
	newDepartNum = currentProgrammer.GetDepartNum();
	newCpp = currentProgrammer.GetLanguageC();
	newJava = currentProgrammer.GetLanguageJ();
	newRaise = currentProgrammer.GetSalaryPercent();

	if(newName == name && newBoss == superviosrsName && departNum == newDepartNum
		&& raise == newRaise && java == newJava && cpp == newCpp)
	{
		cout << "The programmer information has changed successfully\n\n";
		currentProgrammer.PrintHeaderProgrammer();
		currentProgrammer.Print();
	}
	else
	{
		cout << "The information was not changed successfully";
	}


}
