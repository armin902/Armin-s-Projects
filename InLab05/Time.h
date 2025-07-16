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
// Assignment: Time.h of InLab05

#pragma once
#include <iostream>
using namespace std;
class Time {
public:
	// Constructors
	Time();
	Time(unsigned hours, unsigned minutes, char am_pm);
	// Functions to get the values of member
	unsigned getHours(); // Return the hour number
	unsigned getMinutes(); // Return the minute number
	char getAMorPM(); // Return the AM PM value
	// Set, Display as discussed in class
	void Set(unsigned hours, unsigned minutes, char am_pm);//Set the time
	void Display(); //Display the time
	// A convenient forward function
	void Forward(int minutes); //Forward the time
	void operator+=(int minutes);
	Time operator+(int minutes);
	Time operator=(string timeStr);
private:
	unsigned myHours, myMinutes;
	char myAMorPM;
};


/*
Time object nowTime is now 11:30 P.M.

Forward 20 Minutes.
Time object nowTime is now 11:50 P.M.

Forward 20 Minutes.
Time object nowTime is now 12:10 A.M.

Forward 500 Minutes.
Time object nowTime is now 8:30 A.M.

Forward 330 Minutes.
Time object nowTime is now 2:00 P.M.

Create a testTime object, which forwards nowTime by 30 Minutes. (Testing the + operator.)
Time object testTime is now 2:30 P.M.

Time object nowTime is now 2:00 P.M.

nowTime should NOT be changed from the + operator.

Assigning string "0840A" to nowTime.
Time object nowTime is now 8:40 A.M.

Assigning string "1200P" to nowTime.
Time object nowTime is now 12:00 P.M.
*/