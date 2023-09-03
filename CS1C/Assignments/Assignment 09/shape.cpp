#include "shape.h"

Shape::Shape()
:Shape(0,0)
{

}

Shape::~Shape() {}

int Shape::GetX()
{
	return x;
}

int Shape::GetY()
{
	return y;
}

void Shape::move(int newX, int newY)
{
	x = newX;
	y = newY;
}

void Shape::UpdateDimensions(int width, int height)
{

}
