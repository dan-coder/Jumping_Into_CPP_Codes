// switch case with if-else comparison

#include <iostream>

using namespace std;

void playgame()
{}

void loadgame()
{}

void playmultiplayer()
{}

int main()
{
	int input;

	cout << "1. Play game\n";
	cout << "2. Load game\n";
	cout << "3. Play multiplayer\n";
	cout << "4. Exit\n";
	cout << "Selection: \n";
	cin >> input;

	while (input > 4 )
	{
		cout << "Select one of the following options: \n";
		cout << "\n";
		cout << "1. Play game\n";
		cout << "2. Load game\n";
		cout << "3. Play multiplayer\n";
		cout << "4. Exit\n";

		cin >> input;
	}

	if (1 == input)
	{
		playgame();
		cout << "Starting playgame function.\n";
	}
	else if (2 == input)
	{
		loadgame();
		cout << "Starting loadgame function.\n";
	}
	else if (3 == input)
	{
		playmultiplayer();
		cout << "Starting multiplayer function.\n";
	}
	else if (4 == input)
	{
		cout << "Thanks for playing! Bye for now!\n";
	}
	else
	{
		cout << "Error, bad input, quitting\n";
	}

/*
		switch ( input )
		{
		case 1:
		playgame();
		cout << "Starting playgame function.\n";
		break;

		case 2:
		loadgame();
		cout << "Starting loadgame function.\n";
		break;

		case 3:
		playmultiplayer();
		cout << "Starting multiplayer function.\n";
		break;

		case 4:
		cout << "Thanks for playing! Bye for now!\n";
		break;

		default:
		cout << "Error, bad input, quitting\n";
		break;
		}
*/

}