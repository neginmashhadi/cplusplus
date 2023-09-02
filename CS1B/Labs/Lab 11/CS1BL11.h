/***********************************************************************
 * AUTHOR     : Jeffrey Adams & Negin Mashhadi
 * STUDENT ID : 1080576 & 1084104
 * LAB # 11   : Creating an Ordered List
 * CLASS      : CS1B
 * SECTION    : MW-6:30 PM
 * DUE DATE   : 4/16/18
 **********************************************************************/
#ifndef CS1BL11_H_
#define CS1BL11_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <limits>
#include <ios>
using namespace std;

enum StackMenu
{
	EXIT,
	CREATE,
	DISPLAY,
	ISEMPTY,
	SEARCH,
	REMOVE,
	CLEAR
};

struct PersonInfo
{
	string name;
	char   gender;
	int    age;
};

struct ListNode
{
	PersonInfo *data;
	ListNode   *next;
	ListNode   *previous;
};

/***********************************************************************
 * FUNCTION - PrintHeader
 * ---------------------------------------------------------------------
 * This function receives an assignments name, type, number, and
 * programmers names then outputs the appropriate header - returns
 * nothing.
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 	 prior to calling the function:
 * 	 asName : Assignment Name
 * 	 asNum	: Assignment Number
 * 	 asType	: Assignment Type ==> THIS SHOULD CONTAIN:
 * 	 							  'L' for labs
 * 	 							  'A' for assignments
 * POST-CONDITIONS
 * 	This function will output the class heading.
 **********************************************************************/
string PrintHeader(string asName,		//IN - Assignment Name
				   int    asNum,		    //IN - Assignment Number
				   string programmer,	//IN - Programmer Name
				   char   asType);		//IN - Assignment Type
 	 							  		//     'L' for labs
 	 							  		//	   'A' for assignments

/***********************************************************************
 * FUNCTION - Menu
 * ---------------------------------------------------------------------
 * This function will output the menu containing the options to
 * manipulate the stack using an enumerated type.
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 	*NONE*
 *
 * POST-CONDITIONS
 * 	This function will output the menu for the user.
 **********************************************************************/
StackMenu Menu();

/***********************************************************************
 * FUNCTION - IsEmpty
 * ---------------------------------------------------------------------
 * This function will check if head points to NULL.
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 			head - head of linked list
 *
 * POST-CONDITIONS
 * 	This function will return blank.
 **********************************************************************/
bool IsEmpty(ListNode *head); //CALC - head of linked list

/***********************************************************************
 * FUNCTION - Clear
 * ---------------------------------------------------------------------
 * This function will remove an element from the front of the linked
 * list until the list is empty.
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 			head - head of linked list
 *			tail - tail of linked list
 *			data - the data of the linked list
 * POST-CONDITIONS
 * 	This function will return nothing.
 **********************************************************************/
void Clear(ListNode   *&head, //CALC - head of linked list
		   ListNode   *&tail, //CALC - tail of linked list
		   PersonInfo *data); //CALC - data of linked list

/***********************************************************************
 * FUNCTION - GetInfo
 * ---------------------------------------------------------------------
 * This function will read the input from the input file
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 			inFile - The input file
 *
 * POST-CONDITIONS
 * 	This function returns the pointer
 **********************************************************************/
PersonInfo *GetInfo(ifstream &InFile); // IN & OUT    - to the input file

/***********************************************************************
 * FUNCTION - AddNode
 * ---------------------------------------------------------------------
 * This function will add a node to the linked list that was read form \
 * a file.
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 					head - the head of linked list
 * 					tail - the tail of the linked list
 * 					data - the data of the linked list
 * POST-CONDITIONS
 * This function returns nothing
 **********************************************************************/
void AddNode(ListNode   *&head, //CALC - head of linked list
		     ListNode   *&tail, //CALC - tail of linked list
	         PersonInfo *data); //CALC - data of linked list

/***********************************************************************
 * FUNCTION - DisplayList
 * ---------------------------------------------------------------------
 * This function will output the the linked list in a certain format
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 				head - the head of linked list
 *
 * POST-CONDITIONS
 * 	This function returns nothing
 **********************************************************************/
void DisplayList(ListNode *&head); //CALC - head of linked list

/***********************************************************************
 * FUNCTION - NameSearch
 * ---------------------------------------------------------------------
 * This function will search for a name in the linked list and if
 * found will output infomation about the name
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 				head  - the head of linked list
 * 				name  - the name being searched
 *				found - validates if item is in the list
 * POST-CONDITIONS
 * 	This function will return a pointer
 **********************************************************************/
ListNode *NameSearch(ListNode *&head, //CALC - head of linked list
				     string   name,   //IN 	 - the name being searched
				     bool     &found);//CALC - validates if item is in
									  //   	   the list
/***********************************************************************
 * FUNCTION - RemoveNode
 * ---------------------------------------------------------------------
 * This function will search for a name in the linked list and if
 * found will remove that item from the list
 * ---------------------------------------------------------------------
 * PRE-CONDITIONS
 * 	The following parameters need to have a defined value
 * 				head  - the head of linked list
 * 				tail  - the tail of linked list
 * 				name  - the name being searched
 *				found - validates if item is in the list
 * POST-CONDITIONS
 * 	This function returns nothing
 **********************************************************************/
void RemoveNode(ListNode *&head, //CALC - head of linked list
		        ListNode *&tail, //CALC - tail of linked list
				string   name,   //IN 	- the name being searched
				bool     &found);//CALC - validates if item is in the list

#endif /* CS1BL11_H_ */
