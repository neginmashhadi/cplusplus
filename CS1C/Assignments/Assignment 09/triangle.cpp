#include "triangle.h"

Triangle::Triangle()
{

}

Triangle::Triangle(int x, int y, int base, int height, int hypotenuse)
:Shape(x,y)
{
	this->base   = base;
	this->height = height;
	this->hypotenuse = hypotenuse;
}

Triangle::~Triangle()
{

}

double Triangle::calcArea()
{
	double area;
	area = (base * height) / 2;
	return area;
}

double Triangle::calcPerimeter()
{
	double perimeter;
	perimeter = base + height + hypotenuse;
	return perimeter;
}

void Triangle::print()
{
	cout << "Triangle properties are: \n";
	cout << "X - position is: " << GetX()<< ',' << " y - position is: " << GetY() << endl;
	cout << "Area is " << calcArea() << endl;
	cout << "Perimeter is " << calcPerimeter() << endl << endl;
}

void PrintArea(Triangle &tri)
{
	cout << "Area is " << tri.calcArea() << endl;
}

void PrintPerimeter(Triangle &tri)
{
	cout << "Perimeter is " << tri.calcPerimeter() << endl;
}
