// HW04 (Savings).cpp : This file contains the 'main' function. Program execution begins and ends there.
//// Academic Integrity Affidavit:
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
// Assignment: HW04 Savings
//


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double principal, interestRate, interest, amount1, amount2;
	int compoundedInterest;

	cout << fixed << setprecision(2);

	cout << "Please enter the principal amount: ";
	cin >> principal;
	cout << "Please enter the interest rate: ";
	cin >> interestRate;
	cout << "Please enter the number of times compounded: ";
	cin >> compoundedInterest;
	cout << endl;

	cout << left << setw(20) << "Interest Rate:" <<
		right << setw(10) << interestRate << "%" << endl;
	cout << left << setw(20) << "Times Compounded:" <<
		right << setw(10) << compoundedInterest << endl;
	cout << left << setw(20) << "Principal:" <<
		"$" << right << setw(9) << principal << endl;
	
	interestRate = interestRate / 100;
	amount1 = 1 + (interestRate / compoundedInterest);
	amount2 = principal * pow(amount1, compoundedInterest);
	interest = amount2 - principal;

	cout << left << setw(20) << "Interest:" <<
		"$" << right << setw(9) << interest << endl;
	cout << left << setw(20) << "Amount in Savings:" <<
		"$" << right << setw(9) << amount2;
	
}



/*
Please enter the principal amount: 1000.00
Please enter the interest rate: 3.42
Please enter the number of times compounded: 8

Interest Rate:            3.42%
Times Compounded:            8
Principal:          $  1000.00
Interest:           $    34.72
Amount in Savings:  $  1034.72
*/
