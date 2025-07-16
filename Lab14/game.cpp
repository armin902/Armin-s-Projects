/// Academic Integrity Affidavit:
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
// Assignment: Lab14

#include <iostream>
#include <random>
#include <ctime>
using namespace std;
bool entryChecker(int guess, int randomNumber, int upperLimit);
int main()
{
	srand((unsigned)time(nullptr));
	int upperLimit, guess;
	bool decision;
	cout << "Enter the upper limit of the guessing number: ";
	cin >> upperLimit;
	
	while (upperLimit <= 0)
	{
		cout << "Invalid input, the upper limit must be greater than 0!" << endl;
		cout << "Enter the upper limit of the guessing number: ";
		cin >> upperLimit;
	}
	cout << endl;
	int randomNumber = rand() % upperLimit + 1;


	do
	{
		cout << "Enter your guess between 1 and " << upperLimit << ": ";
		cin >> guess;
		decision = entryChecker(guess, randomNumber, upperLimit);
	} while (decision != true);

	return 0;
}


bool entryChecker(int guess, int randomNumber, int upperLimit)
{
	if (guess > randomNumber && guess < upperLimit)
	{
		cout << "Too high, try again." << endl << endl;
		return false;
	}

	else if (guess < randomNumber)
	{
		cout << "Too low, try again." << endl << endl;
		return false;
	}

	else if (guess < 1 || guess > upperLimit)
	{
		cout << "You have entered an invalid number!" << endl << endl;
		return false;
	}

	else if (guess == randomNumber)
	{
		cout << "Congrats! you guessed the correct number, " << randomNumber;
		return true;
	}
}


/*
Enter the upper limit of the guessing number: -1
Invalid input, the upper limit must be greater than 0!
Enter the upper limit of the guessing number: 150

Enter your guess between 1 and 150: 20
Too low, try again.

Enter your guess between 1 and 150: 50
Too low, try again.

Enter your guess between 1 and 150: 70
Too high, try again.

Enter your guess between 1 and 150: 60
Too low, try again.

Enter your guess between 1 and 150: 65
Too low, try again.

Enter your guess between 1 and 150: 68
Too high, try again.

Enter your guess between 1 and 150: 67
Congrats! you guessed the correct number, 67
*/