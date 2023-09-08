/*****************************************************************************
* AUTHOR : Negin Mashhadi
* ASSIGNMENT #2 : Stacks/Queue/Deque
* CLASS : CS1D
* DUE DATE : 02/04/2019
****************************************************************************/
#ifndef HEADER_H
#define HEADER_H

#include "StackADT.h"
#include "queueADT.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <stack>
#include <fstream>
#include <assert.h>
using namespace std;

/*****************************************************************************
 * THis function will output the data in STL defined stack
 ****************************************************************************/
template<class T>
void Display(stack<T> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;
}
/*****************************************************************************
 * THis function will check if the given expression has balanced parentheses
 * or not
 ****************************************************************************/
bool BalancedParentheses(string expression);

/*****************************************************************************
 * THis function will return the opening match of the character
 ****************************************************************************/
char getMatchOpenChar(char close);

/**********************
* Struct for the data
*********************/
template<class T>
struct Node
{
    T data;
    Node<T> * next;
};

/**********************
* Stacked Linked List
*********************/
template <class T>
class LinkedStack:  public stackADT<T>
{
public:
    LinkedStack();                                              //Constructor
    LinkedStack(const LinkedStack<T>& otherStack);               //Copy Constructor
    ~LinkedStack();                                             //Destructor

    const LinkedStack<T>& operator=(const LinkedStack<T>& otherStack);
    void InitializeStack();                 //Initialize the stack
    bool IsEmpty() const;                   //checking if stack is empty
    void Push(const T& item);               //adding an element
    void Pop();                             //removing an element
    T Top();                                //accessing the first element

private:
    Node<T> *head;
    void Copy(const LinkedStack<T>& otherStack); //creating a copy of another stack
};

/**************
* Constructor
**************/
template <class T>
LinkedStack<T>::LinkedStack()
{
    head = nullptr;
}

/*******************
* Copy Constructor
********************/
template <class T>
LinkedStack<T>::LinkedStack(const LinkedStack<T> &otherStack)
{
    head = nullptr;
    Copy(otherStack);
}

/**************
* Destructor
**************/
template <class T>
LinkedStack<T>::~LinkedStack()
{
    InitializeStack();
}

/****************************
* Over Loading Assignment
****************************/
template <class T>
const LinkedStack<T>& LinkedStack<T>::operator=(const LinkedStack<T> &otherStack)
{
    if(this != &otherStack)
    {
        Copy(otherStack);
    }
    return *this;
}
/****************************
* Check if stack is empty
****************************/
template <class T>
bool LinkedStack<T>::IsEmpty() const {
    return head == nullptr;
}

/****************************
* Initialize Stack
****************************/
template <class T>
void LinkedStack<T>::InitializeStack()
{
    Node<T> *temp;
    while(head != nullptr)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
}

/*************************************
* Adding a new element to the stack
*************************************/
template <class T>
void LinkedStack<T>::Push(const T &item)
{
    Node<T> *ptr;
    ptr = new Node<T>;

    ptr->data = item;
    ptr->next = head;
    head = ptr;
}

/*************************************
* Accessing the top element
*************************************/
template <class T>
T LinkedStack<T>::Top()
{
    assert(head != nullptr);
    return head->data;
}

/*************************************
* Removing a element from the stack
*************************************/
template <class T>
void LinkedStack<T>::Pop()
{
    Node<T> *temp;
    if(head != nullptr)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    else
    {
        cout << "\n***** Can't remove form an empty stack *****\n";
    }
}

/*************************************
* Copy
*************************************/
template <class T>
void LinkedStack<T>::Copy(const LinkedStack<T> &otherStack)
{
    Node<T> *temp, *current, *last;
    if(head != nullptr)
    {
        InitializeStack();
    }
    if(otherStack.head == nullptr)
    {
        head = nullptr;
    }
    else
    {
        current = otherStack.head;
        head = new Node<T>;
        head->data = current->data;
        head->next = nullptr;
        last = head;
        current = current->next;

        while (current != nullptr)
        {
            temp = new Node<T>;
            temp->data = current->data;
            temp->next = nullptr;
            last->next = temp;
            last = temp;
            current = current->next;
        }//End While Loop
    }//End If-Else
}//End Copy


