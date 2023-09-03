#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "shape.h"
#include<iostream>
using namespace std;

class Triangle: public Shape
{
	friend void printArea(Triangle &tri);
	friend void printPerimeter(Triangle &tri);

public:
	Triangle();
	Triangle(int x, int y, int base, int height, int hypotenuse);
	~Triangle();
	double calcArea();
	double calcPerimeter();
	void print();
	void UpdateDiemnsion(int newBase, int newHeight);

private:
	int base;
	int height;
	int hypotenuse;
};



#endif /* TRIANGLE_H_ */
