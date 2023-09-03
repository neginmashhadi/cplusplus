#include <iostream>
#include <string>
#include <limits>
#include "queueArray.h"
 
using namespace std;
   
int main()
{
    queueType<int> numQueue(3);
    queueType<double> decimalQueue;
    queueType<string> wordQueue;

    int top;

    numQueue.initializeQueue();
    numQueue.addQueue(1);
    numQueue.addQueue(2);
    numQueue.addQueue(5);
    numQueue.addQueue(7);
    numQueue.print();
    top = numQueue.peek();
    cout << "\nThe first item is " << top << endl;
    cout << "\ndeleting\n";
    numQueue.deleteQueue();
    numQueue.deleteQueue();
    numQueue.deleteQueue();
    numQueue.deleteQueue();

    cout << "\n\nassertion error message\n\n";
//    top = numQueue.peek();
//    if(top == 0)
//    {
//    	cout << "there is nothing in the front";
//    }
   return 0;
}

