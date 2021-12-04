#pragma once
#include "Point.h"


class Sqaure : public Point
{
public:
	Sqaure(double xcoord = 0.0, double ycoord = 0.0, double w = 0, double h = 0) :Point(xcoord, ycoord)
	{
		width = w;
		height = h;
	}
	void input(const char* prompt)
	{
		cout << "Square:\nEnter x: ";
		double a;
		cin >> a;
		Point::setX(a);
		cout << "Enter y: ";
		cin >> a;
		Point::setY(a);
		cout << "Enter height: ";
		cin >> a;
		setHeight(a);
		cout << "Enter width: ";
		cin >> a;
		setWidth(a);
	}
	void output()
	{
		cout << "Sqaure's area: " << area() << " Coordinates: (" << Point::getX() << "," << Point::getY() << ")\n";
	}
	double area()
	{
		return width * height;
	}
	void move(double dx, double dy)
	{
		Point::move(dx, dy);
	}
	void setHeight(double a)
	{
		height = a;
	}
	void setWidth(double a)
	{
		width = a;
	}
	void output()
	{

	}
private:
	double width;
	double height;
};