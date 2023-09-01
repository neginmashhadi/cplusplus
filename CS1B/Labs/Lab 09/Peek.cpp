/******************************************************************************
 * AUTHOR			:	Negin Mashhadi		& Wilson Pena
 * STUDENT ID		:	1084104				& 1086320
 * Lab #9			:	Implementing a stack
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/02/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * Peek
 * ----------------------------------------------------------------------------
 * 	This function see what is the first item on the linked list
 * 		==> returns nothing - will display the info being added
 * -----------------------------------------------------------------------------
 * PRE-CONDITION
 * 					head : the  head of the linked list
 * POST-CONDITON
 * 		==> returns nothing - will display the info being added
 ******************************************************************************/
  void Peek(personInfo *head)
  {
	  if(Isempty(head))
	  {
		  cout << "\nThere is nobody to PEEK at!!\n";
	  }
	  else
	  {
		  cout << "\nPEEKING at\n";
		  cout << left << setw(SIZE_FOR_NAME);
		  cout << "Name: " << head->name << '\n';
		  cout << setw(SIZE_FOR_NAME);
		  cout << "Gender: " << head->gender << '\n';
		  cout << setw(SIZE_FOR_NAME);
		  cout << "Age: " << head->age << '\n';
		  cout << right;
	  }

  }
