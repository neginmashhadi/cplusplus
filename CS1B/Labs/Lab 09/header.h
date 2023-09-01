/******************************************************************************
 * AURHOR			:	Negin Mashhadi		& Wilson pena
 * STUDENT ID		:	1084104				& 1086320
 * Lab #9			:	Implementing a stack
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/02/2018
 * ****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <ios>
#include <limits>
#include <string>
#include <ostream>
using namespace std;


const int COL_SIZE = 14;
const int SIZE_FOR_NAME  = 8;

const string MENU =  "STACK MENU:\n"
					 "1 - Add a person (PUSH)\n"
					 "2 - Remove a person (POP)\n"
					 "3 - Is the stack empty? (ISEMPTY)\n"
					 "4 - Who is on the top? (PEEK)\n"
					 "5 - How many people are there? (SIZE)\n"
					 "0 - To exit\n"
					 "Enter a command? ";

enum commandOption
{
	EXIT,		//0
	PUSH,		//1
	POP,		//2
	ISEMPTY,	//3
	PEEK,		//4
	SIZE,		//5

};

struct personInfo{
	string name;
	char   gender;
	int	   age;
	personInfo *next;
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
/*******************************************************************************
 * Push
 * 	This function will add an element to the top of the stack
 * 		==> returns nothing - will display the info being added
 ******************************************************************************/
 personInfo *Push(personInfo *head);
/*******************************************************************************
 * Pop
 * 	This function will remove a person from the linked list and will allow the
 * user to know who is being erased from the list
 * 		returns the  head of the linked list
******************************************************************************/
  personInfo *Pop(personInfo *head);
/*******************************************************************************
 * Isemepty
 * 	This function will check if the linked list is empty or not
 * 		returns a bool which to tell whether the list is empty or no
 ******************************************************************************/
  bool Isempty(personInfo *head);

/*******************************************************************************
 * Peek
 * 	This function see what is the first item on the linked list
 * 		==> returns nothing - will display the info being added
 ******************************************************************************/
  void Peek(personInfo *head);
/*******************************************************************************
 * Size
 * This function will count each element in the linked list
 *		returns the number of the size of the linked list
 ******************************************************************************/
  int Size(personInfo *head);



  #endif /* HEADER_H_ */
