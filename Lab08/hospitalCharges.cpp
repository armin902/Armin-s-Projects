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
// Assignment: e.g. Lab08
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

char getPatientType();
double patientCharges(int days, double roomchrg, double med, double serv);       //In-patient
double patientCharges(double med, double serv);			//Outpatient
int getDaysInHospital();
double getChargesRate(string chargesItem);



int main()
{
	cout << "This program will compute patient hospital charges." << endl;
	cout << "What was the patient type?" << endl;
	char patientType = getPatientType();

	if (patientType == 'I')
	{
		int days = getDaysInHospital();
		double roomchrg = getChargesRate("Daily room rate ");	      
		double med = getChargesRate("Medication charges ");
		double serv = getChargesRate("Lab fees and other service ");
		cout << endl;
		cout << "The total charges are $" << fixed << setprecision(2) << patientCharges(days, roomchrg, med, serv) << endl;
		return 0;
	}



	else if (patientType == 'O')
	{
		double med = getChargesRate("Medication charges ");
		double serv = getChargesRate("Lab fees and other service ");
		cout << endl;
		cout << "The total charges are $" << fixed << setprecision(2) << patientCharges(med, serv) << endl;
		return 0;
	}



}

char getPatientType()
{
	char decision;
	cout << "Impatient or Outpatient? (I or O): ";
	cin >> decision;

	while ((decision != 'I') && (decision != 'O'))
	{

		if (decision == 'I')
		{
		return decision;
		}
		else if (decision == 'O')
		{
		return decision;
		}
		else
		{
		cout << "Invalid input, enter either I or O." << endl;
		cout << "Impatient or Outpatient? (I or O): ";
		cin >> decision;
		}
	}
}


int getDaysInHospital() 
{
	int days;
	cout << "Number of days in the hospital: ";
	cin >> days;

	while (days < 0) 
	{
		cout << "Number of days in the hospital must be zero or more." << endl;
		cout << "Please enter again: ";
		cin >> days;
	}
	return days;
}


double getChargesRate(string chargesItem) 
{
	double charges;
	cout << chargesItem << "$: ";
	cin >> charges;

	while (charges < 0) 
	{
			cout << chargesItem << "must be zero or more." << endl;
			cout << "Please enter again: ";
			cin >> charges;
	}
	return charges;
}


double patientCharges(int days, double roomchrg, double med, double serv) 
{
	double charges;
	charges = (days * roomchrg) + med + serv;
	return charges;
}

double patientCharges(double med, double serv) 
{
	double charges;
	charges = med + serv;
	return charges;
}




/*
This program will compute patient hospital charges.
What was the patient type?
Impatient or Outpatient? (I or O): I
Number of days in the hospital: -4
Number of days in the hospital must be zero or more.
Please enter again: 9
Daily room rate $: -2
Daily room rate must be zero or more.
Please enter again: 14
Medication charges $: 224.11
Lab fees and other service $: 320.25

The total charges are $670.36
*/


/*
This program will compute patient hospital charges.
What was the patient type?
Impatient or Outpatient? (I or O): O
Medication charges $: -21
Medication charges must be zero or more.
Please enter again: 54.20
Lab fees and other service $: -22
Lab fees and other service must be zero or more.
Please enter again: 120.45

The total charges are $174.65
*/