#include "circle.h"

const float PI = 3.14;

Circle::Circle()
{
	radius = 0;
}

Circle::Circle(int x, int y, int radius)
:Shape(x,y)
{
	this->radius = radius;
}

Circle::~Circle()
{

}

double Circle::calcArea()
{
	double area;
	area = PI * radius * radius;
	return area;
}

double Circle::calcPerimeter()
{
	double perimeter;
	perimeter = 2 * PI * radius;
	return perimeter;
}

void Circle::print()
{
	cout << "Circle properties are: \n"
		 << "X - position is : " << GetX() << ','
		 << "Y - position is : " << GetY() << endl;
	cout << "Area is " << calcArea() << endl;
	cout << "perimeter is " << calcPerimeter() << endl << endl;
}
