#include<iostream>

using namespace std;

int main()
{
	int years, weeks, days, remdays, remdays2;
	cout << "Enter the number of days: ";
	cin >> days;
	years = days / 365;
	remdays = days % 365;
	weeks = remdays / 7;
	remdays2 = remdays % 7;
	cout << "The number of years = " << years << endl << "The number of weeks = " << weeks << endl << "The number of days = " << remdays2 << endl;
	return 0;
}
