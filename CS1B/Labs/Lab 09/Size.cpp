/******************************************************************************
 * Lab #9			:	Implementing a stack
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/02/2018
 * ****************************************************************************/
#include "header.h"
/******************************************************************************
 * Size
 * ----------------------------------------------------------------------------
 *	This function will count each element in the linked list
 *		returns the number of the size of the linked list
 * -----------------------------------------------------------------------------
 *  PRE-CONDITION
 * 					head : the  head of the linked list
 * POST-CONDITON
 *			returns the number of the size of the linked list
 ******************************************************************************/
 int Size(personInfo *head)
 {
	 int size;				//CALC&OUT - the number that counts the size of
	 	 	 	 	 	 	//			 the list
	 personInfo *ptr;		//CALC	   - the pointer

	 /**INTIALIZATION**/
	 size = 0;
	 ptr  = head;

	 while (ptr != NULL)
	 {
		 size++;
		 ptr = ptr->next;
	 }
	 return size;
 }
