// In-Lab01.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// Name: <Armin Rejaie>
// Section: <002L>
// Assignment: InLab1

#include <iostream>
using namespace std;
//makeChange function prototype
void makeChange(int cents, int& dollars, int& quarters, int& dimes, int& nickels, int& pennies);

/************************************************* Main Program ************************************************************/
    int main()
    {
        int cents, dollars, quarters, dimes, nickels, pennies;
        cout << "How much change to make (in cents): ";
        cin >> cents;
        makeChange(cents, dollars, quarters, dimes, nickels, pennies);
        cout << "\nYour change is:" << endl
            << dollars << " dollar(s)" << endl
            << quarters << " quarter(s)" << endl
            << dimes << " dime(s)" << endl
            << nickels << " nickel(s)" << endl
            << pennies << " pennie(s)" << endl;


    #ifdef _WIN32            // _WIN32 is used by Visual C++
    #if (_MSC_VER <= 1916)   // check if it Visual Studio 2017 or earlier
        system("pause");
    #endif
    #endif
        return 0;
    }
    /************************************************* End of Main ************************************************************/


    void makeChange(int cents, int& dollars, int& quarters, int& dimes, int& nickels, int& pennies)
    {
        dollars = cents / 100;
        cents %= 100;
        quarters = cents / 25;
        cents %= 25;
        dimes = cents / 10;
        cents %= 10;
        nickels = cents / 5;
        cents %= 5;
        pennies = cents;
    }

/*
How much change to make (in cents): 1292

Your change is:
12 dollar(s)
3 quarter(s)
1 dime(s)
1 nickel(s)
2 pennie(s)
*/