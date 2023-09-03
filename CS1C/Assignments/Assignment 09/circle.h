#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "shape.h"
#include <iostream>
using namespace std;

class Circle: public Shape
{
public:
	Circle();
	Circle(int x, int y, int radius);
	~Circle();
	double calcArea();
	double calcPerimeter();
	void print();


private:
	int radius;
};



#endif /* CIRCLE_H_ */
