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
	const int LOWER_BOUND = 0;
	const int UPPER_BOUND = 5;

	Employee cs1cEmployee1;
	Employee cs1cEmployee2;
	Employee cs1cEmployee3;
	Programmer cs1cProgrammer1;
	SoftwareArch cs1cSoftArch1;
	int age;
	int  command;
	bool invalid;
	bool phone;

	cout << "EMPLOYEES OF CS1C:\n";
	cs1cEmployee2 = Employee(37, 87654, "949-555-1234", Date(12,25,2014), 900000, "James Corden", "Talk show host", 'M');
	cs1cEmployee1 = Employee(40, 12345, "949-555-1234" , Date(8,31,2014), 100000,"Jimmy Fallon", "Comidien", 'M');
	cs1cProgrammer1 = Programmer(21, 5321, "819-123-4567", Date(12,24,2011), 223000, "Sam Software", "programmer", 'M', 5432122, "Joe Boss", 4, true, false);
	cs1cSoftArch1 = SoftwareArch(30, 8974, "949-658-8974", Date(7,28,2012), 105000, "Alex Arch","Software Arch", 'M', 5434222, "Big Boss", 5, 4);


	//OUTPUTING EMPLOYEE'S INFO
	cs1cProgrammer1.PrintHeader();
	cs1cEmployee1.PrintEmployeeInfo();
	cs1cEmployee2.PrintEmployeeInfo();
	cs1cProgrammer1.PrintEmployeeInfo();
	cs1cSoftArch1.PrintEmployeeInfo();
	cout << endl << endl;
	cs1cProgrammer1.PrintHeaderProgrammer();
	cs1cProgrammer1.Print();
	cout << endl << endl;
	cs1cSoftArch1.SoftwareArchPrintHeader();
	cs1cSoftArch1.SoftwareArchPrint();
	cout << endl;


	//OUTPUTING THE MENU
	do
	{
		invalid = false;
		cout << MENU;
		cin	 >> command;

		if(!cin >> command)
		{
			cout << "\n**** Please enter a number between " << LOWER_BOUND
				 << " and " << UPPER_BOUND << " ****\n\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
		else if(command < LOWER_BOUND || command > UPPER_BOUND)
		{
			cout << "\n**** The number " << command << " is an invalid entery "
					"****";
			cout << "\n**** Please enter a number between " << LOWER_BOUND <<
					" and " << UPPER_BOUND << "****\n\n";
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			invalid = true;
		}
	}while(invalid);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');


	while(command != 0)
	{
		switch(command)
		{
		case 1:
				cout << "\nHow many years would you like to add to Employee's age? ";
				cin  >> age;
				cs1cEmployee1.AddToAge(age);
			break;
		case 2:
				cs1cEmployee1 + 2;
				cout << cs1cEmployee1.GetEmployeeAge() << " is the new age of the employee\n";
			break;
		case 3: cout << "\nComparing phone number for Employye and progammer!\n";
				phone = checkPhoneNumber(cs1cEmployee1, cs1cProgrammer1);
				if(phone)
				{
					cout << cs1cProgrammer1.GetPhoneNum() << " and " << cs1cEmployee1.GetPhoneNum();
					cout << " the two numbers are the same";
				}
				else
				{
					cout << cs1cProgrammer1.GetPhoneNum() << " and " << cs1cEmployee1.GetPhoneNum();
					cout << " the two numbers are not the same" << endl << endl;
				}

				cout << "Comparing phone number for 2 Employee's\n";
				if (cs1cEmployee1 == cs1cEmployee2)
				{
					cout << cs1cEmployee1.GetPhoneNum() << " and " << cs1cEmployee2.GetPhoneNum()
						 << " are equal";
				}
				else
				{
					cout << cs1cEmployee1.GetPhoneNum() << " and " << cs1cEmployee2.GetPhoneNum()
						 << " are not equal";

				}
			break;
		case 4: cout << cs1cEmployee1;
			break;
		case 5: cout << "\nPlease Enter a new Employee's info\n";
				cin  >> cs1cEmployee3;
				cout << cs1cEmployee3;
			break;
		}

	}//END OF WHILE LOOP


	cout << "\nFOR EXTRA CREDIT\n\n";
	cout << "CS EMPLOYEE 2: before post is " << cs1cEmployee2.GetEmployeeAge();
	cout << " and after post inc is " << cs1cEmployee2++.GetEmployeeAge() << endl;
	cout << " and pre increment is " << (++cs1cEmployee2).GetEmployeeAge() << endl;

	return 0;
}

