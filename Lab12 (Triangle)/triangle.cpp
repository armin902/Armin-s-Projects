#include <iostream>
#include "Triangle.h"
using namespace std;


bool Triangle::setBase(double b)
{
	if (b <= 0)
	{
		return false;
	}
	else 
	{
		base = b;
		return true;
	}
}

bool Triangle::setHeight(double h)
{
	if (h <= 0)
	{
		return false;
	}
	else
	{
		height = h;
		return true;
	}
}

double Triangle::getBase() const 
{
	return base;
}

double Triangle::getHeight() const
{
	return height;
}

double Triangle::getArea() const
{
	return 0.5 * base * height;
}