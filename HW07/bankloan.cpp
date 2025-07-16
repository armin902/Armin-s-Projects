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
// Assignment: HW07
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

bool askLoan();
double askIncome();
double askAmount();
bool decideLoan(double in, double lo);



int main()
{
	bool result1 = askLoan();
	if (result1 == false)
	{
		cout << "Thanks for visiting the bank!";
		return 0;
	}

	double result2 = askAmount();
	double result3 = askIncome();
	bool result4 = decideLoan(result3, result2);


	return 0;
}



bool askLoan()
{
	do
	{
		string answer;
		cout << "Would you like to take out a loan?" << endl;
		cin >> answer;

		if ((answer == "Yes") || (answer == "Y") || (answer == "yes") || (answer == "y"))
		{
		return true;
		}
		else if ((answer == "No") || (answer == "N") || (answer == "no") || (answer == "n"))
		{
		return false;
		}
		else
		cout << "Invalid choice; please enter yes or no." << endl;
	} while (true);
}


double askAmount()
{
	do
	{
		
		double loan;
		cout << "How much would you like to borrow?" << endl;
		cin >> loan;

		if (loan >= 0)
		{
			return loan;
		}
		else
		{
			cout << "Invalid, please enter a positive number." << endl;
		}
	} while (true);
}



double askIncome()
{
	do
	{
		double income;
		cout << "What is your yearly income?" << endl;
		cin >> income;

		if (income >= 0)
		{
			return income;
		}
		else
		{
			cout << "Invalid, please enter a positive number." << endl;
		}
	} while (true);
}



bool decideLoan(double in, double lo)
{
	if (in <= 10000.0) 
	{
		cout << fixed << setprecision(0);
		cout << "Sorry! Your loan request for $" << lo << " has been rejected.";
		return false;
	}
	else if (in >= 100000.0)
	{
		cout << fixed << setprecision(0);
		cout << "Congratulations! Your loan request for $" << lo << " has been accepted!";
		return true;

	}
	else if ((in > 10000.0) && (in < 100000.0))
	{
		if (in * 5.0 >= lo)
		{
			cout << fixed << setprecision(0);
			cout << "Congratulations! Your loan request for $" << lo << " has been accepted!";
			return true;
		}
		else if (in * 5.0 < lo)
		{
			cout << fixed << setprecision(0);
			cout << "Sorry! Your loan request for $" << lo << " has been rejected.";
			return false;
		}
	}

}



/*
Would you like to take out a loan?
maybe
Invalid choice; please enter yes or no.
Would you like to take out a loan?
no
Thanks for visiting the bank!
*/



/*
Would you like to take out a loan?
Yes
How much would you like to borrow?
123050
What is your yearly income?
23000
Sorry! Your loan request for $123050 has been rejected.
*/