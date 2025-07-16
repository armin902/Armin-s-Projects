//
// a Complex object holds one Complex number
//
#include <iostream>
#include "Complex.h"
#include <cmath>
#include <iomanip>
using namespace std;
//------------------------------ Complex ------------------------------------
// default constructor: parameters are real and imaginary parts respectively
Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}
//(a)------------------------------- add ------------------------------------
// addition of 2 complex number, current object and parameter
Complex Complex::add(const Complex& z)
{
	Complex c;
	c.re = re + z.re;
	c.im = im + z.im;
	return c;
}
//(b)---------------------------- subtract ----------------------------------
// subtraction of 2 complex number, current object and parameter
Complex Complex::subtract(const Complex& z)
{
	Complex c;
	c.re = re - z.re;
	c.im = im - z.im;
	return c;
}


//(c)---------------------------- multiply ----------------------------------
// multiplication of 2 complex number, current object and parameter
Complex Complex::multiply(const Complex& z)
{
	Complex c;
	c.re = re * z.re;
	c.im = im * z.im;
	return c;
}

//(d)------------------------------ divide ----------------------------------
// division of 2 complex number, current object and parameter,
// division by zero crashes
Complex Complex::divide(const Complex& z)
{
	Complex c;
	c.re = re / z.re;
	c.im = im / z.im;
	return c;
}

//(e)------------------------------ equality ---------------------------------
// equality of 2 complex number, current object and parameter
bool Complex::equal(const Complex& z)
{
	if (re == z.re && im == z.im)
	{
		return true;
	}
	else
	{
		return false;
	}

}
//(f)------------------------------ modulus ---------------------------------
// modulus value of a complex number

double Complex::modulus()
{
	re = pow(re, 2.00);
	im = pow(im, 2.00);
	return sqrt(re + im);

}
//(g)------------------------------ print -----------------------------------
// print the complex number with the format: a + bi (or a - bi)
// enclosed the complex number with parenthesis if is_parenthesis is true
// e.g., is_parenthesis = true: (4 + 2i), (-10 +7i), etc.
void Complex::print(bool is_parenthesis)
{
	if (im >= 0)
	{
		cout << fixed << setprecision(2) << re << " + " << im << "i" << endl;
	}
	else
	{
		cout << fixed << setprecision(2) << re << " " << im << "i" << endl;
	}
}