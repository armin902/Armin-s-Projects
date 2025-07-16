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
// Assignment: HW10 (Reverse)
//


#include <iostream>
using namespace std;

int* reverseArray(int* num_array, int array_size);
int main()
{
	int n;
	int numberCounter = 1;

	cout << "Please enter the size of the array: ";
	cin >> n;

	while (n < 1)
	{
		cout << "The array size must be greater than 0, try again." << endl;
		cout << "Please enter the size of the array: ";
		cin >> n;
	}
	cout << endl;

	int* num_array = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Please enter number " << numberCounter << ": ";
		cin >> num_array[i];
		numberCounter++;
	}

	int *new_array = reverseArray(num_array, n);
	
	cout << "The contents of the original array are: " << "[";
	for (int i = 0; i < n; i++)
	{
		cout << *(num_array + i);
		if (i + 1 != n)
		{
			cout << ", ";
		}
	}
	cout << "]" << endl;

	cout << "The contents of the reversed array are: " << "[";
	for (int i = 0; i < n; i++)
	{
		cout << *(new_array + i);
		if (i + 1 != n)
		{
			cout << ", ";
		}
	}
	cout << "]" << endl;

	delete[] new_array;
	delete[] num_array;

	return 0;
}



int* reverseArray(int* num_array, int array_size) 
{
	int* new_array = new int[array_size];
	int j = 0;

	for (int i = array_size - 1; i >= 0; i--, j++)
	{
		new_array[j] = num_array[i];
	}
	return new_array;
}



/*
Please enter the size of the array: -3
The array size must be greater than 0, try again.
Please enter the size of the array: 7

Please enter number 1: 25
Please enter number 2: 30
Please enter number 3: 110
Please enter number 4: 500
Please enter number 5: 4
Please enter number 6: 0
Please enter number 7: 1
The contents of the original array are: [25, 30, 110, 500, 4, 0, 1]
The contents of the reversed array are: [1, 0, 4, 500, 110, 30, 25]
*/