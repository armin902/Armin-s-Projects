// LabProj8.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// Assignment: LabProj8; table.cpp
//


#include <iostream>
#include <queue>
#include <string>
#include <iomanip>
using namespace std;

class Restaurant {
public:
	Restaurant(int small, int large)
	{
		totalSmall = small;
		totalLarge = large;
		occupiedSmall = 0;
		occupiedLarge = 0;
	}

	void checkoutLarge(string name)
	{
		if (occupiedLarge == 0)
		{
			cout << setw(41) << "No customer occupied any large table!" << endl << endl;
			return;
		}

		if (!largeQueue.empty())
		{
			largeQueue.pop(); 
			cout << setw(41) << "New large table seat(s) is available." << endl;
			cout << setw(18) << "Next customer " << name << " takes an available large table." << endl << endl;
		}
		else
		{
			occupiedLarge--;
			cout << setw(41) << "New large table seat(s) is available." << endl << endl;
		}
	}

	void checkoutSmall(string name)
	{
		if (smallQueue.empty() == true && occupiedSmall == 0)
		{
			cout << setw(41) << "No customer occupied any small table!" << endl << endl;
		}

		else if (smallQueue.empty() == false && occupiedSmall < totalSmall)
		{
			cout << setw(41) << "New small table seat(s) is available.";
			cout << setw(41) << "Next customer " << name << " takes an available small table" << endl << endl;
			occupiedSmall -= 1;
			smallQueue.pop();
		}

		else if (smallQueue.empty() == true && occupiedSmall < totalSmall)
		{
			cout << setw(41) << "New small table seat(s) is available" << endl << endl;
		}
	}

	void newSmall(string name)
	{
		if (occupiedSmall < totalSmall)
		{
			cout << setw(17) << "New customer " << name << " takes an available small table." << endl << endl;
			occupiedSmall += 1;
		}

		else if (occupiedSmall == totalSmall && occupiedLarge == totalLarge)
		{
			cout << setw(17) << "New customer " << name << " enters the small waiting line." << endl << endl;
			smallQueue.push(name);
		}

		else 
		{
			cout << setw(17) << "New customer " << name << " takes an available large table." << endl << endl;
			occupiedLarge += 1;
		}
	}

	void newLarge(string name)
	{
		if (occupiedLarge < totalLarge)
		{
			cout << setw(17) << "New customer " << name << " takes an available large table." << endl << endl;
			occupiedLarge += 1;
		}

		else if (occupiedLarge == totalLarge)
		{
			cout << setw(17) << "New customer " << name << " enters the large waiting line." << endl << endl;
			largeQueue.push(name);
		}
	}

	void info()
	{
		cout << setw(18) << "Small tables: " << occupiedSmall << " / " << totalSmall << endl;
		cout << setw(18) << "Large tables: " << occupiedLarge << " / " << totalLarge << endl;
		cout << setw(5) << smallQueue.size() << " customer(s) waiting for small table." << endl;
		cout << setw(5) << largeQueue.size() << " customer(s) waiting for large table." << endl << endl;
	}
		

private:
	int totalSmall, totalLarge;
	int occupiedSmall, occupiedLarge;
	queue<string> smallQueue, largeQueue;
};
int main()
{
	int smallTables = 0;
	int largeTables = 0;
	string command, type, name;
	cout << "Welcome to the Restaurant Table Management System." << endl;
	cout << "Enter the total number of large tables: ";
	cin >> largeTables;
	cout << "Enter the total number of small tables: ";
	cin >> smallTables;
	cout << endl;

	Restaurant restaurant(smallTables, largeTables);
	cin.ignore();
	while (true)
	{
		cout << "Enter Command: ";
		getline(cin, command);

		if (command == "checkout large")
		{
			restaurant.checkoutLarge(name);
		}
		else if (command == "checkout small")
		{
			restaurant.checkoutSmall(name);
		}

		else if (command.substr(0, 10) == "new small ")
		{
			name = command.substr(10);
			restaurant.newSmall(name);
		}

		else if (command.substr(0, 10) == "new large ")
		{
			name = command.substr(10);
			restaurant.newLarge(name);
		}

		else if (command == "info")
		{
			restaurant.info();
		}

		else
		{
			cout << setw(20) << "Invalid command!" << endl << endl;
		}
	}
}





/*
Welcome to the Restaurant Table Management System.
Enter the total number of large tables: 2
Enter the total number of small tables: 3

Enter Command: checkout large
	No customer occupied any large table!

Enter Command: checkout small
	No customer occupied any small table!

Enter Command: new large Edison
	New customer Edison takes an available large table.

Enter Command: new large Matt
	New customer Matt takes an available large table.

Enter Command: new large Luke
	New customer Luke enters the large waiting line.

Enter Command: info
	Small tables: 0 / 3
	Large tables: 2 / 2
	0 customer(s) waiting for small table.
	1 customer(s) waiting for large table.

Enter Command: checkout large
	New large table seat(s) is available.
	Next customer Luke takes an available large table.

Enter Command: checkout large
	New large table seat(s) is available.

Enter Command: info
	Small tables: 0 / 3
	Large tables: 1 / 2
	0 customer(s) waiting for small table.
	0 customer(s) waiting for large table.

Enter Command: checkout large
	New large table seat(s) is available.

Enter Command: checkout large
	No customer occupied any large table!

Enter Command: New large Todd
	Invalid command!

Enter Command: new small Andy
	New customer Andy takes an available small table.

Enter Command: new small Ken
	New customer Ken takes an available small table.

Enter Command: new small Dan
	New customer Dan takes an available small table.

Enter Command: new small Frank
	New customer Frank takes an available large table.

Enter Command: new small Will
	New customer Will takes an available large table.

Enter Command: info
	Small tables: 3 / 3
	Large tables: 2 / 2
	0 customer(s) waiting for small table.
	0 customer(s) waiting for large table.

Enter Command: new small Smith
	New customer Smith enters the small waiting line.

Enter Command: new large Mary
	New customer Mary enters the large waiting line.

Enter Command: info
	Small tables: 3 / 3
	Large tables: 2 / 2
	1 customer(s) waiting for small table.
	1 customer(s) waiting for large table.

Enter Command: checkout large
	New large table seat(s) is available.
	Next customer Mary takes an available large table.

Enter Command: testing invalid command
	Invalid command!

Enter Command: checkout Large
	Invalid command!

Enter Command: checkout Small Peter
	Invalid command!

Enter Command:
*/