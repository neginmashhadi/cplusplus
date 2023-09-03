#ifndef QUEUEARRAY_H_
#define QUEUEARRAY_H_

#include <iostream>
#include <cassert>
#include "queueADT.h"
using namespace std;

template <class Type>
class queueType: public queueADT<Type>
{
public:
    queueType(int queueSize = 100);
    queueType(const queueType<Type>& otherQueue);
    ~queueType();

    const queueType<Type>& operator=(const queueType<Type>&);

    bool isEmptyQueue() const;
    bool isFullQueue() const;
    void initializeQueue();
    Type peek() const;
    Type back() const;
    void addQueue(const Type& queueElement);
    void deleteQueue();
    void print() const;

private:
    int maxSize;
    int count;
    int front;
    int rear;
    Type *list;
};

//Constructor
template <class Type>
queueType<Type>::queueType(int queueSize)
{
	if (queueSize <= 0)
	{
		cout << "Size of the array to hold the queue must be positive."
			 << "Creating an array of size 100.\n";
		maxSize = 100;
	}
	else
	{
		maxSize = queueSize;   //set maxQueueSiz to queueSize
		front = 0;                 //initialize queueFront
		rear = 0;   //initialize queueRear
		count = 0;
		list = new Type[maxSize];  //create the array to hold the queue elements
	}
} //end constructor


template <class Type>
queueType<Type>::queueType(const queueType<Type>& otherQueue)
{
	maxSize = otherQueue.maxSize;
    front = otherQueue.front;
    rear   = otherQueue.maxSize - 1;
    count  = otherQueue.count;
    list   = otherQueue.list;
} //end copy constructor


//Destructor
template <class Type>
queueType<Type>::~queueType()
{
	delete [] list;
} //end destructor


template <class Type>
bool queueType<Type>::isEmptyQueue() const
{
	bool empty = true;
	empty = count == 0;
	return empty;
} //end isEmptyQueue

template <class Type>
bool queueType<Type>::isFullQueue() const
{
	bool full = true;
	full = count == maxSize ;
    return full;
} //end isFullQueue

template <class Type>
void queueType<Type>::initializeQueue()
{
    front = 0;
    rear = 0;
    count = 0;
} //end initializeQueue

template <class Type>
Type queueType<Type>::peek() const
{
    assert(!isEmptyQueue());
    return list[front];
} //end front

template <class Type>
Type queueType<Type>::back() const
{
    assert(!isEmptyQueue());
    return list[rear];
} //end back

template <class Type>
void queueType<Type>::addQueue(const Type& newElement)
{

	try
	{
		if(isFullQueue())
		{
			throw -1;
		}
		list[rear] = newElement;
		rear = (rear + 1) % maxSize;
		count++;
	}
	catch(int){
		cout << "Cannot add to a full queue." << endl;
	}
} //end addQueue

template <class Type>
void queueType<Type>::deleteQueue()
{

	try
	{
		if(isEmptyQueue())
		{
			throw 1;
		}
		front = (front + 1) % maxSize;
		count--;
	}
	catch(int)
	{
		cout << "Cannot remove from an empty queue." << endl;
	}
} //end deleteQueue



template <class Type>
const queueType<Type>& queueType<Type>::operator=
	                   (const queueType<Type>& otherQueue)
{
	if(this != &otherQueue)
		{
			delete [] list;
			maxSize = otherQueue.maxSize;
			count   = otherQueue.count;
			list 	= new Type[maxSize];
			for (int i = 0; i < count; i++)
			{
				list[i] = otherQueue.list[i];
			}
		}
		return *this;
} //end assignment operator



template <class Type>
void queueType<Type>::print() const
{
	int count;
	if ( front >= rear)
	{
		for(count = front; count < maxSize; count++)
		{
			cout << list[count] << " ";
		}
		for(count = 0; count < rear; count++)
		{
			cout << list[count] << " ";
		}

	}
	else
	{
		for(count = front; count < rear; count++)
		{
			cout << list[count] << " ";
		}
		cout << endl;
	}
}


#endif /* QUEUEARRAY_H_ */
