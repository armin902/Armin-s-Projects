// Academic Integrity Affidavit:
// I certify that this program code is my work.  Others may have
// assisted me with planning and concepts, but the code was written,
// solely, by me.
// I understand that submitting code that is totally or partially
// the product of other individuals is a violation of the Academic
// Integrity Policy and accepted ethical precepts. Falsified
// execution results are also results of improper activities. Such
// violations may result in zero credit for the assignment, reduced
// credit for the assignment, or course failure.
//
// Name: <Armin Rejaie>
// Section: <001L>
// Assignment: LabProj5 Complex2.cpp
//
//
// Name: skeleton template for overloading operators
//
// One Complex object holds one Complex number

#include "Complex2.h"

//------------------------------ Complex ------------------------------------
// default constructor: parameters are real and imaginary parts respectively
Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;
}

//(a)------------------------------- add -------------------------------------
// overloaded +: addition of 2 complex numbers, current object and parameter
Complex Complex::operator+(Complex& z)
{
	Complex t;
	t.re = re + z.re;
	t.im = im + z.im;
	return t;
}

//(b)------------------------------ subtract ---------------------------------
// overloaded -: subtract 2 complex numbers, current object and parameter
Complex Complex::operator-(Complex& z)
{
	Complex t;
	t.re = re - z.re;
	t.im = im - z.im;
	return t;
}

//(c)------------------------------ multiply ---------------------------------
// overloaded *: multiply 2 complex numbers, current object and parameter
Complex Complex::operator*(Complex& z)
{
	Complex t;
	t.re = (re * z.re) + (im * z.im * -1);
	t.im = (im * z.re) + (re * z.im);
	return t;
}

//(d)-------------------------------- divide ---------------------------------
// overloaded /: divide 2 complex numbers, current object and parameter
// check division by zero condition
Complex Complex::operator/(Complex& z)
{
	Complex t;
	double denominator = z.re * z.re + z.im * z.im;

	if (denominator == 0)
	{
		cout << "DIVIDE BY ZERO ERROR!!!";
		return t;
	}

	t.re = (re * z.re + im * z.im) / denominator;
	t.im = (im * z.re - re * z.im) / denominator;
	return t;
}

//(e)-------------------------------- equal ----------------------------------
// overloaded ==: equal comparison of current Complex object and parameter
bool Complex::operator==(Complex& z)
{
	if ((re == z.re) && (im == z.im))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//(f)------------------------------- not equal -------------------------------
// overloaded !=: not equal comparison of current Complex object and parameter
bool Complex::operator!=(Complex& z)
{
	if ((re != z.re) && (im != z.im))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//(g)-------------------------------- print-----------------------------------
// overloaded print()
void Complex::print(ostream& os)
{
	if (im < 0)
	{
		os << "(" << re << " - " << (im * -1) << "i)";
	}
	else if (im == 1 || im == -1)
	{
		os << "(" << re << " + " << "i)";
	}
	else
	{
		os << "(" << re << " + " << im << "i)";
	}
}


//(h)--------------------------------- << -------------------------------------
// overloaded << (output operator)
ostream& operator<<(ostream& os, Complex& z)
{
	z.print(os);
	return os;
}


/*
(7 + 3i) + (1 - 2i) = (8 + i)
(7 + 3i) - (1 - 2i) = (6 + 5i)
(7 + 3i) * (1 - 2i) = (13 - 11i)
(7 + 3i) / (1 - 2i) = (0.2 + 3.4i)
(7 + 3i) / (0 + 0i) = DIVIDE BY ZERO ERROR!!!
(7 + 3i) == (7 + 3i) is equal
(7 + 3i) == (1 - 2i) is not equal
(7 + 3i) != (7 + 3i) is false
(7 + 3i) != (1 - 2i) is true
*/