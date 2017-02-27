#include <iostream>

using namespace std;

/* Functions must be declared and defined prior to call them unless you use
   a Function Prototype */

// Function prototype for add (if it got a ; after declaration it is a prototype)
int add (int x, int y);

int main()
{
	int result = add(1,2);

	cout << "The result is: " << result << '\n';
	cout << "Adding 2 and 4 give us: " << add(3,4) << '\n';
}

int add (int x, int y) /* declaring the function (return type, function name,
						argument & argument type)*/
{
	return x + y; // defining the function
}