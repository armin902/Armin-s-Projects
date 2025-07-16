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
// Assignment: Lab12 (Triangle)

#include <iostream>
#include <iomanip>
#include "Triangle.h"
using namespace std;

int main()
{
    Triangle object;
    double triangleHeight, triangleBase;
    bool decide, decide2;

    cout << "Enter the height of the triangle in meters: ";
    cin >> triangleHeight;
   decide = object.setHeight(triangleHeight);
    
   while (decide == false)
   {
       cout << "The height must be greater than 0, please try again." << endl;
       cout << "Enter the height of the triangle in meters: ";
       cin >> triangleHeight;
       decide = object.setHeight(triangleHeight);
   }

   cout << "Enter the base of the triangle in meters: ";
   cin >> triangleBase;
   decide2 = object.setBase(triangleBase);

   while (decide2 == false)
   {
       cout << "The base must be greater than 0, please try again." << endl;
       cout << "Enter the height of the triangle in meters: ";
       cin >> triangleBase;
       decide2 = object.setBase(triangleBase);
   }

   cout << "The area of the triangle is " << fixed << setprecision(2) << object.getArea() << " m^2";
   return 0;
}


/*
Enter the height of the triangle in meters: -5
The height must be greater than 0, please try again.
Enter the height of the triangle in meters: 12
Enter the base of the triangle in meters: 0
The base must be greater than 0, please try again.
Enter the height of the triangle in meters: 7.25
The area of the triangle is 43.50 m^2
*/