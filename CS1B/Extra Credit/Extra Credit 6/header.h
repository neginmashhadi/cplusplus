/******************************************************************************
 * AURHOR			:	Negin Mashhadi
 * STUDENT ID		:	1084104
 * Lab #9			:	doubly linked list
 * CLASS			:	CS1B
 * SECTION			:	MW - 6:30pm - 9:50pm
 * DUE DATE			:	04/11/2018
 * ****************************************************************************/
#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
#include <limits>
#include <ios>
#include <fstream>
using namespace std;

struct MovieRec
{
	string movieTitle;
	string genre;
	int    year;
};

struct LinkedListNode
{
	MovieRec *data;
	LinkedListNode *next;
	LinkedListNode *previous;
};

MovieRec *GetRec(ifstream &inFile);

void LinkedList(LinkedListNode *&head,
				LinkedListNode *&tail,
				MovieRec *data);

void RemoveMovie(LinkedListNode *&head,
				 LinkedListNode *&tail);

void PrintList(LinkedListNode *head);




#endif /* HEADER_H_ */
