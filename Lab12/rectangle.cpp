/// Academic Integrity Affidavit:
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
// Name: Armin Rejaie
// Section: 003L
// Assignment: 11/21/2024
//

#include <iostream>
#include <iomanip>
using namespace std;

struct Rectangle 
{
	double length, width;
};

Rectangle getValues();
Rectangle getArea(Rectangle object);


int main()
{ 
	Rectangle object;
	object = getValues();
	getArea(object);
	return 0;
}



Rectangle getValues()
{
	Rectangle object;
	cout << "Enter the starting length: ";
	cin >> object.length;
	while (object.length <= 0)
	{
		cout << "Please enter a length greater than zero!" << endl;
		cout << "Enter the starting length: ";
		cin >> object.length;
	}

	cout << "Enter the starting width: ";
	cin >> object.width;
	while (object.width <= 0)
	{
		cout << "Please enter a width greater than zero!" << endl;
		cout << "Enter the starting width: ";
		cin >> object.width;
	}

	return object;
}


Rectangle getArea(Rectangle object)
{
	double area = object.length * object.width;

	
	while (area < 500)
	{
		cout << fixed << setprecision(2);
		cout << object.length << " x " << object.width << " = " << area << endl;
		object.length *= 2;
		object.width *= 2;
		area = object.length * object.width;
		
		if (area > 500)
		{
			cout << "DONE";
		}
	}
	return object;
}



/*
Enter the starting length: -10
Please enter a length greater than zero!
Enter the starting length: 12.50
Enter the starting width: 0
Please enter a width greater than zero!
Enter the starting width: 3.6
12.50 x 3.60 = 45.00
25.00 x 7.20 = 180.00
DONE
*/