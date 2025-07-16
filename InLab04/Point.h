#pragma once

class Point
{
public:
	Point(); // default constructor
	Point(double x, double y); // another constructor
	double x() const; // get function, return _x
	double y() const; // get function, return _y
	double magnitude() const; // returns polar coordinate r
	void move(double dx, double dy); // moves the points x, y
	void print() const; // prints the point in the format (x, y)
private:
	double _x, _y;
};