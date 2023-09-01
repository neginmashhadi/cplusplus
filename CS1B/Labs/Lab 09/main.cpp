/******************************************************************************
 * AUTHOR			:	Negin Mashhadi		& Wilson pena
 * STUDENT ID		:	1084104				& 1086320
 * Lab #9			:	Implementing a stack
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/02/2018
 * ****************************************************************************/
#include "header.h"
/*******************************************************************************
 * Implementing a stack
 * -----------------------------------------------------------------------------
 * 		This program that emulates a stack.	Implement the menu using an
 * 	enumerated type. Write functions to	implement each of the following	tasks.
 * 	The provide a menu for the user to choose one of the 5 options.
 * -----------------------------------------------------------------------------
 * 	INPUT
 *
 *  OUTPUT
 ******************************************************************************/
int main()
{
/*******************************************************************************
 * CONSTANTS
 * -----------------------------------------------------------------------------
 * USED FOR PROCESSING
 * -----------------------------------------------------------------------------
 ******************************************************************************/
	int command;			//CALC&OUT - The user choice of input
	int sizeOfList;			//CALC&OUT - The size of the linked list
	personInfo *head;		//CALC	   - The head of the linkedlist

	/**INTIALIZING**/
	head  = NULL;

	PrintHeader(cout, "Implemnting a stack", 'L', 9);
	//INPUT
	do{
			cout << endl;
			cout << MENU;
			cin  >> command;

			if(!cin >> command)
			{
				cout << "\n****Please enter input a number between 0-5****\n\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << MENU;
				cin  >> command;
			}//END IF

			cin.ignore(numeric_limits<streamsize>::max(), '\n');

		//PROCESSING
		switch(command)
		{
			case PUSH 	: head = Push(head);
				break;
			case POP  	: head = Pop(head);
				break;
			case ISEMPTY: if(Isempty(head))
								  {
									cout << "\nYes, the stack is empty.\n";
								  }
								  else
								  {
									  cout << "\nThe stack is NOT empty.\n";
								  }
				break;
			case PEEK : Peek( head );
				break;
			case SIZE : sizeOfList = Size(head);
						if(sizeOfList == 0)
						{
							cout << "\nNobody is on the stack\n";
						}else if(sizeOfList == 1)
						{
							cout << "\nThere is one person on the stack\n";
						}else
						{
							cout << "\nThere are " << sizeOfList << " People on"
																  " the stack\n";
						}
					break;
				break;
			case EXIT :
				{
					cout << "\nThank You for using my program!\n";
				}
				break;

			default : cout << "\n****The number " << command << " is an invalid "
							  "entry ****"
							  "\n****PLEASE ENTER A NUMBER"
							  " BETWEEN 0-5 ****\n";
				break;
		}


	}while(command != EXIT);

	return 0;
}
