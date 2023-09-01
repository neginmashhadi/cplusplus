/******************************************************************************
 * LAB #10 		 : Implementing a queue
 * CLASS		 : CS1B
 * SECTION		 : MW - 6:30pm
 * DUE DATE		 : 4/9/18
 ******************************************************************************/
#include "MyHeader.h"

/******************************************************************************
* FUNCTION OutputMenu
*------------------------------------------------------------------------------
* This function outputs the menu selection to the user.
*------------------------------------------------------------------------------
* PRE-CONDITIONS
* No value passed in
*
* POST-CONDITIONS
* ==> Returns nothing - This will output the menu
******************************************************************************/
void OutputMenu()
{
	cout << "STACK MENU\n";
	cout << "1 - ENQUEUE (Add a person)\n";
	cout << "2 - DEQUEUE (Remove a person)\n";
	cout << "3 - ISEMPTY (Is the queue empty?)\n";
	cout << "4 - FRONT   (Who is in front?)\n";
	cout << "5 - SIZE    (How many people are there?)\n";
	cout << "6 - Clear the Queue\n";
	cout << "0 - Exit\n";
}
