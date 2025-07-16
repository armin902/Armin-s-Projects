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
// Assignment: InLab04 Pt.2
//


#include <iostream>
#include <cmath>
#include "Circle.h"
#include "Point.h"
using namespace std;

int main()
{
	Point a(3, 8);
	Circle c(a, 5); 
	Circle d(10, 3, 6);
	Circle e = c;
	Point center = e.getCenter();
	cout << "e.getCenter() = (" << center.x() << ", " << center.y() << ")" << "\n";
	cout << "e.getRadius() = " << e.getRadius() << endl;
	cout << "The area is " << e.getArea() << endl;
	e.moveCircle(2, 2);
	center = e.getCenter();
	cout << "Moving the x and y coordinates of the circle by +2: ";
	center.print();
	cout << endl;

	cout << "Is the circle centered at (0,0)? ";
	bool decision = e.isItOrigin();
	if (decision == true)
	{
		cout << "Yes!" << endl;
	}
	else
	{
		cout << "No!" << endl;
	}
	cout << "This is what the circle's coordinates are: ";
	e.display();
	return 0;

}

/*
e.getCenter() = (3, 8)
e.getRadius() = 5
The area is 78.5
Moving the x and y coordinates of the circle by +2: (5, 10)
Is the circle centered at (0,0)? No!
This is what the circle's coordinates are: Circle: [(5, 10), 5]
*/