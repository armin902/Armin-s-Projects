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
// Assignment: Lab05
//


#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
	
	char vehicleType;
	double hoursParked;
	string licensePlate;
	double amount;


	cout << "Enter the vehicle type ('C' for car, 'T' for truck, 'B' for bus): ";
	cin >> vehicleType;
	switch (vehicleType)
	{
	case 'C': break;
	case 'T': break;
	case 'B': break;
	default: cout << "That is an invalid vehicle type";
		return 0;
	}

	cout << "Enter the number of hours parked: ";
	cin >> hoursParked;
	cout << "What is the license plate? ";
	cin.ignore(1);
	getline(cin, licensePlate);
	cout << endl;


	if (vehicleType == 'C')
	{
		cout << "Vehicle Type: Car" << endl;
		hoursParked = ceil(hoursParked);
		cout << "Time: " << hoursParked << " hours" << endl;
		cout << "License Plate: " << licensePlate << endl;
		
		if (hoursParked >= 2.00)
		{
			hoursParked -= 2.00;
			amount = 2.50 + hoursParked * 1.50;
		}
			if (hoursParked < 2.00)
			{
				amount = hoursParked * 1.25;
			}
		cout << "Amount Due ($): " << setprecision(2) << fixed << amount << endl;
		return 0;
	}

	if (vehicleType == 'T')
	{
		cout << "Vehicle Type: Truck" << endl;
		hoursParked = ceil(hoursParked);
		cout << "Time: " << hoursParked << " hours" << endl;
		cout << "License Plate: " << licensePlate << endl;

		if (hoursParked >= 2.00)
		{
			hoursParked -= 2.00;
			amount = 5.50 + hoursParked * 3.75;
		}
		if (hoursParked < 2.00)
		{
			amount = hoursParked * 2.75;
		}
		cout << "Amount Due ($): " << setprecision(2) << fixed << amount << endl;
		return 0;
	}
	
	if (vehicleType == 'B')
	{
		cout << "Vehicle Type: Bus" << endl;
		hoursParked = ceil(hoursParked);
		cout << "Time: " << hoursParked << " hours" << endl;
		cout << "License Plate: " << licensePlate << endl;

		if (hoursParked >= 1.00)
		{
			hoursParked -= 1.00;
			amount = 9.50 + hoursParked * 6.75;
		}
		if (hoursParked < 1.00)
		{
			amount = hoursParked * 9.50;
		}
		cout << "Amount Due ($): " << setprecision(2) << fixed << amount << endl;
		return 0;
	}

}


/*
Enter the vehicle type ('C' for car, 'T' for truck, 'B' for bus): a
That is an invalid vehicle type
*/

/*
* Enter the vehicle type ('C' for car, 'T' for truck, 'B' for bus): C
Enter the number of hours parked: 12.4
What is the license plate? SFI 123

Vehicle Type: Car
Time: 13 hours
License Plate: SFI 123
Amount Due ($): 19.00
*/

/*
* Enter the vehicle type ('C' for car, 'T' for truck, 'B' for bus): T
Enter the number of hours parked: 232.2
What is the license plate? WTL 360

Vehicle Type: Truck
Time: 233 hours
License Plate: WTL 360
Amount Due ($): 871.75
*/

/*
Enter the vehicle type ('C' for car, 'T' for truck, 'B' for bus): B
Enter the number of hours parked: 2.7
What is the license plate? AMB 094

Vehicle Type: Bus
Time: 3 hours
License Plate: AMB 094
Amount Due ($): 23.00
*/