//----------------------------------------------------------------------------
/*********************************************
* Implementing a queue using linked list
*********************************************/
template <class T>
class LinkedQueue: public queueADT<T>
{
public:
    LinkedQueue();                                      //Constructor
    LinkedQueue(const LinkedQueue<T>& otherQueue);      //Constructor
    ~LinkedQueue();                                     //Destructor

    const LinkedQueue<T>& operator=(const LinkedQueue<T>& otherQueue);
    void Enqueue(const T& item);                        //adding new item
    void Dequeue();                                     //removing an item
    void InitializeQueue();                             //initialize queue
    bool IsEmptyQueue() const;                           //checking if queue is empty
    T Peek() const;                                     //accessing the peek
    T Back() const;                                     //accessing the back

private:
    Node<T> *head;
    Node<T> *tail;
    void CopyQueue(const LinkedQueue<T>& otherQueue);
};



/**************
* Constructor
**************/
template <class T>
LinkedQueue<T>::LinkedQueue()
{
    head = nullptr;
    tail = nullptr;
}

/*******************
* Copy Constructor
********************/
template <class T>
LinkedQueue<T>::LinkedQueue(const LinkedQueue<T> &otherQueue)
{
    head = nullptr;
    CopyQueue(otherQueue);
}

/**************
* Destructor
**************/
template<class T>
LinkedQueue<T>::~LinkedQueue()
{
    InitializeQueue();
}

/****************************
* Over Loading Assignment
****************************/
template <class T>
const LinkedQueue<T>& LinkedQueue<T>::operator=(const LinkedQueue<T> &otherQueue)
{
    if(this != &otherQueue)
        CopyQueue(otherQueue);
    return *this;
}

/**************
* Enqueue
**************/
template <class T>
void LinkedQueue<T>::Enqueue(const T &item)
{
    Node<T> *temp;
    temp = new Node<T>;

    temp->data = item;
    temp->next = nullptr;

    if(head == nullptr)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = tail->next;
    }
}

/**************
* Dequeue
**************/
template <class T>
void LinkedQueue<T>::Dequeue()
{
    Node<T> * temp;
    if(!IsEmptyQueue())
    {
        temp = head;
        head = head->next;
        delete temp;
        if(head == nullptr)
            tail = nullptr;
    }
    else
    {
        cout << "\n**** Can't remove from an empty queue *****\n";
    }
}


/**************
* Peek
**************/
template <class T>
T LinkedQueue<T>::Peek() const
{
    assert(head != nullptr);
    return head->data;
}

/**************
* Back
**************/
template <class T>
T LinkedQueue<T>::Back() const
{
    assert(tail == nullptr);
    return tail->data;
}

/**************
* Initialize Queue
**************/
template <class T>
void LinkedQueue<T>::InitializeQueue()
{
    Node<T> *temp;
    while(head != nullptr)
    {
        temp = head;
        head = head->next;
        delete temp;
    }
    tail = nullptr;
}

/**************
* Is Empty
**************/
template <class T>
bool LinkedQueue<T>::IsEmptyQueue() const
{
    return head == nullptr;
}


/**************
* Copy Queue
**************/
template <class T>
void LinkedQueue<T>::CopyQueue(const LinkedQueue<T> &otherQueue)
{
    Node<T> *temp, *current, *last;
    if(head != nullptr)
        InitializeQueue();
    if(otherQueue.head == nullptr)
        head = nullptr;
    else{
        current = otherQueue.head;
        head = new Node<T>;
        head->data = current->data;
        head->next = nullptr;
        last = head;
        current = current->next;

        while(current != nullptr)
        {
            temp = new Node<T>;
            temp->data = current->data;
            temp->next = nullptr;
            last->next = temp;
            last = temp;
            current = current->next;
        }
        tail = last;
    }
}


//----------------------------------------------------------------------------

/*********************************************
* Implementing a queue using linked list
*********************************************/

template <class T>
struct dNode
{
    T data;
    dNode<T> *next;
    dNode<T> *prev;
};

