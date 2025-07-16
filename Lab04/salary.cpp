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
// Assignment: Lab04

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string employeeName;
    int experience, tenure;
    double salary;

    cout << "What is the person's name: ";
    getline(cin, employeeName);
    cout << "How many years of experience do they have? ";
    cin >> experience;
    cout << "How long (in years) is their tenure: ";
    cin >> tenure;
    cout << endl << endl;


    salary = (2000 * experience) + (1000 * tenure) + 50000;        //Calculates the salary based off user's inputs

    cout << employeeName << "'s salary is $" << salary;
}

/*
What is the person's name: Armin Rejaie
How many years of experience do they have? 4
How long (in years) is their tenure: 6


Armin Rejaie's salary is $64000
*/