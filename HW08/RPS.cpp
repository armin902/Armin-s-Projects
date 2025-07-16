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
// Assignment: HW08

#include <iostream>
#include <cstdlib>
using namespace std;
int getUserSelection();
void determineWinner(int uChoice, int cChoice, int& uScore, int& cScore);
int main()
{
unsigned seed = (unsigned)time(NULL);
srand(seed);


int pScore = 0;
int cScore = 0;
	int playerChoice;
	int computerChoice;

	do
	{
		playerChoice = getUserSelection();
		computerChoice = rand() % 3 + 1;
		determineWinner(playerChoice, computerChoice, pScore, cScore);
	} while (playerChoice != -1);


	if (pScore > cScore)
	{
		cout << "The user wins with a score of " << pScore << " to " << cScore << endl;
		return 0;
	}

	if (cScore > pScore)
	{
		cout << "The computer wins with a score of " << cScore << " to " << pScore << endl;
		return 0;
	}

	if (pScore == cScore)
	{
		cout << "The game is tie with user score of " << pScore << " and computer score of " << cScore << endl;
		return 0;
	}
	return 0;
}



int getUserSelection()
{
	int choice;
	cout << "Make your choice (1: rock, 2: paper, 3: scissors, -1: quit): ";
	cin >> choice;
	while (true)
	{
	switch (choice)
		{
	case 1: return choice;
			break;
	case 2: return choice;
			break;
	case 3:	return choice;
			break;
	case -1: cout << "GAME OVER" << endl;
			return choice;
			break;
	default: cout << "Invalid selection. Enter 1, 2, 3, or -1: ";
		cin >> choice;
		}
	}
}



void determineWinner(int uChoice, int cChoice, int& pScore, int& cScore)
{
	if (uChoice == 1)
	{
		cout << "User chooses rock, ";
	}
	else if (uChoice == 2)
	{
		cout << "User chooses paper, ";
	}
	else if (uChoice == 3)
	{
		cout << "User chooses scissors, ";
	}

	if (cChoice == 1 && uChoice != -1)
	{
		cout << "computer chooses rock" << endl;
	}
	else if (cChoice == 2 && uChoice != -1)
	{
		cout << "computer chooses paper" << endl;
	}
	else if (cChoice == 3 && uChoice != -1)
	{
		cout << "computer chooses scissors" << endl;
	}


		if (uChoice == cChoice) 
		{
			cout << "TIE. NO WINNER" << endl;
		}
		else if ((uChoice == 1 && cChoice == 2) || (uChoice == 2 && cChoice == 3) || (uChoice == 3 && cChoice == 1))
		{
			cout << "COMPUTER WINS" << endl;
			cScore += 1;
			return;
		}
		else if ((uChoice == 2 && cChoice == 1) || (uChoice == 3 && cChoice == 2) || (uChoice == 1 && cChoice == 3)) 
		{
			cout << "USER WINS" << endl;
			pScore += 1;
			return;
		}


}


/*
Make your choice (1: rock, 2: paper, 3: scissors, -1: quit): -1
GAME OVER
The game is tie with user score of 0 and computer score of 0
*/

/*
Make your choice (1: rock, 2: paper, 3: scissors, -1: quit): 2
User chooses paper, computer chooses rock
USER WINS
Make your choice (1: rock, 2: paper, 3: scissors, -1: quit): 5
Invalid selection. Enter 1, 2, 3, or -1: 3
User chooses scissors, computer chooses paper
USER WINS
Make your choice (1: rock, 2: paper, 3: scissors, -1: quit): 2
User chooses paper, computer chooses rock
USER WINS
Make your choice (1: rock, 2: paper, 3: scissors, -1: quit): 1
User chooses rock, computer chooses paper
COMPUTER WINS
Make your choice (1: rock, 2: paper, 3: scissors, -1: quit): -1
GAME OVER
The user wins with a score of 3 to 1
*/