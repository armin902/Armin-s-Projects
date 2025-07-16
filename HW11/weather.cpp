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
// Assignment: HW11
//


#include <iostream>
#include <iomanip>
using namespace std;

struct WeatherInfo
{
    int totalRainFall;
    int lowTemp;
    int highTemp;
};

void displayAverages(WeatherInfo year[], int nQuarter);
void computeMinMax(WeatherInfo year[], int nQuarter, double& highest, double& lowest, int& highQuarter, int& lowQuarter);


int main()
{ 
    const int SIZE = 4;
    WeatherInfo quarter[SIZE];

    cout << "Enter the total rainfall, low & high temperatures:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Quarter " << (i + 1) << ": ";
        cin >> quarter[i].totalRainFall;
        cin >> quarter[i].lowTemp;
        cin >> quarter[i].highTemp;

        while ((quarter[i].lowTemp >= quarter[i].highTemp) || (quarter[i].lowTemp < -100) || (quarter[i].lowTemp > 140) || (quarter[i].highTemp < -100) || (quarter[i].highTemp > 140))
        {
            cout << "ERROR: Temperature range: -100 through 140" << endl;
            cout << right << setw(43) << "Low temperature <= high temperature." << endl;
            cout << right << setw(53) << "Please enter low and high temperatures again: ";
            cin >> quarter[i].lowTemp;
            cin >> quarter[i].highTemp;
        }
    }
    cout << endl;

    displayAverages(quarter, SIZE);
   
}



void displayAverages(WeatherInfo year[], int nQuarter)
{
    double rTotal = 0; 
    double rAvg;
    double tTotal = 0;
    double tAvg;
    double highest, lowest;
    int highQuarter, lowQuarter;

    for (int i = 0; i < nQuarter; i++)
    {
        rTotal += year[i].totalRainFall;
    }

    cout << "Total Rainfall: " << rTotal << endl;
    
    rAvg = rTotal / 4.0;

    cout << "Average Quarterly Rain: " << rAvg << endl;

    for (int i = 0; i < nQuarter; i++)
    {
        tTotal += year[i].lowTemp + year[i].highTemp;
    }

    tAvg = tTotal / 8.0;

    cout << "Average Quarterly Average Temperature: " << fixed << setprecision(2) << tAvg << endl;

    computeMinMax(year, nQuarter, highest, lowest, highQuarter, lowQuarter);

    
}
 


void computeMinMax(WeatherInfo year[], int nQuarter, double& highest, double& lowest, int& highQuarter, int& lowQuarter)
{
    highest = year[0].highTemp;
    highQuarter = 1, lowQuarter = 1;
    for (int count = 1; count < nQuarter; count++)
    {
        if (year[count].highTemp > highest)
        {
            highest = year[count].highTemp;
            highQuarter = count + 1;
        }
    }

    lowest = year[0].lowTemp;
    for (int count = 1; count < nQuarter; count++)
    {
        if (year[count].lowTemp < lowest)
        {
            lowest = year[count].lowTemp;
            lowQuarter = count + 1;
        }
    }

    cout << fixed << setprecision(0) << "Highest Temperature: " << highest << " " << "(Quarter " << highQuarter << ")" << endl;
    cout << fixed << setprecision(0) << "Lowest Temperature: " << lowest << " " << "(Quarter " << lowQuarter << ")" << endl;
}




/*
Enter the total rainfall, low & high temperatures:
Quarter 1: 8 12 80
Quarter 2: 15 43 120
Quarter 3: 5 30 45
Quarter 4: 23 50 30
ERROR: Temperature range: -100 through 140
       Low temperature <= high temperature.
       Please enter low and high temperatures again: 34 50

Total Rainfall: 51
Average Quarterly Rain: 12.75
Average Quarterly Average Temperature: 51.75
Highest Temperature: 120 (Quarter 2)
Lowest Temperature: 12 (Quarter 1)
*/