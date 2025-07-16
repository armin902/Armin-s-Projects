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
// Assignment: HW06
//


#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int rows, columns;
    int columnsCounter = 1;
    int rowsCounter = 1;
    int i;


    cout << "Let's build a multiplication table!" << endl;
    cout << "Enter the number of rows (1 to 12 inclusive): ";
    cin >> rows;

    do
    {
        if ((rows < 1) || (rows > 12))
        {
            cout << "Invalid input, try again!" << endl;
            cout << "Enter the number of rows (1 to 12 inclusive): ";
            cin >> rows;
        }
    } while ((rows < 1) || (rows > 12));

    cout << "Enter the number of columns (1 to 12 inclusive): ";
    cin >> columns;
    cout << endl;

    do
    {
        if ((columns < 1) || (columns > 12))
        {
            cout << "Invalid input, try again!" << endl;
            cout << "Enter the number of rows (1 to 12 inclusive): ";
            cin >> columns;
        }
    } while ((columns < 1) || (columns > 12));

    cout << setw(8);


    while (columns >= columnsCounter)
    {
        cout << columnsCounter << setw(4);
        columnsCounter++;
    }
    cout << endl;

    while (rows >= rowsCounter)
    {
        cout << setw(4) << rowsCounter;
        for (i = 1; i <= columns; i++)
        {
            cout << setw(4) << (i * rowsCounter);
        }
        cout << endl;
        rowsCounter++;
    }

    return 0;
}



/*
Let's build a multiplication table!
Enter the number of rows (1 to 12 inclusive): 0
Invalid input, try again!
Enter the number of rows (1 to 12 inclusive): 13
Invalid input, try again!
Enter the number of rows (1 to 12 inclusive): 8
Enter the number of columns (1 to 12 inclusive): 5

       1   2   3   4   5
   1   1   2   3   4   5
   2   2   4   6   8  10
   3   3   6   9  12  15
   4   4   8  12  16  20
   5   5  10  15  20  25
   6   6  12  18  24  30
   7   7  14  21  28  35
   8   8  16  24  32  40
*/