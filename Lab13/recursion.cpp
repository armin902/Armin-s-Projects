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
// Assignment: Lab13

#include <iostream>
using namespace std;
int f(int n);
int main()
{
	int number, value;
	cout << "Enter a number greater than or equal to 0: ";
	cin >> number;
	while (number < 0)
	{
		cout << "Please enter a valid number!" << endl;
		cout << "Enter a number greater than or equal to 0: ";
		cin >> number;
	}

	for (int i = 0; i <= number; i++)
	{
		cout << "f(" << i << "): " << f(i) << endl;
	}
	return 0; 
}



int f(int n)
{
	if (n == 0)
	{
		return 5; // base case
	}

	else
	{
		return 2 * f(n - 1) - 3;
		// recursive case
	}
}

/*
Enter a number greater than or equal to 0: -2
Please enter a valid number!
Enter a number greater than or equal to 0: 12
f(0): 5
f(1): 7
f(2): 11
f(3): 19
f(4): 35
f(5): 67
f(6): 131
f(7): 259
f(8): 515
f(9): 1027
f(10): 2051
f(11): 4099
f(12): 8195
*/