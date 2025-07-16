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
// Name: Armin Rejaie
// Section: 003L
// Assignment: HW05 Shipping Charges
//


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int weight, shippingDistance;
	double shippingCharges;
	double shippingRates, shippingRatesRounder;

	cout << "Enter the weight of the package (20 Kg Max.): ";
	cin >> weight;

	if (weight <= 2 && weight > 0)
	{
		cout << "Enter the shipping distance in miles (>= 10 and <= 3000): ";
		cin >> shippingDistance;
		if (shippingDistance >= 10 && shippingDistance <= 3000) 
		{
			cout << endl;
			shippingRates = shippingDistance / 500.00;
			shippingRatesRounder = ceil(shippingRates);
			shippingCharges = 1.10 * shippingRatesRounder;
			cout << "The shipping charges: $" << fixed << setprecision(2) << shippingCharges;
		}
		else
		{
			cout << "The distance entered is out of acceptable range!";
			return 0;
		}
	}
	else if (weight > 2 && weight <= 6)
	{
		cout << "Enter the shipping distance in miles (>= 10 and <= 3000): ";
		cin >> shippingDistance;
		if (shippingDistance >= 10 && shippingDistance <= 3000)
		{
			cout << endl;
			shippingRates = shippingDistance / 500.00;
			shippingRatesRounder = ceil(shippingRates);
			shippingCharges = 2.20 * shippingRatesRounder;
			cout << "The shipping charges: $" << fixed << setprecision(2) << shippingCharges;
		}
		else
		{
			cout << "The distance entered is out of acceptable range!";
			return 0;
		}
	}
	else if (weight > 6 && weight <= 10)
	{
		cout << "Enter the shipping distance in miles (>= 10 and <= 3000): ";
		cin >> shippingDistance;
		if (shippingDistance >= 10 && shippingDistance <= 3000)
		{
			cout << endl;
			shippingRates = shippingDistance / 500.00;
			shippingRatesRounder = ceil(shippingRates);
			shippingCharges = 3.70 * shippingRatesRounder;
			cout << "The shipping charges: $" << fixed << setprecision(2) << shippingCharges;
		}
		else
		{
			cout << "The distance entered is out of acceptable range!";
			return 0;
		}
	}
	else if (weight > 10 && weight <= 20)
	{
		cout << "Enter the shipping distance in miles (>= 10 and <= 3000): ";
		cin >> shippingDistance;
		if (shippingDistance >= 10 && shippingDistance <= 3000)
		{
			cout << endl;
			shippingRates = shippingDistance / 500.00;
			shippingRatesRounder = ceil(shippingRates);
			shippingCharges = 4.80 * shippingRatesRounder;
			cout << "The shipping charges: $" << fixed << setprecision(2) << shippingCharges;
		}
		else
		{
			cout << "The distance entered is out of acceptable range!";
			return 0;
		}
	}
	else
	{
		cout << "The weight entered is out of acceptable range!";
		return 0;
	}
}





/*
Enter the weight of the package (20 Kg Max.): 32
The weight entered is out of acceptable range!
*/

/*
Enter the weight of the package (20 Kg Max.): 3
Enter the shipping distance in miles (>= 10 and <= 3000): 3200
The distance entered is out of acceptable range!
*/

/*
Enter the weight of the package (20 Kg Max.): 14
Enter the shipping distance in miles (>= 10 and <= 3000): 1023

The shipping charges: $14.40
*/

/*
Enter the weight of the package (20 Kg Max.): 7
Enter the shipping distance in miles (>= 10 and <= 3000): 2200

The shipping charges: $18.50
*/