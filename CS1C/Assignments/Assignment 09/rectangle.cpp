#include "rectangle.h"

Rectangle::Rectangle()
{

}

Rectangle::Rectangle(int x, int y, int width, int height)
:Shape(x,y)
{
	this->width = width;
	this->height = height;
}

Rectangle::~Rectangle()
{

}

double Rectangle::calcArea()
{
	double area;
	area = width * height;
	return area;
}

double Rectangle::calcPerimeter()
{
	double preimeter;
	preimeter = 2 * (width + height);
	return preimeter;
}

void Rectangle::print()
{
	cout << "Rectangle properties are: \n";
	cout << "X - position is: " << GetX()<< ',' << " y - position is: " << GetY() << endl;
	cout << "Area is " << calcArea() << endl;
	cout << "Perimeter is " << calcPerimeter() << endl << endl;
}

void Rectangle::UpdateDiemnsion(int newWidth, int newHeight)
{
	width = newWidth;
	height = newHeight;
}


void PrintArea(Rectangle &rect)
{
	cout << "Area is " << rect.calcArea() << endl;
}

void PrintPerimeter(Rectangle &rect)
{
	cout << "Perimeter is " << rect.calcPerimeter() << endl;
}
