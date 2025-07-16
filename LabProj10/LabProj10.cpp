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
// Assignment: LabProj10.cpp
//


#include <iostream>
#include "Timer.h"
using namespace std;
int calculate(int north, int east);

int calculate(int north, int east)
{
	if (north == 0 || east == 0)
	{
		return 1;
	}
	else
	{
		return calculate(north - 1, east) + calculate(north, east - 1);
	}

}


int main()
{
	char decision = 'y';
	Timer first;
	int north;
	int east;
	int combinations;
	string processTime = "Process Timer";
	while (decision == 'y' || decision == 'Y')
	{
		cout << "How many points north of A is B? ";
		cin >> north;
		cout << "How many points east of A is B? ";
		cin >> east;
		first.start();
		combinations = calculate(north, east);
		cout << "There are " << combinations << " northeast paths between A and B." << endl;
		first.stop();
		first.show();
		cout << endl;
		first.getReset();
		cout << "Enter y or Y to continue the next example or any other letter to exist: ";
		cin >> decision;
	}
	return 0;
}

/*
How many points north of A is B? 2
How many points east of A is B? 3
There are 10 northeast paths between A and B.
Process Timer
-------------------------------
Elapsed Time: 0.002s

Enter y or Y to continue the next example or any other letter to exist: y
How many points north of A is B? 12
How many points east of A is B? 14
There are 9657700 northeast paths between A and B.
Process Timer
-------------------------------
Elapsed Time: 0.101s

Enter y or Y to continue the next example or any other letter to exist: y
How many points north of A is B? 16
How many points east of A is B? 16
There are 601080390 northeast paths between A and B.
Process Timer
-------------------------------
Elapsed Time: 5.789s

Enter y or Y to continue the next example or any other letter to exist: s
*/