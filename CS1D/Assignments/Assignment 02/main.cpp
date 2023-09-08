/******************************************************************************
* AURHOR : Negin Mashhadi
* ASSIGNMENT#2 : Stacks and Queue
* CLASS : CS1D
* DUE DATE : 02/04/2019
* ****************************************************************************/
#include "header.h"
/*******************************************************************************
* This program will implement a stack using STL and user defined stack
* queue and deque.
* it will ouput the data accordingly
******************************************************************************/

int main() {
/*************
* Variables
*************/

    stack<double> numInput;                     //stack of double elements using STL library
    stack<string> nameInput;                    //stack of string elements using STL library
    LinkedStack<string> stringStack;            //LinkedList Stack for strings
    LinkedStack<double> numStack;               //LinkedList Stack for doubles
    LinkedStack<string> copyStack;              //LinkedList Stack for strings copy
    LinkedStack<double> copyNumStack;           //LinkedList Stack for doubles copy
    LinkedQueue<string> stringQueue;            //LinkedList queue for strings
    LinkedQueue<double> doubleQueue;            //LinkedList queue for double
    LinkedQueue<string> stringCopy;             //LinkedList queue for strings copy
    LinkedQueue<double> doubleCopy;             //LinkedList queue for double copy
    DLinkedList<string> stringDeque;            //LinkedList deque for strings
    DLinkedList<string> copyStringDeque;        //LinkedList deque for strings copy
    DLinkedList<double> doubleDeque;            //LinkedList deque for doubles
    DLinkedList<double> copyDoubleDeque;        //LinkedList deque for doubles
    string str;                                 //string to read from file
    double num;                                 //double to read
    bool found;                                 //checks if Item is found
    ifstream fin;                               //opens the input file

    string inputFile = "nameFile.txt";
    string inFile = "numFile.txt";


    cout << "******************************************************* " << endl;
    cout << "* Assignment 02 * " << endl;
    cout << "* Negin Mashhadi * " << endl;
    cout << "* CS1D MW 2.30PM * " << endl;
    cout << "******************************************************* " << endl;
    cout << endl;

    cout << "-----------------------------------------------------------------\n"
            "This program will implement a stack using STL and\nuser defined stack"
            " queue and deque.\n"
            "------------------------------------------------------------------"
            "\n\n";
    cout << "*********************************************************************\n"
            "* A-implenenting a stack using STL<stack> and outputing the stack\n"
            "*********************************************************************\n";

    fin.open(inputFile.c_str());
    {
        while (fin) {
            getline(fin, str);
            if (str != "") {
                nameInput.push(str);
                stringStack.Push(str);
                stringQueue.Enqueue(str);
                stringDeque.AddFront(str);
            }
        }

    }
    fin.close();
    fin.open(inFile.c_str());
    {
        while(fin)
        {
            fin >> num;
            fin.ignore(1000, '\n');
            numInput.push(num);
            numStack.Push(num);
            doubleQueue.Enqueue(num);
            doubleDeque.AddFront(num);
        }


    }
    fin.close();


    cout << "the number of elements in the name stack are "
    << nameInput.size() << endl
    << "the number of elements in the double stack are "
    << numInput.size() << endl;

    cout << "\nPrinting the name of the STL stack:\n"
    "-------------------------------------\n";
    Display(nameInput);
    cout << "Printing the double of the STL stack:\n"
    "-------------------------------------\n";
    Display(numInput);

    cout << "*****************************************************************\n"
            "* B - Delete Eric and 8.445 using STL<stack> and print the\n"
            "remaining elements\n"
            "*****************************************************************\n";

    found = false;

    cout << "popping names:\n";
    while(!found)
    {
        found = nameInput.top() == "Eric";
        nameInput.pop();
    }
    if (found)
    {
        Display(nameInput);
    }

    found = false;
    cout << "\nPopping doubles\n";

    while(!found)
    {
        found = (numInput.top() == 8.445);
        numInput.pop();
    }
    if (found)
        Display(numInput);

    cout << "****************************************************************\n"
            " C - Implementing the stack using singly linked list\n"
            "****************************************************************\n";

    copyStack = stringStack;
    copyNumStack = numStack;
    cout << "\nPrinting the name of implemented stack:\n"
            "-------------------------------------------\n";

    while(!copyStack.IsEmpty())
    {
        cout << copyStack.Top() << '\n';
        copyStack.Pop();
    }
    cout << endl << endl;
    cout << "Printing the double of the implemented stack:\n"
            "---------------------------------------------\n";

    while(!copyNumStack.IsEmpty())
    {
        cout << copyNumStack.Top() << '\n';
        copyNumStack.Pop();
    }
    cout << "****************************************************************\n"
            " D - Delete Eric and 8.445 from the implemented stack\n"
            "****************************************************************\n";

    found = false;
    while(!found)
    {
        found = stringStack.Top() == "Eric";
        stringStack.Pop();
    }
    found = false;

    while (!found)
    {
        found = numStack.Top() == 8.445;
        numStack.Pop();
    }

    found = false;

    copyStack = stringStack;
    cout << "Outputing the elements of the string stack\n"
            "------------------------------------------\n";
    while(!copyStack.IsEmpty())
    {
        cout << copyStack.Top() << endl;
        copyStack.Pop();
    }

    cout << "\nOutputting the elements of double stack\n"
            "------------------------------------------\n";
    while(!copyNumStack.IsEmpty())
    {
        cout << copyNumStack.Top() << endl;
        copyNumStack.Pop();
    }

    cout << "****************************************************************\n"
            " E - Implementing a queue using linked list\n"
            "****************************************************************\n";
            cout << "Outputing the elements of the string queue\n"
            "------------------------------------------\n";


    stringCopy = stringQueue;
    while(!stringCopy.IsEmptyQueue())
    {
        cout << stringCopy.Peek() << endl;
        stringCopy.Dequeue();
    }

    cout << "\nOutputting the elements of double queue\n"
            "------------------------------------------\n";

    doubleCopy = doubleQueue;
    while (!doubleCopy.IsEmptyQueue())
    {
        cout << doubleCopy.Peek() << endl;
        doubleCopy.Dequeue();
    }

    cout << "***************************************************************\n"
            " F - deleting Eric and 8.445 from the list \n"
            "****************************************************************\n";

    found = false;
    while(!found)
    {
        found =stringQueue.Peek() == "Eric";
        stringQueue.Dequeue();
    }

    found = false;
    while(!found)
    {
        found = doubleQueue.Peek() == 8.445;
        doubleQueue.Dequeue();
    }
    cout << "Printing string queue after removing items\n"
            "------------------------------------------\n";

    stringCopy = stringQueue;
    while(!stringCopy.IsEmptyQueue())
    {
        cout << stringCopy.Peek() << endl;
        stringCopy.Dequeue();
    }

    cout << "\nPrinting double queue after removing items\n"
    "------------------------------------------\n";
    doubleCopy = doubleQueue;
    while(!doubleCopy.IsEmptyQueue())
    {
        cout << doubleCopy.Peek() << endl;
        doubleCopy.Dequeue();
    }

    cout << "***************************************************************\n"
            " G - Implement and print the deques using a linked \n"
            "****************************************************************\n";
    cout << "Outputing the elements of the string deque\n"
            "------------------------------------------\n";

    copyStringDeque = stringDeque;
    while(!copyStringDeque.IsListEmpty())
    {
        cout << copyStringDeque.Front() << endl;
        copyStringDeque.RemoveFront();
    }

    cout << "\nOutputting the elements of double deque\n"
    "------------------------------------------\n";
    copyDoubleDeque = doubleDeque;

    while(!copyDoubleDeque.IsListEmpty())
    {
        cout << copyDoubleDeque.Front() << endl;
        copyDoubleDeque.RemoveFront();
    }

    cout << endl;
    cout << "***************************************************************\n"
            " H - Delete Eric (pop front) and 8.445 (pop back)\n"
            "****************************************************************\n";

    cout << "Removing names from front \n";
    found = false;
    copyStringDeque = stringDeque;
    while(!found)
    {
        found = copyStringDeque.Front() == "Eric";
        copyStringDeque.RemoveFront();
    }
    while(!copyStringDeque.IsListEmpty())
    {
        cout << copyStringDeque.Front() << endl;
        copyStringDeque.RemoveFront();
    }
    cout << endl;

    cout << "removing numbers from the back\n";
    found = false;
    copyDoubleDeque = doubleDeque;

    while(!found)
    {
        found = copyDoubleDeque.Back() == 8.445;
        copyDoubleDeque.RemoveBack();
    }
    while(!copyDoubleDeque.IsListEmpty())
    {
        cout << copyDoubleDeque.Back() << endl;
        copyDoubleDeque.RemoveBack();
    }
    cout << endl;

    cout << "***************************************************************\n"
            " I - Implement the Parentheses Algorithm\n"
            "****************************************************************\n";





    string p[7] = {"{(8x+5) - 6x[9x+3]]",
                   "{{8x+5) - 5x[9x+3]})",
                   "{2x + 5}(6x+4) ",
                   "(((4x+8) - x[4x+3])))",
                   "[(5x - 5) - 4x[6x + 2]]",
                   "[12x + 8][2x – 77]",
                   "(2x - 8)(12x + 6]"};

    for (int i = 0; i < 7; i++)
        cout << p[i] << "\t is " <<(BalancedParentheses(p[i]) ? "Balanced"
                                                                        : "Not Balanced") << endl;

    return 0;
}
