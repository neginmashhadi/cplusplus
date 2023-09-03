/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#include"header.h"

int main()
{
	Employee cs1cEmployee1;
	Employee cs1cEmployee2;
	Programmer cs1cProgrammer1;
	Programmer cs1cProgrammer2;
	SoftwareArch cs1cSoftArch1;
	SoftwareArch cs1cSoftArch2;
	string name;
	string newName;

	cout << "EMPLOYEES OF CS1C:\n";
	cs1cEmployee1.PrintHeader();
	cs1cEmployee1 = Employee(40, 12345, "949-555-1234" , Date(8,31,2014), 100000,
							 "Jimmy Fallon", "Comidien", 'M');
	cs1cEmployee1.PrintEmployeeInfo();
	cs1cEmployee2.SetEmployeeInfo(51, 12346, "310-555-5555", Date(05,8,2015),
								  70123, "Stephan Colbert", "Comidien", 'M');
	cs1cEmployee2.PrintEmployeeInfo();


	cout << "\nPROGRAMMERS:\n\n";
	cs1cProgrammer1 = Programmer(5432122, "Joe Boss", 4, true, false, "Sam Software");
	cs1cProgrammer2.SetValues(6543222, "Mary Leader", 7, true, true, "Mary Coder");
	cs1cProgrammer1.PrintHeaderProgrammer();
	cs1cProgrammer1.Print();
	cs1cProgrammer2.Print();

	cout << "\nSOFTWARE ARCHITECHTS:\n\n";
	cs1cSoftArch1 = SoftwareArch(5434222, "Big Boss", 5, 4, "Alex Arch");
	cs1cSoftArch2.SetValues(6543422, "Big Boss", 8, 11, "Sally designer");
	cs1cSoftArch1.SoftwareArchPrintHeader();
	cs1cSoftArch1.SoftwareArchPrint();
	cs1cSoftArch2.SoftwareArchPrint();

	ChangeEmployee(cs1cEmployee1);
	ChangeEmployee(cs1cEmployee2);
	ChangeProgrammer(cs1cProgrammer1);
	ChangeSfotwareArch(cs1cSoftArch1);

	return 0;
}


