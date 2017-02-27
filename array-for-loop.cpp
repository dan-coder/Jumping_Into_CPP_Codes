#include <iostream>

// an array can be accessed by initializing a variable to 0 and incrementing
// that variable until that variable is a big as the length of the array
// (a pattern that exactly fits the model of a for loop)

using namespace std;

int main()
{
	int array [ 8 ] [ 8 ]; // declares an array that looks like a chessboard

	for ( int i = 0; i < 8; i++ ) // this for loop is to initialize the array adding values to each element
	{
		for ( int j = 0; j < 8; j++ )
		{
			array[ i ] [ j ] = i * j;
		}
	}
	for (int i = 0; i < 8; i++) // this loop is to print out the values of the array and leave a space between them
	{
		for (int j = 0; j < 8; j++)
		{
			cout << array[i][j];
			cout << " ";
		}
	cout << endl; // this statement is to make a new line after completion of the nested loop
	} 
}
