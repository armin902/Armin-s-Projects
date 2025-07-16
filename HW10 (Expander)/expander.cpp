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
// Assignment: HW10 (Expander)
//

#include <iostream>
using namespace std;

int* expandArray(int* org_array, int array_size);

int main()
{
	int n;
	int counter = 1;

	cout << "Please enter the size of the array: ";
	cin >> n;

	while (n < 1)
	{
		cout << "The number must be greater than 1, try again." << endl;
		cout << "Please enter the size of the array: ";
		cin >> n;
	}
	cout << endl;

	int* org_array = new int[n];

	for (int i = 0; i < n; i++, counter++)
	{
		cout << "Enter integer number " << counter << ": ";
		cin >> org_array[i];
	}
	cout << endl;

	int* twice_array = expandArray(org_array, n);

	cout << "The contents of the original array are:" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << org_array[i] << " ";
	}
	cout << endl << endl;

	cout << "The contents of the expanded array are:" << endl;
	for (int i = 0; i < n * 2; i++)
	{
		cout << twice_array[i] << " ";
	}

	delete[] twice_array;
	delete[] org_array;

	return 0;

}




int* expandArray(int* org_array, int array_size)
{
	int* twice_array = new int[2 * array_size];

	for (int i = 0; i <= (2 * array_size) - 1; i++)
	{
		if (i < array_size)
		{
			twice_array[i] = org_array[i];
		}
			else if (i >= array_size)
			{
			twice_array[i] = 0;
			}
	}
	return twice_array;
}




/*
Please enter the size of the array: -3
The number must be greater than 1, try again.
Please enter the size of the array: 8

Enter integer number 1: 15
Enter integer number 2: 30
Enter integer number 3: 45
Enter integer number 4: 12
Enter integer number 5: 60
Enter integer number 6: 80
Enter integer number 7: 120
Enter integer number 8: 150

The contents of the original array are:
15 30 45 12 60 80 120 150

The contents of the expanded array are:
15 30 45 12 60 80 120 150 0 0 0 0 0 0 0 0
*/