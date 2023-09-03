#include<iostream>
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
using namespace std;

int main()
{
	Rectangle rec1;
	Triangle  tri;
	Circle    circle;
	int length, width, side1, side2, side3, radius;
	char coordChoice, choice;
	int xCoord, yCoord;



	cout << "Welcome to my program\n\n";
	cout << "Please enter the width and the length of the rectangle: \n";
	cout << "length: ";
	cin  >> length;
	cout << "Width: ";
	cin  >> width;

	rec1 = Rectangle(0,0,length,width);

	cout << "\nPlease enter the three sides of the triangle: \n";
	cout << "side 1: ";
	cin  >> side1;
	cout << "side 2: ";
	cin  >> side2;
	cout << "side 3: ";
	cin  >> side3;

	if(side1 + side2 > side3)
	{
		tri  = Triangle(0,0, side1,side2,side3);
	}
	else
	{
		cout << "the sides entered cannot make a triangle\n";
	}

	cout << "\nPlease enter the radius of the circle: ";
	cin  >> radius;
	circle = Circle(0,0,radius);

	cout << endl;

	rec1.print();
	tri.print();
	circle.print();

	cin.ignore(1000, '\n');

	cout << "Would you like to change the x and y coordinate? (Y/N)\n";
	cin.get(coordChoice);
	cin.ignore(1000, '\n');
	switch(toupper(coordChoice))
	{
	case 'Y': cout << "\nPlease enter the x and y coordinate you want to start from!\n";
			  cout << "X-Coordinate: ";
			  cin  >> xCoord;
			  cout << "Y-Coordinate: ";
			  cin  >> yCoord;
			  rec1.move(xCoord,yCoord);
			  rec1.print();
			break;
	case 'N': cout << "\nThe coordinates will stay the same\n";
		break;
	default : cout << "Please either enter Y or N";
			break;
	}


	cout << "Would you like to change the Dimensions? (Y/N)\n";
	cin.get(choice);

	switch(toupper(choice))
	{
	case 'Y': cout << "\nPlease enter the new dimensions!\n";
			  cout << "length: ";
			  cin  >> length;
			  cout << "Width: ";
			  cin  >> width;
			  rec1.UpdateDiemnsion(length,width);
			  rec1.print();

			break;
	case 'N': cout << "\nThe dimensions will stay the same\n";
		break;
	default : cout << "Please either enter Y or N";
			break;
	}



	return 0;
}



