/******************************************************************************
* AURHOR : Negin Mashhadi
* ASSIGNMENT#3 : Extendable Array
* CLASS : CS1D
* DUE DATE : 02/11/2019
* ****************************************************************************/
#include "header.h"

/***************************************************************************
* This program implements a a vector class that creats a circular array
* which the insertion and deletion in the begining of the array run in
* constanat time and inserting/deleting from the middle will run O(n).
* The data used for this program is given and the begining size of the
* array is 4 and it will increase it's size dynamically.
*************************************************************************/


int main() {

    cout << "******************************************************* " << endl;
    cout << "*                  Assignment 03                      *" << endl;
    cout << "*                 Negin Mashhadi                      * " << endl;
    cout << "*                  CS1D MW 2.30PM                     * " << endl;
    cout << "******************************************************* " << endl;
    cout << endl;

    cout << "----------------------------------------------------------------\n"
    "The methods for the vector ADT are: \n"
    "at(int i)\n"
    "insert(int i, e)\n"
    "set(int i, e)\n"
    "erase(int i)\n"
    "size()\n"
    "empty()\n"
    "This program does not use <vector> STL\n"
    "The intial size of array is 4\n"
    "----------------------------------------------------------------\n\n";

    vectorAdt numAr = vectorAdt(0);

    cout << "******************\n"
            " check Empty\n"
            "******************\n";
    if(numAr.empty())
      cout << "the vector is empty\n";
    else
        cout << "the vector is not empty";

    numAr = vectorAdt(4);
    cout << "\n\n******************\n"
            "\tSize\n"
            "******************" << endl;

    cout << "The size is " << numAr.sizeOfAr() << endl << endl;
    cout << "**************************************\n"
            "Inserting the following data:\n"
            " 14, 5, 4, 1, 22, 33, 44, 88\n"
            "**************************************\n";
    numAr.push_back(14);
    numAr.push_back(5);
    numAr.push_back(4);
    numAr.push_back(1);
    numAr.push_back(22);
    numAr.push_back(33);
    numAr.push_back(44);
    numAr.push_back(88);
    numAr.print();

    cout << "**************************************\n"
            "Inserting the following data:\n"
            " 14, 5, 4, 1, 22, 33, 44, 88\n"
            "**************************************\n";
    numAr.push_back(14);
    numAr.push_back(5);
    numAr.push_back(4);
    numAr.push_back(1);
    numAr.push_back(22);
    numAr.push_back(33);
    numAr.push_back(44);
    numAr.push_back(88);
    numAr.print();

    cout << "\n\n******************\n"
            "\tSize\n"
            "******************" << endl;
    cout << "The size is " << numAr.sizeOfAr() << endl << endl;
    cout << "\n******************\n"
    " deleting 14\n"
    "******************\n";
    numAr.remove_front();
    numAr.print();

    cout << "\n******************\n"
    " deleting 1\n"
    "******************\n";
    numAr.erase(2);
    numAr.print();

    cout << "\n*********************\n"
            "Inserting 9 at front\n"
            "*********************\n";
    numAr.push_front(9);
    numAr.print();

    cout << "\n*********************\n"
    "Insert 7 after 33\n"
    "*********************\n";
    numAr.insert(4, 7);
    numAr.print();

    cout << "\n*********************\n"
            "Insert 44 at the end\n"
            "*********************\n";
    numAr.push_back(44);
    numAr.print();
    return 0;
}
