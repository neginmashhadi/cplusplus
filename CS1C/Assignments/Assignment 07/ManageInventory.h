/************************************************************
* PROGRAMMED BY : Negin Mashhadi
* STUDENT ID    : 1084104
* CLASS         : TTH : 9:30 - 10:50am
* LAB #7        : HW07
************************************************************/
#ifndef MANAGEINVENTORY_H_
#define MANAGEINVENTORY_H_

#include "Header.h"

const int NAME_SIZE = 30;
const int QUNATITY_SIZE = 10;
const int COST_SIZE = 7;
const int TAX_RATE = 5;

class ManageInventory
{
public:
	ManageInventory();
	ManageInventory(int aSize);
	ManageInventory(const ManageInventory &obj);
	~ManageInventory();


	void AddItem(string name, int quantity, double cost);
	int SearchItem(string *searchName);
	void UpdateQuantity(int quantity, int index);
	void addTransaction(string name, int quantity, double cost);

	void Print();
	void PrintTransactions();

private:
	int  size;                
	int  count;                 //Variable to keep track of # of items
	Item **p_pInventoryItems;   //Pointer to store item info
	Item **transactionList;
	int  *transactionCount;
};

#endif /* MANAGEINVENTORY_H_ */

