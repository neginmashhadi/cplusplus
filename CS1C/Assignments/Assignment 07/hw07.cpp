/************************************************************
* PROGRAMMED BY : Negin Mashhadi
* STUDENT ID    : 1084104
* CLASS         : TTH : 9:30 - 10:50am
* LAB #7        : HW07
************************************************************/
#include "Header.h"
#include "ManageInventory.h"

int main()
{
	ManageInventory *inventory = new ManageInventory;		
	string          *name		= new string;		
	int             *quantity	= new int;		
	int             *itemIndex	= new int;  

	(*inventory).AddItem("Nike basketball shoes", 22, 145.99);
	(*inventory).AddItem("Under Armour T-shirt", 33, 29.99);
	(*inventory).AddItem("Brooks running shoes", 11, 111.44);
	(*inventory).AddItem("Asics running shoes", 20, 165.88);
	(*inventory).AddItem("Nike shorts", 77, 45.77);

	cout << "Inventory List:\n";
	(*inventory).Print();

	ManageInventory *copyInventory = new ManageInventory();
	copyInventory = inventory;
	cout << "What item From inventory would you like to purchase(enter done for ending purchases)? ";
	getline(cin, *name);

	
	while (*name != "done")
	{
		*itemIndex = (*inventory).SearchItem(name);

		if (*itemIndex == -1)
		{
			cout << "\nThe item searched was not "
				"found in the inventory!\n\n"
				"Please enter another Item: ";
			getline(cin, *name);
		}
		else
		{
			cout << "What is the quantity you want buy? ";
			cin >> *quantity;
			cin.ignore(1000, '\n');

			(*inventory).UpdateQuantity(*quantity, *itemIndex);

			cout << "What item From inventory would you like to purchase (enter done for ending purchases)? ";
			getline(cin, *name);
		}
	}
	
	cout << "\nThe inventory with the copy constructor\n";
	(*copyInventory).Print();
	cout << "\nThe inventory after all purchases\n";
	(*inventory).Print();
	(*inventory).PrintTransactions();

	return 0;
}