#include <iostream>

// an array can be accessed by initializing a variable to 0 and incrementing
// that variable until that variable is a big as the length of the array
// (a pattern that exactly fits the model of a for loop)

using namespace std;

int main()
{
	int array [ 11 ] [ 11 ]; // declares an array that looks like a chessboard

	for ( int i = 0; i < 11; i++ ) // this for loop is to initialize the array adding values to each element
	{
		for ( int j = 0; j < 11; j++ )
		{
			array[ i ] [ j ] = i * j;
		}
	}
	for (int i = 0; i < 11; i++) // this loop is to print out the values of the array and leave a space between them
	{
		cout << "Multiplication table for: " << i << endl;
		for (int j = 0; j < 11; j++)
		{
			cout << array[i][j];
			cout << " ";
		}
	cout << endl << endl; // this statement is to make a new line after completion of the nested loop
	} 
}
