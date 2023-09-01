/******************************************************************************
 * AUTHOR		 : Negin Mashhadi & James Pelligra
 * STUDENT ID	 : 1084104 & 389711
 * LAB #10 		 : Implementing a queue
 * CLASS		 : CS1B
 * SECTION		 : MW - 6:30pm
 * DUE DATE		 : 4/9/18
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
 * Implementing a Stack
 * ----------------------------------------------------------------------------
 * This program will emulate a stack, implementing the menu as an enumereated
 * 	type. It will executed five stack operations when called upon, including
 * 	push, pop, isempty, peek, and size. The menu will provide the user to
 * 	select one of the five operations, or exit the program.
 * ----------------------------------------------------------------------------
 * INPUT :
 * 			option		:   integer input menu option from user
 * 			operationM  :   enum input menu option from user
 *
 *
 * OUTPUT:
 * 			stckSize    : number of elements in linked list
 *****************************************************************************/

int main()
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * EXIT_VAL		: integer value to exit the program
	 **************************************************************************/
	const int EXIT_VAL = 0;

	int  option;
	Menu operationM;
	bool isEmpty;
	int  stckSize;

	PersonNode *head;
	PersonNode *tail;

	head = NULL;
	tail = NULL;

	//OUTPUT - Class heading to the console
	PrintHeaderToFile(cout, "Implementing a Queue", 'L', 9);

	option = GetAndCheckInput();

	while(option != EXIT_VAL)
	{
		operationM = ConvertIntToMenu(option);

		switch(operationM)
		{
			case ENQUEUE:		cout << "\nWho would you like to add?\n";
							Enqueue(head, tail);
							break;
			case DEQUEUE: 		Dequeue(head);
							break;
			case ISEMPTY: 	isEmpty = IsEmpty(head);
						  	if(isEmpty)
						  	{
						  		cout << "\nYes, the queue is empty\n\n";
						  	}
						  	else
						  	{
						  		cout << "\nThe QUEUE is NOT empty\n\n";
						  	}
						  	break;
			case FRONT: 	Front(head);
							break;
			case SIZE: 		stckSize = Size(head);
							if(stckSize == 0)
							{
								cout << "\nNobody is in the queue!!\n\n";
							}
							else if(stckSize == 1)
							{
								cout << "\nThere is one person on the queue.\n\n";
							}
							else
							{
								cout << "\nThere are " << stckSize << " people in the queue.\n\n";
							}
							break;
			case CLEAR:		ClearQue(head, tail);
		}

		//Changing LCV
		option = GetAndCheckInput();

	}//END while(option != EXIT_VAL)

	return 0;
}
