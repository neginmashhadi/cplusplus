#include <iostream>
#include <cassert>
using namespace std;

template <class Type>
struct Node
{
	Type data;
	Node *next;
	Node *previous;
};

template <class Type>
class doubleLinkedList
{
public:
	const doubleLinkedList<Type>& operator=(const doubleLinkedList<Type> &);
	doubleLinkedList();		// constructor
	doubleLinkedList(const doubleLinkedList<Type>& otherList); //copy constructor
	~doubleLinkedList();	//destructor

	void print() const;
	int  lenght() const;
	Type front() const;
	Type back() const;
	bool isEmpty() const;
	bool search(const Type& searchItem) const;

	void reverse();
	void initalizeList();
	void insert(const Type& insertItem);
	void deleteNode(const Type &deleteItem);
	void destroy();

protected:
	int count;
	Node<Type> *head;
	Node<Type> *tail;
private:
	void copyList(const doubleLinkedList<Type>& otherList);
};


template <class Type>
const doubleLinkedList<Type>& doubleLinkedList<Type>::
							  operator=(const doubleLinkedList<Type>& otherList)
{
	if(this != &otherList)
	{
		copyList(otherList);
	}
	return *this;
}


//constructor
template <class Type>
doubleLinkedList<Type>::doubleLinkedList()
{
	head = nullptr;
	tail = nullptr;
	count = 0;
}

//copy constructor
template <class Type>
doubleLinkedList<Type>::doubleLinkedList(const doubleLinkedList<Type>& otherList)
{
	head = nullptr;
	tail = nullptr;
	count = 0;
	copyList(otherList);
}

//destrctor
template <class Type>
doubleLinkedList<Type>::~doubleLinkedList()
{
	destroy();
}

template <class Type>
bool doubleLinkedList<Type>::isEmpty() const
{
	return (head == nullptr);
}

template <class Type>
void doubleLinkedList<Type>::destroy()
{
	Node<Type> *temp;
	while (head != nullptr)
	{
		temp = head;
		head = head->next;
		delete temp;
	}

	tail = nullptr;
	count = 0;
}

template <class Type>
void doubleLinkedList<Type>::initalizeList()
{
	destroy();
}

template <class Type>
int doubleLinkedList<Type>::lenght() const
{
	return count;
}

template <class Type>
void doubleLinkedList<Type>::print() const
{
	Node<Type> *current;

	current = head;
	while (current != nullptr)
	{
		cout << current->data << " ";
		current = current->next;
	}
}

template <class Type>
void doubleLinkedList<Type>::reverse()
{
	Node<Type> *temp = nullptr;
	Node<Type> *current = head;

	while(current != NULL)
	{
		temp = current->previous;
		current->previous = current->next;
		current->next = temp;
		current = current->previous;
	}

	if(temp != NULL)
	{
		head = temp->previous;
	}
}

template <class Type>
bool doubleLinkedList<Type>::search(const Type& searchItem) const
{
	bool found = false;
	Node<Type> *current;
	current = head;

	while(current != nullptr && !found)
	{
		if(current->data >= searchItem)
		{
			found = true;
		}
		else
		{
			current = current->next;
		}
	}
	if(found)
	{
		found = (current->data == searchItem);
	}
	return found;
}

template <class Type>
Type doubleLinkedList<Type>::front() const
{
	assert(head != nullptr);
	return head->data;
}

template <class Type>
Type doubleLinkedList<Type>::back() const
{
	assert(tail != nullptr);
	return tail->data;
}

template <class Type>
void doubleLinkedList<Type>::insert(const Type& insertItem)
{
	Node<Type> *current;
	Node<Type> *trailCurrent;
	Node<Type> *newNode;
	bool found;

	newNode = new Node<Type>;
	newNode->data = insertItem;
	newNode->next = nullptr;
	newNode->previous = nullptr;

	if(head == nullptr)
	{
		head = newNode;
		tail = newNode;
		count++;
	}//end if
	else
	{
		found = false;
		current = head;
		while(current != nullptr && !found)
		{
			if(current->data >= insertItem)
			{
				found = true;
			}
			else
			{
				trailCurrent = current;
				current = current->next;
			}
		}//end while

		if(current == head)
		{
			head->previous = newNode;
			newNode->next = head;
			head = newNode;
			count++;
		}
		else
		{
			if(current != nullptr)
			{
				trailCurrent->next = newNode;
				newNode->previous = trailCurrent;
				newNode->next = current;
				current->previous = newNode;
			}
			else
			{
				trailCurrent->next = newNode;
				newNode->previous = trailCurrent;
				tail = newNode;
			}
			count ++;
		}//end else
	}//end else

}

template <class Type>
void doubleLinkedList<Type>::deleteNode(const Type& deleteItem)
{
	Node<Type> *current;
	Node<Type> *trailCurrent;
	bool found;

	if(head == nullptr)
	{
		cout << "\ncan't remove from an empty list\n";
	}
	else if(head->data == deleteItem)
	{
		current = head;
		head = head->next;
		if(head != nullptr)
		{
			head->previous = nullptr;
		}
		else
		{
			tail = nullptr;
		}
		count--;
		delete current;
	}
	else
	{
			found = false;
			current = head;
			while(current != nullptr && !found)
			{
				if(current->data == deleteItem)
				{
					found = true;
				}
				else
				{
					current = current->next;
				}
			}
			if(current == nullptr)
			{
				cout << "\nThe item is not in the list\n";
			}
			else if(current->data == deleteItem)
			{
				trailCurrent = current->previous;
				trailCurrent->next = current->next;
				if(current->next != nullptr)
				{
					current->next->previous = trailCurrent;
				}
				if(current == tail)
				{
					tail = trailCurrent;
				}
				count--;
				delete current;
			}
			else
			{
				cout << "\nThe item is not in the list\n";
			}
	}
}

template <class Type>
void doubleLinkedList<Type>::copyList(const doubleLinkedList<Type>& otherList)
{
	Node<Type> *current;
	if(head != nullptr)
	{
		destroy();
	}

	if(otherList.head == nullptr)
	{
		head = nullptr;
		tail = nullptr;
		count = 0;
	}
	else
	{
		current = otherList.head;
		count = otherList.count;

		while(current != nullptr)
		{
			insert(current->data);
			current = current->next;
		}
	}
}
