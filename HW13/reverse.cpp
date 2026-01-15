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
// Assignment: HW13

#include <iostream>
#include <string>
using namespace std;
void reverseString(string input, int size);
int main()
{
	string userIn;
	string decision;
	string dummy;
	cout << "Please enter a string:" << endl;
	getline(cin, userIn);
	cout << endl;

	cout << "The reverse string is: " << endl;
	reverseString(userIn, userIn.length());
	cout << endl << endl;

	cout << "Enter another string (Y/N): ";
	cin >> decision;
	while (decision == "y")
	{
		cout << "Please enter a string:" << endl;
		cin.ignore();
		getline(cin, userIn);
		cout << endl;
		cout << "The reverse string is: " << endl;
		reverseString(userIn, userIn.length());
		cout << endl << endl;
		cout << "Enter another string (Y/N): ";
		cin >> decision;
	}

	if (decision == "n")
	{
		return 0;
	}

}

void reverseString(string input, int size)
{
	if (size == -1)
	{
		return;
	}

	else
	{
		cout << input[size];
		reverseString(input, size - 1);
	}
}

/*
Please enter a string:
I am hungry, wanna go get food?

The reverse string is:
?doof teg og annaw ,yrgnuh ma I

Enter another string (Y/N): y
Please enter a string:
Sure, sounds great!

The reverse string is:
!taerg sdnuos ,eruS

Enter another string (Y/N): n
*/