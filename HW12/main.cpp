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
// Assignment: HW12

#include <iostream>
#include "Dice.h"
using namespace std;
double outcome_probability(Dice dice[], const int SIZE, double sum);
int main()
{
	unsigned seed = (unsigned)time(NULL);
	srand(seed);
	const int SIZE = 3;
	Dice throws[3];
	int dice1Count, dice2Count, dice3Count;
	double total = 0;
	double total2 = 0;
	double sum;
	double decide = 0;

	cout << "The dice initial face-up numbers are: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << throws[i].getSideUp() << " ";
	}
	cout << endl;
	cout << "The theoretical probability of 3 dice tosses with the same number =" << endl << "0.02777" << endl;
	for (int i = 0; i < 1000000; i++)
	{
		throws[0].toss();
		throws[1].toss();
		throws[2].toss();
		dice1Count = throws[0].getSideUp();
		dice2Count = throws[1].getSideUp();
		dice3Count = throws[2].getSideUp();

		if (dice1Count == dice2Count && dice1Count == dice3Count && dice2Count == dice3Count)
		{
			total += 1;
		}
	}
	cout << "The experimental probability of 3 dices having the same number = " << endl << total / 1000000.0 << endl << endl;

	while (true)
	{
		cout << "Please enter a number (3 - 18) for the sum of 3 dice tosses" << endl;
		cout << "Enter 0 to stop the experiment: ";
		cin >> sum;
		while ((sum < 3 || sum > 18) && sum != 0)
		{
			cout << "Invalid outcome value! Try again." << endl;
			cout << "Please enter a number (3 - 18) for the sum of 3 dice tosses" << endl;
			cout << "Enter 0 to stop the experiment: ";
			cin >> sum;
		}

		if (sum == 0)
		{
			break;
		}

		decide = outcome_probability(throws, SIZE, sum);
		cout << "The experimental probability of 3 dice tosses with an outcome of " << sum << " = " << endl << decide << endl << endl;
	} 
	return 0;
}



double outcome_probability(Dice dice[], const int SIZE, double sum)
{
	int dice1Count, dice2Count, dice3Count;
	double total = 0;
	unsigned seed = (unsigned)time(NULL);
	srand(seed);

			for (int i = 0; i < 1000000; i++)
			{
				dice[0].toss();
				dice[1].toss();
				dice[2].toss();
				dice1Count = dice[0].getSideUp();
				dice2Count = dice[1].getSideUp();
				dice3Count = dice[2].getSideUp();

				if (dice1Count + dice2Count + dice3Count == sum)
				{
					total += 1;
				}
			}
			return total / 1000000.0;
}



/*
The dice initial face-up numbers are: 5 2 6
The theoretical probability of 3 dice tosses with the same number =
0.02777
The experimental probability of 3 dices having the same number =
0.02808

Please enter a number (3 - 18) for the sum of 3 dice tosses
Enter 0 to stop the experiment: 19
Invalid outcome value! Try again.
Please enter a number (3 - 18) for the sum of 3 dice tosses
Enter 0 to stop the experiment: 2
Invalid outcome value! Try again.
Please enter a number (3 - 18) for the sum of 3 dice tosses
Enter 0 to stop the experiment: 5
The experimental probability of 3 dice tosses with an outcome of 5 =
0.027848

Please enter a number (3 - 18) for the sum of 3 dice tosses
Enter 0 to stop the experiment: 12
The experimental probability of 3 dice tosses with an outcome of 12 =
0.115632

Please enter a number (3 - 18) for the sum of 3 dice tosses
Enter 0 to stop the experiment: 10
The experimental probability of 3 dice tosses with an outcome of 10 =
0.124705

Please enter a number (3 - 18) for the sum of 3 dice tosses
Enter 0 to stop the experiment: 0
*/