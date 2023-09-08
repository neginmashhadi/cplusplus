/*****************************************************************************
* AUTHOR : Negin Mashhadi
* ASSIGNMENT #2 : Stacks/Queue/Deque
* CLASS : CS1D
* DUE DATE : 02/04/2019
****************************************************************************/
#ifndef STACKADT_H
#define STACKADT_H

template <class T>
class stackADT
{
public:
    virtual void InitializeStack() = 0;
    virtual bool IsEmpty() const = 0;
    virtual void Push(const T& item) = 0;
    virtual void Pop() = 0;
    virtual T Top() =0;
};


#endif //STACKADT_H
