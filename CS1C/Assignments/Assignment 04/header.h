/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Assignemnt	 	: 	HW03
`* CLASS			:	CS1C
 * SECTION			:	TTH 9:30pm - 11:50pm
 * DUE DATE			:	09/06/2018
 * ****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include<iostream>
#include<string>
#include<ctime>
#include <limits>
#include <ios>
#include"Employe.h"
#include"Date.h"
#include"Programmer.h"
#include"SoftwareArch.h"
using namespace std;


const string MENU = "\n\n1 - ADD TO AGE"
					"\n2 - ADD TWO YEARS TO AGE"
					"\n3 - CHECK PHONE NUMBER"
					"\n4 - OUTPUT EMPLOYEE"
					"\n5 - ENTER A NEW EMPLOYEE"
					"\nPLEASE ENTER AN OPTION BETWEEN 1-5: ";



void ChangeEmployee(Employee theEmployee);
void ChangeProgrammer(Programmer currentProgrammer);
void ChangeSfotwareArch(SoftwareArch currentSoftwareArch);





#endif /* HEADER_H_ */
