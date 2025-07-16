#include <iostream>
#include "Circle.h"
#include "Point.h"
#include <cmath>
using namespace std;

Circle::Circle(Point cp, double r)
{
	center = cp;
	radius = r;
}

Circle::Circle(double x, double y, double r)
{
	Point thing(x, y);
	radius = r;
}

double Circle::getArea()
{
	const double PI = 3.14;
	double rad = pow(radius, 2.0);
	return PI * rad;
}

void Circle::moveCircle(double dx, double dy)
{
	center.move(dx, dy);
}

bool Circle::isItOrigin()
{	
	if ((center.x() == 0) && (center.y() == 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}

double Circle::getRadius()
{
	return radius;
}

Point Circle::getCenter()
{
	return center;
}

void Circle::display() const
{

	cout << "Circle: " << "[(" << center.x() << ", " << center.y() << "), " << radius << "]";
}