/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Lab #8			:	Linked list extra credit
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/04/2018
 * ****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <fstream>
#include <iomanip>
#include <ios>
#include <limits>
#include <string>
#include <ostream>
using namespace std;

struct studentNode
{
	string name;
	int	   age;
	string major;
	float  gpa;
	studentNode *next;
};


/******************************************************************************
* PrintHeader
* 	This function receives an assignment name, type and number then outputs
* 	the appropriate header
*	 ==> returns nothing - This will output the class heading.
*******************************************************************************/
 void PrintHeader (ostream  &output,// IN/OUT - output file
				  string	asName,	//IN - assignment Name - used for output
				  char		asType, //IN - assignment Type
				   	   	   	   	   	//	 - (LAB or ASSIGN) - used for output
				  int		asNum);	//IN - assignment Name - used for output

 void LinkedList(string inFileName,
 				 studentNode *&head,
 				 studentNode *&tail);

 studentNode *SearchPerson(studentNode *&head,
						   string search);

 studentNode *Pop(studentNode *head);

 float AvgGpa(studentNode *&head);

 void output(studentNode *head);

  #endif /* HEADER_H_ */
