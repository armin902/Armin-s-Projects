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
// Assignment: e.g. Lab06
//

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
	int limit, guessNumber, userGuess;
	unsigned seed = (unsigned)time(NULL);
	srand(seed);

	do {
		cout << "Enter the upper limit of the guessing number: ";
		cin >> limit;														//Initialize the upper limit
			if (limit < 1)
			{
			cout << "Invalid input, the upper limit must be greater than 0!" << endl << endl;
			}
	} while (limit < 1);


	guessNumber = rand() % limit + 1;		//Create the random number


	cout << endl;
	cout << "Enter your guess in between 1 and " << limit << "." << endl;
	cin >> userGuess;
	
	while ((userGuess > guessNumber) || (userGuess < guessNumber))
	{
		
		if (userGuess < 1 || userGuess > limit)
		{
			cout << "You have entered an invalid number!" << endl;
			cout << "Enter your guess in between 1 and " << limit << "." << endl;
			cin >> userGuess;
		}
		else if (userGuess > guessNumber)
			{
				cout << "Too high, try again." << endl;
				cout << "Enter your guess in between 1 and " << limit << "." << endl;
				cin >> userGuess;
			}
		else 
				{
					cout << "Too low, try again." << endl;
					cout << "Enter your guess in between 1 and " << limit << "." << endl;
					cin >> userGuess;
				}
	}

	cout << "Congrats, you guessed the correct number, " << guessNumber << endl;
				return 0;
}


/*
Enter the upper limit of the guessing number: 0
Invalid input, the upper limit must be greater than 0!

Enter the upper limit of the guessing number: 108

Enter your guess in between 1 and 108.
52
Too high, try again.
Enter your guess in between 1 and 108.
40
Too low, try again.
Enter your guess in between 1 and 108.
45
Too low, try again.
Enter your guess in between 1 and 108.
46
Too low, try again.
Enter your guess in between 1 and 108.
48
Too high, try again.
Enter your guess in between 1 and 108.
47
Congrats, you guessed the correct number, 47
*/