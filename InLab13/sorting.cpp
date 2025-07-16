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
// Section: <001>
// Assignment: InLab13 Exercise 2
//

#include <iostream>
#include <string>
using namespace std;
template <typename T>
int InsertionSort(T arr[], int size) {
	int i, j;
	T temp;
	int comparisonCount = 0;
	for (i = 1; i < size; i++) {
		temp = arr[i];
		for (j = i - 1; j >= 0; j--) {
			// The following if statement compare temp and arr[j], both are array elements
		// Should increase the comparison count.
				comparisonCount += 1;
			if (temp < arr[j]) arr[j + 1] = arr[j];
			else break;
		}
		arr[j + 1] = temp;
	}
	return comparisonCount;
}
template <typename T>
int partition(T x[], int first, int last)
{
	T pivot = x[last]; // pick the last as pivot element
	int j = first - 1; // use x[first], x[first+1]...x[j]
	// to store smaller than pivot values
	for (int i = first; i < last; i++) {
		// The following if state makes a comparision of x[i] and pivot. Bothare array elements.
			if (x[i] < pivot) {
				j += 1;
				swap(x[j], x[i]);
			}
	}
	swap(x[last], x[j + 1]);
	return j + 1;
}
// The function you need to modify
template <typename T>
int QuickSort(T x[], int first, int last) {
	int comparisonCount = 0;
	if (first < last) {
		int pi = partition(x, first, last);
		comparisonCount += last - first; // The partition process made first-last comparisons in its for loop
			comparisonCount += QuickSort(x, first, pi - 1);
		comparisonCount += QuickSort(x, pi + 1, last);
	}
	return comparisonCount;
}
// A function used by the testing program
// Do not modify
void testCase(int testArr[], int size) {
	int* arrCopyA = new int[size];
	int* arrCopyB = new int[size];
	memcpy(arrCopyA, testArr, size * sizeof(int));
	memcpy(arrCopyB, testArr, size * sizeof(int));
	int numOfCompsInsertion = InsertionSort<int>(arrCopyA, size);
	int numOfCompsQuick = QuickSort<int>(arrCopyB, 0, size - 1);
	cout << "Given array: " << endl;
	for (int i = 0; i < size; i++) {
		cout << testArr[i] << " ";
	}
	cout << endl;
	cout << "The insertion sort algorithm takes " << numOfCompsInsertion << " comparisons to sort the array." << endl;
		cout << "The quicksort algorithm takes " << numOfCompsQuick << " comparisons to sort the array." << endl;
}

// The main function.
int main() {
	// Change this to test different arrays, you may also change size
	int testArray[20] = {
	20, 19, 18, 17, 16, 15, 14, 13,
	12, 11, 10, 2, 3, 4, 5, 6,
	7, 2, 1, 5
	};
	// pay attention to the size of the array
	testCase(testArray, 20);
}

/*
Given array:
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
The insertion sort algorithm takes 19 comparisons to sort the array.
The quicksort algorithm takes 190 comparisons to sort the array.
*/


/*
Given array:
20 19 18 17 16 15 14 13 12 11 10 2 3 4 5 6 7 2 1 5
The insertion sort algorithm takes 175 comparisons to sort the array.
The quicksort algorithm takes 65 comparisons to sort the array.
*/