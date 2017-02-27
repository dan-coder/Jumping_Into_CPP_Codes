// Water Intake Calculator
// This programs calculate how much water intake
// should be consume for proper hydration.
//
// Formula: Body weight / 2 = ounces of water to consume daily

#include <iostream>

using namespace std;

int main()
{
	const int ounces = 2;
	double bodyWeight = 0.0;
	double dailyConsumption = 0.0;

	system("clear");

	cout << "Enter body weight: ";
	cin >> bodyWeight;
	cout << endl << endl;

	dailyConsumption = bodyWeight / ounces;

	cout << "Based on your body weight you should consume " << dailyConsumption << " oz of water daily." << endl; 
	cout << "Drink " << dailyConsumption << " oz of water daily to alkalize your body." << endl;
	cout << "By drinking " << dailyConsumption << " oz you will make your body less acidic and more hydrated." << endl;
	cout << endl << endl;
}
