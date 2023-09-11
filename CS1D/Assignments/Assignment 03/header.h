#ifndef HEADER_H
#define HEADER_H

#include <fstream>
#include <iostream>
using namespace std;

class vectorAdt
{
public:
    vectorAdt(int initialSize);
    int at(int index);
    void set(int index, int data);
    void insert(int index, int data);
    void erase(int index);
    void remove_front();
    void ensure_capacity();
    void push_back(int data);
    void push_front(int data);
    int getIndex(int index);
    int sizeOfAr() const;
    void print() const;
    bool empty();
    bool full() const;

private:
    int size;
    int *array;
    int front;
    int rear;
};

/************************************
* Initializes the class vector
************************************/
vectorAdt::vectorAdt(int initialSize) {
    size = initialSize;
    front = rear = -1;
    array = new int[size];
    for(int i = 0; i < size; i++)
        array[i] = 0;
}


/************************************
* Return the Index
************************************/
int vectorAdt::getIndex(int index) {
    if(front < rear)
    {
        index += front;
    }
    else
    {
        if(size - front >= index)
        {
            index += front;
        }
        else {
            index -= (size - front);
        }
    }
    return index;
}

/************************************
* Accessing data at an index
************************************/
int vectorAdt::at(int index) {
    return array[getIndex(index)];
}

/************************************
* Set data at a given index
************************************/
void vectorAdt::set(int index, int data) {
    if(index < size)
    {
        array[getIndex(index)] = data;
    }
}

/***************************************************
* Increases the size of array when out of bounds
***************************************************/
void vectorAdt::ensure_capacity() {
    if(full())
    {
        int *newSize = new int[size * 2];
        if(front < rear)
        {
            for(int i = 0; i < rear - front; i++)
            {
                newSize[i] = array[front + i];
            }
        }
        else
        {
            int temp = 0;
            for(int i = front; i < size; i++)
            {
                newSize[temp++] = array[i];
            }
            for(int i = 0; i <= rear; i++)
            {
                newSize[temp++] = array[i];
            }
        }
        delete[] array;
        array = newSize;
        front = 0;
        rear = size;
        size *= 2;
    }
}

/************************************
* Adds to the front of the array
************************************/
void vectorAdt::push_front(int data)
{
    ensure_capacity();
    //checking if its empty
    if(front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if(front == 0)
        front = size - 1;
    else
        front -= 1;

    array[front] = data;
}

/************************************
* Adds to the back of the array
************************************/
void vectorAdt::push_back(int data) {
    ensure_capacity();
    array[rear++] = data;
}

/************************************
* Adds to the middle of the array
************************************/
void vectorAdt::insert(int index, int data) {
    if(front < rear)
    {
        int temp = array[rear-1];
        index += front;
        for(int j = rear-1; j >= index; j--)
        {
            array[j+1] = array [j];
        }
        array[index] = data;
        push_back(temp);
    }else
    {
        if(size - front > index)
        {
            int temp = array[size-1];
            for(int j = size -1; j >= index+front; j--)
            {
                array[j+1] = array[j];
            }
            array[index+front] = data;
            push_front(temp);
        }
        else
        {
            index -= (size - front);
            for(int j = rear -1; j >= index; j--)
            {
                array[j+1] = array[j];
            }
            array[index] = data;
        }
    }
}

/************************************
* Return the size of the Array
************************************/
int vectorAdt::sizeOfAr() const
{
    return size;
}

/****************************************
* deletes from the middle of the array
*****************************************/
void vectorAdt::erase(int index)
{
    if(index < 0 || size == 0)
    {
        cout << "can't remove from array!";
    }
    else
    {
        if(front < rear)
        {
            for(int j = front + index; j <= rear; j++)
            {
                array[j] = array[j+1];
            }
            rear--;
        }
        else
        {
            if(front > rear)
            {
                if((index + front) <= size)
                {
                    for(int i = front + index; i < index; i--)
                    {
                        array[i] = array[i+1];
                    }
                    front = (front + 1) % size;
                }
                else
                {
                    index -= size - front;
                    for(int i = 0; i < index; i--)
                    {
                        array[i] = array[i+1];
                    }
                    rear = (rear + 1) % size;
                }
            }
        }
    }
}

/****************************************
* Remove front
*****************************************/
void vectorAdt::remove_front() {
    front += 1 % size;

    //front = (front + 1) % size;
}

/****************************************
* Checks if the vector is full
*****************************************/
bool vectorAdt::full() const
{
    return (front == -1 && rear == -1) || front == rear + 1;
}

/****************************************
* Checks if vector is empty
*****************************************/
bool vectorAdt::empty()
{
    return front == -1 || rear == -1;
}

/****************************************
* Print Vector
*****************************************/
void vectorAdt::print() const
{
    if(front < rear)
    {
        for(int i = 0; i < rear - front; i++)
        {
            cout << "Item " << i + 1 << " is " << array[front + i] << endl;
        }
    }
    else
    {
        int temp = 0;
        for(int i = front; i <= rear; i++)
        {
            cout << "Item" << temp + 1 << " is " << array[i] << endl;
        }
        for(int j = 0; j <= rear; j++)
        {
            cout << "Item" << temp + 1 << " is " << array[j] << endl;
        }
    }
}
#endif //HEADER_H
