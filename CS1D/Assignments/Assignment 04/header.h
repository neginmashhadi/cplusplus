#pragma

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <queue>
using namespace std;

template <class Type>
struct Node{
    Type data;
    Node<Type> *leftLink;
    Node<Type> *rightLink;
};

template <class Type>
class binaryTree
{
public:
    binaryTree();                                       //constructor
    binaryTree(const binaryTree<Type>& otherTree);      //copy constructor
    ~binaryTree();                                      //destructor

    const binaryTree<Type>& operator=(const binaryTree<Type>&); //overload assignment
    bool isEmpty() const;                               //checking if tree is empty
    void inOrderTraversal() const;                      //Traversing the tree in order
    void preOrderTraversal() const;                     //Traversing the tree in pre-order
    void postOrderTraversal() const;                    //Traversing the tree in post-order
    void breadthFirstTraversal();                       //Breadth first search
    int treeHeight() const;                             //returns height of the tree
    int treeNodeCount() const;                          //returns the counts of nodes
    int treeLeavesCount() const;                        //returns the count of the leaves
    void destroyTree();                                 //erasing the tree
    bool search(const Type& item);                      //searching if an item exists
    void insert(const Type& item);                      //adding an item to the tree
    void deleteNode(const Type& item);                  //removing a node
    void levelOrder();                                  //returning the levels of the tree
    void print2D();                                     //printing the tree

private:
    Node<Type> *root;
    void CopyTree(Node<Type>* &copiedTreeRoot, Node<Type>* otherTree);
    void destroy(Node<Type> *p);
    void inOrder(Node<Type> *p) const;
    void preOrder(Node<Type> *p) const;
    void postOrder(Node<Type> *p) const;
    int height(Node<Type> *p) const;
    int max(int x, int y) const;
    int nodeCount(Node<Type> *p) const;
    int leavesCount(Node<Type> *p, int count) const;
    void deleteFromTree(Node<Type> *&p);
    void breadthFirst(Node<Type> *p);
    void levelOrder(Node<Type> *p);
    void print2DUtil(Node<Type> *root, int space, int count);

};

/* Constructor */
template <class Type>
binaryTree<Type>::binaryTree()
{
    root = nullptr;
}

/* Copy Constructor */
template <class Type>
binaryTree<Type>::binaryTree(const binaryTree<Type> &otherTree)
{
    if(otherTree.root == nullptr)
    {
        root = nullptr;
    }
    else
    {
        copyTree(otherTree);
    }
}

/* Destructor */
template <class Type>
binaryTree<Type>::~binaryTree()
{
    destroy(root);
}

/* Over load assignment  */
template <class Type>
const binaryTree<Type>& binaryTree<Type>::operator=(const binaryTree<Type>& otherTree)
{
    if(this != otherTree)
    {
        if(root != nullptr)
            destroy(otherTree);
        if(otherTree.root == nullptr)
            root = nullptr;
        else
            copyTree(otherTree);
    }
    return *this;
}

/* checking if Tree is Empty */
template <class Type>
bool binaryTree<Type>::isEmpty() const
{
    return root == nullptr;
}

/* Traversing the Tree In-Order */
template <class Type>
void binaryTree<Type>::inOrderTraversal() const
{
    inOrder(root);
}

/* Traversing the Tree Pre-Order */
template <class Type>
void binaryTree<Type>::preOrderTraversal() const
{
    preOrder(root);
}

/* Traversing the Tree Post-Order */
template <class Type>
void binaryTree<Type>::postOrderTraversal() const
{
    postOrder(root);
}

/* Returning Tree Height  */
template <class Type>
int binaryTree<Type>::treeHeight() const
{
    return height(root);
}

/* Returning Node Count  */
template <class Type>
int binaryTree<Type>::treeNodeCount() const
{
    return nodeCount(root);
}

 /* Returning Leaves Count */
template <class Type>
int binaryTree<Type>::treeLeavesCount() const
{
    return leavesCount(root, 0);
}

/* Erasing Tree */
template <class Type>
void binaryTree<Type>::destroyTree() {
    destroy(root);
}


/* Private Attributes */
template <class Type>
void binaryTree<Type>::CopyTree(Node<Type> *&copiedTree, Node<Type> *otherTree)
{
    if( otherTree == nullptr)
        copiedTree = nullptr;
    else
    {
        copiedTree = new Node<Type>;
        copiedTree->data = otherTree->data;
        copiedTree(copiedTree->leftLink, otherTree->leftLink);
        copiedTree(copiedTree->rightLink, otherTree->rightLink);
    }
}

template <class Type>
void binaryTree<Type>::destroy(Node<Type> *p)
{
    if( p != nullptr )
    {
        destroy(p->leftLink);
        destroy(p->rightLink);
        delete p;
        p = nullptr;
    }
}

template <class Type>
void binaryTree<Type>::inOrder(Node<Type> *p) const
{
    if(p != nullptr)
    {
        inOrder(p->leftLink);
        cout << p->data << " ";
        inOrder(p->rightLink);
    }
}

template <class Type>
void binaryTree<Type>::preOrder(Node<Type> *p) const
{
    if(p != nullptr)
    {
        cout << p->data << " ";
        preOrder(p->leftLink);
        preOrder(p->rightLink);
    }
}

template <class Type>
void binaryTree<Type>::postOrder(Node<Type> *p) const
{
    if(p != nullptr)
    {
        postOrder(p->rightLink);
        postOrder(p->leftLink);
        cout << p->data << " ";
    }
}

