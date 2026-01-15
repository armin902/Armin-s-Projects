// Academic Integrity Affidavit:
// I certify that this program code is my work. Others may have
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
// Section: Section 003L
// Assignment: HW02
//


#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3, num4, num5;
  

    cout << " Please enter number 1: ";
    cin >> num1;
    cout << " Please enter number 2: ";
    cin >> num2;
    cout << " Please enter number 3: ";
    cin >> num3;
    cout << " Please enter number 4: ";
    cin >> num4;
    cout << " Please enter number 5: ";
    cin >> num5;
    cout << "\n";

   double sum = num1 + num2 + num3 + num4 + num5;
    cout << " The sum of the 5 numbers = " << sum << "\n";
    
    double average = sum / 5;
    cout << " The average of the 5 numbers = " << average;

    return 0;
}


/*
 Please enter number 1: 34
 Please enter number 2: 12
 Please enter number 3: 1
 Please enter number 4: 5
 Please enter number 5: 0

 The sum of the 5 numbers = 52
 The average of the 5 numbers = 10.4
*/