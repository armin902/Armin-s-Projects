// LabProj1.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// Assignment: LabProj1

#include <iostream>
#include <cstdlib>
using namespace std;
bool nimGame(char decision, int objects);
int computerY(int removal, int objects);
int computerN(int removal2, int objects);
int main()
{
	srand((unsigned)time(nullptr));
	int objects;
	char decision;
	bool result;
	cout << "Would you like to go first (y for yes and other input for no)? ";
	cin >> decision;
	while ((decision != 'y') && (decision != 'n'))
	{
		cout << "Invalid input! Please type either y for yes or n for no." << endl << endl;
		cout << "Would you like to go first (y for yes and other input for no)? ";
		cin >> decision;
	}

	cout << "Enter the initial number of objects. ";
	cin >> objects;
	while (objects < 2)
	{
		cout << "The intial number of objects must have at least 2 objects!" << endl;
		cout << "Enter the initial number of objects. ";
		cin >> objects;
	}
	cout << endl;
	
	result = nimGame(decision, objects);
	
	if (result == true)
	{
		cout << "Move accepted. You win. Congratulations!";
	}

	else if (result == false)
	{
		cout << "The computer wins. Better luck next time!";
	}

	return 0;
}

bool nimGame(char decision, int objects)
{	
	int removal = 1;
	int tracker = objects - 1;
	int cpuSelection = 0;
	if (decision == 'y')
	{
		do
		{
			cout << "It is your turn. Enter the number of objects to remove (1-" << tracker << "): ";
			cin >> removal;
			while ((removal > objects) || (removal < 1) || (removal > tracker))
			{
				cout << "Invalid move. Enter the number of objects to remove (1-" << tracker << "): ";
				cin >> removal;
			}
			objects -= removal;
			if (objects == 0)
			{
				return true;
			}
			cout << "Move accepted. The number of objects remains: " << objects << endl << endl;

			cpuSelection = computerY(removal, objects);
			objects -= cpuSelection;
			cout << "It is the computer's turn. The computer removes " << cpuSelection << " objects." << endl;
			if (objects == 0)
			{
				return false;
			}
			cout << "The number of objects remains: " << objects << endl << endl;
			removal *= 2;
			tracker = cpuSelection * 2;

		} while (objects != 0);


	}
	else if (decision == 'n')
	{
		int tracker = objects - 1;
		int removal2 = 1;
		do
		{
			cpuSelection = computerN(removal2, objects);
			objects -= cpuSelection;
			cout << "It is the computer's turn. The computer removes " << cpuSelection << " objects." << endl;
			if (objects == 0)
			{
				return false;
			}
			cout << "The number of objects remains: " << objects << endl << endl;
			tracker = 2 * cpuSelection;
			cout << "It is your turn. Enter the number of objects to remove (1-" << tracker << "): ";
			cin >> removal2;
			while ((removal2 > tracker) || (removal2 < 1) || (removal2 > objects))
			{
				cout << "Invalid move. Enter the number of objects to remove (1-" << tracker << "): ";
				cin >> removal2;
			}
			objects -= removal2;
			if (objects == 0)
			{
				return true;
			}
			cout << "Move accepted. The number of objects remains: " << objects << endl << endl;
		} while (objects != 0);
	}
}

int computerY(int removal, int objects)
{
	if (objects < removal)
	{
		return objects;
	}
	else
	{
		return rand() % removal + 1;
	}
}

int computerN(int tracker, int objects)
{
	if (objects < tracker)
	{
		return objects;
	}
	else
	{
		return rand() % objects + 1;
	}
}



/*
Would you like to go first (y for yes and other input for no)? y
Enter the initial number of objects. 22

It is your turn. Enter the number of objects to remove (1-21): 9
Move accepted. The number of objects remains: 13

It is the computer's turn. The computer removes 8 objects.
The number of objects remains: 5

It is your turn. Enter the number of objects to remove (1-16): 6
Invalid move. Enter the number of objects to remove (1-16): 5
Move accepted. You win. Congratulations!
*/