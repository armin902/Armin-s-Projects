// LabProj3.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// Assignment: LabProj3


#include <iostream>
#include <cstring>
// You need to create LabProj3.h and write the prototypes of the two functions in it
#include "LabProj3.h"
using namespace std;
// functions to test your program, DO NOT modify
void testFind(const char* targetStr, const char* subStr)
{
	int res = myFind(targetStr, subStr);
	if (res <= 0) {
		cout << "String " << "\"" << subStr << "\"" << " does not appear in string"
			<< "\"" << targetStr << "\"" << endl;
	}
	else {
		cout << "String " << "\"" << subStr << "\"" << " found in string "
			<< "\"" << targetStr << "\"" << " at " << res << " locations" << endl;
	}
}
// functions to test your program, DO NOT modify
void testImproveFormat(char* targetStr)
{
	cout << "The string before improving the format: [" << targetStr << "]" <<
		endl;
	improveFormat(targetStr);
	cout << "The string after format improvement: [" << targetStr << "]" << endl;
	cout << endl;
}
int main()
{
	testFind("abbbfd", "abc");
	testFind("Begining", "in");
	testFind("MyComputer", "put");
	testFind("Download", "o");
	testFind("friendship", "ind");
	testFind("oooooo", "oo");
	cout << endl << endl;
	char str1[] = "Ode to Joy";
	testImproveFormat(str1);
	char str2[] = "Welcome to my class! ";
	testImproveFormat(str2);
	char str3[] = " Remove the redundant blank spaces in this string.";
		testImproveFormat(str3);
	//cout << endl << endl;
}