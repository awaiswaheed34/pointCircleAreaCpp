#pragma once
#include "Point.h"

class circle : public Point
{
public:
	circle(double xcoord = 0.0, double ycoord = 0.0 , double r=0) :Point(xcoord, ycoord)
	{
		radius = r;
	}
	virtual void input(const char* prompt)
	{
		cout << "Cicle:\nEnter x: ";
		double a;
		cin >> a;
		this->setX(a);
		cout << "Enter y: ";
		cin >> a;
		this->setY(a);
		cout << "Enter radius: ";
		cin >> a;
		setRadius(a);

	}
	void setRadius(double a)
	{
		radius = a;
	}
	void output()  	
	{
		cout << "Circle's area: " << area() << " Coordinates: (" << this->getX() << "," << this->getY() << ")\n";
	}

	double area() 
	{
		return 3.14 * radius * radius;
	}
	void move(double dx, double dy)
	{
		this->move(dx, dy);
	}
private:
	double radius;
};