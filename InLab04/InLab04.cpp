// InLab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// Assignment: InLab 4

#include <iostream>
#include <cmath>
using namespace std;
#include "Point.h"

int main()
{
	double mag = 0;

	Point p0; // invokes default constructor
	Point p1(5, -2); // invokes constructor
	Point p2 = p1;
	p0 = p1; // invokes assignment operator
	cout << "p0.x() = " << p0.x() << "\n";
	cout << "p0.y() = " << p0.y() << "\n";
	cout << "The magnitude is " << p0.magnitude() << endl;
	p0.move(2, 2);
	cout << "Moving the x and y coordinates by +2: ";
	p0.print();
	cout << endl;
	cout << "Print function being used: "; 
	p0.print();

	return 0;
}

/*
p0.x() = 5
p0.y() = -2
The magnitude is 5.38516
Moving the x and y coordinates by +2: (7, 0)
Print function being used: (7, 0)
*/