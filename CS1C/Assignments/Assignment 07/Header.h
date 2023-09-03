/************************************************************
* PROGRAMMED BY : Negin Mashhadi
* STUDENT ID    : 1084104
* CLASS         : TTH : 9:30 - 10:50am
* LAB #7        : HW07
************************************************************/

#ifndef HW07HEADER_H_
#define HW07HEADER_H_

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
namespace tax
{
	const float taxRate = 8.25;
}

const int MAX_SIZE = 50;

struct Item
{
	string name;
	int    quantity;
	double  cost;
	Item(string name, int quantity, double cost) : name{ name }, quantity{ quantity }, cost{ cost } {};
};


#endif /* HW07HEADER_H_ */

