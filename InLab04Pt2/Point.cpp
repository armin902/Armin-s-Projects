#include <cmath>
#include <iostream>
using namespace std;

#include "Point.h"

Point::Point()
{
	_x = 0;
	_y = 0;
}

Point::Point(double xPoint, double yPoint)
{
	_x = xPoint;
	_y = yPoint;
}

double Point::x() const
{
	return _x;
}


double Point::y() const
{
	return _y;
}


double Point::magnitude() const
{
	double a = _x;
	double b = _y;
	double r = 0;

	a = pow(a, 2.00);
	b = pow(b, 2.00);
	r = a + b;
	r = sqrt(r);

	return r;
}

void Point::move(double dx, double dy)
{
	_x = _x + dx;
	_y = _y + dy;
}

void Point::print() const
{
	cout << "(" << _x << ", " << _y << ")";
}