#include <iostream>
using namespace std;
void swap(int *a, int *b);
int main()
{
const int SIZE = 3;
int ogArray[SIZE];

cout << "Enter three elements into the array:" << endl;

for (int i = 0; i < SIZE; i++)
{
cin >> ogArray[i];
cout << " ";
}
cout << endl;


cout << "The original array:" << endl;
for (int i = 0; i < SIZE; i++)
{
cout << ogArray[i] << " ";
}
cout << endl;

int* ogPtr = ogArray;
int *newPtr = new int[SIZE];

swap(ogPtr, newPtr);

cout << "The output array (from biggest to smallest):" << endl;

for (int i = 0; i < SIZE; i++)
{
    cout << newPtr[i] << " ";
}
cout << endl;

delete[] newPtr;
return 0;
}



void swap(int *a, int *b)
{
const int SIZE = 3;
for (int i = 0; i < SIZE; i++)
{
    b[i] = a[i];
}

for (int i = 0; i < SIZE - 1; i++)
{
    for (int j = 0; j < SIZE - 1 - i; j++)
    {
        if (b[j] < b[j + 1])
        {
            int temp = b[j];
            b[j] = b[j + 1];
            b[j + 1] = temp;
        }
    }
}
}