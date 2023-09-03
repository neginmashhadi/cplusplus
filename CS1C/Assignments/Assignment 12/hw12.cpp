#include <iostream>
#include <string>
#include <limits>
#include "queueArray.h"
 
using namespace std;
   
int main()
{
    queueType<int> numQueue;
    queueType<double> decimalQueue;
    queueType<string> wordQueue;

    int top;
    int end;
    bool empty;
    bool full;
    string first;
    string last;
//-----------------------------------------------------------------------------
    numQueue.initializeQueue();
    decimalQueue.initializeQueue();
    wordQueue.initializeQueue();

    empty = numQueue.isEmptyQueue();
    if(empty)
    {
    	cout << "the number queue is empty\n";
    }
    else
    {
    	cout << "the number queue is not empty\n";
    }

    cout << "\nAdding 6 items to the queue\n";
	numQueue.addQueue(1);
	numQueue.print();
	numQueue.addQueue(2);
	numQueue.print();
	numQueue.addQueue(3);
	numQueue.print();
	numQueue.addQueue(4);
	numQueue.print();
	numQueue.addQueue(5);
	numQueue.print();
	numQueue.addQueue(6);
	numQueue.print();
	cout << "The Queue list is: ";
	numQueue.print();
	top = numQueue.peek();
	end = numQueue.back();
	cout << top << " is the first item of queue and " << end << " is the last item"
		   " of the queue\n";
	full = numQueue.isFullQueue();
	full? cout << "\nThe list is full\n" : cout << "\nThe list is not full\n";
	cout << "\nDeleting four items from the list\n";
	numQueue.deleteQueue();
	numQueue.print();
	numQueue.deleteQueue();
	numQueue.print();
	numQueue.deleteQueue();
	numQueue.print();
	numQueue.deleteQueue();
	numQueue.print();
	cout << "\nAdding five items to the list\n";
	numQueue.addQueue(7);
	numQueue.print();
	numQueue.addQueue(8);
	numQueue.print();
	numQueue.addQueue(9);
	numQueue.print();
	numQueue.addQueue(10);
	numQueue.print();
	numQueue.addQueue(11);
	numQueue.print();
	cout << "\nDeleting three items from the list\n";
	numQueue.deleteQueue();
	numQueue.print();
	numQueue.deleteQueue();
	numQueue.print();
	numQueue.deleteQueue();
	numQueue.print();
	cout << endl;
	top = numQueue.peek();
	cout << "the top is " << top << endl;
	empty = numQueue.isEmptyQueue();
	empty? cout << "the list is empty" : cout << "the list is not empty\n";

	cout << "\n------------------------------------------------------------------\n";

    empty = decimalQueue.isEmptyQueue();
    if(empty)
    {
    	cout << "the decimal queue is empty\n";
    }
    else
    {
    	cout << "the decimal queue is not empty\n";
    }
    cout << "\nAdding 6 items to the queue\n";
    decimalQueue.addQueue(0.1);
    decimalQueue.print();
    decimalQueue.addQueue(0.2);
    decimalQueue.print();
    decimalQueue.addQueue(0.3);
    decimalQueue.print();
    decimalQueue.addQueue(0.4);
    decimalQueue.print();
    decimalQueue.addQueue(0.5);
    decimalQueue.print();
    decimalQueue.addQueue(0.6);
   	decimalQueue.print();
   	cout << "The Queue list is: ";
   	decimalQueue.print();

   	cout << decimalQueue.peek() << " is the first item of queue and "
   		 << decimalQueue.back() << " is the last item of the queue\n";
   	full = decimalQueue.isFullQueue();
   	full? cout << "\nThe list is full\n" : cout << "\nThe list is not full\n";
   	cout << "\nDeleting four items from the list\n";
   	decimalQueue.deleteQueue();
   	decimalQueue.print();
   	decimalQueue.deleteQueue();
   	decimalQueue.print();
   	decimalQueue.deleteQueue();
   	decimalQueue.print();
   	decimalQueue.deleteQueue();
   	decimalQueue.print();
   	cout << "\nAdding five items to the list\n";
   	decimalQueue.addQueue(0.7);
   	decimalQueue.print();
   	decimalQueue.addQueue(0.8);
   	decimalQueue.print();
   	decimalQueue.addQueue(0.9);
   	decimalQueue.print();
   	decimalQueue.addQueue(1.01);
   	decimalQueue.print();
   	decimalQueue.addQueue(1.1);
   	decimalQueue.print();
   	cout << "\nDeleting three items from the list\n";
   	decimalQueue.deleteQueue();
   	decimalQueue.print();
   	decimalQueue.deleteQueue();
   	decimalQueue.print();
   	decimalQueue.deleteQueue();
   	decimalQueue.print();
	cout << "the top is " << decimalQueue.peek() << endl;
	empty = decimalQueue.isEmptyQueue();
	empty? cout << "the list is empty" : cout << "the list is not empty\n";

   	cout << "\n------------------------------------------------------------------\n";

    empty = wordQueue.isEmptyQueue();
    if(empty)
    {
    	cout << "the word queue is empty\n";
    }
    else
    {
    	cout << "the word queue is not empty\n";
    }
    cout << "\nAdding 6 items to the queue\n";
    wordQueue.addQueue("abc");
    wordQueue.print();
    wordQueue.addQueue("efg");
    wordQueue.print();
    wordQueue.addQueue("hij");
    wordQueue.print();
    wordQueue.addQueue("klm");
    wordQueue.print();
    wordQueue.addQueue("nop");
    wordQueue.print();
	cout << "The Queue list is: ";
	wordQueue.print();
   	cout << wordQueue.peek() << " is the first item of queue and "
   			<< wordQueue.back() << " is the last item"
   		   " of the queue\n";
   	full = wordQueue.isFullQueue();
   	full? cout << "\nThe list is full\n" : cout << "\nThe list is not full\n";
   	cout << "\nDeleting four items from the list\n";
   	wordQueue.deleteQueue();
   	wordQueue.print();
   	wordQueue.deleteQueue();
   	wordQueue.print();
   	wordQueue.deleteQueue();
   	wordQueue.print();
   	wordQueue.deleteQueue();
   	wordQueue.print();
 	cout << "\nAdding five items to the list\n";
 	wordQueue.addQueue("qrs");
 	wordQueue.print();
 	wordQueue.addQueue("tu");
   	wordQueue.print();
   	wordQueue.addQueue("vw");
   	wordQueue.print();
   	wordQueue.addQueue("xy");
   	wordQueue.print();
   	wordQueue.addQueue("yz");
   	wordQueue.print();
	cout << "\nDeleting three items from the list\n";
	wordQueue.deleteQueue();
	wordQueue.print();
	wordQueue.deleteQueue();
	wordQueue.print();
	wordQueue.deleteQueue();
	wordQueue.print();
	cout << "the top is " << wordQueue.peek() << endl;
	empty = wordQueue.isEmptyQueue();
	empty? cout << "the list is empty" : cout << "the list is not empty\n";





    return 0;
}

