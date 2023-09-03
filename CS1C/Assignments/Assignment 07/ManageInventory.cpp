/************************************************************
* PROGRAMMED BY : Negin Mashhadi
* STUDENT ID    : 1084104
* CLASS         : TTH : 9:30 - 10:50am
* LAB #7        : HW07
************************************************************/
#include "Header.h"
#include "ManageInventory.h"

ManageInventory::ManageInventory()
{
	count = 0;
	size = MAX_SIZE;
	transactionCount = new int;
	*transactionCount = 0;
	p_pInventoryItems = new Item*[MAX_SIZE];
	transactionList = new Item*[MAX_SIZE];
}

ManageInventory::ManageInventory(int aSize)
{
	count = 0;
	size = aSize;
	p_pInventoryItems = new Item*[MAX_SIZE];
	transactionList = new Item*[MAX_SIZE];
	transactionCount = new int;
	*transactionCount = 0;
}

ManageInventory::~ManageInventory()
{
	delete[] p_pInventoryItems;
	delete[] transactionList;
	p_pInventoryItems = nullptr;
	transactionList   = nullptr;
}

ManageInventory::ManageInventory(const ManageInventory &cInventory)
{
	int loopCount;
	count = cInventory.count;
	size = cInventory.size;
	p_pInventoryItems = new Item*[size];

	if (count < size || p_pInventoryItems != nullptr)
	{
		for (loopCount = 0; loopCount < count ; loopCount++)
		{
			p_pInventoryItems[loopCount] = new Item(cInventory.p_pInventoryItems[loopCount]->name,
													cInventory.p_pInventoryItems[loopCount]->quantity,
			 cInventory.p_pInventoryItems[loopCount]->cost);
		}
	}
	else
	{
		cout << "Not allowed";
	}

}

void ManageInventory::AddItem(string name, int quantity, double cost)
{
	if (count < MAX_SIZE)
	{
		p_pInventoryItems[count++] = new Item(name, quantity, cost);
	}
}

void ManageInventory::Print()
{
	cout << left;
	cout << setw(NAME_SIZE) << "Name of Equipment" << setw(QUNATITY_SIZE+5) << "Quantity"  << "Cost" << endl;

	for (int i = 0; i < count; i++)
	{
		cout << setw(NAME_SIZE) << p_pInventoryItems[i]->name
			 << setw(QUNATITY_SIZE) << p_pInventoryItems[i]->quantity
			 << "$" << setw(COST_SIZE) << right << p_pInventoryItems[i]->cost << endl << left;
	}
	cout << endl << right;
}


int ManageInventory::SearchItem(string *searchName)
{
	int  index = 0;
	bool found = false;

	while (!found && index < count)
	{
		if (p_pInventoryItems[index]->name == *searchName)
		{
			found = true;
		}
		else
		{
			index++;
		}
	}

	if (!found)
	{

		index = -1;
	}

	return index;
}


void ManageInventory::UpdateQuantity(int quantity, int index)
{
	if (quantity > p_pInventoryItems[index]->quantity)
	{
		cout << "\nNot enough items in the stock\n";
	}
	else
	{
		p_pInventoryItems[index]->quantity -= quantity;
		addTransaction(p_pInventoryItems[index]->name, quantity, p_pInventoryItems[index]->cost);
	}
}


void ManageInventory::addTransaction(string name, int quantity, double cost)
{
	Item *item = new Item(name, quantity, cost);
	transactionList[(*transactionCount)++] = item;
}

void ManageInventory::PrintTransactions()
{
	double total = 0;

	cout << left;
	cout << setw(NAME_SIZE)    << "Name of Equipment" << setw(QUNATITY_SIZE) << "Quantity" << "Cost" << endl;
	for (int i = 0; i < *transactionCount; i++)
	{
		if (transactionList[i]->quantity != 0)
		{
			cout << setw(NAME_SIZE)		<< transactionList[i]->name
				 << setw(QUNATITY_SIZE) << transactionList[i]->quantity << "$"
				 << setw(COST_SIZE)		<< right << transactionList[i]->cost
				 << left << endl;
			total += (transactionList[i]->cost * transactionList[i]->quantity);
		}
	}
	cout << endl << right << fixed << setprecision(2) << setw(NAME_SIZE)   << "Total is: " 
													  << setw(COST_SIZE-4) << " " << "$" 
													  << setw(COST_SIZE) << total << endl;

	total += (total * (tax::taxRate / double(100)));


	cout << endl << right << fixed << setprecision(2) << setw(NAME_SIZE) << "With tax: "
		<< setw(COST_SIZE - 4) << " " << "$" << setw(COST_SIZE) << total << endl;
}
