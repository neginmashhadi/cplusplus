#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "shape.h"
#include <iostream>
using namespace std;

class Rectangle: public Shape
{
	friend void printArea(Rectangle &rect);
	friend void printPerimeter(Rectangle &rect);

public:
	Rectangle();
	Rectangle(int x, int y, int width, int height);
	~Rectangle();
	double calcArea();
	double calcPerimeter();
	void print();
	void UpdateDiemnsion(int newWidth, int newHeight);
private:
	int height;
	int width;
};



#endif /* RECTANGLE_H_ */
