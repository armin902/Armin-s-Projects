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
// Name: Armin Rejaie
// Section: 003L
// Assignment: HW09 (CashRegister)
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;
void obtainItemsAndCost(vector <string>& item, vector <double>& price);
void printReceipt(vector <string>& item, vector <double>& price);
int main()
{
	vector <string> item;
	vector <double> price;
	int itemCounter = 0;
	int priceCounter = 0;
	
	obtainItemsAndCost(item, price);
	cout << endl;
	printReceipt(item, price);
	
	return 0;


}



void obtainItemsAndCost(vector <string>& item, vector <double>& price)
{
	string items;
	double prices;
	while (items != "Done")
	{
		cout << "What is the name of the item? ";
		getline(cin, items);
		if (items != "Done")
		{
			item.push_back(items);
			cout << "What is the price? ";
			cin >> prices;
			cin.ignore(1);
			price.push_back(prices);
		}
	}

	return;
}


void printReceipt(vector <string>& item, vector <double>& price)
{
	const int SIZE = item.size();
	double subTotal = 0;
	double tax = 0;

	for (int i = 0; i < SIZE; i++)
	{
		cout << left << setw(15) << item.at(i) << right << fixed << setprecision(2) << "$" << price.at(i) << endl;
	}
	cout << "----------------------" << endl;

	for (int i = 0; i < SIZE; i++)
	{
		subTotal += price.at(i);
	}

	cout << "Subtotal" << right << setw(8) << fixed << setprecision(2) << "$" << subTotal << endl;
	
	tax = subTotal * 0.06;

	cout << "Tax (6%)" << right << setw(8) << fixed << setprecision(2) << "$" << tax << endl;
	cout << "Total" << right << setw(11) << fixed << setprecision(2) << "$" << tax + subTotal << endl;
	return;

}




/*
What is the name of the item? Cheese
What is the price? 1.50
What is the name of the item? Milk
What is the price? 2.25
What is the name of the item? Eggs
What is the price? 1.25
What is the name of the item? Chicken
What is the price? 4.25
What is the name of the item? Done

Cheese         $1.50
Milk           $2.25
Eggs           $1.25
Chicken        $4.25
----------------------
Subtotal       $9.25
Tax (6%)       $0.55
Total          $9.80
*/