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
// Assignment: HW05 Geometry Calculator
//


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    char choice;
    double area, length, width, base, height, radius;
    const double PI = 3.14159;

    cout << "Geometry Calculator:" << endl;
    cout << setw(36) << "1. Calculate the Area of a Circle" << endl;
    cout << setw(39) << "2. Calculate the Area of a Rectangle" << endl;
    cout << setw(38) << "3. Calculate the Area of a Triangle" << endl;
    cout << setw(10) << "4. Quit" << endl;
    cout << setw(30) << "Enter your choice (1 - 4): ";
    cin >> choice;

    switch (choice)
    {
    case '1': 
        cout << "Enter radius of circle (m): ";
        cin >> radius;
        if (radius < 0)
        {
            cout << "Negative value is not allowed.";
            return 0;
        }
        else
        {
            cout << endl;
            area = PI * pow(radius, 2);
            cout << "The area of the circle is: " << fixed << setprecision(2) << area << " m^2";
        }
        
        break;
     
    case '2':
        cout << "Enter length of rectangle (m): ";
        cin >> length;
        if (length < 0)
        {
            cout << "Negative value is not allowed.";
            return 0;
        }
        else
        {
            cout << "Enter width of rectangle (m): ";
            cin >> width;

            if (width < 0)
            {
                cout << "Negative value is not allowed.";
                return 0;
            }
            else
            {
                cout << endl;
                area = length * width;
                cout << "The area of the rectangle is: " << fixed << setprecision(2) << area << " m^2";
            }

            break;
        }


    case '3':
        cout << "Enter the base of the triangle (m): ";
        cin >> base;
        if (base < 0)
        {
            cout << "Negative value is not allowed.";
            return 0;
        }
        else
        {
            cout << "Enter height of triangle (m): ";
            cin >> height;
            if (height < 0)
            {
                cout << "Negative value is not allowed.";
                return 0;
            }
            else
            {
                cout << endl;
                area = base * height * 0.5;
                cout << "The area of the triangle is: " << fixed << setprecision(2) << area << " m^2";
            }
        }

        break;


    case '4': break;

    default: cout << "Invalid selection!";
        return 0;
        
    }

  

}



/*
Geometry Calculator:
   1. Calculate the Area of a Circle
   2. Calculate the Area of a Rectangle
   3. Calculate the Area of a Triangle
   4. Quit
   Enter your choice (1 - 4): 1
Enter radius of circle (m): -9
Negative value is not allowed.
*/


/*
Geometry Calculator:
   1. Calculate the Area of a Circle
   2. Calculate the Area of a Rectangle
   3. Calculate the Area of a Triangle
   4. Quit
   Enter your choice (1 - 4): 1
Enter radius of circle (m): 23

The area of the circle is: 1661.90 m^2
*/

/*
Geometry Calculator:
   1. Calculate the Area of a Circle
   2. Calculate the Area of a Rectangle
   3. Calculate the Area of a Triangle
   4. Quit
   Enter your choice (1 - 4): 2
Enter length of rectangle (m): -2
Negative value is not allowed.
*/


/*
Geometry Calculator:
   1. Calculate the Area of a Circle
   2. Calculate the Area of a Rectangle
   3. Calculate the Area of a Triangle
   4. Quit
   Enter your choice (1 - 4): 2
Enter length of rectangle (m): 3
Enter width of rectangle (m): -5
Negative value is not allowed.
*/



/*
Geometry Calculator:
   1. Calculate the Area of a Circle
   2. Calculate the Area of a Rectangle
   3. Calculate the Area of a Triangle
   4. Quit
   Enter your choice (1 - 4): 2
Enter length of rectangle (m): 3
Enter width of rectangle (m): 5

The area of the rectangle is: 15.00 m^2
*/


/*
Geometry Calculator:
   1. Calculate the Area of a Circle
   2. Calculate the Area of a Rectangle
   3. Calculate the Area of a Triangle
   4. Quit
   Enter your choice (1 - 4): 3
Enter the base of the triangle (m): -5
Negative value is not allowed.
*/


/*
Geometry Calculator:
   1. Calculate the Area of a Circle
   2. Calculate the Area of a Rectangle
   3. Calculate the Area of a Triangle
   4. Quit
   Enter your choice (1 - 4): 3
Enter the base of the triangle (m): 5
Enter height of triangle (m): -9
Negative value is not allowed.
*/


/*
Geometry Calculator:
   1. Calculate the Area of a Circle
   2. Calculate the Area of a Rectangle
   3. Calculate the Area of a Triangle
   4. Quit
   Enter your choice (1 - 4): 3
Enter the base of the triangle (m): 5
Enter height of triangle (m): 9

The area of the triangle is: 22.50 m^2
*/


/*
Geometry Calculator:
   1. Calculate the Area of a Circle
   2. Calculate the Area of a Rectangle
   3. Calculate the Area of a Triangle
   4. Quit
   Enter your choice (1 - 4): 4
*/


/*
Geometry Calculator:
   1. Calculate the Area of a Circle
   2. Calculate the Area of a Rectangle
   3. Calculate the Area of a Triangle
   4. Quit
   Enter your choice (1 - 4): 8
Invalid selection!
*/