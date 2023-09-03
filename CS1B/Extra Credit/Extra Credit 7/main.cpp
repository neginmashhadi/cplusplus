/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * EXTRA CREDIT		: 	Define a class
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/25/2018
 * ****************************************************************************/
#include "header.h"
int main()
{
	personType personInfo;
	string name;
	int age;
	float height;
	int weight;

	PrintHeader(cout, "Define a class", 'L', 10);

	cout << "\nWelcome to my prgram!\n"
		 << "Please Enter your name: ";
	getline(cin, name);
	cout <<"Please enter your age: ";
	cin  >> age;
	cout <<"Please enter your height: ";
	cin  >> height;
	cout <<"Please enter your weight: ";
	cin  >> weight;

	personInfo.SetName(name);
	personInfo.SetAge(age);
	personInfo.SetHeight(height);
	personInfo.SetWeight(weight);

	cout << "\n\nThe information entered is: ";
	personInfo.output();

	cout << "Thank you for using my program! :)";
	return 0;
}
