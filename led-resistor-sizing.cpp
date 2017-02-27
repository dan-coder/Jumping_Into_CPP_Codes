// An LED requires the right ammount of
// voltage and current, other wise excesive
// current might blow or damage the LED.
//
// This program allows you to calculate
// the size resistor required for an LED

#include <iostream>
#include <string>

using namespace std;

int main()
{
	double inpvolt, ledvf, ledif, ohms;

	system("clear"); // this function pass commands to the shell

	cout << "An LED requires the right ammount of voltage and current.\n";
	cout << "Otherwise excesive current might blow or damage the LED.\n";

	cout << "\n";

	cout << "This program allows you to calculate the size resistor required for an LED.\n";
	cout << "\n";

	cout << "Let's start by looking out the Data Sheet of the LED.\n";
	cout << "Find the forward voltage (Vf) and forward current (Vi).\n";
	cout << "Find the input voltage of your circuit (V).\n";
	cout << "\n";

	cout << "What is the circuit input voltage?\n";
	cin >> inpvolt;

	cout << "What is the LED forward voltage (Vf)?\n";
	cin >> ledvf;
	cout << "What is the LED forward current (If)?\n";
	cin >> ledif;

	ohms = (inpvolt - ledvf) / (ledif);

	// system("clear");
	cout << "\n";
	cout << "For a circuit of " << inpvolt << " input volts (" << inpvolt << "V), an LED of " << ledvf << " forward voltage (Vf) and " << ledif << " of forward current (Vi), the size of the resistor will be:\n";
	cout << "\n";
	cout << ohms << " ohms\n";
	cout << "\n";
}