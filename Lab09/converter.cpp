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
// Assignment: Lab09
//

#include <iostream>
#include <iomanip>
using namespace std;

void getTemperature(double temp[], int size);
void convertTemperature(double c_temp[], double f_temp[], int size);

int main()
{
	const int SIZE = 4;
	double temp[SIZE];
	double f_temp[SIZE];
	getTemperature(temp, SIZE);
	convertTemperature(temp, f_temp, SIZE);

	cout << fixed << setprecision(2);

	for (int i = 0; i < SIZE; i++) 
	{
		cout << temp[i] << " degrees Celsius is " << f_temp[i] << " degrees Fahrenheit" << endl;
	}
	return 0;
}


void getTemperature(double temp[], int size)
{
	double cTemp;
	for (int i = 0; i < size; i++)
	{
		cout << "Enter Celsius temperature " << i+1 << ": ";
		cin >> cTemp;

		while (cTemp <= -273.15)
		{
			cout << "The temperature must be greater than -273.15" << endl;
			cout << "Enter celsius temperature " << i + 1 << ": ";
			cin >> cTemp;
		}

		temp[i] = cTemp;
	}
	return;
}

void convertTemperature(double c_temp[], double f_temp[], int size)
{
	for (int i = 0; i < size; i++)
	{
		f_temp[i] = (9.00 / 5 * c_temp[i]) + 32;
	}
	return;
}



/*
Enter Celsius temperature 1: -324.12
The temperature must be greater than -273.15
Enter celsius temperature 1: -212.45
Enter Celsius temperature 2: 12
Enter Celsius temperature 3: 35
Enter Celsius temperature 4: 24.24
-212.45 degrees Celsius is -350.41 degrees Fahrenheit
12.00 degrees Celsius is 53.60 degrees Fahrenheit
35.00 degrees Celsius is 95.00 degrees Fahrenheit
24.24 degrees Celsius is 75.63 degrees Fahrenheit
*/