template <class T>
class DLinkedList
{
public:
    DLinkedList();                                  //Constructor
    DLinkedList(const DLinkedList<T>& otherDlist);  //Copy Constructor
    ~DLinkedList();                                 //Destructor
//    const DLinkedList<T>& operator=(const DLinkedList<T>& other);
    const DLinkedList<T>& operator=(const DLinkedList<T>& other);
    bool IsListEmpty() const;                       //Checking if double linked list is empty
    const T& Front() const;                         //Accessing the top element
    const T& Back() const;                          //Accessing the last element
    void AddFront(const T& element);                //Adding to the front of the double linked list
    void AddBack(const T& element);                 //Adding to the back of the double linked list
    void RemoveFront();                             //Removing from the front of the double linked list
    void RemoveBack();                              //Removing from the back of the double linked list

private:
    dNode<T> *header;
    dNode<T> *trailer;
    void CopyDList(const DLinkedList<T>& other);
};

/**************
* Constructor
**************/
template <class T>
DLinkedList<T>::DLinkedList()
{
    header = nullptr;
    trailer = nullptr;
}

/*******************
* Copy Constructor
********************/
template <class T>
DLinkedList<T>::DLinkedList(const DLinkedList<T>& otherDlist)
{
    header = nullptr;
    CopyDList(otherDlist);
}

/**************
* Destructor
**************/
template<class T>
DLinkedList<T>::~DLinkedList()
{
    dNode<T> *temp;
    while(header != nullptr)
    {
        temp = header;
        header = header->next;
        delete temp;
    }
}

/****************************
* Over Loading Assignment
****************************/
template <class T>
//const DLinkedList<T>& DLinkedList<T>::operator=(const DLinkedList<T>& other)
const DLinkedList<T>& DLinkedList<T>::operator=(const DLinkedList<T>& other)
{
    if(this != &other)
        CopyDList(other);
    return *this;
}

/****************************
* Access the top element
****************************/
template <class T>
const T &DLinkedList<T>::Front() const
{
//    assert(header != nullptr);
    return header->data;
}

/****************************
* Access the last element
****************************/
template <class T>
const T &DLinkedList<T>::Back() const
{
    return trailer->data;
}

/****************************
* Adding to the front
****************************/
template <class T>
void DLinkedList<T>::AddFront(const T& element)
{
    dNode<T> *temp;
    temp = new dNode<T>;
    temp->data = element;

    temp->next = header;
    if(header != nullptr)
    {
        header->prev = temp;
    }
    header = temp;
    if(trailer == nullptr)
    {
        trailer = header;
    }
}

/****************************
* Adding to the back
****************************/
template <class T>
void DLinkedList<T>::AddBack(const T &element)
{
    dNode<T> *temp = new Node<T>;
    temp->data = element;

    temp->prev = trailer;
    if(trailer != nullptr)
    {
        trailer->next = temp;
    }
    trailer = temp;
    if(header == nullptr)
    {
        header = trailer;
    }
}

/****************************
* Remove from the front
****************************/
template <class T>
void DLinkedList<T>::RemoveFront()
{
    dNode<T> *temp;
    if(header != nullptr)
    {
        temp = header;
        header = header->next;
        if(temp->data == trailer->data)
        {
            trailer = nullptr;
            delete trailer;
        }
        delete temp;
    }
}

/****************************
* Remove from the back
****************************/
template <class T>
void DLinkedList<T>::RemoveBack()
{
    dNode<T> *temp;
    if(trailer != nullptr){
        temp = trailer;
        trailer = trailer->prev;
        if(temp->data == header->data)
        {
           delete header;
           header = nullptr;
        }
        delete temp;
    }
}


/***********************
576 * checks for empty list
577 ***********************/
template<class T>
bool DLinkedList<T>::IsListEmpty() const
{
    return (header == nullptr);
}

/***********************
* copies the list
***********************/
template<class T>
void DLinkedList<T>::CopyDList(const DLinkedList<T> &other)
{
    dNode<T> *temp, *current;
    if(other.header == nullptr)
    {
        header = nullptr;
        trailer = nullptr;
    }
    else
    {
        current = other.header;
        header = new dNode<T>;
        header->data = current->data;
        header->next = nullptr;
        trailer = header;
        current = current->next;

        while(current != nullptr)
        {
            temp = new dNode<T>;
            temp->data = current ->data;
            temp->next = nullptr;
            temp->prev = trailer;
            trailer->next = temp;
            trailer = temp;
            current = current->next;
        }//end While
    }//End if else
}//End copy
#endif //HEADER_H
