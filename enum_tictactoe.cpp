#include <iostream>

// enum type for a Tic Tac Toe game

using namespace std;

int main()
{
	enum TicTacToeSquare
	{
		TTTS_BLANK,
		TTTS_O,
		TTTS_X
	};

	// declaring enum variable
	// enum_name variable_name = constant_name;

	TicTacToeSquare board_position = TTTS_O;

	if ( board_position == TTTS_O)
	{
		/* do some code */
		cout << "Board position " << board_position << " (TTTS_O) was filled\n";
	}
}
