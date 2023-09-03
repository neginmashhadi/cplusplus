#ifndef SHAPE_H_
#define SHAPE_H_

class Shape
{
public:
	Shape();
	Shape(int x, int y): x{x}, y{y} {}
	virtual ~Shape();
	virtual double calcPerimeter() = 0 ;
	virtual double calcArea() = 0;

	int GetX();
	int GetY();
	virtual void print() = 0;
	virtual void move(int newX, int newY);
	virtual void UpdateDimensions(int width, int height);
private:
	int x;
	int y;

};


#endif /* SHAPE_H_ */
