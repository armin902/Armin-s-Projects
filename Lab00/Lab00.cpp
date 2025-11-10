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
// Section: 003L
// Assignment: Lab 00
//

#include <iostream>
using namespace std;
int main()
{
	string first_name;
	cout << "Please enter your first name: ";
	cin >> first_name;
	cout << "Hello there, " << first_name << "!" << endl;
	cout << "Different ways of outputs:" << endl << endl;
	cout << first_name << first_name << first_name << endl;
	cout << first_name << "  " << first_name << "  " << first_name;
	cout << endl << endl;
	cout << first_name << "\n";
	cout << first_name << "\n";
	cout << first_name << "\n";
}


/*
My name is Armin Rejaie
I am major in Computer Science
Please enter your current semester in Behrend: 1
Good luck with your semeseter 1 at Bherend!
*/