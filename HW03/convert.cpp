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
// Section: Lab Section 003L
// Assignment: HW03
//


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int dollars, quarters, dimes, nickels, pennies;
    int penniesLeftOver, penniesLeftOver2, penniesLeftOver3, penniesLeftOver4;
    cout << "Enter number of cents to convert: ";
    cin >> pennies;
    cout << endl;

    cout << "Your conversion is:" << endl;

    dollars = pennies / 100;
    penniesLeftOver = pennies % 100;
    cout << dollars << " dollar(s)" << endl;

    quarters = penniesLeftOver / 25 % 4;
    penniesLeftOver2 = penniesLeftOver % 25;
    cout << quarters << " quarter(s)" << endl;
    
    dimes = penniesLeftOver2 / 10 % 10;
    penniesLeftOver3 = penniesLeftOver2 % 10;
    cout << dimes << " dime(s)" << endl;

   nickels = penniesLeftOver3 / 5 % 20;
   penniesLeftOver4 = penniesLeftOver3 % 5;
   cout << nickels << " nickel(s)" << endl;

    pennies = penniesLeftOver4 / 1 % 100;
    cout << pennies << " pennies" << endl;
}

/*
Enter number of cents to convert: 1234

Your conversion is:
12 dollar(s)
1 quarter(s)
0 dime(s)
1 nickel(s)
4 pennies
*/