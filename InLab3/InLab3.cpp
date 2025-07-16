// InLab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// Section: <001L>
// Assignment: InLab3

#include <iostream>
using namespace std;
int* append(int* arrayA, int sizeA, int* arrayB, int sizeB);
int* merge(int* arrayA, int sizeA, int* arrayB, int sizeB);
void print(int* array, int size, const char* lable);
int main()
{
    int arrayA[] = { 11,33,55,77,99 };	// use other values for more tests
    int arrayB[] = { 22,44,66,88 };
    print(arrayA, 5, "Sorted array A: ");
    print(arrayB, 4, "Sorted array B: ");
    int* arrayC = append(arrayA, 5, arrayB, 4); // arrayC points to the appended array
    print(arrayC, 9, "Append B to A:  ");
    int* arrayD = merge(arrayA, 5, arrayB, 4);
    print(arrayD, 9, "Merge A to B:   ");
    delete[] arrayC;
    delete[] arrayD;

#ifdef _WIN32			// _WIN32 is used by Visual C++
#if (_MSC_VER <= 1916)	// check if it Visual Studio 2017 or earlier
    system("pause");
#endif
#endif

    return 0;
}


int* append(int* arrayA, int sizeA, int* arrayB, int sizeB)
{
    int newSize = sizeA + sizeB;
    int* appendArray = new int[newSize];

    for (int i = 0; i < sizeA; i++)
    {
       appendArray[i] = arrayA[i];
    }

    for (int j = sizeA, k = 0; j < newSize; j++, k++)
    {
        appendArray[j] = arrayB[k];
    }

    return appendArray;
}


int* merge(int* arrayA, int sizeA, int* arrayB, int sizeB)
{
    int newSize = sizeA + sizeB;
    int* mergeArray = append(arrayA, sizeA, arrayB, sizeB);

    for (int i = 0; i < newSize - 1; ++i) {
        for (int j = 0; j < newSize - i - 1; ++j) {
            if (mergeArray[j] > mergeArray[j + 1]) {
                int temp = mergeArray[j];
                mergeArray[j] = mergeArray[j + 1];
                mergeArray[j + 1] = temp;
            }
        }
    }

    return mergeArray;
}


void print(int* array, int size, const char* lable)
{
    cout << lable;


    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}


/*
Sorted array A: 11 33 55 77 99
Sorted array B: 22 44 66 88
Append B to A:  11 33 55 77 99 22 44 66 88
Merge A to B:   11 22 33 44 55 66 77 88 99
*/