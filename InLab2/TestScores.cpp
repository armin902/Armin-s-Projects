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
// Assignment: InLab2 - TestScores.cpp
//

#include <iostream>
#include <iomanip>
using namespace std;
void bubbleSort(int *num, int size);
double averageFunc(int* num, int size);
int main()
{
	int N;
	double average;
	double average2 = 0;
	double sum = 0;
	cout << "Please enter the number of test scores: ";
	cin >> N;
	while (N < 0)
	{
		cout << "Negative number of test scores not accepted!" << endl;
		cout << "Please enter the number of test scores: ";
		cin >> N;
	}
	int* nPtr = new int[N];

	for (int i = 0; i < N; i++)
	{
		cout << "Enter test score " << i + 1 << ": ";
		cin >> nPtr[i];
	}

	bubbleSort(nPtr, N);
	cout << endl << endl << endl;
	cout << "The test scores ascending order:" << endl;
	cout << "================================" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << nPtr[i] << endl;
	}
	cout << endl;
	
	average = averageFunc(nPtr, N);
	cout << "The average score is " << fixed << setprecision(2) << average;
	cout << endl << endl;

	cout << "The test scores (dropping lowest):" << endl;
	cout << "==================================" << endl;

	int* newArray = new int[N - 1];

	for (int i = 1; i < N; i++)
	{
		newArray[i - 1] = nPtr[i];
	}

	for (int i = 0; i < N - 1; i++)
	{
		cout << newArray[i] << endl;
	}
	cout << endl;

	for (int i = 0; i < N - 1; i++)
	{
		sum += newArray[i];
	}
	average2 = sum / (N - 1);

	cout << "The average score is " << fixed << setprecision(2) << average2;

	delete [] newArray;
	delete [] nPtr;
	return 0;
}


void bubbleSort(int *num, int n)
{
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			if (num[j] > num[j + 1]) {
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;       
			}
		}
	}
}

double averageFunc(int* num, int size)
{
	double sum = 0;
	double average;
	for (int i = 0; i < size; i++)
	{
		sum += num[i];
	}
	average = sum / size;
	return average;
}



/*
Please enter the number of test scores: 8
Enter test score 1: 23
Enter test score 2: 50
Enter test score 3: 75
Enter test score 4: 90
Enter test score 5: 95
Enter test score 6: 93
Enter test score 7: 63
Enter test score 8: 79



The test scores ascending order:
================================
23
50
63
75
79
90
93
95

The average score is 71.00

The test scores (dropping lowest):
==================================
50
63
75
79
90
93
95

The average score is 77.86
*/