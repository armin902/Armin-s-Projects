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
// Assignment: HW09 (Voting)

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

string voteReceiver(string vote[]);
string voteResult(string choice, int selection[]);

int main()
{
	string vote[] = { "Tim" , "Satya" , "Sunder" , "Elon" , "quit"};
	int selection[] = { 0, 0, 0, 0, 0 };
	string choice, result;

	while (choice != "quit")
	{
	choice = voteReceiver(vote);
	result = voteResult(choice, selection);
	}

	if (selection[0] > selection[1] && selection[0] > selection[2] && selection[0] > selection[3])
	{
		cout << left << setw(7) << "Tim:" << right << setw(4) << selection[0] << setw(12) << "**Winner**" << endl;
		cout << left << setw(7) << "Satya:" << right << setw(4) << selection[1] << endl;
		cout << left << setw(7) << "Sunder:" << right << setw(4) << selection[2] << endl;
		cout << left << setw(7) << "Elon:" << right << setw(4) << selection[3] << endl;
		return 0;
	}

	else if (selection[1] > selection[0] && selection[1] > selection[2] && selection[1] > selection[3])
	{
		cout << left << setw(7) << "Tim:" << right << setw(4) << selection[0] << endl;
		cout << left << setw(7) << "Satya:" << right << setw(4) << selection[1] << setw(12) << "**Winner**" << endl;
		cout << left << setw(7) << "Sunder:" << right << setw(4) << selection[2] << endl;
		cout << left << setw(7) << "Elon:" << right << setw(4) << selection[3] << endl;
		return 0;
	}

	else if (selection[2] > selection[0] && selection[2] > selection[1] && selection[2] > selection[3])
	{
		cout << left << setw(7) << "Tim:" << right << setw(4) << selection[0] << endl;
		cout << left << setw(7) << "Satya:" << right << setw(4) << selection[1] << endl;
		cout << left << setw(7) << "Sunder:" << right << setw(4) << selection[2] << setw(12) << "**Winner**" << endl;
		cout << left << setw(7) << "Elon:" << right << setw(4) << selection[3] << endl;
		return 0;
	}

	else if (selection[3] > selection[0] && selection[3] > selection[1] && selection[3] > selection[2])
	{
		cout << left << setw(7) << "Tim:" << right << setw(4) << selection[0] << endl;
		cout << left << setw(7) << "Satya:" << right << setw(4) << selection[1] << endl;
		cout << left << setw(7) << "Sunder:" << right << setw(4) << selection[2] << endl;
		cout << left << setw(7) << "Elon:" << right << setw(4) << selection[3] << setw(12) << "**Winner**" << endl;
		return 0;
	}


	cout << left << setw(7) << "Tim:" << right << setw(4) << selection[0] << endl;
	cout << left << setw(7) << "Satya:" << right << setw(4) << selection[1] << endl;
	cout << left << setw(7) << "Sunder:" << right << setw(4) << selection[2] << endl;
	cout << left << setw(7) << "Elon:" << right << setw(4) << selection[3] << endl;
	return 0;


}



string voteReceiver(string vote[])
{
	string choice;
	cout << "Who do you want to vote for (Tim, Satya, Sunder, or Elon)? ";
	cin >> choice;
	
	while (choice != "Tim" && choice != "Satya" && choice != "Sunder" && choice != "Elon" && choice != "quit")
		{
		cout << "That is an invalid choice." << endl;
		cout << "Who do you want to vote for (Tim, Satya, Sunder, or Elon)? ";
		cin >> choice;
		}

	if (choice == "Tim")
	{
	return vote[0];
	}

	else if (choice == "Satya")
	{
		return vote[1];
	}

	else if (choice == "Sunder") 
	{
		return vote[2];
	}

	else if (choice == "Elon")
	{
		return vote[3];
	}

	else if (choice == "quit")
	{
		return vote[4];
	}
}


string voteResult(string choice, int selection[])
{
	if (choice == "Tim")
	{
		selection[0] += 1;
		cout << "One vote has been added to Tim's count";
		cout << endl;
		return choice;
	}

	else if (choice == "Satya")
	{
		selection[1] += 1;
		cout << "One vote has been added for Satya's count";
		cout << endl;
		return choice;
	}

	else if (choice == "Sunder")
	{
		selection[2] += 1;
		cout << "One vote has been added for Sunder's count";
		cout << endl;
		return choice;
	}

	else if (choice == "Elon")
	{
		selection[3] += 1;
		cout << "One vote has been added for Elon's count";
		cout << endl;
		return choice;
	}

	else if (choice == "quit")
	{
		selection[4] += 1;
		return choice;
	}
}



/*
Who do you want to vote for (Tim, Satya, Sunder, or Elon)? Tom
That is an invalid choice.
Who do you want to vote for (Tim, Satya, Sunder, or Elon)? Tim
One vote has been added to Tim's count
Who do you want to vote for (Tim, Satya, Sunder, or Elon)? Sunder
One vote has been added for Sunder's count
Who do you want to vote for (Tim, Satya, Sunder, or Elon)? Elon
One vote has been added for Elon's count
Who do you want to vote for (Tim, Satya, Sunder, or Elon)? Satya
One vote has been added for Satya's count
Who do you want to vote for (Tim, Satya, Sunder, or Elon)? Satya
One vote has been added for Satya's count
Who do you want to vote for (Tim, Satya, Sunder, or Elon)? Elon
One vote has been added for Elon's count
Who do you want to vote for (Tim, Satya, Sunder, or Elon)? Elon
One vote has been added for Elon's count
Who do you want to vote for (Tim, Satya, Sunder, or Elon)? quit
Tim:      1
Satya:    2
Sunder:   1
Elon:     3  **Winner**
*/