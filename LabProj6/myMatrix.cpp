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
// Assignment: LabProj6 myMatrix.cpp
//

#include <iostream>
#include <iomanip>
#include "myMatrix.h"
using namespace std;
///////////////////////////////////////////////////////////////////////////////
// Functions that are already implemented by myself. Do not modify.
///////////////////////////////////////////////////////////////////////////////
void myMatrix::PrintMatrix(ostream& out) {
	int index = 0;
	for (unsigned i = 0; i < this->height; i++) {
		for (unsigned j = 0; j < this->width; j++) {
			out << setw(6) << this->myArrayPtr[index];
			index++;
		}
		out << endl;
	}
}
ostream& operator<<(ostream& out, myMatrix& matrix) {
	matrix.PrintMatrix(out);
	return out;
}
unsigned myMatrix::GetHeight() {
	return this->height;
}
unsigned myMatrix::GetWidth() {
	return this->width;
}
void myMatrix::SetEntry(unsigned i, unsigned j, int valueToSet) {
	this->myArrayPtr[(i * this->width) + j] = valueToSet;
}
///////////////////////////////////////////////////////////////////////////////
// Implement required member functions below
///////////////////////////////////////////////////////////////////////////////
myMatrix::myMatrix() {
	this->height = 1;
	this->width = 1;
	this->myArrayPtr = new int[1];
	this->myArrayPtr[0] = 0;
}
myMatrix::myMatrix(unsigned heightVal, unsigned widthVal, int* sourceArray) {
	this->height = heightVal;
	this->width = widthVal;
	this->myArrayPtr = new int[this->height * this->width];

	for (int i = 0; i < this->height * this->width; i++)
	{
		myArrayPtr[i] = sourceArray[i];
	}
}

void myMatrix::Concatenate(myMatrix& matrixToConcatenate) {
	if (this->height != matrixToConcatenate.height) {
		cout << "Error: Matrices must have the same height for concatenation.\n";
		return;
	}

	unsigned newWidth = width + matrixToConcatenate.width;
	int* newArrayPtr = new int[height * newWidth];

	for (unsigned i = 0; i < this->height; ++i) {
		for (unsigned j = 0; j < width; ++j) {
			newArrayPtr[i * newWidth + j] = this->myArrayPtr[i * width + j];
		}
	}

	for (unsigned i = 0; i < matrixToConcatenate.height; ++i) {
		for (unsigned j = 0; j < matrixToConcatenate.width; ++j) {
			newArrayPtr[i * newWidth + (width + j)] = matrixToConcatenate.myArrayPtr[i * matrixToConcatenate.width + j];

		}
	}

	delete[] myArrayPtr;
	myArrayPtr = newArrayPtr;
	width = newWidth;
}

///////////////////////////////////////////////////////////////////////////////
// Implement the overloading function for += below

myMatrix myMatrix::operator+=(myMatrix& matrixToConcatenate)
{

	if (this->height == matrixToConcatenate.height && this->width == matrixToConcatenate.width)
	{
		int combHeight = this->height + matrixToConcatenate.height;
		int combWidth = this->width + matrixToConcatenate.width;
		int matrixSize = combWidth * combHeight;

		for (int i = 0; i < matrixSize; i++)
		{
			this->myArrayPtr[i] = this->myArrayPtr[i] + matrixToConcatenate.myArrayPtr[i];
		}
		return *this;
	}
	else
	{
		cout << "ERROR! Cannot add matrices with different dimensions!" << endl;
		return *this;
	}
}


// Implement the "big three" below
///////////////////////////////////////////////////////////////////////////////
// Add your "big three" implementation...

myMatrix::~myMatrix()
{
	delete[] myArrayPtr;
}

myMatrix::myMatrix(const myMatrix& origMatrix)
{
	height = origMatrix.height;
	width = origMatrix.width;
	int matrixSize = height * width;
	myArrayPtr = new int[matrixSize];
	
	for (int i = 0; i < matrixSize; i++)
	{
		myArrayPtr[i] = origMatrix.myArrayPtr[i];
	}
}

myMatrix myMatrix::operator=(const myMatrix& origMatrix)
{
	int ogCap = origMatrix.height * origMatrix.width;
	int thisCap = height * width;

	if (this != &origMatrix) {
		height = origMatrix.height;
		width = origMatrix.width;
		if (thisCap != ogCap) {
			delete[] myArrayPtr;
			thisCap = ogCap;
			myArrayPtr = new int[thisCap];
		}
		for (int i = 0; i < thisCap; i++)
			myArrayPtr[i] = origMatrix.myArrayPtr[i];
	}
	return *this;
}

/*
The following shows a matrix created using the default constructor:

	 0


The following shows a matrix created using the second constructor:

	 2     3     4     5     6
	 3     4     5     6     2
	 1     3     5     7     9
	 2     4     6     8    10


Trying to concatenate two matrices. Matrix A:

	 2     3     4     5     6
	 3     4     5     6     2
	 1     3     5     7     9
	 2     4     6     8    10


Matrix B:

	 0     1
	 1     0
	 1     1
	 0     0


After concatenating B to the right of A. A becomes:

	 2     3     4     5     6     0     1
	 3     4     5     6     2     1     0
	 1     3     5     7     9     1     1
	 2     4     6     8    10     0     0


Testing the copy constructor.
The following shows a Matrix C, created from copying the Matrix B above:

	 0     1
	 1     0
	 1     1
	 0     0


Now, we make some changes to matrix C. It becomes:

	 0     5
	 1     0
	 4     1
	 0     0


We print matrix B in the following. Note if the implementation is correct,
changing matrix C should not affact matrix B!

	 0     1
	 1     0
	 1     1
	 0     0


Testing the assignment operator.
The following shows a Matrix D, which is assigned with the Matrix B above:

	 0     1
	 1     0
	 1     1
	 0     0


Now, we make some changes to matrix D. It becomes:

	 0     1
	 1    10
	 1     1
	28     0


We print matrix B in the following. Note if the implementation is correct,
changing matrix D should not affact matrix B!

	 0     1
	 1     0
	 1     1
	 0     0


Adding matrix D to matrix B using the += operator.
After this, the matrix B becomes:
	 0     2
	 2    10
	 2     2
	28     0


Testing compatibility issue using += operator
Matrix A dimension: 4 x 7 and Matrix B dimension: 4 x 2
Perform A += B and failed!
ERROR! Cannot add matrices with different dimensions!
Matrix A remains the same after the failed operation
	 2     3     4     5     6     0     1
	 3     4     5     6     2     1     0
	 1     3     5     7     9     1     1
	 2     4     6     8    10     0     0
*/