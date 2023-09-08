/*****************************************************************************
* AUTHOR : Negin Mashhadi
* ASSIGNMENT #2 : Stacks/Queue/Deque
* CLASS : CS1D
* DUE DATE : 02/04/2019
****************************************************************************/
#ifndef QUEUEADT_H
#define QUEUEADT_H

template <class T>
class queueADT{

    virtual T Peek() const = 0;
    virtual T Back() const = 0;
    virtual bool IsEmptyQueue() const = 0;
    virtual void InitializeQueue() = 0;
    virtual void Enqueue(const T& item) = 0;
    virtual void Dequeue() = 0;

};


#endif //QUEUEADT_H