template <class Type>
int binaryTree<Type>::height(Node<Type> *p) const
{
    if(p == nullptr)
    {
        return 0;
    }
    else
    {
        return 1 + max(height(p->leftLink), height(p->rightLink));
    }
}

template <class Type>
int binaryTree<Type>::max(int x, int y) const
{
    return x >= y ? x : y;
}

template <class Type>
int binaryTree<Type>::nodeCount(Node<Type> *p) const
{
    if(p == nullptr)
        return 0;
    return 1 + nodeCount(p->leftLink ) + nodeCount(p->rightLink);
}

template <class Type>
int binaryTree<Type>::leavesCount(Node<Type> *p, int count) const
{
    if(p == nullptr)
        return 0;
    else if(p->leftLink == nullptr && p->rightLink == nullptr)
        return 1 + count;
    else
        return leavesCount(p->leftLink, count) + leavesCount(p->rightLink,count);
}

template <class Type>
bool binaryTree<Type>::search(const Type &item)
{
    Node<Type> *current;
    bool found = false;
    if(root == nullptr)
        cout << "Cannot search an empty tree!\n";
    else
    {
        current = root;
        while (current != nullptr && !found)
        {
            if(current->data == item)
                found = true;
            else if(current->data > item)
                current = current->leftLink;
            else
                current = current->rightLink;

        }
    }
    return found;
}

template <class Type>
void binaryTree<Type>::insert(const Type &item)
{
    Node<Type> *current;
    Node<Type> *pre;
    Node<Type> *newNode;

    newNode = new Node<Type>;
    newNode->data = item;
    newNode->leftLink = nullptr;
    newNode->rightLink = nullptr;

    if(root == nullptr)
    {
        root = newNode;
    }
    else
    {
        current = root;
        pre = current;
        while (current != nullptr)
        {
            pre = current;
            if(current->data >= item)
                current = current->leftLink;
            else
                current = current->rightLink;
        }

        if(pre->data > item)
            pre->leftLink = newNode;
        else
            pre->rightLink = newNode;
    }
}

template <class Type>
void binaryTree<Type>::deleteNode(const Type &item)
{
    Node<Type> *current;
    Node<Type> *tailCurrent;
    bool found = false;

    if(root == nullptr)
        cout << "Cannot remove from an empty tree\n";
    else
    {
        current = root;
        tailCurrent = root;

        while (current != nullptr && !found)
        {
            if(current->data == item)
                found = true;
            else
            {
                tailCurrent = current;
                if(current->data > item)
                    current = current->leftLink;
                else
                    current = current->rightLink;
            }
        }

        if(current == nullptr)
            cout << "The item to be deleted is not in the tree\n";
        else if(found)
        {
            if(current == root)
            {
                deleteNode(root);
            }
            else if(tailCurrent->data > item)
                deleteFromTree(tailCurrent->leftLink);
            else
                deleteFromTree(tailCurrent->rightLink);
        }
        else
            cout << "The item is not in the tree\n";
    }
}

template <class Type>
void binaryTree<Type>::deleteFromTree(Node<Type> *&p)
{
    Node<Type> *current;
    Node<Type> *tailCurrent;
    Node<Type> *temp;

    if(p == nullptr)
        cout << "The node does not exists and can't be deleted\n";
    else if(p->leftLink == nullptr && p->rightLink == nullptr)
    {
        temp = p;
        p = nullptr;
        delete temp;
    }
    else
    {
        current = p->leftLink;
        tailCurrent = nullptr;

        while(current->rightLink != nullptr)
        {
            tailCurrent = current;
            current = current->rightLink;
        }
        p->data = current->data;
        if(tailCurrent == nullptr)
            p->rightLink = current->leftLink;
        else
            tailCurrent->rightLink = current->leftLink;

        delete current;
    }
}

template <class Type>
void binaryTree<Type>::breadthFirst(Node<Type> *p)
{
    queue<Node<Type>*> q;
    q.push(p);
    while (!q.empty())
    {
        Node<Type> *current = q.front();
        q.pop();
        cout << current->data << " ";
        if(current->leftLink != nullptr)
            q.push(current->leftLink);
        if(current->rightLink != nullptr)
            q.push(current->rightLink);
    }
}

template <class Type>
void binaryTree<Type>::breadthFirstTraversal() {
    breadthFirst(root);
}

template <class Type>
void binaryTree<Type>::levelOrder(Node<Type> *p)
{
    queue<Node<Type>*> q;
    q.push(p);
    while (!q.empty())
    {
        int size = q.size();
        for(int i = 0; i < size; i++)
        {
            Node<Type> *current = q.front();
            q.pop();
            cout << current->data << " ";
            if(current->leftLink != nullptr)
                q.push(current->leftLink);
            if(current->rightLink != nullptr)
                q.push(current->rightLink);
        }
        cout << endl;
    }
}


template <class Type>
void binaryTree<Type>::levelOrder() {
    levelOrder(root);
}

template <class Type>
void binaryTree<Type>::print2DUtil(Node<Type> *root, int space, int count)
{
    // Base case
     if (root == NULL)
    return;

    // Increase distance between levels
    space += count;

    // Process right child first
    print2DUtil(root->rightLink, space,count);

    // Print current node after space
    // count
    printf("\n");
    for (int i = count; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);

    // Process left child
    print2DUtil(root->leftLink, space,count);
}// Wrapper over print2DUtil()


template <class Type>
void binaryTree<Type>::print2D()
{
    print2DUtil(root, 0, 10 );
}

#endif //HEADER_H
