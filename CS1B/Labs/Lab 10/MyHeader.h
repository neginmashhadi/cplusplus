/******************************************************************************
 * AUTHOR		 : Kevin Truong & James Pelligra
 * STUDENT ID	 : 1017195 & 389711
 * LAB #9  		 : Implementing a Stack
 * CLASS		 : CS1B
 * SECTION		 : MW - 6:30pm
 * DUE DATE		 : 4/2/18
 ******************************************************************************/

#ifndef MYHEADER_H_
#define MYHEADER_H_

//preprocessor directives
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <ios>
#include <limits>
using namespace std;

// ENUMERATED TYPES
enum Menu
{
	ENQUEUE,
	DEQUEUE,
	ISEMPTY,
	FRONT,
	SIZE,
	CLEAR
};

// STACKS
struct PersonNode
{
	string name;
	char   gender;
	int	   age;
	PersonNode *next;
};

//prototypes

/******************************************************************************
 * F0_PrintHeaderToFile
 * This function receives an output file stream variable, an assignment name,
 * 		type and number then outputs the appropriate header to output file
 * 		==> returns nothing - This will output the class heading to output file.
 ******************************************************************************/
void PrintHeaderToFile(ostream &output,  // IN - out file variable - used for output
					   string   asName, // IN - assignment Name – used for output
					   char     asType, // IN - assignment type
		 	 	 	 	 	 	 	 	//    - (LAB or ASSIGN) – used for output
					   int      asNum); // IN – assign. number – used for output

/******************************************************************************
 * F1_OutputMenu
 * 	This function outputs the menu selection to the user.
 * 	==> Returns nothing - This will output the menu
 ******************************************************************************/
void OutputMenu();

/******************************************************************************
 * F2_GetAndCheckInput
 * 	This function gets input and checks if the input is valid. If the input is
* 	invalid, a error message will output.
 * 	==> Returns input selected by the user
 ******************************************************************************/
int GetAndCheckInput();

/******************************************************************************
 * F3_ConvertIntToMenu
 * 	This function receives an input and changes the value of the input to an
* 	enumerated type.
 * 	==> Returns enumerated type for input
 ******************************************************************************/
Menu ConvertIntToMenu(int commandF);

/******************************************************************************
 * F4_Push
 * 	This function receives a head that points to the first element of a linked
* 	list, and adds new elements to the list.
 * 	==> Returns nothing - Adds new elements to a linked list
 ******************************************************************************/
void Enqueue(PersonNode *&headF, PersonNode *&tailF);

/******************************************************************************
 * F5_Pop
 * 	This function receives a head that points to the first element of a linked
* 	list, and deletes the last element added to the linked list.
 * 	==> Returns nothing - deletes element within linked list
 ******************************************************************************/
void Dequeue(PersonNode *&headF);

/******************************************************************************
 * F6_IsEmpty
 * 	This function receives a head that points to the first element of a linked
* 	list, and checks if whether or not there are any elements within the linked
* 	list.
 * 	==> Returns boolean variable
 ******************************************************************************/
bool IsEmpty(PersonNode *headF);

/******************************************************************************
 * F7_Peek
 * 	This function receives a head that points to the first element of a linked
* 	list, and outputs the current contents of the linked list.
 * 	==> Returns nothing - outputs contents of linked list
 ******************************************************************************/
void Front(PersonNode *headF);

/******************************************************************************
 * F8_StackSize(
 * 	This function receives a head that points to the first element of a linked
* 	list, and returns how many elements are within the linked list.
 * 	==> Returns nothing - returns how many elements are in the linked list
 ******************************************************************************/
int Size(PersonNode *headF);

/******************************************************************************
 * ClearQue
 * 	This function receives a head that points to the first element of a linked
* 	list, and returns how many elements are within the linked list.
 * 	==> Returns nothing - returns how many elements are in the linked list
 ******************************************************************************/
void ClearQue(PersonNode *headF, PersonNode *tailF);


#endif /* MYHEADER_H_ */
