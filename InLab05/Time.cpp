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
// Assignment: Time.cpp of InLab05


#include "Time.h"
#include <string>
#include <iostream>
using namespace std;
// Set the objectfs data values.
void Time::Set(unsigned hours, unsigned minutes, char am_pm)
{
	if (hours >= 1 && hours <= 12 && minutes >= 0 && minutes <= 59 &&
		(am_pm == 'A' || am_pm == 'P'))
	{
		myHours = hours;
		myMinutes = minutes;
		myAMorPM = am_pm;
	}
	else
		cerr << "*** Can't set these values ***\n";
}
// Display the time represented by the object
void Time::Display()
{
	string minStr = (myMinutes == 0) ? "00" : to_string(myMinutes);
	cout << myHours << ':' << minStr << ' ' << myAMorPM << ".M." <<
		endl;
}
unsigned Time::getHours() {
	return myHours;
}
unsigned Time::getMinutes() {
	return myMinutes;
}
char Time::getAMorPM() {
	return myAMorPM;
}
void Time::Forward(int minutes)
{
	int totalMinutes = myMinutes + minutes;
	myMinutes = totalMinutes % 60;
	int hoursAdded = totalMinutes / 60;
	int nowHours = myHours + hoursAdded;
	int FlipAmPm = ((nowHours / 12) - (myHours / 12)) % 2;
	if (FlipAmPm == 1) {
		if (myAMorPM == 'A') {
			myAMorPM = 'P';
		}
		else {
			myAMorPM = 'A';
		}
	}
	myHours = nowHours % 12;
	if (myHours == 0) {
		myHours = 12;
	}
}
Time::Time() {
	myHours = 12;
	myMinutes = 0;
	myAMorPM = 'A';
}
Time::Time(unsigned hours, unsigned minutes, char am_pm) {
	if (hours >= 1 && hours <= 12 && minutes >= 0 && minutes <= 59 &&
		(am_pm == 'A' || am_pm == 'P'))
	{
		myHours = hours;
		myMinutes = minutes;
		myAMorPM = am_pm;
	}
	else
	{
		cerr << "*** Can't set these values ***\n";
		Time(); // Set to 12:00AM
	}
}

void Time::operator+=(int minutes)
{
	Forward(minutes);
	return;
}

Time Time::operator+(int minutes)
{
	Time t(myHours, myMinutes, myAMorPM);
	t.Forward(minutes);
	return t;
}

Time Time::operator=(string timeStr)
{
	if (timeStr.length() != 5) 
	{
		cout << "INVALID!";
	}

	unsigned hours = (timeStr[0] - '0') * 10 + (timeStr[1] - '0');
	unsigned minutes = (timeStr[2] - '0') * 10 + (timeStr[3] - '0');
	char am_pm = timeStr[4];


	if (hours < 1 || hours > 12 || minutes < 0 || minutes > 59 || (am_pm != 'A' && am_pm != 'P')) {
		return *this;
	}

	myHours = hours;
	myMinutes = minutes;
	myAMorPM = am_pm;

	return *this;
}

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