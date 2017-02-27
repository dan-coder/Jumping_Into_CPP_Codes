// enum or enumerated type is a new vaiable type
// you create with a fiexed enumerated list of values

#include <iostream>

using namespace std;

int main()
{

	// enum is the new type, RainbowColor is the name of type
	// enum can actually have values starting from 0.
	enum RainbowColor
	{
		RC_RED, // enum value of 0
		RC_ORANGE, // enum value of 1
		RC_YELLOW, // enum value of 2
		RC_GREEN, // enum value of 3
		RC_BLUE, // enum value of 4
		RC_INDIGO, // enum value of 5
		RC_VIOLET // enum value of 6
	};

	// you can also define your own enum values
/*	enum RainbowColor
	{
		RC_RED = 1, 
		RC_ORANGE = 3,
		RC_YELLOW = 5,
		RC_GREEN = 7,
		RC_BLUE = 9,
		RC_INDIGO = 11,
		RC_VIOLET = 13
	};
*/


	RainbowColor choosen_color = RC_YELLOW;

	switch (choosen_color)
	{
		case RC_RED:
			cout << "Red color\n";
			break;

		case RC_ORANGE:
			cout << "Orange color\n";
			break;

		case RC_YELLOW:
			cout << "Yellow color\n";
			break;

		case RC_GREEN:
			cout << "Green color\n";
			break;

		case RC_BLUE:
		cout << "Blue color\n";
		break;

		case RC_INDIGO:
			cout << "Indigo color\n";
			break;

		case RC_VIOLET:
			cout << "Violet color\n";
			break;

		default:
			cout << "No color\n";
			break;
	};
}