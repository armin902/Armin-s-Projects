// LabProj2.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
// Assignment: LabProj2
//


#include <iostream>
using namespace std;
void profitStrategy(int days[], const int SIZE);
int main()
{
	const int SIZE = 12;
	int days[SIZE];
	cout << "Please type the 12-day price history of the stock: " << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> days[i];
		cin.ignore(1);
	}
	profitStrategy(days, SIZE);

    return 0;
}

void profitStrategy(int days[], const int SIZE)
{
    double money = 1000;
    double maxProfit = -1000;
    int buyDay = 0;
    int sellDay = 0;

    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = i + 3; j < SIZE; j++)
        {
            double shares = money / days[i];
            double shareMoney = shares * days[j];
            double profit = shareMoney - money;

            if (profit > maxProfit)
            {
                maxProfit = profit;
                buyDay = i + 1;
                sellDay = j + 1;
            }
        }
    }

	cout << "Max Profit: " << maxProfit << endl;
	cout << "Best Strategy: buy on day " << buyDay << ", sell on day " << sellDay << ".";
}

/*
Please type the 12-day price history of the stock:
100 20 50 75 10 5 25 30 60 150 20 10
Max Profit: 29000
Best Strategy: buy on day 6, sell on day 10.
*/