/******************************************************************************
* AURHOR : Negin Mashhadi
* ASSIGNMENT#2 : Binary Tree
* CLASS : CS1D
* DUE DATE : 02/04/2019
* ****************************************************************************/

#include "header.h"
#include <fstream>

int main() {

    ifstream fin;
    int num;
    string fileName = "numFile.txt";
    binaryTree<int> treeRoot;
    binaryTree<int> tree;


    cout << "******************************************************* " << endl;
    cout << "* Assignment 04 * " << endl;
    cout << "* Negin Mashhadi * " << endl;
    cout << "* CS1D MW 2.30PM * " << endl;
    cout << "******************************************************* " << endl;
    cout << endl;

    cout << "-----------------------------------------------------------------\n"
            "This program will Store the following data using properties of a\n"
            "binary search tree. \n"
            "109, 55, 118, 89, 33, 1001, 18, 44, 88, 12, 24, 49, 7, 25, 59, 28,\n"
            "19, 13, 888\n"
            "The data is read in from an input file onto the binary Tree and \n"
            "inorder, Preorder, postorder, breadth-first traversals are\n"
             "preformed on the binary tree.\n"
            "The Binary tree is also printed out by level\n"
            "-------------------------------------------------------------------"
            "\n\n";

    fin.open(fileName.c_str());
    {
        while (fin)
        {
            fin >> num;
            fin.ignore(1000, '\n');
            treeRoot.insert(num);
        }
    }
    fin.close();


    cout << "*********************\n"
            " Tree Height\n"
            "*********************\n";
    cout << "\t" << treeRoot.treeHeight() << endl;

    cout << "*********************\n"
            " Number of Nodes\n"
            "*********************\n";
    cout << "\t" << treeRoot.treeNodeCount() << endl;

    cout << "*********************\n"
            " Number of Leaves\n"
            "*********************\n";

    cout << "\t" << treeRoot.treeLeavesCount() << endl;

    cout << "*********************\n"
            " Inorder Traversal\n"
            "*********************\n";

    treeRoot.inOrderTraversal();

    cout << "\n*********************\n"
            " preorder Traversal\n"
            "*********************\n";
    treeRoot.preOrderTraversal();

    cout << "\n*********************\n"
            " postorder Traversal\n"
            "*********************\n";
    treeRoot.postOrderTraversal();

    cout << "\n***************************\n"
            " Breadth_first Traveversal\n"
            "****************************\n";
    treeRoot.breadthFirstTraversal();

    cout << "\n\n*********************\n"
            " Tree level order\n"
            "*********************\n";
    treeRoot.levelOrder();
    cout << "\n\n****************************\n"
            " Parent child relationship\n"
            "*****************************\n";

    treeRoot.print2D();

    return 0;
}
