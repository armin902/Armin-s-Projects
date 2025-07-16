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
// Section: Lab Section 003L
// Assignment: Lab03
//


#include <iostream>
#include <cmath>
using namespace std;
const double PI = 3.14159;
int main() {

    float volume;
    double radius, height;

    cout << "Enter the radius of a dome: ";
    cin >> radius;
    cout << "Enter the height of a dome: ";
    cin >> height;


    volume = 2.0 / 3.0 * PI * pow(radius, 3) + PI * pow(radius,2) * height;   // Calculates the volume of a dome


    cout << "The volume of the dome: " << volume;

}





/*
Enter the radius of a dome: 9
Enter the height of a dome: 2
The volume of the dome: 2035.75
*/