//// Academic Integrity Affidavit:
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
// Name: Armin Rejaie
// Section: 003L
// Assignment: HW04 Receipt
//

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	string item1, item2, item3, item4;
	double item1C, item2C, item3C, item4C;
	double total;

	cout << "Enter names of 4 one-word (maximum 10 letters) items to purchase:" << endl;
	cin >> item1;
	cin >> item2;
	cin >> item3;
	cin >> item4;
	cout << "Enter their prices in US Dollars (<= $1,000):" << endl;
	cin >> item1C;
	cin >> item2C;
	cin >> item3C;
	cin >> item4C;
	cout << "+------------+---------+" << endl;
	cout << "|        Receipt       |" << endl;
	cout << "+------------+---------+" << endl;
	cout << setprecision(2) << fixed;
	cout << "|" << left << setw(12) << item1 << "|"
		<< "$" << right << setw(8) << item1C << "|" << endl;
	cout << "|" << left << setw(12) << item2 << "|"
		<< "$" << right << setw(8) << item2C << "|" << endl;
	cout << "|" << left << setw(12) << item3 << "|"
		<< "$" << right << setw(8) << item3C << "|" << endl;
	cout << "|" << left << setw(12) << item4 << "|"
		<< "$" << right << setw(8) << item4C << "|" << endl;
	cout << "+------------+---------+" << endl;
	
	total = item1C + item2C + item3C + item4C;
	cout << "|" << left << setw(12) << "TOTAL: $" << right << setw(10) << total << "|" << endl;
	cout << "+------------+---------+" << endl;
}

/*
Enter names of 4 one-word (maximum 10 letters) items to purchase:
Eggs
Milk
Butter
Sugar
Enter their prices in US Dollars (<= $1,000):
2.50
3.25
2.22
1.42
+------------+---------+
|        Receipt       |
+------------+---------+
|Eggs        |$    2.50|
|Milk        |$    3.25|
|Butter      |$    2.22|
|Sugar       |$    1.42|
+------------+---------+
|TOTAL: $          9.39|
+------------+---------+
*/