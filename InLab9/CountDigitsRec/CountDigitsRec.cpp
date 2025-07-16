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
// Section: <001>
// Assignment: CountDigitsRec
//

// driver for project 5
#include <iostream>
using namespace std;

int CountDigits(int n) {
    if (n < 10)
    {
        return 1;
    }
    else
    {
        n = CountDigits(n / 10) + 1;
    }
}

void TestCountDigits(int n) {
    cout << "The number " << n << " has " << CountDigits(n) << " digit(s)" << endl;
}

int main()
{
    TestCountDigits(12345);
    TestCountDigits(3);
    TestCountDigits(857);
    TestCountDigits(1985);

    return 0;
}


/*
The number 12345 has 5 digit(s)
The number 3 has 1 digit(s)
The number 857 has 3 digit(s)
The number 1985 has 4 digit(s)
*/