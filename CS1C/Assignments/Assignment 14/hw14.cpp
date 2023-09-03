#include "doubleLinkedList.h"
int main()
{
	doubleLinkedList<int> num1;
	doubleLinkedList<int> num2;
	doubleLinkedList<double> doub1;
	doubleLinkedList<double> doub2;



	cout << "This linked list will insert every item in order\n\n"
			"Creating a list of integers\n\n";
	num1.insert(88);
	num1.insert(78);
	num1.insert(62);
	num1.insert(143);
	num1.insert(60);
	cout << "Printing the integer List:\n";
	num1.print();
	cout << "\nPrinting list using copy constructor:\n";
	doubleLinkedList<int> num3(num1);
	num3.print();
	cout << "\nPrinting the list using copy assignment:\n";
	num2 = num1;
	num2.print();
	cout << "\nReversing the list:\n";
	num1.reverse();
	num1.print();
	num1.reverse();	// reversing the list back to
	cout << "\ndeleting the third Node from the list:\n";
	num1.deleteNode(78);
	num1.print();
	cout << "\nAdding another Node into the list:\n";
	num1.insert(70);
	num1.print();
	cout << "\n------------------------------------------------------------------";
	cout << "\nCreating another list of doubles\n";
	doub1.insert(5.5);
	doub1.insert(8.12);
	doub1.insert(20.56);
	doub1.insert(15.89);
	doub1.insert(6.32);
	cout << "\nPrinting the double List:\n";
	doub1.print();
	cout << "\nPrinting the double list using copy constructor:\n";
	doubleLinkedList<double> doub3(doub1);
	doub3.print();
	cout << "\nPrinting the double list using copy assignmnet:\n";
	doub2 = doub1;
	doub2.print();
	cout << "\nReversing the list:\n";
	doub1.reverse();
	doub1.print();
	doub1.reverse();
	cout << "\ndeleting the third Node of the list:\n";
	doub1.deleteNode(8.12);
	doub1.print();
	cout << "\nAdding another Node to the list:\n";
	doub1.insert(7.55);
	doub1.print();

	return 0;
}
