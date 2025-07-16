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
// Assignment: Lab03 Bonus
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


    volume = 2.0 / 3.0 * PI * pow(radius, 3) + PI * pow(radius, 2) * height;   // Calculates the volume of a dome


    cout << "The volume of the dome: " << volume << endl << endl;


    //New dome

    float volume2;
    double radius2 = radius + 1;
    double height2 = height + 1;

    volume2 = 2.0 / 3.0 * PI * pow(radius2, 3) + PI * pow(radius2, 2) * height2;    // Calculates the new volume of a dome

    cout << "The volume of the new dome: " << volume2 << endl;

    double difference;
    
    difference = volume2 - volume;      // Finds the difference between the new dome's volume from the old dome

    cout << "The new dome has " << difference << " more volume than the old dome.";

}





/*
Enter the radius of a dome: 9
Enter the height of a dome: 2
The volume of the dome: 2035.75

The volume of the new dome: 3036.87
The new dome has 1001.12 more volume than the old dome.
*/