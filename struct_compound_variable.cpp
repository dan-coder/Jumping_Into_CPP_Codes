#include <iostream>

using namespace std;

int main()
{
	// compound type variable
	struct SpaceShip
	{
		int x_coordination;
		int y_coordination;
		string name;
	};

	// declare the variable
	SpaceShip my_ship;

	// use it
	my_ship.x_coordination = 40;
	my_ship.y_coordination = 40;
	my_ship.name = "USS Enterprise (NCC-1701-D)";
}