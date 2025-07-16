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
// Assignment: Lab07
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int getInt(string prompt);
double getDouble(string prompt);    //Function prototypes
double calculateProfit(double arg1, double arg2, double arg3, double arg4, double arg5);

int main()
{


    int NS;
    double SP, SC, PP, PC;



    NS = getInt("Enter the number of shares purchased: ");
    PP = getDouble("Enter the purchase price: ");
    PC = getDouble("Enter the purchase commission: ");
    SP = getDouble("Enter the sale price: ");
    SC = getDouble("Enter the sale commission: ");
    calculateProfit(NS, SP, SC, PP, PC);
    return 0;

}


int getInt(string prompt)
{
    int value;
    cout << prompt;
    cin >> value;
    while (value < 0)
    {
        cout << "Invalid input!" << endl;
        cout << prompt;
        cin >> value;
    }
    return value;
}




double getDouble(string prompt)
{
    double dvalue;
    cout << prompt;
    cin >> dvalue;
    while (dvalue < 0)
    {
        cout << "Invalid input!" << endl;
        cout << prompt;
        cin >> dvalue;
    }
    return dvalue;
}






double calculateProfit(double NS, double SP, double SC, double PP, double PC)
{
    double profit = ((NS * SP) - SC) - ((NS * PP) + PC);
    cout << "The profit on the stock was " << fixed << setprecision(2) << "$" << profit;
    return profit;
}



/*
Enter the number of shares purchased: 15
Enter the purchase price: 32.42
Enter the purchase commission: 82.50
Enter the sale price: 100.00
Enter the sale commission: 10.22
The profit on the stock was $920.98
*/