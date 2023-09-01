/******************************************************************************
 * AUTHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * EXTRA CREDIT		: 	Date Class
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	05/07/2018
 * ****************************************************************************/
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include<iostream>
#include<string>
#include "Transaction.h"
using namespace std;


template<class Type>
struct NodeType
{
	Type  *data;
	NodeType<Type> *next;
};

template<class Type>
class LinkedListType
{
public:
	LinkedListType();		//CONSTRUCTOR
	~LinkedListType();		//DESTRUCTOR

	/***************
	 ** MUTATORS **
	 ***************/
	void Add(Type *item);

	/***************
	 ** ACCESSORS **
	 ***************/
	int Count() const;

	NodeType<Type> *first;
	NodeType<Type> *last;

private:
	int 	 count;
};

/*******************************************************************************
* LinkedListType()
* Constructor; Initialize class attributes
* Parameters: none
* Return: none
*******************************************************************************/
template<class Type>
LinkedListType<Type>::LinkedListType()
{
	count = 0;
	first = NULL;
	last  = NULL;
}
/******************************************************************************
* ~LinkedListType();
* Destructor; does not perform any specific function
* Parameters: none
* Return: none
*******************************************************************************/
template<class Type>
LinkedListType<Type>::~LinkedListType()
{

}
/******************************************************************************
* Add(Type *item)
*
* Mutator; This method will Add the to the linked list
*-------------------------------------------------------------------------------
* Parameter: Type *item //CALC - pointer of the new item being added
*-------------------------------------------------------------------------------
* Return: none
*******************************************************************************/
template<class Type>
void LinkedListType<Type>::Add(Type *item)
{
	NodeType<Type> *newNode;			//CALC - the new node to add in the list

	newNode =  new 	NodeType<Type>;
	newNode ->data = item;
	newNode->next = NULL;

	if(newNode != NULL)
	{
		if(first == NULL)
		{
			first = newNode;
			last = newNode;
		}
		else
		{
			last->next = newNode;
			last = newNode;
		}
		count++;
	}
}
/******************************************************************************
* Count()
*
* Accessor; This method will return the count (number of items in the list)
*-------------------------------------------------------------------------------
* Parameter: none
*-------------------------------------------------------------------------------
* Return: the count
*******************************************************************************/
template<class Type>
int LinkedListType<Type>::Count() const
{
	return count;
}

#endif /* LINKEDLIST_H_ */
