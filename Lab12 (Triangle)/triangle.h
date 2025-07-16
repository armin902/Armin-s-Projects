#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle
{
private:
	double base, height;

public:
	bool setBase(double);
	bool setHeight(double);
	double getBase() const;
	double getHeight() const;
	double getArea() const;
};
#endif